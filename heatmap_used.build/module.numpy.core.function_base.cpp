/* Generated code for Python source for module 'numpy.core.function_base'
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

/* The _module_numpy$core$function_base is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$function_base;
PyDictObject *moduledict_numpy$core$function_base;

/* The module constants used, if any. */
extern PyObject *const_str_plain_result_type;
extern PyObject *const_complex_0_0__0_0;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain__nx;
static PyObject *const_str_digest_18231b6f40114bf84ea44aa343553fe7;
static PyObject *const_str_plain_log_start;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_shares_memory;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_TooHardError;
static PyObject *const_str_digest_1944b865e5838b9edd88194549f0c73b;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_index;
static PyObject *const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple;
extern PyObject *const_str_plain_start;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_log_stop;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_geomspace;
extern PyObject *const_str_plain_base;
static PyObject *const_str_plain_retstep;
extern PyObject *const_tuple_str_plain_numeric_tuple;
extern PyObject *const_str_plain_sign;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_plain_logspace;
static PyObject *const_str_digest_c261a5eb78f3500ba2c82611d6bfef78;
extern PyObject *const_str_plain_div;
extern PyObject *const_str_plain_stacklevel;
static PyObject *const_tuple_int_pos_50_true_none_tuple;
static PyObject *const_complex_0_0__1_0;
static PyObject *const_str_plain_delta;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_digest_fd8adc7d82ff6275bfe464edef2a8a8e;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_NaN;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_astype;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
extern PyObject *const_str_empty;
static PyObject *const_list_str_plain_logspace_str_plain_linspace_str_plain_geomspace_list;
static PyObject *const_tuple_int_pos_50_true_float_10_0_none_tuple;
static PyObject *const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple;
static PyObject *const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple;
static PyObject *const_str_plain_out_sign;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_step;
static PyObject *const_str_digest_0d0cc42cce500b3aaff9aebaf27e6fd9;
extern PyObject *const_str_plain_i;
static PyObject *const_tuple_str_plain_i_str_plain_stacklevel_str_plain_msg_tuple;
static PyObject *const_tuple_int_pos_50_true_false_none_tuple;
extern PyObject *const_str_plain_endpoint;
extern PyObject *const_str_plain_y;
extern PyObject *const_float_10_0;
static PyObject *const_str_plain__index_deprecate;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_int_pos_50;
static PyObject *const_str_digest_e363e6375e89c1455f74a6034fbfa790;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain_MAY_SHARE_BOUNDS;
static PyObject *const_str_digest_73526a9eec2d2a992b19e9c70de09fb2;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_91b22de4bf8c9998ca3cdfd84bf8099a;
extern PyObject *const_str_plain_stop;
static PyObject *const_tuple_438cd36602fbe799ed655bbe8946e949_tuple;
extern PyObject *const_str_plain_imag;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_48833f8d1326b55ef8b03da4006bf627;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_log10;
extern PyObject *const_str_plain_operator;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_18231b6f40114bf84ea44aa343553fe7 = UNSTREAM_STRING( &constant_bin[ 409407 ], 57, 0 );
    const_str_plain_log_start = UNSTREAM_STRING( &constant_bin[ 409464 ], 9, 1 );
    const_str_digest_1944b865e5838b9edd88194549f0c73b = UNSTREAM_STRING( &constant_bin[ 409473 ], 44, 0 );
    const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 4, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 6, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_plain_log_stop = UNSTREAM_STRING( &constant_bin[ 409517 ], 8, 1 );
    const_str_plain_geomspace = UNSTREAM_STRING( &constant_bin[ 409525 ], 9, 1 );
    const_str_plain_retstep = UNSTREAM_STRING( &constant_bin[ 409534 ], 7, 1 );
    const_str_plain_logspace = UNSTREAM_STRING( &constant_bin[ 409541 ], 8, 1 );
    const_str_digest_c261a5eb78f3500ba2c82611d6bfef78 = UNSTREAM_STRING( &constant_bin[ 409549 ], 2449, 0 );
    const_tuple_int_pos_50_true_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_none_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_complex_0_0__1_0 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 411998 ], 17 );
    const_str_plain_delta = UNSTREAM_STRING( &constant_bin[ 121537 ], 5, 1 );
    const_str_digest_fd8adc7d82ff6275bfe464edef2a8a8e = UNSTREAM_STRING( &constant_bin[ 412015 ], 3300, 0 );
    const_list_str_plain_logspace_str_plain_linspace_str_plain_geomspace_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_str_plain_geomspace_list, 0, const_str_plain_logspace ); Py_INCREF( const_str_plain_logspace );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_str_plain_geomspace_list, 1, const_str_plain_linspace ); Py_INCREF( const_str_plain_linspace );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_str_plain_geomspace_list, 2, const_str_plain_geomspace ); Py_INCREF( const_str_plain_geomspace );
    const_tuple_int_pos_50_true_float_10_0_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 2, const_float_10_0 ); Py_INCREF( const_float_10_0 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 5, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    const_str_plain_out_sign = UNSTREAM_STRING( &constant_bin[ 415315 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 6, const_str_plain_out_sign ); Py_INCREF( const_str_plain_out_sign );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 7, const_str_plain_log_start ); Py_INCREF( const_str_plain_log_start );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 8, const_str_plain_log_stop ); Py_INCREF( const_str_plain_log_stop );
    PyTuple_SET_ITEM( const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 4, const_str_plain_retstep ); Py_INCREF( const_str_plain_retstep );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 6, const_str_plain_div ); Py_INCREF( const_str_plain_div );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 7, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 8, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 9, const_str_plain_delta ); Py_INCREF( const_str_plain_delta );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 10, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    const_str_digest_0d0cc42cce500b3aaff9aebaf27e6fd9 = UNSTREAM_STRING( &constant_bin[ 415323 ], 33, 0 );
    const_tuple_str_plain_i_str_plain_stacklevel_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_stacklevel_str_plain_msg_tuple, 0, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_stacklevel_str_plain_msg_tuple, 1, const_str_plain_stacklevel ); Py_INCREF( const_str_plain_stacklevel );
    PyTuple_SET_ITEM( const_tuple_str_plain_i_str_plain_stacklevel_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_int_pos_50_true_false_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain__index_deprecate = UNSTREAM_STRING( &constant_bin[ 415356 ], 16, 1 );
    const_str_digest_e363e6375e89c1455f74a6034fbfa790 = UNSTREAM_STRING( &constant_bin[ 415372 ], 61, 0 );
    const_str_digest_73526a9eec2d2a992b19e9c70de09fb2 = UNSTREAM_STRING( &constant_bin[ 415331 ], 24, 0 );
    const_str_digest_91b22de4bf8c9998ca3cdfd84bf8099a = UNSTREAM_STRING( &constant_bin[ 415433 ], 38, 0 );
    const_tuple_438cd36602fbe799ed655bbe8946e949_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_438cd36602fbe799ed655bbe8946e949_tuple, 0, const_str_plain_result_type ); Py_INCREF( const_str_plain_result_type );
    PyTuple_SET_ITEM( const_tuple_438cd36602fbe799ed655bbe8946e949_tuple, 1, const_str_plain_NaN ); Py_INCREF( const_str_plain_NaN );
    PyTuple_SET_ITEM( const_tuple_438cd36602fbe799ed655bbe8946e949_tuple, 2, const_str_plain_shares_memory ); Py_INCREF( const_str_plain_shares_memory );
    PyTuple_SET_ITEM( const_tuple_438cd36602fbe799ed655bbe8946e949_tuple, 3, const_str_plain_MAY_SHARE_BOUNDS ); Py_INCREF( const_str_plain_MAY_SHARE_BOUNDS );
    PyTuple_SET_ITEM( const_tuple_438cd36602fbe799ed655bbe8946e949_tuple, 4, const_str_plain_TooHardError ); Py_INCREF( const_str_plain_TooHardError );
    PyTuple_SET_ITEM( const_tuple_438cd36602fbe799ed655bbe8946e949_tuple, 5, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    const_str_digest_48833f8d1326b55ef8b03da4006bf627 = UNSTREAM_STRING( &constant_bin[ 415471 ], 2728, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$function_base( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6ccecceb83c38854f35dcbe498a1b22e;
static PyCodeObject *codeobj_7d65b798a94aea9fc26a66cff26e02a7;
static PyCodeObject *codeobj_0f3ed250e9c01127033bb287a42da6af;
static PyCodeObject *codeobj_b2c51301d5afd607ed89c0bbd26e484c;
static PyCodeObject *codeobj_ea8aaae2f708dc58e2715f2f727aaa19;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_18231b6f40114bf84ea44aa343553fe7;
    codeobj_6ccecceb83c38854f35dcbe498a1b22e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0d0cc42cce500b3aaff9aebaf27e6fd9, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7d65b798a94aea9fc26a66cff26e02a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__index_deprecate, 13, const_tuple_str_plain_i_str_plain_stacklevel_str_plain_msg_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0f3ed250e9c01127033bb287a42da6af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_geomspace, 230, const_tuple_6228d9fe20ccbef4658429fed9dd6d08_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b2c51301d5afd607ed89c0bbd26e484c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_linspace, 25, const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ea8aaae2f708dc58e2715f2f727aaa19 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logspace, 146, const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_1__index_deprecate( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_2_linspace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_3_logspace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_4_geomspace( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$core$function_base$$$function_1__index_deprecate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_i = python_pars[ 0 ];
    PyObject *par_stacklevel = python_pars[ 1 ];
    PyObject *var_msg = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7d65b798a94aea9fc26a66cff26e02a7 = NULL;

    struct Nuitka_FrameObject *frame_7d65b798a94aea9fc26a66cff26e02a7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d65b798a94aea9fc26a66cff26e02a7, codeobj_7d65b798a94aea9fc26a66cff26e02a7, module_numpy$core$function_base, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7d65b798a94aea9fc26a66cff26e02a7 = cache_frame_7d65b798a94aea9fc26a66cff26e02a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d65b798a94aea9fc26a66cff26e02a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d65b798a94aea9fc26a66cff26e02a7 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_operator );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
        exception_tb = NULL;

        exception_lineno = 15;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_i;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_7d65b798a94aea9fc26a66cff26e02a7->m_frame.f_lineno = 15;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_index, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_i;
        assert( old != NULL );
        par_i = tmp_assign_source_1;
        Py_DECREF( old );
    }

    goto try_end_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_7d65b798a94aea9fc26a66cff26e02a7 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_7d65b798a94aea9fc26a66cff26e02a7, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_7d65b798a94aea9fc26a66cff26e02a7, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_TypeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_1 = "ooo";
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
    tmp_called_instance_2 = const_str_digest_e363e6375e89c1455f74a6034fbfa790;
    tmp_type_arg_1 = par_i;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_args_element_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_args_element_name_2 != NULL );
    frame_7d65b798a94aea9fc26a66cff26e02a7->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_msg == NULL );
    var_msg = tmp_assign_source_2;

    tmp_int_arg_1 = par_i;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_i;
        assert( old != NULL );
        par_i = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_left_name_1 = par_stacklevel;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_4 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    par_stacklevel = tmp_assign_source_4;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_msg;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_stacklevel;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_stacklevel;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_7d65b798a94aea9fc26a66cff26e02a7->m_frame.f_lineno = 21;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 14;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7d65b798a94aea9fc26a66cff26e02a7->m_frame) frame_7d65b798a94aea9fc26a66cff26e02a7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_1__index_deprecate );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_return_value = par_i;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7d65b798a94aea9fc26a66cff26e02a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_7d65b798a94aea9fc26a66cff26e02a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7d65b798a94aea9fc26a66cff26e02a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d65b798a94aea9fc26a66cff26e02a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d65b798a94aea9fc26a66cff26e02a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d65b798a94aea9fc26a66cff26e02a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d65b798a94aea9fc26a66cff26e02a7,
        type_description_1,
        par_i,
        par_stacklevel,
        var_msg
    );


    // Release cached frame.
    if ( frame_7d65b798a94aea9fc26a66cff26e02a7 == cache_frame_7d65b798a94aea9fc26a66cff26e02a7 )
    {
        Py_DECREF( frame_7d65b798a94aea9fc26a66cff26e02a7 );
    }
    cache_frame_7d65b798a94aea9fc26a66cff26e02a7 = NULL;

    assertFrameObject( frame_7d65b798a94aea9fc26a66cff26e02a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_1__index_deprecate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( par_stacklevel );
    par_stacklevel = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

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

    Py_XDECREF( par_i );
    par_i = NULL;

    Py_XDECREF( par_stacklevel );
    par_stacklevel = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_1__index_deprecate );
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


static PyObject *impl_numpy$core$function_base$$$function_2_linspace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_stop = python_pars[ 1 ];
    PyObject *par_num = python_pars[ 2 ];
    PyObject *par_endpoint = python_pars[ 3 ];
    PyObject *par_retstep = python_pars[ 4 ];
    PyObject *par_dtype = python_pars[ 5 ];
    PyObject *var_div = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_y = NULL;
    PyObject *var_delta = NULL;
    PyObject *var_step = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_float_arg_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static struct Nuitka_FrameObject *cache_frame_b2c51301d5afd607ed89c0bbd26e484c = NULL;

    struct Nuitka_FrameObject *frame_b2c51301d5afd607ed89c0bbd26e484c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2c51301d5afd607ed89c0bbd26e484c, codeobj_b2c51301d5afd607ed89c0bbd26e484c, module_numpy$core$function_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b2c51301d5afd607ed89c0bbd26e484c = cache_frame_b2c51301d5afd607ed89c0bbd26e484c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2c51301d5afd607ed89c0bbd26e484c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2c51301d5afd607ed89c0bbd26e484c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__index_deprecate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__index_deprecate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_index_deprecate" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_num;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_num;
        assert( old != NULL );
        par_num = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_num;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_1944b865e5838b9edd88194549f0c73b;
    tmp_right_name_1 = par_num;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 103;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_endpoint;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_left_name_2 = par_num;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = par_num;

    CHECK_OBJECT( tmp_assign_source_2 );
    Py_INCREF( tmp_assign_source_2 );
    condexpr_end_1:;
    assert( var_div == NULL );
    var_div = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 108;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_start;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_float_1_0;
    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_start;
        assert( old != NULL );
        par_start = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 109;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_stop;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_float_1_0;
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stop;
        assert( old != NULL );
        par_stop = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_result_type );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_result_type );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "result_type" );
        exception_tb = NULL;

        exception_lineno = 111;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_start;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_stop;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_float_arg_1 = par_num;

    CHECK_OBJECT( tmp_float_arg_1 );
    tmp_args_element_name_6 = TO_FLOAT( tmp_float_arg_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dt == NULL );
    var_dt = tmp_assign_source_5;

    tmp_compare_left_2 = par_dtype;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_6 = var_dt;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_6;
        Py_INCREF( par_dtype );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_num;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_dt;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 115;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_7;

    tmp_left_name_5 = par_stop;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = par_start;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_delta == NULL );
    var_delta = tmp_assign_source_8;

    tmp_compare_left_3 = par_num;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_6 = var_delta;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = var_div;

    CHECK_OBJECT( tmp_right_name_6 );
    tmp_assign_source_9 = BINARY_OPERATION_TRUEDIV( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_step == NULL );
    var_step = tmp_assign_source_9;

    tmp_compare_left_4 = var_step;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_7 = var_y;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_right_name_7 = var_div;

    CHECK_OBJECT( tmp_right_name_7 );
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_10 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    var_y = tmp_assign_source_10;

    tmp_left_name_8 = var_y;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_right_name_8 = var_delta;

    CHECK_OBJECT( tmp_right_name_8 );
    tmp_assign_source_11 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_y;
        assert( old != NULL );
        var_y = tmp_assign_source_11;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_9 = var_y;

    CHECK_OBJECT( tmp_left_name_9 );
    tmp_right_name_9 = var_step;

    CHECK_OBJECT( tmp_right_name_9 );
    tmp_assign_source_12 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_y;
        assert( old != NULL );
        var_y = tmp_assign_source_12;
        Py_DECREF( old );
    }

    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_NaN );

    if (unlikely( tmp_assign_source_13 == NULL ))
    {
        tmp_assign_source_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NaN );
    }

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NaN" );
        exception_tb = NULL;

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_step == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_step = tmp_assign_source_13;

    tmp_left_name_10 = var_y;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_right_name_10 = var_delta;

    CHECK_OBJECT( tmp_right_name_10 );
    tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_y;
        assert( old != NULL );
        var_y = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_end_3:;
    tmp_left_name_11 = var_y;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = par_start;

    CHECK_OBJECT( tmp_right_name_11 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
    tmp_assign_source_15 = tmp_left_name_11;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    var_y = tmp_assign_source_15;

    tmp_and_left_value_1 = par_endpoint;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_1 = par_num;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 137;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_ass_subvalue_1 = par_stop;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_y;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_int_neg_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_cond_value_3 = par_retstep;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = var_y;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_astype );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_dtype;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 141;
    tmp_tuple_element_2 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_step;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_3 = var_y;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = par_dtype;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame.f_lineno = 143;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2c51301d5afd607ed89c0bbd26e484c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2c51301d5afd607ed89c0bbd26e484c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2c51301d5afd607ed89c0bbd26e484c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2c51301d5afd607ed89c0bbd26e484c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2c51301d5afd607ed89c0bbd26e484c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2c51301d5afd607ed89c0bbd26e484c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2c51301d5afd607ed89c0bbd26e484c,
        type_description_1,
        par_start,
        par_stop,
        par_num,
        par_endpoint,
        par_retstep,
        par_dtype,
        var_div,
        var_dt,
        var_y,
        var_delta,
        var_step
    );


    // Release cached frame.
    if ( frame_b2c51301d5afd607ed89c0bbd26e484c == cache_frame_b2c51301d5afd607ed89c0bbd26e484c )
    {
        Py_DECREF( frame_b2c51301d5afd607ed89c0bbd26e484c );
    }
    cache_frame_b2c51301d5afd607ed89c0bbd26e484c = NULL;

    assertFrameObject( frame_b2c51301d5afd607ed89c0bbd26e484c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_2_linspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_retstep );
    Py_DECREF( par_retstep );
    par_retstep = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_div );
    Py_DECREF( var_div );
    var_div = NULL;

    CHECK_OBJECT( (PyObject *)var_dt );
    Py_DECREF( var_dt );
    var_dt = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_delta );
    Py_DECREF( var_delta );
    var_delta = NULL;

    CHECK_OBJECT( (PyObject *)var_step );
    Py_DECREF( var_step );
    var_step = NULL;

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

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_retstep );
    Py_DECREF( par_retstep );
    par_retstep = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_div );
    var_div = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_2_linspace );
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


static PyObject *impl_numpy$core$function_base$$$function_3_logspace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_stop = python_pars[ 1 ];
    PyObject *par_num = python_pars[ 2 ];
    PyObject *par_endpoint = python_pars[ 3 ];
    PyObject *par_base = python_pars[ 4 ];
    PyObject *par_dtype = python_pars[ 5 ];
    PyObject *var_y = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_ea8aaae2f708dc58e2715f2f727aaa19 = NULL;

    struct Nuitka_FrameObject *frame_ea8aaae2f708dc58e2715f2f727aaa19;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ea8aaae2f708dc58e2715f2f727aaa19, codeobj_ea8aaae2f708dc58e2715f2f727aaa19, module_numpy$core$function_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ea8aaae2f708dc58e2715f2f727aaa19 = cache_frame_ea8aaae2f708dc58e2715f2f727aaa19;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ea8aaae2f708dc58e2715f2f727aaa19 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ea8aaae2f708dc58e2715f2f727aaa19 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_linspace );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linspace );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "linspace" );
        exception_tb = NULL;

        exception_lineno = 224;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_start;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stop;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_num;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_num;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_endpoint;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_endpoint;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_ea8aaae2f708dc58e2715f2f727aaa19->m_frame.f_lineno = 224;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_1;

    tmp_compare_left_1 = par_dtype;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 226;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_base;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_y;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_ea8aaae2f708dc58e2715f2f727aaa19->m_frame.f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_power, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 227;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_base;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_y;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_ea8aaae2f708dc58e2715f2f727aaa19->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_called_instance_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_power, call_args );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_ea8aaae2f708dc58e2715f2f727aaa19->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_astype, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea8aaae2f708dc58e2715f2f727aaa19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea8aaae2f708dc58e2715f2f727aaa19 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ea8aaae2f708dc58e2715f2f727aaa19 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ea8aaae2f708dc58e2715f2f727aaa19, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ea8aaae2f708dc58e2715f2f727aaa19->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ea8aaae2f708dc58e2715f2f727aaa19, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ea8aaae2f708dc58e2715f2f727aaa19,
        type_description_1,
        par_start,
        par_stop,
        par_num,
        par_endpoint,
        par_base,
        par_dtype,
        var_y
    );


    // Release cached frame.
    if ( frame_ea8aaae2f708dc58e2715f2f727aaa19 == cache_frame_ea8aaae2f708dc58e2715f2f727aaa19 )
    {
        Py_DECREF( frame_ea8aaae2f708dc58e2715f2f727aaa19 );
    }
    cache_frame_ea8aaae2f708dc58e2715f2f727aaa19 = NULL;

    assertFrameObject( frame_ea8aaae2f708dc58e2715f2f727aaa19 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_3_logspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_base );
    Py_DECREF( par_base );
    par_base = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_base );
    Py_DECREF( par_base );
    par_base = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_3_logspace );
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


static PyObject *impl_numpy$core$function_base$$$function_4_geomspace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_stop = python_pars[ 1 ];
    PyObject *par_num = python_pars[ 2 ];
    PyObject *par_endpoint = python_pars[ 3 ];
    PyObject *par_dtype = python_pars[ 4 ];
    PyObject *var_dt = NULL;
    PyObject *var_out_sign = NULL;
    PyObject *var_log_start = NULL;
    PyObject *var_log_stop = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_float_arg_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static struct Nuitka_FrameObject *cache_frame_0f3ed250e9c01127033bb287a42da6af = NULL;

    struct Nuitka_FrameObject *frame_0f3ed250e9c01127033bb287a42da6af;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f3ed250e9c01127033bb287a42da6af, codeobj_0f3ed250e9c01127033bb287a42da6af, module_numpy$core$function_base, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0f3ed250e9c01127033bb287a42da6af = cache_frame_0f3ed250e9c01127033bb287a42da6af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f3ed250e9c01127033bb287a42da6af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f3ed250e9c01127033bb287a42da6af ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_start;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_2 = par_stop;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 318;
        type_description_1 = "oooooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_91b22de4bf8c9998ca3cdfd84bf8099a;
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 319;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 319;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_result_type );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_result_type );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "result_type" );
        exception_tb = NULL;

        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_start;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_stop;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_float_arg_1 = par_num;

    CHECK_OBJECT( tmp_float_arg_1 );
    tmp_args_element_name_3 = TO_FLOAT( tmp_float_arg_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 321;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dt == NULL );
    var_dt = tmp_assign_source_1;

    tmp_compare_left_1 = par_dtype;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = var_dt;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_2;
        Py_INCREF( par_dtype );
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 326;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 326;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_end_2:;
    tmp_assign_source_4 = const_int_pos_1;
    assert( var_out_sign == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_out_sign = tmp_assign_source_4;

    // Tried code:
    tmp_source_name_1 = par_stop;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_real );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__operand_2 == NULL );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_5;

    tmp_source_name_2 = par_start;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_real );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_3 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_assign_source_6 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_6;

    tmp_cond_value_3 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    branch_no_4:;
    tmp_compexpr_left_4 = tmp_comparison_chain_1__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_int_0;
    tmp_outline_return_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_4_geomspace );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_4_geomspace );
    return NULL;
    outline_result_1:;
    tmp_cond_value_2 = tmp_outline_return_value_1;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 331;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    // Tried code:
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_source_name_3 = par_start;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_imag );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 332;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = par_stop;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_imag );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 332;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 332;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 332;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = par_start;
        assert( old != NULL );
        par_start = tmp_assign_source_10;
        Py_INCREF( par_start );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = par_stop;
        assert( old != NULL );
        par_stop = tmp_assign_source_11;
        Py_INCREF( par_stop );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_12 = const_complex_0_0__1_0;
    {
        PyObject *old = var_out_sign;
        assert( old != NULL );
        var_out_sign = tmp_assign_source_12;
        Py_INCREF( var_out_sign );
        Py_DECREF( old );
    }

    branch_no_3:;
    // Tried code:
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = par_stop;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_sign, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( tmp_comparison_chain_2__operand_2 == NULL );
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_13;

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_6 = par_start;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sign, call_args );
    }

    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    tmp_compexpr_right_5 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_right_5 );
    tmp_assign_source_14 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    assert( tmp_comparison_chain_2__comparison_result == NULL );
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_14;

    tmp_cond_value_5 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    branch_no_6:;
    tmp_compexpr_left_6 = tmp_comparison_chain_2__operand_2;

    CHECK_OBJECT( tmp_compexpr_left_6 );
    tmp_compexpr_right_6 = const_int_neg_1;
    tmp_outline_return_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto try_except_handler_5;
    }
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_4_geomspace );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
    Py_DECREF( tmp_comparison_chain_2__operand_2 );
    tmp_comparison_chain_2__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__comparison_result );
    Py_DECREF( tmp_comparison_chain_2__comparison_result );
    tmp_comparison_chain_2__comparison_result = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_comparison_chain_2__operand_2 );
    tmp_comparison_chain_2__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_2__comparison_result );
    tmp_comparison_chain_2__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_4_geomspace );
    return NULL;
    outline_result_2:;
    tmp_cond_value_4 = tmp_outline_return_value_2;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 334;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_operand_name_1 = par_start;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 335;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
    tmp_operand_name_2 = par_stop;

    CHECK_OBJECT( tmp_operand_name_2 );
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_2 );

        exception_lineno = 335;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "oooooooooo";
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_16 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 335;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "oooooooooo";
        exception_lineno = 335;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    {
        PyObject *old = par_start;
        assert( old != NULL );
        par_start = tmp_assign_source_18;
        Py_INCREF( par_start );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = par_stop;
        assert( old != NULL );
        par_stop = tmp_assign_source_19;
        Py_INCREF( par_stop );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_operand_name_3 = var_out_sign;

    CHECK_OBJECT( tmp_operand_name_3 );
    tmp_assign_source_20 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_out_sign;
        assert( old != NULL );
        var_out_sign = tmp_assign_source_20;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_left_name_1 = par_start;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "start" );
        exception_tb = NULL;

        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = par_stop;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "stop" );
        exception_tb = NULL;

        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = par_stop;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "stop" );
        exception_tb = NULL;

        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_start;
        par_start = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_left_name_3 = par_stop;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "stop" );
        exception_tb = NULL;

        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = par_start;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = par_start;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stop;
        par_stop = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = (PyObject *)&PyComplex_Type;
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_cond_value_6 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_issubdtype, call_args );
    }

    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 342;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_5 = par_start;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_complex_0_0__0_0;
    tmp_assign_source_23 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_start;
        assert( old != NULL );
        par_start = tmp_assign_source_23;
        Py_DECREF( old );
    }

    tmp_left_name_6 = par_stop;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = const_complex_0_0__0_0;
    tmp_assign_source_24 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stop;
        assert( old != NULL );
        par_stop = tmp_assign_source_24;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 346;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_start;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 346;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_log10, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_log_start == NULL );
    var_log_start = tmp_assign_source_25;

    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 347;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = par_stop;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 347;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_log10, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_log_stop == NULL );
    var_log_stop = tmp_assign_source_26;

    tmp_left_name_7 = var_out_sign;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "out_sign" );
        exception_tb = NULL;

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_logspace );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logspace );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "logspace" );
        exception_tb = NULL;

        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_log_start;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_log_stop;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_num;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_num;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_endpoint;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_endpoint;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = const_float_10_0;
    tmp_dict_key_3 = const_str_plain_base;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 348;
    tmp_right_name_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_27;

    tmp_called_instance_7 = var_result;

    CHECK_OBJECT( tmp_called_instance_7 );
    tmp_args_element_name_11 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_0f3ed250e9c01127033bb287a42da6af->m_frame.f_lineno = 351;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_astype, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f3ed250e9c01127033bb287a42da6af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f3ed250e9c01127033bb287a42da6af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f3ed250e9c01127033bb287a42da6af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f3ed250e9c01127033bb287a42da6af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f3ed250e9c01127033bb287a42da6af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f3ed250e9c01127033bb287a42da6af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f3ed250e9c01127033bb287a42da6af,
        type_description_1,
        par_start,
        par_stop,
        par_num,
        par_endpoint,
        par_dtype,
        var_dt,
        var_out_sign,
        var_log_start,
        var_log_stop,
        var_result
    );


    // Release cached frame.
    if ( frame_0f3ed250e9c01127033bb287a42da6af == cache_frame_0f3ed250e9c01127033bb287a42da6af )
    {
        Py_DECREF( frame_0f3ed250e9c01127033bb287a42da6af );
    }
    cache_frame_0f3ed250e9c01127033bb287a42da6af = NULL;

    assertFrameObject( frame_0f3ed250e9c01127033bb287a42da6af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_4_geomspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_dt );
    Py_DECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_out_sign );
    var_out_sign = NULL;

    CHECK_OBJECT( (PyObject *)var_log_start );
    Py_DECREF( var_log_start );
    var_log_start = NULL;

    CHECK_OBJECT( (PyObject *)var_log_stop );
    Py_DECREF( var_log_stop );
    var_log_stop = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_start );
    par_start = NULL;

    Py_XDECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_out_sign );
    var_out_sign = NULL;

    Py_XDECREF( var_log_start );
    var_log_start = NULL;

    Py_XDECREF( var_log_stop );
    var_log_stop = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_4_geomspace );
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



static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_1__index_deprecate( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$function_base$$$function_1__index_deprecate,
        const_str_plain__index_deprecate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d65b798a94aea9fc26a66cff26e02a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_2_linspace( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$function_base$$$function_2_linspace,
        const_str_plain_linspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b2c51301d5afd607ed89c0bbd26e484c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_c261a5eb78f3500ba2c82611d6bfef78,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_3_logspace( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$function_base$$$function_3_logspace,
        const_str_plain_logspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ea8aaae2f708dc58e2715f2f727aaa19,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_48833f8d1326b55ef8b03da4006bf627,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_4_geomspace( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$function_base$$$function_4_geomspace,
        const_str_plain_geomspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0f3ed250e9c01127033bb287a42da6af,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_fd8adc7d82ff6275bfe464edef2a8a8e,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$function_base =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.function_base",   /* m_name */
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

MOD_INIT_DECL( numpy$core$function_base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$function_base );
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
    puts("numpy.core.function_base: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.function_base: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$function_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$function_base = Py_InitModule4(
        "numpy.core.function_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$function_base = PyModule_Create( &mdef_numpy$core$function_base );
#endif

    moduledict_numpy$core$function_base = MODULE_DICT( module_numpy$core$function_base );

    CHECK_OBJECT( module_numpy$core$function_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_73526a9eec2d2a992b19e9c70de09fb2, module_numpy$core$function_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_6ccecceb83c38854f35dcbe498a1b22e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_18231b6f40114bf84ea44aa343553fe7;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_6ccecceb83c38854f35dcbe498a1b22e = MAKE_MODULE_FRAME( codeobj_6ccecceb83c38854f35dcbe498a1b22e, module_numpy$core$function_base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6ccecceb83c38854f35dcbe498a1b22e );
    assert( Py_REFCNT( frame_6ccecceb83c38854f35dcbe498a1b22e ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$function_base;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_6ccecceb83c38854f35dcbe498a1b22e->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_operator;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$function_base;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_6ccecceb83c38854f35dcbe498a1b22e->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_empty;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$function_base;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_numeric_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_6ccecceb83c38854f35dcbe498a1b22e->m_frame.f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_plain_numeric;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$function_base;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_438cd36602fbe799ed655bbe8946e949_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_6ccecceb83c38854f35dcbe498a1b22e->m_frame.f_lineno = 7;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_result_type );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_result_type, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_NaN );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_NaN, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_shares_memory );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_shares_memory, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_MAY_SHARE_BOUNDS );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_MAY_SHARE_BOUNDS, tmp_assign_source_15 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_TooHardError );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_TooHardError, tmp_assign_source_16 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_asanyarray );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_17 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ccecceb83c38854f35dcbe498a1b22e );
#endif
    popFrameStack();

    assertFrameObject( frame_6ccecceb83c38854f35dcbe498a1b22e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ccecceb83c38854f35dcbe498a1b22e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ccecceb83c38854f35dcbe498a1b22e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ccecceb83c38854f35dcbe498a1b22e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ccecceb83c38854f35dcbe498a1b22e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_assign_source_18 = LIST_COPY( const_list_str_plain_logspace_str_plain_linspace_str_plain_geomspace_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    tmp_defaults_1 = const_tuple_int_pos_2_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$core$function_base$$$function_1__index_deprecate( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__index_deprecate, tmp_assign_source_19 );
    tmp_defaults_2 = const_tuple_int_pos_50_true_false_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$core$function_base$$$function_2_linspace( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_linspace, tmp_assign_source_20 );
    tmp_defaults_3 = const_tuple_int_pos_50_true_float_10_0_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$core$function_base$$$function_3_logspace( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_logspace, tmp_assign_source_21 );
    tmp_defaults_4 = const_tuple_int_pos_50_true_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$core$function_base$$$function_4_geomspace( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_geomspace, tmp_assign_source_22 );

    return MOD_RETURN_VALUE( module_numpy$core$function_base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
