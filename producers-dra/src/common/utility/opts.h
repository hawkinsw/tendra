/* $Id$ */

/* AUTOMATICALLY GENERATED BY make_err FROM cpp */


{ "error", OPT_VALUE_error },
{ "warning", OPT_VALUE_warning },
{ "none", OPT_VALUE_none },
{ "whatever", OPT_VALUE_whatever },
{ "new", OPT_VALUE_new },
{ "wall", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "cpp_error", OPT_VALUE_error },
#else
{ "cpp_error", OPT_VALUE_none },
#endif
#ifndef ERR_ALTERNATE
{ "c_error", OPT_VALUE_none },
#else
{ "c_error", OPT_VALUE_error },
#endif
#ifndef ERR_ALTERNATE
{ "addr_register", OPT_VALUE_none },
#else
{ "addr_register", OPT_VALUE_error },
#endif
#ifndef ERR_ALTERNATE
{ "anon_union", OPT_VALUE_none },
#else
{ "anon_union", OPT_VALUE_error },
#endif
#ifndef ERR_ALTERNATE
{ "bitf_overflow", OPT_VALUE_wall },
#else
{ "bitf_overflow", OPT_VALUE_error },
#endif
#ifndef ERR_ALTERNATE
{ "bitf_type", OPT_VALUE_none },
#else
{ "bitf_type", OPT_VALUE_error },
#endif
{ "bool_assign", OPT_VALUE_wall },
{ "case_fall", OPT_VALUE_wall },
{ "cast_explicit", OPT_VALUE_none },
#ifndef ERR_ALTERNATE
{ "class_scope", OPT_VALUE_on },
#else
{ "class_scope", OPT_VALUE_off },
#endif
{ "comma_extra", OPT_VALUE_error },
{ "complete_struct", OPT_VALUE_wall },
{ "concat_string", OPT_VALUE_error },
{ "cond_default", OPT_VALUE_off },
#ifndef ERR_ALTERNATE
{ "cond_lvalue", OPT_VALUE_none },
#else
{ "cond_lvalue", OPT_VALUE_error },
#endif
{ "const_cond", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "const_internal", OPT_VALUE_on },
#else
{ "const_internal", OPT_VALUE_off },
#endif
{ "const_string", OPT_VALUE_wall },
{ "conv", OPT_VALUE_wall },
{ "conv_int_int", OPT_VALUE_wall },
{ "conv_int_int_expl", OPT_VALUE_none },
{ "conv_int_int_impl", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "conv_int_enum", OPT_VALUE_error },
#else
{ "conv_int_enum", OPT_VALUE_wall },
#endif
{ "conv_int_ptr", OPT_VALUE_wall },
{ "conv_int_ptr_expl", OPT_VALUE_wall },
{ "conv_int_ptr_impl", OPT_VALUE_error },
{ "conv_ptr_ptr", OPT_VALUE_wall },
{ "conv_ptr_ptr_expl", OPT_VALUE_wall },
{ "conv_ptr_ptr_impl", OPT_VALUE_error },
{ "conv_ptr_ptr_void", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "conv_ptr_void_ptr", OPT_VALUE_error },
#else
{ "conv_ptr_void_ptr", OPT_VALUE_wall },
#endif
{ "conv_ptr_func", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "cpplus_comment", OPT_VALUE_none },
#else
{ "cpplus_comment", OPT_VALUE_error },
#endif
{ "decl_cond", OPT_VALUE_error },
{ "decl_empty", OPT_VALUE_error },
{ "decl_hide", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "decl_none", OPT_VALUE_none },
#else
{ "decl_none", OPT_VALUE_error },
#endif
{ "decl_struct_anon", OPT_VALUE_error },
{ "decl_unify", OPT_VALUE_off },
{ "decl_volatile", OPT_VALUE_off },
{ "delete_over", OPT_VALUE_none },
{ "digraph", OPT_VALUE_wall },
{ "discard", OPT_VALUE_wall },
{ "discard_exp", OPT_VALUE_wall },
{ "discard_func", OPT_VALUE_wall },
{ "discard_static", OPT_VALUE_wall },
{ "discard_value", OPT_VALUE_wall },
{ "dollar_ident", OPT_VALUE_error },
{ "dspec_none", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "dspec_none_func", OPT_VALUE_new },
#else
{ "dspec_none_func", OPT_VALUE_wall },
#endif
{ "ellipsis_extra", OPT_VALUE_error },
{ "ellipsis_ident", OPT_VALUE_error },
{ "empty_body", OPT_VALUE_wall },
{ "enum_decl", OPT_VALUE_error },
{ "enum_switch", OPT_VALUE_wall },
{ "eof_nline", OPT_VALUE_error },
{ "escape_overflow", OPT_VALUE_error },
{ "escape_unknown", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "for_scope", OPT_VALUE_on },
#else
{ "for_scope", OPT_VALUE_off },
#endif
{ "func_block", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "func_impl", OPT_VALUE_error },
#else
{ "func_impl", OPT_VALUE_wall },
#endif
{ "func_incompat", OPT_VALUE_error },
{ "func_linkage", OPT_VALUE_error },
{ "func_proto", OPT_VALUE_none },
#ifndef ERR_ALTERNATE
{ "func_ret_void", OPT_VALUE_error },
#else
{ "func_ret_void", OPT_VALUE_wall },
#endif
{ "func_token_undef", OPT_VALUE_wall },
{ "func_weak", OPT_VALUE_none },
{ "gen_ptr_char", OPT_VALUE_error },
{ "hash_ident", OPT_VALUE_error },
{ "include_full", OPT_VALUE_wall },
{ "include_verbose", OPT_VALUE_off },
#ifndef ERR_ALTERNATE
{ "infer_int", OPT_VALUE_new },
#else
{ "infer_int", OPT_VALUE_wall },
#endif
#ifndef ERR_ALTERNATE
{ "infer_int_cv", OPT_VALUE_new },
#else
{ "infer_int_cv", OPT_VALUE_wall },
#endif
{ "init_aggregate", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "init_dynamic", OPT_VALUE_none },
#else
{ "init_dynamic", OPT_VALUE_error },
#endif
#ifndef ERR_ALTERNATE
{ "init_struct", OPT_VALUE_none },
#else
{ "init_struct", OPT_VALUE_wall },
#endif
#ifndef ERR_ALTERNATE
{ "inline_internal", OPT_VALUE_off },
#else
{ "inline_internal", OPT_VALUE_on },
#endif
{ "int_operator", OPT_VALUE_wall },
{ "int_overflow", OPT_VALUE_wall },
{ "interf_incompat", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "iso_keyword", OPT_VALUE_wall },
#else
{ "iso_keyword", OPT_VALUE_error },
#endif
#ifndef ERR_ALTERNATE
{ "link_incompat", OPT_VALUE_error },
#else
{ "link_incompat", OPT_VALUE_wall },
#endif
{ "link_internal", OPT_VALUE_on },
#ifndef ERR_ALTERNATE
{ "link_resolve", OPT_VALUE_error },
#else
{ "link_resolve", OPT_VALUE_wall },
#endif
{ "lint_comment", OPT_VALUE_error },
{ "longlong", OPT_VALUE_error },
{ "macro_arg_dir", OPT_VALUE_wall },
{ "macro_nest", OPT_VALUE_error },
{ "macro_redef", OPT_VALUE_error },
{ "macro_weak", OPT_VALUE_error },
{ "member_incompat", OPT_VALUE_error },
{ "name_limit", OPT_VALUE_off },
{ "nest_comment", OPT_VALUE_wall },
{ "new_array", OPT_VALUE_on },
{ "overload_ambig", OPT_VALUE_error },
{ "overload_dep", OPT_VALUE_wall },
{ "overload_expl", OPT_VALUE_off },
{ "overload_res", OPT_VALUE_none },
{ "overload_strict", OPT_VALUE_on },
#ifndef ERR_ALTERNATE
{ "param_impl", OPT_VALUE_error },
#else
{ "param_impl", OPT_VALUE_wall },
#endif
{ "paren", OPT_VALUE_wall },
{ "ppdir_id", OPT_VALUE_error },
{ "ppdir_null", OPT_VALUE_none },
{ "ppdir_text", OPT_VALUE_error },
{ "ppdir_unknown", OPT_VALUE_error },
{ "ppdir_assert", OPT_VALUE_error },
{ "ppdir_assert_ignore", OPT_VALUE_off },
{ "ppdir_file", OPT_VALUE_error },
{ "ppdir_file_ignore", OPT_VALUE_off },
{ "ppdir_ident", OPT_VALUE_error },
{ "ppdir_ident_ignore", OPT_VALUE_off },
{ "ppdir_import", OPT_VALUE_error },
{ "ppdir_import_ignore", OPT_VALUE_off },
{ "ppdir_indent", OPT_VALUE_none },
{ "ppdir_indent_dir", OPT_VALUE_none },
{ "ppdir_unassert", OPT_VALUE_error },
{ "ppdir_unassert_ignore", OPT_VALUE_off },
{ "ppdir_warning", OPT_VALUE_error },
{ "ppdir_warning_ignore", OPT_VALUE_off },
{ "ppdir_weak", OPT_VALUE_error },
{ "ppdir_weak_ignore", OPT_VALUE_off },
{ "pragma_unknown", OPT_VALUE_wall },
{ "preproc_old", OPT_VALUE_off },
{ "printf_string", OPT_VALUE_warning },
#ifndef ERR_ALTERNATE
{ "proto_scope", OPT_VALUE_off },
#else
{ "proto_scope", OPT_VALUE_on },
#endif
{ "ptr_operator", OPT_VALUE_wall },
{ "ptr_void", OPT_VALUE_error },
{ "reached", OPT_VALUE_wall },
{ "semicolon_extra", OPT_VALUE_error },
{ "templ_export", OPT_VALUE_off },
{ "templ_undecl", OPT_VALUE_new },
{ "this_lvalue", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "throw_bad", OPT_VALUE_wall },
#else
{ "throw_bad", OPT_VALUE_none },
#endif
#ifndef ERR_ALTERNATE
{ "token_const", OPT_VALUE_error },
#else
{ "token_const", OPT_VALUE_wall },
#endif
{ "token_redef", OPT_VALUE_wall },
{ "token_undef", OPT_VALUE_error },
{ "trigraph", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "type_obj_incompl", OPT_VALUE_none },
#else
{ "type_obj_incompl", OPT_VALUE_error },
#endif
{ "type_qual_incompat", OPT_VALUE_error },
#ifndef ERR_ALTERNATE
{ "type_redef", OPT_VALUE_none },
#else
{ "type_redef", OPT_VALUE_error },
#endif
{ "type_tag_ignore", OPT_VALUE_error },
{ "unmatched", OPT_VALUE_error },
{ "variable", OPT_VALUE_wall },
#ifndef ERR_ALTERNATE
{ "weak", OPT_VALUE_off },
#else
{ "weak", OPT_VALUE_wall },
#endif
