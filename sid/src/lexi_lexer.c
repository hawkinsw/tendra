
/*
 * Automatically generated by lexi version 2.0
 */


#include "lexi_lexer.h"

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>

/* LOOKUP TABLE */

typedef uint8_t lookup_type;
static lookup_type lookup_tab[257] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
	0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
	0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00
};

void lexi_push(struct lexi_state *state, const int c) {
	assert(state);
	assert(state->buffer_index < sizeof state->buffer / sizeof *state->buffer);
	state->buffer[state->buffer_index++] = c;
}

int lexi_pop(struct lexi_state *state) {
	assert(state);
	assert(state->buffer_index > 0);
	return state->buffer[--state->buffer_index];
}

void lexi_flush(struct lexi_state *state) {
	state->buffer_index = 0;
}

int lexi_readchar(struct lexi_state *state) {
	if(state->buffer_index) {
		return lexi_pop(state);
	}

	return lexi_getchar();
}

bool lexi_group(enum lexi_groups group, int c) {
	return lookup_tab[c] & group;
}


#include <string.h>
int lexi_keyword(const char *identifier, int notfound) {
	return notfound;
}
/* PRE-PASS ANALYSERS */

void lexi_init_state(struct lexi_state *state) {
	state->zone_function = lexi_read_token;
	state->buffer_index = 0;
}
/* ZONES PASS ANALYSER PROTOTYPES*/

/* MAIN PASS ANALYSERS */

/* MAIN PASS ANALYSER for zone global*/

int
lexi_read_token(struct lexi_state *state)
{
	start: {
		int c0 = lexi_readchar(state);
		if (lexi_group(lexi_group_white, c0)) goto start;
		switch (c0) {
			case '!': {
				return LEXER_TOK_IGNORE;
			}
			case '#': {
				int c1 = lexi_readchar(state);
				if (c1 == '#') {
					return LEXER_TOK_HANDLER_SEP;
				}
				lexi_push(state, c1);
				break;
			}
			case '$': {
				return LEXER_TOK_EMPTY;
			}
			case '%': {
				return read_builtin(c0);
			}
			case '&': {
				return LEXER_TOK_REFERENCE;
			}
			case '(': {
				return LEXER_TOK_OPEN_TUPLE;
			}
			case ')': {
				return LEXER_TOK_CLOSE_TUPLE;
			}
			case ',': {
				return LEXER_TOK_SEPARATOR;
			}
			case '-': {
				int c1 = lexi_readchar(state);
				if (c1 == '>') {
					return LEXER_TOK_ARROW;
				}
				lexi_push(state, c1);
				break;
			}
			case '/': {
				int c1 = lexi_readchar(state);
				if (c1 == '*') {
					return skip_bracketed_comment(c0, c1);
				} else if (c1 == '/') {
					return skip_singleline_comment(c0, c1);
				}
				lexi_push(state, c1);
				break;
			}
			case ':': {
				int c1 = lexi_readchar(state);
				if (c1 == ':') {
					return LEXER_TOK_SCOPEMARK;
				}
				lexi_push(state, c1);
				return LEXER_TOK_TYPEMARK;
			}
			case ';': {
				return LEXER_TOK_TERMINATOR;
			}
			case '<': {
				return LEXER_TOK_BEGIN_ACTION;
			}
			case '=': {
				return LEXER_TOK_DEFINE;
			}
			case '>': {
				return LEXER_TOK_END_ACTION;
			}
			case '?': {
				return LEXER_TOK_PRED_RESULT;
			}
			case '[': {
				return LEXER_TOK_BEGIN_SCOPE;
			}
			case ']': {
				return LEXER_TOK_END_SCOPE;
			}
			case '{': {
				return LEXER_TOK_BEGIN_RULE;
			}
			case '|': {
				int c1 = lexi_readchar(state);
				if (c1 == '|') {
					return LEXER_TOK_ALT_SEP;
				}
				lexi_push(state, c1);
				break;
			}
			case '}': {
				return LEXER_TOK_END_RULE;
			}
		}
		if (lexi_group(lexi_group_identstart, c0)) {
			return read_identifier(c0);
		}
		return lexi_unknown_token(c0);
	}
}


