/*
 * Automatically generated from the files:
 *	syntax.sid
 * and
 *	syntax.act
 * by:
 *	sid
 */

/* BEGINNING OF HEADER */

#define __SID_SPLIT
#line 87 "syntax.act"



/*
 * Copyright 2011, The TenDRA Project.
 * Copyright 1997-1998, United Kingdom Secretary of State for Defence.
 *
 * See doc/copyright/ for the full copyright terms.
 */

#include <stdio.h>

#include <shared/check.h>

#include <utility/config.h>
#include "c_types.h"

#include "exp_ops.h"
#include "hashid_ops.h"
#include "id_ops.h"
#include "type_ops.h"
#include <utility/error.h>
#include <utility/catalog.h>
#include <utility/buffer.h>
#include <utility/option.h>
#include <construct/access.h>
#include <construct/allocate.h>
#include <construct/assign.h>
#include <construct/basetype.h>
#include <construct/cast.h>
#include <construct/chktype.h>
#include <construct/class.h>
#include <parse/constant.h>
#include <construct/construct.h>
#include <construct/convert.h>
#include <construct/declare.h>
#include <construct/derive.h>
#include <output/dump.h>
#include <construct/exception.h>
#include <construct/expression.h>
#include <construct/function.h>
#include <parse/hash.h>
#include <construct/identifier.h>
#include <construct/initialise.h>
#include <construct/inttype.h>
#include <construct/label.h>
#include <parse/preproc.h>
#include <parse/lex.h>
#include <parse/literal.h>
#include <construct/member.h>
#include <construct/namespace.h>
#include <parse/parse.h>
#include <parse/pragma.h>
#include <parse/predict.h>
#include <parse/preproc.h>
#include <construct/redeclare.h>
#include <construct/rewrite.h>
#include <construct/statement.h>
#include <parse/symbols.h>
#include <construct/template.h>
#include <construct/tokdef.h>
#include <construct/token.h>
#include <construct/typeid.h>
#include <construct/variable.h>


/*
    These are the aliases for the compound types used in the parser.
*/

typedef LIST ( EXP ) SID_LIST_EXP ;


/*
    The function declarations are included at this point so that the
    type definitions are in scope.
*/

#include <syntax/syntax.h>


#line 96 "syntax3.c"

void
ZRrelational_Hexpression(EXP *ZO922)
{
	EXP ZI922;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRshift_Hexpression (&ZIe);
		ZR923 (ZIe, &ZI922);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO922 = ZI922;
}

void
ZRfor_Hend_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255: case 298:
	case 324: case 347:
		{
			EXP ZIa;
			EXP ZIb;

			ZRexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIb) = make_exp_stmt ( (ZIa) ) ;
#line 151 "syntax3.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: bind_temporary */
			{
#line 817 "syntax.act"

    (ZIe) = bind_temporary ( (ZIb) ) ;
#line 159 "syntax3.c"
			}
			/* END OF ACTION: bind_temporary */
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 171 "syntax3.c"
			}
			/* END OF ACTION: exp_none */
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRand_Hexpression(EXP *ZO910)
{
	EXP ZI910;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRmaxmin_Hexpression (&ZIe);
		ZR911 (ZIe, &ZI910);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO910 = ZI910;
}

void
parse_exp(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRassignment_Hexpression (&ZIe);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	{
		/* BEGINNING OF ACTION: error_syntax */
		{
#line 1345 "syntax.act"

    /* Syntax errors */
    ERROR err = ERR_lex_parse ( crt_token ) ;
    report ( crt_loc, err ) ;
    have_syntax_error = 1 ;
#line 239 "syntax3.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: exp_none */
		{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 247 "syntax3.c"
		}
		/* END OF ACTION: exp_none */
	}
ZL0:;
	*ZOe = ZIe;
}

void
ZRtype_Hqualifier(BASE_TYPE *ZObt, TYPE *ZOt, CV_SPEC *ZOcv)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;
	CV_SPEC ZIcv;

	switch (CURRENT_TERMINAL) {
	case 98: case 124:
		{
			ZRcv_Hqualifier (&ZIcv);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 274 "syntax3.c"
			}
			/* END OF ACTION: btype_none */
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 282 "syntax3.c"
			}
			/* END OF ACTION: type_none */
		}
		break;
	case 2: case 25: case 97: case 102:
	case 104: case 106: case 110: case 111:
	case 114: case 115: case 118: case 121:
	case 122: case 123: case 156: case 185:
	case 286: case 299:
		{
			ZRtype_Hspecifier (&ZIbt, &ZIt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: cv_none */
			{
#line 895 "syntax.act"
 (ZIcv) = cv_none ; 
#line 302 "syntax3.c"
			}
			/* END OF ACTION: cv_none */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZObt = ZIbt;
	*ZOt = ZIt;
	*ZOcv = ZIcv;
}

void
ZR1078(IDENTIFIER *ZId, SID_LIST_EXP *ZOq)
{
	SID_LIST_EXP ZIq;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 64: case 65: case 69:
	case 71: case 78: case 85: case 116:
	case 170: case 206: case 210: case 255:
		{
			ZRinitialiser_Hlist (*ZId, &ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: list_exp_null */
			{
#line 412 "syntax.act"

    (ZIq) = NULL_list ( EXP ) ;
#line 349 "syntax3.c"
			}
			/* END OF ACTION: list_exp_null */
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOq = ZIq;
}

void
ZR951(BASE_TYPE *ZI947, TYPE *ZI948, CV_SPEC *ZI949, DECL_SPEC *ZI950, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 77:
		{
			/* BEGINNING OF ACTION: declare_id_empty */
			{
#line 1174 "syntax.act"

    printf("In define_func\n");
    IGNORE empty_decl ( (*ZI950), NULL_type, (*ZI947), (*ZI948), (*ZI949), last_lex_token, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
    have_type_specifier = 0 ;
#line 382 "syntax3.c"
			}
			/* END OF ACTION: declare_id_empty */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 391 "syntax3.c"
			}
			/* END OF ACTION: exp_none */
		}
		break;
	case 1: case 2: case 4: case 65:
	case 78:
		{
			TYPE ZIt;
			DECL_SPEC ZIds;
			TYPE ZIs;
			IDENTIFIER ZIid;

			/* BEGINNING OF ACTION: dspec_complete */
			{
#line 1133 "syntax.act"

    /* Complete a declaration specifier and a type */
    (ZIds) = complete_dspec ( (*ZI950), (*ZI947), (*ZI948), (*ZI949) ) ;
    (ZIt) = complete_pre_type ( (*ZI947), (*ZI948), (*ZI949), 0 ) ;
    have_type_specifier = 0 ;
#line 412 "syntax3.c"
			}
			/* END OF ACTION: dspec_complete */
			ZRdeclarator (ZIt, &ZIs, &ZIid);
			ZR824 (ZI947, &ZIt, &ZIds, &ZIs, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 426 "syntax3.c"
			}
			/* END OF ACTION: exp_none */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR824(BASE_TYPE *ZIbt, TYPE *ZIt, DECL_SPEC *ZIds, TYPE *ZIs, IDENTIFIER *ZIid)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZId;
		int ZIb;
		EXP ZIa;

		/* BEGINNING OF ACTION: is_function */
		{
#line 1418 "syntax.act"

    (ZI0) = function_params ( (*ZIs) ) ;
#line 460 "syntax3.c"
		}
		/* END OF ACTION: is_function */
		if (!ZI0)
			goto ZL2;
		/* BEGINNING OF ACTION: define_func */
		{
#line 1167 "syntax.act"

    printf("In define_func\n");
    (ZId) = make_func_decl ( (*ZIds), (*ZIs), (*ZIid), 1 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 473 "syntax3.c"
		}
		/* END OF ACTION: define_func */
		/* BEGINNING OF ACTION: function_begin */
		{
#line 857 "syntax.act"

    (ZIb) = in_class_defn ;
    in_class_defn = 0 ;
    in_function_defn++ ;
    really_in_function_defn++ ;
    begin_function ( (ZId) ) ;
#line 485 "syntax3.c"
		}
		/* END OF ACTION: function_begin */
		/* BEGINNING OF INLINE: 826 */
		{
			switch (CURRENT_TERMINAL) {
			case 126:
				{
					EXP ZIasm;

					ZRasm_Hfunction_Hattributes (&ZIasm);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
				}
				break;
			default:
				{
					EXP ZIasm;

					/* BEGINNING OF ACTION: exp_none */
					{
#line 431 "syntax.act"

    (ZIasm) = NULL_exp ;
#line 511 "syntax3.c"
					}
					/* END OF ACTION: exp_none */
				}
				break;
			}
		}
		/* END OF INLINE: 826 */
		ZRfunction_Hbody (&ZIa);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: function_end */
		{
#line 865 "syntax.act"

    IGNORE end_function ( (ZId), (ZIa) ) ;
    in_class_defn = (ZIb) ;
    in_function_defn-- ;
    really_in_function_defn-- ;
#line 532 "syntax3.c"
		}
		/* END OF ACTION: function_end */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 540 "syntax3.c"
		}
		/* END OF ACTION: rescan_token */
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	case 126:
		{
			EXP ZIasm;

			ZRasm_Hfunction_Hattributes (&ZIasm);
			switch (CURRENT_TERMINAL) {
			case 77:
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	case 36: case 42: case 77:
		{
			IDENTIFIER ZId;
			EXP ZIa;

			/* BEGINNING OF ACTION: declare_id */
			{
#line 1147 "syntax.act"

    printf("In declare_id\n");
    if ( in_weak_param ) {
	(ZId) = make_param_decl ( (*ZIds), (*ZIs), (*ZIid), CONTEXT_WEAK_PARAM ) ;
    } else if ( type_tag ( (*ZIs) ) == type_func_tag ) {
	check_weak_func ( (*ZIs), 0 ) ;
	(ZId) = make_func_decl ( (*ZIds), (*ZIs), (*ZIid), 0 ) ;
    } else {
	int def = predict_obj_defn () ;
	(ZId) = make_object_decl ( (*ZIds), (*ZIs), (*ZIid), def ) ;
    }
    if ( IS_id_type_alias ( (ZId) ) ) {
	BASE_TYPE bs = DEREF_btype ( id_type_alias_rep ( (ZId) ) ) ;
	bs |= (*ZIbt) ;
	COPY_btype ( id_type_alias_rep ( (ZId) ), bs ) ;
    }
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 591 "syntax3.c"
			}
			/* END OF ACTION: declare_id */
			ZRinitialiser_Hopt (ZId, &ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: initialise_id */
			{
#line 1256 "syntax.act"

    int def = init_object ( (ZId), (ZIa) ) ;
    if ( do_dump ) dump_declare ( (ZId), &decl_loc, def ) ;
#line 605 "syntax3.c"
			}
			/* END OF ACTION: initialise_id */
			/* BEGINNING OF INLINE: 825 */
			{
				switch (CURRENT_TERMINAL) {
				case 42:
					{
						ADVANCE_LEXER;
						ZRinit_Hdeclarator_Hlist (*ZIds, *ZIbt, *ZIt);
						if ((CURRENT_TERMINAL) == 356) {
							RESTORE_LEXER;
							goto ZL1;
						}
					}
					break;
				default:
					break;
				}
			}
			/* END OF INLINE: 825 */
			switch (CURRENT_TERMINAL) {
			case 77:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	default:
		goto ZL1;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
}

void
parse_stmt(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRstatement (&ZIe);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	{
		/* BEGINNING OF ACTION: error_syntax */
		{
#line 1345 "syntax.act"

    /* Syntax errors */
    ERROR err = ERR_lex_parse ( crt_token ) ;
    report ( crt_loc, err ) ;
    have_syntax_error = 1 ;
#line 671 "syntax3.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: exp_none */
		{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 679 "syntax3.c"
		}
		/* END OF ACTION: exp_none */
	}
ZL0:;
	*ZOe = ZIe;
}

void
ZRmember_Hdeclarator_Hlist(TYPE ZIp, BASE_TYPE ZIq)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_member_Hdeclarator_Hlist:;
	{
		ZRmember_Hdeclarator (ZIp, ZIq);
		/* BEGINNING OF INLINE: 832 */
		{
			switch (CURRENT_TERMINAL) {
			case 42:
				{
					ADVANCE_LEXER;
					/* BEGINNING OF INLINE: member-declarator-list */
					goto ZL2_member_Hdeclarator_Hlist;
					/* END OF INLINE: member-declarator-list */
				}
				UNREACHED;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				break;
			}
		}
		/* END OF INLINE: 832 */
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR1081(EXP *ZI1079, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255: case 298:
	case 324: case 347:
		{
			SID_LIST_EXP ZIq;
			SID_LIST_EXP ZIp;

			ZRcomma_Hexpression_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (*ZI1079), (ZIq), (ZIp) ) ;
#line 749 "syntax3.c"
			}
			/* END OF ACTION: list_exp_cons */
			/* BEGINNING OF ACTION: exp_comma */
			{
#line 466 "syntax.act"

    (ZIe) = make_comma_exp ( (ZIp) ) ;
#line 757 "syntax3.c"
			}
			/* END OF ACTION: exp_comma */
		}
		break;
	default:
		{
			ZIe = *ZI1079;
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRtype_Hid(TYPE *ZOt, int *ZOn)
{
	TYPE ZIt;
	int ZIn;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		int ZIn1;
		BASE_TYPE ZIbt;
		TYPE ZIp;
		CV_SPEC ZIcv;
		TYPE ZIq;

		/* BEGINNING OF ACTION: no_type_defns */
		{
#line 1378 "syntax.act"

    (ZIn1) = no_type_defns ;
#line 799 "syntax3.c"
		}
		/* END OF ACTION: no_type_defns */
		ZRtype_Hspecifier_Hseq (&ZIbt, &ZIp, &ZIcv);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: type_complete */
		{
#line 985 "syntax.act"

    (ZIq) = complete_pre_type ( (ZIbt), (ZIp), (ZIcv), 1 ) ;
    have_type_specifier = 0 ;
#line 813 "syntax3.c"
		}
		/* END OF ACTION: type_complete */
		ZRabstract_Hdeclarator_Hopt (ZIq, &ZIt);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: diff_type_defns */
		{
#line 1386 "syntax.act"

    (ZIn) = no_type_defns - (ZIn1) ;
#line 826 "syntax3.c"
		}
		/* END OF ACTION: diff_type_defns */
		/* BEGINNING OF ACTION: type_check */
		{
#line 994 "syntax.act"

    object_type ( (ZIt), null_tag ) ;
#line 834 "syntax3.c"
		}
		/* END OF ACTION: type_check */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
	*ZOn = ZIn;
}

void
ZRflow_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 298:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_set */
			{
#line 606 "syntax.act"

    (ZIe) = make_set_exp ( (ZIa) ) ;
#line 875 "syntax3.c"
			}
			/* END OF ACTION: exp_set */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	case 324:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_unused */
			{
#line 618 "syntax.act"

    (ZIe) = make_unused_exp ( (ZIa) ) ;
#line 909 "syntax3.c"
			}
			/* END OF ACTION: exp_unused */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRdeclaration_Hcond_Hbody(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		DECL_SPEC ZIds;
		TYPE ZIt;

		/* BEGINNING OF INLINE: open-brace */
		{
			{
				switch (CURRENT_TERMINAL) {
				case 64:
					break;
				default:
					goto ZL1;
				}
				ADVANCE_LEXER;
			}
		}
		/* END OF INLINE: open-brace */
		/* BEGINNING OF ACTION: dspec_none */
		{
#line 1114 "syntax.act"
 (ZIds) = dspec_none ; 
#line 961 "syntax3.c"
		}
		/* END OF ACTION: dspec_none */
		/* BEGINNING OF ACTION: type_none */
		{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 969 "syntax3.c"
		}
		/* END OF ACTION: type_none */
		ZRdeclaration_Hseq_Hopt ();
		/* BEGINNING OF INLINE: close-brace */
		{
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			{
				switch (CURRENT_TERMINAL) {
				case 38:
					break;
				default:
					goto ZL1;
				}
				ADVANCE_LEXER;
			}
		}
		/* END OF INLINE: close-brace */
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR956(EXP *ZI954, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 72:
		{
			EXP ZIa;
			EXP ZIb;

			ADVANCE_LEXER;
			ZRexpression (&ZIa);
			switch (CURRENT_TERMINAL) {
			case 41:
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRconditional_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_cond */
			{
#line 470 "syntax.act"

    (ZIe) = make_cond_exp ( (*ZI954), (ZIa), (ZIb) ) ;
#line 1030 "syntax3.c"
			}
			/* END OF ACTION: exp_cond */
		}
		break;
	default:
		{
			ZIe = *ZI954;
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR1084(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 298:
		{
			EXP ZI1097;
			EXP ZI1098;

			ADVANCE_LEXER;
			ZRexpression (&ZI1097);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_set */
			{
#line 606 "syntax.act"

    (ZI1098) = make_set_exp ( (ZI1097) ) ;
#line 1073 "syntax3.c"
			}
			/* END OF ACTION: exp_set */
			ZR1099 (&ZI1098, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 324:
		{
			EXP ZI1094;
			EXP ZI1095;

			ADVANCE_LEXER;
			ZRexpression (&ZI1094);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_unused */
			{
#line 618 "syntax.act"

    (ZI1095) = make_unused_exp ( (ZI1094) ) ;
#line 1099 "syntax3.c"
			}
			/* END OF ACTION: exp_unused */
			ZR1099 (&ZI1095, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR1085(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 96:
		{
			EXP ZIc;
			EXP ZIa;
			EXP ZIb;

			ADVANCE_LEXER;
			ZRconstant_Hexpression (&ZIc);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_case_begin */
			{
#line 644 "syntax.act"

    (ZIa) = begin_case_stmt ( (ZIc), 0 ) ;
#line 1145 "syntax3.c"
			}
			/* END OF ACTION: stmt_case_begin */
			/* BEGINNING OF ACTION: stmt_label_set */
			{
#line 761 "syntax.act"

    unreached_fall = 0 ;
#line 1153 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_set */
			switch (CURRENT_TERMINAL) {
			case 41:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRstatement (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_case_end */
			{
#line 648 "syntax.act"

    (ZIe) = end_case_stmt ( (ZIa), (ZIb) ) ;
#line 1173 "syntax3.c"
			}
			/* END OF ACTION: stmt_case_end */
		}
		break;
	case 100:
		{
			EXP ZIa;
			EXP ZIb;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_default_begin */
			{
#line 682 "syntax.act"

    (ZIa) = begin_default_stmt ( 0 ) ;
#line 1189 "syntax3.c"
			}
			/* END OF ACTION: stmt_default_begin */
			/* BEGINNING OF ACTION: stmt_label_set */
			{
#line 761 "syntax.act"

    unreached_fall = 0 ;
#line 1197 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_set */
			switch (CURRENT_TERMINAL) {
			case 41:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRstatement (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_default_end */
			{
#line 686 "syntax.act"

    (ZIe) = end_default_stmt ( (ZIa), (ZIb) ) ;
#line 1217 "syntax3.c"
			}
			/* END OF ACTION: stmt_default_end */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR704(BASE_TYPE *ZIb1, TYPE *ZIt1, CV_SPEC *ZIcv1, BASE_TYPE *ZObt, TYPE *ZOt, CV_SPEC *ZOcv)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;
	CV_SPEC ZIcv;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZI1034;
		TYPE ZI1035;
		CV_SPEC ZI1036;
		BASE_TYPE ZIb2;
		TYPE ZIt2;
		CV_SPEC ZIcv2;

		/* BEGINNING OF ACTION: is_type_specifier */
		{
#line 1447 "syntax.act"

    /* Resolve type-specifiers from other declarators */
    (ZI0) = predict_tspec ( 0 ) ;
#line 1259 "syntax3.c"
		}
		/* END OF ACTION: is_type_specifier */
		if (!ZI0)
			goto ZL2;
		ZRtype_Hqualifier (&ZI1034, &ZI1035, &ZI1036);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: check_decl_specifier */
		{
#line 1470 "syntax.act"

    /* A type-name can be a declarator-id */
    if ( have_type_specifier && crt_lex_token == lex_type_Hname ) {
	crt_lex_token = lex_identifier ;
    }
#line 1277 "syntax3.c"
		}
		/* END OF ACTION: check_decl_specifier */
		ZR704 (&ZI1034, &ZI1035, &ZI1036, &ZIb2, &ZIt2, &ZIcv2);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: btype_join */
		{
#line 928 "syntax.act"

    if ( (*ZIb1) & (ZIb2) ) {
	(ZIbt) = join_pre_types ( (*ZIb1), (ZIb2) ) ;
    } else {
	(ZIbt) = ( (*ZIb1) | (ZIb2) ) ;
    }
#line 1294 "syntax3.c"
		}
		/* END OF ACTION: btype_join */
		/* BEGINNING OF ACTION: type_join */
		{
#line 973 "syntax.act"

    /* Join two partial types */
    if ( IS_NULL_type ( (*ZIt1) ) ) {
	(ZIt) = (ZIt2) ;
    } else if ( IS_NULL_type ( (ZIt2) ) ) {
	(ZIt) = (*ZIt1) ;
    } else {
	report ( crt_loc, ERR_dcl_type_simple_many ( (*ZIt1), (ZIt2) ) ) ;
	(ZIt) = (ZIt2) ;
    }
#line 1310 "syntax3.c"
		}
		/* END OF ACTION: type_join */
		/* BEGINNING OF ACTION: cv_join */
		{
#line 899 "syntax.act"

    CV_SPEC c = ( (*ZIcv1) & (ZIcv2) ) ;
    if ( c ) report ( crt_loc, ERR_dcl_type_cv_dup ( c ) ) ;
    (ZIcv) = ( (*ZIcv1) | (ZIcv2) ) ;
#line 1320 "syntax3.c"
		}
		/* END OF ACTION: cv_join */
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	default:
		{
			ZIbt = *ZIb1;
			ZIt = *ZIt1;
			ZIcv = *ZIcv1;
		}
		break;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZObt = ZIbt;
	*ZOt = ZIt;
	*ZOcv = ZIcv;
}

void
ZRexpression_Hlist(SID_LIST_EXP *ZOp)
{
	SID_LIST_EXP ZIp;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;
		SID_LIST_EXP ZIq;

		ZRassignment_Hexpression (&ZIe);
		ZR629 (&ZIq);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: list_exp_cons */
		{
#line 416 "syntax.act"

    CONS_exp ( (ZIe), (ZIq), (ZIp) ) ;
#line 1369 "syntax3.c"
		}
		/* END OF ACTION: list_exp_cons */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOp = ZIp;
}

void
ZRassignment_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 170:
		{
			int ZI1012;
			EXP ZI1013;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_alignof */
			{
#line 369 "syntax.act"
 (ZI1012) = lex_alignof ; 
#line 1397 "syntax3.c"
			}
			/* END OF ACTION: lex_alignof */
			ZRsizeof_Hexpression (ZI1012, &ZI1013);
			ZR1014 (&ZI1013, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 23:
		{
			EXP ZI1024;
			EXP ZI1025;

			/* BEGINNING OF EXTRACT: complex-exp */
			{
#line 329 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZI1024 = parse_exp_token ( id, args ) ;
    RESCAN_LEXER ;
#line 1421 "syntax3.c"
			}
			/* END OF EXTRACT: complex-exp */
			ADVANCE_LEXER;
			ZR939 (ZI1024, &ZI1025);
			ZR1014 (&ZI1025, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 206:
		{
			EXP ZIa;
			EXP ZI967;
			EXP ZI966;
			EXP ZI965;
			EXP ZI964;
			EXP ZI963;
			EXP ZI962;
			EXP ZI961;
			EXP ZI960;
			EXP ZI959;
			EXP ZI958;
			EXP ZI957;
			EXP ZI954;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_ignore */
			{
#line 508 "syntax.act"

    (ZI967) = make_cast_exp ( type_void, (ZIa), 0 ) ;
#line 1460 "syntax3.c"
			}
			/* END OF ACTION: exp_ignore */
			ZR935 (ZI967, &ZI966);
			ZR931 (ZI966, &ZI965);
			ZR927 (ZI965, &ZI964);
			ZR923 (ZI964, &ZI963);
			ZR919 (ZI963, &ZI962);
			ZR915 (ZI962, &ZI961);
			ZR911 (ZI961, &ZI960);
			ZR907 (ZI960, &ZI959);
			ZR903 (ZI959, &ZI958);
			ZR899 (ZI958, &ZI957);
			ZR895 (ZI957, &ZI954);
			ZR956 (&ZI954, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 210:
		{
			EXP ZI1021;
			EXP ZI1022;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_ellipsis */
			{
#line 486 "syntax.act"

    (ZI1021) = make_ellipsis_exp () ;
#line 1492 "syntax3.c"
			}
			/* END OF ACTION: exp_ellipsis */
			ZR939 (ZI1021, &ZI1022);
			ZR1014 (&ZI1022, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 1:
		{
			IDENTIFIER ZIid;
			EXP ZI1018;
			EXP ZI1019;

			/* BEGINNING OF EXTRACT: identifier */
			{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 1514 "syntax3.c"
			}
			/* END OF EXTRACT: identifier */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_identifier */
			{
#line 504 "syntax.act"

    (ZI1018) = make_id_exp ( (ZIid) ) ;
#line 1523 "syntax3.c"
			}
			/* END OF ACTION: exp_identifier */
			ZR939 (ZI1018, &ZI1019);
			ZR1014 (&ZI1019, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 255:
		{
			EXP ZIa;
			EXP ZI967;
			EXP ZI966;
			EXP ZI965;
			EXP ZI964;
			EXP ZI963;
			EXP ZI962;
			EXP ZI961;
			EXP ZI960;
			EXP ZI959;
			EXP ZI958;
			EXP ZI957;
			EXP ZI954;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_lit */
			{
#line 520 "syntax.act"

    (ZI967) = make_lit_exp ( (ZIa) ) ;
#line 1561 "syntax3.c"
			}
			/* END OF ACTION: exp_lit */
			ZR935 (ZI967, &ZI966);
			ZR931 (ZI966, &ZI965);
			ZR927 (ZI965, &ZI964);
			ZR923 (ZI964, &ZI963);
			ZR919 (ZI963, &ZI962);
			ZR915 (ZI962, &ZI961);
			ZR911 (ZI961, &ZI960);
			ZR907 (ZI960, &ZI959);
			ZR903 (ZI959, &ZI958);
			ZR899 (ZI958, &ZI957);
			ZR895 (ZI957, &ZI954);
			ZR956 (&ZI954, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 61:
		{
			EXP ZI993;
			EXP ZI994;

			ADVANCE_LEXER;
			ZRunary_Hexpression (&ZI993);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_predec */
			{
#line 581 "syntax.act"

    (ZI994) = make_prefix_exp ( lex_minus_Hminus, (ZI993) ) ;
#line 1598 "syntax3.c"
			}
			/* END OF ACTION: exp_predec */
			ZR1014 (&ZI994, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 65:
		{
			ADVANCE_LEXER;
			ZR989 (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 71:
		{
			EXP ZI990;
			EXP ZI991;

			ADVANCE_LEXER;
			ZRunary_Hexpression (&ZI990);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_preinc */
			{
#line 585 "syntax.act"

    (ZI991) = make_prefix_exp ( lex_plus_Hplus, (ZI990) ) ;
#line 1634 "syntax3.c"
			}
			/* END OF ACTION: exp_preinc */
			ZR1014 (&ZI991, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 116:
		{
			int ZI1009;
			EXP ZI1010;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_sizeof */
			{
#line 370 "syntax.act"
 (ZI1009) = lex_sizeof ; 
#line 1654 "syntax3.c"
			}
			/* END OF ACTION: lex_sizeof */
			ZRsizeof_Hexpression (ZI1009, &ZI1010);
			ZR1014 (&ZI1010, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			EXP ZI996;
			EXP ZI997;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZI996);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_indir */
			{
#line 516 "syntax.act"

    (ZI997) = make_indir_exp ( (ZI996) ) ;
#line 1681 "syntax3.c"
			}
			/* END OF ACTION: exp_indir */
			ZR1014 (&ZI997, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 33:
		{
			EXP ZI999;
			EXP ZI1000;

			/* BEGINNING OF INLINE: and */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 33:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: and */
			ZRcast_Hexpression (&ZI999);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_ref */
			{
#line 589 "syntax.act"

    (ZI1000) = make_ref_exp ( (ZI999), 0 ) ;
#line 1719 "syntax3.c"
			}
			/* END OF ACTION: exp_ref */
			ZR1014 (&ZI1000, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 17: case 18: case 19: case 20:
	case 21: case 22:
		{
			EXP ZI1015;
			EXP ZI1016;

			ZRliteral (&ZI1015);
			ZR939 (ZI1015, &ZI1016);
			ZR1014 (&ZI1016, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 62:
		{
			EXP ZI1002;
			EXP ZI1003;

			/* BEGINNING OF INLINE: not */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 62:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: not */
			ZRcast_Hexpression (&ZI1002);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_not */
			{
#line 552 "syntax.act"

    (ZI1003) = make_not_exp ( (ZI1002) ) ;
#line 1772 "syntax3.c"
			}
			/* END OF ACTION: exp_not */
			ZR1014 (&ZI1003, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 43: case 59: case 69: case 85:
		{
			int ZI1005;
			EXP ZI1006;
			EXP ZI1007;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZI1005) = crt_lex_token ; 
#line 1792 "syntax3.c"
			}
			/* END OF ACTION: lex_crt */
			ZRunary_Hoperator ();
			ZRcast_Hexpression (&ZI1006);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_unary */
			{
#line 614 "syntax.act"

    (ZI1007) = make_uminus_exp ( (ZI1005), (ZI1006) ) ;
#line 1806 "syntax3.c"
			}
			/* END OF ACTION: exp_unary */
			ZR1014 (&ZI1007, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR1088(IDENTIFIER *ZIid, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 33: case 34: case 35: case 36:
	case 42: case 44: case 45: case 46:
	case 48: case 49: case 50: case 53:
	case 54: case 55: case 56: case 57:
	case 58: case 59: case 60: case 61:
	case 63: case 65: case 66: case 67:
	case 68: case 69: case 70: case 71:
	case 72: case 73: case 74: case 75:
	case 76: case 77: case 78: case 79:
	case 80: case 81: case 86: case 87:
		{
			EXP ZI1018;
			EXP ZI1019;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			/* BEGINNING OF ACTION: exp_identifier */
			{
#line 504 "syntax.act"

    (ZI1018) = make_id_exp ( (*ZIid) ) ;
#line 1857 "syntax3.c"
			}
			/* END OF ACTION: exp_identifier */
			ZR939 (ZI1018, &ZI1019);
			ZR1014 (&ZI1019, &ZI1027);
			ZR1029 (&ZI1027, &ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 1880 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 1888 "syntax3.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 1896 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			switch (CURRENT_TERMINAL) {
			case 77:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	case 41:
		{
			EXP ZIa;
			EXP ZIb;

			/* BEGINNING OF ACTION: stmt_label_mod */
			{
#line 769 "syntax.act"

    if ( unreached_code ) unreached_fall = 0 ;
#line 1918 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_mod */
			/* BEGINNING OF ACTION: stmt_label_begin */
			{
#line 753 "syntax.act"

    (ZIa) = begin_label_stmt ( (*ZIid), lex_identifier ) ;
#line 1926 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_begin */
			ADVANCE_LEXER;
			ZRstatement (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_label_end */
			{
#line 757 "syntax.act"

    (ZIe) = end_label_stmt ( (ZIa), (ZIb) ) ;
#line 1940 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_end */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRexpression_Hlist_Hopt(SID_LIST_EXP *ZOp)
{
	SID_LIST_EXP ZIp;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255:
		{
			ZRexpression_Hlist (&ZIp);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: list_exp_null */
			{
#line 412 "syntax.act"

    (ZIp) = NULL_list ( EXP ) ;
#line 1985 "syntax3.c"
			}
			/* END OF ACTION: list_exp_null */
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOp = ZIp;
}

void
ZR1089(IDENTIFIER *ZIid, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	default:
		{
			EXP ZIa;

			/* BEGINNING OF ACTION: exp_identifier */
			{
#line 504 "syntax.act"

    (ZIa) = make_id_exp ( (*ZIid) ) ;
#line 2016 "syntax3.c"
			}
			/* END OF ACTION: exp_identifier */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 2024 "syntax3.c"
			}
			/* END OF ACTION: stmt_exp */
		}
		break;
	case 41:
		{
			EXP ZIa;
			EXP ZIb;

			/* BEGINNING OF ACTION: stmt_label_mod */
			{
#line 769 "syntax.act"

    if ( unreached_code ) unreached_fall = 0 ;
#line 2039 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_mod */
			/* BEGINNING OF ACTION: stmt_label_begin */
			{
#line 753 "syntax.act"

    (ZIa) = begin_label_stmt ( (*ZIid), lex_identifier ) ;
#line 2047 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_begin */
			ADVANCE_LEXER;
			ZRstatement (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_label_end */
			{
#line 757 "syntax.act"

    (ZIe) = end_label_stmt ( (ZIa), (ZIb) ) ;
#line 2061 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_end */
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRlogical_Hand_Hexpression(EXP *ZO898)
{
	EXP ZI898;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRinclusive_Hor_Hexpression (&ZIe);
		ZR899 (ZIe, &ZI898);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO898 = ZI898;
}

void
ZRjump_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 95:
		{
			int ZIr;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2127 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_break */
			{
#line 640 "syntax.act"

    (ZIe) = make_break_stmt () ;
#line 2135 "syntax3.c"
			}
			/* END OF ACTION: stmt_break */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 2143 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			ZRsemicolon_Hx ();
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 99:
		{
			int ZIr;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2171 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_continue */
			{
#line 673 "syntax.act"

    (ZIe) = make_continue_stmt () ;
#line 2179 "syntax3.c"
			}
			/* END OF ACTION: stmt_continue */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 2187 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			ZRsemicolon_Hx ();
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 108:
		{
			int ZIr;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2215 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			ZRjump_Hlabel (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 2228 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			ZRsemicolon_Hx ();
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 113:
		{
			int ZIr;
			EXP ZIa;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2257 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			ZR618 (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_return */
			{
#line 773 "syntax.act"

    (ZIe) = make_return_stmt ( (ZIa), lex_return ) ;
#line 2270 "syntax3.c"
			}
			/* END OF ACTION: stmt_return */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 2278 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			ZRsemicolon_Hx ();
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRtarget_Hcondition_Hhead(EXP *ZO888, EXP *ZO889, int *ZO890)
{
	EXP ZI888;
	EXP ZI889;
	int ZI890;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIc;
		EXP ZIp;
		int ZIr;
		EXP ZIa;
		EXP ZIe;

		switch (CURRENT_TERMINAL) {
		case 26:
			/* BEGINNING OF EXTRACT: hash-if */
			{
#line 313 "syntax.act"

    ZIc = crt_token->pp_data.exp ;
#line 2325 "syntax3.c"
			}
			/* END OF EXTRACT: hash-if */
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		/* BEGINNING OF ACTION: cond_hash_if */
		{
#line 1309 "syntax.act"

    EXP c = crt_hash_cond ;
    crt_hash_cond = make_if_cond ( (ZIc), c ) ;
    (ZIp) = c ;
#line 2340 "syntax3.c"
		}
		/* END OF ACTION: cond_hash_if */
		/* BEGINNING OF ACTION: reach_check */
		{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2356 "syntax3.c"
		}
		/* END OF ACTION: reach_check */
		ZRcompound_Hstatement (&ZIa);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: reach_prev */
		{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 2368 "syntax3.c"
		}
		/* END OF ACTION: reach_prev */
		/* BEGINNING OF ACTION: stmt_hash_if */
		{
#line 797 "syntax.act"

    (ZIe) = begin_hash_if_stmt ( (ZIc), (ZIa) ) ;
#line 2376 "syntax3.c"
		}
		/* END OF ACTION: stmt_hash_if */
		ZR891 (ZIe, ZIp, ZIr, &ZI888, &ZI889, &ZI890);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO888 = ZI888;
	*ZO889 = ZI889;
	*ZO890 = ZI890;
}

void
ZRcv_Hqualifier_Hseq(CV_SPEC *ZOcv)
{
	CV_SPEC ZIcv;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		CV_SPEC ZIa;

		ZRcv_Hqualifier (&ZIa);
		/* BEGINNING OF INLINE: 638 */
		{
			switch (CURRENT_TERMINAL) {
			case 98: case 124:
				{
					CV_SPEC ZIb;

					ZRcv_Hqualifier_Hseq (&ZIb);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: cv_join */
					{
#line 899 "syntax.act"

    CV_SPEC c = ( (ZIa) & (ZIb) ) ;
    if ( c ) report ( crt_loc, ERR_dcl_type_cv_dup ( c ) ) ;
    (ZIcv) = ( (ZIa) | (ZIb) ) ;
#line 2426 "syntax3.c"
					}
					/* END OF ACTION: cv_join */
				}
				break;
			default:
				{
					ZIcv = ZIa;
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		/* END OF INLINE: 638 */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOcv = ZIcv;
}

void
ZRfunction_Hbody(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIc;
		int ZId;
		EXP ZIb;
		EXP ZIr;
		EXP ZIa;

		/* BEGINNING OF ACTION: stmt_compound_begin */
		{
#line 652 "syntax.act"

    (ZIc) = begin_compound_stmt ( 1 ) ;
#line 2471 "syntax3.c"
		}
		/* END OF ACTION: stmt_compound_begin */
		/* BEGINNING OF INLINE: open-brace */
		{
			{
				switch (CURRENT_TERMINAL) {
				case 64:
					break;
				default:
					goto ZL1;
				}
				ADVANCE_LEXER;
			}
		}
		/* END OF INLINE: open-brace */
		/* BEGINNING OF ACTION: stmt_compound_block */
		{
#line 660 "syntax.act"

    COPY_int ( exp_sequence_block ( (ZIc) ), 2 ) ;
    (ZId) = 1 ;
#line 2493 "syntax3.c"
		}
		/* END OF ACTION: stmt_compound_block */
		ZRstatement_Hseq_Hopt (ZIc, ZId, &ZIb);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: stmt_return_fall */
		{
#line 777 "syntax.act"

    (ZIr) = fall_return_stmt () ;
#line 2506 "syntax3.c"
		}
		/* END OF ACTION: stmt_return_fall */
		/* BEGINNING OF ACTION: stmt_compound_add */
		{
#line 665 "syntax.act"

    (ZIa) = add_compound_stmt ( (ZIb), (ZIr) ) ;
#line 2514 "syntax3.c"
		}
		/* END OF ACTION: stmt_compound_add */
		/* BEGINNING OF INLINE: close-brace */
		{
			{
				switch (CURRENT_TERMINAL) {
				case 38:
					break;
				default:
					goto ZL1;
				}
				ADVANCE_LEXER;
			}
		}
		/* END OF INLINE: close-brace */
		/* BEGINNING OF ACTION: stmt_compound_end */
		{
#line 669 "syntax.act"

    (ZIe) = end_compound_stmt ( (ZIa) ) ;
#line 2535 "syntax3.c"
		}
		/* END OF ACTION: stmt_compound_end */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 2543 "syntax3.c"
		}
		/* END OF ACTION: rescan_token */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRcv_Hqualifier_Hseq_Hopt(CV_SPEC *ZOcv)
{
	CV_SPEC ZIcv;

	switch (CURRENT_TERMINAL) {
	case 98: case 124:
		{
			ZRcv_Hqualifier_Hseq (&ZIcv);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: cv_none */
			{
#line 895 "syntax.act"
 (ZIcv) = cv_none ; 
#line 2576 "syntax3.c"
			}
			/* END OF ACTION: cv_none */
		}
		break;
	case 356:
		return;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOcv = ZIcv;
}

void
ZR969(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		TYPE ZIt;
		int ZIn;
		EXP ZIa;

		/* BEGINNING OF ACTION: is_type_id_false */
		{
#line 1437 "syntax.act"

    /* Resolve type-ids from expressions */
    (ZI0) = predict_typeid ( 0 ) ;
#line 2611 "syntax3.c"
		}
		/* END OF ACTION: is_type_id_false */
		if (!ZI0)
			goto ZL2;
		ZRtype_Hid (&ZIt, &ZIn);
		switch (CURRENT_TERMINAL) {
		case 39:
			break;
		case 356:
			RESTORE_LEXER;
			goto ZL1;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		ZRcast_Hexpression (&ZIa);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: exp_cast */
		{
#line 461 "syntax.act"

    /* n is the number of type definitions in t */
    (ZIe) = make_cast_exp ( (ZIt), (ZIa), (ZIn) ) ;
#line 2638 "syntax3.c"
		}
		/* END OF ACTION: exp_cast */
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255: case 298:
	case 324: case 347:
		{
			EXP ZIa;
			EXP ZI968;

			/* BEGINNING OF ACTION: exp_paren_begin */
			{
#line 560 "syntax.act"

    IGNORE incr_value ( OPT_VAL_paren_depth ) ;
#line 2662 "syntax3.c"
			}
			/* END OF ACTION: exp_paren_begin */
			ZRexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_paren_end */
			{
#line 564 "syntax.act"

    (ZI968) = make_paren_exp ( (ZIa) ) ;
    decr_value ( OPT_VAL_paren_depth ) ;
#line 2676 "syntax3.c"
			}
			/* END OF ACTION: exp_paren_end */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR939 (ZI968, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRfall_Hcheck(void)
{
	switch (CURRENT_TERMINAL) {
	case 223:
		{
			ADVANCE_LEXER;
			ZR1100 ();
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		break;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZRcv_Hqualifier(CV_SPEC *ZOcv)
{
	CV_SPEC ZIcv;

	switch (CURRENT_TERMINAL) {
	case 98:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: cv_const */
			{
#line 896 "syntax.act"
 (ZIcv) = cv_const ; 
#line 2742 "syntax3.c"
			}
			/* END OF ACTION: cv_const */
		}
		break;
	case 124:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: cv_volatile */
			{
#line 897 "syntax.act"
 (ZIcv) = cv_volatile ; 
#line 2754 "syntax3.c"
			}
			/* END OF ACTION: cv_volatile */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOcv = ZIcv;
}

void
ZR1099(EXP *ZI1098, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 348:
		{
			SID_LIST_EXP ZIq;
			SID_LIST_EXP ZIp;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			ZRcomma_Hexpression_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (*ZI1098), (ZIq), (ZIp) ) ;
#line 2796 "syntax3.c"
			}
			/* END OF ACTION: list_exp_cons */
			/* BEGINNING OF ACTION: exp_comma */
			{
#line 466 "syntax.act"

    (ZIa) = make_comma_exp ( (ZIp) ) ;
#line 2804 "syntax3.c"
			}
			/* END OF ACTION: exp_comma */
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2820 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 2828 "syntax3.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 2836 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			switch (CURRENT_TERMINAL) {
			case 77:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	case 77:
		{
			int ZIr;

			ADVANCE_LEXER;
			switch (CURRENT_TERMINAL) {
			case 348:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 2873 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (*ZI1098) ) ;
#line 2881 "syntax3.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 2889 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRunary_Hoperator(void)
{
	switch (CURRENT_TERMINAL) {
	case 85:
		{
			ADVANCE_LEXER;
		}
		break;
	case 59:
		{
			ADVANCE_LEXER;
		}
		break;
	case 69:
		{
			ADVANCE_LEXER;
		}
		break;
	case 43:
		{
			/* BEGINNING OF INLINE: compl */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 43:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: compl */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZRmember_Hdeclarator(TYPE ZIp, BASE_TYPE ZIq)
{
	switch (CURRENT_TERMINAL) {
	case 65:
		{
			TYPE ZI1040;
			IDENTIFIER ZI1041;
			TYPE ZI1037;
			IDENTIFIER ZIid;
			TYPE ZIt;

			ADVANCE_LEXER;
			ZRdeclarator_Haux (&ZI1040, &ZI1041);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: declarator_bad */
			{
#line 1228 "syntax.act"

    if ( IS_NULL_type ( (ZI1040) ) ) {
	report ( crt_loc, ERR_dcl_meaning_paren () ) ;
    }
#line 2979 "syntax3.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR874 (ZI1040, ZI1041, &ZI1037, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZI1037) ) ? (ZIp) : inject_pre_type ( (ZI1037), (ZIp), 1 ) ) ;
#line 2999 "syntax3.c"
			}
			/* END OF ACTION: type_inject */
			/* BEGINNING OF ACTION: declare_member */
			{
#line 1198 "syntax.act"

    IDENTIFIER id = make_member_decl ( dspec_none, (ZIt), (ZIid), 0 ) ;
    if ( do_dump ) dump_declare ( id, &decl_loc, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 3010 "syntax3.c"
			}
			/* END OF ACTION: declare_member */
		}
		break;
	case 1: case 2: case 4:
		{
			IDENTIFIER ZI1044;

			/* BEGINNING OF INLINE: any-identifier */
			{
				switch (CURRENT_TERMINAL) {
				case 1:
					{
						/* BEGINNING OF EXTRACT: identifier */
						{
#line 195 "syntax.act"

    ZI1044 = crt_token->pp_data.id.use ;
#line 3029 "syntax3.c"
						}
						/* END OF EXTRACT: identifier */
						ADVANCE_LEXER;
					}
					break;
				case 4:
					{
						/* BEGINNING OF EXTRACT: statement-name */
						{
#line 207 "syntax.act"

    ZI1044 = crt_token->pp_data.id.use ;
#line 3042 "syntax3.c"
						}
						/* END OF EXTRACT: statement-name */
						ADVANCE_LEXER;
					}
					break;
				case 2:
					{
						/* BEGINNING OF EXTRACT: type-name */
						{
#line 199 "syntax.act"

    ZI1044 = crt_token->pp_data.id.use ;
#line 3055 "syntax3.c"
						}
						/* END OF EXTRACT: type-name */
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: any-identifier */
			ZR1045 (&ZIp, &ZIq, &ZI1044);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			TYPE ZI1038;
			TYPE ZI1039;
			IDENTIFIER ZIid;
			TYPE ZI1037;
			TYPE ZIt;

			ZRptr_Hoperator (&ZI1038);
			ZRdeclarator_Haux (&ZI1039, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZI1037) = ( IS_NULL_type ( (ZI1039) ) ? (ZI1038) : inject_pre_type ( (ZI1039), (ZI1038), 0 ) ) ;
#line 3092 "syntax3.c"
			}
			/* END OF ACTION: type_build */
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZI1037) ) ? (ZIp) : inject_pre_type ( (ZI1037), (ZIp), 1 ) ) ;
#line 3100 "syntax3.c"
			}
			/* END OF ACTION: type_inject */
			/* BEGINNING OF ACTION: declare_member */
			{
#line 1198 "syntax.act"

    IDENTIFIER id = make_member_decl ( dspec_none, (ZIt), (ZIid), 0 ) ;
    if ( do_dump ) dump_declare ( id, &decl_loc, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 3111 "syntax3.c"
			}
			/* END OF ACTION: declare_member */
		}
		break;
	case 41:
		{
			IDENTIFIER ZIid;
			EXP ZIc;
			TYPE ZIt;

			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZIid) = DEREF_id ( hashid_id ( nm ) ) ;
#line 3128 "syntax3.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 3137 "syntax3.c"
			}
			/* END OF ACTION: declarator_begin */
			ADVANCE_LEXER;
			ZRconstant_Hexpression (&ZIc);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_bitfield_mem */
			{
#line 1038 "syntax.act"

    /* Check for anonymous bitfields */
    HASHID nm = DEREF_hashid ( id_name ( (ZIid) ) ) ;
    int z = IS_hashid_anon ( nm ) ;
    (ZIt) = make_bitfield_type ( (ZIp), (ZIq), (ZIc), z ) ;
#line 3154 "syntax3.c"
			}
			/* END OF ACTION: type_bitfield_mem */
			/* BEGINNING OF ACTION: declare_bitfield */
			{
#line 1212 "syntax.act"

    IDENTIFIER id = make_member_decl ( dspec_none, (ZIt), (ZIid), 0 ) ;
    if ( do_dump ) dump_declare ( id, &decl_loc, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 3165 "syntax3.c"
			}
			/* END OF ACTION: declare_bitfield */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR1100(void)
{
	switch (CURRENT_TERMINAL) {
	case 77:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_label_set */
			{
#line 761 "syntax.act"

    unreached_fall = 0 ;
#line 3193 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_set */
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: stmt_label_set */
			{
#line 761 "syntax.act"

    unreached_fall = 0 ;
#line 3205 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_set */
		}
		break;
	case 356:
		return;
	}
}

void
ZRinitialiser_Hclause(IDENTIFIER ZId, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255:
		{
			ZRinitialiser_Hexpression (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 64:
		{
			SID_LIST_EXP ZIp;

			/* BEGINNING OF INLINE: open-brace */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 64:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: open-brace */
			ZR1078 (&ZId, &ZIp);
			/* BEGINNING OF INLINE: close-brace */
			{
				if ((CURRENT_TERMINAL) == 356) {
					RESTORE_LEXER;
					goto ZL1;
				}
				{
					switch (CURRENT_TERMINAL) {
					case 38:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: close-brace */
			/* BEGINNING OF ACTION: exp_aggregate */
			{
#line 435 "syntax.act"

    /* The expression type is a dummy */
    MAKE_exp_aggregate ( type_void, (ZIp), NULL_list ( OFFSET ), (ZIe) ) ;
#line 3276 "syntax3.c"
			}
			/* END OF ACTION: exp_aggregate */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRadditive_Hexpression(EXP *ZO930)
{
	EXP ZI930;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRmultiplicative_Hexpression (&ZIe);
		ZR931 (ZIe, &ZI930);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO930 = ZI930;
}

void
ZRdirect_Hdeclarator(TYPE *ZO872, IDENTIFIER *ZO873)
{
	TYPE ZI872;
	IDENTIFIER ZI873;

	switch (CURRENT_TERMINAL) {
	case 65:
		{
			TYPE ZIt;
			IDENTIFIER ZIid;

			ADVANCE_LEXER;
			ZRdeclarator_Haux (&ZIt, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: declarator_bad */
			{
#line 1228 "syntax.act"

    if ( IS_NULL_type ( (ZIt) ) ) {
	report ( crt_loc, ERR_dcl_meaning_paren () ) ;
    }
#line 3345 "syntax3.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR874 (ZIt, ZIid, &ZI872, &ZI873);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 1: case 2: case 4:
		{
			IDENTIFIER ZIid;
			TYPE ZIt;

			/* BEGINNING OF INLINE: any-identifier */
			{
				switch (CURRENT_TERMINAL) {
				case 1:
					{
						/* BEGINNING OF EXTRACT: identifier */
						{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3377 "syntax3.c"
						}
						/* END OF EXTRACT: identifier */
						ADVANCE_LEXER;
					}
					break;
				case 4:
					{
						/* BEGINNING OF EXTRACT: statement-name */
						{
#line 207 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3390 "syntax3.c"
						}
						/* END OF EXTRACT: statement-name */
						ADVANCE_LEXER;
					}
					break;
				case 2:
					{
						/* BEGINNING OF EXTRACT: type-name */
						{
#line 199 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3403 "syntax3.c"
						}
						/* END OF EXTRACT: type-name */
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: any-identifier */
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 3419 "syntax3.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 3428 "syntax3.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR874 (ZIt, ZIid, &ZI872, &ZI873);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO872 = ZI872;
	*ZO873 = ZI873;
}

void
ZRselection_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 109:
		{
			unsigned ZIx;
			int ZIr;
			EXP ZIc;
			EXP ZIa;
			EXP ZIbs;
			EXP ZIb;
			EXP ZId;
			EXP ZIf;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: condition_get */
			{
#line 844 "syntax.act"
 (ZIx) = crt_condition ; 
#line 3474 "syntax3.c"
			}
			/* END OF ACTION: condition_get */
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 3490 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			ZRopen_Hround_Hx ();
			ZRexpression (&ZIc);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_if_begin */
			{
#line 732 "syntax.act"

    (ZIa) = begin_if_stmt ( (ZIc) ) ;
#line 3504 "syntax3.c"
			}
			/* END OF ACTION: stmt_if_begin */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_compound_begin */
			{
#line 652 "syntax.act"

    (ZIbs) = begin_compound_stmt ( 1 ) ;
#line 3519 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_begin */
			ZRscoped_Hstatement (ZIbs, &ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 3531 "syntax3.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_if_cont */
			{
#line 736 "syntax.act"

    (ZId) = cont_if_stmt ( (ZIa), (ZIb) ) ;
#line 3539 "syntax3.c"
			}
			/* END OF ACTION: stmt_if_cont */
			/* BEGINNING OF INLINE: 586 */
			{
				{
					EXP ZIfs;

					switch (CURRENT_TERMINAL) {
					case 103:
						break;
					default:
						goto ZL3;
					}
					ADVANCE_LEXER;
					/* BEGINNING OF ACTION: stmt_else */
					{
#line 744 "syntax.act"

    check_empty_stmt ( lex_else ) ;
#line 3559 "syntax3.c"
					}
					/* END OF ACTION: stmt_else */
					/* BEGINNING OF ACTION: stmt_compound_begin */
					{
#line 652 "syntax.act"

    (ZIfs) = begin_compound_stmt ( 1 ) ;
#line 3567 "syntax3.c"
					}
					/* END OF ACTION: stmt_compound_begin */
					ZRscoped_Hstatement (ZIfs, &ZIf);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL3;
					}
				}
				goto ZL2;
			ZL3:;
				{
					/* BEGINNING OF ACTION: stmt_no_else */
					{
#line 748 "syntax.act"

    report ( crt_loc, ERR_stmt_if_no_else () ) ;
    (ZIf) = NULL_exp ;
#line 3585 "syntax3.c"
					}
					/* END OF ACTION: stmt_no_else */
				}
			ZL2:;
			}
			/* END OF INLINE: 586 */
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 3596 "syntax3.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_if_end */
			{
#line 740 "syntax.act"

    (ZIe) = end_if_stmt ( (ZId), (ZIf) ) ;
#line 3604 "syntax3.c"
			}
			/* END OF ACTION: stmt_if_end */
			/* BEGINNING OF ACTION: condition_set */
			{
#line 845 "syntax.act"
 crt_condition = (ZIx) ; 
#line 3611 "syntax3.c"
			}
			/* END OF ACTION: condition_set */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3619 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
		}
		break;
	case 119:
		{
			int ZIr;
			EXP ZIc;
			EXP ZIa;
			int ZIex;
			EXP ZIbs;
			EXP ZIb;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 3647 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRexpression (&ZIc);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_switch_begin */
			{
#line 781 "syntax.act"

    (ZIa) = begin_switch_stmt ( (ZIc) ) ;
#line 3667 "syntax3.c"
			}
			/* END OF ACTION: stmt_switch_begin */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF INLINE: 589 */
			{
				switch (CURRENT_TERMINAL) {
				case 217:
					{
						ADVANCE_LEXER;
						/* BEGINNING OF ACTION: bool_true */
						{
#line 1407 "syntax.act"
 (ZIex) = 1 ; 
#line 3687 "syntax3.c"
						}
						/* END OF ACTION: bool_true */
					}
					break;
				default:
					{
						/* BEGINNING OF ACTION: bool_false */
						{
#line 1406 "syntax.act"
 (ZIex) = 0 ; 
#line 3698 "syntax3.c"
						}
						/* END OF ACTION: bool_false */
					}
					break;
				}
			}
			/* END OF INLINE: 589 */
			/* BEGINNING OF ACTION: stmt_compound_begin */
			{
#line 652 "syntax.act"

    (ZIbs) = begin_compound_stmt ( 1 ) ;
#line 3711 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_begin */
			ZRscoped_Hstatement (ZIbs, &ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 3723 "syntax3.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_switch_end */
			{
#line 785 "syntax.act"

    (ZIe) = end_switch_stmt ( (ZIa), (ZIb), (ZIex) ) ;
#line 3731 "syntax3.c"
			}
			/* END OF ACTION: stmt_switch_end */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3739 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
		}
		break;
	case 26:
		{
			ZRtarget_Hcondition (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3756 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRexpression(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255:
		{
			EXP ZI1027;

			ZRassignment_Hexpression (&ZI1027);
			ZR1029 (&ZI1027, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 298: case 324:
		{
			EXP ZIa;
			SID_LIST_EXP ZIq;
			SID_LIST_EXP ZIp;

			ZRflow_Hexpression (&ZIa);
			ZRcomma_Hexpression_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (ZIa), (ZIq), (ZIp) ) ;
#line 3814 "syntax3.c"
			}
			/* END OF ACTION: list_exp_cons */
			/* BEGINNING OF ACTION: exp_comma */
			{
#line 466 "syntax.act"

    (ZIe) = make_comma_exp ( (ZIp) ) ;
#line 3822 "syntax3.c"
			}
			/* END OF ACTION: exp_comma */
		}
		break;
	case 347:
		{
			EXP ZIa;
			SID_LIST_EXP ZIq;
			SID_LIST_EXP ZIp;

			ZRinset_Hflow_Hexpression (&ZIa);
			ZRcomma_Hexpression_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (ZIa), (ZIq), (ZIp) ) ;
#line 3844 "syntax3.c"
			}
			/* END OF ACTION: list_exp_cons */
			/* BEGINNING OF ACTION: exp_comma */
			{
#line 466 "syntax.act"

    (ZIe) = make_comma_exp ( (ZIp) ) ;
#line 3852 "syntax3.c"
			}
			/* END OF ACTION: exp_comma */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRstatement_Hseq_Hopt(EXP ZIc, int ZId, EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_statement_Hseq_Hopt:;
	{
		EXP ZIa;
		EXP ZIb;

		/* BEGINNING OF ACTION: is_decl_statement */
		{
#line 1427 "syntax.act"

    /* Resolve declaration-statements from expression-statements */
    int b = predict_decl () ;
    if ( b ) {
	if ( !(ZId) ) report ( crt_loc, ERR_stmt_dcl_start () ) ;
	in_declaration++ ;
    }
    (ZI0) = b ;
#line 3894 "syntax3.c"
		}
		/* END OF ACTION: is_decl_statement */
		if (!ZI0)
			goto ZL3;
		ZRdeclaration ();
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: stmt_decl */
		{
#line 677 "syntax.act"

    in_declaration-- ;
    (ZIa) = NULL_exp ;
#line 3910 "syntax3.c"
		}
		/* END OF ACTION: stmt_decl */
		/* BEGINNING OF ACTION: stmt_label_clear */
		{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3918 "syntax3.c"
		}
		/* END OF ACTION: stmt_label_clear */
		/* BEGINNING OF ACTION: stmt_compound_add */
		{
#line 665 "syntax.act"

    (ZIb) = add_compound_stmt ( (ZIc), (ZIa) ) ;
#line 3926 "syntax3.c"
		}
		/* END OF ACTION: stmt_compound_add */
		/* BEGINNING OF INLINE: statement-seq-opt */
		ZIc = ZIb;
		goto ZL2_statement_Hseq_Hopt;
		/* END OF INLINE: statement-seq-opt */
	}
	UNREACHED;
ZL3:;
	switch (CURRENT_TERMINAL) {
	case 1: case 2: case 4: case 17:
	case 18: case 19: case 20: case 21:
	case 22: case 23: case 24: case 26:
	case 33: case 43: case 59: case 61:
	case 62: case 64: case 65: case 69:
	case 71: case 77: case 78: case 85:
	case 95: case 96: case 99: case 100:
	case 101: case 107: case 108: case 109:
	case 113: case 116: case 119: case 125:
	case 126: case 170: case 206: case 210:
	case 223: case 255: case 289: case 298:
	case 323: case 324: case 347:
		{
			EXP ZIa;
			EXP ZIb;
			int ZIdb;

			ZRstatement (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_compound_add */
			{
#line 665 "syntax.act"

    (ZIb) = add_compound_stmt ( (ZIc), (ZIa) ) ;
#line 3964 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_add */
			/* BEGINNING OF ACTION: bool_false */
			{
#line 1406 "syntax.act"
 (ZIdb) = 0 ; 
#line 3971 "syntax3.c"
			}
			/* END OF ACTION: bool_false */
			/* BEGINNING OF INLINE: statement-seq-opt */
			ZIc = ZIb;
			ZId = ZIdb;
			goto ZL2_statement_Hseq_Hopt;
			/* END OF INLINE: statement-seq-opt */
		}
		UNREACHED;
	default:
		{
			ZIe = ZIc;
		}
		break;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRscoped_Hstmt_Hbody(EXP ZIc, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 64:
		{
			int ZId;

			/* BEGINNING OF INLINE: open-brace */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 64:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: open-brace */
			/* BEGINNING OF ACTION: stmt_compound_block */
			{
#line 660 "syntax.act"

    COPY_int ( exp_sequence_block ( (ZIc) ), 2 ) ;
    (ZId) = 1 ;
#line 4024 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_block */
			ZRstatement_Hseq_Hopt (ZIc, ZId, &ZIe);
			/* BEGINNING OF INLINE: close-brace */
			{
				if ((CURRENT_TERMINAL) == 356) {
					RESTORE_LEXER;
					goto ZL1;
				}
				{
					switch (CURRENT_TERMINAL) {
					case 38:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: close-brace */
		}
		break;
	case 1: case 2: case 4: case 17:
	case 18: case 19: case 20: case 21:
	case 22: case 23: case 24: case 26:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 77: case 78: case 85: case 95:
	case 96: case 99: case 100: case 101:
	case 107: case 108: case 109: case 113:
	case 116: case 119: case 125: case 126:
	case 170: case 206: case 210: case 223:
	case 255: case 289: case 298: case 323:
	case 324: case 347:
		{
			EXP ZIa;

			ZRsimple_Hstatement (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_compound_add */
			{
#line 665 "syntax.act"

    (ZIe) = add_compound_stmt ( (ZIc), (ZIa) ) ;
#line 4072 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_add */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRasm_Hfunction_Hattributes(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIa;
		SID_LIST_EXP ZIp;

		switch (CURRENT_TERMINAL) {
		case 126:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		switch (CURRENT_TERMINAL) {
		case 65:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		/* BEGINNING OF INLINE: string-literal */
		{
			switch (CURRENT_TERMINAL) {
			case 19:
				{
					/* BEGINNING OF EXTRACT: string-exp */
					{
#line 297 "syntax.act"

    ZIa = crt_token->pp_data.exp ;
#line 4126 "syntax3.c"
					}
					/* END OF EXTRACT: string-exp */
					ADVANCE_LEXER;
				}
				break;
			case 20:
				{
					/* BEGINNING OF EXTRACT: wstring-exp */
					{
#line 301 "syntax.act"

    ZIa = crt_token->pp_data.exp ;
#line 4139 "syntax3.c"
					}
					/* END OF EXTRACT: wstring-exp */
					ADVANCE_LEXER;
				}
				break;
			default:
				goto ZL1;
			}
		}
		/* END OF INLINE: string-literal */
		ZR629 (&ZIp);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: declare_asm */
		{
#line 1289 "syntax.act"

    (ZIe) = make_asm ( (ZIa), (ZIp) ) ;
#line 4160 "syntax3.c"
		}
		/* END OF ACTION: declare_asm */
		switch (CURRENT_TERMINAL) {
		case 39:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 64:
		{
			ZRcompound_Hstatement (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 1: case 2: case 4: case 17:
	case 18: case 19: case 20: case 21:
	case 22: case 23: case 24: case 26:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 77: case 78: case 85: case 95:
	case 96: case 99: case 100: case 101:
	case 107: case 108: case 109: case 113:
	case 116: case 119: case 125: case 126:
	case 170: case 206: case 210: case 223:
	case 255: case 289: case 298: case 323:
	case 324: case 347:
		{
			ZRsimple_Hstatement (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR729(BASE_TYPE *ZIb1, TYPE *ZIt1, CV_SPEC *ZIcv1, DECL_SPEC *ZIds1, BASE_TYPE *ZObt, TYPE *ZOt, CV_SPEC *ZOcv, DECL_SPEC *ZOds)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;
	CV_SPEC ZIcv;
	DECL_SPEC ZIds;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZI1103;
		TYPE ZI1104;
		CV_SPEC ZI1105;
		DECL_SPEC ZI1106;
		BASE_TYPE ZIb2;
		TYPE ZIt2;
		CV_SPEC ZIcv2;
		DECL_SPEC ZIds2;

		/* BEGINNING OF ACTION: is_decl_specifier */
		{
#line 1422 "syntax.act"

    /* Resolve declaration-specifiers from other declarators */
    (ZI0) = predict_dspec ( 0 ) ;
#line 4254 "syntax3.c"
		}
		/* END OF ACTION: is_decl_specifier */
		if (!ZI0)
			goto ZL2;
		ZRdecl_Hspecifier (&ZI1103, &ZI1104, &ZI1105, &ZI1106);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: check_decl_specifier */
		{
#line 1470 "syntax.act"

    /* A type-name can be a declarator-id */
    if ( have_type_specifier && crt_lex_token == lex_type_Hname ) {
	crt_lex_token = lex_identifier ;
    }
#line 4272 "syntax3.c"
		}
		/* END OF ACTION: check_decl_specifier */
		ZR729 (&ZI1103, &ZI1104, &ZI1105, &ZI1106, &ZIb2, &ZIt2, &ZIcv2, &ZIds2);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: btype_join */
		{
#line 928 "syntax.act"

    if ( (*ZIb1) & (ZIb2) ) {
	(ZIbt) = join_pre_types ( (*ZIb1), (ZIb2) ) ;
    } else {
	(ZIbt) = ( (*ZIb1) | (ZIb2) ) ;
    }
#line 4289 "syntax3.c"
		}
		/* END OF ACTION: btype_join */
		/* BEGINNING OF ACTION: type_join */
		{
#line 973 "syntax.act"

    /* Join two partial types */
    if ( IS_NULL_type ( (*ZIt1) ) ) {
	(ZIt) = (ZIt2) ;
    } else if ( IS_NULL_type ( (ZIt2) ) ) {
	(ZIt) = (*ZIt1) ;
    } else {
	report ( crt_loc, ERR_dcl_type_simple_many ( (*ZIt1), (ZIt2) ) ) ;
	(ZIt) = (ZIt2) ;
    }
#line 4305 "syntax3.c"
		}
		/* END OF ACTION: type_join */
		/* BEGINNING OF ACTION: cv_join */
		{
#line 899 "syntax.act"

    CV_SPEC c = ( (*ZIcv1) & (ZIcv2) ) ;
    if ( c ) report ( crt_loc, ERR_dcl_type_cv_dup ( c ) ) ;
    (ZIcv) = ( (*ZIcv1) | (ZIcv2) ) ;
#line 4315 "syntax3.c"
		}
		/* END OF ACTION: cv_join */
		/* BEGINNING OF ACTION: dspec_join */
		{
#line 1122 "syntax.act"

    /* Combine two declaration specifiers */
    DECL_SPEC d = ( ( (*ZIds1) & (ZIds2) ) & dspec_duplicate ) ;
    if ( d ) report ( crt_loc, ERR_dcl_spec_dup ( d ) ) ;
    (ZIds) = ( (*ZIds1) | (ZIds2) ) ;
#line 4326 "syntax3.c"
		}
		/* END OF ACTION: dspec_join */
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	default:
		{
			ZIbt = *ZIb1;
			ZIt = *ZIt1;
			ZIcv = *ZIcv1;
			ZIds = *ZIds1;
		}
		break;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZObt = ZIbt;
	*ZOt = ZIt;
	*ZOcv = ZIcv;
	*ZOds = ZIds;
}

void
ZRdirect_Habstract_Hdeclarator(TYPE *ZO865)
{
	TYPE ZI865;

	switch (CURRENT_TERMINAL) {
	case 65:
		{
			ADVANCE_LEXER;
			ZR1062 (&ZI865);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 333:
		{
			IDENTIFIER ZIid;
			int ZIell;
			TYPE ZIt;

			ADVANCE_LEXER;
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: id_none */
			{
#line 382 "syntax.act"

    (ZIid) = NULL_id ;
#line 4389 "syntax3.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 4400 "syntax3.c"
			}
			/* END OF ACTION: param_begin */
			ZR755 (&ZIell);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_func_weak */
			{
#line 1017 "syntax.act"

    (ZIt) = make_func_type ( NULL_type, ( (ZIell) | FUNC_WEAK ), cv_c, empty_type_set ) ;
#line 4413 "syntax3.c"
			}
			/* END OF ACTION: type_func_weak */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: param_end */
			{
#line 879 "syntax.act"

    end_param () ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 1 ;
#line 4430 "syntax3.c"
			}
			/* END OF ACTION: param_end */
			ZR866 (ZIt, &ZI865);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 66:
		{
			EXP ZIe;
			TYPE ZIt;

			/* BEGINNING OF INLINE: open-square */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 66:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: open-square */
			ZR754 (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_array */
			{
#line 1029 "syntax.act"

    NAT n = make_array_dim ( (ZIe) ) ;
    MAKE_type_array ( cv_none, NULL_type, n, (ZIt) ) ;
#line 4469 "syntax3.c"
			}
			/* END OF ACTION: type_array */
			/* BEGINNING OF INLINE: close-square */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 40:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: close-square */
			ZR866 (ZIt, &ZI865);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO865 = ZI865;
}

void
ZRiteration_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 101:
		{
			unsigned ZIx;
			int ZIr;
			EXP ZIa;
			EXP ZIbs;
			EXP ZIb;
			EXP ZIc0;
			EXP ZIc;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: condition_get */
			{
#line 844 "syntax.act"
 (ZIx) = crt_condition ; 
#line 4526 "syntax3.c"
			}
			/* END OF ACTION: condition_get */
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 4542 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_do_begin */
			{
#line 690 "syntax.act"

    (ZIa) = begin_do_stmt () ;
#line 4550 "syntax3.c"
			}
			/* END OF ACTION: stmt_do_begin */
			/* BEGINNING OF ACTION: stmt_compound_begin */
			{
#line 652 "syntax.act"

    (ZIbs) = begin_compound_stmt ( 1 ) ;
#line 4558 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_begin */
			ZRscoped_Hstatement (ZIbs, &ZIb);
			switch (CURRENT_TERMINAL) {
			case 125:
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRexpression (&ZIc0);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: bind_temporary */
			{
#line 817 "syntax.act"

    (ZIc) = bind_temporary ( (ZIc0) ) ;
#line 4589 "syntax3.c"
			}
			/* END OF ACTION: bind_temporary */
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 4596 "syntax3.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_do_end */
			{
#line 694 "syntax.act"

    (ZIe) = end_do_stmt ( (ZIa), (ZIb), (ZIc) ) ;
#line 4604 "syntax3.c"
			}
			/* END OF ACTION: stmt_do_end */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: condition_set */
			{
#line 845 "syntax.act"
 crt_condition = (ZIx) ; 
#line 4618 "syntax3.c"
			}
			/* END OF ACTION: condition_set */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4626 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			ZRsemicolon_Hx ();
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 107:
		{
			unsigned ZIx;
			int ZIr;
			EXP ZIf;
			EXP ZIa;
			EXP ZIg;
			EXP ZIc;
			EXP ZIds;
			EXP ZIb;
			EXP ZIh;
			EXP ZId;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: condition_get */
			{
#line 844 "syntax.act"
 (ZIx) = crt_condition ; 
#line 4654 "syntax3.c"
			}
			/* END OF ACTION: condition_get */
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 4670 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_for_begin */
			{
#line 702 "syntax.act"

    (ZIf) = begin_for_stmt () ;
#line 4685 "syntax3.c"
			}
			/* END OF ACTION: stmt_for_begin */
			ZRfor_Hinit_Hstatement (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_for_init */
			{
#line 706 "syntax.act"

    (ZIg) = init_for_stmt ( (ZIf), &(ZIa) ) ;
#line 4698 "syntax3.c"
			}
			/* END OF ACTION: stmt_for_init */
			ZRfor_Hcond_Hstatement (&ZIc);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_compound_begin */
			{
#line 652 "syntax.act"

    (ZIds) = begin_compound_stmt ( 1 ) ;
#line 4711 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_begin */
			ZRfor_Hend_Hstatement (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_for_cond */
			{
#line 710 "syntax.act"

    (ZIh) = cond_for_stmt ( (ZIg), (ZIc), (ZIb) ) ;
#line 4724 "syntax3.c"
			}
			/* END OF ACTION: stmt_for_cond */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_compound_mark */
			{
#line 656 "syntax.act"

    mark_compound_stmt ( (ZIds) ) ;
#line 4739 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_mark */
			ZRscoped_Hstatement (ZIds, &ZId);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 4751 "syntax3.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_for_end */
			{
#line 714 "syntax.act"

    (ZIe) = end_for_stmt ( (ZIh), (ZId) ) ;
#line 4759 "syntax3.c"
			}
			/* END OF ACTION: stmt_for_end */
			/* BEGINNING OF ACTION: condition_set */
			{
#line 845 "syntax.act"
 crt_condition = (ZIx) ; 
#line 4766 "syntax3.c"
			}
			/* END OF ACTION: condition_set */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4774 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
			/* BEGINNING OF ACTION: rescan_token */
			{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 4782 "syntax3.c"
			}
			/* END OF ACTION: rescan_token */
		}
		break;
	case 125:
		{
			unsigned ZIx;
			int ZIr;
			EXP ZIc0;
			EXP ZIc;
			EXP ZIa;
			EXP ZIbs;
			EXP ZIb;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: condition_get */
			{
#line 844 "syntax.act"
 (ZIx) = crt_condition ; 
#line 4802 "syntax3.c"
			}
			/* END OF ACTION: condition_get */
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIr) = unreached_code ;
    if ( (ZIr) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 4818 "syntax3.c"
			}
			/* END OF ACTION: reach_check */
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZRexpression (&ZIc0);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: bind_temporary */
			{
#line 817 "syntax.act"

    (ZIc) = bind_temporary ( (ZIc0) ) ;
#line 4838 "syntax3.c"
			}
			/* END OF ACTION: bind_temporary */
			/* BEGINNING OF ACTION: stmt_while_begin */
			{
#line 789 "syntax.act"

    (ZIa) = begin_while_stmt ( (ZIc) ) ;
#line 4846 "syntax3.c"
			}
			/* END OF ACTION: stmt_while_begin */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_compound_begin */
			{
#line 652 "syntax.act"

    (ZIbs) = begin_compound_stmt ( 1 ) ;
#line 4861 "syntax3.c"
			}
			/* END OF ACTION: stmt_compound_begin */
			ZRscoped_Hstatement (ZIbs, &ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 4873 "syntax3.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_while_end */
			{
#line 793 "syntax.act"

    (ZIe) = end_while_stmt ( (ZIa), (ZIb) ) ;
#line 4881 "syntax3.c"
			}
			/* END OF ACTION: stmt_while_end */
			/* BEGINNING OF ACTION: condition_set */
			{
#line 845 "syntax.act"
 crt_condition = (ZIx) ; 
#line 4888 "syntax3.c"
			}
			/* END OF ACTION: condition_set */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4896 "syntax3.c"
			}
			/* END OF ACTION: stmt_label_clear */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRassignment_Hoperator(void)
{
	switch (CURRENT_TERMINAL) {
	case 45:
		{
			ADVANCE_LEXER;
		}
		break;
	case 58:
		{
			ADVANCE_LEXER;
		}
		break;
	case 60:
		{
			ADVANCE_LEXER;
		}
		break;
	case 70:
		{
			ADVANCE_LEXER;
		}
		break;
	case 74:
		{
			ADVANCE_LEXER;
		}
		break;
	case 76:
		{
			ADVANCE_LEXER;
		}
		break;
	case 79:
		{
			ADVANCE_LEXER;
		}
		break;
	case 34:
		{
			/* BEGINNING OF INLINE: and-eq */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 34:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: and-eq */
		}
		break;
	case 68:
		{
			/* BEGINNING OF INLINE: or-eq */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 68:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: or-eq */
		}
		break;
	case 81:
		{
			/* BEGINNING OF INLINE: xor-eq */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 81:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: xor-eq */
		}
		break;
	case 356:
		return;
	default:
		goto ZL1;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

/* END OF FILE */
