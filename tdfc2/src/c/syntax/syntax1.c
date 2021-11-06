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


#line 96 "syntax1.c"

/* BEGINNING OF STATIC VARIABLES */

int ZI0;

/* BEGINNING OF FUNCTION DEFINITIONS */

void
ZRbase_Htype_Hspecifier(BASE_TYPE *ZObt)
{
	BASE_TYPE ZIbt;

	switch (CURRENT_TERMINAL) {
	case 185:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_bottom */
			{
#line 925 "syntax.act"
 (ZIbt) = btype_bottom ; 
#line 117 "syntax1.c"
			}
			/* END OF ACTION: btype_bottom */
		}
		break;
	case 97:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_char */
			{
#line 913 "syntax.act"
 (ZIbt) = btype_char ; 
#line 129 "syntax1.c"
			}
			/* END OF ACTION: btype_char */
		}
		break;
	case 102:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_double */
			{
#line 920 "syntax.act"
 (ZIbt) = btype_double ; 
#line 141 "syntax1.c"
			}
			/* END OF ACTION: btype_double */
		}
		break;
	case 106:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_float */
			{
#line 919 "syntax.act"
 (ZIbt) = btype_float ; 
#line 153 "syntax1.c"
			}
			/* END OF ACTION: btype_float */
		}
		break;
	case 110:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_int */
			{
#line 915 "syntax.act"
 (ZIbt) = btype_int ; 
#line 165 "syntax1.c"
			}
			/* END OF ACTION: btype_int */
		}
		break;
	case 111:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_long */
			{
#line 916 "syntax.act"
 (ZIbt) = btype_long ; 
#line 177 "syntax1.c"
			}
			/* END OF ACTION: btype_long */
		}
		break;
	case 286:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_ptrdiff_t */
			{
#line 923 "syntax.act"
 (ZIbt) = btype_ptrdiff_t ; 
#line 189 "syntax1.c"
			}
			/* END OF ACTION: btype_ptrdiff_t */
		}
		break;
	case 114:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_short */
			{
#line 914 "syntax.act"
 (ZIbt) = btype_short ; 
#line 201 "syntax1.c"
			}
			/* END OF ACTION: btype_short */
		}
		break;
	case 115:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_signed */
			{
#line 917 "syntax.act"
 (ZIbt) = btype_signed ; 
#line 213 "syntax1.c"
			}
			/* END OF ACTION: btype_signed */
		}
		break;
	case 299:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_size_t */
			{
#line 922 "syntax.act"
 (ZIbt) = btype_size_t ; 
#line 225 "syntax1.c"
			}
			/* END OF ACTION: btype_size_t */
		}
		break;
	case 122:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_unsigned */
			{
#line 918 "syntax.act"
 (ZIbt) = btype_unsigned ; 
#line 237 "syntax1.c"
			}
			/* END OF ACTION: btype_unsigned */
		}
		break;
	case 123:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_void */
			{
#line 924 "syntax.act"
 (ZIbt) = btype_void ; 
#line 249 "syntax1.c"
			}
			/* END OF ACTION: btype_void */
		}
		break;
	case 156:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_wchar_t */
			{
#line 921 "syntax.act"
 (ZIbt) = btype_wchar_t ; 
#line 261 "syntax1.c"
			}
			/* END OF ACTION: btype_wchar_t */
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
}

void
ZR891(EXP ZI885, EXP ZI886, int ZI887, EXP *ZO888, EXP *ZO889, int *ZO890)
{
	EXP ZI888;
	EXP ZI889;
	int ZI890;

ZL2_891:;
	switch (CURRENT_TERMINAL) {
	case 27:
		{
			EXP ZIp;
			int ZIr;
			EXP ZIc;
			int ZIs;
			EXP ZIb;
			EXP ZIe;

			ZIp = ZI886;
			ZIr = ZI887;
			/* BEGINNING OF EXTRACT: hash-elif */
			{
#line 317 "syntax.act"

    ZIc = crt_token->pp_data.exp ;
#line 304 "syntax1.c"
			}
			/* END OF EXTRACT: hash-elif */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: cond_hash_elif */
			{
#line 1315 "syntax.act"

    EXP c = make_else_cond ( crt_hash_cond ) ;
    crt_hash_cond = make_if_cond ( (ZIc), c ) ;
#line 314 "syntax1.c"
			}
			/* END OF ACTION: cond_hash_elif */
			/* BEGINNING OF ACTION: reach_check */
			{
#line 828 "syntax.act"

    (ZIs) = unreached_code ;
    if ( (ZIs) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 330 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			ZRcompound_Hstatement (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: reach_prev */
			{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 342 "syntax1.c"
			}
			/* END OF ACTION: reach_prev */
			/* BEGINNING OF ACTION: stmt_hash_elif */
			{
#line 801 "syntax.act"

    (ZIe) = cont_hash_if_stmt ( (ZI885), (ZIc), (ZIb) ) ;
#line 350 "syntax1.c"
			}
			/* END OF ACTION: stmt_hash_elif */
			/* BEGINNING OF INLINE: 891 */
			ZI885 = ZIe;
			ZI886 = ZIp;
			ZI887 = ZIr;
			goto ZL2_891;
			/* END OF INLINE: 891 */
		}
		UNREACHED;
	default:
		{
			ZI888 = ZI885;
			ZI889 = ZI886;
			ZI890 = ZI887;
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
	*ZO888 = ZI888;
	*ZO889 = ZI889;
	*ZO890 = ZI890;
}

void
ZRdecl_Hspecifier_Hseq(BASE_TYPE *ZObt, TYPE *ZOt, CV_SPEC *ZOcv, DECL_SPEC *ZOds)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;
	CV_SPEC ZIcv;
	DECL_SPEC ZIds;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZIb1;
		TYPE ZIt1;
		CV_SPEC ZIcv1;
		DECL_SPEC ZIds1;

		ZRdecl_Hspecifier (&ZIb1, &ZIt1, &ZIcv1, &ZIds1);
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
#line 411 "syntax1.c"
		}
		/* END OF ACTION: check_decl_specifier */
		/* BEGINNING OF INLINE: 722 */
		{
			switch (CURRENT_TERMINAL) {
			case 2: case 25: case 94: case 97:
			case 98: case 102: case 104: case 105:
			case 106: case 110: case 111: case 112:
			case 114: case 115: case 117: case 118:
			case 120: case 121: case 122: case 123:
			case 124: case 137: case 156: case 185:
			case 286: case 299:
				{
					BASE_TYPE ZIb2;
					TYPE ZIt2;
					CV_SPEC ZIcv2;
					DECL_SPEC ZIds2;

					ZRdecl_Hspecifier_Hseq (&ZIb2, &ZIt2, &ZIcv2, &ZIds2);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: btype_join */
					{
#line 928 "syntax.act"

    if ( (ZIb1) & (ZIb2) ) {
	(ZIbt) = join_pre_types ( (ZIb1), (ZIb2) ) ;
    } else {
	(ZIbt) = ( (ZIb1) | (ZIb2) ) ;
    }
#line 444 "syntax1.c"
					}
					/* END OF ACTION: btype_join */
					/* BEGINNING OF ACTION: type_join */
					{
#line 973 "syntax.act"

    /* Join two partial types */
    if ( IS_NULL_type ( (ZIt1) ) ) {
	(ZIt) = (ZIt2) ;
    } else if ( IS_NULL_type ( (ZIt2) ) ) {
	(ZIt) = (ZIt1) ;
    } else {
	report ( crt_loc, ERR_dcl_type_simple_many ( (ZIt1), (ZIt2) ) ) ;
	(ZIt) = (ZIt2) ;
    }
#line 460 "syntax1.c"
					}
					/* END OF ACTION: type_join */
					/* BEGINNING OF ACTION: cv_join */
					{
#line 899 "syntax.act"

    CV_SPEC c = ( (ZIcv1) & (ZIcv2) ) ;
    if ( c ) report ( crt_loc, ERR_dcl_type_cv_dup ( c ) ) ;
    (ZIcv) = ( (ZIcv1) | (ZIcv2) ) ;
#line 470 "syntax1.c"
					}
					/* END OF ACTION: cv_join */
					/* BEGINNING OF ACTION: dspec_join */
					{
#line 1122 "syntax.act"

    /* Combine two declaration specifiers */
    DECL_SPEC d = ( ( (ZIds1) & (ZIds2) ) & dspec_duplicate ) ;
    if ( d ) report ( crt_loc, ERR_dcl_spec_dup ( d ) ) ;
    (ZIds) = ( (ZIds1) | (ZIds2) ) ;
#line 481 "syntax1.c"
					}
					/* END OF ACTION: dspec_join */
				}
				break;
			default:
				{
					ZIbt = ZIb1;
					ZIt = ZIt1;
					ZIcv = ZIcv1;
					ZIds = ZIds1;
				}
				break;
			}
		}
		/* END OF INLINE: 722 */
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
ZRdeclarator_Htail(IDENTIFIER ZIid, TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 65:
		{
			TYPE ZIs;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 528 "syntax1.c"
			}
			/* END OF ACTION: param_begin */
			/* BEGINNING OF INLINE: 751 */
			{
				switch (CURRENT_TERMINAL) {
				case 2: case 25: case 47: case 94:
				case 97: case 98: case 102: case 104:
				case 105: case 106: case 110: case 111:
				case 112: case 114: case 115: case 117:
				case 118: case 120: case 121: case 122:
				case 123: case 124: case 137: case 156:
				case 185: case 286: case 299:
					{
						int ZIell;

						ZRparameter_Hdeclaration_Hlist (&ZIell);
						if ((CURRENT_TERMINAL) == 356) {
							RESTORE_LEXER;
							goto ZL1;
						}
						/* BEGINNING OF ACTION: type_func */
						{
#line 1013 "syntax.act"

    (ZIs) = make_func_type ( NULL_type, (ZIell), cv_c, empty_type_set ) ;
#line 554 "syntax1.c"
						}
						/* END OF ACTION: type_func */
						switch (CURRENT_TERMINAL) {
						case 39:
							break;
						default:
							goto ZL1;
						}
						ADVANCE_LEXER;
					}
					break;
				case 1: case 4:
					{
						ZRparameter_Hid_Hlist ();
						if ((CURRENT_TERMINAL) == 356) {
							RESTORE_LEXER;
							goto ZL1;
						}
						/* BEGINNING OF ACTION: type_func_old */
						{
#line 1021 "syntax.act"

    (ZIs) = make_func_type ( NULL_type, FUNC_PARAMS, cv_c, empty_type_set ) ;
#line 578 "syntax1.c"
						}
						/* END OF ACTION: type_func_old */
						switch (CURRENT_TERMINAL) {
						case 39:
							break;
						default:
							goto ZL1;
						}
						ADVANCE_LEXER;
					}
					break;
				case 39:
					{
						/* BEGINNING OF ACTION: type_func_none */
						{
#line 1025 "syntax.act"

    (ZIs) = make_func_type ( NULL_type, FUNC_NO_PARAMS, cv_c, empty_type_set ) ;
#line 597 "syntax1.c"
						}
						/* END OF ACTION: type_func_none */
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: 751 */
			ZIt = ZIs;
			/* BEGINNING OF ACTION: param_end */
			{
#line 879 "syntax.act"

    end_param () ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 1 ;
#line 616 "syntax1.c"
			}
			/* END OF ACTION: param_end */
		}
		break;
	case 333:
		{
			int ZIell;

			ADVANCE_LEXER;
			switch (CURRENT_TERMINAL) {
			case 65:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 641 "syntax1.c"
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
#line 654 "syntax1.c"
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
#line 671 "syntax1.c"
			}
			/* END OF ACTION: param_end */
		}
		break;
	case 66:
		{
			EXP ZIe;

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
#line 704 "syntax1.c"
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
	*ZOt = ZIt;
}

void
ZRparameter_Hdeclaration(IDENTIFIER *ZOd)
{
	IDENTIFIER ZId;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZIbt;
		TYPE ZIt1;
		CV_SPEC ZIcv;
		DECL_SPEC ZIds1;
		TYPE ZIt2;
		DECL_SPEC ZIds;
		TYPE ZIt;
		IDENTIFIER ZIid;

		ZRdecl_Hspecifier_Hseq (&ZIbt, &ZIt1, &ZIcv, &ZIds1);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: dspec_complete */
		{
#line 1133 "syntax.act"

    /* Complete a declaration specifier and a type */
    (ZIds) = complete_dspec ( (ZIds1), (ZIbt), (ZIt1), (ZIcv) ) ;
    (ZIt2) = complete_pre_type ( (ZIbt), (ZIt1), (ZIcv), 0 ) ;
    have_type_specifier = 0 ;
#line 766 "syntax1.c"
		}
		/* END OF ACTION: dspec_complete */
		ZRparameter_Hdeclarator_Hopt (ZIt2, &ZIt, &ZIid);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: declare_param */
		{
#line 1186 "syntax.act"

    (ZId) = make_param_decl ( (ZIds), (ZIt), (ZIid), CONTEXT_PARAMETER ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 781 "syntax1.c"
		}
		/* END OF ACTION: declare_param */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOd = ZId;
}

void
ZR895(EXP ZI893, EXP *ZO894)
{
	EXP ZI894;

ZL2_895:;
	switch (CURRENT_TERMINAL) {
	case 56:
		{
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF INLINE: logical-or */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 56:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: logical-or */
			ZRlogical_Hand_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_log_or */
			{
#line 532 "syntax.act"

    (ZIe) = make_log_or_exp ( (ZI893), (ZIb) ) ;
#line 828 "syntax1.c"
			}
			/* END OF ACTION: exp_log_or */
			/* BEGINNING OF INLINE: 895 */
			ZI893 = ZIe;
			goto ZL2_895;
			/* END OF INLINE: 895 */
		}
		UNREACHED;
	default:
		{
			ZI894 = ZI893;
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
	*ZO894 = ZI894;
}

void
ZRtarget_Hcondition(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIa;
		EXP ZIp;
		int ZIr;
		EXP ZIb;

		ZRtarget_Hcondition_Hhead (&ZIa, &ZIp, &ZIr);
		/* BEGINNING OF INLINE: 573 */
		{
			switch (CURRENT_TERMINAL) {
			case 28:
				{
					int ZIs;

					ADVANCE_LEXER;
					/* BEGINNING OF ACTION: cond_hash_else */
					{
#line 1320 "syntax.act"

    crt_hash_cond = make_else_cond ( crt_hash_cond ) ;
#line 881 "syntax1.c"
					}
					/* END OF ACTION: cond_hash_else */
					/* BEGINNING OF ACTION: reach_check */
					{
#line 828 "syntax.act"

    (ZIs) = unreached_code ;
    if ( (ZIs) ) {
	if ( !unreached_last ) {
	    report ( crt_loc, ERR_stmt_stmt_unreach () ) ;
	    unreached_last = 1 ;
	}
    } else {
	unreached_last = 0 ;
    }
#line 897 "syntax1.c"
					}
					/* END OF ACTION: reach_check */
					ZRcompound_Hstatement (&ZIb);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
				}
				break;
			default:
				{
					/* BEGINNING OF ACTION: stmt_none */
					{
#line 636 "syntax.act"

    (ZIb) = NULL_exp ;
#line 914 "syntax1.c"
					}
					/* END OF ACTION: stmt_none */
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		/* END OF INLINE: 573 */
		/* BEGINNING OF ACTION: cond_hash_endif */
		{
#line 1324 "syntax.act"

    crt_hash_cond = (ZIp) ;
#line 930 "syntax1.c"
		}
		/* END OF ACTION: cond_hash_endif */
		switch (CURRENT_TERMINAL) {
		case 29:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		/* BEGINNING OF ACTION: reach_prev */
		{
#line 840 "syntax.act"
 unreached_prev = (ZIr) ; 
#line 944 "syntax1.c"
		}
		/* END OF ACTION: reach_prev */
		/* BEGINNING OF ACTION: stmt_hash_endif */
		{
#line 805 "syntax.act"

    (ZIe) = end_hash_if_stmt ( (ZIa), (ZIb) ) ;
#line 952 "syntax1.c"
		}
		/* END OF ACTION: stmt_hash_endif */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZRclass_Hspecifier(TYPE *ZOt)
{
	TYPE ZIt;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZIkey;

		ZRclass_Hkey (&ZIkey);
		/* BEGINNING OF INLINE: 676 */
		{
			switch (CURRENT_TERMINAL) {
			case 1: case 2: case 4:
				{
					IDENTIFIER ZIid;

					/* BEGINNING OF INLINE: any-identifier */
					{
						switch (CURRENT_TERMINAL) {
						case 1:
							{
								/* BEGINNING OF EXTRACT: identifier */
								{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 993 "syntax1.c"
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
#line 1006 "syntax1.c"
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
#line 1019 "syntax1.c"
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
					ZR1032 (&ZIkey, &ZIid, &ZIt);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
				}
				break;
			case 64:
				{
					IDENTIFIER ZIid;
					IDENTIFIER ZIp;
					int ZIf;
					IDENTIFIER ZItid;

					/* BEGINNING OF ACTION: id_anon */
					{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZIid) = DEREF_id ( hashid_id ( nm ) ) ;
#line 1050 "syntax1.c"
					}
					/* END OF ACTION: id_anon */
					/* BEGINNING OF ACTION: type_class_begin */
					{
#line 1075 "syntax.act"

    (ZIp) = begin_class_defn ( (ZIid), (ZIkey), cinfo_none, NULL_type ) ;
    (ZIf) = in_function_defn ;
    in_function_defn = 0 ;
    in_class_defn++ ;
    really_in_class_defn++ ;
    no_type_defns++ ;
    end_base_class ( crt_class, 1 ) ;
#line 1064 "syntax1.c"
					}
					/* END OF ACTION: type_class_begin */
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
					ZRmember_Hspecification_Hopt ();
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
					/* BEGINNING OF ACTION: type_class_end */
					{
#line 1085 "syntax.act"

    (ZItid) = end_class_defn ( (ZIp) ) ;
    in_function_defn = (ZIf) ;
    in_class_defn-- ;
    really_in_class_defn-- ;
#line 1106 "syntax1.c"
					}
					/* END OF ACTION: type_class_end */
					/* BEGINNING OF ACTION: type_name */
					{
#line 958 "syntax.act"

    MAKE_type_pre ( cv_none, btype_alias, qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (ZItid) ) ;
    have_type_specifier = 1 ;
#line 1116 "syntax1.c"
					}
					/* END OF ACTION: type_name */
					/* BEGINNING OF ACTION: rescan_token */
					{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 1124 "syntax1.c"
					}
					/* END OF ACTION: rescan_token */
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				goto ZL1;
			}
		}
		/* END OF INLINE: 676 */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
}

void
ZR899(EXP ZI897, EXP *ZO898)
{
	EXP ZI898;

ZL2_899:;
	switch (CURRENT_TERMINAL) {
	case 55:
		{
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF INLINE: logical-and */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 55:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: logical-and */
			ZRinclusive_Hor_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_log_and */
			{
#line 528 "syntax.act"

    (ZIe) = make_log_and_exp ( (ZI897), (ZIb) ) ;
#line 1181 "syntax1.c"
			}
			/* END OF ACTION: exp_log_and */
			/* BEGINNING OF INLINE: 899 */
			ZI897 = ZIe;
			goto ZL2_899;
			/* END OF INLINE: 899 */
		}
		UNREACHED;
	default:
		{
			ZI898 = ZI897;
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
	*ZO898 = ZI898;
}

void
ZRfield_Hid_Hexpression(NAMESPACE ZIns, IDENTIFIER *ZOid)
{
	IDENTIFIER ZIid;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZIuid;

		/* BEGINNING OF INLINE: any-identifier */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZIuid = crt_token->pp_data.id.use ;
#line 1227 "syntax1.c"
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

    ZIuid = crt_token->pp_data.id.use ;
#line 1240 "syntax1.c"
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

    ZIuid = crt_token->pp_data.id.use ;
#line 1253 "syntax1.c"
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
		/* BEGINNING OF ACTION: rescan_member */
		{
#line 399 "syntax.act"

    HASHID nm = DEREF_hashid ( id_name ( (ZIuid) ) ) ;
    (ZIid) = find_qual_id ( (ZIns), nm, 1, 0 ) ;
#line 1270 "syntax1.c"
		}
		/* END OF ACTION: rescan_member */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOid = ZIid;
}

void
ZRdecl_Hspecifier(BASE_TYPE *ZObt, TYPE *ZOt, CV_SPEC *ZOcv, DECL_SPEC *ZOds)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;
	CV_SPEC ZIcv;
	DECL_SPEC ZIds;

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
#line 1302 "syntax1.c"
			}
			/* END OF ACTION: btype_none */
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 1310 "syntax1.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: dspec_none */
			{
#line 1114 "syntax.act"
 (ZIds) = dspec_none ; 
#line 1317 "syntax1.c"
			}
			/* END OF ACTION: dspec_none */
		}
		break;
	case 94: case 105: case 112: case 117:
	case 120: case 137:
		{
			ZRstorage_Hclass_Hspecifier (&ZIds);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: dspec_check */
			{
#line 1129 "syntax.act"

    if ( have_type_specifier ) report ( crt_loc, ERR_dcl_spec_order ( (ZIds) ) ) ;
#line 1335 "syntax1.c"
			}
			/* END OF ACTION: dspec_check */
			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 1342 "syntax1.c"
			}
			/* END OF ACTION: btype_none */
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 1350 "syntax1.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: cv_none */
			{
#line 895 "syntax.act"
 (ZIcv) = cv_none ; 
#line 1357 "syntax1.c"
			}
			/* END OF ACTION: cv_none */
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
#line 1377 "syntax1.c"
			}
			/* END OF ACTION: cv_none */
			/* BEGINNING OF ACTION: dspec_none */
			{
#line 1114 "syntax.act"
 (ZIds) = dspec_none ; 
#line 1384 "syntax1.c"
			}
			/* END OF ACTION: dspec_none */
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
	*ZOds = ZIds;
}

void
parse_init(IDENTIFIER ZId, EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRinitialiser_Hclause (ZId, &ZIe);
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
#line 1431 "syntax1.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: exp_none */
		{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 1439 "syntax1.c"
		}
		/* END OF ACTION: exp_none */
	}
ZL0:;
	*ZOe = ZIe;
}

void
ZRdeclaration_Hseq_Hopt(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_declaration_Hseq_Hopt:;
	{
		BASE_TYPE ZI943;
		TYPE ZI944;
		CV_SPEC ZI945;
		DECL_SPEC ZI946;
		BASE_TYPE ZI947;
		TYPE ZI948;
		CV_SPEC ZI949;
		DECL_SPEC ZI950;
		EXP ZIe;

		/* BEGINNING OF ACTION: is_decl_specifier */
		{
#line 1422 "syntax.act"

    /* Resolve declaration-specifiers from other declarators */
    (ZI0) = predict_dspec ( 0 ) ;
#line 1471 "syntax1.c"
		}
		/* END OF ACTION: is_decl_specifier */
		if (!ZI0)
			goto ZL3;
		ZRdecl_Hspecifier (&ZI943, &ZI944, &ZI945, &ZI946);
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
#line 1489 "syntax1.c"
		}
		/* END OF ACTION: check_decl_specifier */
		ZR729 (&ZI943, &ZI944, &ZI945, &ZI946, &ZI947, &ZI948, &ZI949, &ZI950);
		ZR951 (&ZI947, &ZI948, &ZI949, &ZI950, &ZIe);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: declare_extern */
		{
#line 1238 "syntax.act"

    external_declaration ( (ZIe), 1 ) ;
#line 1503 "syntax1.c"
		}
		/* END OF ACTION: declare_extern */
		/* BEGINNING OF INLINE: declaration-seq-opt */
		goto ZL2_declaration_Hseq_Hopt;
		/* END OF INLINE: declaration-seq-opt */
	}
	UNREACHED;
ZL3:;
	switch (CURRENT_TERMINAL) {
	case 77:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: declare_empty */
			{
#line 1182 "syntax.act"

    report ( crt_loc, ERR_dcl_dcl_semicolon () ) ;
#line 1521 "syntax1.c"
			}
			/* END OF ACTION: declare_empty */
			/* BEGINNING OF INLINE: declaration-seq-opt */
			goto ZL2_declaration_Hseq_Hopt;
			/* END OF INLINE: declaration-seq-opt */
		}
		UNREACHED;
	case 126:
		{
			EXP ZIe;

			ZRasm_Hdefinition (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: declare_extern */
			{
#line 1238 "syntax.act"

    external_declaration ( (ZIe), 1 ) ;
#line 1543 "syntax1.c"
			}
			/* END OF ACTION: declare_extern */
			/* BEGINNING OF INLINE: declaration-seq-opt */
			goto ZL2_declaration_Hseq_Hopt;
			/* END OF INLINE: declaration-seq-opt */
		}
		UNREACHED;
	case 26: case 30:
		{
			ZRdeclaration_Hcond ();
			/* BEGINNING OF INLINE: declaration-seq-opt */
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			} else {
				goto ZL2_declaration_Hseq_Hopt;
			}
			/* END OF INLINE: declaration-seq-opt */
		}
		UNREACHED;
	case 1: case 2: case 4: case 65:
	case 78:
		{
			BASE_TYPE ZIbt;
			TYPE ZIt1;
			CV_SPEC ZIcv;
			DECL_SPEC ZIds1;
			TYPE ZIt;
			DECL_SPEC ZIds;
			TYPE ZIs;
			IDENTIFIER ZIid;
			EXP ZIe;

			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 1581 "syntax1.c"
			}
			/* END OF ACTION: btype_none */
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt1) = NULL_type ;
#line 1589 "syntax1.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: cv_none */
			{
#line 895 "syntax.act"
 (ZIcv) = cv_none ; 
#line 1596 "syntax1.c"
			}
			/* END OF ACTION: cv_none */
			/* BEGINNING OF ACTION: dspec_none */
			{
#line 1114 "syntax.act"
 (ZIds1) = dspec_none ; 
#line 1603 "syntax1.c"
			}
			/* END OF ACTION: dspec_none */
			/* BEGINNING OF ACTION: dspec_complete */
			{
#line 1133 "syntax.act"

    /* Complete a declaration specifier and a type */
    (ZIds) = complete_dspec ( (ZIds1), (ZIbt), (ZIt1), (ZIcv) ) ;
    (ZIt) = complete_pre_type ( (ZIbt), (ZIt1), (ZIcv), 0 ) ;
    have_type_specifier = 0 ;
#line 1614 "syntax1.c"
			}
			/* END OF ACTION: dspec_complete */
			ZRdeclarator (ZIt, &ZIs, &ZIid);
			ZR824 (&ZIbt, &ZIt, &ZIds, &ZIs, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 1628 "syntax1.c"
			}
			/* END OF ACTION: exp_none */
			/* BEGINNING OF ACTION: declare_extern */
			{
#line 1238 "syntax.act"

    external_declaration ( (ZIe), 1 ) ;
#line 1636 "syntax1.c"
			}
			/* END OF ACTION: declare_extern */
			/* BEGINNING OF INLINE: declaration-seq-opt */
			goto ZL2_declaration_Hseq_Hopt;
			/* END OF INLINE: declaration-seq-opt */
		}
		UNREACHED;
	default:
		break;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZRabstract_Hdeclarator_Htail(TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 65:
		{
			IDENTIFIER ZIid;
			TYPE ZIs;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: id_none */
			{
#line 382 "syntax.act"

    (ZIid) = NULL_id ;
#line 1670 "syntax1.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 1681 "syntax1.c"
			}
			/* END OF ACTION: param_begin */
			ZR760 (&ZIs);
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
			ZIt = ZIs;
			/* BEGINNING OF ACTION: param_end */
			{
#line 879 "syntax.act"

    end_param () ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 1 ;
#line 1703 "syntax1.c"
			}
			/* END OF ACTION: param_end */
		}
		break;
	case 333:
		{
			IDENTIFIER ZIid;
			int ZIell;

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
#line 1726 "syntax1.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 1737 "syntax1.c"
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
#line 1750 "syntax1.c"
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
#line 1767 "syntax1.c"
			}
			/* END OF ACTION: param_end */
		}
		break;
	case 66:
		{
			EXP ZIe;

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
#line 1800 "syntax1.c"
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
	*ZOt = ZIt;
}

void
ZR1029(EXP *ZI1027, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 42:
		{
			SID_LIST_EXP ZIq;
			SID_LIST_EXP ZIp;

			ADVANCE_LEXER;
			ZRcomma_Hexpression_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (*ZI1027), (ZIq), (ZIp) ) ;
#line 1853 "syntax1.c"
			}
			/* END OF ACTION: list_exp_cons */
			/* BEGINNING OF ACTION: exp_comma */
			{
#line 466 "syntax.act"

    (ZIe) = make_comma_exp ( (ZIp) ) ;
#line 1861 "syntax1.c"
			}
			/* END OF ACTION: exp_comma */
		}
		break;
	default:
		{
			ZIe = *ZI1027;
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
ZRscoped_Hstatement(EXP ZIc, EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIa;

		ZRscoped_Hstmt_Hbody (ZIc, &ZIa);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: stmt_compound_end */
		{
#line 669 "syntax.act"

    (ZIe) = end_compound_stmt ( (ZIa) ) ;
#line 1903 "syntax1.c"
		}
		/* END OF ACTION: stmt_compound_end */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 1911 "syntax1.c"
		}
		/* END OF ACTION: rescan_token */
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
#line 1926 "syntax1.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: stmt_compound_end */
		{
#line 669 "syntax.act"

    (ZIe) = end_compound_stmt ( (ZIc) ) ;
#line 1934 "syntax1.c"
		}
		/* END OF ACTION: stmt_compound_end */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 1942 "syntax1.c"
		}
		/* END OF ACTION: rescan_token */
	}
ZL0:;
	*ZOe = ZIe;
}

void
ZR1030(EXP *ZIa, SID_LIST_EXP *ZOp)
{
	SID_LIST_EXP ZIp;

	switch (CURRENT_TERMINAL) {
	case 42:
		{
			SID_LIST_EXP ZIq;

			ADVANCE_LEXER;
			ZRcomma_Hexpression_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (*ZIa), (ZIq), (ZIp) ) ;
#line 1971 "syntax1.c"
			}
			/* END OF ACTION: list_exp_cons */
		}
		break;
	default:
		{
			SID_LIST_EXP ZIq;

			/* BEGINNING OF ACTION: list_exp_null */
			{
#line 412 "syntax.act"

    (ZIq) = NULL_list ( EXP ) ;
#line 1985 "syntax1.c"
			}
			/* END OF ACTION: list_exp_null */
			/* BEGINNING OF ACTION: list_exp_cons */
			{
#line 416 "syntax.act"

    CONS_exp ( (*ZIa), (ZIq), (ZIp) ) ;
#line 1993 "syntax1.c"
			}
			/* END OF ACTION: list_exp_cons */
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
ZR903(EXP ZI901, EXP *ZO902)
{
	EXP ZI902;

ZL2_903:;
	switch (CURRENT_TERMINAL) {
	case 67:
		{
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF INLINE: or */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 67:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: or */
			ZRexclusive_Hor_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_or */
			{
#line 556 "syntax.act"

    (ZIe) = make_or_exp ( (ZI901), (ZIb) ) ;
#line 2044 "syntax1.c"
			}
			/* END OF ACTION: exp_or */
			/* BEGINNING OF INLINE: 903 */
			ZI901 = ZIe;
			goto ZL2_903;
			/* END OF INLINE: 903 */
		}
		UNREACHED;
	default:
		{
			ZI902 = ZI901;
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
	*ZO902 = ZI902;
}

void
ZRinit_Hdeclarator(DECL_SPEC ZIds, BASE_TYPE ZIbt, TYPE ZIp)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		TYPE ZIt;
		IDENTIFIER ZIid;
		IDENTIFIER ZId;
		EXP ZIe;

		ZRdeclarator (ZIp, &ZIt, &ZIid);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: declare_id */
		{
#line 1147 "syntax.act"

    printf("In declare_id\n");
    if ( in_weak_param ) {
	(ZId) = make_param_decl ( (ZIds), (ZIt), (ZIid), CONTEXT_WEAK_PARAM ) ;
    } else if ( type_tag ( (ZIt) ) == type_func_tag ) {
	check_weak_func ( (ZIt), 0 ) ;
	(ZId) = make_func_decl ( (ZIds), (ZIt), (ZIid), 0 ) ;
    } else {
	int def = predict_obj_defn () ;
	(ZId) = make_object_decl ( (ZIds), (ZIt), (ZIid), def ) ;
    }
    if ( IS_id_type_alias ( (ZId) ) ) {
	BASE_TYPE bs = DEREF_btype ( id_type_alias_rep ( (ZId) ) ) ;
	bs |= (ZIbt) ;
	COPY_btype ( id_type_alias_rep ( (ZId) ), bs ) ;
    }
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 2107 "syntax1.c"
		}
		/* END OF ACTION: declare_id */
		ZRinitialiser_Hopt (ZId, &ZIe);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: initialise_id */
		{
#line 1256 "syntax.act"

    int def = init_object ( (ZId), (ZIe) ) ;
    if ( do_dump ) dump_declare ( (ZId), &decl_loc, def ) ;
#line 2121 "syntax1.c"
		}
		/* END OF ACTION: initialise_id */
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR1031(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 298:
		{
			EXP ZIa;

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
#line 2152 "syntax1.c"
			}
			/* END OF ACTION: exp_set */
			switch (CURRENT_TERMINAL) {
			case 348:
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
			ZRexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_unused */
			{
#line 618 "syntax.act"

    (ZIe) = make_unused_exp ( (ZIa) ) ;
#line 2179 "syntax1.c"
			}
			/* END OF ACTION: exp_unused */
			switch (CURRENT_TERMINAL) {
			case 348:
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
ZRdeclaration(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZIb1;
		TYPE ZI1101;
		CV_SPEC ZIcv1;
		DECL_SPEC ZI1102;
		BASE_TYPE ZIbt;
		TYPE ZIt1;
		CV_SPEC ZIcv;
		DECL_SPEC ZIds1;

		/* BEGINNING OF ACTION: is_decl_specifier */
		{
#line 1422 "syntax.act"

    /* Resolve declaration-specifiers from other declarators */
    (ZI0) = predict_dspec ( 0 ) ;
#line 2226 "syntax1.c"
		}
		/* END OF ACTION: is_decl_specifier */
		if (!ZI0)
			goto ZL1;
		ZRdecl_Hspecifier (&ZIb1, &ZI1101, &ZIcv1, &ZI1102);
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
#line 2244 "syntax1.c"
		}
		/* END OF ACTION: check_decl_specifier */
		ZR729 (&ZIb1, &ZI1101, &ZIcv1, &ZI1102, &ZIbt, &ZIt1, &ZIcv, &ZIds1);
		ZR818 (&ZIbt, &ZIt1, &ZIcv, &ZIds1);
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
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR1032(BASE_TYPE *ZIkey, IDENTIFIER *ZIid, TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 64:
		{
			IDENTIFIER ZIp;
			int ZIf;
			IDENTIFIER ZItid;

			/* BEGINNING OF ACTION: type_class_begin */
			{
#line 1075 "syntax.act"

    (ZIp) = begin_class_defn ( (*ZIid), (*ZIkey), cinfo_none, NULL_type ) ;
    (ZIf) = in_function_defn ;
    in_function_defn = 0 ;
    in_class_defn++ ;
    really_in_class_defn++ ;
    no_type_defns++ ;
    end_base_class ( crt_class, 1 ) ;
#line 2289 "syntax1.c"
			}
			/* END OF ACTION: type_class_begin */
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
			ZRmember_Hspecification_Hopt ();
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
			/* BEGINNING OF ACTION: type_class_end */
			{
#line 1085 "syntax.act"

    (ZItid) = end_class_defn ( (ZIp) ) ;
    in_function_defn = (ZIf) ;
    in_class_defn-- ;
    really_in_class_defn-- ;
#line 2331 "syntax1.c"
			}
			/* END OF ACTION: type_class_end */
			/* BEGINNING OF ACTION: type_name */
			{
#line 958 "syntax.act"

    MAKE_type_pre ( cv_none, btype_alias, qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (ZItid) ) ;
    have_type_specifier = 1 ;
#line 2341 "syntax1.c"
			}
			/* END OF ACTION: type_name */
			/* BEGINNING OF ACTION: rescan_token */
			{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 2349 "syntax1.c"
			}
			/* END OF ACTION: rescan_token */
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: type_elaborate */
			{
#line 964 "syntax.act"

    MAKE_type_pre ( cv_none, (*ZIkey), qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (*ZIid) ) ;
    if ( have_type_declaration == TYPE_DECL_NONE ) {
	have_type_declaration = TYPE_DECL_ELABORATE ;
    }
    have_type_specifier = 1 ;
#line 2366 "syntax1.c"
			}
			/* END OF ACTION: type_elaborate */
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
	*ZOt = ZIt;
}

void
ZRprimary_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 23:
		{
			/* BEGINNING OF EXTRACT: complex-exp */
			{
#line 329 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZIe = parse_exp_token ( id, args ) ;
    RESCAN_LEXER ;
#line 2398 "syntax1.c"
			}
			/* END OF EXTRACT: complex-exp */
			ADVANCE_LEXER;
		}
		break;
	case 210:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_ellipsis */
			{
#line 486 "syntax.act"

    (ZIe) = make_ellipsis_exp () ;
#line 2412 "syntax1.c"
			}
			/* END OF ACTION: exp_ellipsis */
		}
		break;
	case 1:
		{
			IDENTIFIER ZIid;

			/* BEGINNING OF EXTRACT: identifier */
			{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 2426 "syntax1.c"
			}
			/* END OF EXTRACT: identifier */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_identifier */
			{
#line 504 "syntax.act"

    (ZIe) = make_id_exp ( (ZIid) ) ;
#line 2435 "syntax1.c"
			}
			/* END OF ACTION: exp_identifier */
		}
		break;
	case 65:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_paren_begin */
			{
#line 560 "syntax.act"

    IGNORE incr_value ( OPT_VAL_paren_depth ) ;
#line 2450 "syntax1.c"
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

    (ZIe) = make_paren_exp ( (ZIa) ) ;
    decr_value ( OPT_VAL_paren_depth ) ;
#line 2464 "syntax1.c"
			}
			/* END OF ACTION: exp_paren_end */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
		}
		break;
	case 17: case 18: case 19: case 20:
	case 21: case 22:
		{
			ZRliteral (&ZIe);
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
ZR1033(BASE_TYPE *ZIbt, TYPE *ZIp, CV_SPEC *ZIcv)
{
	switch (CURRENT_TERMINAL) {
	case 77:
		{
			/* BEGINNING OF ACTION: declare_member_empty */
			{
#line 1205 "syntax.act"

    IGNORE empty_decl ( dspec_none, NULL_type, (*ZIbt), (*ZIp), (*ZIcv), last_lex_token, 1 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
    have_type_specifier = 0 ;
#line 2513 "syntax1.c"
			}
			/* END OF ACTION: declare_member_empty */
			ADVANCE_LEXER;
		}
		break;
	case 1: case 2: case 4: case 41:
	case 65: case 78:
		{
			TYPE ZIt;

			/* BEGINNING OF ACTION: type_complete */
			{
#line 985 "syntax.act"

    (ZIt) = complete_pre_type ( (*ZIbt), (*ZIp), (*ZIcv), 1 ) ;
    have_type_specifier = 0 ;
#line 2530 "syntax1.c"
			}
			/* END OF ACTION: type_complete */
			ZRmember_Hdeclarator (ZIt, *ZIbt);
			/* BEGINNING OF INLINE: 834 */
			{
				switch (CURRENT_TERMINAL) {
				case 42:
					{
						ADVANCE_LEXER;
						ZRmember_Hdeclarator_Hlist (ZIt, *ZIbt);
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
				case 77:
					{
						ADVANCE_LEXER;
					}
					break;
				case 356:
					RESTORE_LEXER;
					goto ZL1;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: 834 */
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
ZRcontrol_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 289:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_set */
			{
#line 841 "syntax.act"
 unreached_code = 0 ; 
#line 2594 "syntax1.c"
			}
			/* END OF ACTION: reach_set */
			ZRstatement (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_reach */
			{
#line 809 "syntax.act"

    (ZIe) = make_reach_stmt ( (ZIa), 1 ) ;
#line 2607 "syntax1.c"
			}
			/* END OF ACTION: stmt_reach */
		}
		break;
	case 323:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: reach_unset */
			{
#line 842 "syntax.act"
 unreached_code = 1 ; 
#line 2621 "syntax1.c"
			}
			/* END OF ACTION: reach_unset */
			ZRstatement (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_unreach */
			{
#line 813 "syntax.act"

    (ZIe) = make_reach_stmt ( (ZIa), 0 ) ;
#line 2634 "syntax1.c"
			}
			/* END OF ACTION: stmt_unreach */
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
ZR907(EXP ZI905, EXP *ZO906)
{
	EXP ZI906;

ZL2_907:;
	switch (CURRENT_TERMINAL) {
	case 80:
		{
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF INLINE: xor */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 80:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: xor */
			ZRand_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_xor */
			{
#line 622 "syntax.act"

    (ZIe) = make_xor_exp ( (ZI905), (ZIb) ) ;
#line 2687 "syntax1.c"
			}
			/* END OF ACTION: exp_xor */
			/* BEGINNING OF INLINE: 907 */
			ZI905 = ZIe;
			goto ZL2_907;
			/* END OF INLINE: 907 */
		}
		UNREACHED;
	default:
		{
			ZI906 = ZI905;
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
	*ZO906 = ZI906;
}

void
ZRclass_Hkey(BASE_TYPE *ZOkey)
{
	BASE_TYPE ZIkey;

	switch (CURRENT_TERMINAL) {
	case 118:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: key_struct */
			{
#line 1062 "syntax.act"
 (ZIkey) = btype_struct ; 
#line 2725 "syntax1.c"
			}
			/* END OF ACTION: key_struct */
		}
		break;
	case 121:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: key_union */
			{
#line 1063 "syntax.act"
 (ZIkey) = btype_union ; 
#line 2737 "syntax1.c"
			}
			/* END OF ACTION: key_union */
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
	*ZOkey = ZIkey;
}

void
ZRinitialiser_Hlist(IDENTIFIER ZId, SID_LIST_EXP *ZOp)
{
	SID_LIST_EXP ZIp;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIb;
		EXP ZIa;
		SID_LIST_EXP ZIq;

		ZRinitialiser_Hclause (ZId, &ZIb);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: exp_location */
		{
#line 524 "syntax.act"

    MAKE_exp_location ( type_void, crt_loc, (ZIb), (ZIa) ) ;
#line 2778 "syntax1.c"
		}
		/* END OF ACTION: exp_location */
		/* BEGINNING OF INLINE: 795 */
		{
			switch (CURRENT_TERMINAL) {
			case 42:
				{
					ADVANCE_LEXER;
					ZR1078 (&ZId, &ZIq);
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
#line 2801 "syntax1.c"
					}
					/* END OF ACTION: list_exp_null */
				}
				break;
			}
		}
		/* END OF INLINE: 795 */
		/* BEGINNING OF ACTION: list_exp_cons */
		{
#line 416 "syntax.act"

    CONS_exp ( (ZIa), (ZIq), (ZIp) ) ;
#line 2814 "syntax1.c"
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
parse_tok_type(TYPE *ZOt)
{
	TYPE ZIt;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZIbt;
		TYPE ZIp;
		CV_SPEC ZIcv;
		TYPE ZIq;

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
#line 2851 "syntax1.c"
		}
		/* END OF ACTION: type_complete */
		ZRabstract_Hdeclarator_Hopt (ZIq, &ZIt);
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
	*ZOt = ZIt;
}

void
ZRequality_Hoperator(void)
{
	switch (CURRENT_TERMINAL) {
	case 48:
		{
			ADVANCE_LEXER;
		}
		break;
	case 63:
		{
			/* BEGINNING OF INLINE: not-eq */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 63:
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: not-eq */
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
ZRmaxmin_Hexpression(EXP *ZO914)
{
	EXP ZI914;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRequality_Hexpression (&ZIe);
		ZR915 (ZIe, &ZI914);
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
	*ZO914 = ZI914;
}

void
ZR911(EXP ZI909, EXP *ZO910)
{
	EXP ZI910;

ZL2_911:;
	switch (CURRENT_TERMINAL) {
	case 33:
		{
			EXP ZIb;
			EXP ZIe;

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
			ZRmaxmin_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_and */
			{
#line 440 "syntax.act"

    (ZIe) = make_and_exp ( (ZI909), (ZIb) ) ;
#line 2966 "syntax1.c"
			}
			/* END OF ACTION: exp_and */
			/* BEGINNING OF INLINE: 911 */
			ZI909 = ZIe;
			goto ZL2_911;
			/* END OF INLINE: 911 */
		}
		UNREACHED;
	default:
		{
			ZI910 = ZI909;
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
	*ZO910 = ZI910;
}

void
ZRinset_Hflow_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		switch (CURRENT_TERMINAL) {
		case 347:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		ZR1031 (&ZIe);
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
	*ZOe = ZIe;
}

void
parse_type_param(IDENTIFIER *ZOd)
{
	IDENTIFIER ZId;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		/* BEGINNING OF ACTION: error_syntax */
		{
#line 1345 "syntax.act"

    /* Syntax errors */
    ERROR err = ERR_lex_parse ( crt_token ) ;
    report ( crt_loc, err ) ;
    have_syntax_error = 1 ;
#line 3038 "syntax1.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: decl_none */
		{
#line 1242 "syntax.act"

    (ZId) = NULL_id ;
#line 3046 "syntax1.c"
		}
		/* END OF ACTION: decl_none */
	}
	*ZOd = ZId;
}

void
ZRpostfix_Hexpression(EXP *ZO938)
{
	EXP ZI938;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRprimary_Hexpression (&ZIe);
		ZR939 (ZIe, &ZI938);
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
	*ZO938 = ZI938;
}

void
ZRsimple_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 170:
		{
			int ZI1012;
			EXP ZI1013;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_alignof */
			{
#line 369 "syntax.act"
 (ZI1012) = lex_alignof ; 
#line 3098 "syntax1.c"
			}
			/* END OF ACTION: lex_alignof */
			ZRsizeof_Hexpression (ZI1012, &ZI1013);
			ZR1014 (&ZI1013, &ZI1027);
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
#line 3121 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3129 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3137 "syntax1.c"
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
	case 23:
		{
			EXP ZI1024;
			EXP ZI1025;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			/* BEGINNING OF EXTRACT: complex-exp */
			{
#line 329 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZI1024 = parse_exp_token ( id, args ) ;
    RESCAN_LEXER ;
#line 3165 "syntax1.c"
			}
			/* END OF EXTRACT: complex-exp */
			ADVANCE_LEXER;
			ZR939 (ZI1024, &ZI1025);
			ZR1014 (&ZI1025, &ZI1027);
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
#line 3189 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3197 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3205 "syntax1.c"
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
	case 24:
		{
			EXP ZIa;

			/* BEGINNING OF EXTRACT: complex-stmt */
			{
#line 336 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZIa = parse_exp_token ( id, args ) ;
    RESCAN_LEXER ;
#line 3229 "syntax1.c"
			}
			/* END OF EXTRACT: complex-stmt */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3238 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
		}
		break;
	case 206:
		{
			EXP ZI1087;
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
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZI1087);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_ignore */
			{
#line 508 "syntax.act"

    (ZI967) = make_cast_exp ( type_void, (ZI1087), 0 ) ;
#line 3273 "syntax1.c"
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
			ZR956 (&ZI954, &ZI1027);
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
#line 3306 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3314 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3322 "syntax1.c"
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
	case 210:
		{
			EXP ZI1021;
			EXP ZI1022;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_ellipsis */
			{
#line 486 "syntax.act"

    (ZI1021) = make_ellipsis_exp () ;
#line 3348 "syntax1.c"
			}
			/* END OF ACTION: exp_ellipsis */
			ZR939 (ZI1021, &ZI1022);
			ZR1014 (&ZI1022, &ZI1027);
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
#line 3371 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3379 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3387 "syntax1.c"
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
	case 1:
		{
			IDENTIFIER ZIid;

			/* BEGINNING OF EXTRACT: identifier */
			{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3408 "syntax1.c"
			}
			/* END OF EXTRACT: identifier */
			ADVANCE_LEXER;
			ZR1088 (&ZIid, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 347:
		{
			ADVANCE_LEXER;
			ZR1084 (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 255:
		{
			EXP ZI1086;
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
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZI1086);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_lit */
			{
#line 520 "syntax.act"

    (ZI967) = make_lit_exp ( (ZI1086) ) ;
#line 3459 "syntax1.c"
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
			ZR956 (&ZI954, &ZI1027);
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
#line 3492 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3500 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3508 "syntax1.c"
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
	case 61:
		{
			EXP ZI993;
			EXP ZI994;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

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
#line 3539 "syntax1.c"
			}
			/* END OF ACTION: exp_predec */
			ZR1014 (&ZI994, &ZI1027);
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
#line 3561 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3569 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3577 "syntax1.c"
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
	case 65:
		{
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			ZR989 (&ZI1027);
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
#line 3615 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3623 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3631 "syntax1.c"
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
	case 71:
		{
			EXP ZI990;
			EXP ZI991;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

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
#line 3662 "syntax1.c"
			}
			/* END OF ACTION: exp_preinc */
			ZR1014 (&ZI991, &ZI1027);
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
#line 3684 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3692 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3700 "syntax1.c"
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
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_none */
			{
#line 636 "syntax.act"

    (ZIe) = NULL_exp ;
#line 3720 "syntax1.c"
			}
			/* END OF ACTION: stmt_none */
		}
		break;
	case 116:
		{
			int ZI1009;
			EXP ZI1010;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_sizeof */
			{
#line 370 "syntax.act"
 (ZI1009) = lex_sizeof ; 
#line 3738 "syntax1.c"
			}
			/* END OF ACTION: lex_sizeof */
			ZRsizeof_Hexpression (ZI1009, &ZI1010);
			ZR1014 (&ZI1010, &ZI1027);
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
#line 3761 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3769 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3777 "syntax1.c"
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
	case 78:
		{
			EXP ZI996;
			EXP ZI997;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

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
#line 3808 "syntax1.c"
			}
			/* END OF ACTION: exp_indir */
			ZR1014 (&ZI997, &ZI1027);
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
#line 3830 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3838 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 3846 "syntax1.c"
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
	case 4:
		{
			IDENTIFIER ZIid;

			/* BEGINNING OF EXTRACT: statement-name */
			{
#line 207 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3867 "syntax1.c"
			}
			/* END OF EXTRACT: statement-name */
			ADVANCE_LEXER;
			ZR1089 (&ZIid, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 2:
		{
			IDENTIFIER ZIid;
			EXP ZIa;
			EXP ZIb;

			/* BEGINNING OF EXTRACT: type-name */
			{
#line 199 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3889 "syntax1.c"
			}
			/* END OF EXTRACT: type-name */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_label_mod */
			{
#line 769 "syntax.act"

    if ( unreached_code ) unreached_fall = 0 ;
#line 3898 "syntax1.c"
			}
			/* END OF ACTION: stmt_label_mod */
			/* BEGINNING OF ACTION: stmt_label_begin */
			{
#line 753 "syntax.act"

    (ZIa) = begin_label_stmt ( (ZIid), lex_identifier ) ;
#line 3906 "syntax1.c"
			}
			/* END OF ACTION: stmt_label_begin */
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
			/* BEGINNING OF ACTION: stmt_label_end */
			{
#line 757 "syntax.act"

    (ZIe) = end_label_stmt ( (ZIa), (ZIb) ) ;
#line 3926 "syntax1.c"
			}
			/* END OF ACTION: stmt_label_end */
		}
		break;
	case 33:
		{
			EXP ZI999;
			EXP ZI1000;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

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
#line 3962 "syntax1.c"
			}
			/* END OF ACTION: exp_ref */
			ZR1014 (&ZI1000, &ZI1027);
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
#line 3984 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 3992 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4000 "syntax1.c"
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
	case 126:
		{
			ZRasm_Hdefinition (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 289: case 323:
		{
			ZRcontrol_Hstatement (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 96: case 100: case 223:
		{
			ZRfall_Hcheck ();
			ZR1085 (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 298: case 324:
		{
			EXP ZI1079;
			EXP ZIa;
			int ZIr;

			ZRflow_Hexpression (&ZI1079);
			ZR1081 (&ZI1079, &ZIa);
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
#line 4065 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 4073 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4081 "syntax1.c"
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
	case 101: case 107: case 125:
		{
			ZRiteration_Hstatement (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 95: case 99: case 108: case 113:
		{
			ZRjump_Hstatement (&ZIe);
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
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ZRliteral (&ZI1015);
			ZR939 (ZI1015, &ZI1016);
			ZR1014 (&ZI1016, &ZI1027);
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
#line 4141 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 4149 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4157 "syntax1.c"
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
	case 62:
		{
			EXP ZI1002;
			EXP ZI1003;
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

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
#line 4200 "syntax1.c"
			}
			/* END OF ACTION: exp_not */
			ZR1014 (&ZI1003, &ZI1027);
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
#line 4222 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 4230 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4238 "syntax1.c"
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
	case 26: case 109: case 119:
		{
			ZRselection_Hstatement (&ZIe);
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
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZI1005) = crt_lex_token ; 
#line 4272 "syntax1.c"
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
#line 4286 "syntax1.c"
			}
			/* END OF ACTION: exp_unary */
			ZR1014 (&ZI1007, &ZI1027);
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
#line 4308 "syntax1.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 4316 "syntax1.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 4324 "syntax1.c"
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
ZRmember_Hspecification_Hopt(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_member_Hspecification_Hopt:;
	{
		BASE_TYPE ZIb1;
		TYPE ZIt1;
		CV_SPEC ZIcv1;
		BASE_TYPE ZIbt;
		TYPE ZIp;
		CV_SPEC ZIcv;

		/* BEGINNING OF ACTION: is_type_specifier */
		{
#line 1447 "syntax.act"

    /* Resolve type-specifiers from other declarators */
    (ZI0) = predict_tspec ( 0 ) ;
#line 4370 "syntax1.c"
		}
		/* END OF ACTION: is_type_specifier */
		if (!ZI0)
			goto ZL3;
		ZRtype_Hqualifier (&ZIb1, &ZIt1, &ZIcv1);
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
#line 4388 "syntax1.c"
		}
		/* END OF ACTION: check_decl_specifier */
		ZR704 (&ZIb1, &ZIt1, &ZIcv1, &ZIbt, &ZIp, &ZIcv);
		ZR1033 (&ZIbt, &ZIp, &ZIcv);
		/* BEGINNING OF INLINE: member-specification-opt */
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		} else {
			goto ZL2_member_Hspecification_Hopt;
		}
		/* END OF INLINE: member-specification-opt */
	}
	UNREACHED;
ZL3:;
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR915(EXP ZI913, EXP *ZO914)
{
	EXP ZI914;

ZL2_915:;
	switch (CURRENT_TERMINAL) {
	case 86: case 87:
		{
			int ZIop;
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZIop) = crt_lex_token ; 
#line 4427 "syntax1.c"
			}
			/* END OF ACTION: lex_crt */
			/* BEGINNING OF INLINE: maxmin-operator */
			{
				switch (CURRENT_TERMINAL) {
				case 86:
					{
						ADVANCE_LEXER;
					}
					break;
				case 87:
					{
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: maxmin-operator */
			ZRequality_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_maxmin */
			{
#line 540 "syntax.act"

    (ZIe) = make_mult_exp ( (ZIop), (ZI913), (ZIb) ) ;
#line 4458 "syntax1.c"
			}
			/* END OF ACTION: exp_maxmin */
			/* BEGINNING OF INLINE: 915 */
			ZI913 = ZIe;
			goto ZL2_915;
			/* END OF INLINE: 915 */
		}
		UNREACHED;
	default:
		{
			ZI914 = ZI913;
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
	*ZO914 = ZI914;
}

void
ZRsizeof_Hexpression(int ZIop, EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		int ZIn1;
		int ZIm1;
		EXP ZIc;

		/* BEGINNING OF ACTION: sizeof_begin */
		{
#line 1390 "syntax.act"

    suppress_usage++ ;
#line 4501 "syntax1.c"
		}
		/* END OF ACTION: sizeof_begin */
		/* BEGINNING OF ACTION: no_side_effects */
		{
#line 1374 "syntax.act"

    (ZIn1) = no_side_effects ;
#line 4509 "syntax1.c"
		}
		/* END OF ACTION: no_side_effects */
		/* BEGINNING OF ACTION: no_type_defns */
		{
#line 1378 "syntax.act"

    (ZIm1) = no_type_defns ;
#line 4517 "syntax1.c"
		}
		/* END OF ACTION: no_type_defns */
		/* BEGINNING OF INLINE: 466 */
		{
			switch (CURRENT_TERMINAL) {
			case 170:
				{
					int ZI1071;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ADVANCE_LEXER;
					/* BEGINNING OF ACTION: lex_alignof */
					{
#line 369 "syntax.act"
 (ZI1071) = lex_alignof ; 
#line 4536 "syntax1.c"
					}
					/* END OF ACTION: lex_alignof */
					ZRsizeof_Hexpression (ZI1071, &ZIa);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4549 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4557 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4565 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4573 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 23:
				{
					EXP ZI1107;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					/* BEGINNING OF EXTRACT: complex-exp */
					{
#line 329 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZI1107 = parse_exp_token ( id, args ) ;
    RESCAN_LEXER ;
#line 4594 "syntax1.c"
					}
					/* END OF EXTRACT: complex-exp */
					ADVANCE_LEXER;
					ZR939 (ZI1107, &ZIa);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4608 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4616 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4624 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4632 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 210:
				{
					EXP ZI1108;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ADVANCE_LEXER;
					/* BEGINNING OF ACTION: exp_ellipsis */
					{
#line 486 "syntax.act"

    (ZI1108) = make_ellipsis_exp () ;
#line 4651 "syntax1.c"
					}
					/* END OF ACTION: exp_ellipsis */
					ZR939 (ZI1108, &ZIa);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4664 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4672 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4680 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4688 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 1:
				{
					IDENTIFIER ZIid;
					EXP ZI1109;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 4707 "syntax1.c"
					}
					/* END OF EXTRACT: identifier */
					ADVANCE_LEXER;
					/* BEGINNING OF ACTION: exp_identifier */
					{
#line 504 "syntax.act"

    (ZI1109) = make_id_exp ( (ZIid) ) ;
#line 4716 "syntax1.c"
					}
					/* END OF ACTION: exp_identifier */
					ZR939 (ZI1109, &ZIa);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4729 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4737 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4745 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4753 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 61:
				{
					EXP ZI1064;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ADVANCE_LEXER;
					ZRunary_Hexpression (&ZI1064);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: exp_predec */
					{
#line 581 "syntax.act"

    (ZIa) = make_prefix_exp ( lex_minus_Hminus, (ZI1064) ) ;
#line 4777 "syntax1.c"
					}
					/* END OF ACTION: exp_predec */
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4785 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4793 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4801 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4809 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 65:
				{
					ADVANCE_LEXER;
					ZR1073 (&ZIop, &ZIn1, &ZIm1, &ZIc);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
				}
				break;
			case 71:
				{
					EXP ZI1063;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ADVANCE_LEXER;
					ZRunary_Hexpression (&ZI1063);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: exp_preinc */
					{
#line 585 "syntax.act"

    (ZIa) = make_prefix_exp ( lex_plus_Hplus, (ZI1063) ) ;
#line 4843 "syntax1.c"
					}
					/* END OF ACTION: exp_preinc */
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4851 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4859 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4867 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4875 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 116:
				{
					int ZI1070;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ADVANCE_LEXER;
					/* BEGINNING OF ACTION: lex_sizeof */
					{
#line 370 "syntax.act"
 (ZI1070) = lex_sizeof ; 
#line 4893 "syntax1.c"
					}
					/* END OF ACTION: lex_sizeof */
					ZRsizeof_Hexpression (ZI1070, &ZIa);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4906 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4914 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4922 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4930 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 78:
				{
					EXP ZI1065;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ADVANCE_LEXER;
					ZRcast_Hexpression (&ZI1065);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: exp_indir */
					{
#line 516 "syntax.act"

    (ZIa) = make_indir_exp ( (ZI1065) ) ;
#line 4954 "syntax1.c"
					}
					/* END OF ACTION: exp_indir */
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 4962 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 4970 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 4978 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 4986 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 33:
				{
					EXP ZI1066;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

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
					ZRcast_Hexpression (&ZI1066);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: exp_ref */
					{
#line 589 "syntax.act"

    (ZIa) = make_ref_exp ( (ZI1066), 0 ) ;
#line 5022 "syntax1.c"
					}
					/* END OF ACTION: exp_ref */
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 5030 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 5038 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 5046 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 5054 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 17: case 18: case 19: case 20:
			case 21: case 22:
				{
					EXP ZI1110;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					ZRliteral (&ZI1110);
					ZR939 (ZI1110, &ZIa);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 5079 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 5087 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 5095 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 5103 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 62:
				{
					EXP ZI1067;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

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
					ZRcast_Hexpression (&ZI1067);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: exp_not */
					{
#line 552 "syntax.act"

    (ZIa) = make_not_exp ( (ZI1067) ) ;
#line 5139 "syntax1.c"
					}
					/* END OF ACTION: exp_not */
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 5147 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 5155 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 5163 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 5171 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			case 43: case 59: case 69: case 85:
				{
					int ZI1068;
					EXP ZI1069;
					EXP ZIa;
					int ZIn2;
					int ZIm2;
					TYPE ZIt;

					/* BEGINNING OF ACTION: lex_crt */
					{
#line 366 "syntax.act"
 (ZI1068) = crt_lex_token ; 
#line 5189 "syntax1.c"
					}
					/* END OF ACTION: lex_crt */
					ZRunary_Hoperator ();
					ZRcast_Hexpression (&ZI1069);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: exp_unary */
					{
#line 614 "syntax.act"

    (ZIa) = make_uminus_exp ( (ZI1068), (ZI1069) ) ;
#line 5203 "syntax1.c"
					}
					/* END OF ACTION: exp_unary */
					/* BEGINNING OF ACTION: diff_side_effects */
					{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (ZIn1) ;
#line 5211 "syntax1.c"
					}
					/* END OF ACTION: diff_side_effects */
					/* BEGINNING OF ACTION: diff_type_defns */
					{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (ZIm1) ;
#line 5219 "syntax1.c"
					}
					/* END OF ACTION: diff_type_defns */
					/* BEGINNING OF ACTION: type_of */
					{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (ZIop) ) ;
#line 5227 "syntax1.c"
					}
					/* END OF ACTION: type_of */
					/* BEGINNING OF ACTION: exp_sizeof */
					{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (ZIop) ) ;
#line 5235 "syntax1.c"
					}
					/* END OF ACTION: exp_sizeof */
				}
				break;
			default:
				goto ZL1;
			}
		}
		/* END OF INLINE: 466 */
		/* BEGINNING OF ACTION: sizeof_end */
		{
#line 1394 "syntax.act"

    suppress_usage-- ;
#line 5250 "syntax1.c"
		}
		/* END OF ACTION: sizeof_end */
		ZIe = ZIc;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

/* END OF FILE */
