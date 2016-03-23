/* $Id$ */

/*
 * Copyright 2002-2011, The TenDRA Project.
 * Copyright 1997, United Kingdom Secretary of State for Defence.
 *
 * See doc/copyright/ for the full copyright terms.
 */

/*
 * lexer.c - SID lexical analyser.
 *
 * This file implements the support functions for the SID lexical analyser to
 * be called from the code generated by lexi. One of the reasons this has been
 * ported to use lexi is to provide an example use from a different perspective
 * (as Sid has a well-abstracted stream system) which will help clarify features
 * during lexi's forthcoming API change - particularly passing opaque pointers.
 *
 * Any changes to the syntax of SID identifiers should be made to the language
 * specifc lexical analyser files as well.
 */

#include <assert.h>
#include <stddef.h>
#include <ctype.h>

#include <exds/cstring.h>
#include <exds/dalloc.h>

#include <shared/check.h>
#include <shared/error.h>

#include "lexer.h"

struct lexi_state lexi_current_state ;

/*
 * These are global until lexi supports passing opaque pointers, which is
 * planned during its forthcoming API change.
 */
LexerStreamT *lexer_stream;
LexT *lexer_token;

/*
 * Externally visible functions
 */

void
lexer_init(LexerStreamT *stream, IStreamT *istream)
{
	istream_assign(&stream->istream, istream);
	lexer_stream = stream;
	lexer_token = &stream->token;
	lexi_init(&lexi_current_state);
	lexer_next_token(stream);
}

void
lexer_close(LexerStreamT *stream)
{
	istream_close(&stream->istream);
}

const char *
lexer_stream_name(LexerStreamT *stream)
{
	return istream_name(&stream->istream);
}

unsigned
lexer_stream_line(LexerStreamT *stream)
{
	return istream_line(&stream->istream);
}

LexerTokenT
lexer_get_terminal(LexerStreamT *stream)
{
	return stream->token.t;
}

void
lexer_next_token(LexerStreamT *stream)
{
	lexer_token->t = lexi_read_token(&lexi_current_state);
	stream->token = *lexer_token;
}

NStringT *
lexer_string_value(LexerStreamT *stream)
{
	assert(stream->token.t == LEXER_TOK_IDENTIFIER
		|| stream->token.t == LEXER_TOK_BASIC);
	return &stream->token.u.string;
}

void
lexer_save_terminal(LexerStreamT *stream, LexerTokenT error_terminal)
{
	assert(stream->token.t != error_terminal);
	stream->saved_terminal = stream->token.t;
	stream->token.t        = error_terminal;
}

void
lexer_restore_terminal(LexerStreamT *stream)
{
	stream->token.t = stream->saved_terminal;
}


/*
 * Lexi interface wrappers.
 */

int
lexi_getchar(void)
{
	char c;
	IStreamT *istream;

	istream = &lexer_stream->istream;
	assert(istream);

	if (!istream_read_char(istream, &c)) {
		return LEXI_EOF;
	}

	return c;
}

/* TODO really we should add this ability to istream itself */
/*
Using the unreadchr provided by the lexi interface
static void
unread_char(int c)
{
assert(!lexer_unreadchar);

lexer_unreadchar = c;
}
 */

int
read_identifier(int c)
{
	IStreamT *istream;
	DStringT dstring;

	istream = &lexer_stream->istream;

	dstring_init(&dstring);
	for (;;) {
		dstring_append_char(&dstring, c);

		c = lexi_readchar(&lexi_current_state);
		if (c == LEXI_EOF) {
			error_posn(ERR_SERIOUS, istream_name(istream), (int) istream_line(istream),
				"end of file in identifier");
			return LEXER_TOK_EOF;
		}

		if (!lexi_group(lexi_group_identbody, c)) {
			lexi_push(&lexi_current_state, c);
			break;
		}
	}

	lexer_token->t = LEXER_TOK_IDENTIFIER;
	dstring_to_nstring(&dstring, &lexer_token->u.string);
	dstring_destroy(&dstring);

	return lexer_token->t;
}

int
read_basic(void)
{
	IStreamT *istream;
	DStringT dstring;
	int c;
	istream = &lexer_stream->istream;

	dstring_init(&dstring);
	for (;;) {
		c = lexi_readchar(&lexi_current_state);
		if (c == LEXI_EOF) {
			error_posn(ERR_SERIOUS, istream_name(istream), (int) istream_line(istream),
				"end of file in basic");
			return LEXER_TOK_EOF;
		}

		if (c == '\"') {
			break;
		}

		dstring_append_char(&dstring, c);
	}

	lexer_token->t = LEXER_TOK_BASIC;
	dstring_to_nstring(&dstring, &lexer_token->u.string);
	dstring_destroy(&dstring);

	return lexer_token->t;
}

int
read_builtin(void)
{
	IStreamT *istream;
	DStringT dstring;
	char *cstring;
	int c;

	istream = &lexer_stream->istream;

	dstring_init(&dstring);
	do {
		c = lexi_readchar(&lexi_current_state);
		if (c == LEXI_EOF) {
			error_posn(ERR_SERIOUS, istream_name(istream), (int) istream_line(istream),
				"end of file in builtin");
			return LEXER_TOK_EOF;
		}

		if (c == '%') {
			break;
		}

		dstring_append_char(&dstring, c);
	} while (lexi_group(lexi_group_builtin, c));

	if (c != '%') {
		error_posn(ERR_SERIOUS, istream_name(istream), (int) istream_line(istream),
			"illegal character '%C' in builtin, expecting '%%'", (void *) &c);

		/* abandon this token and move on */
		return lexi_read_token(&lexi_current_state);
	}

	cstring = dstring_destroy_to_cstring(&dstring);
	if (cstring_ci_equal(cstring, "types")) {
		lexer_token->t = LEXER_TOK_BLT_HTYPES;
	} else if (cstring_ci_equal(cstring, "terminals")) {
		lexer_token->t = LEXER_TOK_BLT_HTERMINALS;
	} else if (cstring_ci_equal(cstring, "productions")) {
		lexer_token->t = LEXER_TOK_BLT_HPRODUCTIONS;
	} else if (cstring_ci_equal(cstring, "entry")) {
		lexer_token->t = LEXER_TOK_BLT_HENTRY;
	} else {
		error_posn(ERR_FATAL, istream_name(istream), (int) istream_line(istream),
			"unknown builtin '%%%s%%'", cstring);
		UNREACHED;
	}

	DEALLOCATE(cstring);
	return lexer_token->t;
}

int
lexi_unknown_token(int c)
{
	IStreamT *istream;

	istream = &lexer_stream->istream;

	if (c == LEXI_EOF) {
		return LEXER_TOK_EOF;
	}

	error_posn(ERR_SERIOUS, istream_name(istream), (int) istream_line(istream),
		"illegal character '%C'", (void *) &c);

	/*
	 * We try to continue regardless as convenience to the user so that
	 * any further errors might possibly be identified.
	 */
	return lexi_read_token(&lexi_current_state);
}
