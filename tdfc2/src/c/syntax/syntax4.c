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


#line 96 "syntax4.c"

void
ZRexpression_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
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
	case 77:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_none */
			{
#line 636 "syntax.act"

    (ZIe) = NULL_exp ;
#line 122 "syntax4.c"
			}
			/* END OF ACTION: stmt_none */
		}
		break;
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255:
		{
			EXP ZI1027;
			EXP ZIa;
			int ZIr;

			ZRassignment_Hexpression (&ZI1027);
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
#line 157 "syntax4.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 165 "syntax4.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 173 "syntax4.c"
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
#line 210 "syntax4.c"
			}
			/* END OF ACTION: reach_check */
			/* BEGINNING OF ACTION: stmt_exp */
			{
#line 698 "syntax.act"

    (ZIe) = make_exp_stmt ( (ZIa) ) ;
#line 218 "syntax4.c"
			}
			/* END OF ACTION: stmt_exp */
			/* BEGINNING OF ACTION: stmt_label_clear */
			{
#line 765 "syntax.act"

    unreached_fall = 1 ;
#line 226 "syntax4.c"
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
ZRmember_Hdesignator(OFFSET ZIb, TYPE ZIs, OFFSET *ZOa, TYPE *ZOt)
{
	OFFSET ZIa;
	TYPE ZIt;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		NAMESPACE ZIns;
		IDENTIFIER ZIid;

		/* BEGINNING OF ACTION: offset_nspace */
		{
#line 1268 "syntax.act"

    (ZIns) = offset_nspace ( (ZIs) ) ;
#line 269 "syntax4.c"
		}
		/* END OF ACTION: offset_nspace */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 277 "syntax4.c"
		}
		/* END OF ACTION: rescan_token */
		ZRfield_Hid_Hexpression (ZIns, &ZIid);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: offset_member */
		{
#line 1272 "syntax.act"

    OFFSET off = offset_member ( (ZIs), (ZIid), &(ZIt), (ZIns), 1 ) ;
    (ZIa) = offset_add ( (ZIb), off ) ;
#line 291 "syntax4.c"
		}
		/* END OF ACTION: offset_member */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 299 "syntax4.c"
		}
		/* END OF ACTION: rescan_token */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOa = ZIa;
	*ZOt = ZIt;
}

void
ZRdeclaration_Hcond(void)
{
	switch (CURRENT_TERMINAL) {
	case 30:
		{
			ADVANCE_LEXER;
		}
		break;
	case 26:
		{
			EXP ZIp;

			ZRdeclaration_Hcond_Hhead (&ZIp);
			/* BEGINNING OF INLINE: 812 */
			{
				switch (CURRENT_TERMINAL) {
				case 28:
					{
						ADVANCE_LEXER;
						/* BEGINNING OF ACTION: cond_hash_else */
						{
#line 1320 "syntax.act"

    crt_hash_cond = make_else_cond ( crt_hash_cond ) ;
#line 337 "syntax4.c"
						}
						/* END OF ACTION: cond_hash_else */
						/* BEGINNING OF ACTION: decl_hash_else */
						{
#line 1301 "syntax.act"

    target_decl ( lex_else, NULL_exp ) ;
#line 345 "syntax4.c"
						}
						/* END OF ACTION: decl_hash_else */
						ZRdeclaration_Hcond_Hbody ();
						if ((CURRENT_TERMINAL) == 356) {
							RESTORE_LEXER;
							goto ZL1;
						}
					}
					break;
				case 356:
					RESTORE_LEXER;
					goto ZL1;
				default:
					break;
				}
			}
			/* END OF INLINE: 812 */
			/* BEGINNING OF ACTION: cond_hash_endif */
			{
#line 1324 "syntax.act"

    crt_hash_cond = (ZIp) ;
#line 368 "syntax4.c"
			}
			/* END OF ACTION: cond_hash_endif */
			switch (CURRENT_TERMINAL) {
			case 29:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: decl_hash_endif */
			{
#line 1305 "syntax.act"

    target_decl ( lex_endif, NULL_exp ) ;
#line 383 "syntax4.c"
			}
			/* END OF ACTION: decl_hash_endif */
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
ZR989(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		TYPE ZIt;
		int ZIn;
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

		/* BEGINNING OF ACTION: is_type_id_false */
		{
#line 1437 "syntax.act"

    /* Resolve type-ids from expressions */
    (ZI0) = predict_typeid ( 0 ) ;
#line 430 "syntax4.c"
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
    (ZI967) = make_cast_exp ( (ZIt), (ZIa), (ZIn) ) ;
#line 457 "syntax4.c"
		}
		/* END OF ACTION: exp_cast */
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
			EXP ZI1074;
			EXP ZI1075;
			EXP ZI1076;

			/* BEGINNING OF ACTION: exp_paren_begin */
			{
#line 560 "syntax.act"

    IGNORE incr_value ( OPT_VAL_paren_depth ) ;
#line 498 "syntax4.c"
			}
			/* END OF ACTION: exp_paren_begin */
			ZRexpression (&ZI1074);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_paren_end */
			{
#line 564 "syntax.act"

    (ZI1075) = make_paren_exp ( (ZI1074) ) ;
    decr_value ( OPT_VAL_paren_depth ) ;
#line 512 "syntax4.c"
			}
			/* END OF ACTION: exp_paren_end */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR939 (ZI1075, &ZI1076);
			ZR1014 (&ZI1076, &ZIe);
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
ZR862(TYPE ZI858, IDENTIFIER ZI859, TYPE *ZO860, IDENTIFIER *ZO861)
{
	TYPE ZI860;
	IDENTIFIER ZI861;

ZL2_862:;
	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 333:
		{
			IDENTIFIER ZIid;
			TYPE ZIq;
			TYPE ZIt;

			ZIid = ZI859;
			ZRabstract_Hdeclarator_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZI858) ) ? (ZIq) : inject_pre_type ( (ZI858), (ZIq), 0 ) ) ;
#line 566 "syntax4.c"
			}
			/* END OF ACTION: type_build */
			/* BEGINNING OF INLINE: 862 */
			ZI858 = ZIt;
			ZI859 = ZIid;
			goto ZL2_862;
			/* END OF INLINE: 862 */
		}
		UNREACHED;
	default:
		{
			ZI860 = ZI858;
			ZI861 = ZI859;
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
	*ZO860 = ZI860;
	*ZO861 = ZI861;
}

void
ZR866(TYPE ZI864, TYPE *ZO865)
{
	TYPE ZI865;

ZL2_866:;
	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 333:
		{
			TYPE ZIq;
			TYPE ZIt;

			ZRabstract_Hdeclarator_Htail (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZI864) ) ? (ZIq) : inject_pre_type ( (ZI864), (ZIq), 0 ) ) ;
#line 616 "syntax4.c"
			}
			/* END OF ACTION: type_build */
			/* BEGINNING OF INLINE: 866 */
			ZI864 = ZIt;
			goto ZL2_866;
			/* END OF INLINE: 866 */
		}
		UNREACHED;
	default:
		{
			ZI865 = ZI864;
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
	*ZO865 = ZI865;
}

void
parse_mem_type(TYPE *ZOt)
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
#line 666 "syntax4.c"
		}
		/* END OF ACTION: type_complete */
		/* BEGINNING OF INLINE: 790 */
		{
			switch (CURRENT_TERMINAL) {
			case 73:
				{
					EXP ZIc;

					ADVANCE_LEXER;
					ZRconstant_Hexpression (&ZIc);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
					/* BEGINNING OF ACTION: type_bitfield */
					{
#line 1034 "syntax.act"

    (ZIt) = make_bitfield_type ( (ZIq), (ZIbt), (ZIc), 0 ) ;
#line 687 "syntax4.c"
					}
					/* END OF ACTION: type_bitfield */
				}
				break;
			default:
				{
					ZRabstract_Hdeclarator_Hopt (ZIq, &ZIt);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
				}
				break;
			}
		}
		/* END OF INLINE: 790 */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
}

void
ZR618(EXP *ZOa)
{
	EXP ZIa;

	switch (CURRENT_TERMINAL) {
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 33: case 43: case 59: case 61:
	case 62: case 65: case 69: case 71:
	case 78: case 85: case 116: case 170:
	case 206: case 210: case 255: case 298:
	case 324: case 347:
		{
			ZRexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIa) = NULL_exp ;
#line 741 "syntax4.c"
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
	*ZOa = ZIa;
}

void
parse_operator(IDENTIFIER *ZOid)
{
	IDENTIFIER ZIid;

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
#line 774 "syntax4.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: id_none */
		{
#line 382 "syntax.act"

    (ZIid) = NULL_id ;
#line 782 "syntax4.c"
		}
		/* END OF ACTION: id_none */
	}
	*ZOid = ZIid;
}

void
ZRinclusive_Hor_Hexpression(EXP *ZO902)
{
	EXP ZI902;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRexclusive_Hor_Hexpression (&ZIe);
		ZR903 (ZIe, &ZI902);
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
	*ZO902 = ZI902;
}

void
ZR874(TYPE ZI870, IDENTIFIER ZI871, TYPE *ZO872, IDENTIFIER *ZO873)
{
	TYPE ZI872;
	IDENTIFIER ZI873;

ZL2_874:;
	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 333:
		{
			IDENTIFIER ZIid;
			TYPE ZIq;
			TYPE ZIt;

			ZIid = ZI871;
			ZRdeclarator_Htail (ZIid, &ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZI870) ) ? (ZIq) : inject_pre_type ( (ZI870), (ZIq), 0 ) ) ;
#line 840 "syntax4.c"
			}
			/* END OF ACTION: type_build */
			/* BEGINNING OF INLINE: 874 */
			ZI870 = ZIt;
			ZI871 = ZIid;
			goto ZL2_874;
			/* END OF INLINE: 874 */
		}
		UNREACHED;
	default:
		{
			ZI872 = ZI870;
			ZI873 = ZI871;
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
	*ZO872 = ZI872;
	*ZO873 = ZI873;
}

void
ZRjump_Hlabel(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 96:
		{
			EXP ZIc;

			ADVANCE_LEXER;
			ZRconstant_Hexpression (&ZIc);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: stmt_goto_case */
			{
#line 722 "syntax.act"

    report ( crt_loc, ERR_stmt_goto_case ( lex_case ) ) ;
    (ZIe) = begin_case_stmt ( (ZIc), 1 ) ;
#line 890 "syntax4.c"
			}
			/* END OF ACTION: stmt_goto_case */
		}
		break;
	case 100:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: stmt_goto_default */
			{
#line 727 "syntax.act"

    report ( crt_loc, ERR_stmt_goto_case ( lex_default ) ) ;
    (ZIe) = begin_default_stmt ( 1 ) ;
#line 904 "syntax4.c"
			}
			/* END OF ACTION: stmt_goto_default */
		}
		break;
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
#line 923 "syntax4.c"
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
#line 936 "syntax4.c"
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
#line 949 "syntax4.c"
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
			/* BEGINNING OF ACTION: stmt_goto */
			{
#line 718 "syntax.act"

    (ZIe) = make_goto_stmt ( (ZIid) ) ;
#line 965 "syntax4.c"
			}
			/* END OF ACTION: stmt_goto */
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
ZRcomma_Hexpression_Htail(SID_LIST_EXP *ZOp)
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
			EXP ZIa;

			ZRassignment_Hexpression (&ZIa);
			ZR1030 (&ZIa, &ZIp);
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
#line 1022 "syntax4.c"
			}
			/* END OF ACTION: list_exp_cons */
		}
		break;
	case 347:
		{
			EXP ZIa;
			SID_LIST_EXP ZIq;

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
#line 1043 "syntax4.c"
			}
			/* END OF ACTION: list_exp_cons */
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
	*ZOp = ZIp;
}

void
ZRparameter_Hdeclaration_Hlist(int *ZOell)
{
	int ZIell;

ZL2_parameter_Hdeclaration_Hlist:;
	switch (CURRENT_TERMINAL) {
	case 47:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: bool_true */
			{
#line 1407 "syntax.act"
 (ZIell) = 1 ; 
#line 1075 "syntax4.c"
			}
			/* END OF ACTION: bool_true */
		}
		break;
	case 2: case 25: case 94: case 97:
	case 98: case 102: case 104: case 105:
	case 106: case 110: case 111: case 112:
	case 114: case 115: case 117: case 118:
	case 120: case 121: case 122: case 123:
	case 124: case 137: case 156: case 185:
	case 286: case 299:
		{
			IDENTIFIER ZId;

			ZRparameter_Hdeclaration (&ZId);
			/* BEGINNING OF INLINE: 776 */
			{
				switch (CURRENT_TERMINAL) {
				case 42:
					{
						ADVANCE_LEXER;
						/* BEGINNING OF INLINE: parameter-declaration-list */
						goto ZL2_parameter_Hdeclaration_Hlist;
						/* END OF INLINE: parameter-declaration-list */
					}
					UNREACHED;
				default:
					{
						/* BEGINNING OF ACTION: bool_false */
						{
#line 1406 "syntax.act"
 (ZIell) = 0 ; 
#line 1108 "syntax4.c"
						}
						/* END OF ACTION: bool_false */
					}
					break;
				case 356:
					RESTORE_LEXER;
					goto ZL1;
				}
			}
			/* END OF INLINE: 776 */
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
	*ZOell = ZIell;
}

void
ZRliteral(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 17: case 18:
		{
			/* BEGINNING OF INLINE: character-literal */
			{
				switch (CURRENT_TERMINAL) {
				case 17:
					{
						/* BEGINNING OF EXTRACT: char-exp */
						{
#line 289 "syntax.act"

    ZIe = crt_token->pp_data.exp ;
#line 1152 "syntax4.c"
						}
						/* END OF EXTRACT: char-exp */
						ADVANCE_LEXER;
					}
					break;
				case 18:
					{
						/* BEGINNING OF EXTRACT: wchar-exp */
						{
#line 293 "syntax.act"

    ZIe = crt_token->pp_data.exp ;
#line 1165 "syntax4.c"
						}
						/* END OF EXTRACT: wchar-exp */
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: character-literal */
		}
		break;
	case 22:
		{
			/* BEGINNING OF INLINE: floating-literal */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 22:
						/* BEGINNING OF EXTRACT: floating-exp */
						{
#line 276 "syntax.act"

    ZIe = crt_token->pp_data.exp ;
#line 1190 "syntax4.c"
						}
						/* END OF EXTRACT: floating-exp */
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: floating-literal */
		}
		break;
	case 21:
		{
			/* BEGINNING OF INLINE: integer-literal */
			{
				{
					switch (CURRENT_TERMINAL) {
					case 21:
						/* BEGINNING OF EXTRACT: integer-exp */
						{
#line 272 "syntax.act"

    ZIe = crt_token->pp_data.exp ;
#line 1215 "syntax4.c"
						}
						/* END OF EXTRACT: integer-exp */
						break;
					default:
						goto ZL1;
					}
					ADVANCE_LEXER;
				}
			}
			/* END OF INLINE: integer-literal */
		}
		break;
	case 19: case 20:
		{
			/* BEGINNING OF INLINE: string-literal */
			{
				switch (CURRENT_TERMINAL) {
				case 19:
					{
						/* BEGINNING OF EXTRACT: string-exp */
						{
#line 297 "syntax.act"

    ZIe = crt_token->pp_data.exp ;
#line 1240 "syntax4.c"
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

    ZIe = crt_token->pp_data.exp ;
#line 1253 "syntax4.c"
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
ZRsecond_Hparameter_Hid(IDENTIFIER *ZOid)
{
	IDENTIFIER ZIid;

	switch (CURRENT_TERMINAL) {
	case 2:
		{
			/* BEGINNING OF EXTRACT: type-name */
			{
#line 199 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 1292 "syntax4.c"
			}
			/* END OF EXTRACT: type-name */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: declarator_weak */
			{
#line 1234 "syntax.act"

    report ( crt_loc, ERR_dcl_fct_par_typedef ( (ZIid) ) ) ;
#line 1301 "syntax4.c"
			}
			/* END OF ACTION: declarator_weak */
		}
		break;
	case 1: case 4:
		{
			/* BEGINNING OF INLINE: first-parameter-id */
			{
				switch (CURRENT_TERMINAL) {
				case 1:
					{
						/* BEGINNING OF EXTRACT: identifier */
						{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 1318 "syntax4.c"
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
#line 1331 "syntax4.c"
						}
						/* END OF EXTRACT: statement-name */
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: first-parameter-id */
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
	*ZOid = ZIid;
}

void
parse_decl(TYPE ZIt, DECL_SPEC ZIds)
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
#line 1379 "syntax4.c"
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
#line 1397 "syntax4.c"
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
	{
		/* BEGINNING OF ACTION: error_syntax */
		{
#line 1345 "syntax.act"

    /* Syntax errors */
    ERROR err = ERR_lex_parse ( crt_token ) ;
    report ( crt_loc, err ) ;
    have_syntax_error = 1 ;
#line 1424 "syntax4.c"
		}
		/* END OF ACTION: error_syntax */
	}
}

void
ZRexclusive_Hor_Hexpression(EXP *ZO906)
{
	EXP ZI906;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRand_Hexpression (&ZIe);
		ZR907 (ZIe, &ZI906);
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
	*ZO906 = ZI906;
}

void
ZRcompound_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIc;
		int ZId;
		EXP ZIa;

		/* BEGINNING OF ACTION: stmt_compound_begin */
		{
#line 652 "syntax.act"

    (ZIc) = begin_compound_stmt ( 1 ) ;
#line 1474 "syntax4.c"
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
#line 1496 "syntax4.c"
		}
		/* END OF ACTION: stmt_compound_block */
		ZRstatement_Hseq_Hopt (ZIc, ZId, &ZIa);
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
		/* BEGINNING OF ACTION: stmt_compound_end */
		{
#line 669 "syntax.act"

    (ZIe) = end_compound_stmt ( (ZIa) ) ;
#line 1522 "syntax4.c"
		}
		/* END OF ACTION: stmt_compound_end */
		/* BEGINNING OF ACTION: rescan_token */
		{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 1530 "syntax4.c"
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
ZR880(EXP ZI878, EXP *ZO879)
{
	EXP ZI879;

ZL2_880:;
	switch (CURRENT_TERMINAL) {
	case 27:
		{
			EXP ZIp;
			EXP ZIc;

			ZIp = ZI878;
			/* BEGINNING OF EXTRACT: hash-elif */
			{
#line 317 "syntax.act"

    ZIc = crt_token->pp_data.exp ;
#line 1560 "syntax4.c"
			}
			/* END OF EXTRACT: hash-elif */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: cond_hash_elif */
			{
#line 1315 "syntax.act"

    EXP c = make_else_cond ( crt_hash_cond ) ;
    crt_hash_cond = make_if_cond ( (ZIc), c ) ;
#line 1570 "syntax4.c"
			}
			/* END OF ACTION: cond_hash_elif */
			/* BEGINNING OF ACTION: decl_hash_elif */
			{
#line 1297 "syntax.act"

    target_decl ( lex_elif, (ZIc) ) ;
#line 1578 "syntax4.c"
			}
			/* END OF ACTION: decl_hash_elif */
			ZRdeclaration_Hcond_Hbody ();
			/* BEGINNING OF INLINE: 880 */
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			} else {
				ZI878 = ZIp;
				goto ZL2_880;
			}
			/* END OF INLINE: 880 */
		}
		UNREACHED;
	default:
		{
			ZI879 = ZI878;
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
	*ZO879 = ZI879;
}

void
ZRsemicolon_Hx(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		switch (CURRENT_TERMINAL) {
		case 77:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
	}
	return;
ZL1:;
	{
		int ZIt;

		/* BEGINNING OF ACTION: lex_semicolon */
		{
#line 368 "syntax.act"
 (ZIt) = lex_semicolon ; 
#line 1633 "syntax4.c"
		}
		/* END OF ACTION: lex_semicolon */
		/* BEGINNING OF ACTION: expected */
		{
#line 1357 "syntax.act"

    /* Expected symbol */
    int p = primary_form ( crt_lex_token ) ;
    if ( p != (ZIt) ) report ( crt_loc, ERR_lex_expect ( (ZIt) ) ) ;
#line 1643 "syntax4.c"
		}
		/* END OF ACTION: expected */
	}
}

void
ZRlogical_Hor_Hexpression(EXP *ZO894)
{
	EXP ZI894;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRlogical_Hand_Hexpression (&ZIe);
		ZR895 (ZIe, &ZI894);
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
	*ZO894 = ZI894;
}

void
ZRconstant_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIa;

		ZRconditional_Hexpression (&ZIa);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: exp_eval */
		{
#line 495 "syntax.act"

    (ZIe) = convert_reference ( (ZIa), REF_NORMAL ) ;
    (ZIe) = convert_lvalue ( (ZIe) ) ;
#line 1697 "syntax4.c"
		}
		/* END OF ACTION: exp_eval */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
ZR754(EXP *ZOe)
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
			ZRconstant_Hexpression (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 1736 "syntax4.c"
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
ZR755(int *ZOell)
{
	int ZIell;

	switch (CURRENT_TERMINAL) {
	case 2: case 25: case 47: case 94:
	case 97: case 98: case 102: case 104:
	case 105: case 106: case 110: case 111:
	case 112: case 114: case 115: case 117:
	case 118: case 120: case 121: case 122:
	case 123: case 124: case 137: case 156:
	case 185: case 286: case 299:
		{
			ZRparameter_Hdeclaration_Hlist (&ZIell);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: bool_false */
			{
#line 1406 "syntax.act"
 (ZIell) = 0 ; 
#line 1779 "syntax4.c"
			}
			/* END OF ACTION: bool_false */
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
	*ZOell = ZIell;
}

void
ZRptr_Hoperator(TYPE *ZOp)
{
	TYPE ZIp;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		CV_SPEC ZIcv;

		switch (CURRENT_TERMINAL) {
		case 78:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		ZRcv_Hqualifier_Hseq_Hopt (&ZIcv);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: type_ptr */
		{
#line 1009 "syntax.act"

    MAKE_type_ptr ( (ZIcv), NULL_type, (ZIp) ) ;
#line 1823 "syntax4.c"
		}
		/* END OF ACTION: type_ptr */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOp = ZIp;
}

void
ZR629(SID_LIST_EXP *ZOp)
{
	SID_LIST_EXP ZIp;

	switch (CURRENT_TERMINAL) {
	case 42:
		{
			ADVANCE_LEXER;
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
#line 1858 "syntax4.c"
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
ZRequality_Hexpression(EXP *ZO918)
{
	EXP ZI918;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRrelational_Hexpression (&ZIe);
		ZR919 (ZIe, &ZI918);
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
	*ZO918 = ZI918;
}

void
ZRinit_Hdeclarator_Hlist(DECL_SPEC ZIds, BASE_TYPE ZIbt, TYPE ZIt)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_init_Hdeclarator_Hlist:;
	{
		ZRinit_Hdeclarator (ZIds, ZIbt, ZIt);
		/* BEGINNING OF INLINE: 803 */
		{
			switch (CURRENT_TERMINAL) {
			case 42:
				{
					ADVANCE_LEXER;
					/* BEGINNING OF INLINE: init-declarator-list */
					goto ZL2_init_Hdeclarator_Hlist;
					/* END OF INLINE: init-declarator-list */
				}
				UNREACHED;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				break;
			}
		}
		/* END OF INLINE: 803 */
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR1014(EXP *ZI1013, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 36:
		{
			EXP ZIb;

			ADVANCE_LEXER;
			ZRassignment_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_assign */
			{
#line 452 "syntax.act"

    (ZIe) = make_assign_exp ( (*ZI1013), (ZIb), 1 ) ;
#line 1956 "syntax4.c"
			}
			/* END OF ACTION: exp_assign */
		}
		break;
	default:
		{
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

			ZR935 (*ZI1013, &ZI966);
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
	case 34: case 45: case 58: case 60:
	case 68: case 70: case 74: case 76:
	case 79: case 81:
		{
			int ZIop;
			EXP ZIb;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZIop) = crt_lex_token ; 
#line 2004 "syntax4.c"
			}
			/* END OF ACTION: lex_crt */
			ZRassignment_Hoperator ();
			ZRassignment_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_assign_op */
			{
#line 456 "syntax.act"

    /* op will be in its primary form */
    (ZIe) = make_become_exp ( (ZIop), (*ZI1013), (ZIb) ) ;
#line 2019 "syntax4.c"
			}
			/* END OF ACTION: exp_assign_op */
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
ZR760(TYPE *ZOs)
{
	TYPE ZIs;

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
#line 2061 "syntax4.c"
			}
			/* END OF ACTION: type_func */
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: type_func_none */
			{
#line 1025 "syntax.act"

    (ZIs) = make_func_type ( NULL_type, FUNC_NO_PARAMS, cv_c, empty_type_set ) ;
#line 2073 "syntax4.c"
			}
			/* END OF ACTION: type_func_none */
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
	*ZOs = ZIs;
}

void
ZRmultiplicative_Hexpression(EXP *ZO934)
{
	EXP ZI934;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRcast_Hexpression (&ZIe);
		ZR935 (ZIe, &ZI934);
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
	*ZO934 = ZI934;
}

/* BEGINNING OF TRAILER */

#line 1485 "syntax.act"

#line 2119 "syntax4.c"

/* END OF FILE */
