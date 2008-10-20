/* 
 *  Copyright (c) 2002-2008 The TenDRA Project <http://www.tendra.org/>.
 *  All rights reserved.
 * 
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 * 
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *     this list of conditions and the following disclaimer in the documentation
 *     and/or other materials provided with the distribution.
 *  3. Neither the name of The TenDRA Project nor the names of its contributors
 *     may be used to endorse or promote products derived from this software
 *     without specific, prior written permission.
 * 
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS
 *  IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *  PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 *  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 *  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * $Id$
 * 
 */


/*
 * Automatically generated by lexi version 2.0
 */

#ifndef LEXI_GENERATED_HEADER_lexi_lct__INCLUDED
#define LEXI_GENERATED_HEADER_lexi_lct__INCLUDED


#include <stdio.h>
#include "lctsyntax.h"

extern FILE* lct_file;
extern char lct_token_buff [];
extern int crt_lct_token ;
extern int saved_lct_token ;
extern lct_parse_tree global_lct_parse_tree ;

extern struct lexi_lct_state lct_lexer_state;
extern NStringT lct_token_nstring;


/*
     PARSER MACROS
*/

#define CURRENT_LCT_TERMINAL	crt_lct_token
#define ADVANCE_LCT_LEXER		crt_lct_token = lexi_lct_read_token(&lct_lexer_state)
#define SAVE_LCT_LEXER(T)       (saved_lct_token = crt_lct_token,\
                                  crt_lct_token = (T))
#define RESTORE_LCT_LEXER          (crt_lct_token = saved_lct_token)
#include <stdbool.h>

/*
 * This struct holds state for the lexer; its representation is
 * private, but present here for ease of allocation.
 */
struct lexi_lct_state {
	int (*zone_function)(struct lexi_lct_state *);

	/*
	 * Lexi's buffer is a simple stack.
	 */
	int buffer[2];
	int buffer_index;
};

/* Read a character */
int lexi_lct_readchar(struct lexi_lct_state *state);

/* Push a character to lexi's buffer */
void lexi_lct_push(struct lexi_lct_state *state, const int c);

/* Pop a character from lexi's buffer */
int lexi_lct_pop(struct lexi_lct_state *state);

/* Flush lexi's buffer */
void lexi_lct_flush(struct lexi_lct_state *state);

#ifndef LEXI_EOF
#define LEXI_EOF 256
#endif

enum lexi_lct_groups {
	lexi_lct_group_alpha = 0x1,
	lexi_lct_group_alphanum = 0x2,
	lexi_lct_group_white = 0x40
};

/* true if the given character is present in the given group */
bool lexi_lct_group(enum lexi_lct_groups group, int c);

/* Identify a keyword */
int lexi_lct_keyword(const char *identifier, int notfound);

/* Identify a token */
int lexi_lct_read_token(struct lexi_lct_state *state);

/* Initialise a lexi_lct_state structure */
void lexi_lct_init(struct lexi_lct_state *state);

#endif


