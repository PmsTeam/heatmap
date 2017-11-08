/* Generated code for Python source for module 'numpy.core.memmap'
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

/* The _module_numpy$core$memmap is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$memmap;
PyDictObject *moduledict_numpy$core$memmap;

/* The module constants used, if any. */
static PyObject *const_str_plain_uint8;
static PyObject *const_float__minus_100_0;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_memmap;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_dtypedescr;
static PyObject *const_str_plain_mmap;
static PyObject *const_str_plain_mode_equivalents;
extern PyObject *const_str_plain_view;
extern PyObject *const_str_plain___array_wrap__;
static PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_2f4f5646863524c747d8c05efba9c9a1;
static PyObject *const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_writeable_filemodes;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_resolve;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_readwrite;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain___array_finalize__;
extern PyObject *const_str_plain_may_share_memory;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_valid_filemodes;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
extern PyObject *const_str_chr_0;
static PyObject *const_str_digest_e62ff57319f9c1046a4500e380a1384d;
static PyObject *const_str_digest_de57873ae6ddbbaab789eb2bad792a4b;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_readonly;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_263887fd84384d5e2143287b88ff6e41;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_tuple_2d9cc1c49edb34f7643049b9176d8757_tuple;
static PyObject *const_str_digest_ac4e4595c9916a96d232c691fe937482;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_arr;
extern PyObject *const_tuple_str_chr_0_tuple;
extern PyObject *const_str_plain_mode;
static PyObject *const_tuple_int_0_int_pos_2_tuple;
extern PyObject *const_str_plain___array_priority__;
static PyObject *const_str_digest_d0c63399b80e5b5a98a024e0877c9693;
static PyObject *const_str_digest_e44be7e8582cd0b4d1f7cba88b70f534;
static PyObject *const_tuple_e9e1eef561a7f71c6a0c2ff397a3c3eb_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_obj_tuple;
static PyObject *const_list_0be409bc3e85d5239a38ebc1056a8c4a_list;
static PyObject *const_str_plain_ACCESS_READ;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_d9b21f63506b97726684fc982c6257f7_tuple;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_name;
static PyObject *const_dict_5a6585184ef887d5c8da5415908fefdf;
static PyObject *const_str_digest_7ee7cd1c46f17a906c1f678924c89959;
static PyObject *const_str_plain_access;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_order;
static PyObject *const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple;
static PyObject *const_str_plain_ACCESS_COPY;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_is_pathlib_path;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_digest_dd7618bbb3c1cb615487560bff75714c;
static PyObject *const_str_plain__mmap;
extern PyObject *const_str_digest_0829d31c23484bf44f4928c84123543c;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_ALLOCATIONGRANULARITY;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_index;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_list_64b4e14366094971fa8910a55e360e41_list;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_copyonwrite;
static PyObject *const_list_str_plain_memmap_list;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_ACCESS_WRITE;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_uint8 = UNSTREAM_STRING( &constant_bin[ 54016 ], 5, 1 );
    const_float__minus_100_0 = UNSTREAM_FLOAT( &constant_bin[ 433102 ] );
    const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple, 0, const_str_plain_uint8 ); Py_INCREF( const_str_plain_uint8 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple, 1, const_str_plain_ndarray ); Py_INCREF( const_str_plain_ndarray );
    PyTuple_SET_ITEM( const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_dtypedescr = UNSTREAM_STRING( &constant_bin[ 433110 ], 10, 1 );
    const_str_plain_mmap = UNSTREAM_STRING( &constant_bin[ 433120 ], 4, 1 );
    const_str_plain_mode_equivalents = UNSTREAM_STRING( &constant_bin[ 433124 ], 16, 1 );
    const_str_digest_e399ba4554180f37de594a6743234f17 = UNSTREAM_STRING( &constant_bin[ 433140 ], 7, 0 );
    const_str_digest_2f4f5646863524c747d8c05efba9c9a1 = UNSTREAM_STRING( &constant_bin[ 433147 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 1, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_plain_writeable_filemodes = UNSTREAM_STRING( &constant_bin[ 433173 ], 19, 1 );
    const_str_plain_resolve = UNSTREAM_STRING( &constant_bin[ 19127 ], 7, 1 );
    const_str_plain_valid_filemodes = UNSTREAM_STRING( &constant_bin[ 433192 ], 15, 1 );
    const_str_digest_e62ff57319f9c1046a4500e380a1384d = UNSTREAM_STRING( &constant_bin[ 433207 ], 50, 0 );
    const_str_digest_de57873ae6ddbbaab789eb2bad792a4b = UNSTREAM_STRING( &constant_bin[ 433257 ], 63, 0 );
    const_str_digest_263887fd84384d5e2143287b88ff6e41 = UNSTREAM_STRING( &constant_bin[ 433155 ], 17, 0 );
    const_tuple_2d9cc1c49edb34f7643049b9176d8757_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_2d9cc1c49edb34f7643049b9176d8757_tuple, 0, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    PyTuple_SET_ITEM( const_tuple_2d9cc1c49edb34f7643049b9176d8757_tuple, 1, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    PyTuple_SET_ITEM( const_tuple_2d9cc1c49edb34f7643049b9176d8757_tuple, 2, const_str_plain_is_pathlib_path ); Py_INCREF( const_str_plain_is_pathlib_path );
    const_str_digest_ac4e4595c9916a96d232c691fe937482 = UNSTREAM_STRING( &constant_bin[ 433320 ], 220, 0 );
    const_tuple_int_0_int_pos_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_str_digest_d0c63399b80e5b5a98a024e0877c9693 = UNSTREAM_STRING( &constant_bin[ 433540 ], 22, 0 );
    const_str_digest_e44be7e8582cd0b4d1f7cba88b70f534 = UNSTREAM_STRING( &constant_bin[ 433562 ], 6558, 0 );
    const_tuple_e9e1eef561a7f71c6a0c2ff397a3c3eb_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 440120 ], 224 );
    const_list_0be409bc3e85d5239a38ebc1056a8c4a_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_0be409bc3e85d5239a38ebc1056a8c4a_list, 0, const_str_digest_dd7618bbb3c1cb615487560bff75714c ); Py_INCREF( const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyList_SET_ITEM( const_list_0be409bc3e85d5239a38ebc1056a8c4a_list, 1, const_str_digest_0829d31c23484bf44f4928c84123543c ); Py_INCREF( const_str_digest_0829d31c23484bf44f4928c84123543c );
    const_str_plain_ACCESS_READ = UNSTREAM_STRING( &constant_bin[ 440344 ], 11, 1 );
    const_tuple_d9b21f63506b97726684fc982c6257f7_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 2, const_str_plain___array_priority__ ); Py_INCREF( const_str_plain___array_priority__ );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 3, const_str_plain___new__ ); Py_INCREF( const_str_plain___new__ );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 4, const_str_plain___array_finalize__ ); Py_INCREF( const_str_plain___array_finalize__ );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 5, const_str_plain_flush ); Py_INCREF( const_str_plain_flush );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 6, const_str_plain___array_wrap__ ); Py_INCREF( const_str_plain___array_wrap__ );
    PyTuple_SET_ITEM( const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 7, const_str_plain___getitem__ ); Py_INCREF( const_str_plain___getitem__ );
    const_dict_5a6585184ef887d5c8da5415908fefdf = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_readwrite, const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_write, const_str_digest_0829d31c23484bf44f4928c84123543c );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_readonly, const_str_plain_r );
    const_str_plain_copyonwrite = UNSTREAM_STRING( &constant_bin[ 440355 ], 11, 1 );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_copyonwrite, const_str_plain_c );
    assert( PyDict_Size( const_dict_5a6585184ef887d5c8da5415908fefdf ) == 4 );
    const_str_digest_7ee7cd1c46f17a906c1f678924c89959 = UNSTREAM_STRING( &constant_bin[ 440366 ], 19, 0 );
    const_str_plain_access = UNSTREAM_STRING( &constant_bin[ 29763 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_ACCESS_COPY = UNSTREAM_STRING( &constant_bin[ 440385 ], 11, 1 );
    const_str_plain__mmap = UNSTREAM_STRING( &constant_bin[ 440396 ], 5, 1 );
    const_str_plain_ALLOCATIONGRANULARITY = UNSTREAM_STRING( &constant_bin[ 440401 ], 21, 1 );
    const_list_64b4e14366094971fa8910a55e360e41_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 2, const_str_digest_dd7618bbb3c1cb615487560bff75714c ); Py_INCREF( const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 3, const_str_digest_0829d31c23484bf44f4928c84123543c ); Py_INCREF( const_str_digest_0829d31c23484bf44f4928c84123543c );
    const_list_str_plain_memmap_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_memmap_list, 0, const_str_plain_memmap ); Py_INCREF( const_str_plain_memmap );
    const_str_plain_ACCESS_WRITE = UNSTREAM_STRING( &constant_bin[ 440422 ], 12, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$memmap( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_23f1ea7b89bcd4d0c953d722688f4acb;
static PyCodeObject *codeobj_0ab3e57ff30ef87fa8a593bbf47ee07d;
static PyCodeObject *codeobj_d78c3437b1f7941a27fe0b5d7b0dbb2f;
static PyCodeObject *codeobj_ca46de576e62725e677c57f5a3757300;
static PyCodeObject *codeobj_d16783360423a511c87f879afd0d4acc;
static PyCodeObject *codeobj_5ee550d16a7592b41c328955367fc773;
static PyCodeObject *codeobj_8c36b393ed4f6d6144a825cd63b86870;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e62ff57319f9c1046a4500e380a1384d;
    codeobj_23f1ea7b89bcd4d0c953d722688f4acb = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2f4f5646863524c747d8c05efba9c9a1, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ab3e57ff30ef87fa8a593bbf47ee07d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_finalize__, 289, const_tuple_str_plain_self_str_plain_obj_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d78c3437b1f7941a27fe0b5d7b0dbb2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_wrap__, 319, const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca46de576e62725e677c57f5a3757300 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 334, const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d16783360423a511c87f879afd0d4acc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 202, const_tuple_e9e1eef561a7f71c6a0c2ff397a3c3eb_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5ee550d16a7592b41c328955367fc773 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 301, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8c36b393ed4f6d6144a825cd63b86870 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_memmap, 20, const_tuple_d9b21f63506b97726684fc982c6257f7_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_1___new__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_2___array_finalize__(  );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_3_flush(  );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_4___array_wrap__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_5___getitem__(  );


// The module function definitions.
static PyObject *impl_numpy$core$memmap$$$function_1___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_subtype = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_mode = python_pars[ 3 ];
    PyObject *par_offset = python_pars[ 4 ];
    PyObject *par_shape = python_pars[ 5 ];
    PyObject *par_order = python_pars[ 6 ];
    PyObject *var_mmap = NULL;
    PyObject *var_os = NULL;
    PyObject *var_fid = NULL;
    PyObject *var_own_file = NULL;
    PyObject *var_flen = NULL;
    PyObject *var_descr = NULL;
    PyObject *var__dbytes = NULL;
    PyObject *var_bytes = NULL;
    PyObject *var_size = NULL;
    PyObject *var_k = NULL;
    PyObject *var_acc = NULL;
    PyObject *var_start = NULL;
    PyObject *var_array_offset = NULL;
    PyObject *var_mm = NULL;
    PyObject *var_self = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    int tmp_and_left_truth_5;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_left_value_5;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_and_right_value_5;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_value_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
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
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
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
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d16783360423a511c87f879afd0d4acc = NULL;

    struct Nuitka_FrameObject *frame_d16783360423a511c87f879afd0d4acc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_name_name_1 = const_str_plain_mmap;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$memmap;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( var_mmap == NULL );
    var_mmap = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d16783360423a511c87f879afd0d4acc, codeobj_d16783360423a511c87f879afd0d4acc, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d16783360423a511c87f879afd0d4acc = cache_frame_d16783360423a511c87f879afd0d4acc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d16783360423a511c87f879afd0d4acc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d16783360423a511c87f879afd0d4acc ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_2 = const_str_digest_e399ba4554180f37de594a6743234f17;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$memmap;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 206;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_os == NULL );
    var_os = tmp_assign_source_2;

    // Tried code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_mode_equivalents );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mode_equivalents );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mode_equivalents" );
        exception_tb = NULL;

        exception_lineno = 208;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = par_mode;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_mode;
        assert( old != NULL );
        par_mode = tmp_assign_source_3;
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
    PRESERVE_FRAME_EXCEPTION( frame_d16783360423a511c87f879afd0d4acc );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d16783360423a511c87f879afd0d4acc, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d16783360423a511c87f879afd0d4acc, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_compare_left_2 = par_mode;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_valid_filemodes );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_valid_filemodes );
    }

    if ( tmp_compare_right_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "valid_filemodes" );
        exception_tb = NULL;

        exception_lineno = 210;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_d0c63399b80e5b5a98a024e0877c9693;
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_valid_filemodes );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_valid_filemodes );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "valid_filemodes" );
        exception_tb = NULL;

        exception_lineno = 212;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_mode_equivalents );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mode_equivalents );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mode_equivalents" );
        exception_tb = NULL;

        exception_lineno = 212;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 212;
    tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 211;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 207;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d16783360423a511c87f879afd0d4acc->m_frame) frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_hasattr_source_1 = par_filename;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain_read;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_4 = par_filename;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_fid == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_fid = tmp_assign_source_4;

    tmp_assign_source_5 = Py_False;
    assert( var_own_file == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_own_file = tmp_assign_source_5;

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_is_pathlib_path );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_pathlib_path );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_pathlib_path" );
        exception_tb = NULL;

        exception_lineno = 217;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_filename;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 217;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 217;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_1 = par_filename;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_open );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_mode;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_str_plain_c;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 218;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 218;
        type_description_1 = "oooooooooooooooooooooo";
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_and_right_value_1 = const_str_plain_r;
    Py_INCREF( tmp_and_right_value_1 );
    tmp_or_left_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_or_left_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 218;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_or_right_value_1 = par_mode;

    CHECK_OBJECT( tmp_or_right_value_1 );
    Py_INCREF( tmp_or_right_value_1 );
    tmp_left_name_3 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_left_name_3 = tmp_or_left_value_1;
    or_end_1:;
    tmp_right_name_3 = const_str_plain_b;
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 218;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fid == NULL );
    var_fid = tmp_assign_source_6;

    tmp_assign_source_7 = Py_True;
    assert( var_own_file == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_own_file = tmp_assign_source_7;

    goto branch_end_4;
    branch_no_4:;
    tmp_open_filename_1 = par_filename;

    CHECK_OBJECT( tmp_open_filename_1 );
    tmp_compexpr_left_2 = par_mode;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_str_plain_c;
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 221;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_and_right_value_2 = const_str_plain_r;
    Py_INCREF( tmp_and_right_value_2 );
    tmp_or_left_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_or_left_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 221;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_or_right_value_2 = par_mode;

    CHECK_OBJECT( tmp_or_right_value_2 );
    Py_INCREF( tmp_or_right_value_2 );
    tmp_left_name_4 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_left_name_4 = tmp_or_left_value_2;
    or_end_2:;
    tmp_right_name_4 = const_str_plain_b;
    tmp_open_mode_1 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_open_mode_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_mode_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fid == NULL );
    var_fid = tmp_assign_source_8;

    tmp_assign_source_9 = Py_True;
    assert( var_own_file == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_own_file = tmp_assign_source_9;

    branch_end_4:;
    branch_end_3:;
    tmp_compexpr_left_3 = par_mode;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = const_str_digest_0829d31c23484bf44f4928c84123543c;
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    Py_DECREF( tmp_and_left_value_3 );
    tmp_compexpr_left_4 = par_shape;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = Py_None;
    tmp_and_right_value_3 = BOOL_FROM( tmp_compexpr_left_4 == tmp_compexpr_right_4 );
    Py_INCREF( tmp_and_right_value_3 );
    tmp_cond_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooooo";
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
    tmp_make_exception_arg_2 = const_str_digest_7ee7cd1c46f17a906c1f678924c89959;
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 225;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 225;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_called_instance_2 = var_fid;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 227;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 227;
    tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_seek, &PyTuple_GET_ITEM( const_tuple_int_0_int_pos_2_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_3 = var_fid;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 228;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 228;
    tmp_assign_source_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_tell );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_flen == NULL );
    var_flen = tmp_assign_source_10;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtypedescr );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtypedescr );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "dtypedescr" );
        exception_tb = NULL;

        exception_lineno = 229;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_descr == NULL );
    var_descr = tmp_assign_source_11;

    tmp_source_name_2 = var_descr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_itemsize );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var__dbytes == NULL );
    var__dbytes = tmp_assign_source_12;

    tmp_compare_left_3 = par_shape;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_left_name_5 = var_flen;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = par_offset;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_assign_source_13 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_bytes == NULL );
    var_bytes = tmp_assign_source_13;

    tmp_left_name_6 = var_bytes;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = var__dbytes;

    CHECK_OBJECT( tmp_right_name_6 );
    tmp_cond_value_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 234;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_instance_4 = var_fid;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 235;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 235;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_make_exception_arg_3 = const_str_digest_de57873ae6ddbbaab789eb2bad792a4b;
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 236;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_left_name_7 = var_bytes;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_right_name_7 = var__dbytes;

    CHECK_OBJECT( tmp_right_name_7 );
    tmp_assign_source_14 = BINARY_OPERATION_FLOORDIV( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_size == NULL );
    var_size = tmp_assign_source_14;

    tmp_assign_source_15 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_size;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_15;
        Py_DECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_isinstance_inst_1 = par_shape;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_assign_source_16 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_shape;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_2 );
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_no_8:;
    tmp_assign_source_17 = const_int_pos_1;
    assert( var_size == NULL );
    Py_INCREF( tmp_assign_source_17 );
    var_size = tmp_assign_source_17;

    tmp_iter_arg_1 = par_shape;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_18;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooo";
            exception_lineno = 244;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_20;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_left_name_8 = var_size;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;

        exception_lineno = 245;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_right_name_8 = var_k;

    CHECK_OBJECT( tmp_right_name_8 );
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_21 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    var_size = tmp_assign_source_21;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_end_6:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "long" );
        exception_tb = NULL;

        exception_lineno = 247;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_9 = par_offset;

    CHECK_OBJECT( tmp_left_name_9 );
    tmp_left_name_10 = var_size;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;

        exception_lineno = 247;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = var__dbytes;

    CHECK_OBJECT( tmp_right_name_10 );
    tmp_right_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_bytes;
        var_bytes = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_compexpr_left_5 = par_mode;

    CHECK_OBJECT( tmp_compexpr_left_5 );
    tmp_compexpr_right_5 = const_str_digest_0829d31c23484bf44f4928c84123543c;
    tmp_or_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 249;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_compexpr_left_6 = par_mode;

    CHECK_OBJECT( tmp_compexpr_left_6 );
    tmp_compexpr_right_6 = const_str_digest_dd7618bbb3c1cb615487560bff75714c;
    tmp_and_left_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 249;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_compexpr_left_7 = var_flen;

    CHECK_OBJECT( tmp_compexpr_left_7 );
    tmp_compexpr_right_7 = var_bytes;

    CHECK_OBJECT( tmp_compexpr_right_7 );
    tmp_and_right_value_4 = RICH_COMPARE_LT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_or_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_value_4 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_cond_value_4 = tmp_or_left_value_3;
    or_end_3:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 249;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_3 = var_fid;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 250;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_seek );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = var_bytes;

    CHECK_OBJECT( tmp_left_name_11 );
    tmp_right_name_11 = const_int_pos_1;
    tmp_args_element_name_5 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 250;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_int_0;
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 250;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_5 = var_fid;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 251;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_6 = var_fid;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 252;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 252;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_flush );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_9:;
    tmp_compare_left_4 = par_mode;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_str_plain_c;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_4 = var_mmap;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ACCESS_COPY );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_acc == NULL );
    var_acc = tmp_assign_source_23;

    goto branch_end_10;
    branch_no_10:;
    tmp_compare_left_5 = par_mode;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = const_str_plain_r;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_5 = var_mmap;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ACCESS_READ );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_acc == NULL );
    var_acc = tmp_assign_source_24;

    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_6 = var_mmap;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ACCESS_WRITE );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_acc == NULL );
    var_acc = tmp_assign_source_25;

    branch_end_11:;
    branch_end_10:;
    tmp_left_name_12 = par_offset;

    CHECK_OBJECT( tmp_left_name_12 );
    tmp_left_name_13 = par_offset;

    CHECK_OBJECT( tmp_left_name_13 );
    tmp_source_name_7 = var_mmap;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ALLOCATIONGRANULARITY );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_start == NULL );
    var_start = tmp_assign_source_26;

    tmp_left_name_14 = var_bytes;

    CHECK_OBJECT( tmp_left_name_14 );
    tmp_right_name_14 = var_start;

    CHECK_OBJECT( tmp_right_name_14 );
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_14, tmp_right_name_14 );
    tmp_assign_source_27 = tmp_left_name_14;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_bytes = tmp_assign_source_27;

    tmp_left_name_15 = par_offset;

    CHECK_OBJECT( tmp_left_name_15 );
    tmp_right_name_15 = var_start;

    CHECK_OBJECT( tmp_right_name_15 );
    tmp_assign_source_28 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_array_offset == NULL );
    var_array_offset = tmp_assign_source_28;

    tmp_source_name_8 = var_mmap;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_mmap );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_called_instance_7 = var_fid;

    if ( tmp_called_instance_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 264;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 264;
    tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_fileno );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 264;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_bytes;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_acc;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "acc" );
        exception_tb = NULL;

        exception_lineno = 264;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_access;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = var_start;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_offset;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 264;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_mm == NULL );
    var_mm = tmp_assign_source_29;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndarray" );
        exception_tb = NULL;

        exception_lineno = 266;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___new__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_subtype;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_shape;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 266;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_dict_value_3 = var_descr;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = var_mm;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_buffer;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = var_array_offset;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_offset;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_order;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 266;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_self == NULL );
    var_self = tmp_assign_source_30;

    tmp_assattr_name_1 = var_mm;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = var_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mmap, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_offset;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = var_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_offset, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_mode;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = var_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_mode, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_inst_2 = par_filename;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
        exception_tb = NULL;

        exception_lineno = 272;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_10 = var_os;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_instance_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_filename;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 273;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abspath, call_args );
    }

    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = var_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_filename, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 273;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_12;
    branch_no_12:;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_is_pathlib_path );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_pathlib_path );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_pathlib_path" );
        exception_tb = NULL;

        exception_lineno = 274;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_filename;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 274;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 274;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_instance_9 = par_filename;

    CHECK_OBJECT( tmp_called_instance_9 );
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 275;
    tmp_assattr_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_resolve );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = var_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_filename, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 275;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    goto branch_end_13;
    branch_no_13:;
    tmp_hasattr_value_1 = par_filename;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_2 = const_str_plain_name;
    tmp_and_left_value_5 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_2 );
    if ( tmp_and_left_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_5 = CHECK_IF_TRUE( tmp_and_left_value_5 );
    if ( tmp_and_left_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_5 == 1 )
    {
        goto and_right_5;
    }
    else
    {
        goto and_left_5;
    }
    and_right_5:;
    tmp_source_name_11 = par_filename;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_name );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
        exception_tb = NULL;

        exception_lineno = 278;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_5 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_and_right_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_6 = tmp_and_right_value_5;
    goto and_end_5;
    and_left_5:;
    tmp_cond_value_6 = tmp_and_left_value_5;
    and_end_5:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_13 = var_os;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_path );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_abspath );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_filename;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_name );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 279;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assattr_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = var_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_filename, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 279;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    goto branch_end_14;
    branch_no_14:;
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = var_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_filename, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    tmp_cond_value_7 = var_own_file;

    if ( tmp_cond_value_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "own_file" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_instance_10 = var_fid;

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "fid" );
        exception_tb = NULL;

        exception_lineno = 285;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_d16783360423a511c87f879afd0d4acc->m_frame.f_lineno = 285;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d16783360423a511c87f879afd0d4acc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d16783360423a511c87f879afd0d4acc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d16783360423a511c87f879afd0d4acc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d16783360423a511c87f879afd0d4acc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d16783360423a511c87f879afd0d4acc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d16783360423a511c87f879afd0d4acc,
        type_description_1,
        par_subtype,
        par_filename,
        par_dtype,
        par_mode,
        par_offset,
        par_shape,
        par_order,
        var_mmap,
        var_os,
        var_fid,
        var_own_file,
        var_flen,
        var_descr,
        var__dbytes,
        var_bytes,
        var_size,
        var_k,
        var_acc,
        var_start,
        var_array_offset,
        var_mm,
        var_self
    );


    // Release cached frame.
    if ( frame_d16783360423a511c87f879afd0d4acc == cache_frame_d16783360423a511c87f879afd0d4acc )
    {
        Py_DECREF( frame_d16783360423a511c87f879afd0d4acc );
    }
    cache_frame_d16783360423a511c87f879afd0d4acc = NULL;

    assertFrameObject( frame_d16783360423a511c87f879afd0d4acc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_self;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)var_mmap );
    Py_DECREF( var_mmap );
    var_mmap = NULL;

    CHECK_OBJECT( (PyObject *)var_os );
    Py_DECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_fid );
    var_fid = NULL;

    Py_XDECREF( var_own_file );
    var_own_file = NULL;

    CHECK_OBJECT( (PyObject *)var_flen );
    Py_DECREF( var_flen );
    var_flen = NULL;

    CHECK_OBJECT( (PyObject *)var_descr );
    Py_DECREF( var_descr );
    var_descr = NULL;

    CHECK_OBJECT( (PyObject *)var__dbytes );
    Py_DECREF( var__dbytes );
    var__dbytes = NULL;

    CHECK_OBJECT( (PyObject *)var_bytes );
    Py_DECREF( var_bytes );
    var_bytes = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_acc );
    var_acc = NULL;

    CHECK_OBJECT( (PyObject *)var_start );
    Py_DECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)var_array_offset );
    Py_DECREF( var_array_offset );
    var_array_offset = NULL;

    CHECK_OBJECT( (PyObject *)var_mm );
    Py_DECREF( var_mm );
    var_mm = NULL;

    CHECK_OBJECT( (PyObject *)var_self );
    Py_DECREF( var_self );
    var_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    CHECK_OBJECT( (PyObject *)var_mmap );
    Py_DECREF( var_mmap );
    var_mmap = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_fid );
    var_fid = NULL;

    Py_XDECREF( var_own_file );
    var_own_file = NULL;

    Py_XDECREF( var_flen );
    var_flen = NULL;

    Py_XDECREF( var_descr );
    var_descr = NULL;

    Py_XDECREF( var__dbytes );
    var__dbytes = NULL;

    Py_XDECREF( var_bytes );
    var_bytes = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_acc );
    var_acc = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_array_offset );
    var_array_offset = NULL;

    Py_XDECREF( var_mm );
    var_mm = NULL;

    Py_XDECREF( var_self );
    var_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
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


static PyObject *impl_numpy$core$memmap$$$function_2___array_finalize__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_0ab3e57ff30ef87fa8a593bbf47ee07d = NULL;

    struct Nuitka_FrameObject *frame_0ab3e57ff30ef87fa8a593bbf47ee07d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ab3e57ff30ef87fa8a593bbf47ee07d, codeobj_0ab3e57ff30ef87fa8a593bbf47ee07d, module_numpy$core$memmap, sizeof(void *)+sizeof(void *) );
    frame_0ab3e57ff30ef87fa8a593bbf47ee07d = cache_frame_0ab3e57ff30ef87fa8a593bbf47ee07d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ab3e57ff30ef87fa8a593bbf47ee07d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ab3e57ff30ef87fa8a593bbf47ee07d ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_value_1 = par_obj;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain__mmap;
    tmp_and_left_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "oo";
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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 290;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_obj;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_0ab3e57ff30ef87fa8a593bbf47ee07d->m_frame.f_lineno = 290;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_may_share_memory, call_args );
    }

    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 290;
        type_description_1 = "oo";
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
    tmp_source_name_1 = par_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mmap );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mmap, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 291;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_2 = par_obj;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_filename );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_filename, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 292;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_3 = par_obj;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_offset );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_offset, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 293;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_4 = par_obj;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mode );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_mode, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 294;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assattr_name_5 = Py_None;
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__mmap, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_filename, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_offset, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = Py_None;
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_mode, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ab3e57ff30ef87fa8a593bbf47ee07d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ab3e57ff30ef87fa8a593bbf47ee07d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ab3e57ff30ef87fa8a593bbf47ee07d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ab3e57ff30ef87fa8a593bbf47ee07d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ab3e57ff30ef87fa8a593bbf47ee07d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ab3e57ff30ef87fa8a593bbf47ee07d,
        type_description_1,
        par_self,
        par_obj
    );


    // Release cached frame.
    if ( frame_0ab3e57ff30ef87fa8a593bbf47ee07d == cache_frame_0ab3e57ff30ef87fa8a593bbf47ee07d )
    {
        Py_DECREF( frame_0ab3e57ff30ef87fa8a593bbf47ee07d );
    }
    cache_frame_0ab3e57ff30ef87fa8a593bbf47ee07d = NULL;

    assertFrameObject( frame_0ab3e57ff30ef87fa8a593bbf47ee07d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_2___array_finalize__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_2___array_finalize__ );
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


static PyObject *impl_numpy$core$memmap$$$function_3_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5ee550d16a7592b41c328955367fc773 = NULL;

    struct Nuitka_FrameObject *frame_5ee550d16a7592b41c328955367fc773;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5ee550d16a7592b41c328955367fc773, codeobj_5ee550d16a7592b41c328955367fc773, module_numpy$core$memmap, sizeof(void *) );
    frame_5ee550d16a7592b41c328955367fc773 = cache_frame_5ee550d16a7592b41c328955367fc773;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ee550d16a7592b41c328955367fc773 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ee550d16a7592b41c328955367fc773 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_base );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_hasattr_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_base );
    if ( tmp_hasattr_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_hasattr_attr_1 = const_str_plain_flush;
    tmp_and_right_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    Py_DECREF( tmp_hasattr_value_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_base );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_5ee550d16a7592b41c328955367fc773->m_frame.f_lineno = 317;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ee550d16a7592b41c328955367fc773 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5ee550d16a7592b41c328955367fc773 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ee550d16a7592b41c328955367fc773, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ee550d16a7592b41c328955367fc773->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ee550d16a7592b41c328955367fc773, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ee550d16a7592b41c328955367fc773,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5ee550d16a7592b41c328955367fc773 == cache_frame_5ee550d16a7592b41c328955367fc773 )
    {
        Py_DECREF( frame_5ee550d16a7592b41c328955367fc773 );
    }
    cache_frame_5ee550d16a7592b41c328955367fc773 = NULL;

    assertFrameObject( frame_5ee550d16a7592b41c328955367fc773 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_3_flush );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_3_flush );
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


static PyObject *impl_numpy$core$memmap$$$function_4___array_wrap__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arr = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_object_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_d78c3437b1f7941a27fe0b5d7b0dbb2f = NULL;

    struct Nuitka_FrameObject *frame_d78c3437b1f7941a27fe0b5d7b0dbb2f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d78c3437b1f7941a27fe0b5d7b0dbb2f, codeobj_d78c3437b1f7941a27fe0b5d7b0dbb2f, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d78c3437b1f7941a27fe0b5d7b0dbb2f = cache_frame_d78c3437b1f7941a27fe0b5d7b0dbb2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
        exception_tb = NULL;

        exception_lineno = 320;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_arr;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_context;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_d78c3437b1f7941a27fe0b5d7b0dbb2f->m_frame.f_lineno = 320;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___array_wrap__, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_arr;
        assert( old != NULL );
        par_arr = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_arr;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_type_arg_1 = par_self;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_2 != NULL );
    tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

    if (unlikely( tmp_compexpr_right_2 == NULL ))
    {
        tmp_compexpr_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
    }

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
        exception_tb = NULL;

        exception_lineno = 325;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_arr;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_arr;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_empty;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 329;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscribed_name_1 = par_arr;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_tuple_empty;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_2 = par_arr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_view );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 332;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndarray );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 332;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_d78c3437b1f7941a27fe0b5d7b0dbb2f->m_frame.f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d78c3437b1f7941a27fe0b5d7b0dbb2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d78c3437b1f7941a27fe0b5d7b0dbb2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d78c3437b1f7941a27fe0b5d7b0dbb2f,
        type_description_1,
        par_self,
        par_arr,
        par_context
    );


    // Release cached frame.
    if ( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f == cache_frame_d78c3437b1f7941a27fe0b5d7b0dbb2f )
    {
        Py_DECREF( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f );
    }
    cache_frame_d78c3437b1f7941a27fe0b5d7b0dbb2f = NULL;

    assertFrameObject( frame_d78c3437b1f7941a27fe0b5d7b0dbb2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_4___array_wrap__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_4___array_wrap__ );
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


static PyObject *impl_numpy$core$memmap$$$function_5___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_index = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_object_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_name_1;
    static struct Nuitka_FrameObject *cache_frame_ca46de576e62725e677c57f5a3757300 = NULL;

    struct Nuitka_FrameObject *frame_ca46de576e62725e677c57f5a3757300;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca46de576e62725e677c57f5a3757300, codeobj_ca46de576e62725e677c57f5a3757300, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ca46de576e62725e677c57f5a3757300 = cache_frame_ca46de576e62725e677c57f5a3757300;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca46de576e62725e677c57f5a3757300 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca46de576e62725e677c57f5a3757300 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
        exception_tb = NULL;

        exception_lineno = 335;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_self;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_index;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ca46de576e62725e677c57f5a3757300->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___getitem__, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_type_arg_1 = var_res;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_1 != NULL );
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
        exception_tb = NULL;

        exception_lineno = 336;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_source_name_1 = var_res;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mmap );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 == tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = var_res;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_view );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndarray" );
        exception_tb = NULL;

        exception_lineno = 337;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_type;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_ca46de576e62725e677c57f5a3757300->m_frame.f_lineno = 337;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca46de576e62725e677c57f5a3757300 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca46de576e62725e677c57f5a3757300 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca46de576e62725e677c57f5a3757300 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca46de576e62725e677c57f5a3757300, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca46de576e62725e677c57f5a3757300->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca46de576e62725e677c57f5a3757300, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca46de576e62725e677c57f5a3757300,
        type_description_1,
        par_self,
        par_index,
        var_res
    );


    // Release cached frame.
    if ( frame_ca46de576e62725e677c57f5a3757300 == cache_frame_ca46de576e62725e677c57f5a3757300 )
    {
        Py_DECREF( frame_ca46de576e62725e677c57f5a3757300 );
    }
    cache_frame_ca46de576e62725e677c57f5a3757300 = NULL;

    assertFrameObject( frame_ca46de576e62725e677c57f5a3757300 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_5___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_5___getitem__ );
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



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_1___new__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d16783360423a511c87f879afd0d4acc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$memmap,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_2___array_finalize__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_2___array_finalize__,
        const_str_plain___array_finalize__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0ab3e57ff30ef87fa8a593bbf47ee07d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$memmap,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_3_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_3_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5ee550d16a7592b41c328955367fc773,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$memmap,
        const_str_digest_ac4e4595c9916a96d232c691fe937482,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_4___array_wrap__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_4___array_wrap__,
        const_str_plain___array_wrap__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d78c3437b1f7941a27fe0b5d7b0dbb2f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$memmap,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_5___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_5___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ca46de576e62725e677c57f5a3757300,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$memmap,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$memmap =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.memmap",   /* m_name */
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

MOD_INIT_DECL( numpy$core$memmap )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$memmap );
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
    puts("numpy.core.memmap: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.memmap: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$memmap" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$memmap = Py_InitModule4(
        "numpy.core.memmap",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$memmap = PyModule_Create( &mdef_numpy$core$memmap );
#endif

    moduledict_numpy$core$memmap = MODULE_DICT( module_numpy$core$memmap );

    CHECK_OBJECT( module_numpy$core$memmap );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_263887fd84384d5e2143287b88ff6e41, module_numpy$core$memmap );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___array_priority__ = NULL;
    PyObject *outline_0_var___new__ = NULL;
    PyObject *outline_0_var___array_finalize__ = NULL;
    PyObject *outline_0_var_flush = NULL;
    PyObject *outline_0_var___array_wrap__ = NULL;
    PyObject *outline_0_var___getitem__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_key_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_staticmethod_arg_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_8c36b393ed4f6d6144a825cd63b86870_2 = NULL;

    struct Nuitka_FrameObject *frame_8c36b393ed4f6d6144a825cd63b86870_2;

    struct Nuitka_FrameObject *frame_23f1ea7b89bcd4d0c953d722688f4acb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e62ff57319f9c1046a4500e380a1384d;
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_23f1ea7b89bcd4d0c953d722688f4acb = MAKE_MODULE_FRAME( codeobj_23f1ea7b89bcd4d0c953d722688f4acb, module_numpy$core$memmap );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_23f1ea7b89bcd4d0c953d722688f4acb );
    assert( Py_REFCNT( frame_23f1ea7b89bcd4d0c953d722688f4acb ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_numpy;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$memmap;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_23f1ea7b89bcd4d0c953d722688f4acb->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_numeric;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$memmap;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_23f1ea7b89bcd4d0c953d722688f4acb->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_uint8 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_uint8, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ndarray );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_dtype );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtype, tmp_assign_source_12 );
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_3 = const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$memmap;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_2d9cc1c49edb34f7643049b9176d8757_tuple;
    tmp_level_name_3 = const_int_0;
    frame_23f1ea7b89bcd4d0c953d722688f4acb->m_frame.f_lineno = 5;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_long );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_basestring );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_15 );
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_is_pathlib_path );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_is_pathlib_path, tmp_assign_source_16 );
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_assign_source_17 = LIST_COPY( const_list_str_plain_memmap_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    tmp_assign_source_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtype );

    if (unlikely( tmp_assign_source_18 == NULL ))
    {
        tmp_assign_source_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
    }

    if ( tmp_assign_source_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "dtype" );
        exception_tb = NULL;

        exception_lineno = 9;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtypedescr, tmp_assign_source_18 );
    tmp_assign_source_19 = LIST_COPY( const_list_64b4e14366094971fa8910a55e360e41_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_valid_filemodes, tmp_assign_source_19 );
    tmp_assign_source_20 = LIST_COPY( const_list_0be409bc3e85d5239a38ebc1056a8c4a_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_writeable_filemodes, tmp_assign_source_20 );
    tmp_assign_source_21 = PyDict_Copy( const_dict_5a6585184ef887d5c8da5415908fefdf );
    UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_mode_equivalents, tmp_assign_source_21 );
    // Tried code:
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ndarray" );
        exception_tb = NULL;

        exception_lineno = 20;

        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_22;

    tmp_assign_source_24 = const_str_digest_263887fd84384d5e2143287b88ff6e41;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_24 );
    outline_0_var___module__ = tmp_assign_source_24;

    tmp_assign_source_25 = const_str_digest_e44be7e8582cd0b4d1f7cba88b70f534;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_25 );
    outline_0_var___doc__ = tmp_assign_source_25;

    tmp_assign_source_26 = const_float__minus_100_0;
    assert( outline_0_var___array_priority__ == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_0_var___array_priority__ = tmp_assign_source_26;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c36b393ed4f6d6144a825cd63b86870_2, codeobj_8c36b393ed4f6d6144a825cd63b86870, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8c36b393ed4f6d6144a825cd63b86870_2 = cache_frame_8c36b393ed4f6d6144a825cd63b86870_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c36b393ed4f6d6144a825cd63b86870_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c36b393ed4f6d6144a825cd63b86870_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_1 = PyTuple_New( 5 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_uint8 );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "uint8" );
        exception_tb = NULL;

        exception_lineno = 202;
        type_description_2 = "oooNNNNN";
        goto frame_exception_exit_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_digest_dd7618bbb3c1cb615487560bff75714c;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain_C;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_2 );
    tmp_staticmethod_arg_1 = MAKE_FUNCTION_numpy$core$memmap$$$function_1___new__( tmp_defaults_1 );
    tmp_assign_source_27 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
    Py_DECREF( tmp_staticmethod_arg_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_2 = "oooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___new__ == NULL );
    outline_0_var___new__ = tmp_assign_source_27;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c36b393ed4f6d6144a825cd63b86870_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c36b393ed4f6d6144a825cd63b86870_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c36b393ed4f6d6144a825cd63b86870_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c36b393ed4f6d6144a825cd63b86870_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c36b393ed4f6d6144a825cd63b86870_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c36b393ed4f6d6144a825cd63b86870_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var___array_priority__,
        outline_0_var___new__,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_8c36b393ed4f6d6144a825cd63b86870_2 == cache_frame_8c36b393ed4f6d6144a825cd63b86870_2 )
    {
        Py_DECREF( frame_8c36b393ed4f6d6144a825cd63b86870_2 );
    }
    cache_frame_8c36b393ed4f6d6144a825cd63b86870_2 = NULL;

    assertFrameObject( frame_8c36b393ed4f6d6144a825cd63b86870_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_5;
    skip_nested_handling_1:;
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$core$memmap$$$function_2___array_finalize__(  );
    assert( outline_0_var___array_finalize__ == NULL );
    outline_0_var___array_finalize__ = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_numpy$core$memmap$$$function_3_flush(  );
    assert( outline_0_var_flush == NULL );
    outline_0_var_flush = tmp_assign_source_29;

    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$core$memmap$$$function_4___array_wrap__( tmp_defaults_2 );
    assert( outline_0_var___array_wrap__ == NULL );
    outline_0_var___array_wrap__ = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$memmap$$$function_5___getitem__(  );
    assert( outline_0_var___getitem__ == NULL );
    outline_0_var___getitem__ = tmp_assign_source_31;

    tmp_outline_return_value_1 = _PyDict_NewPresized( 8 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var___doc__;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var___array_priority__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___array_priority__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var___new__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___new__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var___array_finalize__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___array_finalize__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var_flush;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_flush;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var___array_wrap__;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain___array_wrap__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var___getitem__;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain___getitem__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___array_priority__ );
    Py_DECREF( outline_0_var___array_priority__ );
    outline_0_var___array_priority__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___new__ );
    Py_DECREF( outline_0_var___new__ );
    outline_0_var___new__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___array_finalize__ );
    Py_DECREF( outline_0_var___array_finalize__ );
    outline_0_var___array_finalize__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_flush );
    Py_DECREF( outline_0_var_flush );
    outline_0_var_flush = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___array_wrap__ );
    Py_DECREF( outline_0_var___array_wrap__ );
    outline_0_var___array_wrap__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___getitem__ );
    Py_DECREF( outline_0_var___getitem__ );
    outline_0_var___getitem__ = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___array_priority__ );
    Py_DECREF( outline_0_var___array_priority__ );
    outline_0_var___array_priority__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 20;
    goto try_except_handler_4;
    outline_result_1:;
    tmp_assign_source_23 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_23;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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
    tmp_assign_source_32 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_33;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_7;
    }
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_32 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_32;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_memmap;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_23f1ea7b89bcd4d0c953d722688f4acb->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_34;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23f1ea7b89bcd4d0c953d722688f4acb );
#endif
    popFrameStack();

    assertFrameObject( frame_23f1ea7b89bcd4d0c953d722688f4acb );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_23f1ea7b89bcd4d0c953d722688f4acb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23f1ea7b89bcd4d0c953d722688f4acb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23f1ea7b89bcd4d0c953d722688f4acb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23f1ea7b89bcd4d0c953d722688f4acb, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_35 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_35 );
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap, tmp_assign_source_35 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$core$memmap );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
