#ifdef ___LINKER_INFO
; File: "multimethod.c", produced by Gambit-C v4.6.7
(
406007
" multimethod"
(" multimethod")
(
"arguments"
"boolean"
"char"
"complex"
"eof-object"
"integer"
"method"
"multimethod-exception"
"null"
"pair"
"rational"
"real"
"string"
"symbol"
"table"
"unknown"
"vector"
"void"
)
(
"weak-keys"
)
(
" multimethod"
"##type-2-multimethod-exception"
"multimethod#*-multi-*"
"multimethod#make-multimethod-exception"
"multimethod#multimethod-exception-arguments"
"multimethod#multimethod-exception-arguments-set!"
"multimethod#multimethod-exception-method"
"multimethod#multimethod-exception-method-set!"
"multimethod#type"
)
(
"multimethod#method-set!"
"multimethod#multi"
"multimethod#multimethod-exception?"
"multimethod#types"
)
(
"##direct-structure-ref"
"##direct-structure-set!"
"##integer?"
"##make-uninterned-symbol"
"##rational?"
"##real?"
"##structure"
"##structure-type"
"##structure?"
"##type-type"
"apply"
"boolean?"
"char?"
"complex?"
"eof-object?"
"eq?"
"integer?"
"make-table"
"map"
"not"
"null?"
"pair?"
"raise"
"rational?"
"real?"
"string?"
"symbol?"
"table-ref"
"table-set!"
"table?"
"vector?"
)
 #f
)
#else
#define ___VERSION 406007
#define ___MODULE_NAME " multimethod"
#define ___LINKER_ID ____20_multimethod
#define ___MH_PROC ___H__20_multimethod
#define ___SCRIPT_LINE 0
#define ___SYMCOUNT 18
#define ___KEYCOUNT 1
#define ___GLOCOUNT 44
#define ___SUPCOUNT 13
#define ___SUBCOUNT 2
#define ___LBLCOUNT 101
#include "gambit.h"

___NEED_SYM(___S_arguments)
___NEED_SYM(___S_boolean)
___NEED_SYM(___S_char)
___NEED_SYM(___S_complex)
___NEED_SYM(___S_eof_2d_object)
___NEED_SYM(___S_integer)
___NEED_SYM(___S_method)
___NEED_SYM(___S_multimethod_2d_exception)
___NEED_SYM(___S_null)
___NEED_SYM(___S_pair)
___NEED_SYM(___S_rational)
___NEED_SYM(___S_real)
___NEED_SYM(___S_string)
___NEED_SYM(___S_symbol)
___NEED_SYM(___S_table)
___NEED_SYM(___S_unknown)
___NEED_SYM(___S_vector)
___NEED_SYM(___S_void)

___NEED_KEY(___K_weak_2d_keys)

___NEED_GLO(___G__20_multimethod)
___NEED_GLO(___G__23__23_direct_2d_structure_2d_ref)
___NEED_GLO(___G__23__23_direct_2d_structure_2d_set_21_)
___NEED_GLO(___G__23__23_integer_3f_)
___NEED_GLO(___G__23__23_make_2d_uninterned_2d_symbol)
___NEED_GLO(___G__23__23_rational_3f_)
___NEED_GLO(___G__23__23_real_3f_)
___NEED_GLO(___G__23__23_structure)
___NEED_GLO(___G__23__23_structure_2d_type)
___NEED_GLO(___G__23__23_structure_3f_)
___NEED_GLO(___G__23__23_type_2d_2_2d_multimethod_2d_exception)
___NEED_GLO(___G__23__23_type_2d_type)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_boolean_3f_)
___NEED_GLO(___G_char_3f_)
___NEED_GLO(___G_complex_3f_)
___NEED_GLO(___G_eof_2d_object_3f_)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_integer_3f_)
___NEED_GLO(___G_make_2d_table)
___NEED_GLO(___G_map)
___NEED_GLO(___G_multimethod_23__2a__2d_multi_2d__2a_)
___NEED_GLO(___G_multimethod_23_make_2d_multimethod_2d_exception)
___NEED_GLO(___G_multimethod_23_method_2d_set_21_)
___NEED_GLO(___G_multimethod_23_multi)
___NEED_GLO(___G_multimethod_23_multimethod_2d_exception_2d_arguments)
___NEED_GLO(___G_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
___NEED_GLO(___G_multimethod_23_multimethod_2d_exception_2d_method)
___NEED_GLO(___G_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
___NEED_GLO(___G_multimethod_23_multimethod_2d_exception_3f_)
___NEED_GLO(___G_multimethod_23_type)
___NEED_GLO(___G_multimethod_23_types)
___NEED_GLO(___G_not)
___NEED_GLO(___G_null_3f_)
___NEED_GLO(___G_pair_3f_)
___NEED_GLO(___G_raise)
___NEED_GLO(___G_rational_3f_)
___NEED_GLO(___G_real_3f_)
___NEED_GLO(___G_string_3f_)
___NEED_GLO(___G_symbol_3f_)
___NEED_GLO(___G_table_2d_ref)
___NEED_GLO(___G_table_2d_set_21_)
___NEED_GLO(___G_table_3f_)
___NEED_GLO(___G_vector_3f_)

___BEGIN_SYM1
___DEF_SYM1(0,___S_arguments,"arguments")
___DEF_SYM1(1,___S_boolean,"boolean")
___DEF_SYM1(2,___S_char,"char")
___DEF_SYM1(3,___S_complex,"complex")
___DEF_SYM1(4,___S_eof_2d_object,"eof-object")
___DEF_SYM1(5,___S_integer,"integer")
___DEF_SYM1(6,___S_method,"method")
___DEF_SYM1(7,___S_multimethod_2d_exception,"multimethod-exception")
___DEF_SYM1(8,___S_null,"null")
___DEF_SYM1(9,___S_pair,"pair")
___DEF_SYM1(10,___S_rational,"rational")
___DEF_SYM1(11,___S_real,"real")
___DEF_SYM1(12,___S_string,"string")
___DEF_SYM1(13,___S_symbol,"symbol")
___DEF_SYM1(14,___S_table,"table")
___DEF_SYM1(15,___S_unknown,"unknown")
___DEF_SYM1(16,___S_vector,"vector")
___DEF_SYM1(17,___S_void,"void")
___END_SYM1

#define ___SYM_arguments ___SYM(0,___S_arguments)
#define ___SYM_boolean ___SYM(1,___S_boolean)
#define ___SYM_char ___SYM(2,___S_char)
#define ___SYM_complex ___SYM(3,___S_complex)
#define ___SYM_eof_2d_object ___SYM(4,___S_eof_2d_object)
#define ___SYM_integer ___SYM(5,___S_integer)
#define ___SYM_method ___SYM(6,___S_method)
#define ___SYM_multimethod_2d_exception ___SYM(7,___S_multimethod_2d_exception)
#define ___SYM_null ___SYM(8,___S_null)
#define ___SYM_pair ___SYM(9,___S_pair)
#define ___SYM_rational ___SYM(10,___S_rational)
#define ___SYM_real ___SYM(11,___S_real)
#define ___SYM_string ___SYM(12,___S_string)
#define ___SYM_symbol ___SYM(13,___S_symbol)
#define ___SYM_table ___SYM(14,___S_table)
#define ___SYM_unknown ___SYM(15,___S_unknown)
#define ___SYM_vector ___SYM(16,___S_vector)
#define ___SYM_void ___SYM(17,___S_void)

___BEGIN_KEY1
___DEF_KEY1(0,___K_weak_2d_keys,"weak-keys")
___END_KEY1

#define ___KEY_weak_2d_keys ___KEY(0,___K_weak_2d_keys)

___BEGIN_GLO
___DEF_GLO(0," multimethod")
___DEF_GLO(1,"##type-2-multimethod-exception")
___DEF_GLO(2,"multimethod#*-multi-*")
___DEF_GLO(3,"multimethod#make-multimethod-exception")

___DEF_GLO(4,"multimethod#method-set!")
___DEF_GLO(5,"multimethod#multi")
___DEF_GLO(6,"multimethod#multimethod-exception-arguments")

___DEF_GLO(7,"multimethod#multimethod-exception-arguments-set!")

___DEF_GLO(8,"multimethod#multimethod-exception-method")

___DEF_GLO(9,"multimethod#multimethod-exception-method-set!")

___DEF_GLO(10,"multimethod#multimethod-exception?")

___DEF_GLO(11,"multimethod#type")
___DEF_GLO(12,"multimethod#types")
___DEF_GLO(13,"##direct-structure-ref")
___DEF_GLO(14,"##direct-structure-set!")
___DEF_GLO(15,"##integer?")
___DEF_GLO(16,"##make-uninterned-symbol")
___DEF_GLO(17,"##rational?")
___DEF_GLO(18,"##real?")
___DEF_GLO(19,"##structure")
___DEF_GLO(20,"##structure-type")
___DEF_GLO(21,"##structure?")
___DEF_GLO(22,"##type-type")
___DEF_GLO(23,"apply")
___DEF_GLO(24,"boolean?")
___DEF_GLO(25,"char?")
___DEF_GLO(26,"complex?")
___DEF_GLO(27,"eof-object?")
___DEF_GLO(28,"eq?")
___DEF_GLO(29,"integer?")
___DEF_GLO(30,"make-table")
___DEF_GLO(31,"map")
___DEF_GLO(32,"not")
___DEF_GLO(33,"null?")
___DEF_GLO(34,"pair?")
___DEF_GLO(35,"raise")
___DEF_GLO(36,"rational?")
___DEF_GLO(37,"real?")
___DEF_GLO(38,"string?")
___DEF_GLO(39,"symbol?")
___DEF_GLO(40,"table-ref")
___DEF_GLO(41,"table-set!")
___DEF_GLO(42,"table?")
___DEF_GLO(43,"vector?")
___END_GLO

#define ___GLO__20_multimethod ___GLO(0,___G__20_multimethod)
#define ___PRM__20_multimethod ___PRM(0,___G__20_multimethod)
#define ___GLO__23__23_type_2d_2_2d_multimethod_2d_exception ___GLO(1,___G__23__23_type_2d_2_2d_multimethod_2d_exception)
#define ___PRM__23__23_type_2d_2_2d_multimethod_2d_exception ___PRM(1,___G__23__23_type_2d_2_2d_multimethod_2d_exception)
#define ___GLO_multimethod_23__2a__2d_multi_2d__2a_ ___GLO(2,___G_multimethod_23__2a__2d_multi_2d__2a_)
#define ___PRM_multimethod_23__2a__2d_multi_2d__2a_ ___PRM(2,___G_multimethod_23__2a__2d_multi_2d__2a_)
#define ___GLO_multimethod_23_make_2d_multimethod_2d_exception ___GLO(3,___G_multimethod_23_make_2d_multimethod_2d_exception)
#define ___PRM_multimethod_23_make_2d_multimethod_2d_exception ___PRM(3,___G_multimethod_23_make_2d_multimethod_2d_exception)
#define ___GLO_multimethod_23_method_2d_set_21_ ___GLO(4,___G_multimethod_23_method_2d_set_21_)
#define ___PRM_multimethod_23_method_2d_set_21_ ___PRM(4,___G_multimethod_23_method_2d_set_21_)
#define ___GLO_multimethod_23_multi ___GLO(5,___G_multimethod_23_multi)
#define ___PRM_multimethod_23_multi ___PRM(5,___G_multimethod_23_multi)
#define ___GLO_multimethod_23_multimethod_2d_exception_2d_arguments ___GLO(6,___G_multimethod_23_multimethod_2d_exception_2d_arguments)
#define ___PRM_multimethod_23_multimethod_2d_exception_2d_arguments ___PRM(6,___G_multimethod_23_multimethod_2d_exception_2d_arguments)
#define ___GLO_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_ ___GLO(7,___G_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
#define ___PRM_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_ ___PRM(7,___G_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
#define ___GLO_multimethod_23_multimethod_2d_exception_2d_method ___GLO(8,___G_multimethod_23_multimethod_2d_exception_2d_method)
#define ___PRM_multimethod_23_multimethod_2d_exception_2d_method ___PRM(8,___G_multimethod_23_multimethod_2d_exception_2d_method)
#define ___GLO_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_ ___GLO(9,___G_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
#define ___PRM_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_ ___PRM(9,___G_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
#define ___GLO_multimethod_23_multimethod_2d_exception_3f_ ___GLO(10,___G_multimethod_23_multimethod_2d_exception_3f_)
#define ___PRM_multimethod_23_multimethod_2d_exception_3f_ ___PRM(10,___G_multimethod_23_multimethod_2d_exception_3f_)
#define ___GLO_multimethod_23_type ___GLO(11,___G_multimethod_23_type)
#define ___PRM_multimethod_23_type ___PRM(11,___G_multimethod_23_type)
#define ___GLO_multimethod_23_types ___GLO(12,___G_multimethod_23_types)
#define ___PRM_multimethod_23_types ___PRM(12,___G_multimethod_23_types)
#define ___GLO__23__23_direct_2d_structure_2d_ref ___GLO(13,___G__23__23_direct_2d_structure_2d_ref)
#define ___PRM__23__23_direct_2d_structure_2d_ref ___PRM(13,___G__23__23_direct_2d_structure_2d_ref)
#define ___GLO__23__23_direct_2d_structure_2d_set_21_ ___GLO(14,___G__23__23_direct_2d_structure_2d_set_21_)
#define ___PRM__23__23_direct_2d_structure_2d_set_21_ ___PRM(14,___G__23__23_direct_2d_structure_2d_set_21_)
#define ___GLO__23__23_integer_3f_ ___GLO(15,___G__23__23_integer_3f_)
#define ___PRM__23__23_integer_3f_ ___PRM(15,___G__23__23_integer_3f_)
#define ___GLO__23__23_make_2d_uninterned_2d_symbol ___GLO(16,___G__23__23_make_2d_uninterned_2d_symbol)
#define ___PRM__23__23_make_2d_uninterned_2d_symbol ___PRM(16,___G__23__23_make_2d_uninterned_2d_symbol)
#define ___GLO__23__23_rational_3f_ ___GLO(17,___G__23__23_rational_3f_)
#define ___PRM__23__23_rational_3f_ ___PRM(17,___G__23__23_rational_3f_)
#define ___GLO__23__23_real_3f_ ___GLO(18,___G__23__23_real_3f_)
#define ___PRM__23__23_real_3f_ ___PRM(18,___G__23__23_real_3f_)
#define ___GLO__23__23_structure ___GLO(19,___G__23__23_structure)
#define ___PRM__23__23_structure ___PRM(19,___G__23__23_structure)
#define ___GLO__23__23_structure_2d_type ___GLO(20,___G__23__23_structure_2d_type)
#define ___PRM__23__23_structure_2d_type ___PRM(20,___G__23__23_structure_2d_type)
#define ___GLO__23__23_structure_3f_ ___GLO(21,___G__23__23_structure_3f_)
#define ___PRM__23__23_structure_3f_ ___PRM(21,___G__23__23_structure_3f_)
#define ___GLO__23__23_type_2d_type ___GLO(22,___G__23__23_type_2d_type)
#define ___PRM__23__23_type_2d_type ___PRM(22,___G__23__23_type_2d_type)
#define ___GLO_apply ___GLO(23,___G_apply)
#define ___PRM_apply ___PRM(23,___G_apply)
#define ___GLO_boolean_3f_ ___GLO(24,___G_boolean_3f_)
#define ___PRM_boolean_3f_ ___PRM(24,___G_boolean_3f_)
#define ___GLO_char_3f_ ___GLO(25,___G_char_3f_)
#define ___PRM_char_3f_ ___PRM(25,___G_char_3f_)
#define ___GLO_complex_3f_ ___GLO(26,___G_complex_3f_)
#define ___PRM_complex_3f_ ___PRM(26,___G_complex_3f_)
#define ___GLO_eof_2d_object_3f_ ___GLO(27,___G_eof_2d_object_3f_)
#define ___PRM_eof_2d_object_3f_ ___PRM(27,___G_eof_2d_object_3f_)
#define ___GLO_eq_3f_ ___GLO(28,___G_eq_3f_)
#define ___PRM_eq_3f_ ___PRM(28,___G_eq_3f_)
#define ___GLO_integer_3f_ ___GLO(29,___G_integer_3f_)
#define ___PRM_integer_3f_ ___PRM(29,___G_integer_3f_)
#define ___GLO_make_2d_table ___GLO(30,___G_make_2d_table)
#define ___PRM_make_2d_table ___PRM(30,___G_make_2d_table)
#define ___GLO_map ___GLO(31,___G_map)
#define ___PRM_map ___PRM(31,___G_map)
#define ___GLO_not ___GLO(32,___G_not)
#define ___PRM_not ___PRM(32,___G_not)
#define ___GLO_null_3f_ ___GLO(33,___G_null_3f_)
#define ___PRM_null_3f_ ___PRM(33,___G_null_3f_)
#define ___GLO_pair_3f_ ___GLO(34,___G_pair_3f_)
#define ___PRM_pair_3f_ ___PRM(34,___G_pair_3f_)
#define ___GLO_raise ___GLO(35,___G_raise)
#define ___PRM_raise ___PRM(35,___G_raise)
#define ___GLO_rational_3f_ ___GLO(36,___G_rational_3f_)
#define ___PRM_rational_3f_ ___PRM(36,___G_rational_3f_)
#define ___GLO_real_3f_ ___GLO(37,___G_real_3f_)
#define ___PRM_real_3f_ ___PRM(37,___G_real_3f_)
#define ___GLO_string_3f_ ___GLO(38,___G_string_3f_)
#define ___PRM_string_3f_ ___PRM(38,___G_string_3f_)
#define ___GLO_symbol_3f_ ___GLO(39,___G_symbol_3f_)
#define ___PRM_symbol_3f_ ___PRM(39,___G_symbol_3f_)
#define ___GLO_table_2d_ref ___GLO(40,___G_table_2d_ref)
#define ___PRM_table_2d_ref ___PRM(40,___G_table_2d_ref)
#define ___GLO_table_2d_set_21_ ___GLO(41,___G_table_2d_set_21_)
#define ___PRM_table_2d_set_21_ ___PRM(41,___G_table_2d_set_21_)
#define ___GLO_table_3f_ ___GLO(42,___G_table_3f_)
#define ___PRM_table_3f_ ___PRM(42,___G_table_3f_)
#define ___GLO_vector_3f_ ___GLO(43,___G_vector_3f_)
#define ___PRM_vector_3f_ ___PRM(43,___G_vector_3f_)

___DEF_SUB_STR(___X0,30)
               ___STR8(35,35,116,121,112,101,45,50)
               ___STR8(45,109,117,108,116,105,109,101)
               ___STR8(116,104,111,100,45,101,120,99)
               ___STR6(101,112,116,105,111,110)
___DEF_SUB_VEC(___X1,6)
               ___VEC1(___REF_SYM(6,___S_method))
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_SYM(0,___S_arguments))
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_FAL)
               ___VEC0

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1)
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_multimethod)
___DEF_M_HLBL(___L1__20_multimethod)
___DEF_M_HLBL(___L2__20_multimethod)
___DEF_M_HLBL(___L3__20_multimethod)
___DEF_M_HLBL(___L4__20_multimethod)
___DEF_M_HLBL(___L5__20_multimethod)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_method_2d_set_21_)
___DEF_M_HLBL(___L1_multimethod_23_method_2d_set_21_)
___DEF_M_HLBL(___L2_multimethod_23_method_2d_set_21_)
___DEF_M_HLBL(___L3_multimethod_23_method_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_make_2d_multimethod_2d_exception)
___DEF_M_HLBL(___L1_multimethod_23_make_2d_multimethod_2d_exception)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_multimethod_2d_exception_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_method)
___DEF_M_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_method)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
___DEF_M_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_arguments)
___DEF_M_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_arguments)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
___DEF_M_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_multi)
___DEF_M_HLBL(___L1_multimethod_23_multi)
___DEF_M_HLBL(___L2_multimethod_23_multi)
___DEF_M_HLBL(___L3_multimethod_23_multi)
___DEF_M_HLBL(___L4_multimethod_23_multi)
___DEF_M_HLBL(___L5_multimethod_23_multi)
___DEF_M_HLBL(___L6_multimethod_23_multi)
___DEF_M_HLBL(___L7_multimethod_23_multi)
___DEF_M_HLBL(___L8_multimethod_23_multi)
___DEF_M_HLBL(___L9_multimethod_23_multi)
___DEF_M_HLBL(___L10_multimethod_23_multi)
___DEF_M_HLBL(___L11_multimethod_23_multi)
___DEF_M_HLBL(___L12_multimethod_23_multi)
___DEF_M_HLBL(___L13_multimethod_23_multi)
___DEF_M_HLBL(___L14_multimethod_23_multi)
___DEF_M_HLBL(___L15_multimethod_23_multi)
___DEF_M_HLBL(___L16_multimethod_23_multi)
___DEF_M_HLBL(___L17_multimethod_23_multi)
___DEF_M_HLBL(___L18_multimethod_23_multi)
___DEF_M_HLBL(___L19_multimethod_23_multi)
___DEF_M_HLBL(___L20_multimethod_23_multi)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_type)
___DEF_M_HLBL(___L1_multimethod_23_type)
___DEF_M_HLBL(___L2_multimethod_23_type)
___DEF_M_HLBL(___L3_multimethod_23_type)
___DEF_M_HLBL(___L4_multimethod_23_type)
___DEF_M_HLBL(___L5_multimethod_23_type)
___DEF_M_HLBL(___L6_multimethod_23_type)
___DEF_M_HLBL(___L7_multimethod_23_type)
___DEF_M_HLBL(___L8_multimethod_23_type)
___DEF_M_HLBL(___L9_multimethod_23_type)
___DEF_M_HLBL(___L10_multimethod_23_type)
___DEF_M_HLBL(___L11_multimethod_23_type)
___DEF_M_HLBL(___L12_multimethod_23_type)
___DEF_M_HLBL(___L13_multimethod_23_type)
___DEF_M_HLBL(___L14_multimethod_23_type)
___DEF_M_HLBL(___L15_multimethod_23_type)
___DEF_M_HLBL(___L16_multimethod_23_type)
___DEF_M_HLBL(___L17_multimethod_23_type)
___DEF_M_HLBL(___L18_multimethod_23_type)
___DEF_M_HLBL(___L19_multimethod_23_type)
___DEF_M_HLBL(___L20_multimethod_23_type)
___DEF_M_HLBL(___L21_multimethod_23_type)
___DEF_M_HLBL(___L22_multimethod_23_type)
___DEF_M_HLBL(___L23_multimethod_23_type)
___DEF_M_HLBL(___L24_multimethod_23_type)
___DEF_M_HLBL(___L25_multimethod_23_type)
___DEF_M_HLBL(___L26_multimethod_23_type)
___DEF_M_HLBL(___L27_multimethod_23_type)
___DEF_M_HLBL(___L28_multimethod_23_type)
___DEF_M_HLBL(___L29_multimethod_23_type)
___DEF_M_HLBL(___L30_multimethod_23_type)
___DEF_M_HLBL(___L31_multimethod_23_type)
___DEF_M_HLBL(___L32_multimethod_23_type)
___DEF_M_HLBL(___L33_multimethod_23_type)
___DEF_M_HLBL(___L34_multimethod_23_type)
___DEF_M_HLBL(___L35_multimethod_23_type)
___DEF_M_HLBL(___L36_multimethod_23_type)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_multimethod_23_types)
___DEF_M_HLBL(___L1_multimethod_23_types)
___DEF_M_HLBL(___L2_multimethod_23_types)
___DEF_M_HLBL(___L3_multimethod_23_types)
___DEF_M_HLBL(___L4_multimethod_23_types)
___DEF_M_HLBL(___L5_multimethod_23_types)
___DEF_M_HLBL(___L6_multimethod_23_types)
___DEF_M_HLBL(___L7_multimethod_23_types)
___DEF_M_HLBL(___L8_multimethod_23_types)
___DEF_M_HLBL(___L9_multimethod_23_types)
___DEF_M_HLBL(___L10_multimethod_23_types)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_multimethod
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_multimethod)
___DEF_P_HLBL(___L1__20_multimethod)
___DEF_P_HLBL(___L2__20_multimethod)
___DEF_P_HLBL(___L3__20_multimethod)
___DEF_P_HLBL(___L4__20_multimethod)
___DEF_P_HLBL(___L5__20_multimethod)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_multimethod)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_multimethod)
   ___SET_STK(1,___R0)
   ___SET_R2(___TRU)
   ___SET_R1(___KEY_weak_2d_keys)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_multimethod)
   ___JUMPGLOSAFE(___SET_NARGS(2),30,___G_make_2d_table)
___DEF_SLBL(2,___L2__20_multimethod)
   ___SET_GLO(2,___G_multimethod_23__2a__2d_multi_2d__2a_,___R1)
   ___SET_GLO(4,___G_multimethod_23_method_2d_set_21_,___PRC(8))
   ___SET_STK(1,___GLO__23__23_type_2d_type)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(3))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),16,___G__23__23_make_2d_uninterned_2d_symbol)
___DEF_SLBL(3,___L3__20_multimethod)
   ___SET_STK(-2,___R1)
   ___SET_STK(-1,___SYM_multimethod_2d_exception)
   ___SET_R3(___SUB(1))
   ___SET_R2(___FAL)
   ___SET_R1(___FIX(8L))
   ___SET_R0(___LBL(4))
   ___ADJFP(-1)
   ___JUMPPRM(___SET_NARGS(6),___PRM__23__23_structure)
___DEF_SLBL(4,___L4__20_multimethod)
   ___SET_GLO(1,___G__23__23_type_2d_2_2d_multimethod_2d_exception,___R1)
   ___SET_GLO(3,___G_multimethod_23_make_2d_multimethod_2d_exception,___PRC(13))
   ___SET_GLO(10,___G_multimethod_23_multimethod_2d_exception_3f_,___PRC(16))
   ___SET_GLO(8,___G_multimethod_23_multimethod_2d_exception_2d_method,___PRC(18))
   ___SET_GLO(9,___G_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_,___PRC(21))
   ___SET_GLO(6,___G_multimethod_23_multimethod_2d_exception_2d_arguments,___PRC(24))
   ___SET_GLO(7,___G_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_,___PRC(27))
   ___SET_GLO(5,___G_multimethod_23_multi,___PRC(30))
   ___SET_GLO(11,___G_multimethod_23_type,___PRC(52))
   ___SET_GLO(12,___G_multimethod_23_types,___PRC(90))
   ___SET_R1(___VOID)
   ___POLL(5)
___DEF_SLBL(5,___L5__20_multimethod)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_method_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 8
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_method_2d_set_21_)
___DEF_P_HLBL(___L1_multimethod_23_method_2d_set_21_)
___DEF_P_HLBL(___L2_multimethod_23_method_2d_set_21_)
___DEF_P_HLBL(___L3_multimethod_23_method_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_method_2d_set_21_)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_multimethod_23_method_2d_set_21_)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_R2(___R1)
   ___SET_R1(___GLO_multimethod_23__2a__2d_multi_2d__2a_)
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_method_2d_set_21_)
   ___JUMPGLOSAFE(___SET_NARGS(2),40,___G_table_2d_ref)
___DEF_SLBL(2,___L2_multimethod_23_method_2d_set_21_)
   ___SET_R2(___STK(-5))
   ___SET_STK(-5,___R1)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(3)
___DEF_SLBL(3,___L3_multimethod_23_method_2d_set_21_)
   ___ADJFP(-8)
   ___JUMPGENSAFE(___SET_NARGS(2),___STK(3))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_make_2d_multimethod_2d_exception
#undef ___PH_LBL0
#define ___PH_LBL0 13
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_make_2d_multimethod_2d_exception)
___DEF_P_HLBL(___L1_multimethod_23_make_2d_multimethod_2d_exception)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_make_2d_multimethod_2d_exception)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_multimethod_23_make_2d_multimethod_2d_exception)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___GLO__23__23_type_2d_2_2d_multimethod_2d_exception)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_make_2d_multimethod_2d_exception)
   ___JUMPPRM(___SET_NARGS(3),___PRM__23__23_structure)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_multimethod_2d_exception_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 16
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_multimethod_2d_exception_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_multimethod_2d_exception_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_multimethod_23_multimethod_2d_exception_3f_)
   ___SET_R2(___TYPEID(___GLO__23__23_type_2d_2_2d_multimethod_2d_exception))
   ___SET_R1(___BOOLEAN(___STRUCTUREDIOP(___R1,___R2)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_multimethod_2d_exception_2d_method
#undef ___PH_LBL0
#define ___PH_LBL0 18
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_method)
___DEF_P_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_method)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_multimethod_2d_exception_2d_method)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_multimethod_23_multimethod_2d_exception_2d_method)
   ___SET_STK(1,___GLO__23__23_type_2d_2_2d_multimethod_2d_exception)
   ___SET_STK(2,___GLO_multimethod_23_multimethod_2d_exception_2d_method)
   ___SET_R2(___TYPEID(___STK(1)))
   ___ADJFP(2)
   ___IF(___STRUCTUREDIOP(___R1,___R2))
   ___GOTO(___L2_multimethod_23_multimethod_2d_exception_2d_method)
   ___END_IF
   ___SET_STK(1,___STK(-1))
   ___SET_STK(-1,___R1)
   ___SET_R3(___STK(0))
   ___SET_R2(___STK(1))
   ___SET_R1(___FIX(1L))
   ___ADJFP(1)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_multimethod_2d_exception_2d_method)
   ___ADJFP(-2)
   ___JUMPPRM(___SET_NARGS(4),___PRM__23__23_direct_2d_structure_2d_ref)
___DEF_GLBL(___L2_multimethod_23_multimethod_2d_exception_2d_method)
   ___SET_R1(___UNCHECKEDSTRUCTUREREF(___R1,___FIX(1L),___STK(-1),___STK(0)))
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 21
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
___DEF_P_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
   ___SET_STK(1,___GLO__23__23_type_2d_2_2d_multimethod_2d_exception)
   ___SET_STK(2,___GLO_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
   ___SET_R3(___TYPEID(___STK(1)))
   ___ADJFP(2)
   ___IF(___STRUCTUREDIOP(___R1,___R3))
   ___GOTO(___L2_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
   ___END_IF
   ___SET_STK(1,___STK(-1))
   ___SET_STK(-1,___R1)
   ___SET_STK(2,___STK(0))
   ___SET_STK(0,___R2)
   ___SET_R3(___STK(2))
   ___SET_R2(___STK(1))
   ___SET_R1(___FIX(1L))
   ___ADJFP(2)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
   ___ADJFP(-2)
   ___JUMPPRM(___SET_NARGS(5),___PRM__23__23_direct_2d_structure_2d_set_21_)
___DEF_GLBL(___L2_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_)
   ___UNCHECKEDSTRUCTURESET(___R1,___R2,___FIX(1L),___STK(-1),___STK(0))
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_multimethod_2d_exception_2d_arguments
#undef ___PH_LBL0
#define ___PH_LBL0 24
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_arguments)
___DEF_P_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_arguments)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_multimethod_2d_exception_2d_arguments)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_multimethod_23_multimethod_2d_exception_2d_arguments)
   ___SET_STK(1,___GLO__23__23_type_2d_2_2d_multimethod_2d_exception)
   ___SET_STK(2,___GLO_multimethod_23_multimethod_2d_exception_2d_arguments)
   ___SET_R2(___TYPEID(___STK(1)))
   ___ADJFP(2)
   ___IF(___STRUCTUREDIOP(___R1,___R2))
   ___GOTO(___L2_multimethod_23_multimethod_2d_exception_2d_arguments)
   ___END_IF
   ___SET_STK(1,___STK(-1))
   ___SET_STK(-1,___R1)
   ___SET_R3(___STK(0))
   ___SET_R2(___STK(1))
   ___SET_R1(___FIX(2L))
   ___ADJFP(1)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_multimethod_2d_exception_2d_arguments)
   ___ADJFP(-2)
   ___JUMPPRM(___SET_NARGS(4),___PRM__23__23_direct_2d_structure_2d_ref)
___DEF_GLBL(___L2_multimethod_23_multimethod_2d_exception_2d_arguments)
   ___SET_R1(___UNCHECKEDSTRUCTUREREF(___R1,___FIX(2L),___STK(-1),___STK(0)))
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 27
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
___DEF_P_HLBL(___L1_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
   ___SET_STK(1,___GLO__23__23_type_2d_2_2d_multimethod_2d_exception)
   ___SET_STK(2,___GLO_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
   ___SET_R3(___TYPEID(___STK(1)))
   ___ADJFP(2)
   ___IF(___STRUCTUREDIOP(___R1,___R3))
   ___GOTO(___L2_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
   ___END_IF
   ___SET_STK(1,___STK(-1))
   ___SET_STK(-1,___R1)
   ___SET_STK(2,___STK(0))
   ___SET_STK(0,___R2)
   ___SET_R3(___STK(2))
   ___SET_R2(___STK(1))
   ___SET_R1(___FIX(2L))
   ___ADJFP(2)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
   ___ADJFP(-2)
   ___JUMPPRM(___SET_NARGS(5),___PRM__23__23_direct_2d_structure_2d_set_21_)
___DEF_GLBL(___L2_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_)
   ___UNCHECKEDSTRUCTURESET(___R1,___R2,___FIX(2L),___STK(-1),___STK(0))
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_multi
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_multi)
___DEF_P_HLBL(___L1_multimethod_23_multi)
___DEF_P_HLBL(___L2_multimethod_23_multi)
___DEF_P_HLBL(___L3_multimethod_23_multi)
___DEF_P_HLBL(___L4_multimethod_23_multi)
___DEF_P_HLBL(___L5_multimethod_23_multi)
___DEF_P_HLBL(___L6_multimethod_23_multi)
___DEF_P_HLBL(___L7_multimethod_23_multi)
___DEF_P_HLBL(___L8_multimethod_23_multi)
___DEF_P_HLBL(___L9_multimethod_23_multi)
___DEF_P_HLBL(___L10_multimethod_23_multi)
___DEF_P_HLBL(___L11_multimethod_23_multi)
___DEF_P_HLBL(___L12_multimethod_23_multi)
___DEF_P_HLBL(___L13_multimethod_23_multi)
___DEF_P_HLBL(___L14_multimethod_23_multi)
___DEF_P_HLBL(___L15_multimethod_23_multi)
___DEF_P_HLBL(___L16_multimethod_23_multi)
___DEF_P_HLBL(___L17_multimethod_23_multi)
___DEF_P_HLBL(___L18_multimethod_23_multi)
___DEF_P_HLBL(___L19_multimethod_23_multi)
___DEF_P_HLBL(___L20_multimethod_23_multi)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_multi)
   ___IF_NARGS_EQ(1,___SET_R2(___FAL))
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,1,1,0)
___DEF_GLBL(___L_multimethod_23_multi)
   ___SET_R2(___BOX(___R2))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(3))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_multimethod_23_multi)
   ___POLL(2)
___DEF_SLBL(2,___L2_multimethod_23_multi)
   ___JUMPGLOSAFE(___SET_NARGS(0),30,___G_make_2d_table)
___DEF_SLBL(3,___L3_multimethod_23_multi)
   ___SET_STK(-4,___ALLOC_CLO(3))
   ___BEGIN_SETUP_CLO(3,___STK(-4),16)
   ___ADD_CLO_ELEM(0,___STK(-5))
   ___ADD_CLO_ELEM(1,___STK(-6))
   ___ADD_CLO_ELEM(2,___R1)
   ___END_SETUP_CLO(3)
   ___SET_R2(___UNBOX(___STK(-5)))
   ___ADJFP(-4)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_multimethod_23_multi)
   ___IF(___NOT(___EQP(___GLO_not,___PRM_not)))
   ___GOTO(___L24_multimethod_23_multi)
   ___END_IF
   ___IF(___FALSEP(___R2))
   ___GOTO(___L21_multimethod_23_multi)
   ___END_IF
   ___GOTO(___L22_multimethod_23_multi)
___DEF_SLBL(5,___L5_multimethod_23_multi)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L23_multimethod_23_multi)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___ADJFP(-4)
___DEF_GLBL(___L21_multimethod_23_multi)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),12)
   ___ADD_CLO_ELEM(0,___STK(0))
   ___END_SETUP_CLO(1)
   ___SETBOX(___STK(-1),___STK(1))
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_multimethod_23_multi)
___DEF_GLBL(___L22_multimethod_23_multi)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),10)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R3(___STK(1))
   ___SET_R2(___STK(0))
   ___SET_R1(___GLO_multimethod_23__2a__2d_multi_2d__2a_)
   ___SET_R0(___LBL(8))
   ___ADJFP(4)
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_multimethod_23_multi)
   ___JUMPGLOSAFE(___SET_NARGS(3),41,___G_table_2d_set_21_)
___DEF_SLBL(8,___L8_multimethod_23_multi)
   ___SET_R1(___STK(-4))
   ___POLL(9)
___DEF_SLBL(9,___L9_multimethod_23_multi)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(10,___L10_multimethod_23_multi)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(10,2,0,0)
   ___SET_R3(___R2)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(11)
___DEF_SLBL(11,___L11_multimethod_23_multi)
   ___JUMPGLOSAFE(___SET_NARGS(3),41,___G_table_2d_set_21_)
___DEF_SLBL(12,___L12_multimethod_23_multi)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(12,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R0(___LBL(14))
   ___ADJFP(4)
   ___POLL(13)
___DEF_SLBL(13,___L13_multimethod_23_multi)
   ___JUMPGLOSAFE(___SET_NARGS(2),3,___G_multimethod_23_make_2d_multimethod_2d_exception)
___DEF_SLBL(14,___L14_multimethod_23_multi)
   ___SET_R0(___STK(-3))
   ___POLL(15)
___DEF_SLBL(15,___L15_multimethod_23_multi)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),35,___G_raise)
___DEF_GLBL(___L23_multimethod_23_multi)
   ___SET_R1(___STK(-6))
   ___ADJFP(-4)
   ___GOTO(___L22_multimethod_23_multi)
___DEF_GLBL(___L24_multimethod_23_multi)
   ___SET_STK(-2,___R1)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_not)
___DEF_SLBL(16,___L16_multimethod_23_multi)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(16,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R2(___R1)
   ___SET_R1(___CLO(___R4,2))
   ___SET_R0(___LBL(18))
   ___ADJFP(8)
   ___POLL(17)
___DEF_SLBL(17,___L17_multimethod_23_multi)
   ___JUMPGLOSAFE(___SET_NARGS(2),23,___G_apply)
___DEF_SLBL(18,___L18_multimethod_23_multi)
   ___SET_R2(___R1)
   ___SET_R0(___CLO(___STK(-5),1))
   ___SET_R3(___UNBOX(___R0))
   ___SET_R1(___CLO(___STK(-5),3))
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_table_2d_ref)
___DEF_SLBL(19,___L19_multimethod_23_multi)
   ___SET_R2(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(20)
___DEF_SLBL(20,___L20_multimethod_23_multi)
   ___ADJFP(-8)
   ___JUMPGLOSAFE(___SET_NARGS(2),23,___G_apply)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_type
#undef ___PH_LBL0
#define ___PH_LBL0 52
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_type)
___DEF_P_HLBL(___L1_multimethod_23_type)
___DEF_P_HLBL(___L2_multimethod_23_type)
___DEF_P_HLBL(___L3_multimethod_23_type)
___DEF_P_HLBL(___L4_multimethod_23_type)
___DEF_P_HLBL(___L5_multimethod_23_type)
___DEF_P_HLBL(___L6_multimethod_23_type)
___DEF_P_HLBL(___L7_multimethod_23_type)
___DEF_P_HLBL(___L8_multimethod_23_type)
___DEF_P_HLBL(___L9_multimethod_23_type)
___DEF_P_HLBL(___L10_multimethod_23_type)
___DEF_P_HLBL(___L11_multimethod_23_type)
___DEF_P_HLBL(___L12_multimethod_23_type)
___DEF_P_HLBL(___L13_multimethod_23_type)
___DEF_P_HLBL(___L14_multimethod_23_type)
___DEF_P_HLBL(___L15_multimethod_23_type)
___DEF_P_HLBL(___L16_multimethod_23_type)
___DEF_P_HLBL(___L17_multimethod_23_type)
___DEF_P_HLBL(___L18_multimethod_23_type)
___DEF_P_HLBL(___L19_multimethod_23_type)
___DEF_P_HLBL(___L20_multimethod_23_type)
___DEF_P_HLBL(___L21_multimethod_23_type)
___DEF_P_HLBL(___L22_multimethod_23_type)
___DEF_P_HLBL(___L23_multimethod_23_type)
___DEF_P_HLBL(___L24_multimethod_23_type)
___DEF_P_HLBL(___L25_multimethod_23_type)
___DEF_P_HLBL(___L26_multimethod_23_type)
___DEF_P_HLBL(___L27_multimethod_23_type)
___DEF_P_HLBL(___L28_multimethod_23_type)
___DEF_P_HLBL(___L29_multimethod_23_type)
___DEF_P_HLBL(___L30_multimethod_23_type)
___DEF_P_HLBL(___L31_multimethod_23_type)
___DEF_P_HLBL(___L32_multimethod_23_type)
___DEF_P_HLBL(___L33_multimethod_23_type)
___DEF_P_HLBL(___L34_multimethod_23_type)
___DEF_P_HLBL(___L35_multimethod_23_type)
___DEF_P_HLBL(___L36_multimethod_23_type)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_type)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO__23__23_structure_3f_,___PRM__23__23_structure_3f_)))
   ___GOTO(___L91_multimethod_23_type)
   ___END_IF
   ___IF(___NOT(___STRUCTUREP(___R1)))
   ___GOTO(___L39_multimethod_23_type)
   ___END_IF
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_type)
   ___GOTO(___L37_multimethod_23_type)
___DEF_SLBL(2,___L2_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L38_multimethod_23_type)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(3)
___DEF_SLBL(3,___L3_multimethod_23_type)
___DEF_GLBL(___L37_multimethod_23_type)
   ___JUMPGLOSAFE(___SET_NARGS(1),20,___G__23__23_structure_2d_type)
___DEF_GLBL(___L38_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___IF(___EQP(___GLO_pair_3f_,___PRM_pair_3f_))
   ___GOTO(___L40_multimethod_23_type)
   ___END_IF
   ___GOTO(___L90_multimethod_23_type)
___DEF_GLBL(___L39_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_pair_3f_,___PRM_pair_3f_)))
   ___GOTO(___L90_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L40_multimethod_23_type)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L43_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L41_multimethod_23_type)
   ___SET_R1(___SYM_pair)
   ___POLL(4)
___DEF_SLBL(4,___L4_multimethod_23_type)
___DEF_GLBL(___L42_multimethod_23_type)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L43_multimethod_23_type)
   ___IF(___EQP(___GLO_vector_3f_,___PRM_vector_3f_))
   ___GOTO(___L44_multimethod_23_type)
   ___END_IF
   ___GOTO(___L89_multimethod_23_type)
___DEF_SLBL(5,___L5_multimethod_23_type)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L88_multimethod_23_type)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___IF(___NOT(___EQP(___GLO_vector_3f_,___PRM_vector_3f_)))
   ___GOTO(___L89_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L44_multimethod_23_type)
   ___IF(___NOT(___VECTORP(___R1)))
   ___GOTO(___L46_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L45_multimethod_23_type)
   ___SET_R1(___SYM_vector)
   ___POLL(6)
___DEF_SLBL(6,___L6_multimethod_23_type)
   ___GOTO(___L42_multimethod_23_type)
___DEF_SLBL(7,___L7_multimethod_23_type)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L87_multimethod_23_type)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
___DEF_GLBL(___L46_multimethod_23_type)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(9))
   ___ADJFP(8)
   ___POLL(8)
___DEF_SLBL(8,___L8_multimethod_23_type)
   ___JUMPGLOSAFE(___SET_NARGS(1),42,___G_table_3f_)
___DEF_SLBL(9,___L9_multimethod_23_type)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L86_multimethod_23_type)
   ___END_IF
   ___IF(___NOT(___EQP(___GLO_symbol_3f_,___PRM_symbol_3f_)))
   ___GOTO(___L85_multimethod_23_type)
   ___END_IF
   ___IF(___SYMBOLP(___STK(-6)))
   ___GOTO(___L47_multimethod_23_type)
   ___END_IF
   ___GOTO(___L49_multimethod_23_type)
___DEF_SLBL(10,___L10_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L49_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L47_multimethod_23_type)
   ___SET_R1(___SYM_symbol)
   ___POLL(11)
___DEF_SLBL(11,___L11_multimethod_23_type)
___DEF_GLBL(___L48_multimethod_23_type)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L49_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_string_3f_,___PRM_string_3f_)))
   ___GOTO(___L84_multimethod_23_type)
   ___END_IF
   ___IF(___STRINGP(___STK(-6)))
   ___GOTO(___L50_multimethod_23_type)
   ___END_IF
   ___GOTO(___L51_multimethod_23_type)
___DEF_SLBL(12,___L12_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L51_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L50_multimethod_23_type)
   ___SET_R1(___SYM_string)
   ___POLL(13)
___DEF_SLBL(13,___L13_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L51_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_char_3f_,___PRM_char_3f_)))
   ___GOTO(___L83_multimethod_23_type)
   ___END_IF
   ___IF(___CHARP(___STK(-6)))
   ___GOTO(___L52_multimethod_23_type)
   ___END_IF
   ___GOTO(___L53_multimethod_23_type)
___DEF_SLBL(14,___L14_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L53_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L52_multimethod_23_type)
   ___SET_R1(___SYM_char)
   ___POLL(15)
___DEF_SLBL(15,___L15_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L53_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_integer_3f_,___PRM_integer_3f_)))
   ___GOTO(___L82_multimethod_23_type)
   ___END_IF
   ___IF(___FIXNUMP(___STK(-6)))
   ___GOTO(___L54_multimethod_23_type)
   ___END_IF
   ___GOTO(___L81_multimethod_23_type)
___DEF_SLBL(16,___L16_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L55_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L54_multimethod_23_type)
   ___SET_R1(___SYM_integer)
   ___POLL(17)
___DEF_SLBL(17,___L17_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L55_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_rational_3f_,___PRM_rational_3f_)))
   ___GOTO(___L80_multimethod_23_type)
   ___END_IF
   ___IF(___FIXNUMP(___STK(-6)))
   ___GOTO(___L56_multimethod_23_type)
   ___END_IF
   ___IF(___NOT(___FLONUMP(___STK(-6))))
   ___GOTO(___L57_multimethod_23_type)
   ___END_IF
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-6)))
   ___IF(___NOT(___F64FINITEP(___F64V1)))
   ___GOTO(___L58_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L56_multimethod_23_type)
   ___SET_R1(___SYM_rational)
   ___POLL(18)
___DEF_SLBL(18,___L18_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L57_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(19))
   ___JUMPPRM(___SET_NARGS(1),___PRM__23__23_rational_3f_)
___DEF_SLBL(19,___L19_multimethod_23_type)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L56_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L58_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_real_3f_,___PRM_real_3f_)))
   ___GOTO(___L79_multimethod_23_type)
   ___END_IF
   ___IF(___FIXNUMP(___STK(-6)))
   ___GOTO(___L59_multimethod_23_type)
   ___END_IF
   ___GOTO(___L78_multimethod_23_type)
___DEF_SLBL(20,___L20_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L60_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L59_multimethod_23_type)
   ___SET_R1(___SYM_real)
   ___POLL(21)
___DEF_SLBL(21,___L21_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L60_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_complex_3f_,___PRM_complex_3f_)))
   ___GOTO(___L77_multimethod_23_type)
   ___END_IF
   ___IF(___COMPLEXP(___STK(-6)))
   ___GOTO(___L61_multimethod_23_type)
   ___END_IF
   ___GOTO(___L62_multimethod_23_type)
___DEF_SLBL(22,___L22_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L62_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L61_multimethod_23_type)
   ___SET_R1(___SYM_complex)
   ___POLL(23)
___DEF_SLBL(23,___L23_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L62_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_boolean_3f_,___PRM_boolean_3f_)))
   ___GOTO(___L76_multimethod_23_type)
   ___END_IF
   ___IF(___BOOLEANP(___STK(-6)))
   ___GOTO(___L63_multimethod_23_type)
   ___END_IF
   ___GOTO(___L64_multimethod_23_type)
___DEF_SLBL(24,___L24_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L64_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L63_multimethod_23_type)
   ___SET_R1(___SYM_boolean)
   ___POLL(25)
___DEF_SLBL(25,___L25_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L64_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_null_3f_,___PRM_null_3f_)))
   ___GOTO(___L75_multimethod_23_type)
   ___END_IF
   ___IF(___NULLP(___STK(-6)))
   ___GOTO(___L65_multimethod_23_type)
   ___END_IF
   ___GOTO(___L66_multimethod_23_type)
___DEF_SLBL(26,___L26_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L66_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L65_multimethod_23_type)
   ___SET_R1(___SYM_null)
   ___POLL(27)
___DEF_SLBL(27,___L27_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L66_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_eof_2d_object_3f_,___PRM_eof_2d_object_3f_)))
   ___GOTO(___L74_multimethod_23_type)
   ___END_IF
   ___IF(___EOFP(___STK(-6)))
   ___GOTO(___L67_multimethod_23_type)
   ___END_IF
   ___GOTO(___L68_multimethod_23_type)
___DEF_SLBL(28,___L28_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L68_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L67_multimethod_23_type)
   ___SET_R1(___SYM_eof_2d_object)
   ___POLL(29)
___DEF_SLBL(29,___L29_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L68_multimethod_23_type)
   ___IF(___NOT(___EQP(___GLO_eq_3f_,___PRM_eq_3f_)))
   ___GOTO(___L73_multimethod_23_type)
   ___END_IF
   ___IF(___NOT(___EQP(___STK(-6),___VOID)))
   ___GOTO(___L71_multimethod_23_type)
   ___END_IF
   ___ADJFP(-4)
   ___GOTO(___L69_multimethod_23_type)
___DEF_SLBL(30,___L30_multimethod_23_type)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L72_multimethod_23_type)
   ___END_IF
___DEF_GLBL(___L69_multimethod_23_type)
   ___SET_R1(___SYM_void)
   ___POLL(31)
___DEF_SLBL(31,___L31_multimethod_23_type)
___DEF_GLBL(___L70_multimethod_23_type)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L71_multimethod_23_type)
   ___ADJFP(-4)
___DEF_GLBL(___L72_multimethod_23_type)
   ___SET_R1(___SYM_unknown)
   ___POLL(32)
___DEF_SLBL(32,___L32_multimethod_23_type)
   ___GOTO(___L70_multimethod_23_type)
___DEF_GLBL(___L73_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R2(___VOID)
   ___SET_R0(___LBL(30))
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_eq_3f_)
___DEF_GLBL(___L74_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(28))
   ___JUMPGLOSAFE(___SET_NARGS(1),27,___G_eof_2d_object_3f_)
___DEF_GLBL(___L75_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(26))
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_null_3f_)
___DEF_GLBL(___L76_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_boolean_3f_)
___DEF_GLBL(___L77_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(1),26,___G_complex_3f_)
___DEF_GLBL(___L78_multimethod_23_type)
   ___IF(___FLONUMP(___STK(-6)))
   ___GOTO(___L59_multimethod_23_type)
   ___END_IF
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(20))
   ___JUMPPRM(___SET_NARGS(1),___PRM__23__23_real_3f_)
___DEF_GLBL(___L79_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(20))
   ___JUMPGLOSAFE(___SET_NARGS(1),37,___G_real_3f_)
___DEF_GLBL(___L80_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(19))
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_rational_3f_)
___DEF_GLBL(___L81_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(16))
   ___JUMPPRM(___SET_NARGS(1),___PRM__23__23_integer_3f_)
___DEF_GLBL(___L82_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(16))
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_integer_3f_)
___DEF_GLBL(___L83_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),25,___G_char_3f_)
___DEF_GLBL(___L84_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),38,___G_string_3f_)
___DEF_GLBL(___L85_multimethod_23_type)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(1),39,___G_symbol_3f_)
___DEF_GLBL(___L86_multimethod_23_type)
   ___SET_R1(___SYM_table)
   ___POLL(33)
___DEF_SLBL(33,___L33_multimethod_23_type)
   ___GOTO(___L48_multimethod_23_type)
___DEF_GLBL(___L87_multimethod_23_type)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___GOTO(___L45_multimethod_23_type)
___DEF_GLBL(___L88_multimethod_23_type)
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___GOTO(___L41_multimethod_23_type)
___DEF_GLBL(___L89_multimethod_23_type)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(7))
   ___ADJFP(8)
   ___POLL(34)
___DEF_SLBL(34,___L34_multimethod_23_type)
   ___JUMPGLOSAFE(___SET_NARGS(1),43,___G_vector_3f_)
___DEF_GLBL(___L90_multimethod_23_type)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(5))
   ___ADJFP(8)
   ___POLL(35)
___DEF_SLBL(35,___L35_multimethod_23_type)
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_pair_3f_)
___DEF_GLBL(___L91_multimethod_23_type)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(36)
___DEF_SLBL(36,___L36_multimethod_23_type)
   ___JUMPGLOSAFE(___SET_NARGS(1),21,___G__23__23_structure_3f_)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_multimethod_23_types
#undef ___PH_LBL0
#define ___PH_LBL0 90
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_multimethod_23_types)
___DEF_P_HLBL(___L1_multimethod_23_types)
___DEF_P_HLBL(___L2_multimethod_23_types)
___DEF_P_HLBL(___L3_multimethod_23_types)
___DEF_P_HLBL(___L4_multimethod_23_types)
___DEF_P_HLBL(___L5_multimethod_23_types)
___DEF_P_HLBL(___L6_multimethod_23_types)
___DEF_P_HLBL(___L7_multimethod_23_types)
___DEF_P_HLBL(___L8_multimethod_23_types)
___DEF_P_HLBL(___L9_multimethod_23_types)
___DEF_P_HLBL(___L10_multimethod_23_types)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_multimethod_23_types)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_multimethod_23_types)
   ___SET_STK(1,___GLO_multimethod_23_type)
   ___ADJFP(1)
   ___IF(___NOT(___EQP(___GLO_map,___PRM_map)))
   ___GOTO(___L16_multimethod_23_types)
   ___END_IF
   ___IF(___NOT(___PROCEDUREP(___STK(0))))
   ___GOTO(___L16_multimethod_23_types)
   ___END_IF
   ___SET_R2(___STK(0))
   ___SET_R3(___R1)
   ___ADJFP(-1)
   ___POLL(1)
___DEF_SLBL(1,___L1_multimethod_23_types)
   ___GOTO(___L12_multimethod_23_types)
___DEF_GLBL(___L11_multimethod_23_types)
   ___SET_R3(___CDR(___R3))
   ___POLL(2)
___DEF_SLBL(2,___L2_multimethod_23_types)
___DEF_GLBL(___L12_multimethod_23_types)
   ___IF(___PAIRP(___R3))
   ___GOTO(___L11_multimethod_23_types)
   ___END_IF
   ___IF(___NOT(___NULLP(___R3)))
   ___GOTO(___L15_multimethod_23_types)
   ___END_IF
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___POLL(3)
___DEF_SLBL(3,___L3_multimethod_23_types)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L14_multimethod_23_types)
   ___END_IF
___DEF_GLBL(___L13_multimethod_23_types)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___CAR(___R2))
   ___SET_R0(___LBL(5))
   ___ADJFP(8)
   ___POLL(4)
___DEF_SLBL(4,___L4_multimethod_23_types)
   ___JUMPGENSAFE(___SET_NARGS(1),___STK(-6))
___DEF_SLBL(5,___L5_multimethod_23_types)
   ___SET_STK(-4,___R1)
   ___SET_R2(___CDR(___STK(-5)))
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(6))
   ___IF(___PAIRP(___R2))
   ___GOTO(___L13_multimethod_23_types)
   ___END_IF
___DEF_GLBL(___L14_multimethod_23_types)
   ___SET_R1(___NUL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(6,___L6_multimethod_23_types)
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_multimethod_23_types)
   ___POLL(8)
___DEF_SLBL(8,___L8_multimethod_23_types)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L15_multimethod_23_types)
   ___SET_STK(1,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(1))
   ___ADJFP(1)
   ___POLL(9)
___DEF_SLBL(9,___L9_multimethod_23_types)
   ___GOTO(___L17_multimethod_23_types)
___DEF_GLBL(___L16_multimethod_23_types)
   ___SET_R2(___R1)
   ___SET_R1(___STK(0))
   ___POLL(10)
___DEF_SLBL(10,___L10_multimethod_23_types)
___DEF_GLBL(___L17_multimethod_23_types)
   ___ADJFP(-1)
   ___JUMPGLOSAFE(___SET_NARGS(2),31,___G_map)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_multimethod," multimethod",___REF_FAL,6,0)
,___DEF_LBL_PROC(___H__20_multimethod,0,0)
,___DEF_LBL_RET(___H__20_multimethod,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_multimethod,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_multimethod,___IFD(___RETN,5,0,0x11L))
,___DEF_LBL_RET(___H__20_multimethod,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H__20_multimethod,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_multimethod_23_method_2d_set_21_,0,___REF_FAL,4,0)
,___DEF_LBL_PROC(___H_multimethod_23_method_2d_set_21_,3,0)
,___DEF_LBL_RET(___H_multimethod_23_method_2d_set_21_,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_multimethod_23_method_2d_set_21_,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_multimethod_23_method_2d_set_21_,___IFD(___RETI,8,8,0x3f04L))
,___DEF_LBL_INTRO(___H_multimethod_23_make_2d_multimethod_2d_exception,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_multimethod_23_make_2d_multimethod_2d_exception,2,0)
,___DEF_LBL_RET(___H_multimethod_23_make_2d_multimethod_2d_exception,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_multimethod_23_multimethod_2d_exception_3f_,0,___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_multimethod_23_multimethod_2d_exception_3f_,1,0)
,___DEF_LBL_INTRO(___H_multimethod_23_multimethod_2d_exception_2d_method,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_multimethod_23_multimethod_2d_exception_2d_method,1,0)
,___DEF_LBL_RET(___H_multimethod_23_multimethod_2d_exception_2d_method,___IFD(___RETI,3,4,0x3f1L))
,___DEF_LBL_INTRO(___H_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_,2,0)
,___DEF_LBL_RET(___H_multimethod_23_multimethod_2d_exception_2d_method_2d_set_21_,___IFD(___RETI,4,4,0x3f3L))
,___DEF_LBL_INTRO(___H_multimethod_23_multimethod_2d_exception_2d_arguments,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_multimethod_23_multimethod_2d_exception_2d_arguments,1,0)
,___DEF_LBL_RET(___H_multimethod_23_multimethod_2d_exception_2d_arguments,___IFD(___RETI,3,4,0x3f1L))
,___DEF_LBL_INTRO(___H_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_,0,___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_,2,0)
,___DEF_LBL_RET(___H_multimethod_23_multimethod_2d_exception_2d_arguments_2d_set_21_,___IFD(___RETI,4,4,0x3f3L))
,___DEF_LBL_INTRO(___H_multimethod_23_multi,0,___REF_FAL,21,0)
,___DEF_LBL_PROC(___H_multimethod_23_multi,2,0)
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,4,0,0x3fdL))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETN,5,0,0xfL))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,4,0,0x3f9L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,8,0,0x3f09L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_PROC(___H_multimethod_23_multi,2,1)
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H_multimethod_23_multi,1,1)
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_multimethod_23_multi,1,3)
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_multi,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_INTRO(___H_multimethod_23_type,0,___REF_FAL,37,0)
,___DEF_LBL_PROC(___H_multimethod_23_type,1,0)
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,5,0,0x3L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_RET(___H_multimethod_23_type,___IFD(___RETI,8,0,0x3f03L))
,___DEF_LBL_INTRO(___H_multimethod_23_types,0,___REF_FAL,11,0)
,___DEF_LBL_PROC(___H_multimethod_23_types,1,0)
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,8,0,0x3f07L))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETN,5,0,0x7L))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETN,5,0,0x9L))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_multimethod_23_types,___IFD(___RETI,1,4,0x3f0L))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_multimethod,1)
___END_MOD1

___BEGIN_MOD2
___DEF_SYM2(0,___S_arguments,"arguments")
___DEF_SYM2(1,___S_boolean,"boolean")
___DEF_SYM2(2,___S_char,"char")
___DEF_SYM2(3,___S_complex,"complex")
___DEF_SYM2(4,___S_eof_2d_object,"eof-object")
___DEF_SYM2(5,___S_integer,"integer")
___DEF_SYM2(6,___S_method,"method")
___DEF_SYM2(7,___S_multimethod_2d_exception,"multimethod-exception")
___DEF_SYM2(8,___S_null,"null")
___DEF_SYM2(9,___S_pair,"pair")
___DEF_SYM2(10,___S_rational,"rational")
___DEF_SYM2(11,___S_real,"real")
___DEF_SYM2(12,___S_string,"string")
___DEF_SYM2(13,___S_symbol,"symbol")
___DEF_SYM2(14,___S_table,"table")
___DEF_SYM2(15,___S_unknown,"unknown")
___DEF_SYM2(16,___S_vector,"vector")
___DEF_SYM2(17,___S_void,"void")
___DEF_KEY2(0,___K_weak_2d_keys,"weak-keys")
___END_MOD2

#endif
