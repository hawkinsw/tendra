/*
 * Copyright (c) 2002-2004, The Tendra Project <http://www.ten15.org/>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice unmodified, this list of conditions, and the following
 *    disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *
 *    		 Crown Copyright (c) 1997
 *
 *    This TenDRA(r) Computer Program is subject to Copyright
 *    owned by the United Kingdom Secretary of State for Defence
 *    acting through the Defence Evaluation and Research Agency
 *    (DERA).  It is made available to Recipients with a
 *    royalty-free licence for its use, reproduction, transfer
 *    to other parties and amendment for any purpose not excluding
 *    product development provided that any such use et cetera
 *    shall be deemed to be acceptance of the following conditions:-
 *
 *        (1) Its Recipients shall ensure that this Notice is
 *        reproduced upon any copies or amended versions of it;
 *
 *        (2) Any amended version of it shall be clearly marked to
 *        show both the nature of and the organisation responsible
 *        for the relevant amendment or amendments;
 *
 *        (3) Its onward transfer from a recipient to another
 *        party shall be deemed to be that party's acceptance of
 *        these conditions;
 *
 *        (4) DERA gives no warranty or assurance as to its
 *        quality or suitability for any purpose and DERA accepts
 *        no liability whatsoever in relation to any use to which
 *        it may be put.
 *
 * $TenDRA$
 */


/*** entry-list.h --- Identifier table entry list ADT.
 *
 ** Author: Steve Folkes <smf@hermes.mod.uk>
 *
 *** Commentary:
 *
 * See the file "entry-list.h" for more information.
 */

/****************************************************************************/

#ifndef H_ENTRY_LIST
#define H_ENTRY_LIST

#include "config.h"
#include "dalloc.h"
#include "entry.h"
#include "ostream.h"

/*--------------------------------------------------------------------------*/

typedef struct EntryListEntryT {
	struct EntryListEntryT     *next;
	EntryP			entry;
} EntryListEntryT, *EntryListEntryP;

typedef struct EntryListT {
	EntryListEntryP		head;
	EntryListEntryP	       *tail;
} EntryListT, *EntryListP;

typedef struct SaveListT {
	struct EntryListEntryT    **last_ref;
} SaveListT, *SaveListP;

/*--------------------------------------------------------------------------*/

void	entry_list_init(EntryListP);
void	entry_list_copy(EntryListP, EntryListP);
void	entry_list_add(EntryListP, EntryP);
void	entry_list_add_if_missing(EntryListP, EntryP);
BoolT	entry_list_contains(EntryListP, EntryP);
BoolT	entry_list_includes(EntryListP, EntryListP);
void	entry_list_intersection(EntryListP, EntryListP, EntryListP);
void	entry_list_unlink_used(EntryListP, EntryListP);
void	entry_list_append(EntryListP, EntryListP);
BoolT	entry_list_is_empty(EntryListP);
void	entry_list_save_state(EntryListP, SaveListP);
void	entry_list_restore_state(EntryListP, SaveListP);
void	entry_list_iter(EntryListP, void (*) (EntryP, void *), void *);
void	entry_list_iter_table(EntryListP, BoolT, void (*) (EntryP, void *),
	    void *);
void	entry_list_destroy(EntryListP);

void	write_entry_list(OStreamP, EntryListP);

/*--------------------------------------------------------------------------*/

#ifdef FS_FAST
#define entry_list_is_empty(e) ((e)->head == NIL (EntryListEntryP))
#endif /* defined (FS_FAST) */

#endif /* !defined (H_ENTRY_LIST) */
