/* Generated code for Python source for module 'numpy.fft.helper'
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

/* The _module_numpy$fft$helper is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$helper;
PyDictObject *moduledict_numpy$fft$helper;

/* The module constants used, if any. */
extern PyObject *const_str_plain_max_item_count;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_popitem;
static PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain__j_tuple;
extern PyObject *const_float_1_5;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_nbytes;
extern PyObject *const_dict_a1bc806d8491c0bf2ce21ede33000e42;
static PyObject *const_str_plain__prune_cache;
extern PyObject *const_str_plain__i;
static PyObject *const_str_plain__j;
static PyObject *const_tuple_ae3e5ddb46a64d32f4a28df13d1582e0_tuple;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple;
static PyObject *const_dict_c98aea4db9bb638cab0bc77208ac80c8;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain__check_size;
static PyObject *const_str_plain_fftshift;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain__max_item_count;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_1952086625b3b75894ff16424526eb36_tuple;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
static PyObject *const_str_digest_576644db5145960717a957e6a5504ec5;
static PyObject *const_tuple_str_plain_integer_types_tuple;
static PyObject *const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple;
static PyObject *const_str_digest_466a2021b7031ac96596f95bb84e1a9d;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain__max_size_in_bytes;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_plain_threading;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__dict;
static PyObject *const_str_plain__lock;
static PyObject *const_int_pos_1048576;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_last;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain__FFTCache;
static PyObject *const_str_digest_91a6e65509cfbbe4ba154cabdb7becca;
static PyObject *const_str_digest_2fb7ba50d30fb34bf585af15f504be82;
static PyObject *const_str_digest_4ef7001003be7e06506ab78ccaae217c;
extern PyObject *const_str_plain_put_twiddle_factors;
static PyObject *const_str_plain_max_size;
extern PyObject *const_tuple_float_1_0_tuple;
extern PyObject *const_str_plain_OrderedDict;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_empty;
static PyObject *const_str_plain_item_sizes;
extern PyObject *const_str_plain_N;
static PyObject *const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple;
static PyObject *const_str_plain_ifftshift;
extern PyObject *const_str_plain_max_size_in_mb;
extern PyObject *const_str_plain_collections;
static PyObject *const_str_plain_Lock;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_5ced19727bd7c891a8f02a2cacb55d0b;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_integer_types;
static PyObject *const_list_d3376bb1f7f4aa67004298e8d81c0177_list;
static PyObject *const_str_digest_83d2bc87f06d688919004ad61a653f0c;
static PyObject *const_str_plain_rfftfreq;
static PyObject *const_str_plain_fftfreq;
static PyObject *const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple;
static PyObject *const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75;
extern PyObject *const_str_plain_tmp;
static PyObject *const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple;
static PyObject *const_str_plain_p1;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
static PyObject *const_str_plain_all_values;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_pop_twiddle_factors;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_mylist;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_5bdc29da7e9b0d9cd26e1d40e7ad7f75;
static PyObject *const_str_plain_factors;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
static PyObject *const_str_digest_cd76b1be497a25a97488b634a3e060e9;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_cb5888388b180e4bf5e52d2cb6d181db;
static PyObject *const_str_plain_p2;
extern PyObject *const_str_plain_results;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_c67d25da9306edc318e7693005148d1b;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain__j_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain__j_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    const_str_plain__j = UNSTREAM_STRING( &constant_bin[ 2515 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain__j_tuple, 1, const_str_plain__j ); Py_INCREF( const_str_plain__j );
    const_str_plain__prune_cache = UNSTREAM_STRING( &constant_bin[ 593669 ], 12, 1 );
    const_tuple_ae3e5ddb46a64d32f4a28df13d1582e0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_ae3e5ddb46a64d32f4a28df13d1582e0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ae3e5ddb46a64d32f4a28df13d1582e0_tuple, 1, const_str_plain_max_size_in_mb ); Py_INCREF( const_str_plain_max_size_in_mb );
    PyTuple_SET_ITEM( const_tuple_ae3e5ddb46a64d32f4a28df13d1582e0_tuple, 2, const_str_plain_max_item_count ); Py_INCREF( const_str_plain_max_item_count );
    const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 1, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 2, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 3, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 4, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 5, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    const_dict_c98aea4db9bb638cab0bc77208ac80c8 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_c98aea4db9bb638cab0bc77208ac80c8, const_str_plain_last, Py_False );
    assert( PyDict_Size( const_dict_c98aea4db9bb638cab0bc77208ac80c8 ) == 1 );
    const_str_plain__check_size = UNSTREAM_STRING( &constant_bin[ 593681 ], 11, 1 );
    const_str_plain_fftshift = UNSTREAM_STRING( &constant_bin[ 563674 ], 8, 1 );
    const_str_plain__max_item_count = UNSTREAM_STRING( &constant_bin[ 593692 ], 15, 1 );
    const_tuple_1952086625b3b75894ff16424526eb36_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 4, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    const_str_digest_576644db5145960717a957e6a5504ec5 = UNSTREAM_STRING( &constant_bin[ 593707 ], 22, 0 );
    const_tuple_str_plain_integer_types_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_integer_types_tuple, 0, const_str_plain_integer_types ); Py_INCREF( const_str_plain_integer_types );
    const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 3, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_str_plain_p1 = UNSTREAM_STRING( &constant_bin[ 75664 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 5, const_str_plain_p1 ); Py_INCREF( const_str_plain_p1 );
    const_str_plain_p2 = UNSTREAM_STRING( &constant_bin[ 75675 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 6, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_str_digest_466a2021b7031ac96596f95bb84e1a9d = UNSTREAM_STRING( &constant_bin[ 593729 ], 25, 0 );
    const_str_plain__max_size_in_bytes = UNSTREAM_STRING( &constant_bin[ 593754 ], 18, 1 );
    const_str_plain_threading = UNSTREAM_STRING( &constant_bin[ 593772 ], 9, 1 );
    const_str_plain__lock = UNSTREAM_STRING( &constant_bin[ 593781 ], 5, 1 );
    const_int_pos_1048576 = PyInt_FromLong( 1048576l );
    const_str_digest_91a6e65509cfbbe4ba154cabdb7becca = UNSTREAM_STRING( &constant_bin[ 593737 ], 16, 0 );
    const_str_digest_2fb7ba50d30fb34bf585af15f504be82 = UNSTREAM_STRING( &constant_bin[ 593786 ], 1362, 0 );
    const_str_digest_4ef7001003be7e06506ab78ccaae217c = UNSTREAM_STRING( &constant_bin[ 595148 ], 42, 0 );
    const_str_plain_max_size = UNSTREAM_STRING( &constant_bin[ 314021 ], 8, 1 );
    const_str_plain_item_sizes = UNSTREAM_STRING( &constant_bin[ 595190 ], 10, 1 );
    const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_all_values = UNSTREAM_STRING( &constant_bin[ 595200 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple, 2, const_str_plain_all_values ); Py_INCREF( const_str_plain_all_values );
    PyTuple_SET_ITEM( const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_factors = UNSTREAM_STRING( &constant_bin[ 595210 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple, 2, const_str_plain_factors ); Py_INCREF( const_str_plain_factors );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_ifftshift = UNSTREAM_STRING( &constant_bin[ 563673 ], 9, 1 );
    const_str_plain_Lock = UNSTREAM_STRING( &constant_bin[ 595217 ], 4, 1 );
    const_str_digest_5ced19727bd7c891a8f02a2cacb55d0b = UNSTREAM_STRING( &constant_bin[ 595221 ], 1078, 0 );
    const_list_d3376bb1f7f4aa67004298e8d81c0177_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 0, const_str_plain_fftshift ); Py_INCREF( const_str_plain_fftshift );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 1, const_str_plain_ifftshift ); Py_INCREF( const_str_plain_ifftshift );
    const_str_plain_fftfreq = UNSTREAM_STRING( &constant_bin[ 580136 ], 7, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 2, const_str_plain_fftfreq ); Py_INCREF( const_str_plain_fftfreq );
    const_str_plain_rfftfreq = UNSTREAM_STRING( &constant_bin[ 594355 ], 8, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 3, const_str_plain_rfftfreq ); Py_INCREF( const_str_plain_rfftfreq );
    const_str_digest_83d2bc87f06d688919004ad61a653f0c = UNSTREAM_STRING( &constant_bin[ 596299 ], 329, 0 );
    const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple, 1, const_str_plain__i ); Py_INCREF( const_str_plain__i );
    PyTuple_SET_ITEM( const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple, 2, const_str_plain_item_sizes ); Py_INCREF( const_str_plain_item_sizes );
    PyTuple_SET_ITEM( const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple, 3, const_str_plain_max_size ); Py_INCREF( const_str_plain_max_size );
    const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75 = UNSTREAM_STRING( &constant_bin[ 596628 ], 815, 0 );
    const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 3, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 5, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 7, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_str_plain_mylist = UNSTREAM_STRING( &constant_bin[ 597443 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 8, const_str_plain_mylist ); Py_INCREF( const_str_plain_mylist );
    const_str_digest_5bdc29da7e9b0d9cd26e1d40e7ad7f75 = UNSTREAM_STRING( &constant_bin[ 597449 ], 1139, 0 );
    const_str_digest_cd76b1be497a25a97488b634a3e060e9 = UNSTREAM_STRING( &constant_bin[ 598588 ], 786, 0 );
    const_str_digest_cb5888388b180e4bf5e52d2cb6d181db = UNSTREAM_STRING( &constant_bin[ 599374 ], 397, 0 );
    const_str_digest_c67d25da9306edc318e7693005148d1b = UNSTREAM_STRING( &constant_bin[ 599771 ], 49, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$helper( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_99fb9e45ac37ae9a319f3e001d8cb5be;
static PyCodeObject *codeobj_7f878c87c06e1e81c0c1a781a415b825;
static PyCodeObject *codeobj_1b3365d26d12635e0f5acf93d5afa8dc;
static PyCodeObject *codeobj_f3c662d00f690361462e9599e4784131;
static PyCodeObject *codeobj_8450132e8249fc420225bac97e68b6bd;
static PyCodeObject *codeobj_744fbce1a010cd1e4817414e281b5f8e;
static PyCodeObject *codeobj_4a3927c186b1ca6b3dcfee53da280945;
static PyCodeObject *codeobj_14162b46f9527ccfbe510a0a4695a1bf;
static PyCodeObject *codeobj_e1cca78b7cf1f5c367c9cfa0ac26a0c3;
static PyCodeObject *codeobj_4f79c07c4cb9908024c6a4a3bd2c9000;
static PyCodeObject *codeobj_e4ff2f7af168a2ac5bc1214e640bbf05;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c67d25da9306edc318e7693005148d1b;
    codeobj_99fb9e45ac37ae9a319f3e001d8cb5be = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 318, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain__j_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f878c87c06e1e81c0c1a781a415b825 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_466a2021b7031ac96596f95bb84e1a9d, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1b3365d26d12635e0f5acf93d5afa8dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 251, const_tuple_ae3e5ddb46a64d32f4a28df13d1582e0_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f3c662d00f690361462e9599e4784131 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_size, 317, const_tuple_78ef33f866283c59cb22c13028ba9fbd_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8450132e8249fc420225bac97e68b6bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prune_cache, 311, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_744fbce1a010cd1e4817414e281b5f8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftfreq, 130, const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4a3927c186b1ca6b3dcfee53da280945 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftshift, 22, const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_14162b46f9527ccfbe510a0a4695a1bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftshift, 81, const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e1cca78b7cf1f5c367c9cfa0ac26a0c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pop_twiddle_factors, 283, const_tuple_8d3d839d40bfa178d6ec4275ccf21bbd_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4f79c07c4cb9908024c6a4a3bd2c9000 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put_twiddle_factors, 257, const_tuple_str_plain_self_str_plain_n_str_plain_factors_str_plain_value_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e4ff2f7af168a2ac5bc1214e640bbf05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftfreq, 179, const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *numpy$fft$helper$$$function_9__check_size$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void numpy$fft$helper$$$function_9__check_size$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_1_fftshift( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_2_ifftshift( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_3_fftfreq( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_4_rfftfreq( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_5___init__(  );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_6_put_twiddle_factors(  );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_7_pop_twiddle_factors(  );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_8__prune_cache(  );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_9__check_size(  );


// The module function definitions.
static PyObject *impl_numpy$fft$helper$$$function_1_fftshift( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *var_tmp = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_y = NULL;
    PyObject *var_k = NULL;
    PyObject *var_n = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_mylist = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_4a3927c186b1ca6b3dcfee53da280945 = NULL;

    struct Nuitka_FrameObject *frame_4a3927c186b1ca6b3dcfee53da280945;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a3927c186b1ca6b3dcfee53da280945, codeobj_4a3927c186b1ca6b3dcfee53da280945, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4a3927c186b1ca6b3dcfee53da280945 = cache_frame_4a3927c186b1ca6b3dcfee53da280945;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a3927c186b1ca6b3dcfee53da280945 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a3927c186b1ca6b3dcfee53da280945 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 66;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4a3927c186b1ca6b3dcfee53da280945->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tmp == NULL );
    var_tmp = tmp_assign_source_1;

    tmp_source_name_1 = var_tmp;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ndim == NULL );
    var_ndim = tmp_assign_source_2;

    tmp_compare_left_1 = par_axes;

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
    tmp_range_arg_1 = var_ndim;

    CHECK_OBJECT( tmp_range_arg_1 );
    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_axes;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axes;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_assign_source_5 = var_tmp;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_y = tmp_assign_source_5;

    tmp_iter_arg_1 = par_axes;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "axes" );
        exception_tb = NULL;

        exception_lineno = 73;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            exception_lineno = 73;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_tmp;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_k;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_n;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_assign_source_10 = BINARY_OPERATION_FLOORDIV( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_p2;
        var_p2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "concatenate" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_p2;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_n;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_4a3927c186b1ca6b3dcfee53da280945->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 76;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 76;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = var_p2;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_4a3927c186b1ca6b3dcfee53da280945->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 76;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
    frame_4a3927c186b1ca6b3dcfee53da280945->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mylist;
        var_mylist = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "take" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = var_y;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_mylist;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = var_k;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_4a3927c186b1ca6b3dcfee53da280945->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_y;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 78;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a3927c186b1ca6b3dcfee53da280945 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a3927c186b1ca6b3dcfee53da280945 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a3927c186b1ca6b3dcfee53da280945 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a3927c186b1ca6b3dcfee53da280945, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a3927c186b1ca6b3dcfee53da280945->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a3927c186b1ca6b3dcfee53da280945, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a3927c186b1ca6b3dcfee53da280945,
        type_description_1,
        par_x,
        par_axes,
        var_tmp,
        var_ndim,
        var_y,
        var_k,
        var_n,
        var_p2,
        var_mylist
    );


    // Release cached frame.
    if ( frame_4a3927c186b1ca6b3dcfee53da280945 == cache_frame_4a3927c186b1ca6b3dcfee53da280945 )
    {
        Py_DECREF( frame_4a3927c186b1ca6b3dcfee53da280945 );
    }
    cache_frame_4a3927c186b1ca6b3dcfee53da280945 = NULL;

    assertFrameObject( frame_4a3927c186b1ca6b3dcfee53da280945 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_1_fftshift );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)var_tmp );
    Py_DECREF( var_tmp );
    var_tmp = NULL;

    CHECK_OBJECT( (PyObject *)var_ndim );
    Py_DECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

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

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_1_fftshift );
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


static PyObject *impl_numpy$fft$helper$$$function_2_ifftshift( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *var_tmp = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_y = NULL;
    PyObject *var_k = NULL;
    PyObject *var_n = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_mylist = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_14162b46f9527ccfbe510a0a4695a1bf = NULL;

    struct Nuitka_FrameObject *frame_14162b46f9527ccfbe510a0a4695a1bf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14162b46f9527ccfbe510a0a4695a1bf, codeobj_14162b46f9527ccfbe510a0a4695a1bf, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_14162b46f9527ccfbe510a0a4695a1bf = cache_frame_14162b46f9527ccfbe510a0a4695a1bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14162b46f9527ccfbe510a0a4695a1bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14162b46f9527ccfbe510a0a4695a1bf ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 115;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_14162b46f9527ccfbe510a0a4695a1bf->m_frame.f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tmp == NULL );
    var_tmp = tmp_assign_source_1;

    tmp_source_name_1 = var_tmp;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ndim == NULL );
    var_ndim = tmp_assign_source_2;

    tmp_compare_left_1 = par_axes;

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
    tmp_range_arg_1 = var_ndim;

    CHECK_OBJECT( tmp_range_arg_1 );
    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_axes;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axes;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_assign_source_5 = var_tmp;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_y = tmp_assign_source_5;

    tmp_iter_arg_1 = par_axes;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "axes" );
        exception_tb = NULL;

        exception_lineno = 122;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            exception_lineno = 122;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_tmp;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_k;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_n;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_3 = var_n;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_3 = const_int_pos_2;
    tmp_right_name_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_10 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_p2;
        var_p2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "concatenate" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_p2;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_n;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_14162b46f9527ccfbe510a0a4695a1bf->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 125;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = var_p2;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_14162b46f9527ccfbe510a0a4695a1bf->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 125;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
    frame_14162b46f9527ccfbe510a0a4695a1bf->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mylist;
        var_mylist = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "take" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = var_y;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 126;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_mylist;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = var_k;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_14162b46f9527ccfbe510a0a4695a1bf->m_frame.f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_y;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 127;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14162b46f9527ccfbe510a0a4695a1bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14162b46f9527ccfbe510a0a4695a1bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14162b46f9527ccfbe510a0a4695a1bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14162b46f9527ccfbe510a0a4695a1bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14162b46f9527ccfbe510a0a4695a1bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14162b46f9527ccfbe510a0a4695a1bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14162b46f9527ccfbe510a0a4695a1bf,
        type_description_1,
        par_x,
        par_axes,
        var_tmp,
        var_ndim,
        var_y,
        var_k,
        var_n,
        var_p2,
        var_mylist
    );


    // Release cached frame.
    if ( frame_14162b46f9527ccfbe510a0a4695a1bf == cache_frame_14162b46f9527ccfbe510a0a4695a1bf )
    {
        Py_DECREF( frame_14162b46f9527ccfbe510a0a4695a1bf );
    }
    cache_frame_14162b46f9527ccfbe510a0a4695a1bf = NULL;

    assertFrameObject( frame_14162b46f9527ccfbe510a0a4695a1bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_ifftshift );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)var_tmp );
    Py_DECREF( var_tmp );
    var_tmp = NULL;

    CHECK_OBJECT( (PyObject *)var_ndim );
    Py_DECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

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

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_ifftshift );
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


static PyObject *impl_numpy$fft$helper$$$function_3_fftfreq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_val = NULL;
    PyObject *var_results = NULL;
    PyObject *var_N = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_p2 = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_target_2;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceass_value_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_744fbce1a010cd1e4817414e281b5f8e = NULL;

    struct Nuitka_FrameObject *frame_744fbce1a010cd1e4817414e281b5f8e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_744fbce1a010cd1e4817414e281b5f8e, codeobj_744fbce1a010cd1e4817414e281b5f8e, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_744fbce1a010cd1e4817414e281b5f8e = cache_frame_744fbce1a010cd1e4817414e281b5f8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_744fbce1a010cd1e4817414e281b5f8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_744fbce1a010cd1e4817414e281b5f8e ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_n;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 166;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_576644db5145960717a957e6a5504ec5;
    frame_744fbce1a010cd1e4817414e281b5f8e->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 167;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_float_1_0;
    tmp_left_name_2 = par_n;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_d;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "empty" );
        exception_tb = NULL;

        exception_lineno = 169;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_n;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = (PyObject *)&PyInt_Type;
    frame_744fbce1a010cd1e4817414e281b5f8e->m_frame.f_lineno = 169;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_results == NULL );
    var_results = tmp_assign_source_2;

    tmp_left_name_5 = par_n;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_left_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_3 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_2;
    tmp_left_name_3 = BINARY_OPERATION_FLOORDIV( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 171;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_N;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a1bc806d8491c0bf2ce21ede33000e42 );
    frame_744fbce1a010cd1e4817414e281b5f8e->m_frame.f_lineno = 171;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p1 == NULL );
    var_p1 = tmp_assign_source_4;

    tmp_sliceass_value_1 = var_p1;

    CHECK_OBJECT( tmp_sliceass_value_1 );
    tmp_sliceass_target_1 = var_results;

    CHECK_OBJECT( tmp_sliceass_target_1 );
    tmp_sliceass_upper_1 = var_N;

    CHECK_OBJECT( tmp_sliceass_upper_1 );
    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_left_name_6 = par_n;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = const_int_pos_2;
    tmp_operand_name_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 173;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 173;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_a1bc806d8491c0bf2ce21ede33000e42 );
    frame_744fbce1a010cd1e4817414e281b5f8e->m_frame.f_lineno = 173;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p2 == NULL );
    var_p2 = tmp_assign_source_5;

    tmp_sliceass_value_2 = var_p2;

    CHECK_OBJECT( tmp_sliceass_value_2 );
    tmp_sliceass_target_2 = var_results;

    CHECK_OBJECT( tmp_sliceass_target_2 );
    tmp_sliceass_lower_1 = var_N;

    CHECK_OBJECT( tmp_sliceass_lower_1 );
    tmp_result = SET_SLICE( tmp_sliceass_target_2, tmp_sliceass_lower_1, Py_None, tmp_sliceass_value_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = var_results;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_right_name_7 = var_val;

    CHECK_OBJECT( tmp_right_name_7 );
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_744fbce1a010cd1e4817414e281b5f8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_744fbce1a010cd1e4817414e281b5f8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_744fbce1a010cd1e4817414e281b5f8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_744fbce1a010cd1e4817414e281b5f8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_744fbce1a010cd1e4817414e281b5f8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_744fbce1a010cd1e4817414e281b5f8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_744fbce1a010cd1e4817414e281b5f8e,
        type_description_1,
        par_n,
        par_d,
        var_val,
        var_results,
        var_N,
        var_p1,
        var_p2
    );


    // Release cached frame.
    if ( frame_744fbce1a010cd1e4817414e281b5f8e == cache_frame_744fbce1a010cd1e4817414e281b5f8e )
    {
        Py_DECREF( frame_744fbce1a010cd1e4817414e281b5f8e );
    }
    cache_frame_744fbce1a010cd1e4817414e281b5f8e = NULL;

    assertFrameObject( frame_744fbce1a010cd1e4817414e281b5f8e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_fftfreq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_results );
    Py_DECREF( var_results );
    var_results = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_p1 );
    Py_DECREF( var_p1 );
    var_p1 = NULL;

    CHECK_OBJECT( (PyObject *)var_p2 );
    Py_DECREF( var_p2 );
    var_p2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_fftfreq );
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


static PyObject *impl_numpy$fft$helper$$$function_4_rfftfreq( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_val = NULL;
    PyObject *var_N = NULL;
    PyObject *var_results = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_e4ff2f7af168a2ac5bc1214e640bbf05 = NULL;

    struct Nuitka_FrameObject *frame_e4ff2f7af168a2ac5bc1214e640bbf05;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e4ff2f7af168a2ac5bc1214e640bbf05, codeobj_e4ff2f7af168a2ac5bc1214e640bbf05, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e4ff2f7af168a2ac5bc1214e640bbf05 = cache_frame_e4ff2f7af168a2ac5bc1214e640bbf05;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e4ff2f7af168a2ac5bc1214e640bbf05 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e4ff2f7af168a2ac5bc1214e640bbf05 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_n;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_576644db5145960717a957e6a5504ec5;
    frame_e4ff2f7af168a2ac5bc1214e640bbf05->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 223;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_float_1_0;
    tmp_left_name_2 = par_n;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_d;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

    tmp_left_name_4 = par_n;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_3 = const_int_pos_2;
    tmp_left_name_3 = BINARY_OPERATION_FLOORDIV( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_2;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_N;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a1bc806d8491c0bf2ce21ede33000e42 );
    frame_e4ff2f7af168a2ac5bc1214e640bbf05->m_frame.f_lineno = 226;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_results == NULL );
    var_results = tmp_assign_source_3;

    tmp_left_name_5 = var_results;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = var_val;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4ff2f7af168a2ac5bc1214e640bbf05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4ff2f7af168a2ac5bc1214e640bbf05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4ff2f7af168a2ac5bc1214e640bbf05 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e4ff2f7af168a2ac5bc1214e640bbf05, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e4ff2f7af168a2ac5bc1214e640bbf05->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e4ff2f7af168a2ac5bc1214e640bbf05, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e4ff2f7af168a2ac5bc1214e640bbf05,
        type_description_1,
        par_n,
        par_d,
        var_val,
        var_N,
        var_results
    );


    // Release cached frame.
    if ( frame_e4ff2f7af168a2ac5bc1214e640bbf05 == cache_frame_e4ff2f7af168a2ac5bc1214e640bbf05 )
    {
        Py_DECREF( frame_e4ff2f7af168a2ac5bc1214e640bbf05 );
    }
    cache_frame_e4ff2f7af168a2ac5bc1214e640bbf05 = NULL;

    assertFrameObject( frame_e4ff2f7af168a2ac5bc1214e640bbf05 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_4_rfftfreq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_results );
    Py_DECREF( var_results );
    var_results = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_4_rfftfreq );
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


static PyObject *impl_numpy$fft$helper$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_max_size_in_mb = python_pars[ 1 ];
    PyObject *par_max_item_count = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_1b3365d26d12635e0f5acf93d5afa8dc = NULL;

    struct Nuitka_FrameObject *frame_1b3365d26d12635e0f5acf93d5afa8dc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1b3365d26d12635e0f5acf93d5afa8dc, codeobj_1b3365d26d12635e0f5acf93d5afa8dc, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1b3365d26d12635e0f5acf93d5afa8dc = cache_frame_1b3365d26d12635e0f5acf93d5afa8dc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1b3365d26d12635e0f5acf93d5afa8dc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1b3365d26d12635e0f5acf93d5afa8dc ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = par_max_size_in_mb;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1048576;
    tmp_assattr_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__max_size_in_bytes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 252;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = par_max_item_count;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__max_item_count, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_collections );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collections );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "collections" );
        exception_tb = NULL;

        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_1b3365d26d12635e0f5acf93d5afa8dc->m_frame.f_lineno = 254;
    tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_OrderedDict );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__dict, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "threading" );
        exception_tb = NULL;

        exception_lineno = 255;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_1b3365d26d12635e0f5acf93d5afa8dc->m_frame.f_lineno = 255;
    tmp_assattr_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_Lock );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__lock, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 255;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b3365d26d12635e0f5acf93d5afa8dc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1b3365d26d12635e0f5acf93d5afa8dc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1b3365d26d12635e0f5acf93d5afa8dc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1b3365d26d12635e0f5acf93d5afa8dc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1b3365d26d12635e0f5acf93d5afa8dc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1b3365d26d12635e0f5acf93d5afa8dc,
        type_description_1,
        par_self,
        par_max_size_in_mb,
        par_max_item_count
    );


    // Release cached frame.
    if ( frame_1b3365d26d12635e0f5acf93d5afa8dc == cache_frame_1b3365d26d12635e0f5acf93d5afa8dc )
    {
        Py_DECREF( frame_1b3365d26d12635e0f5acf93d5afa8dc );
    }
    cache_frame_1b3365d26d12635e0f5acf93d5afa8dc = NULL;

    assertFrameObject( frame_1b3365d26d12635e0f5acf93d5afa8dc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_max_size_in_mb );
    Py_DECREF( par_max_size_in_mb );
    par_max_size_in_mb = NULL;

    CHECK_OBJECT( (PyObject *)par_max_item_count );
    Py_DECREF( par_max_item_count );
    par_max_item_count = NULL;

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

    CHECK_OBJECT( (PyObject *)par_max_size_in_mb );
    Py_DECREF( par_max_size_in_mb );
    par_max_size_in_mb = NULL;

    CHECK_OBJECT( (PyObject *)par_max_item_count );
    Py_DECREF( par_max_item_count );
    par_max_item_count = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_5___init__ );
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


static PyObject *impl_numpy$fft$helper$$$function_6_put_twiddle_factors( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_factors = python_pars[ 2 ];
    PyObject *var_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4f79c07c4cb9908024c6a4a3bd2c9000 = NULL;

    struct Nuitka_FrameObject *frame_4f79c07c4cb9908024c6a4a3bd2c9000;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4f79c07c4cb9908024c6a4a3bd2c9000, codeobj_4f79c07c4cb9908024c6a4a3bd2c9000, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4f79c07c4cb9908024c6a4a3bd2c9000 = cache_frame_4f79c07c4cb9908024c6a4a3bd2c9000;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f79c07c4cb9908024c6a4a3bd2c9000 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lock );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_2;

    tmp_source_name_3 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 271;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    // Tried code:
    // Tried code:
    // Tried code:
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dict );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_1 = par_n;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_5;
    }
    assert( var_value == NULL );
    var_value = tmp_assign_source_5;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_4f79c07c4cb9908024c6a4a3bd2c9000, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_4f79c07c4cb9908024c6a4a3bd2c9000, exception_keeper_lineno_1 );
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


        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_4;
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
    tmp_assign_source_6 = PyList_New( 0 );
    assert( var_value == NULL );
    var_value = tmp_assign_source_6;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 275;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame) frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_6_put_twiddle_factors );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_instance_2 = var_value;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_2 = par_factors;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = var_value;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dict );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_ass_subscript_1 = par_n;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_called_instance_3 = par_self;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 281;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain__prune_cache );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto try_end_2;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_4f79c07c4cb9908024c6a4a3bd2c9000, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_4f79c07c4cb9908024c6a4a3bd2c9000, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_BaseException;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_7 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_7;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_2 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_3 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_4 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_5 = PyThreadState_GET()->exc_traceback;
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 271;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 271;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame) frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 271;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame) frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_6_put_twiddle_factors );
    return NULL;
    // End of try:
    try_end_2:;
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

    tmp_compare_left_3 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_3 );
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 271;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    tmp_compare_left_4 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame.f_lineno = 271;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f79c07c4cb9908024c6a4a3bd2c9000, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f79c07c4cb9908024c6a4a3bd2c9000->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f79c07c4cb9908024c6a4a3bd2c9000, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f79c07c4cb9908024c6a4a3bd2c9000,
        type_description_1,
        par_self,
        par_n,
        par_factors,
        var_value
    );


    // Release cached frame.
    if ( frame_4f79c07c4cb9908024c6a4a3bd2c9000 == cache_frame_4f79c07c4cb9908024c6a4a3bd2c9000 )
    {
        Py_DECREF( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );
    }
    cache_frame_4f79c07c4cb9908024c6a4a3bd2c9000 = NULL;

    assertFrameObject( frame_4f79c07c4cb9908024c6a4a3bd2c9000 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_6_put_twiddle_factors );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_factors );
    Py_DECREF( par_factors );
    par_factors = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_factors );
    Py_DECREF( par_factors );
    par_factors = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_6_put_twiddle_factors );
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


static PyObject *impl_numpy$fft$helper$$$function_7_pop_twiddle_factors( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_all_values = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 = NULL;

    struct Nuitka_FrameObject *frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3, codeobj_e1cca78b7cf1f5c367c9cfa0ac26a0c3, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 = cache_frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__lock );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_2;

    tmp_source_name_3 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 300;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    // Tried code:
    // Tried code:
    tmp_compexpr_left_1 = par_n;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dict );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_or_left_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
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
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dict );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_subscript_name_1 = par_n;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_or_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto try_except_handler_4;
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


        exception_lineno = 301;
        type_description_1 = "oooo";
        goto try_except_handler_4;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    branch_no_1:;
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__dict );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = par_n;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    assert( var_all_values == NULL );
    var_all_values = tmp_assign_source_5;

    tmp_called_instance_2 = var_all_values;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 305;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_pop );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    assert( var_value == NULL );
    var_value = tmp_assign_source_6;

    tmp_cond_value_2 = var_all_values;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_ass_subvalue_1 = var_all_values;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__dict );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_ass_subscript_1 = par_n;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_return_value = var_value;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_7_pop_twiddle_factors );
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_7 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_7;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_2 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_2 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_3 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_4 = PyThreadState_GET()->exc_traceback;
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 300;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 300;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame) frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 300;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame) frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_7_pop_twiddle_factors );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_3:;
    tmp_called_name_3 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_3 );
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 300;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_return_handler_2;
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

    tmp_compare_left_2 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 300;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    tmp_compare_left_3 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame.f_lineno = 300;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__indicator );
    Py_DECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3,
        type_description_1,
        par_self,
        par_n,
        var_all_values,
        var_value
    );


    // Release cached frame.
    if ( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 == cache_frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 )
    {
        Py_DECREF( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );
    }
    cache_frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 = NULL;

    assertFrameObject( frame_e1cca78b7cf1f5c367c9cfa0ac26a0c3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_7_pop_twiddle_factors );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_all_values );
    var_all_values = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_all_values );
    var_all_values = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_7_pop_twiddle_factors );
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


static PyObject *impl_numpy$fft$helper$$$function_8__prune_cache( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8450132e8249fc420225bac97e68b6bd = NULL;

    struct Nuitka_FrameObject *frame_8450132e8249fc420225bac97e68b6bd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8450132e8249fc420225bac97e68b6bd, codeobj_8450132e8249fc420225bac97e68b6bd, module_numpy$fft$helper, sizeof(void *) );
    frame_8450132e8249fc420225bac97e68b6bd = cache_frame_8450132e8249fc420225bac97e68b6bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8450132e8249fc420225bac97e68b6bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8450132e8249fc420225bac97e68b6bd ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dict );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 314;
        type_description_1 = "o";
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
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__dict );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__max_item_count );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 314;
        type_description_1 = "o";
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
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8450132e8249fc420225bac97e68b6bd->m_frame.f_lineno = 314;
    tmp_or_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_size );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_and_right_value_1 = tmp_or_left_value_1;
    or_end_1:;
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

        exception_lineno = 314;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dict );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_popitem );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_c98aea4db9bb638cab0bc77208ac80c8 );
    frame_8450132e8249fc420225bac97e68b6bd->m_frame.f_lineno = 315;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8450132e8249fc420225bac97e68b6bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8450132e8249fc420225bac97e68b6bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8450132e8249fc420225bac97e68b6bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8450132e8249fc420225bac97e68b6bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8450132e8249fc420225bac97e68b6bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8450132e8249fc420225bac97e68b6bd,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8450132e8249fc420225bac97e68b6bd == cache_frame_8450132e8249fc420225bac97e68b6bd )
    {
        Py_DECREF( frame_8450132e8249fc420225bac97e68b6bd );
    }
    cache_frame_8450132e8249fc420225bac97e68b6bd = NULL;

    assertFrameObject( frame_8450132e8249fc420225bac97e68b6bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_8__prune_cache );
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_8__prune_cache );
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


static PyObject *impl_numpy$fft$helper$$$function_9__check_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var__i = NULL;
    PyObject *var_item_sizes = NULL;
    PyObject *var_max_size = NULL;
    PyObject *tmp_list_contraction$genexpr_1__$0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_sum_sequence_1;
    PyObject *tmp_sum_sequence_2;
    static struct Nuitka_FrameObject *cache_frame_f3c662d00f690361462e9599e4784131 = NULL;

    struct Nuitka_FrameObject *frame_f3c662d00f690361462e9599e4784131;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f3c662d00f690361462e9599e4784131, codeobj_f3c662d00f690361462e9599e4784131, module_numpy$fft$helper, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f3c662d00f690361462e9599e4784131 = cache_frame_f3c662d00f690361462e9599e4784131;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f3c662d00f690361462e9599e4784131 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f3c662d00f690361462e9599e4784131 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dict );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_f3c662d00f690361462e9599e4784131->m_frame.f_lineno = 319;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 318;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var__i;
        var__i = tmp_assign_source_5;
        Py_INCREF( var__i );
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var__i;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooo";
        goto try_except_handler_2;
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
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_iter_arg_2 = var__i;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_list_contraction$genexpr_1__$0;
        tmp_list_contraction$genexpr_1__$0 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_outline_return_value_2 = Nuitka_Generator_New(
        numpy$fft$helper$$$function_9__check_size$$$genexpr_1_genexpr_context,
        module_numpy$fft$helper,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_99fb9e45ac37ae9a319f3e001d8cb5be,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_2)->m_closure[0] = PyCell_NEW0( tmp_list_contraction$genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_2 ) >= 1 ); 


    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_9__check_size );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction$genexpr_1__$0 );
    Py_DECREF( tmp_list_contraction$genexpr_1__$0 );
    tmp_list_contraction$genexpr_1__$0 = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_list_contraction$genexpr_1__$0 );
    Py_DECREF( tmp_list_contraction$genexpr_1__$0 );
    tmp_list_contraction$genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_9__check_size );
    return NULL;
    outline_result_2:;
    tmp_sum_sequence_1 = tmp_outline_return_value_2;
    tmp_append_value_1 = BUILTIN_SUM1( tmp_sum_sequence_1 );
    Py_DECREF( tmp_sum_sequence_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_9__check_size );
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_9__check_size );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_item_sizes == NULL );
    var_item_sizes = tmp_assign_source_1;

    tmp_cond_value_2 = var_item_sizes;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__max_size_in_bytes );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_float_1_5;
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_3 = var_item_sizes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_f3c662d00f690361462e9599e4784131->m_frame.f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_f3c662d00f690361462e9599e4784131->m_frame.f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_max_size == NULL );
    var_max_size = tmp_assign_source_7;

    tmp_sum_sequence_2 = var_item_sizes;

    CHECK_OBJECT( tmp_sum_sequence_2 );
    tmp_compexpr_left_1 = BUILTIN_SUM1( tmp_sum_sequence_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = var_max_size;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_return_value = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3c662d00f690361462e9599e4784131 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3c662d00f690361462e9599e4784131 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f3c662d00f690361462e9599e4784131 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f3c662d00f690361462e9599e4784131, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f3c662d00f690361462e9599e4784131->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f3c662d00f690361462e9599e4784131, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f3c662d00f690361462e9599e4784131,
        type_description_1,
        par_self,
        var__i,
        var_item_sizes,
        var_max_size
    );


    // Release cached frame.
    if ( frame_f3c662d00f690361462e9599e4784131 == cache_frame_f3c662d00f690361462e9599e4784131 )
    {
        Py_DECREF( frame_f3c662d00f690361462e9599e4784131 );
    }
    cache_frame_f3c662d00f690361462e9599e4784131 = NULL;

    assertFrameObject( frame_f3c662d00f690361462e9599e4784131 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_9__check_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var__i );
    var__i = NULL;

    CHECK_OBJECT( (PyObject *)var_item_sizes );
    Py_DECREF( var_item_sizes );
    var_item_sizes = NULL;

    Py_XDECREF( var_max_size );
    var_max_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var__i );
    var__i = NULL;

    Py_XDECREF( var_item_sizes );
    var_item_sizes = NULL;

    Py_XDECREF( var_max_size );
    var_max_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_9__check_size );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct numpy$fft$helper$$$function_9__check_size$$$genexpr_1_genexpr_locals {
    PyObject *var__j
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *numpy$fft$helper$$$function_9__check_size$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void numpy$fft$helper$$$function_9__check_size$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var__j = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_99fb9e45ac37ae9a319f3e001d8cb5be, module_numpy$fft$helper, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->m_frame.f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    if ( generator->m_closure[0] == NULL )
    {
        tmp_next_source_1 = NULL;
    }
    else
    {
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "No";
            exception_lineno = 318;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var__j;
        var__j = tmp_assign_source_2;
        Py_INCREF( var__j );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var__j;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nbytes );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var__j
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_2;
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

    Py_XDECREF( var__j );
    var__j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var__j );
    var__j = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_1_fftshift( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_1_fftshift,
        const_str_plain_fftshift,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a3927c186b1ca6b3dcfee53da280945,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_5bdc29da7e9b0d9cd26e1d40e7ad7f75,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_2_ifftshift( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_2_ifftshift,
        const_str_plain_ifftshift,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14162b46f9527ccfbe510a0a4695a1bf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_3_fftfreq( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_3_fftfreq,
        const_str_plain_fftfreq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_744fbce1a010cd1e4817414e281b5f8e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_5ced19727bd7c891a8f02a2cacb55d0b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_4_rfftfreq( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_4_rfftfreq,
        const_str_plain_rfftfreq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e4ff2f7af168a2ac5bc1214e640bbf05,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_2fb7ba50d30fb34bf585af15f504be82,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_5___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1b3365d26d12635e0f5acf93d5afa8dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_6_put_twiddle_factors(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_6_put_twiddle_factors,
        const_str_plain_put_twiddle_factors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4f79c07c4cb9908024c6a4a3bd2c9000,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_83d2bc87f06d688919004ad61a653f0c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_7_pop_twiddle_factors(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_7_pop_twiddle_factors,
        const_str_plain_pop_twiddle_factors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1cca78b7cf1f5c367c9cfa0ac26a0c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_cb5888388b180e4bf5e52d2cb6d181db,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_8__prune_cache(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_8__prune_cache,
        const_str_plain__prune_cache,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8450132e8249fc420225bac97e68b6bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_9__check_size(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_9__check_size,
        const_str_plain__check_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f3c662d00f690361462e9599e4784131,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$helper =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.helper",   /* m_name */
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

MOD_INIT_DECL( numpy$fft$helper )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$helper );
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
    puts("numpy.fft.helper: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.helper: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft$helper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$helper = Py_InitModule4(
        "numpy.fft.helper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$fft$helper = PyModule_Create( &mdef_numpy$fft$helper );
#endif

    moduledict_numpy$fft$helper = MODULE_DICT( module_numpy$fft$helper );

    CHECK_OBJECT( module_numpy$fft$helper );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_91a6e65509cfbbe4ba154cabdb7becca, module_numpy$fft$helper );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var_put_twiddle_factors = NULL;
    PyObject *outline_0_var_pop_twiddle_factors = NULL;
    PyObject *outline_0_var__prune_cache = NULL;
    PyObject *outline_0_var__check_size = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_left_name_1;
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
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_7f878c87c06e1e81c0c1a781a415b825;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_4ef7001003be7e06506ab78ccaae217c;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c67d25da9306edc318e7693005148d1b;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_7f878c87c06e1e81c0c1a781a415b825 = MAKE_MODULE_FRAME( codeobj_7f878c87c06e1e81c0c1a781a415b825, module_numpy$fft$helper );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_7f878c87c06e1e81c0c1a781a415b825 );
    assert( Py_REFCNT( frame_7f878c87c06e1e81c0c1a781a415b825 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_collections;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft$helper;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_7f878c87c06e1e81c0c1a781a415b825->m_frame.f_lineno = 7;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_threading;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft$helper;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_7f878c87c06e1e81c0c1a781a415b825->m_frame.f_lineno = 8;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft$helper;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_integer_types_tuple;
    tmp_level_name_3 = const_int_0;
    frame_7f878c87c06e1e81c0c1a781a415b825->m_frame.f_lineno = 10;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_integer_types );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$fft$helper;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple;
    tmp_level_name_4 = const_int_0;
    frame_7f878c87c06e1e81c0c1a781a415b825->m_frame.f_lineno = 11;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_concatenate );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_arange );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_take );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_15 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_integer );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer, tmp_assign_source_16 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_empty );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_17 );
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

    tmp_assign_source_18 = LIST_COPY( const_list_d3376bb1f7f4aa67004298e8d81c0177_list );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "integer" );
        exception_tb = NULL;

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_19 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_19 );
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$fft$helper$$$function_1_fftshift( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftshift, tmp_assign_source_20 );
    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$fft$helper$$$function_2_ifftshift( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_ifftshift, tmp_assign_source_21 );
    tmp_defaults_3 = const_tuple_float_1_0_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$fft$helper$$$function_3_fftfreq( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftfreq, tmp_assign_source_22 );
    tmp_defaults_4 = const_tuple_float_1_0_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$fft$helper$$$function_4_rfftfreq( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_rfftfreq, tmp_assign_source_23 );
    tmp_assign_source_25 = const_str_digest_91a6e65509cfbbe4ba154cabdb7becca;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_25 );
    outline_0_var___module__ = tmp_assign_source_25;

    tmp_assign_source_26 = const_str_digest_cd76b1be497a25a97488b634a3e060e9;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_0_var___doc__ = tmp_assign_source_26;

    tmp_assign_source_27 = MAKE_FUNCTION_numpy$fft$helper$$$function_5___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_27;

    tmp_assign_source_28 = MAKE_FUNCTION_numpy$fft$helper$$$function_6_put_twiddle_factors(  );
    assert( outline_0_var_put_twiddle_factors == NULL );
    outline_0_var_put_twiddle_factors = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_numpy$fft$helper$$$function_7_pop_twiddle_factors(  );
    assert( outline_0_var_pop_twiddle_factors == NULL );
    outline_0_var_pop_twiddle_factors = tmp_assign_source_29;

    tmp_assign_source_30 = MAKE_FUNCTION_numpy$fft$helper$$$function_8__prune_cache(  );
    assert( outline_0_var__prune_cache == NULL );
    outline_0_var__prune_cache = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_numpy$fft$helper$$$function_9__check_size(  );
    assert( outline_0_var__check_size == NULL );
    outline_0_var__check_size = tmp_assign_source_31;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 7 );
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
    tmp_dict_value_3 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_put_twiddle_factors;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_put_twiddle_factors;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var_pop_twiddle_factors;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_pop_twiddle_factors;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var__prune_cache;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain__prune_cache;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var__check_size;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain__check_size;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_put_twiddle_factors );
    Py_DECREF( outline_0_var_put_twiddle_factors );
    outline_0_var_put_twiddle_factors = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_pop_twiddle_factors );
    Py_DECREF( outline_0_var_pop_twiddle_factors );
    outline_0_var_pop_twiddle_factors = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__prune_cache );
    Py_DECREF( outline_0_var__prune_cache );
    outline_0_var__prune_cache = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__check_size );
    Py_DECREF( outline_0_var__check_size );
    outline_0_var__check_size = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_put_twiddle_factors );
    Py_DECREF( outline_0_var_put_twiddle_factors );
    outline_0_var_put_twiddle_factors = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_pop_twiddle_factors );
    Py_DECREF( outline_0_var_pop_twiddle_factors );
    outline_0_var_pop_twiddle_factors = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__prune_cache );
    Py_DECREF( outline_0_var__prune_cache );
    outline_0_var__prune_cache = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__check_size );
    Py_DECREF( outline_0_var__check_size );
    outline_0_var__check_size = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_24 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_24;

    // Tried code:
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


        exception_lineno = 230;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_32 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_32 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_32;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain__FFTCache;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_7f878c87c06e1e81c0c1a781a415b825->m_frame.f_lineno = 230;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_33;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f878c87c06e1e81c0c1a781a415b825 );
#endif
    popFrameStack();

    assertFrameObject( frame_7f878c87c06e1e81c0c1a781a415b825 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7f878c87c06e1e81c0c1a781a415b825 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7f878c87c06e1e81c0c1a781a415b825, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7f878c87c06e1e81c0c1a781a415b825->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7f878c87c06e1e81c0c1a781a415b825, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_34 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_34 );
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain__FFTCache, tmp_assign_source_34 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$fft$helper );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
