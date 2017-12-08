/* Generated code for Python source for module 'numpy.compat.py3k'
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

/* The _module_numpy$compat$py3k is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$compat$py3k;
PyDictObject *moduledict_numpy$compat$py3k;

/* The module constants used, if any. */
static PyObject *const_str_plain_getexception;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_mod;
extern PyObject *const_str_plain_unicode_escape;
static PyObject *const_str_plain_BufferedWriter;
extern PyObject *const_str_plain_decode;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_580248a9da3628d19f90a85c7aab681f;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_plain_open_latin1;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_str_plain_encode;
static PyObject *const_tuple_str_plain_latin1_tuple;
static PyObject *const_str_digest_9b8ee87f2d457a8f70397caa2e40726b;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_tuple_str_plain_f_tuple;
static PyObject *const_str_plain_asunicode;
static PyObject *const_str_plain_strchar;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_asbytes_nested;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_plain_Path;
static PyObject *const_str_plain_FileIO;
extern PyObject *const_str_plain_is_pathlib_path;
static PyObject *const_tuple_str_plain_Path_tuple;
static PyObject *const_str_digest_b04805bd50cd298c3e9936d013e6ad93;
static PyObject *const_str_digest_3637c469b53fe6644e7cf4b46e8d7ab0;
extern PyObject *const_str_plain_asbytes;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_find_module;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_r_tuple;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_8683e04af1485129f11446873d4f77ed;
extern PyObject *const_str_plain_isfileobj;
static PyObject *const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple;
static PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
extern PyObject *const_str_plain_dirname;
static PyObject *const_str_plain_sixu;
extern PyObject *const_str_plain_latin1;
extern PyObject *const_str_plain_asstr;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_BufferedReader;
static PyObject *const_str_plain_pathlib;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_bytes;
static PyObject *const_tuple_str_plain_filename_str_plain_mode_tuple;
static PyObject *const_list_f89ad9d3b70b97fa730ed478887a9c57_list;
static PyObject *const_str_plain_fo;
extern PyObject *const_str_plain_fn;
extern PyObject *const_str_plain_U;
static PyObject *const_str_plain_SourceFileLoader;
static PyObject *const_str_plain_machinery;
extern PyObject *const_str_plain_S;
extern PyObject *const_str_plain_load_module;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_npy_load_module;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_imp;
static PyObject *const_str_digest_8ac4896b9590b15a7e5c623c8f06a250;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_65bec798bc2cd8b837759d8fe641668b;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_exc_info;
static PyObject *const_str_digest_a3ce3cd9a471be347bd47d34e7da776f;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_tuple_str_plain_x_str_plain_y_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_asunicode_nested;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_getexception = UNSTREAM_STRING( &constant_bin[ 236776 ], 12, 1 );
    const_str_plain_BufferedWriter = UNSTREAM_STRING( &constant_bin[ 236788 ], 14, 1 );
    const_str_digest_580248a9da3628d19f90a85c7aab681f = UNSTREAM_STRING( &constant_bin[ 236802 ], 50, 0 );
    const_str_plain_open_latin1 = UNSTREAM_STRING( &constant_bin[ 236852 ], 11, 1 );
    const_tuple_str_plain_latin1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_latin1_tuple, 0, const_str_plain_latin1 ); Py_INCREF( const_str_plain_latin1 );
    const_str_digest_9b8ee87f2d457a8f70397caa2e40726b = UNSTREAM_STRING( &constant_bin[ 236863 ], 26, 0 );
    const_str_plain_asunicode = UNSTREAM_STRING( &constant_bin[ 236889 ], 9, 1 );
    const_str_plain_strchar = UNSTREAM_STRING( &constant_bin[ 236898 ], 7, 1 );
    const_str_plain_Path = UNSTREAM_STRING( &constant_bin[ 2709 ], 4, 1 );
    const_str_plain_FileIO = UNSTREAM_STRING( &constant_bin[ 236905 ], 6, 1 );
    const_tuple_str_plain_Path_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Path_tuple, 0, const_str_plain_Path ); Py_INCREF( const_str_plain_Path );
    const_str_digest_b04805bd50cd298c3e9936d013e6ad93 = UNSTREAM_STRING( &constant_bin[ 236911 ], 381, 0 );
    const_str_digest_3637c469b53fe6644e7cf4b46e8d7ab0 = UNSTREAM_STRING( &constant_bin[ 237292 ], 356, 0 );
    const_str_digest_8683e04af1485129f11446873d4f77ed = UNSTREAM_STRING( &constant_bin[ 237648 ], 32, 0 );
    const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 1, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 3, const_str_plain_imp ); Py_INCREF( const_str_plain_imp );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 4, const_str_plain_os ); Py_INCREF( const_str_plain_os );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    const_str_plain_fo = UNSTREAM_STRING( &constant_bin[ 763 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 6, const_str_plain_fo ); Py_INCREF( const_str_plain_fo );
    PyTuple_SET_ITEM( const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 7, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d = UNSTREAM_STRING( &constant_bin[ 237680 ], 19, 0 );
    const_str_plain_sixu = UNSTREAM_STRING( &constant_bin[ 237699 ], 4, 1 );
    const_str_plain_BufferedReader = UNSTREAM_STRING( &constant_bin[ 237703 ], 14, 1 );
    const_str_plain_pathlib = UNSTREAM_STRING( &constant_bin[ 237717 ], 7, 1 );
    const_tuple_str_plain_filename_str_plain_mode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_mode_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_mode_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_list_f89ad9d3b70b97fa730ed478887a9c57_list = PyList_New( 18 );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 0, const_str_plain_bytes ); Py_INCREF( const_str_plain_bytes );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 1, const_str_plain_asbytes ); Py_INCREF( const_str_plain_asbytes );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 2, const_str_plain_isfileobj ); Py_INCREF( const_str_plain_isfileobj );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 3, const_str_plain_getexception ); Py_INCREF( const_str_plain_getexception );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 4, const_str_plain_strchar ); Py_INCREF( const_str_plain_strchar );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 5, const_str_plain_unicode ); Py_INCREF( const_str_plain_unicode );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 6, const_str_plain_asunicode ); Py_INCREF( const_str_plain_asunicode );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 7, const_str_plain_asbytes_nested ); Py_INCREF( const_str_plain_asbytes_nested );
    const_str_plain_asunicode_nested = UNSTREAM_STRING( &constant_bin[ 237724 ], 16, 1 );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 8, const_str_plain_asunicode_nested ); Py_INCREF( const_str_plain_asunicode_nested );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 9, const_str_plain_asstr ); Py_INCREF( const_str_plain_asstr );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 10, const_str_plain_open_latin1 ); Py_INCREF( const_str_plain_open_latin1 );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 11, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 12, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 13, const_str_plain_sixu ); Py_INCREF( const_str_plain_sixu );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 14, const_str_plain_integer_types ); Py_INCREF( const_str_plain_integer_types );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 15, const_str_plain_is_pathlib_path ); Py_INCREF( const_str_plain_is_pathlib_path );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 16, const_str_plain_npy_load_module ); Py_INCREF( const_str_plain_npy_load_module );
    PyList_SET_ITEM( const_list_f89ad9d3b70b97fa730ed478887a9c57_list, 17, const_str_plain_Path ); Py_INCREF( const_str_plain_Path );
    const_str_plain_SourceFileLoader = UNSTREAM_STRING( &constant_bin[ 237740 ], 16, 1 );
    const_str_plain_machinery = UNSTREAM_STRING( &constant_bin[ 122689 ], 9, 1 );
    const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 1, const_str_plain_fn ); Py_INCREF( const_str_plain_fn );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 2, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    PyTuple_SET_ITEM( const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 3, const_str_plain_importlib ); Py_INCREF( const_str_plain_importlib );
    const_str_digest_8ac4896b9590b15a7e5c623c8f06a250 = UNSTREAM_STRING( &constant_bin[ 237756 ], 53, 0 );
    const_str_digest_a3ce3cd9a471be347bd47d34e7da776f = UNSTREAM_STRING( &constant_bin[ 237809 ], 59, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$compat$py3k( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4028997bee2ec3647f617a38fd7568fd;
static PyCodeObject *codeobj_36378d84a52094033d68aff95d0efd7b;
static PyCodeObject *codeobj_16668e167fbc1291b69ff3800bdc2bb8;
static PyCodeObject *codeobj_dbb6efbf1cc806d339dfe3554f790321;
static PyCodeObject *codeobj_faabdc23e00583f6377e599a752697ea;
static PyCodeObject *codeobj_dab95231b66c29dc6eaeb8266a242d57;
static PyCodeObject *codeobj_65cb2640cb436c9ade6547c859d01dd4;
static PyCodeObject *codeobj_73e5fbb7a4fd7f77a6483ff8cc0d53b6;
static PyCodeObject *codeobj_f7b319c0ebf454b0ea3e73f5c383d328;
static PyCodeObject *codeobj_88557e1c4048aae2846726a4431d5f57;
static PyCodeObject *codeobj_a53e5bec885621d21c6cd4135661e2f1;
static PyCodeObject *codeobj_13103762360f45d053c97acacbfa034e;
static PyCodeObject *codeobj_cc0abee3e3dc7dec8a4c7c6abf87c424;
static PyCodeObject *codeobj_f1280ba5471773530a09994d30edccde;
static PyCodeObject *codeobj_beea94dc29b8aa3f2fe343dde2550b25;
static PyCodeObject *codeobj_3f440d46c4e2aa34c49b51b86e709f02;
static PyCodeObject *codeobj_87d7b1b2e1d713ee3a7486d86748131e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_580248a9da3628d19f90a85c7aab681f;
    codeobj_4028997bee2ec3647f617a38fd7568fd = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9b8ee87f2d457a8f70397caa2e40726b, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_36378d84a52094033d68aff95d0efd7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asbytes, 32, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_16668e167fbc1291b69ff3800bdc2bb8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asbytes_nested, 82, const_tuple_str_plain_x_str_plain_y_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dbb6efbf1cc806d339dfe3554f790321 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asstr, 37, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_faabdc23e00583f6377e599a752697ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asunicode, 27, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dab95231b66c29dc6eaeb8266a242d57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asunicode, 67, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_65cb2640cb436c9ade6547c859d01dd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asunicode_nested, 88, const_tuple_str_plain_x_str_plain_y_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_73e5fbb7a4fd7f77a6483ff8cc0d53b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getexception, 79, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f7b319c0ebf454b0ea3e73f5c383d328 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_pathlib_path, 94, const_tuple_str_plain_obj_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88557e1c4048aae2846726a4431d5f57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isfileobj, 42, const_tuple_str_plain_f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a53e5bec885621d21c6cd4135661e2f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isfileobj, 64, const_tuple_str_plain_f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_13103762360f45d053c97acacbfa034e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npy_load_module, 101, const_tuple_c0d7572585d6f8fe736485d655e4b048_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cc0abee3e3dc7dec8a4c7c6abf87c424 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npy_load_module, 124, const_tuple_986c2f159cb481579bf6f58682fb85d2_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f1280ba5471773530a09994d30edccde = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_latin1, 45, const_tuple_str_plain_filename_str_plain_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_beea94dc29b8aa3f2fe343dde2550b25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_latin1, 72, const_tuple_str_plain_filename_str_plain_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3f440d46c4e2aa34c49b51b86e709f02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sixu, 48, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_87d7b1b2e1d713ee3a7486d86748131e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sixu, 75, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_10_sixu(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_11_getexception(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_12_asbytes_nested(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_13_asunicode_nested(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_14_is_pathlib_path(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_15_npy_load_module( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_16_npy_load_module( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_1_asunicode(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_2_asbytes(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_3_asstr(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_4_isfileobj(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_5_open_latin1( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_6_sixu(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_7_isfileobj(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_8_asunicode(  );


static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_9_open_latin1( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$compat$py3k$$$function_1_asunicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_faabdc23e00583f6377e599a752697ea = NULL;

    struct Nuitka_FrameObject *frame_faabdc23e00583f6377e599a752697ea;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_faabdc23e00583f6377e599a752697ea, codeobj_faabdc23e00583f6377e599a752697ea, module_numpy$compat$py3k, sizeof(void *) );
    frame_faabdc23e00583f6377e599a752697ea = cache_frame_faabdc23e00583f6377e599a752697ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_faabdc23e00583f6377e599a752697ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_faabdc23e00583f6377e599a752697ea ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_faabdc23e00583f6377e599a752697ea->m_frame.f_lineno = 29;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faabdc23e00583f6377e599a752697ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_faabdc23e00583f6377e599a752697ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_faabdc23e00583f6377e599a752697ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_faabdc23e00583f6377e599a752697ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_faabdc23e00583f6377e599a752697ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_faabdc23e00583f6377e599a752697ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_faabdc23e00583f6377e599a752697ea,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_faabdc23e00583f6377e599a752697ea == cache_frame_faabdc23e00583f6377e599a752697ea )
    {
        Py_DECREF( frame_faabdc23e00583f6377e599a752697ea );
    }
    cache_frame_faabdc23e00583f6377e599a752697ea = NULL;

    assertFrameObject( frame_faabdc23e00583f6377e599a752697ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_1_asunicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_1_asunicode );
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


static PyObject *impl_numpy$compat$py3k$$$function_2_asbytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_36378d84a52094033d68aff95d0efd7b = NULL;

    struct Nuitka_FrameObject *frame_36378d84a52094033d68aff95d0efd7b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36378d84a52094033d68aff95d0efd7b, codeobj_36378d84a52094033d68aff95d0efd7b, module_numpy$compat$py3k, sizeof(void *) );
    frame_36378d84a52094033d68aff95d0efd7b = cache_frame_36378d84a52094033d68aff95d0efd7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36378d84a52094033d68aff95d0efd7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36378d84a52094033d68aff95d0efd7b ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_called_instance_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_36378d84a52094033d68aff95d0efd7b->m_frame.f_lineno = 35;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36378d84a52094033d68aff95d0efd7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_36378d84a52094033d68aff95d0efd7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36378d84a52094033d68aff95d0efd7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36378d84a52094033d68aff95d0efd7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36378d84a52094033d68aff95d0efd7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36378d84a52094033d68aff95d0efd7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36378d84a52094033d68aff95d0efd7b,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_36378d84a52094033d68aff95d0efd7b == cache_frame_36378d84a52094033d68aff95d0efd7b )
    {
        Py_DECREF( frame_36378d84a52094033d68aff95d0efd7b );
    }
    cache_frame_36378d84a52094033d68aff95d0efd7b = NULL;

    assertFrameObject( frame_36378d84a52094033d68aff95d0efd7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_2_asbytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_2_asbytes );
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


static PyObject *impl_numpy$compat$py3k$$$function_3_asstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_dbb6efbf1cc806d339dfe3554f790321 = NULL;

    struct Nuitka_FrameObject *frame_dbb6efbf1cc806d339dfe3554f790321;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dbb6efbf1cc806d339dfe3554f790321, codeobj_dbb6efbf1cc806d339dfe3554f790321, module_numpy$compat$py3k, sizeof(void *) );
    frame_dbb6efbf1cc806d339dfe3554f790321 = cache_frame_dbb6efbf1cc806d339dfe3554f790321;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dbb6efbf1cc806d339dfe3554f790321 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dbb6efbf1cc806d339dfe3554f790321 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_dbb6efbf1cc806d339dfe3554f790321->m_frame.f_lineno = 39;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_return_value = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbb6efbf1cc806d339dfe3554f790321 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbb6efbf1cc806d339dfe3554f790321 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbb6efbf1cc806d339dfe3554f790321 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dbb6efbf1cc806d339dfe3554f790321, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dbb6efbf1cc806d339dfe3554f790321->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dbb6efbf1cc806d339dfe3554f790321, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dbb6efbf1cc806d339dfe3554f790321,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_dbb6efbf1cc806d339dfe3554f790321 == cache_frame_dbb6efbf1cc806d339dfe3554f790321 )
    {
        Py_DECREF( frame_dbb6efbf1cc806d339dfe3554f790321 );
    }
    cache_frame_dbb6efbf1cc806d339dfe3554f790321 = NULL;

    assertFrameObject( frame_dbb6efbf1cc806d339dfe3554f790321 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_3_asstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_3_asstr );
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


static PyObject *impl_numpy$compat$py3k$$$function_4_isfileobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_88557e1c4048aae2846726a4431d5f57 = NULL;

    struct Nuitka_FrameObject *frame_88557e1c4048aae2846726a4431d5f57;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_88557e1c4048aae2846726a4431d5f57, codeobj_88557e1c4048aae2846726a4431d5f57, module_numpy$compat$py3k, sizeof(void *) );
    frame_88557e1c4048aae2846726a4431d5f57 = cache_frame_88557e1c4048aae2846726a4431d5f57;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_88557e1c4048aae2846726a4431d5f57 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_88557e1c4048aae2846726a4431d5f57 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_f;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_FileIO );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BufferedReader );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "io" );
        exception_tb = NULL;

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BufferedWriter );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 2, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88557e1c4048aae2846726a4431d5f57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_88557e1c4048aae2846726a4431d5f57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_88557e1c4048aae2846726a4431d5f57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_88557e1c4048aae2846726a4431d5f57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_88557e1c4048aae2846726a4431d5f57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_88557e1c4048aae2846726a4431d5f57, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_88557e1c4048aae2846726a4431d5f57,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_88557e1c4048aae2846726a4431d5f57 == cache_frame_88557e1c4048aae2846726a4431d5f57 )
    {
        Py_DECREF( frame_88557e1c4048aae2846726a4431d5f57 );
    }
    cache_frame_88557e1c4048aae2846726a4431d5f57 = NULL;

    assertFrameObject( frame_88557e1c4048aae2846726a4431d5f57 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_4_isfileobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_4_isfileobj );
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


static PyObject *impl_numpy$compat$py3k$$$function_5_open_latin1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    static struct Nuitka_FrameObject *cache_frame_f1280ba5471773530a09994d30edccde = NULL;

    struct Nuitka_FrameObject *frame_f1280ba5471773530a09994d30edccde;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1280ba5471773530a09994d30edccde, codeobj_f1280ba5471773530a09994d30edccde, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_f1280ba5471773530a09994d30edccde = cache_frame_f1280ba5471773530a09994d30edccde;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1280ba5471773530a09994d30edccde );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1280ba5471773530a09994d30edccde ) == 2 ); // Frame stack

    // Framed code:
    tmp_raise_type_1 = PyExc_TypeError;
    tmp_raise_value_1 = const_str_digest_a3ce3cd9a471be347bd47d34e7da776f;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    Py_INCREF( tmp_raise_value_1 );
    exception_lineno = 46;
    RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1280ba5471773530a09994d30edccde );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1280ba5471773530a09994d30edccde );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1280ba5471773530a09994d30edccde, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1280ba5471773530a09994d30edccde->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1280ba5471773530a09994d30edccde, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1280ba5471773530a09994d30edccde,
        type_description_1,
        par_filename,
        par_mode
    );


    // Release cached frame.
    if ( frame_f1280ba5471773530a09994d30edccde == cache_frame_f1280ba5471773530a09994d30edccde )
    {
        Py_DECREF( frame_f1280ba5471773530a09994d30edccde );
    }
    cache_frame_f1280ba5471773530a09994d30edccde = NULL;

    assertFrameObject( frame_f1280ba5471773530a09994d30edccde );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_5_open_latin1 );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_5_open_latin1 );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_numpy$compat$py3k$$$function_6_sixu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_6_sixu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_6_sixu );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$compat$py3k$$$function_7_isfileobj( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a53e5bec885621d21c6cd4135661e2f1 = NULL;

    struct Nuitka_FrameObject *frame_a53e5bec885621d21c6cd4135661e2f1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a53e5bec885621d21c6cd4135661e2f1, codeobj_a53e5bec885621d21c6cd4135661e2f1, module_numpy$compat$py3k, sizeof(void *) );
    frame_a53e5bec885621d21c6cd4135661e2f1 = cache_frame_a53e5bec885621d21c6cd4135661e2f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a53e5bec885621d21c6cd4135661e2f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a53e5bec885621d21c6cd4135661e2f1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_f;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyFile_Type;
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a53e5bec885621d21c6cd4135661e2f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a53e5bec885621d21c6cd4135661e2f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a53e5bec885621d21c6cd4135661e2f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a53e5bec885621d21c6cd4135661e2f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a53e5bec885621d21c6cd4135661e2f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a53e5bec885621d21c6cd4135661e2f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a53e5bec885621d21c6cd4135661e2f1,
        type_description_1,
        par_f
    );


    // Release cached frame.
    if ( frame_a53e5bec885621d21c6cd4135661e2f1 == cache_frame_a53e5bec885621d21c6cd4135661e2f1 )
    {
        Py_DECREF( frame_a53e5bec885621d21c6cd4135661e2f1 );
    }
    cache_frame_a53e5bec885621d21c6cd4135661e2f1 = NULL;

    assertFrameObject( frame_a53e5bec885621d21c6cd4135661e2f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_7_isfileobj );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_7_isfileobj );
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


static PyObject *impl_numpy$compat$py3k$$$function_8_asunicode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_dab95231b66c29dc6eaeb8266a242d57 = NULL;

    struct Nuitka_FrameObject *frame_dab95231b66c29dc6eaeb8266a242d57;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dab95231b66c29dc6eaeb8266a242d57, codeobj_dab95231b66c29dc6eaeb8266a242d57, module_numpy$compat$py3k, sizeof(void *) );
    frame_dab95231b66c29dc6eaeb8266a242d57 = cache_frame_dab95231b66c29dc6eaeb8266a242d57;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dab95231b66c29dc6eaeb8266a242d57 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dab95231b66c29dc6eaeb8266a242d57 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_str_arg_1 = par_s;

    CHECK_OBJECT( tmp_str_arg_1 );
    tmp_called_instance_1 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_dab95231b66c29dc6eaeb8266a242d57->m_frame.f_lineno = 70;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dab95231b66c29dc6eaeb8266a242d57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dab95231b66c29dc6eaeb8266a242d57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dab95231b66c29dc6eaeb8266a242d57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dab95231b66c29dc6eaeb8266a242d57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dab95231b66c29dc6eaeb8266a242d57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dab95231b66c29dc6eaeb8266a242d57, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dab95231b66c29dc6eaeb8266a242d57,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_dab95231b66c29dc6eaeb8266a242d57 == cache_frame_dab95231b66c29dc6eaeb8266a242d57 )
    {
        Py_DECREF( frame_dab95231b66c29dc6eaeb8266a242d57 );
    }
    cache_frame_dab95231b66c29dc6eaeb8266a242d57 = NULL;

    assertFrameObject( frame_dab95231b66c29dc6eaeb8266a242d57 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_8_asunicode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_8_asunicode );
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


static PyObject *impl_numpy$compat$py3k$$$function_9_open_latin1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_beea94dc29b8aa3f2fe343dde2550b25 = NULL;

    struct Nuitka_FrameObject *frame_beea94dc29b8aa3f2fe343dde2550b25;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_beea94dc29b8aa3f2fe343dde2550b25, codeobj_beea94dc29b8aa3f2fe343dde2550b25, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_beea94dc29b8aa3f2fe343dde2550b25 = cache_frame_beea94dc29b8aa3f2fe343dde2550b25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_beea94dc29b8aa3f2fe343dde2550b25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_beea94dc29b8aa3f2fe343dde2550b25 ) == 2 ); // Frame stack

    // Framed code:
    tmp_open_filename_1 = par_filename;

    CHECK_OBJECT( tmp_open_filename_1 );
    tmp_open_mode_1 = par_mode;

    CHECK_OBJECT( tmp_open_mode_1 );
    tmp_return_value = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_beea94dc29b8aa3f2fe343dde2550b25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_beea94dc29b8aa3f2fe343dde2550b25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_beea94dc29b8aa3f2fe343dde2550b25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_beea94dc29b8aa3f2fe343dde2550b25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_beea94dc29b8aa3f2fe343dde2550b25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_beea94dc29b8aa3f2fe343dde2550b25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_beea94dc29b8aa3f2fe343dde2550b25,
        type_description_1,
        par_filename,
        par_mode
    );


    // Release cached frame.
    if ( frame_beea94dc29b8aa3f2fe343dde2550b25 == cache_frame_beea94dc29b8aa3f2fe343dde2550b25 )
    {
        Py_DECREF( frame_beea94dc29b8aa3f2fe343dde2550b25 );
    }
    cache_frame_beea94dc29b8aa3f2fe343dde2550b25 = NULL;

    assertFrameObject( frame_beea94dc29b8aa3f2fe343dde2550b25 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_9_open_latin1 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_9_open_latin1 );
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


static PyObject *impl_numpy$compat$py3k$$$function_10_sixu( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_87d7b1b2e1d713ee3a7486d86748131e = NULL;

    struct Nuitka_FrameObject *frame_87d7b1b2e1d713ee3a7486d86748131e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_87d7b1b2e1d713ee3a7486d86748131e, codeobj_87d7b1b2e1d713ee3a7486d86748131e, module_numpy$compat$py3k, sizeof(void *) );
    frame_87d7b1b2e1d713ee3a7486d86748131e = cache_frame_87d7b1b2e1d713ee3a7486d86748131e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_87d7b1b2e1d713ee3a7486d86748131e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_87d7b1b2e1d713ee3a7486d86748131e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_s;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_unicode_escape;
    frame_87d7b1b2e1d713ee3a7486d86748131e->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87d7b1b2e1d713ee3a7486d86748131e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_87d7b1b2e1d713ee3a7486d86748131e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_87d7b1b2e1d713ee3a7486d86748131e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_87d7b1b2e1d713ee3a7486d86748131e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_87d7b1b2e1d713ee3a7486d86748131e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_87d7b1b2e1d713ee3a7486d86748131e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_87d7b1b2e1d713ee3a7486d86748131e,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_87d7b1b2e1d713ee3a7486d86748131e == cache_frame_87d7b1b2e1d713ee3a7486d86748131e )
    {
        Py_DECREF( frame_87d7b1b2e1d713ee3a7486d86748131e );
    }
    cache_frame_87d7b1b2e1d713ee3a7486d86748131e = NULL;

    assertFrameObject( frame_87d7b1b2e1d713ee3a7486d86748131e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_10_sixu );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_10_sixu );
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


static PyObject *impl_numpy$compat$py3k$$$function_11_getexception( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 = NULL;

    struct Nuitka_FrameObject *frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6, codeobj_73e5fbb7a4fd7f77a6483ff8cc0d53b6, module_numpy$compat$py3k, 0 );
    frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 = cache_frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 80;

        goto frame_exception_exit_1;
    }

    frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6->m_frame.f_lineno = 80;
    tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_exc_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6,
        type_description_1
    );


    // Release cached frame.
    if ( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 == cache_frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 )
    {
        Py_DECREF( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 );
    }
    cache_frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 = NULL;

    assertFrameObject( frame_73e5fbb7a4fd7f77a6483ff8cc0d53b6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_11_getexception );
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


static PyObject *impl_numpy$compat$py3k$$$function_12_asbytes_nested( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_y = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_16668e167fbc1291b69ff3800bdc2bb8 = NULL;

    struct Nuitka_FrameObject *frame_16668e167fbc1291b69ff3800bdc2bb8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_16668e167fbc1291b69ff3800bdc2bb8, codeobj_16668e167fbc1291b69ff3800bdc2bb8, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_16668e167fbc1291b69ff3800bdc2bb8 = cache_frame_16668e167fbc1291b69ff3800bdc2bb8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_16668e167fbc1291b69ff3800bdc2bb8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_16668e167fbc1291b69ff3800bdc2bb8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_value_1 = par_x;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain___iter__;
    tmp_and_left_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
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
    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oo";
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


        exception_lineno = 83;
        type_description_1 = "oo";
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
    // Tried code:
    tmp_iter_arg_1 = par_x;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            exception_lineno = 84;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_4;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes_nested );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes_nested );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes_nested" );
        exception_tb = NULL;

        exception_lineno = 84;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_y;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_16668e167fbc1291b69ff3800bdc2bb8->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
    return NULL;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asbytes" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_16668e167fbc1291b69ff3800bdc2bb8->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16668e167fbc1291b69ff3800bdc2bb8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16668e167fbc1291b69ff3800bdc2bb8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16668e167fbc1291b69ff3800bdc2bb8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16668e167fbc1291b69ff3800bdc2bb8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16668e167fbc1291b69ff3800bdc2bb8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16668e167fbc1291b69ff3800bdc2bb8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16668e167fbc1291b69ff3800bdc2bb8,
        type_description_1,
        par_x,
        var_y
    );


    // Release cached frame.
    if ( frame_16668e167fbc1291b69ff3800bdc2bb8 == cache_frame_16668e167fbc1291b69ff3800bdc2bb8 )
    {
        Py_DECREF( frame_16668e167fbc1291b69ff3800bdc2bb8 );
    }
    cache_frame_16668e167fbc1291b69ff3800bdc2bb8 = NULL;

    assertFrameObject( frame_16668e167fbc1291b69ff3800bdc2bb8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_12_asbytes_nested );
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


static PyObject *impl_numpy$compat$py3k$$$function_13_asunicode_nested( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_y = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_65cb2640cb436c9ade6547c859d01dd4 = NULL;

    struct Nuitka_FrameObject *frame_65cb2640cb436c9ade6547c859d01dd4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_65cb2640cb436c9ade6547c859d01dd4, codeobj_65cb2640cb436c9ade6547c859d01dd4, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *) );
    frame_65cb2640cb436c9ade6547c859d01dd4 = cache_frame_65cb2640cb436c9ade6547c859d01dd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_65cb2640cb436c9ade6547c859d01dd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_65cb2640cb436c9ade6547c859d01dd4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_hasattr_value_1 = par_x;

    CHECK_OBJECT( tmp_hasattr_value_1 );
    tmp_hasattr_attr_1 = const_str_plain___iter__;
    tmp_and_left_value_1 = BUILTIN_HASATTR( tmp_hasattr_value_1, tmp_hasattr_attr_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
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
    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oo";
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


        exception_lineno = 89;
        type_description_1 = "oo";
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
    // Tried code:
    tmp_iter_arg_1 = par_x;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            exception_lineno = 90;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_4;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode_nested );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asunicode_nested );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asunicode_nested" );
        exception_tb = NULL;

        exception_lineno = 90;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_y;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_65cb2640cb436c9ade6547c859d01dd4->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
    return NULL;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asunicode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asunicode" );
        exception_tb = NULL;

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_65cb2640cb436c9ade6547c859d01dd4->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_65cb2640cb436c9ade6547c859d01dd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_65cb2640cb436c9ade6547c859d01dd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_65cb2640cb436c9ade6547c859d01dd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_65cb2640cb436c9ade6547c859d01dd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_65cb2640cb436c9ade6547c859d01dd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_65cb2640cb436c9ade6547c859d01dd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_65cb2640cb436c9ade6547c859d01dd4,
        type_description_1,
        par_x,
        var_y
    );


    // Release cached frame.
    if ( frame_65cb2640cb436c9ade6547c859d01dd4 == cache_frame_65cb2640cb436c9ade6547c859d01dd4 )
    {
        Py_DECREF( frame_65cb2640cb436c9ade6547c859d01dd4 );
    }
    cache_frame_65cb2640cb436c9ade6547c859d01dd4 = NULL;

    assertFrameObject( frame_65cb2640cb436c9ade6547c859d01dd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_13_asunicode_nested );
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


static PyObject *impl_numpy$compat$py3k$$$function_14_is_pathlib_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f7b319c0ebf454b0ea3e73f5c383d328 = NULL;

    struct Nuitka_FrameObject *frame_f7b319c0ebf454b0ea3e73f5c383d328;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7b319c0ebf454b0ea3e73f5c383d328, codeobj_f7b319c0ebf454b0ea3e73f5c383d328, module_numpy$compat$py3k, sizeof(void *) );
    frame_f7b319c0ebf454b0ea3e73f5c383d328 = cache_frame_f7b319c0ebf454b0ea3e73f5c383d328;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7b319c0ebf454b0ea3e73f5c383d328 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7b319c0ebf454b0ea3e73f5c383d328 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path );

    if (unlikely( tmp_compexpr_left_1 == NULL ))
    {
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Path );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Path" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
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
    tmp_isinstance_inst_1 = par_obj;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Path );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Path" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_return_value = tmp_and_left_value_1;
    and_end_1:;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7b319c0ebf454b0ea3e73f5c383d328 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7b319c0ebf454b0ea3e73f5c383d328 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7b319c0ebf454b0ea3e73f5c383d328 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7b319c0ebf454b0ea3e73f5c383d328, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7b319c0ebf454b0ea3e73f5c383d328->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7b319c0ebf454b0ea3e73f5c383d328, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7b319c0ebf454b0ea3e73f5c383d328,
        type_description_1,
        par_obj
    );


    // Release cached frame.
    if ( frame_f7b319c0ebf454b0ea3e73f5c383d328 == cache_frame_f7b319c0ebf454b0ea3e73f5c383d328 )
    {
        Py_DECREF( frame_f7b319c0ebf454b0ea3e73f5c383d328 );
    }
    cache_frame_f7b319c0ebf454b0ea3e73f5c383d328 = NULL;

    assertFrameObject( frame_f7b319c0ebf454b0ea3e73f5c383d328 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_14_is_pathlib_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_14_is_pathlib_path );
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


static PyObject *impl_numpy$compat$py3k$$$function_15_npy_load_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_fn = python_pars[ 1 ];
    PyObject *par_info = python_pars[ 2 ];
    PyObject *var_importlib = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_13103762360f45d053c97acacbfa034e = NULL;

    struct Nuitka_FrameObject *frame_13103762360f45d053c97acacbfa034e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_13103762360f45d053c97acacbfa034e, codeobj_13103762360f45d053c97acacbfa034e, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_13103762360f45d053c97acacbfa034e = cache_frame_13103762360f45d053c97acacbfa034e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13103762360f45d053c97acacbfa034e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13103762360f45d053c97acacbfa034e ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$compat$py3k;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_13103762360f45d053c97acacbfa034e->m_frame.f_lineno = 121;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_importlib == NULL );
    var_importlib = tmp_assign_source_1;

    tmp_source_name_1 = var_importlib;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_machinery );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_name;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_fn;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_13103762360f45d053c97acacbfa034e->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_SourceFileLoader, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_13103762360f45d053c97acacbfa034e->m_frame.f_lineno = 122;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_load_module );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13103762360f45d053c97acacbfa034e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13103762360f45d053c97acacbfa034e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13103762360f45d053c97acacbfa034e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13103762360f45d053c97acacbfa034e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13103762360f45d053c97acacbfa034e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13103762360f45d053c97acacbfa034e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13103762360f45d053c97acacbfa034e,
        type_description_1,
        par_name,
        par_fn,
        par_info,
        var_importlib
    );


    // Release cached frame.
    if ( frame_13103762360f45d053c97acacbfa034e == cache_frame_13103762360f45d053c97acacbfa034e )
    {
        Py_DECREF( frame_13103762360f45d053c97acacbfa034e );
    }
    cache_frame_13103762360f45d053c97acacbfa034e = NULL;

    assertFrameObject( frame_13103762360f45d053c97acacbfa034e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_15_npy_load_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_info );
    Py_DECREF( par_info );
    par_info = NULL;

    CHECK_OBJECT( (PyObject *)var_importlib );
    Py_DECREF( var_importlib );
    var_importlib = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_info );
    Py_DECREF( par_info );
    par_info = NULL;

    Py_XDECREF( var_importlib );
    var_importlib = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_15_npy_load_module );
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


static PyObject *impl_numpy$compat$py3k$$$function_16_npy_load_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_fn = python_pars[ 1 ];
    PyObject *par_info = python_pars[ 2 ];
    PyObject *var_imp = NULL;
    PyObject *var_os = NULL;
    PyObject *var_path = NULL;
    PyObject *var_fo = NULL;
    PyObject *var_mod = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cc0abee3e3dc7dec8a4c7c6abf87c424 = NULL;

    struct Nuitka_FrameObject *frame_cc0abee3e3dc7dec8a4c7c6abf87c424;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_name_name_1 = const_str_plain_imp;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$compat$py3k;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( var_imp == NULL );
    var_imp = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cc0abee3e3dc7dec8a4c7c6abf87c424, codeobj_cc0abee3e3dc7dec8a4c7c6abf87c424, module_numpy$compat$py3k, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424 = cache_frame_cc0abee3e3dc7dec8a4c7c6abf87c424;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_2 = const_str_plain_os;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$compat$py3k;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame.f_lineno = 146;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_os == NULL );
    var_os = tmp_assign_source_2;

    tmp_compare_left_1 = par_info;

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
    tmp_source_name_1 = var_os;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_fn;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dirname, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path == NULL );
    var_path = tmp_assign_source_3;

    // Tried code:
    tmp_called_instance_2 = var_imp;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = par_name;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = PyList_New( 1 );
    tmp_list_element_1 = var_path;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_find_module, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 149;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 149;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 149;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "oooooooo";
                exception_lineno = 149;
                goto try_except_handler_3;
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

        type_description_1 = "oooooooo";
        exception_lineno = 149;
        goto try_except_handler_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_8 );
    assert( var_fo == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_fo = tmp_assign_source_8;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = par_fn;
        assert( old != NULL );
        par_fn = tmp_assign_source_9;
        Py_INCREF( par_fn );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = par_info;
        assert( old != NULL );
        par_info = tmp_assign_source_10;
        Py_INCREF( par_info );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_open_filename_1 = par_fn;

    CHECK_OBJECT( tmp_open_filename_1 );
    tmp_subscribed_name_1 = par_info;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_open_mode_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_open_mode_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_mode_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_fo == NULL );
    var_fo = tmp_assign_source_11;

    branch_end_1:;
    // Tried code:
    tmp_called_instance_3 = var_imp;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_4 = par_name;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = var_fo;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_fn;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_info;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_3, const_str_plain_load_module, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    assert( var_mod == NULL );
    var_mod = tmp_assign_source_12;

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

    tmp_called_instance_4 = var_fo;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame.f_lineno = 155;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_called_instance_5 = var_fo;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame.f_lineno = 155;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cc0abee3e3dc7dec8a4c7c6abf87c424, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cc0abee3e3dc7dec8a4c7c6abf87c424->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cc0abee3e3dc7dec8a4c7c6abf87c424, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc0abee3e3dc7dec8a4c7c6abf87c424,
        type_description_1,
        par_name,
        par_fn,
        par_info,
        var_imp,
        var_os,
        var_path,
        var_fo,
        var_mod
    );


    // Release cached frame.
    if ( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 == cache_frame_cc0abee3e3dc7dec8a4c7c6abf87c424 )
    {
        Py_DECREF( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 );
    }
    cache_frame_cc0abee3e3dc7dec8a4c7c6abf87c424 = NULL;

    assertFrameObject( frame_cc0abee3e3dc7dec8a4c7c6abf87c424 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_mod;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_16_npy_load_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_fn );
    Py_DECREF( par_fn );
    par_fn = NULL;

    CHECK_OBJECT( (PyObject *)par_info );
    Py_DECREF( par_info );
    par_info = NULL;

    CHECK_OBJECT( (PyObject *)var_imp );
    Py_DECREF( var_imp );
    var_imp = NULL;

    CHECK_OBJECT( (PyObject *)var_os );
    Py_DECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    CHECK_OBJECT( (PyObject *)var_fo );
    Py_DECREF( var_fo );
    var_fo = NULL;

    CHECK_OBJECT( (PyObject *)var_mod );
    Py_DECREF( var_mod );
    var_mod = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_fn );
    par_fn = NULL;

    Py_XDECREF( par_info );
    par_info = NULL;

    CHECK_OBJECT( (PyObject *)var_imp );
    Py_DECREF( var_imp );
    var_imp = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_fo );
    var_fo = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k$$$function_16_npy_load_module );
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



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_10_sixu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_10_sixu,
        const_str_plain_sixu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_87d7b1b2e1d713ee3a7486d86748131e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_11_getexception(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_11_getexception,
        const_str_plain_getexception,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_73e5fbb7a4fd7f77a6483ff8cc0d53b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_12_asbytes_nested(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_12_asbytes_nested,
        const_str_plain_asbytes_nested,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_16668e167fbc1291b69ff3800bdc2bb8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_13_asunicode_nested(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_13_asunicode_nested,
        const_str_plain_asunicode_nested,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_65cb2640cb436c9ade6547c859d01dd4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_14_is_pathlib_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_14_is_pathlib_path,
        const_str_plain_is_pathlib_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f7b319c0ebf454b0ea3e73f5c383d328,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        const_str_digest_8ac4896b9590b15a7e5c623c8f06a250,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_15_npy_load_module( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_15_npy_load_module,
        const_str_plain_npy_load_module,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_13103762360f45d053c97acacbfa034e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        const_str_digest_3637c469b53fe6644e7cf4b46e8d7ab0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_16_npy_load_module( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_16_npy_load_module,
        const_str_plain_npy_load_module,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cc0abee3e3dc7dec8a4c7c6abf87c424,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        const_str_digest_b04805bd50cd298c3e9936d013e6ad93,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_1_asunicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_1_asunicode,
        const_str_plain_asunicode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_faabdc23e00583f6377e599a752697ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_2_asbytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_2_asbytes,
        const_str_plain_asbytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_36378d84a52094033d68aff95d0efd7b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_3_asstr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_3_asstr,
        const_str_plain_asstr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dbb6efbf1cc806d339dfe3554f790321,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_4_isfileobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_4_isfileobj,
        const_str_plain_isfileobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_88557e1c4048aae2846726a4431d5f57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_5_open_latin1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_5_open_latin1,
        const_str_plain_open_latin1,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f1280ba5471773530a09994d30edccde,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_6_sixu(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_6_sixu,
        const_str_plain_sixu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3f440d46c4e2aa34c49b51b86e709f02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_7_isfileobj(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_7_isfileobj,
        const_str_plain_isfileobj,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a53e5bec885621d21c6cd4135661e2f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_8_asunicode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_8_asunicode,
        const_str_plain_asunicode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dab95231b66c29dc6eaeb8266a242d57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$compat$py3k$$$function_9_open_latin1( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$compat$py3k$$$function_9_open_latin1,
        const_str_plain_open_latin1,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_beea94dc29b8aa3f2fe343dde2550b25,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$compat$py3k,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$compat$py3k =
{
    PyModuleDef_HEAD_INIT,
    "numpy.compat.py3k",   /* m_name */
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

MOD_INIT_DECL( numpy$compat$py3k )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$compat$py3k );
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
    puts("numpy.compat.py3k: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.compat.py3k: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$compat$py3k" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$compat$py3k = Py_InitModule4(
        "numpy.compat.py3k",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$compat$py3k = PyModule_Create( &mdef_numpy$compat$py3k );
#endif

    moduledict_numpy$compat$py3k = MODULE_DICT( module_numpy$compat$py3k );

    CHECK_OBJECT( module_numpy$compat$py3k );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_65bec798bc2cd8b837759d8fe641668b, module_numpy$compat$py3k );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_4028997bee2ec3647f617a38fd7568fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8683e04af1485129f11446873d4f77ed;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_580248a9da3628d19f90a85c7aab681f;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_4028997bee2ec3647f617a38fd7568fd = MAKE_MODULE_FRAME( codeobj_4028997bee2ec3647f617a38fd7568fd, module_numpy$compat$py3k );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4028997bee2ec3647f617a38fd7568fd );
    assert( Py_REFCNT( frame_4028997bee2ec3647f617a38fd7568fd ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_assign_source_8 = LIST_COPY( const_list_f89ad9d3b70b97fa730ed478887a9c57_list );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$compat$py3k;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_4028997bee2ec3647f617a38fd7568fd->m_frame.f_lineno = 12;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9 );
    // Tried code:
    tmp_name_name_2 = const_str_plain_pathlib;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$compat$py3k;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Path_tuple;
    tmp_level_name_2 = const_int_0;
    frame_4028997bee2ec3647f617a38fd7568fd->m_frame.f_lineno = 14;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Path );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path, tmp_assign_source_10 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_4028997bee2ec3647f617a38fd7568fd );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_4028997bee2ec3647f617a38fd7568fd, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_4028997bee2ec3647f617a38fd7568fd, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

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
    tmp_assign_source_11 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_Path, tmp_assign_source_11 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 13;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4028997bee2ec3647f617a38fd7568fd->m_frame) frame_4028997bee2ec3647f617a38fd7568fd->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$compat$py3k );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_name_name_3 = const_str_plain_io;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$compat$py3k;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_4028997bee2ec3647f617a38fd7568fd->m_frame.f_lineno = 19;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_12 );
    tmp_assign_source_13 = (PyObject *)&PyInt_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_13 );
    tmp_assign_source_14 = const_tuple_type_int_tuple;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_14 );
    tmp_assign_source_15 = (PyObject *)&PyString_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_15 );
    tmp_assign_source_16 = (PyObject *)&PyString_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_16 );
    tmp_assign_source_17 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_assign_source_17 == NULL ))
    {
        tmp_assign_source_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_assign_source_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$compat$py3k$$$function_1_asunicode(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$compat$py3k$$$function_2_asbytes(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$compat$py3k$$$function_3_asstr(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asstr, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$compat$py3k$$$function_4_isfileobj(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_isfileobj, tmp_assign_source_21 );
    tmp_defaults_1 = const_tuple_str_plain_r_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$compat$py3k$$$function_5_open_latin1( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_open_latin1, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$compat$py3k$$$function_6_sixu(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sixu, tmp_assign_source_23 );
    tmp_assign_source_24 = const_str_plain_U;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_strchar, tmp_assign_source_24 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_25 = (PyObject *)&PyString_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_25 );
    tmp_assign_source_26 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_assign_source_26 == NULL ))
    {
        tmp_assign_source_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_26 );
    tmp_assign_source_27 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_basestring );

    if (unlikely( tmp_assign_source_27 == NULL ))
    {
        tmp_assign_source_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
    }

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "basestring" );
        exception_tb = NULL;

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_27 );
    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_28 );
    tmp_assign_source_29 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyInt_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 1, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_29 );
    tmp_assign_source_30 = (PyObject *)&PyString_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_30 );
    tmp_assign_source_31 = (PyObject *)&PyString_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asstr, tmp_assign_source_31 );
    tmp_assign_source_32 = const_str_plain_S;
    UPDATE_STRING_DICT0( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_strchar, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$compat$py3k$$$function_7_isfileobj(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_isfileobj, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$compat$py3k$$$function_8_asunicode(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode, tmp_assign_source_34 );
    tmp_defaults_2 = const_tuple_str_plain_r_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$compat$py3k$$$function_9_open_latin1( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_open_latin1, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$compat$py3k$$$function_10_sixu(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sixu, tmp_assign_source_36 );
    branch_end_2:;
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$compat$py3k$$$function_11_getexception(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_getexception, tmp_assign_source_37 );
    tmp_assign_source_38 = MAKE_FUNCTION_numpy$compat$py3k$$$function_12_asbytes_nested(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asbytes_nested, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_numpy$compat$py3k$$$function_13_asunicode_nested(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_asunicode_nested, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_numpy$compat$py3k$$$function_14_is_pathlib_path(  );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_is_pathlib_path, tmp_assign_source_40 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 100;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version_info );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_3;
    tmp_and_left_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 100;

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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 100;

        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_version_info );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_pos_1;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_4;
    tmp_and_right_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;

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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 100;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_defaults_3 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_41 = MAKE_FUNCTION_numpy$compat$py3k$$$function_15_npy_load_module( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_npy_load_module, tmp_assign_source_41 );
    goto branch_end_3;
    branch_no_3:;
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_42 = MAKE_FUNCTION_numpy$compat$py3k$$$function_16_npy_load_module( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$compat$py3k, (Nuitka_StringObject *)const_str_plain_npy_load_module, tmp_assign_source_42 );
    branch_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_4028997bee2ec3647f617a38fd7568fd );
#endif
    popFrameStack();

    assertFrameObject( frame_4028997bee2ec3647f617a38fd7568fd );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_4028997bee2ec3647f617a38fd7568fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4028997bee2ec3647f617a38fd7568fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4028997bee2ec3647f617a38fd7568fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4028997bee2ec3647f617a38fd7568fd, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$compat$py3k );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
