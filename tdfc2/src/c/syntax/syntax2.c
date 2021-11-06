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


#line 96 "syntax2.c"

void
ZR1045(TYPE *ZIp, BASE_TYPE *ZIq, IDENTIFIER *ZI1044)
{
	switch (CURRENT_TERMINAL) {
	case 41:
		{
			EXP ZIc;
			TYPE ZIt;

			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (*ZI1044) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 113 "syntax2.c"
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
    HASHID nm = DEREF_hashid ( id_name ( (*ZI1044) ) ) ;
    int z = IS_hashid_anon ( nm ) ;
    (ZIt) = make_bitfield_type ( (*ZIp), (*ZIq), (ZIc), z ) ;
#line 130 "syntax2.c"
			}
			/* END OF ACTION: type_bitfield_mem */
			/* BEGINNING OF ACTION: declare_bitfield */
			{
#line 1212 "syntax.act"

    IDENTIFIER id = make_member_decl ( dspec_none, (ZIt), (*ZI1044), 0 ) ;
    if ( do_dump ) dump_declare ( id, &decl_loc, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 141 "syntax2.c"
			}
			/* END OF ACTION: declare_bitfield */
		}
		break;
	default:
		{
			TYPE ZI1043;
			TYPE ZI1037;
			IDENTIFIER ZIid;
			TYPE ZIt;

			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZI1043) = NULL_type ;
#line 158 "syntax2.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (*ZI1044) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 167 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR874 (ZI1043, *ZI1044, &ZI1037, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZI1037) ) ? (*ZIp) : inject_pre_type ( (ZI1037), (*ZIp), 1 ) ) ;
#line 180 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
			/* BEGINNING OF ACTION: declare_member */
			{
#line 1198 "syntax.act"

    IDENTIFIER id = make_member_decl ( dspec_none, (ZIt), (ZIid), 0 ) ;
    if ( do_dump ) dump_declare ( id, &decl_loc, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 191 "syntax2.c"
			}
			/* END OF ACTION: declare_member */
		}
		break;
	case 356:
		return;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR919(EXP ZI917, EXP *ZO918)
{
	EXP ZI918;

ZL2_919:;
	switch (CURRENT_TERMINAL) {
	case 48: case 63:
		{
			int ZIop;
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZIop) = crt_lex_token ; 
#line 222 "syntax2.c"
			}
			/* END OF ACTION: lex_crt */
			ZRequality_Hoperator ();
			ZRrelational_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_equality */
			{
#line 490 "syntax.act"

    /* op will be in its primary form */
    (ZIe) = make_equality_exp ( (ZIop), (ZI917), (ZIb) ) ;
#line 237 "syntax2.c"
			}
			/* END OF ACTION: exp_equality */
			/* BEGINNING OF INLINE: 919 */
			ZI917 = ZIe;
			goto ZL2_919;
			/* END OF INLINE: 919 */
		}
		UNREACHED;
	default:
		{
			ZI918 = ZI917;
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
	*ZO918 = ZI918;
}

void
ZRparameter_Hid_Htail(void)
{
ZL2_parameter_Hid_Htail:;
	switch (CURRENT_TERMINAL) {
	case 42:
		{
			IDENTIFIER ZIid;

			ADVANCE_LEXER;
			ZRsecond_Hparameter_Hid (&ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 283 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			/* BEGINNING OF ACTION: declare_weak_param */
			{
#line 1192 "syntax.act"

    IGNORE weak_param_decl ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 293 "syntax2.c"
			}
			/* END OF ACTION: declare_weak_param */
			/* BEGINNING OF INLINE: parameter-id-tail */
			goto ZL2_parameter_Hid_Htail;
			/* END OF INLINE: parameter-id-tail */
		}
		UNREACHED;
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
ZR1048(TYPE *ZO860, IDENTIFIER *ZO861)
{
	TYPE ZI860;
	IDENTIFIER ZI861;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZI1049;
		TYPE ZI1050;
		TYPE ZIt;
		IDENTIFIER ZIid;

		/* BEGINNING OF ACTION: is_parameter */
		{
#line 1452 "syntax.act"

    /* Resolve parameter declarators from type names */
    (ZI0) = predict_param () ;
#line 333 "syntax2.c"
		}
		/* END OF ACTION: is_parameter */
		if (!ZI0)
			goto ZL2;
		/* BEGINNING OF INLINE: any-identifier */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZI1049 = crt_token->pp_data.id.use ;
#line 348 "syntax2.c"
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

    ZI1049 = crt_token->pp_data.id.use ;
#line 361 "syntax2.c"
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

    ZI1049 = crt_token->pp_data.id.use ;
#line 374 "syntax2.c"
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

    (ZI1050) = NULL_type ;
#line 390 "syntax2.c"
		}
		/* END OF ACTION: type_none */
		/* BEGINNING OF ACTION: declarator_begin */
		{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1049) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 399 "syntax2.c"
		}
		/* END OF ACTION: declarator_begin */
		ZR862 (ZI1050, ZI1049, &ZIt, &ZIid);
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
#line 414 "syntax2.c"
		}
		/* END OF ACTION: declarator_bad */
		switch (CURRENT_TERMINAL) {
		case 39:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		ZR862 (ZIt, ZIid, &ZI860, &ZI861);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	case 65:
		{
			TYPE ZIt;
			IDENTIFIER ZIid;

			ADVANCE_LEXER;
			ZR1048 (&ZIt, &ZIid);
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
#line 452 "syntax2.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR862 (ZIt, ZIid, &ZI860, &ZI861);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 333:
		{
			IDENTIFIER ZI1047;
			int ZIell;
			TYPE ZI1053;
			IDENTIFIER ZI1054;
			TYPE ZIt;
			IDENTIFIER ZIid;

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

    (ZI1047) = NULL_id ;
#line 491 "syntax2.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZI1047) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 502 "syntax2.c"
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

    (ZI1053) = make_func_type ( NULL_type, ( (ZIell) | FUNC_WEAK ), cv_c, empty_type_set ) ;
#line 515 "syntax2.c"
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
#line 532 "syntax2.c"
			}
			/* END OF ACTION: param_end */
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZI1054) = DEREF_id ( hashid_id ( nm ) ) ;
#line 541 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1054) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 550 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZI1053, ZI1054, &ZIt, &ZIid);
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
#line 565 "syntax2.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR862 (ZIt, ZIid, &ZI860, &ZI861);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 66:
		{
			EXP ZIe;
			TYPE ZI1051;
			IDENTIFIER ZI1052;
			TYPE ZIt;
			IDENTIFIER ZIid;

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
    MAKE_type_array ( cv_none, NULL_type, n, (ZI1051) ) ;
#line 614 "syntax2.c"
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
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZI1052) = DEREF_id ( hashid_id ( nm ) ) ;
#line 636 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1052) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 645 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZI1051, ZI1052, &ZIt, &ZIid);
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
#line 660 "syntax2.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR862 (ZIt, ZIid, &ZI860, &ZI861);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			TYPE ZIp;
			TYPE ZIq;
			IDENTIFIER ZIid;
			TYPE ZIt;

			ZRptr_Hoperator (&ZIp);
			ZRparameter_Hdeclarator_Haux_Hopt (&ZIq, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 0 ) ) ;
#line 695 "syntax2.c"
			}
			/* END OF ACTION: type_build */
			/* BEGINNING OF ACTION: declarator_bad */
			{
#line 1228 "syntax.act"

    if ( IS_NULL_type ( (ZIt) ) ) {
	report ( crt_loc, ERR_dcl_meaning_paren () ) ;
    }
#line 705 "syntax2.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR862 (ZIt, ZIid, &ZI860, &ZI861);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 2: case 25: case 39: case 47:
	case 94: case 97: case 98: case 102:
	case 104: case 105: case 106: case 110:
	case 111: case 112: case 114: case 115:
	case 117: case 118: case 120: case 121:
	case 122: case 123: case 124: case 137:
	case 156: case 185: case 286: case 299:
		{
			IDENTIFIER ZI1046;
			TYPE ZIs;
			TYPE ZIt;
			IDENTIFIER ZIid;

			/* BEGINNING OF ACTION: id_none */
			{
#line 382 "syntax.act"

    (ZI1046) = NULL_id ;
#line 740 "syntax2.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZI1046) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 751 "syntax2.c"
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
#line 773 "syntax2.c"
			}
			/* END OF ACTION: param_end */
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZIid) = DEREF_id ( hashid_id ( nm ) ) ;
#line 782 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 791 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZIt, ZIid, &ZI860, &ZI861);
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
	*ZO860 = ZI860;
	*ZO861 = ZI861;
}

void
ZRparameter_Hdeclarator_Haux_Hopt(TYPE *ZOt, IDENTIFIER *ZOid)
{
	TYPE ZIt;
	IDENTIFIER ZIid;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZI1049;
		TYPE ZI1050;

		/* BEGINNING OF ACTION: is_parameter */
		{
#line 1452 "syntax.act"

    /* Resolve parameter declarators from type names */
    (ZI0) = predict_param () ;
#line 832 "syntax2.c"
		}
		/* END OF ACTION: is_parameter */
		if (!ZI0)
			goto ZL2;
		/* BEGINNING OF INLINE: any-identifier */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZI1049 = crt_token->pp_data.id.use ;
#line 847 "syntax2.c"
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

    ZI1049 = crt_token->pp_data.id.use ;
#line 860 "syntax2.c"
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

    ZI1049 = crt_token->pp_data.id.use ;
#line 873 "syntax2.c"
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

    (ZI1050) = NULL_type ;
#line 889 "syntax2.c"
		}
		/* END OF ACTION: type_none */
		/* BEGINNING OF ACTION: declarator_begin */
		{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1049) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 898 "syntax2.c"
		}
		/* END OF ACTION: declarator_begin */
		ZR862 (ZI1050, ZI1049, &ZIt, &ZIid);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	case 65:
		{
			ADVANCE_LEXER;
			ZR1048 (&ZIt, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 333:
		{
			IDENTIFIER ZI1047;
			int ZIell;
			TYPE ZI1053;
			IDENTIFIER ZI1054;

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

    (ZI1047) = NULL_id ;
#line 941 "syntax2.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZI1047) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 952 "syntax2.c"
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

    (ZI1053) = make_func_type ( NULL_type, ( (ZIell) | FUNC_WEAK ), cv_c, empty_type_set ) ;
#line 965 "syntax2.c"
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
#line 982 "syntax2.c"
			}
			/* END OF ACTION: param_end */
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZI1054) = DEREF_id ( hashid_id ( nm ) ) ;
#line 991 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1054) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1000 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZI1053, ZI1054, &ZIt, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 66:
		{
			EXP ZIe;
			TYPE ZI1051;
			IDENTIFIER ZI1052;

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
    MAKE_type_array ( cv_none, NULL_type, n, (ZI1051) ) ;
#line 1040 "syntax2.c"
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
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZI1052) = DEREF_id ( hashid_id ( nm ) ) ;
#line 1062 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1052) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1071 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZI1051, ZI1052, &ZIt, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			TYPE ZIp;
			TYPE ZIq;

			ZRptr_Hoperator (&ZIp);
			ZRparameter_Hdeclarator_Haux_Hopt (&ZIq, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 0 ) ) ;
#line 1097 "syntax2.c"
			}
			/* END OF ACTION: type_build */
		}
		break;
	default:
		{
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 1109 "syntax2.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZIid) = DEREF_id ( hashid_id ( nm ) ) ;
#line 1118 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1127 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
		}
		break;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
	*ZOid = ZIid;
}

void
ZR923(EXP ZI921, EXP *ZO922)
{
	EXP ZI922;

ZL2_923:;
	switch (CURRENT_TERMINAL) {
	case 49: case 50: case 53: case 54:
		{
			int ZIop;
			EXP ZIb;
			EXP ZIe;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZIop) = crt_lex_token ; 
#line 1159 "syntax2.c"
			}
			/* END OF ACTION: lex_crt */
			/* BEGINNING OF INLINE: relational-operator */
			{
				switch (CURRENT_TERMINAL) {
				case 49:
					{
						ADVANCE_LEXER;
					}
					break;
				case 50:
					{
						ADVANCE_LEXER;
					}
					break;
				case 53:
					{
						ADVANCE_LEXER;
					}
					break;
				case 54:
					{
						ADVANCE_LEXER;
					}
					break;
				default:
					goto ZL1;
				}
			}
			/* END OF INLINE: relational-operator */
			ZRshift_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_relation */
			{
#line 593 "syntax.act"

    /* op will be in its primary form */
    (ZIe) = make_relation_exp ( (ZIop), (ZI921), (ZIb) ) ;
#line 1201 "syntax2.c"
			}
			/* END OF ACTION: exp_relation */
			/* BEGINNING OF INLINE: 923 */
			ZI921 = ZIe;
			goto ZL2_923;
			/* END OF INLINE: 923 */
		}
		UNREACHED;
	default:
		{
			ZI922 = ZI921;
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
	*ZO922 = ZI922;
}

void
ZRasm_Hdefinition(EXP *ZOe)
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
#line 1262 "syntax2.c"
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
#line 1275 "syntax2.c"
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
#line 1296 "syntax2.c"
		}
		/* END OF ACTION: declare_asm */
		switch (CURRENT_TERMINAL) {
		case 39:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		ZRsemicolon_Hx ();
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
ZRparameter_Hdeclarator_Hopt(TYPE ZIp, TYPE *ZOt, IDENTIFIER *ZOid)
{
	TYPE ZIt;
	IDENTIFIER ZIid;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZI1049;
		TYPE ZI1050;
		TYPE ZIq;

		/* BEGINNING OF ACTION: is_parameter */
		{
#line 1452 "syntax.act"

    /* Resolve parameter declarators from type names */
    (ZI0) = predict_param () ;
#line 1340 "syntax2.c"
		}
		/* END OF ACTION: is_parameter */
		if (!ZI0)
			goto ZL2;
		/* BEGINNING OF INLINE: any-identifier */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZI1049 = crt_token->pp_data.id.use ;
#line 1355 "syntax2.c"
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

    ZI1049 = crt_token->pp_data.id.use ;
#line 1368 "syntax2.c"
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

    ZI1049 = crt_token->pp_data.id.use ;
#line 1381 "syntax2.c"
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

    (ZI1050) = NULL_type ;
#line 1397 "syntax2.c"
		}
		/* END OF ACTION: type_none */
		/* BEGINNING OF ACTION: declarator_begin */
		{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1049) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1406 "syntax2.c"
		}
		/* END OF ACTION: declarator_begin */
		ZR862 (ZI1050, ZI1049, &ZIq, &ZIid);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: type_inject */
		{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 1419 "syntax2.c"
		}
		/* END OF ACTION: type_inject */
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	case 65:
		{
			TYPE ZIq;

			ADVANCE_LEXER;
			ZR1048 (&ZIq, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 1442 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
		}
		break;
	case 333:
		{
			IDENTIFIER ZI1047;
			int ZIell;
			TYPE ZI1053;
			IDENTIFIER ZI1054;
			TYPE ZIq;

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

    (ZI1047) = NULL_id ;
#line 1468 "syntax2.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZI1047) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 1479 "syntax2.c"
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

    (ZI1053) = make_func_type ( NULL_type, ( (ZIell) | FUNC_WEAK ), cv_c, empty_type_set ) ;
#line 1492 "syntax2.c"
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
#line 1509 "syntax2.c"
			}
			/* END OF ACTION: param_end */
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZI1054) = DEREF_id ( hashid_id ( nm ) ) ;
#line 1518 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1054) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1527 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZI1053, ZI1054, &ZIq, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 1540 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
		}
		break;
	case 66:
		{
			EXP ZIe;
			TYPE ZI1051;
			IDENTIFIER ZI1052;
			TYPE ZIq;

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
    MAKE_type_array ( cv_none, NULL_type, n, (ZI1051) ) ;
#line 1576 "syntax2.c"
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
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZI1052) = DEREF_id ( hashid_id ( nm ) ) ;
#line 1598 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZI1052) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1607 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			ZR862 (ZI1051, ZI1052, &ZIq, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 1620 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
		}
		break;
	case 78:
		{
			TYPE ZI1055;
			TYPE ZI1056;
			TYPE ZIq;

			ZRptr_Hoperator (&ZI1055);
			ZRparameter_Hdeclarator_Haux_Hopt (&ZI1056, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIq) = ( IS_NULL_type ( (ZI1056) ) ? (ZI1055) : inject_pre_type ( (ZI1056), (ZI1055), 0 ) ) ;
#line 1642 "syntax2.c"
			}
			/* END OF ACTION: type_build */
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 1650 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
		}
		break;
	default:
		{
			TYPE ZIq;

			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIq) = NULL_type ;
#line 1664 "syntax2.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: id_anon */
			{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZIid) = DEREF_id ( hashid_id ( nm ) ) ;
#line 1673 "syntax2.c"
			}
			/* END OF ACTION: id_anon */
			/* BEGINNING OF ACTION: declarator_begin */
			{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 1682 "syntax2.c"
			}
			/* END OF ACTION: declarator_begin */
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 1690 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
		}
		break;
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
	*ZOid = ZIid;
}

void
ZRconditional_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZI954;

		ZRlogical_Hor_Hexpression (&ZI954);
		ZR956 (&ZI954, &ZIe);
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
parse_type(TYPE *ZOt)
{
	TYPE ZIt;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		parse_tok_type (&ZIt);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: type_check */
		{
#line 994 "syntax.act"

    object_type ( (ZIt), null_tag ) ;
#line 1750 "syntax2.c"
		}
		/* END OF ACTION: type_check */
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
#line 1765 "syntax2.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: type_none */
		{
#line 949 "syntax.act"

    (ZIt) = NULL_type ;
#line 1773 "syntax2.c"
		}
		/* END OF ACTION: type_none */
	}
ZL0:;
	*ZOt = ZIt;
}

void
ZRdesignator_Hlist(OFFSET ZIb, TYPE ZIs, OFFSET *ZO853, TYPE *ZO854)
{
	OFFSET ZI853;
	TYPE ZI854;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_designator_Hlist:;
	{
		OFFSET ZIa;
		TYPE ZIt;

		ZRdesignator (ZIb, ZIs, &ZIa, &ZIt);
		/* BEGINNING OF INLINE: 852 */
		{
			switch (CURRENT_TERMINAL) {
			case 46: case 66:
				{
					/* BEGINNING OF INLINE: designator-list */
					ZIb = ZIa;
					ZIs = ZIt;
					goto ZL2_designator_Hlist;
					/* END OF INLINE: designator-list */
				}
				UNREACHED;
			default:
				{
					ZI853 = ZIa;
					ZI854 = ZIt;
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		/* END OF INLINE: 852 */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZO853 = ZI853;
	*ZO854 = ZI854;
}

void
ZR927(EXP ZI925, EXP *ZO926)
{
	EXP ZI926;

ZL2_927:;
	switch (CURRENT_TERMINAL) {
	case 57:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRadditive_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_lshift */
			{
#line 536 "syntax.act"

    (ZIe) = make_shift_exp ( lex_lshift, (ZI925), (ZIb) ) ;
#line 1853 "syntax2.c"
			}
			/* END OF ACTION: exp_lshift */
			/* BEGINNING OF INLINE: 927 */
			ZI925 = ZIe;
			goto ZL2_927;
			/* END OF INLINE: 927 */
		}
		UNREACHED;
	case 75:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRadditive_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_rshift */
			{
#line 602 "syntax.act"

    (ZIe) = make_shift_exp ( lex_rshift, (ZI925), (ZIb) ) ;
#line 1878 "syntax2.c"
			}
			/* END OF ACTION: exp_rshift */
			/* BEGINNING OF INLINE: 927 */
			ZI925 = ZIe;
			goto ZL2_927;
			/* END OF INLINE: 927 */
		}
		UNREACHED;
	default:
		{
			ZI926 = ZI925;
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
	*ZO926 = ZI926;
}

void
ZRdeclaration_Hcond_Hhead(EXP *ZO879)
{
	EXP ZI879;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIc;
		EXP ZIp;

		switch (CURRENT_TERMINAL) {
		case 26:
			/* BEGINNING OF EXTRACT: hash-if */
			{
#line 313 "syntax.act"

    ZIc = crt_token->pp_data.exp ;
#line 1922 "syntax2.c"
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
#line 1937 "syntax2.c"
		}
		/* END OF ACTION: cond_hash_if */
		/* BEGINNING OF ACTION: decl_hash_if */
		{
#line 1293 "syntax.act"

    target_decl ( lex_if, (ZIc) ) ;
#line 1945 "syntax2.c"
		}
		/* END OF ACTION: decl_hash_if */
		ZRdeclaration_Hcond_Hbody ();
		ZR880 (ZIp, &ZI879);
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
	*ZO879 = ZI879;
}

void
ZRenum_Hspecifier(TYPE *ZOt)
{
	TYPE ZIt;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		switch (CURRENT_TERMINAL) {
		case 104:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		/* BEGINNING OF INLINE: 687 */
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
#line 1996 "syntax2.c"
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
#line 2009 "syntax2.c"
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
#line 2022 "syntax2.c"
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
					ZR1057 (&ZIid, &ZIt);
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
					IDENTIFIER ZItid;

					/* BEGINNING OF ACTION: id_anon */
					{
#line 386 "syntax.act"

    HASHID nm = lookup_anon () ;
    (ZIid) = DEREF_id ( hashid_id ( nm ) ) ;
#line 2052 "syntax2.c"
					}
					/* END OF ACTION: id_anon */
					/* BEGINNING OF ACTION: type_enum_begin */
					{
#line 1092 "syntax.act"

    (ZIp) = begin_enum_defn ( (ZIid), NULL_type ) ;
    no_type_defns++ ;
#line 2061 "syntax2.c"
					}
					/* END OF ACTION: type_enum_begin */
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
					ZR688 (&ZIp);
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
					/* BEGINNING OF ACTION: type_enum_end */
					{
#line 1097 "syntax.act"

    (ZItid) = end_enum_defn ( (ZIp) ) ;
#line 2100 "syntax2.c"
					}
					/* END OF ACTION: type_enum_end */
					/* BEGINNING OF ACTION: type_name */
					{
#line 958 "syntax.act"

    MAKE_type_pre ( cv_none, btype_alias, qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (ZItid) ) ;
    have_type_specifier = 1 ;
#line 2110 "syntax2.c"
					}
					/* END OF ACTION: type_name */
				}
				break;
			default:
				goto ZL1;
			}
		}
		/* END OF INLINE: 687 */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
}

void
ZRdeclarator_Haux(TYPE *ZOt, IDENTIFIER *ZOid)
{
	TYPE ZIt;
	IDENTIFIER ZIid;

	switch (CURRENT_TERMINAL) {
	case 1: case 2: case 4: case 65:
		{
			ZRdirect_Hdeclarator (&ZIt, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			TYPE ZIp;
			TYPE ZIq;

			ZRptr_Hoperator (&ZIp);
			ZRdeclarator_Haux (&ZIq, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 0 ) ) ;
#line 2161 "syntax2.c"
			}
			/* END OF ACTION: type_build */
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
	*ZOid = ZIid;
}

void
ZRshift_Hexpression(EXP *ZO926)
{
	EXP ZI926;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIe;

		ZRadditive_Hexpression (&ZIe);
		ZR927 (ZIe, &ZI926);
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
	*ZO926 = ZI926;
}

void
ZRfor_Hcond_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		EXP ZIa;
		EXP ZIb;

		ZR618 (&ZIa);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: bind_temporary */
		{
#line 817 "syntax.act"

    (ZIb) = bind_temporary ( (ZIa) ) ;
#line 2228 "syntax2.c"
		}
		/* END OF ACTION: bind_temporary */
		/* BEGINNING OF ACTION: exp_location */
		{
#line 524 "syntax.act"

    MAKE_exp_location ( type_void, crt_loc, (ZIb), (ZIe) ) ;
#line 2236 "syntax2.c"
		}
		/* END OF ACTION: exp_location */
		switch (CURRENT_TERMINAL) {
		case 77:
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
ZR1057(IDENTIFIER *ZIid, TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	default:
		{
			BASE_TYPE ZIkey;

			/* BEGINNING OF ACTION: key_enum */
			{
#line 1064 "syntax.act"
 (ZIkey) = btype_enum ; 
#line 2269 "syntax2.c"
			}
			/* END OF ACTION: key_enum */
			/* BEGINNING OF ACTION: type_elaborate */
			{
#line 964 "syntax.act"

    MAKE_type_pre ( cv_none, (ZIkey), qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (*ZIid) ) ;
    if ( have_type_declaration == TYPE_DECL_NONE ) {
	have_type_declaration = TYPE_DECL_ELABORATE ;
    }
    have_type_specifier = 1 ;
#line 2282 "syntax2.c"
			}
			/* END OF ACTION: type_elaborate */
		}
		break;
	case 64:
		{
			IDENTIFIER ZIp;
			IDENTIFIER ZItid;

			/* BEGINNING OF ACTION: type_enum_begin */
			{
#line 1092 "syntax.act"

    (ZIp) = begin_enum_defn ( (*ZIid), NULL_type ) ;
    no_type_defns++ ;
#line 2298 "syntax2.c"
			}
			/* END OF ACTION: type_enum_begin */
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
			ZR688 (&ZIp);
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
			/* BEGINNING OF ACTION: type_enum_end */
			{
#line 1097 "syntax.act"

    (ZItid) = end_enum_defn ( (ZIp) ) ;
#line 2337 "syntax2.c"
			}
			/* END OF ACTION: type_enum_end */
			/* BEGINNING OF ACTION: type_name */
			{
#line 958 "syntax.act"

    MAKE_type_pre ( cv_none, btype_alias, qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (ZItid) ) ;
    have_type_specifier = 1 ;
#line 2347 "syntax2.c"
			}
			/* END OF ACTION: type_name */
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
ZRenumerator_Hdefinition(IDENTIFIER ZIe)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZIid;
		EXP ZIc;

		/* BEGINNING OF INLINE: any-identifier */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 2383 "syntax2.c"
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
#line 2396 "syntax2.c"
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
#line 2409 "syntax2.c"
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
		/* BEGINNING OF ACTION: declarator_begin */
		{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 2426 "syntax2.c"
		}
		/* END OF ACTION: declarator_begin */
		/* BEGINNING OF INLINE: 684 */
		{
			switch (CURRENT_TERMINAL) {
			case 36:
				{
					ADVANCE_LEXER;
					ZRconstant_Hexpression (&ZIc);
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

    (ZIc) = NULL_exp ;
#line 2449 "syntax2.c"
					}
					/* END OF ACTION: exp_none */
				}
				break;
			}
		}
		/* END OF INLINE: 684 */
		/* BEGINNING OF ACTION: declare_enum */
		{
#line 1219 "syntax.act"

    IGNORE make_enumerator ( (ZIe), (ZIid), (ZIc) ) ;
#line 2462 "syntax2.c"
		}
		/* END OF ACTION: declare_enum */
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZRdeclarator(TYPE ZIp, TYPE *ZOt, IDENTIFIER *ZOid)
{
	TYPE ZIt;
	IDENTIFIER ZIid;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		TYPE ZIq;

		ZRdeclarator_Haux (&ZIq, &ZIid);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: type_inject */
		{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 2494 "syntax2.c"
		}
		/* END OF ACTION: type_inject */
	}
	goto ZL0;
ZL1:;
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOt = ZIt;
	*ZOid = ZIid;
}

void
ZRinitialiser_Hopt(IDENTIFIER ZId, EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 36:
		{
			ADVANCE_LEXER;
			ZRinitialiser_Hclause (ZId, &ZIe);
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
#line 2530 "syntax2.c"
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
parse_file(TYPE ZIt, DECL_SPEC ZIds)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
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
#line 2569 "syntax2.c"
		}
		/* END OF ACTION: is_decl_specifier */
		if (!ZI0)
			goto ZL2;
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
#line 2587 "syntax2.c"
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
#line 2601 "syntax2.c"
		}
		/* END OF ACTION: declare_extern */
		ZRdeclaration_Hseq_Hopt ();
		switch (CURRENT_TERMINAL) {
		case 32:
			break;
		case 356:
			RESTORE_LEXER;
			goto ZL1;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
		goto ZL0;
	}
	UNREACHED;
ZL2:;
	switch (CURRENT_TERMINAL) {
	case 32:
		{
			ADVANCE_LEXER;
		}
		break;
	case 77:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: declare_empty */
			{
#line 1182 "syntax.act"

    report ( crt_loc, ERR_dcl_dcl_semicolon () ) ;
#line 2633 "syntax2.c"
			}
			/* END OF ACTION: declare_empty */
			ZRdeclaration_Hseq_Hopt ();
			switch (CURRENT_TERMINAL) {
			case 32:
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
#line 2663 "syntax2.c"
			}
			/* END OF ACTION: declare_extern */
			ZRdeclaration_Hseq_Hopt ();
			switch (CURRENT_TERMINAL) {
			case 32:
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
	case 26: case 30:
		{
			ZRdeclaration_Hcond ();
			ZRdeclaration_Hseq_Hopt ();
			switch (CURRENT_TERMINAL) {
			case 32:
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
	case 1: case 2: case 4: case 65:
	case 78:
		{
			BASE_TYPE ZIbt;
			TYPE ZIt1;
			CV_SPEC ZIcv;
			DECL_SPEC ZIds1;
			TYPE ZI952;
			DECL_SPEC ZI953;
			TYPE ZIs;
			IDENTIFIER ZIid;
			EXP ZIe;

			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 2712 "syntax2.c"
			}
			/* END OF ACTION: btype_none */
			/* BEGINNING OF ACTION: type_none */
			{
#line 949 "syntax.act"

    (ZIt1) = NULL_type ;
#line 2720 "syntax2.c"
			}
			/* END OF ACTION: type_none */
			/* BEGINNING OF ACTION: cv_none */
			{
#line 895 "syntax.act"
 (ZIcv) = cv_none ; 
#line 2727 "syntax2.c"
			}
			/* END OF ACTION: cv_none */
			/* BEGINNING OF ACTION: dspec_none */
			{
#line 1114 "syntax.act"
 (ZIds1) = dspec_none ; 
#line 2734 "syntax2.c"
			}
			/* END OF ACTION: dspec_none */
			/* BEGINNING OF ACTION: dspec_complete */
			{
#line 1133 "syntax.act"

    /* Complete a declaration specifier and a type */
    (ZI953) = complete_dspec ( (ZIds1), (ZIbt), (ZIt1), (ZIcv) ) ;
    (ZI952) = complete_pre_type ( (ZIbt), (ZIt1), (ZIcv), 0 ) ;
    have_type_specifier = 0 ;
#line 2745 "syntax2.c"
			}
			/* END OF ACTION: dspec_complete */
			ZRdeclarator (ZI952, &ZIs, &ZIid);
			ZR824 (&ZIbt, &ZI952, &ZI953, &ZIs, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_none */
			{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 2759 "syntax2.c"
			}
			/* END OF ACTION: exp_none */
			/* BEGINNING OF ACTION: declare_extern */
			{
#line 1238 "syntax.act"

    external_declaration ( (ZIe), 1 ) ;
#line 2767 "syntax2.c"
			}
			/* END OF ACTION: declare_extern */
			ZRdeclaration_Hseq_Hopt ();
			switch (CURRENT_TERMINAL) {
			case 32:
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
	default:
		goto ZL1;
	}
	return;
ZL1:;
	{
		/* BEGINNING OF ACTION: error_fatal */
		{
#line 1337 "syntax.act"

    /* Unrecoverable syntax errors */
    ERROR err = ERR_lex_parse ( crt_token ) ;
    err = concat_error ( err, ERR_lex_abort () ) ;
    report ( crt_loc, err ) ;
    have_syntax_error = 1 ;
#line 2798 "syntax2.c"
		}
		/* END OF ACTION: error_fatal */
	}
ZL0:;
}

void
ZR931(EXP ZI929, EXP *ZO930)
{
	EXP ZI930;

ZL2_931:;
	switch (CURRENT_TERMINAL) {
	case 59:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRmultiplicative_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_minus */
			{
#line 544 "syntax.act"

    (ZIe) = make_minus_exp ( (ZI929), (ZIb) ) ;
#line 2828 "syntax2.c"
			}
			/* END OF ACTION: exp_minus */
			/* BEGINNING OF INLINE: 931 */
			ZI929 = ZIe;
			goto ZL2_931;
			/* END OF INLINE: 931 */
		}
		UNREACHED;
	case 69:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRmultiplicative_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_plus */
			{
#line 569 "syntax.act"

    (ZIe) = make_plus_exp ( (ZI929), (ZIb) ) ;
#line 2853 "syntax2.c"
			}
			/* END OF ACTION: exp_plus */
			/* BEGINNING OF INLINE: 931 */
			ZI929 = ZIe;
			goto ZL2_931;
			/* END OF INLINE: 931 */
		}
		UNREACHED;
	default:
		{
			ZI930 = ZI929;
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
	*ZO930 = ZI930;
}

void
parse_offset(OFFSET ZIb, TYPE ZIs, OFFSET *ZOa, TYPE *ZOt)
{
	OFFSET ZIa;
	TYPE ZIt;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		OFFSET ZIc;
		TYPE ZIu;

		ZRmember_Hdesignator (ZIb, ZIs, &ZIc, &ZIu);
		/* BEGINNING OF INLINE: 845 */
		{
			switch (CURRENT_TERMINAL) {
			case 46: case 66:
				{
					ZRdesignator_Hlist (ZIc, ZIu, &ZIa, &ZIt);
					if ((CURRENT_TERMINAL) == 356) {
						RESTORE_LEXER;
						goto ZL1;
					}
				}
				break;
			default:
				{
					ZIa = ZIc;
					ZIt = ZIu;
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		/* END OF INLINE: 845 */
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
#line 2928 "syntax2.c"
		}
		/* END OF ACTION: error_syntax */
		ZIa = ZIb;
		ZIt = ZIs;
	}
ZL0:;
	*ZOa = ZIa;
	*ZOt = ZIt;
}

void
parse_nat(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRconstant_Hexpression (&ZIe);
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
#line 2965 "syntax2.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: exp_none */
		{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 2973 "syntax2.c"
		}
		/* END OF ACTION: exp_none */
	}
ZL0:;
	*ZOe = ZIe;
}

void
ZRinitialiser_Hexpression(EXP *ZOe)
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
	SAVE_LEXER (356);
	return;
ZL0:;
	*ZOe = ZIe;
}

void
parse_param(TYPE ZIs, int ZIp, IDENTIFIER *ZOd)
{
	IDENTIFIER ZId;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRparameter_Hdeclaration (&ZId);
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
#line 3030 "syntax2.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: decl_none */
		{
#line 1242 "syntax.act"

    (ZId) = NULL_id ;
#line 3038 "syntax2.c"
		}
		/* END OF ACTION: decl_none */
	}
ZL0:;
	*ZOd = ZId;
}

void
ZR1061(TYPE *ZI1059, TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 78: case 333:
		{
			TYPE ZIq;

			ZRabstract_Hdeclarator_Haux (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_build */
			{
#line 1049 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (*ZI1059) : inject_pre_type ( (ZIq), (*ZI1059), 0 ) ) ;
#line 3066 "syntax2.c"
			}
			/* END OF ACTION: type_build */
		}
		break;
	default:
		{
			ZIt = *ZI1059;
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
ZRtype_Hspecifier_Hseq(BASE_TYPE *ZObt, TYPE *ZOt, CV_SPEC *ZOcv)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;
	CV_SPEC ZIcv;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		BASE_TYPE ZIb1;
		TYPE ZIt1;
		CV_SPEC ZIcv1;

		ZRtype_Hqualifier (&ZIb1, &ZIt1, &ZIcv1);
		/* BEGINNING OF INLINE: 696 */
		{
			switch (CURRENT_TERMINAL) {
			case 2: case 25: case 97: case 98:
			case 102: case 104: case 106: case 110:
			case 111: case 114: case 115: case 118:
			case 121: case 122: case 123: case 124:
			case 156: case 185: case 286: case 299:
				{
					BASE_TYPE ZIb2;
					TYPE ZIt2;
					CV_SPEC ZIcv2;

					ZRtype_Hspecifier_Hseq (&ZIb2, &ZIt2, &ZIcv2);
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
#line 3130 "syntax2.c"
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
#line 3146 "syntax2.c"
					}
					/* END OF ACTION: type_join */
					/* BEGINNING OF ACTION: cv_join */
					{
#line 899 "syntax.act"

    CV_SPEC c = ( (ZIcv1) & (ZIcv2) ) ;
    if ( c ) report ( crt_loc, ERR_dcl_type_cv_dup ( c ) ) ;
    (ZIcv) = ( (ZIcv1) | (ZIcv2) ) ;
#line 3156 "syntax2.c"
					}
					/* END OF ACTION: cv_join */
				}
				break;
			default:
				{
					ZIbt = ZIb1;
					ZIt = ZIt1;
					ZIcv = ZIcv1;
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		/* END OF INLINE: 696 */
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
ZR1062(TYPE *ZO865)
{
	TYPE ZI865;

	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 78: case 333:
		{
			TYPE ZIt;

			ZRabstract_Hdeclarator_Haux (&ZIt);
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
#line 3207 "syntax2.c"
			}
			/* END OF ACTION: declarator_bad */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR866 (ZIt, &ZI865);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 2: case 25: case 39: case 47:
	case 94: case 97: case 98: case 102:
	case 104: case 105: case 106: case 110:
	case 111: case 112: case 114: case 115:
	case 117: case 118: case 120: case 121:
	case 122: case 123: case 124: case 137:
	case 156: case 185: case 286: case 299:
		{
			IDENTIFIER ZIid;
			TYPE ZIs;
			TYPE ZIt;

			/* BEGINNING OF ACTION: id_none */
			{
#line 382 "syntax.act"

    (ZIid) = NULL_id ;
#line 3241 "syntax2.c"
			}
			/* END OF ACTION: id_none */
			/* BEGINNING OF ACTION: param_begin */
			{
#line 872 "syntax.act"

    func_type_defn ( 0 ) ;
    begin_param ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 3252 "syntax2.c"
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
#line 3274 "syntax2.c"
			}
			/* END OF ACTION: param_end */
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
ZR935(EXP ZI933, EXP *ZO934)
{
	EXP ZI934;

ZL2_935:;
	switch (CURRENT_TERMINAL) {
	case 44:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_div */
			{
#line 474 "syntax.act"

    (ZIe) = make_mult_exp ( lex_div, (ZI933), (ZIb) ) ;
#line 3320 "syntax2.c"
			}
			/* END OF ACTION: exp_div */
			/* BEGINNING OF INLINE: 935 */
			ZI933 = ZIe;
			goto ZL2_935;
			/* END OF INLINE: 935 */
		}
		UNREACHED;
	case 73:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_rem */
			{
#line 598 "syntax.act"

    (ZIe) = make_rem_exp ( (ZI933), (ZIb) ) ;
#line 3345 "syntax2.c"
			}
			/* END OF ACTION: exp_rem */
			/* BEGINNING OF INLINE: 935 */
			ZI933 = ZIe;
			goto ZL2_935;
			/* END OF INLINE: 935 */
		}
		UNREACHED;
	case 78:
		{
			EXP ZIb;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIb);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_mult */
			{
#line 548 "syntax.act"

    (ZIe) = make_mult_exp ( lex_star, (ZI933), (ZIb) ) ;
#line 3370 "syntax2.c"
			}
			/* END OF ACTION: exp_mult */
			/* BEGINNING OF INLINE: 935 */
			ZI933 = ZIe;
			goto ZL2_935;
			/* END OF INLINE: 935 */
		}
		UNREACHED;
	default:
		{
			ZI934 = ZI933;
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
	*ZO934 = ZI934;
}

void
parse_func(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRfunction_Hbody (&ZIe);
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
#line 3421 "syntax2.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: exp_none */
		{
#line 431 "syntax.act"

    (ZIe) = NULL_exp ;
#line 3429 "syntax2.c"
		}
		/* END OF ACTION: exp_none */
	}
ZL0:;
	*ZOe = ZIe;
}

void
ZRabstract_Hdeclarator_Haux(TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 333:
		{
			ZRdirect_Habstract_Hdeclarator (&ZIt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			TYPE ZI1059;

			ZRptr_Hoperator (&ZI1059);
			ZR1061 (&ZI1059, &ZIt);
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
	*ZOt = ZIt;
}

void
ZRstorage_Hclass_Hspecifier(DECL_SPEC *ZOds)
{
	DECL_SPEC ZIds;

	switch (CURRENT_TERMINAL) {
	case 94:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: dspec_auto */
			{
#line 1115 "syntax.act"
 (ZIds) = dspec_auto ; 
#line 3490 "syntax2.c"
			}
			/* END OF ACTION: dspec_auto */
		}
		break;
	case 105:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: dspec_extern */
			{
#line 1118 "syntax.act"
 (ZIds) = dspec_extern ; 
#line 3502 "syntax2.c"
			}
			/* END OF ACTION: dspec_extern */
		}
		break;
	case 137:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: dspec_inline */
			{
#line 1120 "syntax.act"
 (ZIds) = dspec_inline ; 
#line 3514 "syntax2.c"
			}
			/* END OF ACTION: dspec_inline */
		}
		break;
	case 112:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: dspec_register */
			{
#line 1116 "syntax.act"
 (ZIds) = dspec_register ; 
#line 3526 "syntax2.c"
			}
			/* END OF ACTION: dspec_register */
		}
		break;
	case 117:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: dspec_static */
			{
#line 1117 "syntax.act"
 (ZIds) = dspec_static ; 
#line 3538 "syntax2.c"
			}
			/* END OF ACTION: dspec_static */
		}
		break;
	case 120:
		{
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: dspec_typedef */
			{
#line 1119 "syntax.act"
 (ZIds) = dspec_typedef ; 
#line 3550 "syntax2.c"
			}
			/* END OF ACTION: dspec_typedef */
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
	*ZOds = ZIds;
}

void
ZRparameter_Hid_Hlist(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		IDENTIFIER ZIid;

		/* BEGINNING OF INLINE: first-parameter-id */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3587 "syntax2.c"
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
#line 3600 "syntax2.c"
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
		/* BEGINNING OF ACTION: declarator_begin */
		{
#line 1223 "syntax.act"

    IDENTIFIER pid = underlying_id ( (ZIid) ) ;
    DEREF_loc ( id_loc ( pid ), decl_loc ) ;
#line 3617 "syntax2.c"
		}
		/* END OF ACTION: declarator_begin */
		/* BEGINNING OF ACTION: declare_weak_param */
		{
#line 1192 "syntax.act"

    IGNORE weak_param_decl ( (ZIid) ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
#line 3627 "syntax2.c"
		}
		/* END OF ACTION: declare_weak_param */
		ZRparameter_Hid_Htail ();
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR939(EXP ZI937, EXP *ZO938)
{
	EXP ZI938;

ZL2_939:;
	switch (CURRENT_TERMINAL) {
	case 61:
		{
			EXP ZIe;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_postdec */
			{
#line 573 "syntax.act"

    (ZIe) = make_postfix_exp ( lex_minus_Hminus, (ZI937) ) ;
#line 3659 "syntax2.c"
			}
			/* END OF ACTION: exp_postdec */
			/* BEGINNING OF INLINE: 939 */
			ZI937 = ZIe;
			goto ZL2_939;
			/* END OF INLINE: 939 */
		}
		UNREACHED;
	case 65:
		{
			SID_LIST_EXP ZIp;
			EXP ZIe;

			ADVANCE_LEXER;
			ZRexpression_Hlist_Hopt (&ZIp);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_func */
			{
#line 500 "syntax.act"

    (ZIe) = make_func_exp ( (ZI937), (ZIp), 0 ) ;
#line 3684 "syntax2.c"
			}
			/* END OF ACTION: exp_func */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			/* BEGINNING OF INLINE: 939 */
			ZI937 = ZIe;
			goto ZL2_939;
			/* END OF INLINE: 939 */
		}
		UNREACHED;
	case 71:
		{
			EXP ZIe;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_postinc */
			{
#line 577 "syntax.act"

    (ZIe) = make_postfix_exp ( lex_plus_Hplus, (ZI937) ) ;
#line 3710 "syntax2.c"
			}
			/* END OF ACTION: exp_postinc */
			/* BEGINNING OF INLINE: 939 */
			ZI937 = ZIe;
			goto ZL2_939;
			/* END OF INLINE: 939 */
		}
		UNREACHED;
	case 66:
		{
			EXP ZIb;
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
			ZRexpression (&ZIb);
			/* BEGINNING OF INLINE: close-square */
			{
				if ((CURRENT_TERMINAL) == 356) {
					RESTORE_LEXER;
					goto ZL1;
				}
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
			/* BEGINNING OF ACTION: exp_index */
			{
#line 512 "syntax.act"

    (ZIe) = make_index_exp ( (ZI937), (ZIb) ) ;
#line 3760 "syntax2.c"
			}
			/* END OF ACTION: exp_index */
			/* BEGINNING OF INLINE: 939 */
			ZI937 = ZIe;
			goto ZL2_939;
			/* END OF INLINE: 939 */
		}
		UNREACHED;
	case 35:
		{
			EXP ZIb;
			TYPE ZIt;
			NAMESPACE ZIns;
			IDENTIFIER ZIid;
			EXP ZIe;

			/* BEGINNING OF ACTION: exp_arrow_begin */
			{
#line 444 "syntax.act"

    (ZIb) = begin_field_exp ( lex_arrow, (ZI937), &(ZIt), &(ZIns) ) ;
#line 3782 "syntax2.c"
			}
			/* END OF ACTION: exp_arrow_begin */
			ADVANCE_LEXER;
			ZRfield_Hid_Hexpression (ZIns, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_arrow_end */
			{
#line 448 "syntax.act"

    (ZIe) = end_field_exp ( lex_arrow, (ZIb), (ZIt), (ZIns), (ZIid), 0 ) ;
#line 3796 "syntax2.c"
			}
			/* END OF ACTION: exp_arrow_end */
			/* BEGINNING OF ACTION: rescan_token */
			{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 3804 "syntax2.c"
			}
			/* END OF ACTION: rescan_token */
			/* BEGINNING OF INLINE: 939 */
			ZI937 = ZIe;
			goto ZL2_939;
			/* END OF INLINE: 939 */
		}
		UNREACHED;
	case 46:
		{
			EXP ZIb;
			TYPE ZIt;
			NAMESPACE ZIns;
			IDENTIFIER ZIid;
			EXP ZIe;

			/* BEGINNING OF ACTION: exp_dot_begin */
			{
#line 478 "syntax.act"

    (ZIb) = begin_field_exp ( lex_dot, (ZI937), &(ZIt), &(ZIns) ) ;
#line 3826 "syntax2.c"
			}
			/* END OF ACTION: exp_dot_begin */
			ADVANCE_LEXER;
			ZRfield_Hid_Hexpression (ZIns, &ZIid);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_dot_end */
			{
#line 482 "syntax.act"

    (ZIe) = end_field_exp ( lex_dot, (ZIb), (ZIt), (ZIns), (ZIid), 0 ) ;
#line 3840 "syntax2.c"
			}
			/* END OF ACTION: exp_dot_end */
			/* BEGINNING OF ACTION: rescan_token */
			{
#line 1466 "syntax.act"

    RESCAN_LEXER ;
#line 3848 "syntax2.c"
			}
			/* END OF ACTION: rescan_token */
			/* BEGINNING OF INLINE: 939 */
			ZI937 = ZIe;
			goto ZL2_939;
			/* END OF INLINE: 939 */
		}
		UNREACHED;
	default:
		{
			ZI938 = ZI937;
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
	*ZO938 = ZI938;
}

void
parse_id(IDENTIFIER *ZOid)
{
	IDENTIFIER ZIid;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		/* BEGINNING OF INLINE: any-identifier */
		{
			switch (CURRENT_TERMINAL) {
			case 1:
				{
					/* BEGINNING OF EXTRACT: identifier */
					{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 3892 "syntax2.c"
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
#line 3905 "syntax2.c"
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
#line 3918 "syntax2.c"
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
#line 3941 "syntax2.c"
		}
		/* END OF ACTION: error_syntax */
		/* BEGINNING OF ACTION: id_none */
		{
#line 382 "syntax.act"

    (ZIid) = NULL_id ;
#line 3949 "syntax2.c"
		}
		/* END OF ACTION: id_none */
	}
ZL0:;
	*ZOid = ZIid;
}

void
ZRcast_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 170:
		{
			int ZIop;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_alignof */
			{
#line 369 "syntax.act"
 (ZIop) = lex_alignof ; 
#line 3972 "syntax2.c"
			}
			/* END OF ACTION: lex_alignof */
			ZRsizeof_Hexpression (ZIop, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 23:
		{
			EXP ZI968;

			/* BEGINNING OF EXTRACT: complex-exp */
			{
#line 329 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZI968 = parse_exp_token ( id, args ) ;
    RESCAN_LEXER ;
#line 3994 "syntax2.c"
			}
			/* END OF EXTRACT: complex-exp */
			ADVANCE_LEXER;
			ZR939 (ZI968, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 206:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_ignore */
			{
#line 508 "syntax.act"

    (ZIe) = make_cast_exp ( type_void, (ZIa), 0 ) ;
#line 4020 "syntax2.c"
			}
			/* END OF ACTION: exp_ignore */
		}
		break;
	case 210:
		{
			EXP ZI968;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_ellipsis */
			{
#line 486 "syntax.act"

    (ZI968) = make_ellipsis_exp () ;
#line 4035 "syntax2.c"
			}
			/* END OF ACTION: exp_ellipsis */
			ZR939 (ZI968, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 1:
		{
			IDENTIFIER ZIid;
			EXP ZI968;

			/* BEGINNING OF EXTRACT: identifier */
			{
#line 195 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 4055 "syntax2.c"
			}
			/* END OF EXTRACT: identifier */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: exp_identifier */
			{
#line 504 "syntax.act"

    (ZI968) = make_id_exp ( (ZIid) ) ;
#line 4064 "syntax2.c"
			}
			/* END OF ACTION: exp_identifier */
			ZR939 (ZI968, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 255:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_lit */
			{
#line 520 "syntax.act"

    (ZIe) = make_lit_exp ( (ZIa) ) ;
#line 4089 "syntax2.c"
			}
			/* END OF ACTION: exp_lit */
		}
		break;
	case 61:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRunary_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_predec */
			{
#line 581 "syntax.act"

    (ZIe) = make_prefix_exp ( lex_minus_Hminus, (ZIa) ) ;
#line 4109 "syntax2.c"
			}
			/* END OF ACTION: exp_predec */
		}
		break;
	case 65:
		{
			ADVANCE_LEXER;
			ZR969 (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 71:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRunary_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_preinc */
			{
#line 585 "syntax.act"

    (ZIe) = make_prefix_exp ( lex_plus_Hplus, (ZIa) ) ;
#line 4139 "syntax2.c"
			}
			/* END OF ACTION: exp_preinc */
		}
		break;
	case 116:
		{
			int ZIop;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_sizeof */
			{
#line 370 "syntax.act"
 (ZIop) = lex_sizeof ; 
#line 4153 "syntax2.c"
			}
			/* END OF ACTION: lex_sizeof */
			ZRsizeof_Hexpression (ZIop, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_indir */
			{
#line 516 "syntax.act"

    (ZIe) = make_indir_exp ( (ZIa) ) ;
#line 4178 "syntax2.c"
			}
			/* END OF ACTION: exp_indir */
		}
		break;
	case 33:
		{
			EXP ZIa;

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
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_ref */
			{
#line 589 "syntax.act"

    (ZIe) = make_ref_exp ( (ZIa), 0 ) ;
#line 4210 "syntax2.c"
			}
			/* END OF ACTION: exp_ref */
		}
		break;
	case 17: case 18: case 19: case 20:
	case 21: case 22:
		{
			EXP ZI968;

			ZRliteral (&ZI968);
			ZR939 (ZI968, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 62:
		{
			EXP ZIa;

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
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_not */
			{
#line 552 "syntax.act"

    (ZIe) = make_not_exp ( (ZIa) ) ;
#line 4255 "syntax2.c"
			}
			/* END OF ACTION: exp_not */
		}
		break;
	case 43: case 59: case 69: case 85:
		{
			int ZIop;
			EXP ZIa;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZIop) = crt_lex_token ; 
#line 4269 "syntax2.c"
			}
			/* END OF ACTION: lex_crt */
			ZRunary_Hoperator ();
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_unary */
			{
#line 614 "syntax.act"

    (ZIe) = make_uminus_exp ( (ZIop), (ZIa) ) ;
#line 4283 "syntax2.c"
			}
			/* END OF ACTION: exp_unary */
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
ZRtype_Hspecifier(BASE_TYPE *ZObt, TYPE *ZOt)
{
	BASE_TYPE ZIbt;
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 25:
		{
			/* BEGINNING OF EXTRACT: complex-type */
			{
#line 343 "syntax.act"

    IDENTIFIER id = crt_token->pp_data.tok.id ;
    PPTOKEN *args = crt_token->pp_data.tok.args ;
    ZIt = parse_type_token ( id, args ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_type_specifier = 1 ;
    RESCAN_LEXER ;
#line 4320 "syntax2.c"
			}
			/* END OF EXTRACT: complex-type */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 4328 "syntax2.c"
			}
			/* END OF ACTION: btype_none */
		}
		break;
	case 2:
		{
			IDENTIFIER ZIid;

			/* BEGINNING OF EXTRACT: type-name */
			{
#line 199 "syntax.act"

    ZIid = crt_token->pp_data.id.use ;
#line 4342 "syntax2.c"
			}
			/* END OF EXTRACT: type-name */
			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: type_name */
			{
#line 958 "syntax.act"

    MAKE_type_pre ( cv_none, btype_alias, qual_none, (ZIt) ) ;
    COPY_id ( type_name ( (ZIt) ), (ZIid) ) ;
    have_type_specifier = 1 ;
#line 4353 "syntax2.c"
			}
			/* END OF ACTION: type_name */
			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 4360 "syntax2.c"
			}
			/* END OF ACTION: btype_none */
		}
		break;
	case 97: case 102: case 106: case 110:
	case 111: case 114: case 115: case 122:
	case 123: case 156: case 185: case 286:
	case 299:
		{
			ZRbase_Htype_Hspecifier (&ZIbt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_pre */
			{
#line 953 "syntax.act"

    (ZIt) = NULL_type ;
    have_type_specifier = 1 ;
#line 4381 "syntax2.c"
			}
			/* END OF ACTION: type_pre */
		}
		break;
	case 118: case 121:
		{
			ZRclass_Hspecifier (&ZIt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 4397 "syntax2.c"
			}
			/* END OF ACTION: btype_none */
		}
		break;
	case 104:
		{
			ZRenum_Hspecifier (&ZIt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: btype_none */
			{
#line 926 "syntax.act"
 (ZIbt) = btype_none ; 
#line 4413 "syntax2.c"
			}
			/* END OF ACTION: btype_none */
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
}

void
ZRabstract_Hdeclarator_Hopt(TYPE ZIp, TYPE *ZOt)
{
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 65: case 66: case 78: case 333:
		{
			TYPE ZIq;

			ZRabstract_Hdeclarator_Haux (&ZIq);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: type_inject */
			{
#line 1045 "syntax.act"

    (ZIt) = ( IS_NULL_type ( (ZIq) ) ? (ZIp) : inject_pre_type ( (ZIq), (ZIp), 1 ) ) ;
#line 4452 "syntax2.c"
			}
			/* END OF ACTION: type_inject */
		}
		break;
	default:
		{
			ZIt = ZIp;
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
ZR688(IDENTIFIER *ZIp)
{
	switch (CURRENT_TERMINAL) {
	case 1: case 2: case 4:
		{
			ZRenumerator_Hlist (*ZIp);
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
ZRopen_Hround_Hx(void)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		switch (CURRENT_TERMINAL) {
		case 65:
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

		/* BEGINNING OF ACTION: lex_open_round */
		{
#line 367 "syntax.act"
 (ZIt) = lex_open_Hround ; 
#line 4521 "syntax2.c"
		}
		/* END OF ACTION: lex_open_round */
		/* BEGINNING OF ACTION: expected */
		{
#line 1357 "syntax.act"

    /* Expected symbol */
    int p = primary_form ( crt_lex_token ) ;
    if ( p != (ZIt) ) report ( crt_loc, ERR_lex_expect ( (ZIt) ) ) ;
#line 4531 "syntax2.c"
		}
		/* END OF ACTION: expected */
	}
}

void
ZRenumerator_Hlist(IDENTIFIER ZIe)
{
	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
ZL2_enumerator_Hlist:;
	{
		ZRenumerator_Hdefinition (ZIe);
		/* BEGINNING OF INLINE: 686 */
		{
			switch (CURRENT_TERMINAL) {
			case 42:
				{
					ADVANCE_LEXER;
					/* BEGINNING OF INLINE: 1058 */
					{
						switch (CURRENT_TERMINAL) {
						case 42:
							{
								ADVANCE_LEXER;
								/* BEGINNING OF ACTION: error_comma */
								{
#line 1352 "syntax.act"

    /* Extra comma at the end of a list */
    report ( crt_loc, ERR_lex_extra_comma () ) ;
#line 4564 "syntax2.c"
								}
								/* END OF ACTION: error_comma */
								/* BEGINNING OF INLINE: enumerator-list */
								goto ZL2_enumerator_Hlist;
								/* END OF INLINE: enumerator-list */
							}
							UNREACHED;
						case 1: case 2: case 4:
							{
								/* BEGINNING OF INLINE: enumerator-list */
								goto ZL2_enumerator_Hlist;
								/* END OF INLINE: enumerator-list */
							}
							UNREACHED;
						default:
							{
								/* BEGINNING OF ACTION: error_comma */
								{
#line 1352 "syntax.act"

    /* Extra comma at the end of a list */
    report ( crt_loc, ERR_lex_extra_comma () ) ;
#line 4587 "syntax2.c"
								}
								/* END OF ACTION: error_comma */
							}
							break;
						}
					}
					/* END OF INLINE: 1058 */
				}
				break;
			case 356:
				RESTORE_LEXER;
				goto ZL1;
			default:
				break;
			}
		}
		/* END OF INLINE: 686 */
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZR818(BASE_TYPE *ZIbt, TYPE *ZIt1, CV_SPEC *ZIcv, DECL_SPEC *ZIds1)
{
	switch (CURRENT_TERMINAL) {
	default:
		{
			/* BEGINNING OF ACTION: declare_id_empty */
			{
#line 1174 "syntax.act"

    printf("In define_func\n");
    IGNORE empty_decl ( (*ZIds1), NULL_type, (*ZIbt), (*ZIt1), (*ZIcv), last_lex_token, 0 ) ;
    have_type_declaration = TYPE_DECL_NONE ;
    have_func_declarator = 0 ;
    have_type_specifier = 0 ;
#line 4627 "syntax2.c"
			}
			/* END OF ACTION: declare_id_empty */
		}
		break;
	case 1: case 2: case 4: case 65:
	case 78:
		{
			TYPE ZIt;
			DECL_SPEC ZIds;

			/* BEGINNING OF ACTION: dspec_complete */
			{
#line 1133 "syntax.act"

    /* Complete a declaration specifier and a type */
    (ZIds) = complete_dspec ( (*ZIds1), (*ZIbt), (*ZIt1), (*ZIcv) ) ;
    (ZIt) = complete_pre_type ( (*ZIbt), (*ZIt1), (*ZIcv), 0 ) ;
    have_type_specifier = 0 ;
#line 4646 "syntax2.c"
			}
			/* END OF ACTION: dspec_complete */
			ZRinit_Hdeclarator_Hlist (ZIds, *ZIbt, ZIt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 356:
		return;
	}
	return;
ZL1:;
	SAVE_LEXER (356);
	return;
}

void
ZRfor_Hinit_Hstatement(EXP *ZOe)
{
	EXP ZIe;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		ZRexpression_Hstatement (&ZIe);
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
ZRdesignator(OFFSET ZIb, TYPE ZIs, OFFSET *ZOa, TYPE *ZOt)
{
	OFFSET ZIa;
	TYPE ZIt;

	switch (CURRENT_TERMINAL) {
	case 46:
		{
			ADVANCE_LEXER;
			ZRmember_Hdesignator (ZIb, ZIs, &ZIa, &ZIt);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
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
			ZRconstant_Hexpression (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: offset_index */
			{
#line 1277 "syntax.act"

    OFFSET off = offset_index ( (ZIs), (ZIe), &(ZIt) ) ;
    (ZIa) = offset_add ( (ZIb), off ) ;
#line 4733 "syntax2.c"
			}
			/* END OF ACTION: offset_index */
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
	*ZOa = ZIa;
	*ZOt = ZIt;
}

void
ZR1073(int *ZIop, int *ZIn1, int *ZIm1, EXP *ZOc)
{
	EXP ZIc;

	if ((CURRENT_TERMINAL) == 356) {
		return;
	}
	{
		TYPE ZIt;
		int ZIm2;
		EXP ZIa;

		/* BEGINNING OF ACTION: is_type_id_true */
		{
#line 1442 "syntax.act"

    /* Resolve type-ids from expressions */
    (ZI0) = predict_typeid ( 1 ) ;
#line 4784 "syntax2.c"
		}
		/* END OF ACTION: is_type_id_true */
		if (!ZI0)
			goto ZL2;
		ZRtype_Hid (&ZIt, &ZIm2);
		if ((CURRENT_TERMINAL) == 356) {
			RESTORE_LEXER;
			goto ZL1;
		}
		/* BEGINNING OF ACTION: exp_none */
		{
#line 431 "syntax.act"

    (ZIa) = NULL_exp ;
#line 4799 "syntax2.c"
		}
		/* END OF ACTION: exp_none */
		/* BEGINNING OF ACTION: exp_sizeof */
		{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (*ZIop) ) ;
#line 4807 "syntax2.c"
		}
		/* END OF ACTION: exp_sizeof */
		switch (CURRENT_TERMINAL) {
		case 39:
			break;
		default:
			goto ZL1;
		}
		ADVANCE_LEXER;
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
			EXP ZI1072;
			EXP ZIe;
			EXP ZIa;
			int ZIn2;
			int ZIm2;
			TYPE ZIt;

			/* BEGINNING OF ACTION: exp_paren_begin */
			{
#line 560 "syntax.act"

    IGNORE incr_value ( OPT_VAL_paren_depth ) ;
#line 4842 "syntax2.c"
			}
			/* END OF ACTION: exp_paren_begin */
			ZRexpression (&ZI1072);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_paren_end */
			{
#line 564 "syntax.act"

    (ZIe) = make_paren_exp ( (ZI1072) ) ;
    decr_value ( OPT_VAL_paren_depth ) ;
#line 4856 "syntax2.c"
			}
			/* END OF ACTION: exp_paren_end */
			switch (CURRENT_TERMINAL) {
			case 39:
				break;
			default:
				goto ZL1;
			}
			ADVANCE_LEXER;
			ZR939 (ZIe, &ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: diff_side_effects */
			{
#line 1382 "syntax.act"

    (ZIn2) = no_side_effects - (*ZIn1) ;
#line 4876 "syntax2.c"
			}
			/* END OF ACTION: diff_side_effects */
			/* BEGINNING OF ACTION: diff_type_defns */
			{
#line 1386 "syntax.act"

    (ZIm2) = no_type_defns - (*ZIm1) ;
#line 4884 "syntax2.c"
			}
			/* END OF ACTION: diff_type_defns */
			/* BEGINNING OF ACTION: type_of */
			{
#line 990 "syntax.act"

    (ZIt) = typeof_exp ( &(ZIa), (ZIn2), (*ZIop) ) ;
#line 4892 "syntax2.c"
			}
			/* END OF ACTION: type_of */
			/* BEGINNING OF ACTION: exp_sizeof */
			{
#line 610 "syntax.act"

    (ZIc) = make_sizeof_exp ( (ZIt), (ZIa), (ZIm2), (*ZIop) ) ;
#line 4900 "syntax2.c"
			}
			/* END OF ACTION: exp_sizeof */
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
	*ZOc = ZIc;
}

void
ZRunary_Hexpression(EXP *ZOe)
{
	EXP ZIe;

	switch (CURRENT_TERMINAL) {
	case 170:
		{
			int ZIop;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_alignof */
			{
#line 369 "syntax.act"
 (ZIop) = lex_alignof ; 
#line 4931 "syntax2.c"
			}
			/* END OF ACTION: lex_alignof */
			ZRsizeof_Hexpression (ZIop, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 61:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRunary_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_predec */
			{
#line 581 "syntax.act"

    (ZIe) = make_prefix_exp ( lex_minus_Hminus, (ZIa) ) ;
#line 4956 "syntax2.c"
			}
			/* END OF ACTION: exp_predec */
		}
		break;
	case 71:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRunary_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_preinc */
			{
#line 585 "syntax.act"

    (ZIe) = make_prefix_exp ( lex_plus_Hplus, (ZIa) ) ;
#line 4976 "syntax2.c"
			}
			/* END OF ACTION: exp_preinc */
		}
		break;
	case 116:
		{
			int ZIop;

			ADVANCE_LEXER;
			/* BEGINNING OF ACTION: lex_sizeof */
			{
#line 370 "syntax.act"
 (ZIop) = lex_sizeof ; 
#line 4990 "syntax2.c"
			}
			/* END OF ACTION: lex_sizeof */
			ZRsizeof_Hexpression (ZIop, &ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 78:
		{
			EXP ZIa;

			ADVANCE_LEXER;
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_indir */
			{
#line 516 "syntax.act"

    (ZIe) = make_indir_exp ( (ZIa) ) ;
#line 5015 "syntax2.c"
			}
			/* END OF ACTION: exp_indir */
		}
		break;
	case 33:
		{
			EXP ZIa;

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
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_ref */
			{
#line 589 "syntax.act"

    (ZIe) = make_ref_exp ( (ZIa), 0 ) ;
#line 5047 "syntax2.c"
			}
			/* END OF ACTION: exp_ref */
		}
		break;
	case 62:
		{
			EXP ZIa;

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
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_not */
			{
#line 552 "syntax.act"

    (ZIe) = make_not_exp ( (ZIa) ) ;
#line 5079 "syntax2.c"
			}
			/* END OF ACTION: exp_not */
		}
		break;
	case 1: case 17: case 18: case 19:
	case 20: case 21: case 22: case 23:
	case 65: case 210:
		{
			ZRpostfix_Hexpression (&ZIe);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
		}
		break;
	case 43: case 59: case 69: case 85:
		{
			int ZIop;
			EXP ZIa;

			/* BEGINNING OF ACTION: lex_crt */
			{
#line 366 "syntax.act"
 (ZIop) = crt_lex_token ; 
#line 5104 "syntax2.c"
			}
			/* END OF ACTION: lex_crt */
			ZRunary_Hoperator ();
			ZRcast_Hexpression (&ZIa);
			if ((CURRENT_TERMINAL) == 356) {
				RESTORE_LEXER;
				goto ZL1;
			}
			/* BEGINNING OF ACTION: exp_unary */
			{
#line 614 "syntax.act"

    (ZIe) = make_uminus_exp ( (ZIop), (ZIa) ) ;
#line 5118 "syntax2.c"
			}
			/* END OF ACTION: exp_unary */
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

/* END OF FILE */
