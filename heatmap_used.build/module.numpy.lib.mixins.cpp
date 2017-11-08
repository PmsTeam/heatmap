/* Generated code for Python source for module 'numpy.lib.mixins'
 * created by Nuitka version 0.5.28.1
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_numpy$lib$mixins is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$mixins;
PyDictObject *moduledict_numpy$lib$mixins;

/* The module constants used, if any. */
extern PyObject *const_str_plain_neg;
extern PyObject *const_str_plain___radd__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_bitwise_and;
extern PyObject *const_str_plain_mod;
extern PyObject *const_str_plain_eq;
static PyObject *const_str_plain___lshift__;
extern PyObject *const_tuple_str_plain_umath_tuple;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain___array_ufunc__;
extern PyObject *const_str_plain_less;
static PyObject *const_tuple_str_plain_ufunc_str_plain_name_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_floordiv;
static PyObject *const_str_plain___and__;
static PyObject *const_str_plain___ior__;
extern PyObject *const_str_plain_true_divide;
extern PyObject *const_str_plain___add__;
extern PyObject *const_str_plain_umath;
extern PyObject *const_str_plain_right_shift;
extern PyObject *const_str_plain___rmod__;
extern PyObject *const_str_plain_bitwise_xor;
static PyObject *const_str_digest_ad40be8057f41bf17b5d8199728b8235;
extern PyObject *const_str_plain_um;
extern PyObject *const_str_plain___ne__;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain__reflected_binary_method;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple;
extern PyObject *const_str_plain_not_equal;
static PyObject *const_str_plain_and;
extern PyObject *const_str_plain_remainder;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain___itruediv__;
static PyObject *const_str_plain___rlshift__;
static PyObject *const_str_plain_positive;
static PyObject *const_str_plain__inplace_binary_method;
static PyObject *const_str_digest_5445779948f935a9b1adbbb668b96c8d;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain___rtruediv__;
extern PyObject *const_str_plain_left_shift;
static PyObject *const_str_plain_gt;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_plain___irshift__;
static PyObject *const_str_plain_rshift;
static PyObject *const_str_plain___iand__;
static PyObject *const_str_plain__unary_method;
static PyObject *const_str_plain_ge;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_div;
extern PyObject *const_str_plain___rfloordiv__;
extern PyObject *const_str_plain_less_equal;
static PyObject *const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9;
static PyObject *const_str_plain___rxor__;
extern PyObject *const_str_plain___rpow__;
static PyObject *const_str_digest_414e35f1a8f354736e9757f3d0278f57;
static PyObject *const_str_plain_or;
static PyObject *const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple;
static PyObject *const_str_plain_NDArrayOperatorsMixin;
extern PyObject *const_str_plain___floordiv__;
extern PyObject *const_str_plain___isub__;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_out;
static PyObject *const_str_digest_da6baa6d0f995af1be2dec79a5cba153;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_truediv;
static PyObject *const_str_plain___imod__;
extern PyObject *const_str_plain___mod__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___div__;
static PyObject *const_str_plain_le;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain___ror__;
extern PyObject *const_str_plain_absolute;
static PyObject *const_str_plain_lt;
static PyObject *const_str_digest_359a2a8676a3ce008ce1ec076a50c945;
extern PyObject *const_str_plain___rdiv__;
static PyObject *const_str_plain_divmod;
static PyObject *const_str_plain__binary_method;
static PyObject *const_str_digest_fd58b02fb63a24a8cf76b8a0b8099b4c;
extern PyObject *const_str_plain___sub__;
static PyObject *const_str_plain___invert__;
static PyObject *const_str_plain___rand__;
extern PyObject *const_str_plain___mul__;
extern PyObject *const_str_plain___lt__;
extern PyObject *const_str_plain_ufunc;
extern PyObject *const_str_plain___pos__;
static PyObject *const_str_plain___rrshift__;
extern PyObject *const_str_plain_pow;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___divmod__;
extern PyObject *const_str_plain___truediv__;
static PyObject *const_str_plain___abs__;
extern PyObject *const_str_plain___ge__;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_b813bb8ce95d9e22e563f2de89266c16;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain___le__;
extern PyObject *const_str_plain___ifloordiv__;
extern PyObject *const_str_plain_add;
static PyObject *const_str_plain__disables_array_ufunc;
extern PyObject *const_str_plain_other;
static PyObject *const_str_digest_27448ecb13f4af87a27931cd32602b90;
extern PyObject *const_str_plain___idiv__;
extern PyObject *const_str_plain___imul__;
static PyObject *const_str_plain__numeric_methods;
extern PyObject *const_str_plain_divide;
static PyObject *const_tuple_str_plain_self_str_plain_ufunc_tuple;
static PyObject *const_str_plain_xor;
static PyObject *const_str_digest_77bc960dfc587ce7c99b8e7660d9152b;
extern PyObject *const_str_plain_equal;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_greater;
extern PyObject *const_str_plain_ne;
static PyObject *const_str_plain_lshift;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_str_plain___rmul__;
extern PyObject *const_str_plain___rdivmod__;
extern PyObject *const_str_plain___neg__;
extern PyObject *const_str_plain_multiply;
static PyObject *const_str_digest_08655283cd4621915e1cd0fb3c8c42bd;
static PyObject *const_str_plain___xor__;
static PyObject *const_str_plain___or__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___ipow__;
extern PyObject *const_str_plain_floor_divide;
extern PyObject *const_str_plain_bitwise_or;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain___pow__;
static PyObject *const_str_plain___rshift__;
static PyObject *const_str_digest_03b9479da2cb79d35b433f57ade72eac;
extern PyObject *const_str_plain_subtract;
static PyObject *const_str_digest_5d774f9292ed201c1c8f83a6b2020a16;
static PyObject *const_str_plain___ixor__;
extern PyObject *const_str_plain_mul;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_invert;
extern PyObject *const_str_plain_greater_equal;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_negative;
extern PyObject *const_str_plain___gt__;
extern PyObject *const_str_plain___rsub__;
static PyObject *const_str_plain___ilshift__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain___iadd__;
static PyObject *const_str_digest_cb47fb7eaaa4066fadc815b3863fa272;
static PyObject *const_tuple_b70b778be3d1549229d6a67fad47f10b_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain___lshift__ = UNSTREAM_STRING( &constant_bin[ 837425 ], 10, 1 );
    const_tuple_str_plain_ufunc_str_plain_name_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ufunc_str_plain_name_tuple, 0, const_str_plain_ufunc ); Py_INCREF( const_str_plain_ufunc );
    PyTuple_SET_ITEM( const_tuple_str_plain_ufunc_str_plain_name_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_floordiv = UNSTREAM_STRING( &constant_bin[ 837435 ], 8, 1 );
    const_str_plain___and__ = UNSTREAM_STRING( &constant_bin[ 837443 ], 7, 1 );
    const_str_plain___ior__ = UNSTREAM_STRING( &constant_bin[ 837450 ], 7, 1 );
    const_str_digest_ad40be8057f41bf17b5d8199728b8235 = UNSTREAM_STRING( &constant_bin[ 837457 ], 16, 0 );
    const_str_plain__reflected_binary_method = UNSTREAM_STRING( &constant_bin[ 837473 ], 24, 1 );
    const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, 2, const_str_plain_ufunc ); Py_INCREF( const_str_plain_ufunc );
    const_str_plain_and = UNSTREAM_STRING( &constant_bin[ 684 ], 3, 1 );
    const_str_plain___rlshift__ = UNSTREAM_STRING( &constant_bin[ 837497 ], 11, 1 );
    const_str_plain_positive = UNSTREAM_STRING( &constant_bin[ 212178 ], 8, 1 );
    const_str_plain__inplace_binary_method = UNSTREAM_STRING( &constant_bin[ 837508 ], 22, 1 );
    const_str_digest_5445779948f935a9b1adbbb668b96c8d = UNSTREAM_STRING( &constant_bin[ 837530 ], 25, 0 );
    const_str_plain_gt = UNSTREAM_STRING( &constant_bin[ 16809 ], 2, 1 );
    const_str_plain___irshift__ = UNSTREAM_STRING( &constant_bin[ 837555 ], 11, 1 );
    const_str_plain_rshift = UNSTREAM_STRING( &constant_bin[ 837558 ], 6, 1 );
    const_str_plain___iand__ = UNSTREAM_STRING( &constant_bin[ 837566 ], 8, 1 );
    const_str_plain__unary_method = UNSTREAM_STRING( &constant_bin[ 837574 ], 13, 1 );
    const_str_plain_ge = UNSTREAM_STRING( &constant_bin[ 23 ], 2, 1 );
    const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9 = UNSTREAM_STRING( &constant_bin[ 837587 ], 62, 0 );
    const_str_plain___rxor__ = UNSTREAM_STRING( &constant_bin[ 837649 ], 8, 1 );
    const_str_digest_414e35f1a8f354736e9757f3d0278f57 = UNSTREAM_STRING( &constant_bin[ 837657 ], 65, 0 );
    const_str_plain_or = UNSTREAM_STRING( &constant_bin[ 8 ], 2, 1 );
    const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 0, const_str_plain_ufunc ); Py_INCREF( const_str_plain_ufunc );
    PyTuple_SET_ITEM( const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 2, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_plain_NDArrayOperatorsMixin = UNSTREAM_STRING( &constant_bin[ 837722 ], 21, 1 );
    const_str_digest_da6baa6d0f995af1be2dec79a5cba153 = UNSTREAM_STRING( &constant_bin[ 837743 ], 65, 0 );
    const_str_plain_truediv = UNSTREAM_STRING( &constant_bin[ 837808 ], 7, 1 );
    const_str_plain___imod__ = UNSTREAM_STRING( &constant_bin[ 837815 ], 8, 1 );
    const_str_plain_le = UNSTREAM_STRING( &constant_bin[ 517 ], 2, 1 );
    const_str_plain___ror__ = UNSTREAM_STRING( &constant_bin[ 837823 ], 7, 1 );
    const_str_plain_lt = UNSTREAM_STRING( &constant_bin[ 592 ], 2, 1 );
    const_str_digest_359a2a8676a3ce008ce1ec076a50c945 = UNSTREAM_STRING( &constant_bin[ 837830 ], 7, 0 );
    const_str_plain_divmod = UNSTREAM_STRING( &constant_bin[ 837837 ], 6, 1 );
    const_str_plain__binary_method = UNSTREAM_STRING( &constant_bin[ 837483 ], 14, 1 );
    const_str_digest_fd58b02fb63a24a8cf76b8a0b8099b4c = UNSTREAM_STRING( &constant_bin[ 837843 ], 3447, 0 );
    const_str_plain___invert__ = UNSTREAM_STRING( &constant_bin[ 841290 ], 10, 1 );
    const_str_plain___rand__ = UNSTREAM_STRING( &constant_bin[ 841300 ], 8, 1 );
    const_str_plain___rrshift__ = UNSTREAM_STRING( &constant_bin[ 841308 ], 11, 1 );
    const_str_plain___abs__ = UNSTREAM_STRING( &constant_bin[ 841319 ], 7, 1 );
    const_str_digest_b813bb8ce95d9e22e563f2de89266c16 = UNSTREAM_STRING( &constant_bin[ 841326 ], 46, 0 );
    const_str_plain__disables_array_ufunc = UNSTREAM_STRING( &constant_bin[ 841372 ], 21, 1 );
    const_str_digest_27448ecb13f4af87a27931cd32602b90 = UNSTREAM_STRING( &constant_bin[ 841393 ], 7, 0 );
    const_str_plain__numeric_methods = UNSTREAM_STRING( &constant_bin[ 841400 ], 16, 1 );
    const_tuple_str_plain_self_str_plain_ufunc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ufunc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ufunc_tuple, 1, const_str_plain_ufunc ); Py_INCREF( const_str_plain_ufunc );
    const_str_plain_xor = UNSTREAM_STRING( &constant_bin[ 239192 ], 3, 1 );
    const_str_digest_77bc960dfc587ce7c99b8e7660d9152b = UNSTREAM_STRING( &constant_bin[ 841416 ], 69, 0 );
    const_str_plain_lshift = UNSTREAM_STRING( &constant_bin[ 837427 ], 6, 1 );
    const_str_digest_08655283cd4621915e1cd0fb3c8c42bd = UNSTREAM_STRING( &constant_bin[ 841485 ], 69, 0 );
    const_str_plain___xor__ = UNSTREAM_STRING( &constant_bin[ 841554 ], 7, 1 );
    const_str_plain___or__ = UNSTREAM_STRING( &constant_bin[ 841561 ], 6, 1 );
    const_str_plain___rshift__ = UNSTREAM_STRING( &constant_bin[ 841567 ], 10, 1 );
    const_str_digest_03b9479da2cb79d35b433f57ade72eac = UNSTREAM_STRING( &constant_bin[ 841577 ], 41, 0 );
    const_str_digest_5d774f9292ed201c1c8f83a6b2020a16 = UNSTREAM_STRING( &constant_bin[ 841618 ], 6, 0 );
    const_str_plain___ixor__ = UNSTREAM_STRING( &constant_bin[ 841624 ], 8, 1 );
    const_str_plain___ilshift__ = UNSTREAM_STRING( &constant_bin[ 841632 ], 11, 1 );
    const_str_digest_cb47fb7eaaa4066fadc815b3863fa272 = UNSTREAM_STRING( &constant_bin[ 841643 ], 49, 0 );
    const_tuple_b70b778be3d1549229d6a67fad47f10b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 841692 ], 716 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$mixins( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_30dcfb49a71496da171aada393946e7a;
static PyCodeObject *codeobj_c2c1464f00a8717291335b7625d790b5;
static PyCodeObject *codeobj_123537c8610f28b61d95308f7fe9215d;
static PyCodeObject *codeobj_71b72af5fd28d29d76b8e9e00d168a58;
static PyCodeObject *codeobj_f3cccfa730455414b86cefe60bd6a939;
static PyCodeObject *codeobj_2397202e7679dfec0de9f2fcbce2f61b;
static PyCodeObject *codeobj_d5a17412052ad29d251dbd218f2bbb6f;
static PyCodeObject *codeobj_a50405f2347e967f9e6bdad18eb8dd5f;
static PyCodeObject *codeobj_1c689eb042e660866a76c6101e0b07b2;
static PyCodeObject *codeobj_f4a93347c4123f8f076d2d6d33171485;
static PyCodeObject *codeobj_807573d014f6f143adb19d5f04dd91d4;
static PyCodeObject *codeobj_da1a8b484279b6d0e90857a3e814c1ec;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cb47fb7eaaa4066fadc815b3863fa272;
    codeobj_30dcfb49a71496da171aada393946e7a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5445779948f935a9b1adbbb668b96c8d, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c2c1464f00a8717291335b7625d790b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NDArrayOperatorsMixin, 63, const_tuple_b70b778be3d1549229d6a67fad47f10b_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_123537c8610f28b61d95308f7fe9215d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__binary_method, 20, const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_71b72af5fd28d29d76b8e9e00d168a58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__disables_array_ufunc, 12, const_tuple_str_plain_obj_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f3cccfa730455414b86cefe60bd6a939 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__inplace_binary_method, 40, const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2397202e7679dfec0de9f2fcbce2f61b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__numeric_methods, 48, const_tuple_str_plain_ufunc_str_plain_name_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d5a17412052ad29d251dbd218f2bbb6f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reflected_binary_method, 30, const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a50405f2347e967f9e6bdad18eb8dd5f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unary_method, 55, const_tuple_str_plain_ufunc_str_plain_name_str_plain_func_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1c689eb042e660866a76c6101e0b07b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func, 22, const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f4a93347c4123f8f076d2d6d33171485 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func, 32, const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_807573d014f6f143adb19d5f04dd91d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func, 42, const_tuple_str_plain_self_str_plain_other_str_plain_ufunc_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da1a8b484279b6d0e90857a3e814c1ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func, 57, const_tuple_str_plain_self_str_plain_ufunc_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_1__disables_array_ufunc(  );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_2__binary_method(  );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_2__binary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_3__reflected_binary_method(  );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_4__inplace_binary_method(  );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_5__numeric_methods(  );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_6__unary_method(  );


static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_6__unary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc );


// The module function definitions.
static PyObject *impl_numpy$lib$mixins$$$function_1__disables_array_ufunc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_71b72af5fd28d29d76b8e9e00d168a58 = NULL;

    struct Nuitka_FrameObject *frame_71b72af5fd28d29d76b8e9e00d168a58;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71b72af5fd28d29d76b8e9e00d168a58, codeobj_71b72af5fd28d29d76b8e9e00d168a58, module_numpy$lib$mixins, sizeof(void *) );
    frame_71b72af5fd28d29d76b8e9e00d168a58 = cache_frame_71b72af5fd28d29d76b8e9e00d168a58;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71b72af5fd28d29d76b8e9e00d168a58 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71b72af5fd28d29d76b8e9e00d168a58 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_ufunc__ );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_1__disables_array_ufunc );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_71b72af5fd28d29d76b8e9e00d168a58 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_71b72af5fd28d29d76b8e9e00d168a58, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_71b72af5fd28d29d76b8e9e00d168a58, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 14;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_71b72af5fd28d29d76b8e9e00d168a58->m_frame) frame_71b72af5fd28d29d76b8e9e00d168a58->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_71b72af5fd28d29d76b8e9e00d168a58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_71b72af5fd28d29d76b8e9e00d168a58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_71b72af5fd28d29d76b8e9e00d168a58 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71b72af5fd28d29d76b8e9e00d168a58, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71b72af5fd28d29d76b8e9e00d168a58->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71b72af5fd28d29d76b8e9e00d168a58, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71b72af5fd28d29d76b8e9e00d168a58,
        type_description_1,
        par_obj
    );


    // Release cached frame.
    if ( frame_71b72af5fd28d29d76b8e9e00d168a58 == cache_frame_71b72af5fd28d29d76b8e9e00d168a58 )
    {
        Py_DECREF( frame_71b72af5fd28d29d76b8e9e00d168a58 );
    }
    cache_frame_71b72af5fd28d29d76b8e9e00d168a58 = NULL;

    assertFrameObject( frame_71b72af5fd28d29d76b8e9e00d168a58 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_1__disables_array_ufunc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_1__disables_array_ufunc );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_2__binary_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_name = python_pars[ 1 ];
    PyObject *var_func = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_123537c8610f28b61d95308f7fe9215d = NULL;

    struct Nuitka_FrameObject *frame_123537c8610f28b61d95308f7fe9215d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function_2__binary_method$$$function_1_func( par_ufunc );
    assert( var_func == NULL );
    var_func = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_123537c8610f28b61d95308f7fe9215d, codeobj_123537c8610f28b61d95308f7fe9215d, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_123537c8610f28b61d95308f7fe9215d = cache_frame_123537c8610f28b61d95308f7fe9215d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_123537c8610f28b61d95308f7fe9215d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_123537c8610f28b61d95308f7fe9215d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = const_str_digest_5d774f9292ed201c1c8f83a6b2020a16;
    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_123537c8610f28b61d95308f7fe9215d->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_func;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 26;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123537c8610f28b61d95308f7fe9215d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123537c8610f28b61d95308f7fe9215d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_123537c8610f28b61d95308f7fe9215d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_123537c8610f28b61d95308f7fe9215d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_123537c8610f28b61d95308f7fe9215d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_123537c8610f28b61d95308f7fe9215d,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame.
    if ( frame_123537c8610f28b61d95308f7fe9215d == cache_frame_123537c8610f28b61d95308f7fe9215d )
    {
        Py_DECREF( frame_123537c8610f28b61d95308f7fe9215d );
    }
    cache_frame_123537c8610f28b61d95308f7fe9215d = NULL;

    assertFrameObject( frame_123537c8610f28b61d95308f7fe9215d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_func;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_2__binary_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_2__binary_method );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_2__binary_method$$$function_1_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_1c689eb042e660866a76c6101e0b07b2 = NULL;

    struct Nuitka_FrameObject *frame_1c689eb042e660866a76c6101e0b07b2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1c689eb042e660866a76c6101e0b07b2, codeobj_1c689eb042e660866a76c6101e0b07b2, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1c689eb042e660866a76c6101e0b07b2 = cache_frame_1c689eb042e660866a76c6101e0b07b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1c689eb042e660866a76c6101e0b07b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1c689eb042e660866a76c6101e0b07b2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__disables_array_ufunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__disables_array_ufunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_disables_array_ufunc" );
        exception_tb = NULL;

        exception_lineno = 23;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_1c689eb042e660866a76c6101e0b07b2->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 23;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_name_2 = NULL;
    }
    else
    {
        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ufunc" );
        exception_tb = NULL;

        exception_lineno = 25;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_self;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_other;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_1c689eb042e660866a76c6101e0b07b2->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c689eb042e660866a76c6101e0b07b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c689eb042e660866a76c6101e0b07b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1c689eb042e660866a76c6101e0b07b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1c689eb042e660866a76c6101e0b07b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1c689eb042e660866a76c6101e0b07b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1c689eb042e660866a76c6101e0b07b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1c689eb042e660866a76c6101e0b07b2,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_1c689eb042e660866a76c6101e0b07b2 == cache_frame_1c689eb042e660866a76c6101e0b07b2 )
    {
        Py_DECREF( frame_1c689eb042e660866a76c6101e0b07b2 );
    }
    cache_frame_1c689eb042e660866a76c6101e0b07b2 = NULL;

    assertFrameObject( frame_1c689eb042e660866a76c6101e0b07b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_2__binary_method$$$function_1_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_2__binary_method$$$function_1_func );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_3__reflected_binary_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_name = python_pars[ 1 ];
    PyObject *var_func = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d5a17412052ad29d251dbd218f2bbb6f = NULL;

    struct Nuitka_FrameObject *frame_d5a17412052ad29d251dbd218f2bbb6f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func( par_ufunc );
    assert( var_func == NULL );
    var_func = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5a17412052ad29d251dbd218f2bbb6f, codeobj_d5a17412052ad29d251dbd218f2bbb6f, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d5a17412052ad29d251dbd218f2bbb6f = cache_frame_d5a17412052ad29d251dbd218f2bbb6f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5a17412052ad29d251dbd218f2bbb6f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5a17412052ad29d251dbd218f2bbb6f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = const_str_digest_359a2a8676a3ce008ce1ec076a50c945;
    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d5a17412052ad29d251dbd218f2bbb6f->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_func;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 36;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5a17412052ad29d251dbd218f2bbb6f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5a17412052ad29d251dbd218f2bbb6f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5a17412052ad29d251dbd218f2bbb6f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5a17412052ad29d251dbd218f2bbb6f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5a17412052ad29d251dbd218f2bbb6f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5a17412052ad29d251dbd218f2bbb6f,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame.
    if ( frame_d5a17412052ad29d251dbd218f2bbb6f == cache_frame_d5a17412052ad29d251dbd218f2bbb6f )
    {
        Py_DECREF( frame_d5a17412052ad29d251dbd218f2bbb6f );
    }
    cache_frame_d5a17412052ad29d251dbd218f2bbb6f = NULL;

    assertFrameObject( frame_d5a17412052ad29d251dbd218f2bbb6f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_func;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_3__reflected_binary_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_3__reflected_binary_method );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f4a93347c4123f8f076d2d6d33171485 = NULL;

    struct Nuitka_FrameObject *frame_f4a93347c4123f8f076d2d6d33171485;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f4a93347c4123f8f076d2d6d33171485, codeobj_f4a93347c4123f8f076d2d6d33171485, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f4a93347c4123f8f076d2d6d33171485 = cache_frame_f4a93347c4123f8f076d2d6d33171485;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f4a93347c4123f8f076d2d6d33171485 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f4a93347c4123f8f076d2d6d33171485 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__disables_array_ufunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__disables_array_ufunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_disables_array_ufunc" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f4a93347c4123f8f076d2d6d33171485->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 33;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_name_2 = NULL;
    }
    else
    {
        tmp_called_name_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ufunc" );
        exception_tb = NULL;

        exception_lineno = 35;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_other;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_self;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_f4a93347c4123f8f076d2d6d33171485->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4a93347c4123f8f076d2d6d33171485 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4a93347c4123f8f076d2d6d33171485 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f4a93347c4123f8f076d2d6d33171485 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f4a93347c4123f8f076d2d6d33171485, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f4a93347c4123f8f076d2d6d33171485->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f4a93347c4123f8f076d2d6d33171485, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f4a93347c4123f8f076d2d6d33171485,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_f4a93347c4123f8f076d2d6d33171485 == cache_frame_f4a93347c4123f8f076d2d6d33171485 )
    {
        Py_DECREF( frame_f4a93347c4123f8f076d2d6d33171485 );
    }
    cache_frame_f4a93347c4123f8f076d2d6d33171485 = NULL;

    assertFrameObject( frame_f4a93347c4123f8f076d2d6d33171485 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_4__inplace_binary_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_name = python_pars[ 1 ];
    PyObject *var_func = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f3cccfa730455414b86cefe60bd6a939 = NULL;

    struct Nuitka_FrameObject *frame_f3cccfa730455414b86cefe60bd6a939;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func( par_ufunc );
    assert( var_func == NULL );
    var_func = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f3cccfa730455414b86cefe60bd6a939, codeobj_f3cccfa730455414b86cefe60bd6a939, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f3cccfa730455414b86cefe60bd6a939 = cache_frame_f3cccfa730455414b86cefe60bd6a939;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f3cccfa730455414b86cefe60bd6a939 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f3cccfa730455414b86cefe60bd6a939 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = const_str_digest_27448ecb13f4af87a27931cd32602b90;
    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f3cccfa730455414b86cefe60bd6a939->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_func;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 44;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3cccfa730455414b86cefe60bd6a939 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3cccfa730455414b86cefe60bd6a939 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f3cccfa730455414b86cefe60bd6a939, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f3cccfa730455414b86cefe60bd6a939->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f3cccfa730455414b86cefe60bd6a939, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f3cccfa730455414b86cefe60bd6a939,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame.
    if ( frame_f3cccfa730455414b86cefe60bd6a939 == cache_frame_f3cccfa730455414b86cefe60bd6a939 )
    {
        Py_DECREF( frame_f3cccfa730455414b86cefe60bd6a939 );
    }
    cache_frame_f3cccfa730455414b86cefe60bd6a939 = NULL;

    assertFrameObject( frame_f3cccfa730455414b86cefe60bd6a939 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_func;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_4__inplace_binary_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_4__inplace_binary_method );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_807573d014f6f143adb19d5f04dd91d4 = NULL;

    struct Nuitka_FrameObject *frame_807573d014f6f143adb19d5f04dd91d4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_807573d014f6f143adb19d5f04dd91d4, codeobj_807573d014f6f143adb19d5f04dd91d4, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_807573d014f6f143adb19d5f04dd91d4 = cache_frame_807573d014f6f143adb19d5f04dd91d4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_807573d014f6f143adb19d5f04dd91d4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_807573d014f6f143adb19d5f04dd91d4 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ufunc" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_self;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_other;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_self;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_2 );
    tmp_dict_key_1 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_807573d014f6f143adb19d5f04dd91d4->m_frame.f_lineno = 43;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_807573d014f6f143adb19d5f04dd91d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_807573d014f6f143adb19d5f04dd91d4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_807573d014f6f143adb19d5f04dd91d4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_807573d014f6f143adb19d5f04dd91d4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_807573d014f6f143adb19d5f04dd91d4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_807573d014f6f143adb19d5f04dd91d4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_807573d014f6f143adb19d5f04dd91d4,
        type_description_1,
        par_self,
        par_other,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_807573d014f6f143adb19d5f04dd91d4 == cache_frame_807573d014f6f143adb19d5f04dd91d4 )
    {
        Py_DECREF( frame_807573d014f6f143adb19d5f04dd91d4 );
    }
    cache_frame_807573d014f6f143adb19d5f04dd91d4 = NULL;

    assertFrameObject( frame_807573d014f6f143adb19d5f04dd91d4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_5__numeric_methods( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ufunc = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_2397202e7679dfec0de9f2fcbce2f61b = NULL;

    struct Nuitka_FrameObject *frame_2397202e7679dfec0de9f2fcbce2f61b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2397202e7679dfec0de9f2fcbce2f61b, codeobj_2397202e7679dfec0de9f2fcbce2f61b, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *) );
    frame_2397202e7679dfec0de9f2fcbce2f61b = cache_frame_2397202e7679dfec0de9f2fcbce2f61b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2397202e7679dfec0de9f2fcbce2f61b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2397202e7679dfec0de9f2fcbce2f61b ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = PyTuple_New( 3 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_ufunc;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_name;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_2397202e7679dfec0de9f2fcbce2f61b->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__reflected_binary_method );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__reflected_binary_method );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_reflected_binary_method" );
        exception_tb = NULL;

        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_ufunc;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_name;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_2397202e7679dfec0de9f2fcbce2f61b->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__inplace_binary_method );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__inplace_binary_method );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_inplace_binary_method" );
        exception_tb = NULL;

        exception_lineno = 52;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_ufunc;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_name;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_2397202e7679dfec0de9f2fcbce2f61b->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 52;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2397202e7679dfec0de9f2fcbce2f61b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2397202e7679dfec0de9f2fcbce2f61b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2397202e7679dfec0de9f2fcbce2f61b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2397202e7679dfec0de9f2fcbce2f61b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2397202e7679dfec0de9f2fcbce2f61b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2397202e7679dfec0de9f2fcbce2f61b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2397202e7679dfec0de9f2fcbce2f61b,
        type_description_1,
        par_ufunc,
        par_name
    );


    // Release cached frame.
    if ( frame_2397202e7679dfec0de9f2fcbce2f61b == cache_frame_2397202e7679dfec0de9f2fcbce2f61b )
    {
        Py_DECREF( frame_2397202e7679dfec0de9f2fcbce2f61b );
    }
    cache_frame_2397202e7679dfec0de9f2fcbce2f61b = NULL;

    assertFrameObject( frame_2397202e7679dfec0de9f2fcbce2f61b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_5__numeric_methods );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_5__numeric_methods );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_6__unary_method( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ufunc = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *par_name = python_pars[ 1 ];
    PyObject *var_func = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a50405f2347e967f9e6bdad18eb8dd5f = NULL;

    struct Nuitka_FrameObject *frame_a50405f2347e967f9e6bdad18eb8dd5f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_numpy$lib$mixins$$$function_6__unary_method$$$function_1_func( par_ufunc );
    assert( var_func == NULL );
    var_func = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a50405f2347e967f9e6bdad18eb8dd5f, codeobj_a50405f2347e967f9e6bdad18eb8dd5f, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a50405f2347e967f9e6bdad18eb8dd5f = cache_frame_a50405f2347e967f9e6bdad18eb8dd5f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a50405f2347e967f9e6bdad18eb8dd5f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a50405f2347e967f9e6bdad18eb8dd5f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = const_str_digest_5d774f9292ed201c1c8f83a6b2020a16;
    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a50405f2347e967f9e6bdad18eb8dd5f->m_frame.f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_func;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 59;
        type_description_1 = "coo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a50405f2347e967f9e6bdad18eb8dd5f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a50405f2347e967f9e6bdad18eb8dd5f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a50405f2347e967f9e6bdad18eb8dd5f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a50405f2347e967f9e6bdad18eb8dd5f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a50405f2347e967f9e6bdad18eb8dd5f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a50405f2347e967f9e6bdad18eb8dd5f,
        type_description_1,
        par_ufunc,
        par_name,
        var_func
    );


    // Release cached frame.
    if ( frame_a50405f2347e967f9e6bdad18eb8dd5f == cache_frame_a50405f2347e967f9e6bdad18eb8dd5f )
    {
        Py_DECREF( frame_a50405f2347e967f9e6bdad18eb8dd5f );
    }
    cache_frame_a50405f2347e967f9e6bdad18eb8dd5f = NULL;

    assertFrameObject( frame_a50405f2347e967f9e6bdad18eb8dd5f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_func;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_6__unary_method );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_ufunc );
    Py_DECREF( par_ufunc );
    par_ufunc = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_6__unary_method );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$mixins$$$function_6__unary_method$$$function_1_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_da1a8b484279b6d0e90857a3e814c1ec = NULL;

    struct Nuitka_FrameObject *frame_da1a8b484279b6d0e90857a3e814c1ec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_da1a8b484279b6d0e90857a3e814c1ec, codeobj_da1a8b484279b6d0e90857a3e814c1ec, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *) );
    frame_da1a8b484279b6d0e90857a3e814c1ec = cache_frame_da1a8b484279b6d0e90857a3e814c1ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da1a8b484279b6d0e90857a3e814c1ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da1a8b484279b6d0e90857a3e814c1ec ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ufunc" );
        exception_tb = NULL;

        exception_lineno = 58;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_da1a8b484279b6d0e90857a3e814c1ec->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da1a8b484279b6d0e90857a3e814c1ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_da1a8b484279b6d0e90857a3e814c1ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da1a8b484279b6d0e90857a3e814c1ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da1a8b484279b6d0e90857a3e814c1ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da1a8b484279b6d0e90857a3e814c1ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da1a8b484279b6d0e90857a3e814c1ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da1a8b484279b6d0e90857a3e814c1ec,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_da1a8b484279b6d0e90857a3e814c1ec == cache_frame_da1a8b484279b6d0e90857a3e814c1ec )
    {
        Py_DECREF( frame_da1a8b484279b6d0e90857a3e814c1ec );
    }
    cache_frame_da1a8b484279b6d0e90857a3e814c1ec = NULL;

    assertFrameObject( frame_da1a8b484279b6d0e90857a3e814c1ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_6__unary_method$$$function_1_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins$$$function_6__unary_method$$$function_1_func );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_1__disables_array_ufunc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_1__disables_array_ufunc,
        const_str_plain__disables_array_ufunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71b72af5fd28d29d76b8e9e00d168a58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        const_str_digest_03b9479da2cb79d35b433f57ade72eac,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_2__binary_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_2__binary_method,
        const_str_plain__binary_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_123537c8610f28b61d95308f7fe9215d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        const_str_digest_b44879ad4880ee0b59b69c74bcd4b7d9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_2__binary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_2__binary_method$$$function_1_func,
        const_str_plain_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1c689eb042e660866a76c6101e0b07b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        Py_None,
        1
    );

result->m_closure[0] = closure_ufunc;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_3__reflected_binary_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_3__reflected_binary_method,
        const_str_plain__reflected_binary_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5a17412052ad29d251dbd218f2bbb6f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        const_str_digest_414e35f1a8f354736e9757f3d0278f57,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_3__reflected_binary_method$$$function_1_func,
        const_str_plain_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f4a93347c4123f8f076d2d6d33171485,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        Py_None,
        1
    );

result->m_closure[0] = closure_ufunc;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_4__inplace_binary_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_4__inplace_binary_method,
        const_str_plain__inplace_binary_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f3cccfa730455414b86cefe60bd6a939,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        const_str_digest_da6baa6d0f995af1be2dec79a5cba153,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_4__inplace_binary_method$$$function_1_func,
        const_str_plain_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_807573d014f6f143adb19d5f04dd91d4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        Py_None,
        1
    );

result->m_closure[0] = closure_ufunc;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_5__numeric_methods(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_5__numeric_methods,
        const_str_plain__numeric_methods,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2397202e7679dfec0de9f2fcbce2f61b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        const_str_digest_77bc960dfc587ce7c99b8e7660d9152b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_6__unary_method(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_6__unary_method,
        const_str_plain__unary_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a50405f2347e967f9e6bdad18eb8dd5f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        const_str_digest_b813bb8ce95d9e22e563f2de89266c16,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$mixins$$$function_6__unary_method$$$function_1_func( struct Nuitka_CellObject *closure_ufunc )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$mixins$$$function_6__unary_method$$$function_1_func,
        const_str_plain_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_da1a8b484279b6d0e90857a3e814c1ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$mixins,
        Py_None,
        1
    );

result->m_closure[0] = closure_ufunc;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$mixins =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.mixins",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( numpy$lib$mixins )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$mixins );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.mixins: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.mixins: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$mixins" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$mixins = Py_InitModule4(
        "numpy.lib.mixins",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$mixins = PyModule_Create( &mdef_numpy$lib$mixins );
#endif

    moduledict_numpy$lib$mixins = MODULE_DICT( module_numpy$lib$mixins );

    CHECK_OBJECT( module_numpy$lib$mixins );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ad40be8057f41bf17b5d8199728b8235, module_numpy$lib$mixins );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___lt__ = NULL;
    PyObject *outline_0_var___le__ = NULL;
    PyObject *outline_0_var___eq__ = NULL;
    PyObject *outline_0_var___ne__ = NULL;
    PyObject *outline_0_var___gt__ = NULL;
    PyObject *outline_0_var___ge__ = NULL;
    PyObject *outline_0_var___add__ = NULL;
    PyObject *outline_0_var___radd__ = NULL;
    PyObject *outline_0_var___iadd__ = NULL;
    PyObject *outline_0_var___sub__ = NULL;
    PyObject *outline_0_var___rsub__ = NULL;
    PyObject *outline_0_var___isub__ = NULL;
    PyObject *outline_0_var___mul__ = NULL;
    PyObject *outline_0_var___rmul__ = NULL;
    PyObject *outline_0_var___imul__ = NULL;
    PyObject *outline_0_var___div__ = NULL;
    PyObject *outline_0_var___rdiv__ = NULL;
    PyObject *outline_0_var___idiv__ = NULL;
    PyObject *outline_0_var___truediv__ = NULL;
    PyObject *outline_0_var___rtruediv__ = NULL;
    PyObject *outline_0_var___itruediv__ = NULL;
    PyObject *outline_0_var___floordiv__ = NULL;
    PyObject *outline_0_var___rfloordiv__ = NULL;
    PyObject *outline_0_var___ifloordiv__ = NULL;
    PyObject *outline_0_var___mod__ = NULL;
    PyObject *outline_0_var___rmod__ = NULL;
    PyObject *outline_0_var___imod__ = NULL;
    PyObject *outline_0_var___divmod__ = NULL;
    PyObject *outline_0_var___rdivmod__ = NULL;
    PyObject *outline_0_var___pow__ = NULL;
    PyObject *outline_0_var___rpow__ = NULL;
    PyObject *outline_0_var___ipow__ = NULL;
    PyObject *outline_0_var___lshift__ = NULL;
    PyObject *outline_0_var___rlshift__ = NULL;
    PyObject *outline_0_var___ilshift__ = NULL;
    PyObject *outline_0_var___rshift__ = NULL;
    PyObject *outline_0_var___rrshift__ = NULL;
    PyObject *outline_0_var___irshift__ = NULL;
    PyObject *outline_0_var___and__ = NULL;
    PyObject *outline_0_var___rand__ = NULL;
    PyObject *outline_0_var___iand__ = NULL;
    PyObject *outline_0_var___xor__ = NULL;
    PyObject *outline_0_var___rxor__ = NULL;
    PyObject *outline_0_var___ixor__ = NULL;
    PyObject *outline_0_var___or__ = NULL;
    PyObject *outline_0_var___ror__ = NULL;
    PyObject *outline_0_var___ior__ = NULL;
    PyObject *outline_0_var___neg__ = NULL;
    PyObject *outline_0_var___pos__ = NULL;
    PyObject *outline_0_var___abs__ = NULL;
    PyObject *outline_0_var___invert__ = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iter_arg_10;
    PyObject *tmp_iter_arg_11;
    PyObject *tmp_iter_arg_12;
    PyObject *tmp_iter_arg_13;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_iterator_name_6;
    PyObject *tmp_iterator_name_7;
    PyObject *tmp_iterator_name_8;
    PyObject *tmp_iterator_name_9;
    PyObject *tmp_iterator_name_10;
    PyObject *tmp_iterator_name_11;
    PyObject *tmp_iterator_name_12;
    PyObject *tmp_iterator_name_13;
    PyObject *tmp_key_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    PyObject *tmp_unpack_11;
    PyObject *tmp_unpack_12;
    PyObject *tmp_unpack_13;
    PyObject *tmp_unpack_14;
    PyObject *tmp_unpack_15;
    PyObject *tmp_unpack_16;
    PyObject *tmp_unpack_17;
    PyObject *tmp_unpack_18;
    PyObject *tmp_unpack_19;
    PyObject *tmp_unpack_20;
    PyObject *tmp_unpack_21;
    PyObject *tmp_unpack_22;
    PyObject *tmp_unpack_23;
    PyObject *tmp_unpack_24;
    PyObject *tmp_unpack_25;
    PyObject *tmp_unpack_26;
    PyObject *tmp_unpack_27;
    PyObject *tmp_unpack_28;
    PyObject *tmp_unpack_29;
    PyObject *tmp_unpack_30;
    PyObject *tmp_unpack_31;
    PyObject *tmp_unpack_32;
    PyObject *tmp_unpack_33;
    PyObject *tmp_unpack_34;
    PyObject *tmp_unpack_35;
    PyObject *tmp_unpack_36;
    PyObject *tmp_unpack_37;
    PyObject *tmp_unpack_38;
    PyObject *tmp_unpack_39;
    static struct Nuitka_FrameObject *cache_frame_c2c1464f00a8717291335b7625d790b5_2 = NULL;

    struct Nuitka_FrameObject *frame_c2c1464f00a8717291335b7625d790b5_2;

    struct Nuitka_FrameObject *frame_30dcfb49a71496da171aada393946e7a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_08655283cd4621915e1cd0fb3c8c42bd;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cb47fb7eaaa4066fadc815b3863fa272;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_30dcfb49a71496da171aada393946e7a = MAKE_MODULE_FRAME( codeobj_30dcfb49a71496da171aada393946e7a, module_numpy$lib$mixins );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_30dcfb49a71496da171aada393946e7a );
    assert( Py_REFCNT( frame_30dcfb49a71496da171aada393946e7a ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$mixins;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_30dcfb49a71496da171aada393946e7a->m_frame.f_lineno = 4;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$mixins;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_umath_tuple;
    tmp_level_name_2 = const_int_0;
    frame_30dcfb49a71496da171aada393946e7a->m_frame.f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_umath );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um, tmp_assign_source_9 );
    tmp_assign_source_10 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$mixins$$$function_1__disables_array_ufunc(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__disables_array_ufunc, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$mixins$$$function_2__binary_method(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$mixins$$$function_3__reflected_binary_method(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__reflected_binary_method, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$mixins$$$function_4__inplace_binary_method(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__inplace_binary_method, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$mixins$$$function_5__numeric_methods(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$mixins$$$function_6__unary_method(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__unary_method, tmp_assign_source_16 );
    // Tried code:
    tmp_assign_source_18 = const_str_digest_ad40be8057f41bf17b5d8199728b8235;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_18 );
    outline_0_var___module__ = tmp_assign_source_18;

    tmp_assign_source_19 = const_str_digest_fd58b02fb63a24a8cf76b8a0b8099b4c;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_19 );
    outline_0_var___doc__ = tmp_assign_source_19;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2c1464f00a8717291335b7625d790b5_2, codeobj_c2c1464f00a8717291335b7625d790b5, module_numpy$lib$mixins, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c2c1464f00a8717291335b7625d790b5_2 = cache_frame_c2c1464f00a8717291335b7625d790b5_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2c1464f00a8717291335b7625d790b5_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2c1464f00a8717291335b7625d790b5_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description_2 = "ooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description_2 = "ooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_less );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_2 = "ooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_2 = const_str_plain_lt;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_2 = "ooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___lt__ == NULL );
    outline_0_var___lt__ = tmp_assign_source_20;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description_2 = "oooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description_2 = "oooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_less_equal );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "oooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_4 = const_str_plain_le;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "oooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___le__ == NULL );
    outline_0_var___le__ = tmp_assign_source_21;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description_2 = "ooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description_2 = "ooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_equal );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_2 = "ooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_6 = const_str_plain_eq;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_2 = "ooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___eq__ == NULL );
    outline_0_var___eq__ = tmp_assign_source_22;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_2 = "oooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_2 = "oooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_not_equal );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_2 = "oooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_8 = const_str_plain_ne;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_2 = "oooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___ne__ == NULL );
    outline_0_var___ne__ = tmp_assign_source_23;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 149;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 149;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_greater );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_10 = const_str_plain_gt;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___gt__ == NULL );
    outline_0_var___gt__ = tmp_assign_source_24;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_greater_equal );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_12 = const_str_plain_ge;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___ge__ == NULL );
    outline_0_var___ge__ = tmp_assign_source_25;

    // Tried code:
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 153;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_4;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 153;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_4;
    }

    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_add );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_4;
    }
    tmp_args_element_name_14 = const_str_plain_add;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_4;
    }
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_4;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = tmp_assign_source_26;

    // Tried code:
    tmp_unpack_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_27 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 153;
        goto try_except_handler_5;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = tmp_assign_source_27;

    tmp_unpack_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_28 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 153;
        goto try_except_handler_5;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = tmp_assign_source_28;

    tmp_unpack_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_29 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 153;
        goto try_except_handler_5;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = tmp_assign_source_29;

    tmp_iterator_name_1 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 153;
                goto try_except_handler_5;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 153;
        goto try_except_handler_5;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_30 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_30 );
    assert( outline_0_var___add__ == NULL );
    Py_INCREF( tmp_assign_source_30 );
    outline_0_var___add__ = tmp_assign_source_30;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_31 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_31 );
    assert( outline_0_var___radd__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var___radd__ = tmp_assign_source_31;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_32 = tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_32 );
    assert( outline_0_var___iadd__ == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var___iadd__ = tmp_assign_source_32;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_1__element_3 = NULL;

    // Tried code:
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 154;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_6;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 154;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_6;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_subtract );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_6;
    }
    tmp_args_element_name_16 = const_str_plain_sub;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 154;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_6;
    }
    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_6;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = tmp_assign_source_33;

    // Tried code:
    tmp_unpack_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_4, 0 );
    if ( tmp_assign_source_34 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 154;
        goto try_except_handler_7;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = tmp_assign_source_34;

    tmp_unpack_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_5, 1 );
    if ( tmp_assign_source_35 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 154;
        goto try_except_handler_7;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = tmp_assign_source_35;

    tmp_unpack_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_36 = UNPACK_NEXT( tmp_unpack_6, 2 );
    if ( tmp_assign_source_36 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 154;
        goto try_except_handler_7;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = tmp_assign_source_36;

    tmp_iterator_name_2 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 154;
                goto try_except_handler_7;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 154;
        goto try_except_handler_7;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_2;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_37 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_37 );
    assert( outline_0_var___sub__ == NULL );
    Py_INCREF( tmp_assign_source_37 );
    outline_0_var___sub__ = tmp_assign_source_37;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_38 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_38 );
    assert( outline_0_var___rsub__ == NULL );
    Py_INCREF( tmp_assign_source_38 );
    outline_0_var___rsub__ = tmp_assign_source_38;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_39 = tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_39 );
    assert( outline_0_var___isub__ == NULL );
    Py_INCREF( tmp_assign_source_39 );
    outline_0_var___isub__ = tmp_assign_source_39;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_2__element_3 = NULL;

    // Tried code:
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_8;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_8;
    }

    tmp_args_element_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_multiply );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_8;
    }
    tmp_args_element_name_18 = const_str_plain_mul;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_8;
    }
    tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_8;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = tmp_assign_source_40;

    // Tried code:
    tmp_unpack_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_7, 0 );
    if ( tmp_assign_source_41 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 155;
        goto try_except_handler_9;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = tmp_assign_source_41;

    tmp_unpack_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_8, 1 );
    if ( tmp_assign_source_42 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 155;
        goto try_except_handler_9;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = tmp_assign_source_42;

    tmp_unpack_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_43 = UNPACK_NEXT( tmp_unpack_9, 2 );
    if ( tmp_assign_source_43 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 155;
        goto try_except_handler_9;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = tmp_assign_source_43;

    tmp_iterator_name_3 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_iterator_name_3 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 155;
                goto try_except_handler_9;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 155;
        goto try_except_handler_9;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_2;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_44 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_44 );
    assert( outline_0_var___mul__ == NULL );
    Py_INCREF( tmp_assign_source_44 );
    outline_0_var___mul__ = tmp_assign_source_44;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_45 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_45 );
    assert( outline_0_var___rmul__ == NULL );
    Py_INCREF( tmp_assign_source_45 );
    outline_0_var___rmul__ = tmp_assign_source_45;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_2 = NULL;

    tmp_assign_source_46 = tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3;

    CHECK_OBJECT( tmp_assign_source_46 );
    assert( outline_0_var___imul__ == NULL );
    Py_INCREF( tmp_assign_source_46 );
    outline_0_var___imul__ = tmp_assign_source_46;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_3__element_3 = NULL;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 156;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_version_info );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_major );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 156;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 158;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_10;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 158;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_10;
    }

    tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_divide );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_10;
    }
    tmp_args_element_name_20 = const_str_plain_div;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_10;
    }
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_10;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = tmp_assign_source_47;

    // Tried code:
    tmp_unpack_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_48 = UNPACK_NEXT( tmp_unpack_10, 0 );
    if ( tmp_assign_source_48 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 158;
        goto try_except_handler_11;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = tmp_assign_source_48;

    tmp_unpack_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_11, 1 );
    if ( tmp_assign_source_49 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 158;
        goto try_except_handler_11;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = tmp_assign_source_49;

    tmp_unpack_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_12 );
    tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_12, 2 );
    if ( tmp_assign_source_50 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 158;
        goto try_except_handler_11;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = tmp_assign_source_50;

    tmp_iterator_name_4 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_iterator_name_4 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 158;
                goto try_except_handler_11;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 158;
        goto try_except_handler_11;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_2;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_51 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_51 );
    assert( outline_0_var___div__ == NULL );
    Py_INCREF( tmp_assign_source_51 );
    outline_0_var___div__ = tmp_assign_source_51;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_52 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_52 );
    assert( outline_0_var___rdiv__ == NULL );
    Py_INCREF( tmp_assign_source_52 );
    outline_0_var___rdiv__ = tmp_assign_source_52;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_2 = NULL;

    tmp_assign_source_53 = tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3;

    CHECK_OBJECT( tmp_assign_source_53 );
    assert( outline_0_var___idiv__ == NULL );
    Py_INCREF( tmp_assign_source_53 );
    outline_0_var___idiv__ = tmp_assign_source_53;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_4__element_3 = NULL;

    branch_no_1:;
    // Tried code:
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 159;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_12;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_12;
    }

    tmp_args_element_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_true_divide );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_12;
    }
    tmp_args_element_name_22 = const_str_plain_truediv;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_12;
    }
    tmp_assign_source_54 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_12;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = tmp_assign_source_54;

    // Tried code:
    tmp_unpack_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_13 );
    tmp_assign_source_55 = UNPACK_NEXT( tmp_unpack_13, 0 );
    if ( tmp_assign_source_55 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 159;
        goto try_except_handler_13;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = tmp_assign_source_55;

    tmp_unpack_14 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_14 );
    tmp_assign_source_56 = UNPACK_NEXT( tmp_unpack_14, 1 );
    if ( tmp_assign_source_56 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 159;
        goto try_except_handler_13;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = tmp_assign_source_56;

    tmp_unpack_15 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_15 );
    tmp_assign_source_57 = UNPACK_NEXT( tmp_unpack_15, 2 );
    if ( tmp_assign_source_57 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 159;
        goto try_except_handler_13;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = tmp_assign_source_57;

    tmp_iterator_name_5 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_iterator_name_5 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 159;
                goto try_except_handler_13;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 159;
        goto try_except_handler_13;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_12;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_2;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__source_iter = NULL;

    tmp_assign_source_58 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1;

    CHECK_OBJECT( tmp_assign_source_58 );
    assert( outline_0_var___truediv__ == NULL );
    Py_INCREF( tmp_assign_source_58 );
    outline_0_var___truediv__ = tmp_assign_source_58;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_1 = NULL;

    tmp_assign_source_59 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2;

    CHECK_OBJECT( tmp_assign_source_59 );
    assert( outline_0_var___rtruediv__ == NULL );
    Py_INCREF( tmp_assign_source_59 );
    outline_0_var___rtruediv__ = tmp_assign_source_59;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_2 = NULL;

    tmp_assign_source_60 = tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3;

    CHECK_OBJECT( tmp_assign_source_60 );
    assert( outline_0_var___itruediv__ == NULL );
    Py_INCREF( tmp_assign_source_60 );
    outline_0_var___itruediv__ = tmp_assign_source_60;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_5__element_3 = NULL;

    // Tried code:
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 161;
        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_14;
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 162;
        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_14;
    }

    tmp_args_element_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_floor_divide );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_14;
    }
    tmp_args_element_name_24 = const_str_plain_floordiv;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_14;
    }
    tmp_assign_source_61 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_14;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = tmp_assign_source_61;

    // Tried code:
    tmp_unpack_16 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_16 );
    tmp_assign_source_62 = UNPACK_NEXT( tmp_unpack_16, 0 );
    if ( tmp_assign_source_62 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 161;
        goto try_except_handler_15;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = tmp_assign_source_62;

    tmp_unpack_17 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_17 );
    tmp_assign_source_63 = UNPACK_NEXT( tmp_unpack_17, 1 );
    if ( tmp_assign_source_63 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 161;
        goto try_except_handler_15;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = tmp_assign_source_63;

    tmp_unpack_18 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_18 );
    tmp_assign_source_64 = UNPACK_NEXT( tmp_unpack_18, 2 );
    if ( tmp_assign_source_64 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 161;
        goto try_except_handler_15;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = tmp_assign_source_64;

    tmp_iterator_name_6 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_iterator_name_6 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_6 ); assert( HAS_ITERNEXT( tmp_iterator_name_6 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_6 )->tp_iternext)( tmp_iterator_name_6 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 161;
                goto try_except_handler_15;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 161;
        goto try_except_handler_15;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_2;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__source_iter = NULL;

    tmp_assign_source_65 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1;

    CHECK_OBJECT( tmp_assign_source_65 );
    assert( outline_0_var___floordiv__ == NULL );
    Py_INCREF( tmp_assign_source_65 );
    outline_0_var___floordiv__ = tmp_assign_source_65;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_1 = NULL;

    tmp_assign_source_66 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2;

    CHECK_OBJECT( tmp_assign_source_66 );
    assert( outline_0_var___rfloordiv__ == NULL );
    Py_INCREF( tmp_assign_source_66 );
    outline_0_var___rfloordiv__ = tmp_assign_source_66;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_2 = NULL;

    tmp_assign_source_67 = tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3;

    CHECK_OBJECT( tmp_assign_source_67 );
    assert( outline_0_var___ifloordiv__ == NULL );
    Py_INCREF( tmp_assign_source_67 );
    outline_0_var___ifloordiv__ = tmp_assign_source_67;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_6__element_3 = NULL;

    // Tried code:
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_16;
    }

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_16;
    }

    tmp_args_element_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_remainder );
    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_16;
    }
    tmp_args_element_name_26 = const_str_plain_mod;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_args_element_name_25, tmp_args_element_name_26 };
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_16;
    }
    tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_16;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = tmp_assign_source_68;

    // Tried code:
    tmp_unpack_19 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_19 );
    tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_19, 0 );
    if ( tmp_assign_source_69 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 163;
        goto try_except_handler_17;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = tmp_assign_source_69;

    tmp_unpack_20 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_20 );
    tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_20, 1 );
    if ( tmp_assign_source_70 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 163;
        goto try_except_handler_17;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = tmp_assign_source_70;

    tmp_unpack_21 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_21 );
    tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_21, 2 );
    if ( tmp_assign_source_71 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 163;
        goto try_except_handler_17;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = tmp_assign_source_71;

    tmp_iterator_name_7 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_iterator_name_7 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_7 ); assert( HAS_ITERNEXT( tmp_iterator_name_7 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_7 )->tp_iternext)( tmp_iterator_name_7 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 163;
                goto try_except_handler_17;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 163;
        goto try_except_handler_17;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_2;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__source_iter = NULL;

    tmp_assign_source_72 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1;

    CHECK_OBJECT( tmp_assign_source_72 );
    assert( outline_0_var___mod__ == NULL );
    Py_INCREF( tmp_assign_source_72 );
    outline_0_var___mod__ = tmp_assign_source_72;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_1 = NULL;

    tmp_assign_source_73 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2;

    CHECK_OBJECT( tmp_assign_source_73 );
    assert( outline_0_var___rmod__ == NULL );
    Py_INCREF( tmp_assign_source_73 );
    outline_0_var___rmod__ = tmp_assign_source_73;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_2 = NULL;

    tmp_assign_source_74 = tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3;

    CHECK_OBJECT( tmp_assign_source_74 );
    assert( outline_0_var___imod__ == NULL );
    Py_INCREF( tmp_assign_source_74 );
    outline_0_var___imod__ = tmp_assign_source_74;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_7__element_3 = NULL;

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__binary_method );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__binary_method );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_binary_method" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description_2 = "oooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description_2 = "oooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_divmod );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_2 = "oooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_28 = const_str_plain_divmod;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28 };
        tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_2 = "oooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___divmod__ == NULL );
    outline_0_var___divmod__ = tmp_assign_source_75;

    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__reflected_binary_method );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__reflected_binary_method );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_reflected_binary_method" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description_2 = "ooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 165;
        type_description_2 = "ooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_divmod );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_2 = "ooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_30 = const_str_plain_divmod;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30 };
        tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_2 = "ooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___rdivmod__ == NULL );
    outline_0_var___rdivmod__ = tmp_assign_source_76;

    // Tried code:
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_18;
    }

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 168;
        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_18;
    }

    tmp_args_element_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_power );
    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_18;
    }
    tmp_args_element_name_32 = const_str_plain_pow;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
        tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_iter_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_18;
    }
    tmp_assign_source_77 = MAKE_ITERATOR( tmp_iter_arg_8 );
    Py_DECREF( tmp_iter_arg_8 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_18;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = tmp_assign_source_77;

    // Tried code:
    tmp_unpack_22 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_22 );
    tmp_assign_source_78 = UNPACK_NEXT( tmp_unpack_22, 0 );
    if ( tmp_assign_source_78 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 168;
        goto try_except_handler_19;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = tmp_assign_source_78;

    tmp_unpack_23 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_23 );
    tmp_assign_source_79 = UNPACK_NEXT( tmp_unpack_23, 1 );
    if ( tmp_assign_source_79 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 168;
        goto try_except_handler_19;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = tmp_assign_source_79;

    tmp_unpack_24 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_24 );
    tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_24, 2 );
    if ( tmp_assign_source_80 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 168;
        goto try_except_handler_19;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = tmp_assign_source_80;

    tmp_iterator_name_8 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_iterator_name_8 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_8 ); assert( HAS_ITERNEXT( tmp_iterator_name_8 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_8 )->tp_iternext)( tmp_iterator_name_8 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 168;
                goto try_except_handler_19;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 168;
        goto try_except_handler_19;
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_18;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_2;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__source_iter = NULL;

    tmp_assign_source_81 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1;

    CHECK_OBJECT( tmp_assign_source_81 );
    assert( outline_0_var___pow__ == NULL );
    Py_INCREF( tmp_assign_source_81 );
    outline_0_var___pow__ = tmp_assign_source_81;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_1 = NULL;

    tmp_assign_source_82 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2;

    CHECK_OBJECT( tmp_assign_source_82 );
    assert( outline_0_var___rpow__ == NULL );
    Py_INCREF( tmp_assign_source_82 );
    outline_0_var___rpow__ = tmp_assign_source_82;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_2 = NULL;

    tmp_assign_source_83 = tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3;

    CHECK_OBJECT( tmp_assign_source_83 );
    assert( outline_0_var___ipow__ == NULL );
    Py_INCREF( tmp_assign_source_83 );
    outline_0_var___ipow__ = tmp_assign_source_83;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_8__element_3 = NULL;

    // Tried code:
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 169;
        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_20;
    }

    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 170;
        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_20;
    }

    tmp_args_element_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_left_shift );
    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_20;
    }
    tmp_args_element_name_34 = const_str_plain_lshift;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
        tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_20;
    }
    tmp_assign_source_84 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        goto try_except_handler_20;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = tmp_assign_source_84;

    // Tried code:
    tmp_unpack_25 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_unpack_25 );
    tmp_assign_source_85 = UNPACK_NEXT( tmp_unpack_25, 0 );
    if ( tmp_assign_source_85 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 169;
        goto try_except_handler_21;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = tmp_assign_source_85;

    tmp_unpack_26 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_unpack_26 );
    tmp_assign_source_86 = UNPACK_NEXT( tmp_unpack_26, 1 );
    if ( tmp_assign_source_86 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 169;
        goto try_except_handler_21;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = tmp_assign_source_86;

    tmp_unpack_27 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_unpack_27 );
    tmp_assign_source_87 = UNPACK_NEXT( tmp_unpack_27, 2 );
    if ( tmp_assign_source_87 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 169;
        goto try_except_handler_21;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = tmp_assign_source_87;

    tmp_iterator_name_9 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_iterator_name_9 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_9 ); assert( HAS_ITERNEXT( tmp_iterator_name_9 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_9 )->tp_iternext)( tmp_iterator_name_9 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
                exception_lineno = 169;
                goto try_except_handler_21;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNNNNN";
        exception_lineno = 169;
        goto try_except_handler_21;
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_20;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_2;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__source_iter = NULL;

    tmp_assign_source_88 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1;

    CHECK_OBJECT( tmp_assign_source_88 );
    assert( outline_0_var___lshift__ == NULL );
    Py_INCREF( tmp_assign_source_88 );
    outline_0_var___lshift__ = tmp_assign_source_88;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_1 = NULL;

    tmp_assign_source_89 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2;

    CHECK_OBJECT( tmp_assign_source_89 );
    assert( outline_0_var___rlshift__ == NULL );
    Py_INCREF( tmp_assign_source_89 );
    outline_0_var___rlshift__ = tmp_assign_source_89;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_2 = NULL;

    tmp_assign_source_90 = tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3;

    CHECK_OBJECT( tmp_assign_source_90 );
    assert( outline_0_var___ilshift__ == NULL );
    Py_INCREF( tmp_assign_source_90 );
    outline_0_var___ilshift__ = tmp_assign_source_90;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_9__element_3 = NULL;

    // Tried code:
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 171;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        goto try_except_handler_22;
    }

    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 172;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        goto try_except_handler_22;
    }

    tmp_args_element_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_right_shift );
    if ( tmp_args_element_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        goto try_except_handler_22;
    }
    tmp_args_element_name_36 = const_str_plain_rshift;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36 };
        tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_iter_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        goto try_except_handler_22;
    }
    tmp_assign_source_91 = MAKE_ITERATOR( tmp_iter_arg_10 );
    Py_DECREF( tmp_iter_arg_10 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        goto try_except_handler_22;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = tmp_assign_source_91;

    // Tried code:
    tmp_unpack_28 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_28 );
    tmp_assign_source_92 = UNPACK_NEXT( tmp_unpack_28, 0 );
    if ( tmp_assign_source_92 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        exception_lineno = 171;
        goto try_except_handler_23;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = tmp_assign_source_92;

    tmp_unpack_29 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_29 );
    tmp_assign_source_93 = UNPACK_NEXT( tmp_unpack_29, 1 );
    if ( tmp_assign_source_93 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        exception_lineno = 171;
        goto try_except_handler_23;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = tmp_assign_source_93;

    tmp_unpack_30 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_30 );
    tmp_assign_source_94 = UNPACK_NEXT( tmp_unpack_30, 2 );
    if ( tmp_assign_source_94 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        exception_lineno = 171;
        goto try_except_handler_23;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = tmp_assign_source_94;

    tmp_iterator_name_10 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_iterator_name_10 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_10 ); assert( HAS_ITERNEXT( tmp_iterator_name_10 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_10 )->tp_iternext)( tmp_iterator_name_10 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
                exception_lineno = 171;
                goto try_except_handler_23;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNNNNN";
        exception_lineno = 171;
        goto try_except_handler_23;
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_22;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_2;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__source_iter = NULL;

    tmp_assign_source_95 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1;

    CHECK_OBJECT( tmp_assign_source_95 );
    assert( outline_0_var___rshift__ == NULL );
    Py_INCREF( tmp_assign_source_95 );
    outline_0_var___rshift__ = tmp_assign_source_95;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_1 = NULL;

    tmp_assign_source_96 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2;

    CHECK_OBJECT( tmp_assign_source_96 );
    assert( outline_0_var___rrshift__ == NULL );
    Py_INCREF( tmp_assign_source_96 );
    outline_0_var___rrshift__ = tmp_assign_source_96;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_2 = NULL;

    tmp_assign_source_97 = tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3;

    CHECK_OBJECT( tmp_assign_source_97 );
    assert( outline_0_var___irshift__ == NULL );
    Py_INCREF( tmp_assign_source_97 );
    outline_0_var___irshift__ = tmp_assign_source_97;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_10__element_3 = NULL;

    // Tried code:
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        goto try_except_handler_24;
    }

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        goto try_except_handler_24;
    }

    tmp_args_element_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_bitwise_and );
    if ( tmp_args_element_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        goto try_except_handler_24;
    }
    tmp_args_element_name_38 = const_str_plain_and;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38 };
        tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_iter_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        goto try_except_handler_24;
    }
    tmp_assign_source_98 = MAKE_ITERATOR( tmp_iter_arg_11 );
    Py_DECREF( tmp_iter_arg_11 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        goto try_except_handler_24;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = tmp_assign_source_98;

    // Tried code:
    tmp_unpack_31 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_unpack_31 );
    tmp_assign_source_99 = UNPACK_NEXT( tmp_unpack_31, 0 );
    if ( tmp_assign_source_99 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        exception_lineno = 173;
        goto try_except_handler_25;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = tmp_assign_source_99;

    tmp_unpack_32 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_unpack_32 );
    tmp_assign_source_100 = UNPACK_NEXT( tmp_unpack_32, 1 );
    if ( tmp_assign_source_100 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        exception_lineno = 173;
        goto try_except_handler_25;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = tmp_assign_source_100;

    tmp_unpack_33 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_unpack_33 );
    tmp_assign_source_101 = UNPACK_NEXT( tmp_unpack_33, 2 );
    if ( tmp_assign_source_101 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        exception_lineno = 173;
        goto try_except_handler_25;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = tmp_assign_source_101;

    tmp_iterator_name_11 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_iterator_name_11 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_11 ); assert( HAS_ITERNEXT( tmp_iterator_name_11 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_11 )->tp_iternext)( tmp_iterator_name_11 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
                exception_lineno = 173;
                goto try_except_handler_25;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooNNNNNNNNNNNNN";
        exception_lineno = 173;
        goto try_except_handler_25;
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_24;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_2;
    // End of try:
    try_end_23:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__source_iter = NULL;

    tmp_assign_source_102 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1;

    CHECK_OBJECT( tmp_assign_source_102 );
    assert( outline_0_var___and__ == NULL );
    Py_INCREF( tmp_assign_source_102 );
    outline_0_var___and__ = tmp_assign_source_102;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_1 = NULL;

    tmp_assign_source_103 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2;

    CHECK_OBJECT( tmp_assign_source_103 );
    assert( outline_0_var___rand__ == NULL );
    Py_INCREF( tmp_assign_source_103 );
    outline_0_var___rand__ = tmp_assign_source_103;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_2 = NULL;

    tmp_assign_source_104 = tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3;

    CHECK_OBJECT( tmp_assign_source_104 );
    assert( outline_0_var___iand__ == NULL );
    Py_INCREF( tmp_assign_source_104 );
    outline_0_var___iand__ = tmp_assign_source_104;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_11__element_3 = NULL;

    // Tried code:
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 174;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        goto try_except_handler_26;
    }

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 174;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        goto try_except_handler_26;
    }

    tmp_args_element_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_bitwise_xor );
    if ( tmp_args_element_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        goto try_except_handler_26;
    }
    tmp_args_element_name_40 = const_str_plain_xor;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_39, tmp_args_element_name_40 };
        tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_iter_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        goto try_except_handler_26;
    }
    tmp_assign_source_105 = MAKE_ITERATOR( tmp_iter_arg_12 );
    Py_DECREF( tmp_iter_arg_12 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        goto try_except_handler_26;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = tmp_assign_source_105;

    // Tried code:
    tmp_unpack_34 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;

    CHECK_OBJECT( tmp_unpack_34 );
    tmp_assign_source_106 = UNPACK_NEXT( tmp_unpack_34, 0 );
    if ( tmp_assign_source_106 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        exception_lineno = 174;
        goto try_except_handler_27;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = tmp_assign_source_106;

    tmp_unpack_35 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;

    CHECK_OBJECT( tmp_unpack_35 );
    tmp_assign_source_107 = UNPACK_NEXT( tmp_unpack_35, 1 );
    if ( tmp_assign_source_107 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        exception_lineno = 174;
        goto try_except_handler_27;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = tmp_assign_source_107;

    tmp_unpack_36 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;

    CHECK_OBJECT( tmp_unpack_36 );
    tmp_assign_source_108 = UNPACK_NEXT( tmp_unpack_36, 2 );
    if ( tmp_assign_source_108 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        exception_lineno = 174;
        goto try_except_handler_27;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = tmp_assign_source_108;

    tmp_iterator_name_12 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter;

    CHECK_OBJECT( tmp_iterator_name_12 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_12 ); assert( HAS_ITERNEXT( tmp_iterator_name_12 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_12 )->tp_iternext)( tmp_iterator_name_12 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
                exception_lineno = 174;
                goto try_except_handler_27;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooNNNNNNNNNN";
        exception_lineno = 174;
        goto try_except_handler_27;
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_26;
    // End of try:
    try_end_24:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_2;
    // End of try:
    try_end_25:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__source_iter = NULL;

    tmp_assign_source_109 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1;

    CHECK_OBJECT( tmp_assign_source_109 );
    assert( outline_0_var___xor__ == NULL );
    Py_INCREF( tmp_assign_source_109 );
    outline_0_var___xor__ = tmp_assign_source_109;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_1 = NULL;

    tmp_assign_source_110 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2;

    CHECK_OBJECT( tmp_assign_source_110 );
    assert( outline_0_var___rxor__ == NULL );
    Py_INCREF( tmp_assign_source_110 );
    outline_0_var___rxor__ = tmp_assign_source_110;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_2 = NULL;

    tmp_assign_source_111 = tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3;

    CHECK_OBJECT( tmp_assign_source_111 );
    assert( outline_0_var___ixor__ == NULL );
    Py_INCREF( tmp_assign_source_111 );
    outline_0_var___ixor__ = tmp_assign_source_111;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_12__element_3 = NULL;

    // Tried code:
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__numeric_methods );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numeric_methods );
    }

    if ( tmp_called_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numeric_methods" );
        exception_tb = NULL;

        exception_lineno = 175;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        goto try_except_handler_28;
    }

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 175;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        goto try_except_handler_28;
    }

    tmp_args_element_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_bitwise_or );
    if ( tmp_args_element_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        goto try_except_handler_28;
    }
    tmp_args_element_name_42 = const_str_plain_or;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_41, tmp_args_element_name_42 };
        tmp_iter_arg_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_iter_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        goto try_except_handler_28;
    }
    tmp_assign_source_112 = MAKE_ITERATOR( tmp_iter_arg_13 );
    Py_DECREF( tmp_iter_arg_13 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        goto try_except_handler_28;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = tmp_assign_source_112;

    // Tried code:
    tmp_unpack_37 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;

    CHECK_OBJECT( tmp_unpack_37 );
    tmp_assign_source_113 = UNPACK_NEXT( tmp_unpack_37, 0 );
    if ( tmp_assign_source_113 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        exception_lineno = 175;
        goto try_except_handler_29;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = tmp_assign_source_113;

    tmp_unpack_38 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;

    CHECK_OBJECT( tmp_unpack_38 );
    tmp_assign_source_114 = UNPACK_NEXT( tmp_unpack_38, 1 );
    if ( tmp_assign_source_114 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        exception_lineno = 175;
        goto try_except_handler_29;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = tmp_assign_source_114;

    tmp_unpack_39 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;

    CHECK_OBJECT( tmp_unpack_39 );
    tmp_assign_source_115 = UNPACK_NEXT( tmp_unpack_39, 2 );
    if ( tmp_assign_source_115 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        exception_lineno = 175;
        goto try_except_handler_29;
    }
    assert( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 == NULL );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = tmp_assign_source_115;

    tmp_iterator_name_13 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter;

    CHECK_OBJECT( tmp_iterator_name_13 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_13 ); assert( HAS_ITERNEXT( tmp_iterator_name_13 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_13 )->tp_iternext)( tmp_iterator_name_13 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
                exception_lineno = 175;
                goto try_except_handler_29;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooNNNNNNN";
        exception_lineno = 175;
        goto try_except_handler_29;
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_28;
    // End of try:
    try_end_26:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_2;
    // End of try:
    try_end_27:;
    CHECK_OBJECT( (PyObject *)tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter );
    Py_DECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__source_iter = NULL;

    tmp_assign_source_116 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1;

    CHECK_OBJECT( tmp_assign_source_116 );
    assert( outline_0_var___or__ == NULL );
    Py_INCREF( tmp_assign_source_116 );
    outline_0_var___or__ = tmp_assign_source_116;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_1 = NULL;

    tmp_assign_source_117 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2;

    CHECK_OBJECT( tmp_assign_source_117 );
    assert( outline_0_var___ror__ == NULL );
    Py_INCREF( tmp_assign_source_117 );
    outline_0_var___ror__ = tmp_assign_source_117;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_2 = NULL;

    tmp_assign_source_118 = tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3;

    CHECK_OBJECT( tmp_assign_source_118 );
    assert( outline_0_var___ior__ == NULL );
    Py_INCREF( tmp_assign_source_118 );
    outline_0_var___ior__ = tmp_assign_source_118;

    Py_XDECREF( tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 );
    tmp_NDArrayOperatorsMixin$tuple_unpack_13__element_3 = NULL;

    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__unary_method );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_method );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_unary_method" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooNNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_negative );
    if ( tmp_args_element_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooNNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_44 = const_str_plain_neg;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_43, tmp_args_element_name_44 };
        tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_args_element_name_43 );
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___neg__ == NULL );
    outline_0_var___neg__ = tmp_assign_source_119;

    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__unary_method );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_method );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_unary_method" );
        exception_tb = NULL;

        exception_lineno = 179;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooNNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 179;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_positive );
    if ( tmp_args_element_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooNNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_46 = const_str_plain_pos;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_45, tmp_args_element_name_46 };
        tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_args_element_name_45 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___pos__ == NULL );
    outline_0_var___pos__ = tmp_assign_source_120;

    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__unary_method );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_method );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_unary_method" );
        exception_tb = NULL;

        exception_lineno = 180;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooooNN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 180;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooooNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_absolute );
    if ( tmp_args_element_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooooNN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_48 = const_str_plain_abs;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_47, tmp_args_element_name_48 };
        tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_args_element_name_47 );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___abs__ == NULL );
    outline_0_var___abs__ = tmp_assign_source_121;

    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain__unary_method );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unary_method );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_unary_method" );
        exception_tb = NULL;

        exception_lineno = 181;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooN";
        goto frame_exception_exit_2;
    }

    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 181;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_invert );
    if ( tmp_args_element_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooN";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_50 = const_str_plain_invert;
    frame_c2c1464f00a8717291335b7625d790b5_2->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_49, tmp_args_element_name_50 };
        tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_args_element_name_49 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___invert__ == NULL );
    outline_0_var___invert__ = tmp_assign_source_122;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2c1464f00a8717291335b7625d790b5_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2c1464f00a8717291335b7625d790b5_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2c1464f00a8717291335b7625d790b5_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2c1464f00a8717291335b7625d790b5_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2c1464f00a8717291335b7625d790b5_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2c1464f00a8717291335b7625d790b5_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var___lt__,
        outline_0_var___le__,
        outline_0_var___eq__,
        outline_0_var___ne__,
        outline_0_var___gt__,
        outline_0_var___ge__,
        outline_0_var___add__,
        outline_0_var___radd__,
        outline_0_var___iadd__,
        outline_0_var___sub__,
        outline_0_var___rsub__,
        outline_0_var___isub__,
        outline_0_var___mul__,
        outline_0_var___rmul__,
        outline_0_var___imul__,
        outline_0_var___div__,
        outline_0_var___rdiv__,
        outline_0_var___idiv__,
        outline_0_var___truediv__,
        outline_0_var___rtruediv__,
        outline_0_var___itruediv__,
        outline_0_var___floordiv__,
        outline_0_var___rfloordiv__,
        outline_0_var___ifloordiv__,
        outline_0_var___mod__,
        outline_0_var___rmod__,
        outline_0_var___imod__,
        outline_0_var___divmod__,
        outline_0_var___rdivmod__,
        outline_0_var___pow__,
        outline_0_var___rpow__,
        outline_0_var___ipow__,
        outline_0_var___lshift__,
        outline_0_var___rlshift__,
        outline_0_var___ilshift__,
        outline_0_var___rshift__,
        outline_0_var___rrshift__,
        outline_0_var___irshift__,
        outline_0_var___and__,
        outline_0_var___rand__,
        outline_0_var___iand__,
        outline_0_var___xor__,
        outline_0_var___rxor__,
        outline_0_var___ixor__,
        outline_0_var___or__,
        outline_0_var___ror__,
        outline_0_var___ior__,
        outline_0_var___neg__,
        outline_0_var___pos__,
        outline_0_var___abs__,
        outline_0_var___invert__
    );


    // Release cached frame.
    if ( frame_c2c1464f00a8717291335b7625d790b5_2 == cache_frame_c2c1464f00a8717291335b7625d790b5_2 )
    {
        Py_DECREF( frame_c2c1464f00a8717291335b7625d790b5_2 );
    }
    cache_frame_c2c1464f00a8717291335b7625d790b5_2 = NULL;

    assertFrameObject( frame_c2c1464f00a8717291335b7625d790b5_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = PyDict_New();
    if ( outline_0_var___module__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___module__,
            outline_0_var___module__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___doc__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___doc__,
            outline_0_var___doc__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___lt__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___lt__,
            outline_0_var___lt__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___le__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___le__,
            outline_0_var___le__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___eq__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___eq__,
            outline_0_var___eq__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ne__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ne__,
            outline_0_var___ne__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___gt__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___gt__,
            outline_0_var___gt__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ge__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ge__,
            outline_0_var___ge__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___add__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___add__,
            outline_0_var___add__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___radd__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___radd__,
            outline_0_var___radd__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___iadd__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___iadd__,
            outline_0_var___iadd__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___sub__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___sub__,
            outline_0_var___sub__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rsub__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rsub__,
            outline_0_var___rsub__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___isub__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___isub__,
            outline_0_var___isub__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___mul__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___mul__,
            outline_0_var___mul__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rmul__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rmul__,
            outline_0_var___rmul__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___imul__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___imul__,
            outline_0_var___imul__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___div__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___div__,
            outline_0_var___div__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rdiv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rdiv__,
            outline_0_var___rdiv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___idiv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___idiv__,
            outline_0_var___idiv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___truediv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___truediv__,
            outline_0_var___truediv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rtruediv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rtruediv__,
            outline_0_var___rtruediv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___itruediv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___itruediv__,
            outline_0_var___itruediv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___floordiv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___floordiv__,
            outline_0_var___floordiv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rfloordiv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rfloordiv__,
            outline_0_var___rfloordiv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ifloordiv__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ifloordiv__,
            outline_0_var___ifloordiv__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___mod__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___mod__,
            outline_0_var___mod__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rmod__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rmod__,
            outline_0_var___rmod__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___imod__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___imod__,
            outline_0_var___imod__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___divmod__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___divmod__,
            outline_0_var___divmod__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rdivmod__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rdivmod__,
            outline_0_var___rdivmod__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___pow__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___pow__,
            outline_0_var___pow__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rpow__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rpow__,
            outline_0_var___rpow__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ipow__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ipow__,
            outline_0_var___ipow__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___lshift__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___lshift__,
            outline_0_var___lshift__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rlshift__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rlshift__,
            outline_0_var___rlshift__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ilshift__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ilshift__,
            outline_0_var___ilshift__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rshift__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rshift__,
            outline_0_var___rshift__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rrshift__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rrshift__,
            outline_0_var___rrshift__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___irshift__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___irshift__,
            outline_0_var___irshift__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___and__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___and__,
            outline_0_var___and__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rand__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rand__,
            outline_0_var___rand__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___iand__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___iand__,
            outline_0_var___iand__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___xor__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___xor__,
            outline_0_var___xor__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___rxor__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___rxor__,
            outline_0_var___rxor__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ixor__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ixor__,
            outline_0_var___ixor__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___or__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___or__,
            outline_0_var___or__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ror__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ror__,
            outline_0_var___ror__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___ior__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___ior__,
            outline_0_var___ior__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___neg__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___neg__,
            outline_0_var___neg__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___pos__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___pos__,
            outline_0_var___pos__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___abs__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___abs__,
            outline_0_var___abs__
        );

        assert( res == 0 );
    }

    if ( outline_0_var___invert__ != NULL )
    {
        int res = PyDict_SetItem(
            tmp_outline_return_value_1,
            const_str_plain___invert__,
            outline_0_var___invert__
        );

        assert( res == 0 );
    }

    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___lt__ );
    Py_DECREF( outline_0_var___lt__ );
    outline_0_var___lt__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___le__ );
    Py_DECREF( outline_0_var___le__ );
    outline_0_var___le__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___eq__ );
    Py_DECREF( outline_0_var___eq__ );
    outline_0_var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ne__ );
    Py_DECREF( outline_0_var___ne__ );
    outline_0_var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___gt__ );
    Py_DECREF( outline_0_var___gt__ );
    outline_0_var___gt__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ge__ );
    Py_DECREF( outline_0_var___ge__ );
    outline_0_var___ge__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___add__ );
    Py_DECREF( outline_0_var___add__ );
    outline_0_var___add__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___radd__ );
    Py_DECREF( outline_0_var___radd__ );
    outline_0_var___radd__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___iadd__ );
    Py_DECREF( outline_0_var___iadd__ );
    outline_0_var___iadd__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___sub__ );
    Py_DECREF( outline_0_var___sub__ );
    outline_0_var___sub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rsub__ );
    Py_DECREF( outline_0_var___rsub__ );
    outline_0_var___rsub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___isub__ );
    Py_DECREF( outline_0_var___isub__ );
    outline_0_var___isub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___mul__ );
    Py_DECREF( outline_0_var___mul__ );
    outline_0_var___mul__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rmul__ );
    Py_DECREF( outline_0_var___rmul__ );
    outline_0_var___rmul__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___imul__ );
    Py_DECREF( outline_0_var___imul__ );
    outline_0_var___imul__ = NULL;

    Py_XDECREF( outline_0_var___div__ );
    outline_0_var___div__ = NULL;

    Py_XDECREF( outline_0_var___rdiv__ );
    outline_0_var___rdiv__ = NULL;

    Py_XDECREF( outline_0_var___idiv__ );
    outline_0_var___idiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___truediv__ );
    Py_DECREF( outline_0_var___truediv__ );
    outline_0_var___truediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rtruediv__ );
    Py_DECREF( outline_0_var___rtruediv__ );
    outline_0_var___rtruediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___itruediv__ );
    Py_DECREF( outline_0_var___itruediv__ );
    outline_0_var___itruediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___floordiv__ );
    Py_DECREF( outline_0_var___floordiv__ );
    outline_0_var___floordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rfloordiv__ );
    Py_DECREF( outline_0_var___rfloordiv__ );
    outline_0_var___rfloordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ifloordiv__ );
    Py_DECREF( outline_0_var___ifloordiv__ );
    outline_0_var___ifloordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___mod__ );
    Py_DECREF( outline_0_var___mod__ );
    outline_0_var___mod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rmod__ );
    Py_DECREF( outline_0_var___rmod__ );
    outline_0_var___rmod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___imod__ );
    Py_DECREF( outline_0_var___imod__ );
    outline_0_var___imod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___divmod__ );
    Py_DECREF( outline_0_var___divmod__ );
    outline_0_var___divmod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rdivmod__ );
    Py_DECREF( outline_0_var___rdivmod__ );
    outline_0_var___rdivmod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___pow__ );
    Py_DECREF( outline_0_var___pow__ );
    outline_0_var___pow__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rpow__ );
    Py_DECREF( outline_0_var___rpow__ );
    outline_0_var___rpow__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ipow__ );
    Py_DECREF( outline_0_var___ipow__ );
    outline_0_var___ipow__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___lshift__ );
    Py_DECREF( outline_0_var___lshift__ );
    outline_0_var___lshift__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rlshift__ );
    Py_DECREF( outline_0_var___rlshift__ );
    outline_0_var___rlshift__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ilshift__ );
    Py_DECREF( outline_0_var___ilshift__ );
    outline_0_var___ilshift__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rshift__ );
    Py_DECREF( outline_0_var___rshift__ );
    outline_0_var___rshift__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rrshift__ );
    Py_DECREF( outline_0_var___rrshift__ );
    outline_0_var___rrshift__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___irshift__ );
    Py_DECREF( outline_0_var___irshift__ );
    outline_0_var___irshift__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___and__ );
    Py_DECREF( outline_0_var___and__ );
    outline_0_var___and__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rand__ );
    Py_DECREF( outline_0_var___rand__ );
    outline_0_var___rand__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___iand__ );
    Py_DECREF( outline_0_var___iand__ );
    outline_0_var___iand__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___xor__ );
    Py_DECREF( outline_0_var___xor__ );
    outline_0_var___xor__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rxor__ );
    Py_DECREF( outline_0_var___rxor__ );
    outline_0_var___rxor__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ixor__ );
    Py_DECREF( outline_0_var___ixor__ );
    outline_0_var___ixor__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___or__ );
    Py_DECREF( outline_0_var___or__ );
    outline_0_var___or__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ror__ );
    Py_DECREF( outline_0_var___ror__ );
    outline_0_var___ror__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ior__ );
    Py_DECREF( outline_0_var___ior__ );
    outline_0_var___ior__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___neg__ );
    Py_DECREF( outline_0_var___neg__ );
    outline_0_var___neg__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___pos__ );
    Py_DECREF( outline_0_var___pos__ );
    outline_0_var___pos__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___abs__ );
    Py_DECREF( outline_0_var___abs__ );
    outline_0_var___abs__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___invert__ );
    Py_DECREF( outline_0_var___invert__ );
    outline_0_var___invert__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___lt__ );
    outline_0_var___lt__ = NULL;

    Py_XDECREF( outline_0_var___le__ );
    outline_0_var___le__ = NULL;

    Py_XDECREF( outline_0_var___eq__ );
    outline_0_var___eq__ = NULL;

    Py_XDECREF( outline_0_var___ne__ );
    outline_0_var___ne__ = NULL;

    Py_XDECREF( outline_0_var___gt__ );
    outline_0_var___gt__ = NULL;

    Py_XDECREF( outline_0_var___ge__ );
    outline_0_var___ge__ = NULL;

    Py_XDECREF( outline_0_var___add__ );
    outline_0_var___add__ = NULL;

    Py_XDECREF( outline_0_var___radd__ );
    outline_0_var___radd__ = NULL;

    Py_XDECREF( outline_0_var___iadd__ );
    outline_0_var___iadd__ = NULL;

    Py_XDECREF( outline_0_var___sub__ );
    outline_0_var___sub__ = NULL;

    Py_XDECREF( outline_0_var___rsub__ );
    outline_0_var___rsub__ = NULL;

    Py_XDECREF( outline_0_var___isub__ );
    outline_0_var___isub__ = NULL;

    Py_XDECREF( outline_0_var___mul__ );
    outline_0_var___mul__ = NULL;

    Py_XDECREF( outline_0_var___rmul__ );
    outline_0_var___rmul__ = NULL;

    Py_XDECREF( outline_0_var___imul__ );
    outline_0_var___imul__ = NULL;

    Py_XDECREF( outline_0_var___div__ );
    outline_0_var___div__ = NULL;

    Py_XDECREF( outline_0_var___rdiv__ );
    outline_0_var___rdiv__ = NULL;

    Py_XDECREF( outline_0_var___idiv__ );
    outline_0_var___idiv__ = NULL;

    Py_XDECREF( outline_0_var___truediv__ );
    outline_0_var___truediv__ = NULL;

    Py_XDECREF( outline_0_var___rtruediv__ );
    outline_0_var___rtruediv__ = NULL;

    Py_XDECREF( outline_0_var___itruediv__ );
    outline_0_var___itruediv__ = NULL;

    Py_XDECREF( outline_0_var___floordiv__ );
    outline_0_var___floordiv__ = NULL;

    Py_XDECREF( outline_0_var___rfloordiv__ );
    outline_0_var___rfloordiv__ = NULL;

    Py_XDECREF( outline_0_var___ifloordiv__ );
    outline_0_var___ifloordiv__ = NULL;

    Py_XDECREF( outline_0_var___mod__ );
    outline_0_var___mod__ = NULL;

    Py_XDECREF( outline_0_var___rmod__ );
    outline_0_var___rmod__ = NULL;

    Py_XDECREF( outline_0_var___imod__ );
    outline_0_var___imod__ = NULL;

    Py_XDECREF( outline_0_var___divmod__ );
    outline_0_var___divmod__ = NULL;

    Py_XDECREF( outline_0_var___rdivmod__ );
    outline_0_var___rdivmod__ = NULL;

    Py_XDECREF( outline_0_var___pow__ );
    outline_0_var___pow__ = NULL;

    Py_XDECREF( outline_0_var___rpow__ );
    outline_0_var___rpow__ = NULL;

    Py_XDECREF( outline_0_var___ipow__ );
    outline_0_var___ipow__ = NULL;

    Py_XDECREF( outline_0_var___lshift__ );
    outline_0_var___lshift__ = NULL;

    Py_XDECREF( outline_0_var___rlshift__ );
    outline_0_var___rlshift__ = NULL;

    Py_XDECREF( outline_0_var___ilshift__ );
    outline_0_var___ilshift__ = NULL;

    Py_XDECREF( outline_0_var___rshift__ );
    outline_0_var___rshift__ = NULL;

    Py_XDECREF( outline_0_var___rrshift__ );
    outline_0_var___rrshift__ = NULL;

    Py_XDECREF( outline_0_var___irshift__ );
    outline_0_var___irshift__ = NULL;

    Py_XDECREF( outline_0_var___and__ );
    outline_0_var___and__ = NULL;

    Py_XDECREF( outline_0_var___rand__ );
    outline_0_var___rand__ = NULL;

    Py_XDECREF( outline_0_var___iand__ );
    outline_0_var___iand__ = NULL;

    Py_XDECREF( outline_0_var___xor__ );
    outline_0_var___xor__ = NULL;

    Py_XDECREF( outline_0_var___rxor__ );
    outline_0_var___rxor__ = NULL;

    Py_XDECREF( outline_0_var___ixor__ );
    outline_0_var___ixor__ = NULL;

    Py_XDECREF( outline_0_var___or__ );
    outline_0_var___or__ = NULL;

    Py_XDECREF( outline_0_var___ror__ );
    outline_0_var___ror__ = NULL;

    Py_XDECREF( outline_0_var___ior__ );
    outline_0_var___ior__ = NULL;

    Py_XDECREF( outline_0_var___neg__ );
    outline_0_var___neg__ = NULL;

    Py_XDECREF( outline_0_var___pos__ );
    outline_0_var___pos__ = NULL;

    Py_XDECREF( outline_0_var___abs__ );
    outline_0_var___abs__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$mixins );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 63;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_17 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_17;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_123 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_123 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_123 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_123;

    tmp_called_name_26 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_args_element_name_51 = const_str_plain_NDArrayOperatorsMixin;
    tmp_args_element_name_52 = const_tuple_type_object_tuple;
    tmp_args_element_name_53 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_53 );
    frame_30dcfb49a71496da171aada393946e7a->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_51, tmp_args_element_name_52, tmp_args_element_name_53 };
        tmp_assign_source_124 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, call_args );
    }

    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_124;

    goto try_end_28;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30dcfb49a71496da171aada393946e7a );
#endif
    popFrameStack();

    assertFrameObject( frame_30dcfb49a71496da171aada393946e7a );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_30dcfb49a71496da171aada393946e7a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_30dcfb49a71496da171aada393946e7a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_30dcfb49a71496da171aada393946e7a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_30dcfb49a71496da171aada393946e7a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_125 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_125 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$mixins, (Nuitka_StringObject *)const_str_plain_NDArrayOperatorsMixin, tmp_assign_source_125 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$lib$mixins );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
