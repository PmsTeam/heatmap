/* Generated code for Python source for module 'numpy.core.einsumfunc'
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

/* The _module_numpy$core$einsumfunc is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$einsumfunc;
PyDictObject *moduledict_numpy$core$einsumfunc;

/* The module constants used, if any. */
extern PyObject *const_str_plain_result_type;
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain_input_sets;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_496182f1c58f2275b22cd14fcdcd5aff;
static PyObject *const_str_digest_b7e90a1a12f5d45ca041d4a5fa75a37b;
extern PyObject *const_tuple_str_chr_45_tuple;
static PyObject *const_str_digest_3e3fe43ecdde34b94f67d6d2a41ef338;
static PyObject *const_str_digest_e85b8bb630e437a978cce33a73ab3e23;
static PyObject *const_tuple_4b319d6f5ded846738b23f69a0a0a618_tuple;
static PyObject *const_tuple_2cc0579f6502b764c62a1aa6c0a09c7b_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain__greedy_path;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_dfb5456781148b3ae08ed9b916e88c5e;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_tuple_list_empty_list_empty_list_empty_list_empty_tuple;
static PyObject *const_str_plain__compute_size_by_dict;
extern PyObject *const_str_plain_count;
static PyObject *const_str_plain_einsum_symbols_set;
extern PyObject *const_str_plain_ret;
static PyObject *const_str_plain_greedy;
extern PyObject *const_str_plain_key;
static PyObject *const_list_int_pos_1_int_pos_2_list;
static PyObject *const_str_digest_8e49326f7690ff05ca40ba77fd983d5e;
static PyObject *const_str_digest_10ad137d74c6be7e0c72cfa17045f151;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_indices;
static PyObject *const_str_plain_optimize;
static PyObject *const_tuple_str_plain_einsum_call_false_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_ind;
static PyObject *const_str_plain_optimal;
static PyObject *const_str_digest_6742169a47519a553c97fa43f8522482;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_casting;
static PyObject *const_str_plain__find_contraction;
static PyObject *const_str_digest_ba77a0d442bad3bfe694aaff76f69205;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain_new_result;
static PyObject *const_list_str_plain_einsum_path_list;
static PyObject *const_str_digest_eae4f10416bff44fb5331621677ba97e;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
static PyObject *const_tuple_str_plain_out_none_tuple;
static PyObject *const_str_digest_7e6341c69fdb4622f22193bbd5d00143;
static PyObject *const_str_digest_0cb78dee9aaca0547cf988b1d40cdc18;
static PyObject *const_tuple_str_plain_c_einsum_tuple;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_f48b9a76c3de3c11384b7558ece67019;
extern PyObject *const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_tuple;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_11664ec53a5e5dce769679475095a96e;
static PyObject *const_str_digest_a02697d78922b21de33ec4360e1c9026;
static PyObject *const_str_digest_f53b1132302d684159f8217c0b69f9b9;
static PyObject *const_str_digest_1c585c7fafdaccb128085f558a2984e4;
static PyObject *const_str_digest_ec4f2fe34efa162d53cf6f8323abf7a1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_out;
extern PyObject *const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_tuple;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_str_empty_tuple;
static PyObject *const_list_tuple_int_0_tuple_list;
static PyObject *const_tuple_str_chr_62_tuple;
static PyObject *const_str_plain_idx_removed;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_4863c92cb57501986a7f15de46ba3d35;
static PyObject *const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_str_empty_tuple;
static PyObject *const_str_digest_026fb1843d57cefb39a75fd56f107dea;
extern PyObject *const_str_plain_c_einsum;
static PyObject *const_str_plain_einsum;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_chr_45;
static PyObject *const_tuple_str_plain_optimize_false_tuple;
static PyObject *const_str_digest_4c770c8df4cb1e8934aef45ffaf3e89f;
static PyObject *const_str_plain_output_set;
extern PyObject *const_str_dot;
static PyObject *const_tuple_4b5933acd0fcdc7b3d9f76b238977b78_tuple;
static PyObject *const_str_digest_8cce5795c2e9e4ecac7710565bce554c;
static PyObject *const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain_asarray_str_plain_asanyarray_str_plain_result_type_tuple;
static PyObject *const_str_digest_b62b251e30c55c152112d08e8bb15e52;
static PyObject *const_str_plain_einsum_path;
static PyObject *const_tuple_b3863973bc273a3f5fa97661a19632bd_tuple;
extern PyObject *const_str_plain_reverse;
static PyObject *const_tuple_d88e3f54a9ddd1e6e1b297b2dad8b8d5_tuple;
static PyObject *const_tuple_str_dot_str_empty_tuple;
static PyObject *const_str_plain_idx_remain;
extern PyObject *const_dict_20f16b30e1951d468c3080dfc46b8748;
static PyObject *const_str_plain_remaining;
static PyObject *const_list_str_plain_einsum_str_plain_einsum_path_list;
static PyObject *const_str_digest_7610632d8029595d61ca9adbe764df74;
static PyObject *const_str_plain__parse_einsum_input;
static PyObject *const_tuple_type_int_type_float_tuple;
static PyObject *const_str_plain__optimal_path;
extern PyObject *const_str_plain_order;
static PyObject *const_str_digest_a319344f3e14a19468a90df3bc97e9bc;
static PyObject *const_str_digest_a30c1df030532b629808718d9ace1004;
static PyObject *const_str_digest_73fe507b2f33a2f1c3478ff095ee8003;
static PyObject *const_str_digest_aba49e18684bfc786d76b032f28e51f5;
static PyObject *const_str_digest_6d9adbd3d3d66915dcc3d296f1e8605f;
extern PyObject *const_str_plain_shape;
static PyObject *const_tuple_str_space_str_empty_tuple;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_plain_einsum_call;
static PyObject *const_str_plain_positions;
static PyObject *const_str_digest_672d6b5dc9ec3a69078dceb36f6e74f2;
static PyObject *const_list_f2cfa46d54fc751359627bd1f65900ac_list;
static PyObject *const_str_plain_idx_dict;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_df8039332f386aa3444971ccdb53ddc6;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_sorted;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
extern PyObject *const_str_chr_62;
static PyObject *const_str_digest_837590eb849cf650350c8cbb41ba5fe0;
static PyObject *const_str_digest_dffd8e08e490fb0e512072a5709acb38;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_list_str_plain_optimize_list;
static PyObject *const_str_plain_idx_contract;
static PyObject *const_str_digest_05758ecedfbef83176777c048261903b;
extern PyObject *const_str_plain_asanyarray;
static PyObject *const_str_plain_einsum_symbols;
static PyObject *const_str_digest_a8e467978be330e87b7a63cc9a84303b;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_pop;
static PyObject *const_tuple_str_chr_44_str_empty_tuple;
static PyObject *const_str_digest_9c56b0e82e91dd6bdb91723b1b3e5c55;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple;
static PyObject *const_str_digest_e834105f3dae81f9d8d38e7ad6e967b2;
static PyObject *const_list_str_plain_optimize_str_plain_einsum_call_list;
extern PyObject *const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_input_sets = UNSTREAM_STRING( &constant_bin[ 301252 ], 10, 1 );
    const_str_digest_496182f1c58f2275b22cd14fcdcd5aff = UNSTREAM_STRING( &constant_bin[ 301262 ], 21, 0 );
    const_str_digest_b7e90a1a12f5d45ca041d4a5fa75a37b = UNSTREAM_STRING( &constant_bin[ 301283 ], 17, 0 );
    const_str_digest_3e3fe43ecdde34b94f67d6d2a41ef338 = UNSTREAM_STRING( &constant_bin[ 301300 ], 17, 0 );
    const_str_digest_e85b8bb630e437a978cce33a73ab3e23 = UNSTREAM_STRING( &constant_bin[ 301317 ], 30, 0 );
    const_tuple_4b319d6f5ded846738b23f69a0a0a618_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 301347 ], 316 );
    const_tuple_2cc0579f6502b764c62a1aa6c0a09c7b_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 301663 ], 307 );
    const_str_plain__greedy_path = UNSTREAM_STRING( &constant_bin[ 301970 ], 12, 1 );
    const_str_digest_dfb5456781148b3ae08ed9b916e88c5e = UNSTREAM_STRING( &constant_bin[ 301982 ], 75, 0 );
    const_tuple_list_empty_list_empty_list_empty_list_empty_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_list_empty_list_empty_list_empty_list_empty_tuple, 0, const_list_empty ); Py_INCREF( const_list_empty );
    PyTuple_SET_ITEM( const_tuple_list_empty_list_empty_list_empty_list_empty_tuple, 1, const_list_empty ); Py_INCREF( const_list_empty );
    PyTuple_SET_ITEM( const_tuple_list_empty_list_empty_list_empty_list_empty_tuple, 2, const_list_empty ); Py_INCREF( const_list_empty );
    PyTuple_SET_ITEM( const_tuple_list_empty_list_empty_list_empty_list_empty_tuple, 3, const_list_empty ); Py_INCREF( const_list_empty );
    const_str_plain__compute_size_by_dict = UNSTREAM_STRING( &constant_bin[ 302057 ], 21, 1 );
    const_str_plain_einsum_symbols_set = UNSTREAM_STRING( &constant_bin[ 302078 ], 18, 1 );
    const_str_plain_greedy = UNSTREAM_STRING( &constant_bin[ 301971 ], 6, 1 );
    const_list_int_pos_1_int_pos_2_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_list, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_str_digest_8e49326f7690ff05ca40ba77fd983d5e = UNSTREAM_STRING( &constant_bin[ 302096 ], 43, 0 );
    const_str_digest_10ad137d74c6be7e0c72cfa17045f151 = UNSTREAM_STRING( &constant_bin[ 302139 ], 30, 0 );
    const_str_plain_optimize = UNSTREAM_STRING( &constant_bin[ 104828 ], 8, 1 );
    const_tuple_str_plain_einsum_call_false_tuple = PyTuple_New( 2 );
    const_str_plain_einsum_call = UNSTREAM_STRING( &constant_bin[ 302169 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_einsum_call_false_tuple, 0, const_str_plain_einsum_call ); Py_INCREF( const_str_plain_einsum_call );
    PyTuple_SET_ITEM( const_tuple_str_plain_einsum_call_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_plain_optimal = UNSTREAM_STRING( &constant_bin[ 302180 ], 7, 1 );
    const_str_digest_6742169a47519a553c97fa43f8522482 = UNSTREAM_STRING( &constant_bin[ 302187 ], 17, 0 );
    const_str_plain__find_contraction = UNSTREAM_STRING( &constant_bin[ 302204 ], 17, 1 );
    const_str_digest_ba77a0d442bad3bfe694aaff76f69205 = UNSTREAM_STRING( &constant_bin[ 302221 ], 28, 0 );
    const_str_plain_new_result = UNSTREAM_STRING( &constant_bin[ 301554 ], 10, 1 );
    const_list_str_plain_einsum_path_list = PyList_New( 1 );
    const_str_plain_einsum_path = UNSTREAM_STRING( &constant_bin[ 302249 ], 11, 1 );
    PyList_SET_ITEM( const_list_str_plain_einsum_path_list, 0, const_str_plain_einsum_path ); Py_INCREF( const_str_plain_einsum_path );
    const_str_digest_eae4f10416bff44fb5331621677ba97e = UNSTREAM_STRING( &constant_bin[ 302260 ], 54, 0 );
    const_tuple_str_plain_out_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_out_none_tuple, 0, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_str_plain_out_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_7e6341c69fdb4622f22193bbd5d00143 = UNSTREAM_STRING( &constant_bin[ 302314 ], 30, 0 );
    const_str_digest_0cb78dee9aaca0547cf988b1d40cdc18 = UNSTREAM_STRING( &constant_bin[ 302344 ], 31, 0 );
    const_tuple_str_plain_c_einsum_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_einsum_tuple, 0, const_str_plain_c_einsum ); Py_INCREF( const_str_plain_c_einsum );
    const_str_digest_f48b9a76c3de3c11384b7558ece67019 = UNSTREAM_STRING( &constant_bin[ 302375 ], 61, 0 );
    const_str_digest_11664ec53a5e5dce769679475095a96e = UNSTREAM_STRING( &constant_bin[ 302436 ], 28, 0 );
    const_str_digest_a02697d78922b21de33ec4360e1c9026 = UNSTREAM_STRING( &constant_bin[ 302464 ], 52, 1 );
    const_str_digest_f53b1132302d684159f8217c0b69f9b9 = UNSTREAM_STRING( &constant_bin[ 302516 ], 47, 0 );
    const_str_digest_1c585c7fafdaccb128085f558a2984e4 = UNSTREAM_STRING( &constant_bin[ 302563 ], 74, 0 );
    const_str_digest_ec4f2fe34efa162d53cf6f8323abf7a1 = UNSTREAM_STRING( &constant_bin[ 302637 ], 935, 0 );
    const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_str_empty_tuple, 0, const_str_digest_3501979af1b70861f5e9d6a0f04129bf ); Py_INCREF( const_str_digest_3501979af1b70861f5e9d6a0f04129bf );
    PyTuple_SET_ITEM( const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_list_tuple_int_0_tuple_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_tuple_int_0_tuple_list, 0, const_tuple_int_0_tuple ); Py_INCREF( const_tuple_int_0_tuple );
    const_tuple_str_chr_62_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_62_tuple, 0, const_str_chr_62 ); Py_INCREF( const_str_chr_62 );
    const_str_plain_idx_removed = UNSTREAM_STRING( &constant_bin[ 301588 ], 11, 1 );
    const_str_digest_4863c92cb57501986a7f15de46ba3d35 = UNSTREAM_STRING( &constant_bin[ 303572 ], 1205, 0 );
    const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_str_empty_tuple, 0, const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a ); Py_INCREF( const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a );
    PyTuple_SET_ITEM( const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_026fb1843d57cefb39a75fd56f107dea = UNSTREAM_STRING( &constant_bin[ 304777 ], 31, 0 );
    const_str_plain_einsum = UNSTREAM_STRING( &constant_bin[ 61537 ], 6, 1 );
    const_tuple_str_plain_optimize_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_optimize_false_tuple, 0, const_str_plain_optimize ); Py_INCREF( const_str_plain_optimize );
    PyTuple_SET_ITEM( const_tuple_str_plain_optimize_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_4c770c8df4cb1e8934aef45ffaf3e89f = UNSTREAM_STRING( &constant_bin[ 304808 ], 8525, 0 );
    const_str_plain_output_set = UNSTREAM_STRING( &constant_bin[ 301372 ], 10, 1 );
    const_tuple_4b5933acd0fcdc7b3d9f76b238977b78_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 313333 ], 274 );
    const_str_digest_8cce5795c2e9e4ecac7710565bce554c = UNSTREAM_STRING( &constant_bin[ 313607 ], 38, 0 );
    const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple, 0, const_str_plain_indices ); Py_INCREF( const_str_plain_indices );
    const_str_plain_idx_dict = UNSTREAM_STRING( &constant_bin[ 301387 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple, 1, const_str_plain_idx_dict ); Py_INCREF( const_str_plain_idx_dict );
    PyTuple_SET_ITEM( const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple, 2, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    PyTuple_SET_ITEM( const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_tuple_str_plain_asarray_str_plain_asanyarray_str_plain_result_type_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_asarray_str_plain_asanyarray_str_plain_result_type_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_str_plain_asarray_str_plain_asanyarray_str_plain_result_type_tuple, 1, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_str_plain_asarray_str_plain_asanyarray_str_plain_result_type_tuple, 2, const_str_plain_result_type ); Py_INCREF( const_str_plain_result_type );
    const_str_digest_b62b251e30c55c152112d08e8bb15e52 = UNSTREAM_STRING( &constant_bin[ 313645 ], 30, 0 );
    const_tuple_b3863973bc273a3f5fa97661a19632bd_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 313675 ], 800 );
    const_tuple_d88e3f54a9ddd1e6e1b297b2dad8b8d5_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 314475 ], 401 );
    const_tuple_str_dot_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_dot_str_empty_tuple, 0, const_str_dot ); Py_INCREF( const_str_dot );
    PyTuple_SET_ITEM( const_tuple_str_dot_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_plain_idx_remain = UNSTREAM_STRING( &constant_bin[ 314876 ], 10, 1 );
    const_str_plain_remaining = UNSTREAM_STRING( &constant_bin[ 252843 ], 9, 1 );
    const_list_str_plain_einsum_str_plain_einsum_path_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_einsum_str_plain_einsum_path_list, 0, const_str_plain_einsum ); Py_INCREF( const_str_plain_einsum );
    PyList_SET_ITEM( const_list_str_plain_einsum_str_plain_einsum_path_list, 1, const_str_plain_einsum_path ); Py_INCREF( const_str_plain_einsum_path );
    const_str_digest_7610632d8029595d61ca9adbe764df74 = UNSTREAM_STRING( &constant_bin[ 314886 ], 28, 0 );
    const_str_plain__parse_einsum_input = UNSTREAM_STRING( &constant_bin[ 314914 ], 19, 1 );
    const_tuple_type_int_type_float_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_int_type_float_tuple, 0, (PyObject *)&PyInt_Type ); Py_INCREF( (PyObject *)&PyInt_Type );
    PyTuple_SET_ITEM( const_tuple_type_int_type_float_tuple, 1, (PyObject *)&PyFloat_Type ); Py_INCREF( (PyObject *)&PyFloat_Type );
    const_str_plain__optimal_path = UNSTREAM_STRING( &constant_bin[ 303503 ], 13, 1 );
    const_str_digest_a319344f3e14a19468a90df3bc97e9bc = UNSTREAM_STRING( &constant_bin[ 314933 ], 4531, 0 );
    const_str_digest_a30c1df030532b629808718d9ace1004 = UNSTREAM_STRING( &constant_bin[ 319464 ], 416, 0 );
    const_str_digest_73fe507b2f33a2f1c3478ff095ee8003 = UNSTREAM_STRING( &constant_bin[ 319880 ], 22, 0 );
    const_str_digest_aba49e18684bfc786d76b032f28e51f5 = UNSTREAM_STRING( &constant_bin[ 319902 ], 1290, 0 );
    const_str_digest_6d9adbd3d3d66915dcc3d296f1e8605f = UNSTREAM_STRING( &constant_bin[ 321192 ], 4, 0 );
    const_tuple_str_space_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_space_str_empty_tuple, 0, const_str_space ); Py_INCREF( const_str_space );
    PyTuple_SET_ITEM( const_tuple_str_space_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_plain_positions = UNSTREAM_STRING( &constant_bin[ 301509 ], 9, 1 );
    const_str_digest_672d6b5dc9ec3a69078dceb36f6e74f2 = UNSTREAM_STRING( &constant_bin[ 321196 ], 64, 0 );
    const_list_f2cfa46d54fc751359627bd1f65900ac_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_f2cfa46d54fc751359627bd1f65900ac_list, 0, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyList_SET_ITEM( const_list_f2cfa46d54fc751359627bd1f65900ac_list, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyList_SET_ITEM( const_list_f2cfa46d54fc751359627bd1f65900ac_list, 2, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyList_SET_ITEM( const_list_f2cfa46d54fc751359627bd1f65900ac_list, 3, const_str_plain_casting ); Py_INCREF( const_str_plain_casting );
    const_str_digest_df8039332f386aa3444971ccdb53ddc6 = UNSTREAM_STRING( &constant_bin[ 301982 ], 74, 0 );
    const_str_digest_837590eb849cf650350c8cbb41ba5fe0 = UNSTREAM_STRING( &constant_bin[ 321260 ], 39, 0 );
    const_str_digest_dffd8e08e490fb0e512072a5709acb38 = UNSTREAM_STRING( &constant_bin[ 321299 ], 68, 0 );
    const_list_str_plain_optimize_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_optimize_list, 0, const_str_plain_optimize ); Py_INCREF( const_str_plain_optimize );
    const_str_plain_idx_contract = UNSTREAM_STRING( &constant_bin[ 301604 ], 12, 1 );
    const_str_digest_05758ecedfbef83176777c048261903b = UNSTREAM_STRING( &constant_bin[ 321367 ], 618, 0 );
    const_str_plain_einsum_symbols = UNSTREAM_STRING( &constant_bin[ 302078 ], 14, 1 );
    const_str_digest_a8e467978be330e87b7a63cc9a84303b = UNSTREAM_STRING( &constant_bin[ 321985 ], 35, 0 );
    const_tuple_str_chr_44_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 0, const_str_chr_44 ); Py_INCREF( const_str_chr_44 );
    PyTuple_SET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_9c56b0e82e91dd6bdb91723b1b3e5c55 = UNSTREAM_STRING( &constant_bin[ 322020 ], 37, 0 );
    const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 0, const_str_plain_positions ); Py_INCREF( const_str_plain_positions );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 1, const_str_plain_input_sets ); Py_INCREF( const_str_plain_input_sets );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 2, const_str_plain_output_set ); Py_INCREF( const_str_plain_output_set );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 3, const_str_plain_idx_contract ); Py_INCREF( const_str_plain_idx_contract );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 4, const_str_plain_idx_remain ); Py_INCREF( const_str_plain_idx_remain );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 5, const_str_plain_remaining ); Py_INCREF( const_str_plain_remaining );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 6, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 7, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 8, const_str_plain_new_result ); Py_INCREF( const_str_plain_new_result );
    PyTuple_SET_ITEM( const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 9, const_str_plain_idx_removed ); Py_INCREF( const_str_plain_idx_removed );
    const_str_digest_e834105f3dae81f9d8d38e7ad6e967b2 = UNSTREAM_STRING( &constant_bin[ 322057 ], 88, 0 );
    const_list_str_plain_optimize_str_plain_einsum_call_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_optimize_str_plain_einsum_call_list, 0, const_str_plain_optimize ); Py_INCREF( const_str_plain_optimize );
    PyList_SET_ITEM( const_list_str_plain_optimize_str_plain_einsum_call_list, 1, const_str_plain_einsum_call ); Py_INCREF( const_str_plain_einsum_call );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$einsumfunc( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0fa6256eb8da4f66561b989a3b43503c;
static PyCodeObject *codeobj_62137c43c38d3f87a6bf92845b2e4e1f;
static PyCodeObject *codeobj_5df9e51f688100229f0db58f8fd239e0;
static PyCodeObject *codeobj_dd8c9b62a45e966e4573a2ed9413b322;
static PyCodeObject *codeobj_58692b4537beec7f7a23c7dc5a6104c2;
static PyCodeObject *codeobj_f5302981381c8da6bbb88ded2759efdc;
static PyCodeObject *codeobj_b2a4ef5c8018fb97743fa40ec9658c8e;
static PyCodeObject *codeobj_9d9b918acf83a8a5031db053489f42c9;
static PyCodeObject *codeobj_0d6efdcbc3710c2f0d3ea98eebf9e458;
static PyCodeObject *codeobj_2bccb313e50ee25c7103711e3916f37c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_eae4f10416bff44fb5331621677ba97e;
    codeobj_0fa6256eb8da4f66561b989a3b43503c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 176, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_62137c43c38d3f87a6bf92845b2e4e1f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 252, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5df9e51f688100229f0db58f8fd239e0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_10ad137d74c6be7e0c72cfa17045f151, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dd8c9b62a45e966e4573a2ed9413b322 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__compute_size_by_dict, 16, const_tuple_48e91a8fefb17eefcbe2489db456d7ec_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58692b4537beec7f7a23c7dc5a6104c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__find_contraction, 45, const_tuple_b0a8fcaa747c7cd93e2477fc94c260aa_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f5302981381c8da6bbb88ded2759efdc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__greedy_path, 180, const_tuple_4b5933acd0fcdc7b3d9f76b238977b78_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b2a4ef5c8018fb97743fa40ec9658c8e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__optimal_path, 105, const_tuple_4b319d6f5ded846738b23f69a0a0a618_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9d9b918acf83a8a5031db053489f42c9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_einsum_input, 259, const_tuple_d88e3f54a9ddd1e6e1b297b2dad8b8d5_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0d6efdcbc3710c2f0d3ea98eebf9e458 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_einsum, 703, const_tuple_2cc0579f6502b764c62a1aa6c0a09c7b_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2bccb313e50ee25c7103711e3916f37c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_einsum_path, 427, const_tuple_b3863973bc273a3f5fa97661a19632bd_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_11_complex_call_helper_keywords_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_1__compute_size_by_dict(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_2__find_contraction(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_3__optimal_path(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_4__greedy_path(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_5__parse_einsum_input(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_6_einsum_path(  );


static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_7_einsum(  );


// The module function definitions.
static PyObject *impl_numpy$core$einsumfunc$$$function_1__compute_size_by_dict( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_indices = python_pars[ 0 ];
    PyObject *par_idx_dict = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *var_i = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_dd8c9b62a45e966e4573a2ed9413b322 = NULL;

    struct Nuitka_FrameObject *frame_dd8c9b62a45e966e4573a2ed9413b322;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_pos_1;
    assert( var_ret == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_ret = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd8c9b62a45e966e4573a2ed9413b322, codeobj_dd8c9b62a45e966e4573a2ed9413b322, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dd8c9b62a45e966e4573a2ed9413b322 = cache_frame_dd8c9b62a45e966e4573a2ed9413b322;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd8c9b62a45e966e4573a2ed9413b322 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd8c9b62a45e966e4573a2ed9413b322 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_indices;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "oooo";
            exception_lineno = 40;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_4;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_ret;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 41;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = par_idx_dict;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_i;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_5 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    var_ret = tmp_assign_source_5;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
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

    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 42;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd8c9b62a45e966e4573a2ed9413b322 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd8c9b62a45e966e4573a2ed9413b322 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd8c9b62a45e966e4573a2ed9413b322 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd8c9b62a45e966e4573a2ed9413b322, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd8c9b62a45e966e4573a2ed9413b322->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd8c9b62a45e966e4573a2ed9413b322, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd8c9b62a45e966e4573a2ed9413b322,
        type_description_1,
        par_indices,
        par_idx_dict,
        var_ret,
        var_i
    );


    // Release cached frame.
    if ( frame_dd8c9b62a45e966e4573a2ed9413b322 == cache_frame_dd8c9b62a45e966e4573a2ed9413b322 )
    {
        Py_DECREF( frame_dd8c9b62a45e966e4573a2ed9413b322 );
    }
    cache_frame_dd8c9b62a45e966e4573a2ed9413b322 = NULL;

    assertFrameObject( frame_dd8c9b62a45e966e4573a2ed9413b322 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_1__compute_size_by_dict );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_idx_dict );
    Py_DECREF( par_idx_dict );
    par_idx_dict = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_idx_dict );
    Py_DECREF( par_idx_dict );
    par_idx_dict = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_1__compute_size_by_dict );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_2__find_contraction( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_positions = python_pars[ 0 ];
    PyObject *par_input_sets = python_pars[ 1 ];
    PyObject *par_output_set = python_pars[ 2 ];
    PyObject *var_idx_contract = NULL;
    PyObject *var_idx_remain = NULL;
    PyObject *var_remaining = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_value = NULL;
    PyObject *var_new_result = NULL;
    PyObject *var_idx_removed = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_58692b4537beec7f7a23c7dc5a6104c2 = NULL;

    struct Nuitka_FrameObject *frame_58692b4537beec7f7a23c7dc5a6104c2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PySet_New( NULL );
    assert( var_idx_contract == NULL );
    var_idx_contract = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_58692b4537beec7f7a23c7dc5a6104c2, codeobj_58692b4537beec7f7a23c7dc5a6104c2, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_58692b4537beec7f7a23c7dc5a6104c2 = cache_frame_58692b4537beec7f7a23c7dc5a6104c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_58692b4537beec7f7a23c7dc5a6104c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_58692b4537beec7f7a23c7dc5a6104c2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_output_set;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_58692b4537beec7f7a23c7dc5a6104c2->m_frame.f_lineno = 89;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_idx_remain == NULL );
    var_idx_remain = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( var_remaining == NULL );
    var_remaining = tmp_assign_source_3;

    tmp_called_name_1 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_1 = par_input_sets;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_58692b4537beec7f7a23c7dc5a6104c2->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            exception_lineno = 91;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "oooooooooo";
        exception_lineno = 91;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
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
        exception_lineno = 91;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooooooooo";
                exception_lineno = 91;
                goto try_except_handler_4;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooo";
        exception_lineno = 91;
        goto try_except_handler_4;
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_ind;
        var_ind = tmp_assign_source_9;
        Py_INCREF( var_ind );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_10;
        Py_INCREF( var_value );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_ind;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = par_positions;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = var_idx_contract;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "idx_contract" );
        exception_tb = NULL;

        exception_lineno = 93;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = var_value;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_11 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    var_idx_contract = tmp_assign_source_11;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = var_remaining;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_2 = var_value;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_58692b4537beec7f7a23c7dc5a6104c2->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_2 = var_idx_remain;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "idx_remain" );
        exception_tb = NULL;

        exception_lineno = 96;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = var_value;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_12 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    var_idx_remain = tmp_assign_source_12;

    branch_end_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_left_name_3 = var_idx_remain;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "idx_remain" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = var_idx_contract;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "idx_contract" );
        exception_tb = NULL;

        exception_lineno = 98;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_new_result == NULL );
    var_new_result = tmp_assign_source_13;

    tmp_left_name_4 = var_idx_contract;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "idx_contract" );
        exception_tb = NULL;

        exception_lineno = 99;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = var_new_result;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_assign_source_14 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_idx_removed == NULL );
    var_idx_removed = tmp_assign_source_14;

    tmp_called_instance_3 = var_remaining;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_3 = var_new_result;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_58692b4537beec7f7a23c7dc5a6104c2->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = PyTuple_New( 4 );
    tmp_tuple_element_1 = var_new_result;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_remaining;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_idx_removed;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_idx_contract;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "idx_contract" );
        exception_tb = NULL;

        exception_lineno = 102;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58692b4537beec7f7a23c7dc5a6104c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_58692b4537beec7f7a23c7dc5a6104c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_58692b4537beec7f7a23c7dc5a6104c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_58692b4537beec7f7a23c7dc5a6104c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_58692b4537beec7f7a23c7dc5a6104c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_58692b4537beec7f7a23c7dc5a6104c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_58692b4537beec7f7a23c7dc5a6104c2,
        type_description_1,
        par_positions,
        par_input_sets,
        par_output_set,
        var_idx_contract,
        var_idx_remain,
        var_remaining,
        var_ind,
        var_value,
        var_new_result,
        var_idx_removed
    );


    // Release cached frame.
    if ( frame_58692b4537beec7f7a23c7dc5a6104c2 == cache_frame_58692b4537beec7f7a23c7dc5a6104c2 )
    {
        Py_DECREF( frame_58692b4537beec7f7a23c7dc5a6104c2 );
    }
    cache_frame_58692b4537beec7f7a23c7dc5a6104c2 = NULL;

    assertFrameObject( frame_58692b4537beec7f7a23c7dc5a6104c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_2__find_contraction );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_positions );
    Py_DECREF( par_positions );
    par_positions = NULL;

    CHECK_OBJECT( (PyObject *)par_input_sets );
    Py_DECREF( par_input_sets );
    par_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)par_output_set );
    Py_DECREF( par_output_set );
    par_output_set = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_idx_remain );
    var_idx_remain = NULL;

    CHECK_OBJECT( (PyObject *)var_remaining );
    Py_DECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    CHECK_OBJECT( (PyObject *)var_new_result );
    Py_DECREF( var_new_result );
    var_new_result = NULL;

    CHECK_OBJECT( (PyObject *)var_idx_removed );
    Py_DECREF( var_idx_removed );
    var_idx_removed = NULL;

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

    CHECK_OBJECT( (PyObject *)par_positions );
    Py_DECREF( par_positions );
    par_positions = NULL;

    CHECK_OBJECT( (PyObject *)par_input_sets );
    Py_DECREF( par_input_sets );
    par_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)par_output_set );
    Py_DECREF( par_output_set );
    par_output_set = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_idx_remain );
    var_idx_remain = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_new_result );
    var_new_result = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_2__find_contraction );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_3__optimal_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_sets = python_pars[ 0 ];
    PyObject *par_output_set = python_pars[ 1 ];
    PyObject *par_idx_dict = python_pars[ 2 ];
    PyObject *par_memory_limit = python_pars[ 3 ];
    PyObject *var_full_results = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_iter_results = NULL;
    PyObject *var_comb_iter = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_curr = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_positions = NULL;
    PyObject *var_remaining = NULL;
    PyObject *var_con = NULL;
    PyObject *var_cont = NULL;
    PyObject *var_new_result = NULL;
    PyObject *var_new_input_sets = NULL;
    PyObject *var_idx_removed = NULL;
    PyObject *var_idx_contract = NULL;
    PyObject *var_new_size = NULL;
    PyObject *var_new_cost = NULL;
    PyObject *var_new_pos = NULL;
    PyObject *var_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    PyObject *tmp_range_arg_3;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b2a4ef5c8018fb97743fa40ec9658c8e = NULL;

    struct Nuitka_FrameObject *frame_b2a4ef5c8018fb97743fa40ec9658c8e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_input_sets;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_1, 0, tmp_list_element_1 );
    assert( var_full_results == NULL );
    var_full_results = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2a4ef5c8018fb97743fa40ec9658c8e, codeobj_b2a4ef5c8018fb97743fa40ec9658c8e, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e = cache_frame_b2a4ef5c8018fb97743fa40ec9658c8e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2a4ef5c8018fb97743fa40ec9658c8e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2a4ef5c8018fb97743fa40ec9658c8e ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_input_sets;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_range_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 137;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_iteration;
        var_iteration = tmp_assign_source_4;
        Py_INCREF( var_iteration );
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = PyList_New( 0 );
    {
        PyObject *old = var_iter_results;
        var_iter_results = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = PyList_New( 0 );
    {
        PyObject *old = var_comb_iter;
        var_comb_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_len_arg_2 = par_input_sets;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_2 = var_iteration;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_range_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_range_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_2 );
    Py_DECREF( tmp_range_arg_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 142;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_9;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_x;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_range2_low_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_range2_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_len_arg_3 = par_input_sets;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_range2_low_1 );

        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_right_name_4 = var_iteration;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_range2_high_1 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_range2_low_1 );

        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_iter_arg_3 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_low_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 143;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_12;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_comb_iter;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_x;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_y;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_2 );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame.f_lineno = 144;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_iter_arg_4 = var_full_results;

    if ( tmp_iter_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "full_results" );
        exception_tb = NULL;

        exception_lineno = 146;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_4__for_iterator;
        tmp_for_loop_4__for_iterator = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_for_loop_4__iter_value;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_curr;
        var_curr = tmp_assign_source_15;
        Py_INCREF( var_curr );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_5 = var_curr;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 147;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_18 == NULL )
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 147;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 147;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 147;
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

        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 147;
        goto try_except_handler_7;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_20 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var_cost;
        var_cost = tmp_assign_source_20;
        Py_INCREF( var_cost );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_positions;
        var_positions = tmp_assign_source_21;
        Py_INCREF( var_positions );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_remaining;
        var_remaining = tmp_assign_source_22;
        Py_INCREF( var_remaining );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_iter_arg_6 = var_comb_iter;

    CHECK_OBJECT( tmp_iter_arg_6 );
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_5__for_iterator;
        tmp_for_loop_5__for_iterator = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_5__for_iterator;

    CHECK_OBJECT( tmp_next_source_5 );
    tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooooo";
            exception_lineno = 148;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_assign_source_25 = tmp_for_loop_5__iter_value;

    CHECK_OBJECT( tmp_assign_source_25 );
    {
        PyObject *old = var_con;
        var_con = tmp_assign_source_25;
        Py_INCREF( var_con );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__find_contraction );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_contraction );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_find_contraction" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_2 = var_con;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_remaining;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_output_set;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame.f_lineno = 151;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_cont;
        var_cont = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_7 = var_cont;

    CHECK_OBJECT( tmp_iter_arg_7 );
    tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_4, 0 );
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 152;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_5, 1 );
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 152;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_6, 2 );
    if ( tmp_assign_source_30 == NULL )
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 152;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_3;
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_7, 3 );
    if ( tmp_assign_source_31 == NULL )
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


        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 152;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_4;
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

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

                type_description_1 = "oooooooooooooooooooooooo";
                exception_lineno = 152;
                goto try_except_handler_10;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooooooooooo";
        exception_lineno = 152;
        goto try_except_handler_10;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_32 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_32 );
    {
        PyObject *old = var_new_result;
        var_new_result = tmp_assign_source_32;
        Py_INCREF( var_new_result );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_33 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_33 );
    {
        PyObject *old = var_new_input_sets;
        var_new_input_sets = tmp_assign_source_33;
        Py_INCREF( var_new_input_sets );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_34 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_34 );
    {
        PyObject *old = var_idx_removed;
        var_idx_removed = tmp_assign_source_34;
        Py_INCREF( var_idx_removed );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_35 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_35 );
    {
        PyObject *old = var_idx_contract;
        var_idx_contract = tmp_assign_source_35;
        Py_INCREF( var_idx_contract );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 155;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_5 = var_new_result;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_idx_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_new_size;
        var_new_size = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_new_size;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = par_memory_limit;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    goto loop_start_5;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 160;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_args_element_name_7 = var_idx_contract;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = par_idx_dict;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame.f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_new_cost;
        var_new_cost = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_idx_removed;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_5 = var_new_cost;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = const_int_pos_2;
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_38 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    var_new_cost = tmp_assign_source_38;

    branch_no_2:;
    tmp_left_name_6 = var_new_cost;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = var_cost;

    CHECK_OBJECT( tmp_right_name_6 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_39 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    var_new_cost = tmp_assign_source_39;

    tmp_left_name_7 = var_positions;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_right_name_7 = PyList_New( 1 );
    tmp_list_element_2 = var_con;

    CHECK_OBJECT( tmp_list_element_2 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_right_name_7, 0, tmp_list_element_2 );
    tmp_assign_source_40 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_new_pos;
        var_new_pos = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_iter_results;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_9 = PyTuple_New( 3 );
    tmp_tuple_element_3 = var_new_cost;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_new_pos;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_new_input_sets;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 2, tmp_tuple_element_3 );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_5;
    loop_end_5:;
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

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_assign_source_41 = var_iter_results;

    CHECK_OBJECT( tmp_assign_source_41 );
    {
        PyObject *old = var_full_results;
        var_full_results = tmp_assign_source_41;
        Py_INCREF( var_full_results );
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_len_arg_4 = var_full_results;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "full_results" );
        exception_tb = NULL;

        exception_lineno = 173;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 173;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = PyList_New( 1 );
    tmp_len_arg_5 = par_input_sets;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_range_arg_3 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_range_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = BUILTIN_RANGE( tmp_range_arg_3 );
    Py_DECREF( tmp_range_arg_3 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_list_element_3 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_3 );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_4 != NULL );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_full_results;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "full_results" );
        exception_tb = NULL;

        exception_lineno = 176;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_4 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda(  );
    tmp_dict_key_1 = const_str_plain_key;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame.f_lineno = 176;
    tmp_subscribed_name_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_assign_source_42 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "oooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path == NULL );
    var_path = tmp_assign_source_42;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2a4ef5c8018fb97743fa40ec9658c8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2a4ef5c8018fb97743fa40ec9658c8e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2a4ef5c8018fb97743fa40ec9658c8e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2a4ef5c8018fb97743fa40ec9658c8e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2a4ef5c8018fb97743fa40ec9658c8e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2a4ef5c8018fb97743fa40ec9658c8e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2a4ef5c8018fb97743fa40ec9658c8e,
        type_description_1,
        par_input_sets,
        par_output_set,
        par_idx_dict,
        par_memory_limit,
        var_full_results,
        var_iteration,
        var_iter_results,
        var_comb_iter,
        var_x,
        var_y,
        var_curr,
        var_cost,
        var_positions,
        var_remaining,
        var_con,
        var_cont,
        var_new_result,
        var_new_input_sets,
        var_idx_removed,
        var_idx_contract,
        var_new_size,
        var_new_cost,
        var_new_pos,
        var_path
    );


    // Release cached frame.
    if ( frame_b2a4ef5c8018fb97743fa40ec9658c8e == cache_frame_b2a4ef5c8018fb97743fa40ec9658c8e )
    {
        Py_DECREF( frame_b2a4ef5c8018fb97743fa40ec9658c8e );
    }
    cache_frame_b2a4ef5c8018fb97743fa40ec9658c8e = NULL;

    assertFrameObject( frame_b2a4ef5c8018fb97743fa40ec9658c8e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_path;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_3__optimal_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_input_sets );
    Py_DECREF( par_input_sets );
    par_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)par_output_set );
    Py_DECREF( par_output_set );
    par_output_set = NULL;

    CHECK_OBJECT( (PyObject *)par_idx_dict );
    Py_DECREF( par_idx_dict );
    par_idx_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_memory_limit );
    Py_DECREF( par_memory_limit );
    par_memory_limit = NULL;

    Py_XDECREF( var_full_results );
    var_full_results = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_iter_results );
    var_iter_results = NULL;

    Py_XDECREF( var_comb_iter );
    var_comb_iter = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_curr );
    var_curr = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_positions );
    var_positions = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var_cont );
    var_cont = NULL;

    Py_XDECREF( var_new_result );
    var_new_result = NULL;

    Py_XDECREF( var_new_input_sets );
    var_new_input_sets = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_new_size );
    var_new_size = NULL;

    Py_XDECREF( var_new_cost );
    var_new_cost = NULL;

    Py_XDECREF( var_new_pos );
    var_new_pos = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_input_sets );
    Py_DECREF( par_input_sets );
    par_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)par_output_set );
    Py_DECREF( par_output_set );
    par_output_set = NULL;

    CHECK_OBJECT( (PyObject *)par_idx_dict );
    Py_DECREF( par_idx_dict );
    par_idx_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_memory_limit );
    Py_DECREF( par_memory_limit );
    par_memory_limit = NULL;

    Py_XDECREF( var_full_results );
    var_full_results = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_iter_results );
    var_iter_results = NULL;

    Py_XDECREF( var_comb_iter );
    var_comb_iter = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_curr );
    var_curr = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_positions );
    var_positions = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_con );
    var_con = NULL;

    Py_XDECREF( var_cont );
    var_cont = NULL;

    Py_XDECREF( var_new_result );
    var_new_result = NULL;

    Py_XDECREF( var_new_input_sets );
    var_new_input_sets = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_new_size );
    var_new_size = NULL;

    Py_XDECREF( var_new_cost );
    var_new_cost = NULL;

    Py_XDECREF( var_new_pos );
    var_new_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_3__optimal_path );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_0fa6256eb8da4f66561b989a3b43503c = NULL;

    struct Nuitka_FrameObject *frame_0fa6256eb8da4f66561b989a3b43503c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0fa6256eb8da4f66561b989a3b43503c, codeobj_0fa6256eb8da4f66561b989a3b43503c, module_numpy$core$einsumfunc, sizeof(void *) );
    frame_0fa6256eb8da4f66561b989a3b43503c = cache_frame_0fa6256eb8da4f66561b989a3b43503c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0fa6256eb8da4f66561b989a3b43503c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0fa6256eb8da4f66561b989a3b43503c ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_x;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fa6256eb8da4f66561b989a3b43503c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fa6256eb8da4f66561b989a3b43503c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fa6256eb8da4f66561b989a3b43503c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0fa6256eb8da4f66561b989a3b43503c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0fa6256eb8da4f66561b989a3b43503c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0fa6256eb8da4f66561b989a3b43503c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0fa6256eb8da4f66561b989a3b43503c,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_0fa6256eb8da4f66561b989a3b43503c == cache_frame_0fa6256eb8da4f66561b989a3b43503c )
    {
        Py_DECREF( frame_0fa6256eb8da4f66561b989a3b43503c );
    }
    cache_frame_0fa6256eb8da4f66561b989a3b43503c = NULL;

    assertFrameObject( frame_0fa6256eb8da4f66561b989a3b43503c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_4__greedy_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_input_sets = python_pars[ 0 ];
    PyObject *par_output_set = python_pars[ 1 ];
    PyObject *par_idx_dict = python_pars[ 2 ];
    PyObject *par_memory_limit = python_pars[ 3 ];
    PyObject *var_path = NULL;
    PyObject *var_iteration = NULL;
    PyObject *var_iteration_results = NULL;
    PyObject *var_comb_iter = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_positions = NULL;
    PyObject *var_contract = NULL;
    PyObject *var_idx_result = NULL;
    PyObject *var_new_input_sets = NULL;
    PyObject *var_idx_removed = NULL;
    PyObject *var_idx_contract = NULL;
    PyObject *var_removed_size = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_sort = NULL;
    PyObject *var_best = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
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
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
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
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    PyObject *tmp_range_arg_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f5302981381c8da6bbb88ded2759efdc = NULL;

    struct Nuitka_FrameObject *frame_f5302981381c8da6bbb88ded2759efdc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f5302981381c8da6bbb88ded2759efdc, codeobj_f5302981381c8da6bbb88ded2759efdc, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f5302981381c8da6bbb88ded2759efdc = cache_frame_f5302981381c8da6bbb88ded2759efdc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f5302981381c8da6bbb88ded2759efdc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f5302981381c8da6bbb88ded2759efdc ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_input_sets;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 215;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = LIST_COPY( const_list_tuple_int_0_tuple_list );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_path == NULL );
    var_path = tmp_assign_source_1;

    tmp_len_arg_2 = par_input_sets;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_range_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 219;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_iteration;
        var_iteration = tmp_assign_source_4;
        Py_INCREF( var_iteration );
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = PyList_New( 0 );
    {
        PyObject *old = var_iteration_results;
        var_iteration_results = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = PyList_New( 0 );
    {
        PyObject *old = var_comb_iter;
        var_comb_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_len_arg_3 = par_input_sets;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "input_sets" );
        exception_tb = NULL;

        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_range_arg_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_range_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_2 );
    Py_DECREF( tmp_range_arg_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 224;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_9;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_x;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_range2_low_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_range2_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_len_arg_4 = par_input_sets;

    if ( tmp_len_arg_4 == NULL )
    {
        Py_DECREF( tmp_range2_low_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "input_sets" );
        exception_tb = NULL;

        exception_lineno = 225;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_range2_high_1 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_range2_low_1 );

        exception_lineno = 225;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_iter_arg_3 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_low_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_3__for_iterator;
        tmp_for_loop_3__for_iterator = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 225;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_12;
        Py_INCREF( var_y );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_comb_iter;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_x;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_y;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_iter_arg_4 = var_comb_iter;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_4__for_iterator;
        tmp_for_loop_4__for_iterator = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_4__for_iterator;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_for_loop_4__iter_value;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_positions;
        var_positions = tmp_assign_source_15;
        Py_INCREF( var_positions );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__find_contraction );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_contraction );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_find_contraction" );
        exception_tb = NULL;

        exception_lineno = 231;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_2 = var_positions;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_input_sets;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "input_sets" );
        exception_tb = NULL;

        exception_lineno = 231;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = par_output_set;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_contract;
        var_contract = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_5 = var_contract;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_18 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 232;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 232;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_20 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 232;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_21 == NULL )
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


        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 232;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_4;
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

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

                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 232;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooooooo";
        exception_lineno = 232;
        goto try_except_handler_7;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_idx_result;
        var_idx_result = tmp_assign_source_22;
        Py_INCREF( var_idx_result );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_23 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_23 );
    {
        PyObject *old = var_new_input_sets;
        var_new_input_sets = tmp_assign_source_23;
        Py_INCREF( var_new_input_sets );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_24 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = var_idx_removed;
        var_idx_removed = tmp_assign_source_24;
        Py_INCREF( var_idx_removed );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_25 = tmp_tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_25 );
    {
        PyObject *old = var_idx_contract;
        var_idx_contract = tmp_assign_source_25;
        Py_INCREF( var_idx_contract );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 235;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_5 = var_idx_result;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_idx_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_compare_left_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_compare_right_2 = par_memory_limit;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 235;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    goto loop_start_4;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 239;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_7 = var_idx_removed;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = par_idx_dict;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_removed_size;
        var_removed_size = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 240;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_9 = var_idx_contract;

    CHECK_OBJECT( tmp_args_element_name_9 );
    tmp_args_element_name_10 = par_idx_dict;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_cost;
        var_cost = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_assign_source_28 = PyTuple_New( 2 );
    tmp_operand_name_1 = var_removed_size;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        exception_lineno = 241;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_cost;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_28, 1, tmp_tuple_element_2 );
    {
        PyObject *old = var_sort;
        var_sort = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_iteration_results;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_11 = PyList_New( 3 );
    tmp_list_element_1 = var_sort;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_11, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_positions;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_11, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_new_input_sets;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_11, 2, tmp_list_element_1 );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_len_arg_5 = var_iteration_results;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_5 );
    assert( tmp_compare_left_3 != NULL );
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 247;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_1 = var_path;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_len_arg_6 = par_input_sets;

    if ( tmp_len_arg_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "input_sets" );
        exception_tb = NULL;

        exception_lineno = 248;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_range_arg_3 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_range_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 248;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_tuple_arg_1 = BUILTIN_RANGE( tmp_range_arg_3 );
    Py_DECREF( tmp_range_arg_3 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 248;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_12 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 248;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_1;
    branch_no_3:;
    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_6 != NULL );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_iteration_results;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda(  );
    tmp_dict_key_1 = const_str_plain_key;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 252;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_best;
        var_best = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_path;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = var_best;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_args_element_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 253;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    frame_f5302981381c8da6bbb88ded2759efdc->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_2 = var_best;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_pos_2;
    tmp_assign_source_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_input_sets;
        par_input_sets = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5302981381c8da6bbb88ded2759efdc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5302981381c8da6bbb88ded2759efdc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f5302981381c8da6bbb88ded2759efdc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f5302981381c8da6bbb88ded2759efdc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f5302981381c8da6bbb88ded2759efdc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f5302981381c8da6bbb88ded2759efdc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5302981381c8da6bbb88ded2759efdc,
        type_description_1,
        par_input_sets,
        par_output_set,
        par_idx_dict,
        par_memory_limit,
        var_path,
        var_iteration,
        var_iteration_results,
        var_comb_iter,
        var_x,
        var_y,
        var_positions,
        var_contract,
        var_idx_result,
        var_new_input_sets,
        var_idx_removed,
        var_idx_contract,
        var_removed_size,
        var_cost,
        var_sort,
        var_best
    );


    // Release cached frame.
    if ( frame_f5302981381c8da6bbb88ded2759efdc == cache_frame_f5302981381c8da6bbb88ded2759efdc )
    {
        Py_DECREF( frame_f5302981381c8da6bbb88ded2759efdc );
    }
    cache_frame_f5302981381c8da6bbb88ded2759efdc = NULL;

    assertFrameObject( frame_f5302981381c8da6bbb88ded2759efdc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_path;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_4__greedy_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_input_sets );
    par_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)par_output_set );
    Py_DECREF( par_output_set );
    par_output_set = NULL;

    CHECK_OBJECT( (PyObject *)par_idx_dict );
    Py_DECREF( par_idx_dict );
    par_idx_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_memory_limit );
    Py_DECREF( par_memory_limit );
    par_memory_limit = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_iteration_results );
    var_iteration_results = NULL;

    Py_XDECREF( var_comb_iter );
    var_comb_iter = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_positions );
    var_positions = NULL;

    Py_XDECREF( var_contract );
    var_contract = NULL;

    Py_XDECREF( var_idx_result );
    var_idx_result = NULL;

    Py_XDECREF( var_new_input_sets );
    var_new_input_sets = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_removed_size );
    var_removed_size = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_sort );
    var_sort = NULL;

    Py_XDECREF( var_best );
    var_best = NULL;

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

    Py_XDECREF( par_input_sets );
    par_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)par_output_set );
    Py_DECREF( par_output_set );
    par_output_set = NULL;

    CHECK_OBJECT( (PyObject *)par_idx_dict );
    Py_DECREF( par_idx_dict );
    par_idx_dict = NULL;

    CHECK_OBJECT( (PyObject *)par_memory_limit );
    Py_DECREF( par_memory_limit );
    par_memory_limit = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_iteration );
    var_iteration = NULL;

    Py_XDECREF( var_iteration_results );
    var_iteration_results = NULL;

    Py_XDECREF( var_comb_iter );
    var_comb_iter = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_positions );
    var_positions = NULL;

    Py_XDECREF( var_contract );
    var_contract = NULL;

    Py_XDECREF( var_idx_result );
    var_idx_result = NULL;

    Py_XDECREF( var_new_input_sets );
    var_new_input_sets = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_removed_size );
    var_removed_size = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_sort );
    var_sort = NULL;

    Py_XDECREF( var_best );
    var_best = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_4__greedy_path );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_62137c43c38d3f87a6bf92845b2e4e1f = NULL;

    struct Nuitka_FrameObject *frame_62137c43c38d3f87a6bf92845b2e4e1f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62137c43c38d3f87a6bf92845b2e4e1f, codeobj_62137c43c38d3f87a6bf92845b2e4e1f, module_numpy$core$einsumfunc, sizeof(void *) );
    frame_62137c43c38d3f87a6bf92845b2e4e1f = cache_frame_62137c43c38d3f87a6bf92845b2e4e1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62137c43c38d3f87a6bf92845b2e4e1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62137c43c38d3f87a6bf92845b2e4e1f ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = par_x;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62137c43c38d3f87a6bf92845b2e4e1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62137c43c38d3f87a6bf92845b2e4e1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62137c43c38d3f87a6bf92845b2e4e1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62137c43c38d3f87a6bf92845b2e4e1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62137c43c38d3f87a6bf92845b2e4e1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62137c43c38d3f87a6bf92845b2e4e1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62137c43c38d3f87a6bf92845b2e4e1f,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_62137c43c38d3f87a6bf92845b2e4e1f == cache_frame_62137c43c38d3f87a6bf92845b2e4e1f )
    {
        Py_DECREF( frame_62137c43c38d3f87a6bf92845b2e4e1f );
    }
    cache_frame_62137c43c38d3f87a6bf92845b2e4e1f = NULL;

    assertFrameObject( frame_62137c43c38d3f87a6bf92845b2e4e1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_5__parse_einsum_input( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_operands = python_pars[ 0 ];
    PyObject *var_subscripts = NULL;
    PyObject *var_v = NULL;
    PyObject *var_s = NULL;
    PyObject *var_tmp_operands = NULL;
    PyObject *var_operand_list = NULL;
    PyObject *var_subscript_list = NULL;
    PyObject *var_p = NULL;
    PyObject *var_output_list = NULL;
    PyObject *var_last = NULL;
    PyObject *var_num = NULL;
    PyObject *var_sub = NULL;
    PyObject *var_invalid = NULL;
    PyObject *var_used = NULL;
    PyObject *var_unused = NULL;
    PyObject *var_ellipse_inds = NULL;
    PyObject *var_longest = NULL;
    PyObject *var_input_tmp = NULL;
    PyObject *var_output_sub = NULL;
    PyObject *var_split_subscripts = NULL;
    PyObject *var_out_sub = NULL;
    PyObject *var_ellipse_count = NULL;
    PyObject *var_rep_inds = NULL;
    PyObject *var_out_ellipse = NULL;
    PyObject *var_output_subscript = NULL;
    PyObject *var_tmp_subscripts = NULL;
    PyObject *var_normal_inds = NULL;
    PyObject *var_input_subscripts = NULL;
    PyObject *var_char = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_for_loop_8__for_iterator = NULL;
    PyObject *tmp_for_loop_8__iter_value = NULL;
    PyObject *tmp_for_loop_9__for_iterator = NULL;
    PyObject *tmp_for_loop_9__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
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
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_instance_14;
    PyObject *tmp_called_instance_15;
    PyObject *tmp_called_instance_16;
    PyObject *tmp_called_instance_17;
    PyObject *tmp_called_instance_18;
    PyObject *tmp_called_instance_19;
    PyObject *tmp_called_instance_20;
    PyObject *tmp_called_instance_21;
    PyObject *tmp_called_instance_22;
    PyObject *tmp_called_instance_23;
    PyObject *tmp_called_instance_24;
    PyObject *tmp_called_instance_25;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotIn_1;
    int tmp_cmp_NotIn_2;
    int tmp_cmp_NotIn_3;
    int tmp_cmp_NotIn_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    bool tmp_isnot_1;
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
    PyObject *tmp_iter_arg_14;
    PyObject *tmp_iter_arg_15;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
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
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_left_name_22;
    PyObject *tmp_left_name_23;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_make_exception_arg_9;
    PyObject *tmp_make_exception_arg_10;
    PyObject *tmp_make_exception_arg_11;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_next_source_8;
    PyObject *tmp_next_source_9;
    PyObject *tmp_next_source_10;
    PyObject *tmp_next_source_11;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    int tmp_or_left_truth_4;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_left_value_4;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_or_right_value_4;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
    PyObject *tmp_raise_type_9;
    PyObject *tmp_raise_type_10;
    PyObject *tmp_raise_type_11;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_right_name_22;
    PyObject *tmp_right_name_23;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_set_arg_2;
    PyObject *tmp_set_arg_3;
    PyObject *tmp_set_arg_4;
    PyObject *tmp_set_arg_5;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9d9b918acf83a8a5031db053489f42c9 = NULL;

    struct Nuitka_FrameObject *frame_9d9b918acf83a8a5031db053489f42c9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9d9b918acf83a8a5031db053489f42c9, codeobj_9d9b918acf83a8a5031db053489f42c9, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9d9b918acf83a8a5031db053489f42c9 = cache_frame_9d9b918acf83a8a5031db053489f42c9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9d9b918acf83a8a5031db053489f42c9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9d9b918acf83a8a5031db053489f42c9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_operands;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 285;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_6742169a47519a553c97fa43f8522482;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 286;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 286;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = par_operands;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooooooooooooooooooo";
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
    tmp_subscribed_name_2 = par_operands;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 289;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_space_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_subscripts == NULL );
    var_subscripts = tmp_assign_source_1;

    // Tried code:
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_operands;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_iter_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 290;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_6;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 290;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_v;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 290;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_5__parse_einsum_input );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_5__parse_einsum_input );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    {
        PyObject *old = par_operands;
        assert( old != NULL );
        par_operands = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_iter_arg_2 = var_subscripts;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_9;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_s;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_str_digest_6d9adbd3d3d66915dcc3d296f1e8605f;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_start_2;
    branch_no_3:;
    tmp_compare_left_3 = var_s;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols );
    }

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_symbols" );
        exception_tb = NULL;

        exception_lineno = 296;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_1 = const_str_digest_a8e467978be330e87b7a63cc9a84303b;
    tmp_right_name_1 = var_s;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 297;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 297;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_list_arg_1 = par_operands;

    CHECK_OBJECT( tmp_list_arg_1 );
    tmp_assign_source_10 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tmp_operands == NULL );
    var_tmp_operands = tmp_assign_source_10;

    tmp_assign_source_11 = PyList_New( 0 );
    assert( var_operand_list == NULL );
    var_operand_list = tmp_assign_source_11;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( var_subscript_list == NULL );
    var_subscript_list = tmp_assign_source_12;

    tmp_len_arg_2 = par_operands;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_range_arg_1 = BINARY_OPERATION_FLOORDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_3 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_13;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 303;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_15;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_operand_list;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_called_instance_2 = var_tmp_operands;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 304;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 304;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = var_subscript_list;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_called_instance_3 = var_tmp_operands;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 305;
    tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 305;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 305;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_len_arg_3 = var_tmp_operands;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_cond_value_1 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 307;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_subscribed_name_3 = var_tmp_operands;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_neg_1;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_16 = Py_None;
    Py_INCREF( tmp_assign_source_16 );
    condexpr_end_1:;
    assert( var_output_list == NULL );
    var_output_list = tmp_assign_source_16;

    // Tried code:
    tmp_iter_arg_4 = var_operand_list;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_18;

    tmp_assign_source_19 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_19;

    loop_start_4:;
    tmp_next_source_4 = tmp_list_contraction_2__$0;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 308;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_list_contraction_2__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_21;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 308;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_4 = var_v;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_4;
    loop_end_4:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_5__parse_einsum_input );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
    Py_DECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
    Py_DECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

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

    Py_XDECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_5__parse_einsum_input );
    return NULL;
    outline_result_2:;
    tmp_assign_source_17 = tmp_outline_return_value_2;
    {
        PyObject *old = par_operands;
        assert( old != NULL );
        par_operands = tmp_assign_source_17;
        Py_DECREF( old );
    }

    tmp_assign_source_22 = const_str_empty;
    assert( var_subscripts == NULL );
    Py_INCREF( tmp_assign_source_22 );
    var_subscripts = tmp_assign_source_22;

    tmp_len_arg_4 = var_subscript_list;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_4 );
    assert( tmp_left_name_3 != NULL );
    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_23 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_last == NULL );
    var_last = tmp_assign_source_23;

    tmp_called_name_5 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_5 = var_subscript_list;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_24;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_5 );
    tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 311;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_6 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_iter_arg_6 );
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 311;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 311;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_28;
        Py_XDECREF( old );
    }

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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 311;
                goto try_except_handler_8;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 311;
        goto try_except_handler_8;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_29 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_29 );
    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_29;
        Py_INCREF( var_num );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_30 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_30 );
    {
        PyObject *old = var_sub;
        var_sub = tmp_assign_source_30;
        Py_INCREF( var_sub );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_7 = var_sub;

    CHECK_OBJECT( tmp_iter_arg_7 );
    tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_4__for_iterator;
        tmp_for_loop_4__for_iterator = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_4__for_iterator;

    CHECK_OBJECT( tmp_next_source_6 );
    tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_32 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 312;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    tmp_assign_source_33 = tmp_for_loop_4__iter_value;

    CHECK_OBJECT( tmp_assign_source_33 );
    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_33;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_compare_left_4 = var_s;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_Ellipsis;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_4 = var_subscripts;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 314;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_right_name_4 = const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_34 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    var_subscripts = tmp_assign_source_34;

    goto branch_end_5;
    branch_no_5:;
    tmp_isinstance_inst_2 = var_s;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyInt_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_left_name_5 = var_subscripts;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols );

    if (unlikely( tmp_subscribed_name_4 == NULL ))
    {
        tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols );
    }

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_symbols" );
        exception_tb = NULL;

        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_subscript_name_4 = var_s;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_35 = tmp_left_name_5;
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    var_subscripts = tmp_assign_source_35;

    goto branch_end_6;
    branch_no_6:;
    tmp_make_exception_arg_3 = const_str_digest_f48b9a76c3de3c11384b7558ece67019;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 318;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 318;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_6:;
    branch_end_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_compare_left_5 = var_num;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = var_last;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_6 = var_subscripts;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 321;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_right_name_6 = const_str_chr_44;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_36 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    var_subscripts = tmp_assign_source_36;

    branch_no_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_compare_left_6 = var_output_list;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_left_name_7 = var_subscripts;

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 324;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_37 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_subscripts = tmp_assign_source_37;

    tmp_iter_arg_8 = var_output_list;

    CHECK_OBJECT( tmp_iter_arg_8 );
    tmp_assign_source_38 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_5__for_iterator == NULL );
    tmp_for_loop_5__for_iterator = tmp_assign_source_38;

    // Tried code:
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_5__for_iterator;

    CHECK_OBJECT( tmp_next_source_7 );
    tmp_assign_source_39 = ITERATOR_NEXT( tmp_next_source_7 );
    if ( tmp_assign_source_39 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_7;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 325;
            goto try_except_handler_10;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_39;
        Py_XDECREF( old );
    }

    tmp_assign_source_40 = tmp_for_loop_5__iter_value;

    CHECK_OBJECT( tmp_assign_source_40 );
    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_40;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_compare_left_7 = var_s;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = Py_Ellipsis;
    tmp_is_2 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_2 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_left_name_8 = var_subscripts;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 327;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }

    tmp_right_name_8 = const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_41 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    var_subscripts = tmp_assign_source_41;

    goto branch_end_9;
    branch_no_9:;
    tmp_isinstance_inst_3 = var_s;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = (PyObject *)&PyInt_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_9 = var_subscripts;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 329;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }

    tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols );

    if (unlikely( tmp_subscribed_name_5 == NULL ))
    {
        tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols );
    }

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_symbols" );
        exception_tb = NULL;

        exception_lineno = 329;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }

    tmp_subscript_name_5 = var_s;

    CHECK_OBJECT( tmp_subscript_name_5 );
    tmp_right_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_42 = tmp_left_name_9;
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    var_subscripts = tmp_assign_source_42;

    goto branch_end_10;
    branch_no_10:;
    tmp_make_exception_arg_4 = const_str_digest_f48b9a76c3de3c11384b7558ece67019;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 331;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_10:;
    branch_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_7;
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

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    branch_no_8:;
    branch_end_2:;
    tmp_compexpr_left_1 = const_str_chr_45;
    tmp_compexpr_right_1 = var_subscripts;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 334;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
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
    tmp_compexpr_left_2 = const_str_chr_62;
    tmp_compexpr_right_2 = var_subscripts;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 334;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    assert( !(tmp_cond_truth_2 == -1) );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_called_instance_4 = var_subscripts;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 335;
    tmp_compexpr_left_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_or_left_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
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
    tmp_called_instance_5 = var_subscripts;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 335;
    tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_chr_62_tuple, 0 ) );

    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_pos_1;
    tmp_or_right_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_43 = tmp_or_left_value_2;
    or_end_2:;
    assert( var_invalid == NULL );
    var_invalid = tmp_assign_source_43;

    tmp_or_left_value_3 = var_invalid;

    CHECK_OBJECT( tmp_or_left_value_3 );
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooooooooooooooooooooooooo";
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
    tmp_called_instance_6 = var_subscripts;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 336;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 336;
    tmp_compexpr_left_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_tuple, 0 ) );

    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_pos_1;
    tmp_or_right_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    Py_INCREF( tmp_or_left_value_3 );
    tmp_cond_value_3 = tmp_or_left_value_3;
    or_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 336;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_make_exception_arg_5 = const_str_digest_9c56b0e82e91dd6bdb91723b1b3e5c55;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 337;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_12:;
    branch_no_11:;
    tmp_compare_left_8 = const_str_dot;
    tmp_compare_right_8 = var_subscripts;

    if ( tmp_compare_right_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_instance_9 = var_subscripts;

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 341;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 341;
    tmp_called_instance_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_dot_str_empty_tuple, 0 ) );

    if ( tmp_called_instance_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 341;
    tmp_called_instance_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_8 );
    if ( tmp_called_instance_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 341;
    tmp_assign_source_44 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_str_empty_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_7 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_used == NULL );
    var_used = tmp_assign_source_44;

    tmp_left_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols_set );

    if (unlikely( tmp_left_name_10 == NULL ))
    {
        tmp_left_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols_set );
    }

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_symbols_set" );
        exception_tb = NULL;

        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_set_arg_1 = var_used;

    CHECK_OBJECT( tmp_set_arg_1 );
    tmp_right_name_10 = PySet_New( tmp_set_arg_1 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_list_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_list_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = PySequence_List( tmp_list_arg_2 );
    Py_DECREF( tmp_list_arg_2 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_unused == NULL );
    var_unused = tmp_assign_source_45;

    tmp_called_instance_10 = const_str_empty;
    tmp_args_element_name_6 = var_unused;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_46 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_join, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ellipse_inds == NULL );
    var_ellipse_inds = tmp_assign_source_46;

    tmp_assign_source_47 = const_int_0;
    assert( var_longest == NULL );
    Py_INCREF( tmp_assign_source_47 );
    var_longest = tmp_assign_source_47;

    tmp_compare_left_9 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_compare_right_9 = var_subscripts;

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 346;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    // Tried code:
    tmp_called_instance_11 = var_subscripts;

    if ( tmp_called_instance_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 347;
    tmp_iter_arg_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_tuple, 0 ) );

    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_48;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 347;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_49;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_4, 1 );
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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 347;
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_50;

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 347;
                goto try_except_handler_12;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 347;
        goto try_except_handler_12;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_51 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_51 );
    assert( var_input_tmp == NULL );
    Py_INCREF( tmp_assign_source_51 );
    var_input_tmp = tmp_assign_source_51;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_52 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_52 );
    assert( var_output_sub == NULL );
    Py_INCREF( tmp_assign_source_52 );
    var_output_sub = tmp_assign_source_52;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_called_instance_12 = var_input_tmp;

    CHECK_OBJECT( tmp_called_instance_12 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 348;
    tmp_assign_source_53 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_split_subscripts == NULL );
    var_split_subscripts = tmp_assign_source_53;

    tmp_assign_source_54 = Py_True;
    assert( var_out_sub == NULL );
    Py_INCREF( tmp_assign_source_54 );
    var_out_sub = tmp_assign_source_54;

    goto branch_end_14;
    branch_no_14:;
    tmp_called_instance_13 = var_subscripts;

    if ( tmp_called_instance_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 351;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 351;
    tmp_assign_source_55 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_split_subscripts == NULL );
    var_split_subscripts = tmp_assign_source_55;

    tmp_assign_source_56 = Py_False;
    assert( var_out_sub == NULL );
    Py_INCREF( tmp_assign_source_56 );
    var_out_sub = tmp_assign_source_56;

    branch_end_14:;
    tmp_called_name_6 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_7 = var_split_subscripts;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 354;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_iter_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_57 = MAKE_ITERATOR( tmp_iter_arg_10 );
    Py_DECREF( tmp_iter_arg_10 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_57;

    // Tried code:
    loop_start_8:;
    tmp_next_source_8 = tmp_for_loop_6__for_iterator;

    CHECK_OBJECT( tmp_next_source_8 );
    tmp_assign_source_58 = ITERATOR_NEXT( tmp_next_source_8 );
    if ( tmp_assign_source_58 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_8;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 354;
            goto try_except_handler_13;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_58;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_11 = tmp_for_loop_6__iter_value;

    CHECK_OBJECT( tmp_iter_arg_11 );
    tmp_assign_source_59 = MAKE_ITERATOR( tmp_iter_arg_11 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter;
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_59;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_5, 0 );
    if ( tmp_assign_source_60 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 354;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_1;
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_60;
        Py_XDECREF( old );
    }

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_6, 1 );
    if ( tmp_assign_source_61 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 354;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_2;
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_61;
        Py_XDECREF( old );
    }

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 354;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 354;
        goto try_except_handler_15;
    }
    goto try_end_10;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_10:;
    goto try_end_11;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_62 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_62 );
    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_62;
        Py_INCREF( var_num );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_63 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_63 );
    {
        PyObject *old = var_sub;
        var_sub = tmp_assign_source_63;
        Py_INCREF( var_sub );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_compare_left_10 = const_str_dot;
    tmp_compare_right_10 = var_sub;

    CHECK_OBJECT( tmp_compare_right_10 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_instance_14 = var_sub;

    CHECK_OBJECT( tmp_called_instance_14 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 356;
    tmp_compexpr_left_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_compexpr_right_6 = const_int_pos_3;
    tmp_or_left_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    if ( tmp_or_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_or_left_truth_4 = CHECK_IF_TRUE( tmp_or_left_value_4 );
    if ( tmp_or_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_4 );

        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_or_left_truth_4 == 1 )
    {
        goto or_left_4;
    }
    else
    {
        goto or_right_4;
    }
    or_right_4:;
    Py_DECREF( tmp_or_left_value_4 );
    tmp_called_instance_15 = var_sub;

    CHECK_OBJECT( tmp_called_instance_15 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 356;
    tmp_compexpr_left_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_count, &PyTuple_GET_ITEM( const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_tuple, 0 ) );

    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_compexpr_right_7 = const_int_pos_1;
    tmp_or_right_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    if ( tmp_or_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_cond_value_4 = tmp_or_right_value_4;
    goto or_end_4;
    or_left_4:;
    tmp_cond_value_4 = tmp_or_left_value_4;
    or_end_4:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 356;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_make_exception_arg_6 = const_str_digest_b7e90a1a12f5d45ca041d4a5fa75a37b;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_6 != NULL );
    exception_type = tmp_raise_type_6;
    exception_lineno = 357;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
    branch_no_16:;
    tmp_subscribed_name_6 = par_operands;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = var_num;

    CHECK_OBJECT( tmp_subscript_name_6 );
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_compare_right_11 = const_tuple_empty;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 360;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_64 = const_int_0;
    {
        PyObject *old = var_ellipse_count;
        var_ellipse_count = tmp_assign_source_64;
        Py_INCREF( var_ellipse_count );
        Py_XDECREF( old );
    }

    goto branch_end_17;
    branch_no_17:;
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_7 != NULL );
    tmp_subscribed_name_7 = par_operands;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = var_num;

    CHECK_OBJECT( tmp_subscript_name_7 );
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_args_element_name_9 = const_int_pos_1;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 363;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    {
        PyObject *old = var_ellipse_count;
        var_ellipse_count = tmp_assign_source_65;
        Py_XDECREF( old );
    }

    tmp_left_name_11 = var_ellipse_count;

    CHECK_OBJECT( tmp_left_name_11 );
    tmp_len_arg_5 = var_sub;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_left_name_12 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_right_name_12 = const_int_pos_3;
    tmp_right_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_11, tmp_right_name_11 );
    tmp_assign_source_66 = tmp_left_name_11;
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    var_ellipse_count = tmp_assign_source_66;

    branch_end_17:;
    tmp_compare_left_12 = var_ellipse_count;

    CHECK_OBJECT( tmp_compare_left_12 );
    tmp_compare_right_12 = var_longest;

    if ( tmp_compare_right_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "longest" );
        exception_tb = NULL;

        exception_lineno = 366;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_67 = var_ellipse_count;

    CHECK_OBJECT( tmp_assign_source_67 );
    {
        PyObject *old = var_longest;
        var_longest = tmp_assign_source_67;
        Py_INCREF( var_longest );
        Py_XDECREF( old );
    }

    branch_no_18:;
    tmp_compare_left_13 = var_ellipse_count;

    CHECK_OBJECT( tmp_compare_left_13 );
    tmp_compare_right_13 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_make_exception_arg_7 = const_str_digest_7e6341c69fdb4622f22193bbd5d00143;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 370;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_7 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 370;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
    goto branch_end_19;
    branch_no_19:;
    tmp_compare_left_14 = var_ellipse_count;

    CHECK_OBJECT( tmp_compare_left_14 );
    tmp_compare_right_14 = const_int_0;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_called_instance_16 = var_sub;

    CHECK_OBJECT( tmp_called_instance_16 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 372;
    tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_16, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_digest_3501979af1b70861f5e9d6a0f04129bf_str_empty_tuple, 0 ) );

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_ass_subscribed_1 = var_split_subscripts;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = var_num;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto branch_end_20;
    branch_no_20:;
    tmp_slice_source_2 = var_ellipse_inds;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_operand_name_1 = var_ellipse_count;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_slice_lower_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_assign_source_68 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_1, Py_None );
    Py_DECREF( tmp_slice_lower_1 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    {
        PyObject *old = var_rep_inds;
        var_rep_inds = tmp_assign_source_68;
        Py_XDECREF( old );
    }

    tmp_called_instance_17 = var_sub;

    CHECK_OBJECT( tmp_called_instance_17 );
    tmp_args_element_name_10 = const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
    tmp_args_element_name_11 = var_rep_inds;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 375;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_ass_subvalue_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_17, const_str_plain_replace, call_args );
    }

    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    tmp_ass_subscribed_2 = var_split_subscripts;

    CHECK_OBJECT( tmp_ass_subscribed_2 );
    tmp_ass_subscript_2 = var_num;

    CHECK_OBJECT( tmp_ass_subscript_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    branch_end_20:;
    branch_end_19:;
    branch_no_15:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    tmp_called_instance_18 = const_str_chr_44;
    tmp_args_element_name_12 = var_split_subscripts;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 377;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_69 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_join, call_args );
    }

    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_subscripts;
        var_subscripts = tmp_assign_source_69;
        Py_XDECREF( old );
    }

    tmp_compare_left_15 = var_longest;

    if ( tmp_compare_left_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "longest" );
        exception_tb = NULL;

        exception_lineno = 378;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_15 = const_int_0;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_assign_source_70 = const_str_empty;
    assert( var_out_ellipse == NULL );
    Py_INCREF( tmp_assign_source_70 );
    var_out_ellipse = tmp_assign_source_70;

    goto branch_end_21;
    branch_no_21:;
    tmp_slice_source_3 = var_ellipse_inds;

    CHECK_OBJECT( tmp_slice_source_3 );
    tmp_operand_name_2 = var_longest;

    if ( tmp_operand_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "longest" );
        exception_tb = NULL;

        exception_lineno = 381;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_slice_lower_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_71 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_out_ellipse == NULL );
    var_out_ellipse = tmp_assign_source_71;

    branch_end_21:;
    tmp_cond_value_5 = var_out_sub;

    CHECK_OBJECT( tmp_cond_value_5 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_left_name_13 = var_subscripts;

    CHECK_OBJECT( tmp_left_name_13 );
    tmp_left_name_14 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_called_instance_19 = var_output_sub;

    if ( tmp_called_instance_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output_sub" );
        exception_tb = NULL;

        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
    tmp_args_element_name_14 = var_out_ellipse;

    CHECK_OBJECT( tmp_args_element_name_14 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 384;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_right_name_14 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_19, const_str_plain_replace, call_args );
    }

    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
    tmp_assign_source_72 = tmp_left_name_13;
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_subscripts = tmp_assign_source_72;

    goto branch_end_22;
    branch_no_22:;
    tmp_assign_source_73 = const_str_empty;
    assert( var_output_subscript == NULL );
    Py_INCREF( tmp_assign_source_73 );
    var_output_subscript = tmp_assign_source_73;

    tmp_called_instance_20 = var_subscripts;

    CHECK_OBJECT( tmp_called_instance_20 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 388;
    tmp_assign_source_74 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_20, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 0 ) );

    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tmp_subscripts == NULL );
    var_tmp_subscripts = tmp_assign_source_74;

    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_8 != NULL );
    tmp_set_arg_2 = var_tmp_subscripts;

    CHECK_OBJECT( tmp_set_arg_2 );
    tmp_args_element_name_15 = PySet_New( tmp_set_arg_2 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_iter_arg_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_iter_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_75 = MAKE_ITERATOR( tmp_iter_arg_12 );
    Py_DECREF( tmp_iter_arg_12 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_7__for_iterator == NULL );
    tmp_for_loop_7__for_iterator = tmp_assign_source_75;

    // Tried code:
    loop_start_9:;
    tmp_next_source_9 = tmp_for_loop_7__for_iterator;

    CHECK_OBJECT( tmp_next_source_9 );
    tmp_assign_source_76 = ITERATOR_NEXT( tmp_next_source_9 );
    if ( tmp_assign_source_76 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_9;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 389;
            goto try_except_handler_16;
        }
    }

    {
        PyObject *old = tmp_for_loop_7__iter_value;
        tmp_for_loop_7__iter_value = tmp_assign_source_76;
        Py_XDECREF( old );
    }

    tmp_assign_source_77 = tmp_for_loop_7__iter_value;

    CHECK_OBJECT( tmp_assign_source_77 );
    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_77;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_compare_left_16 = var_s;

    CHECK_OBJECT( tmp_compare_left_16 );
    tmp_compare_right_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols );

    if (unlikely( tmp_compare_right_16 == NULL ))
    {
        tmp_compare_right_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols );
    }

    if ( tmp_compare_right_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_symbols" );
        exception_tb = NULL;

        exception_lineno = 390;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_cmp_NotIn_2 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_NotIn_2 == -1) );
    if ( tmp_cmp_NotIn_2 == 0 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_left_name_15 = const_str_digest_a8e467978be330e87b7a63cc9a84303b;
    tmp_right_name_15 = var_s;

    CHECK_OBJECT( tmp_right_name_15 );
    tmp_make_exception_arg_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_make_exception_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_8 };
        tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_8 );
    assert( tmp_raise_type_8 != NULL );
    exception_type = tmp_raise_type_8;
    exception_lineno = 391;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
    branch_no_23:;
    tmp_called_instance_21 = var_tmp_subscripts;

    CHECK_OBJECT( tmp_called_instance_21 );
    tmp_args_element_name_16 = var_s;

    CHECK_OBJECT( tmp_args_element_name_16 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 392;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_compare_left_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_count, call_args );
    }

    if ( tmp_compare_left_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    tmp_compare_right_17 = const_int_pos_1;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_17 );

        exception_lineno = 392;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_compare_left_17 );
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    tmp_left_name_16 = var_output_subscript;

    if ( tmp_left_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output_subscript" );
        exception_tb = NULL;

        exception_lineno = 393;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_right_name_16 = var_s;

    CHECK_OBJECT( tmp_right_name_16 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
    tmp_assign_source_78 = tmp_left_name_16;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    var_output_subscript = tmp_assign_source_78;

    branch_no_24:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_13;
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

    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    Py_XDECREF( tmp_for_loop_7__iter_value );
    tmp_for_loop_7__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_7__for_iterator );
    Py_DECREF( tmp_for_loop_7__for_iterator );
    tmp_for_loop_7__for_iterator = NULL;

    tmp_source_name_5 = const_str_empty;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_9 != NULL );
    tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_10 != NULL );
    tmp_set_arg_3 = var_output_subscript;

    if ( tmp_set_arg_3 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output_subscript" );
        exception_tb = NULL;

        exception_lineno = 394;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_17 = PySet_New( tmp_set_arg_3 );
    if ( tmp_left_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 394;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_set_arg_4 = var_out_ellipse;

    CHECK_OBJECT( tmp_set_arg_4 );
    tmp_right_name_17 = PySet_New( tmp_set_arg_4 );
    if ( tmp_right_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );
        Py_DECREF( tmp_left_name_17 );

        exception_lineno = 395;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = BINARY_OPERATION_SUB( tmp_left_name_17, tmp_right_name_17 );
    Py_DECREF( tmp_left_name_17 );
    Py_DECREF( tmp_right_name_17 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 394;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 394;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_normal_inds == NULL );
    var_normal_inds = tmp_assign_source_79;

    tmp_left_name_18 = var_subscripts;

    CHECK_OBJECT( tmp_left_name_18 );
    tmp_left_name_20 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_right_name_19 = var_out_ellipse;

    CHECK_OBJECT( tmp_right_name_19 );
    tmp_left_name_19 = BINARY_OPERATION_ADD( tmp_left_name_20, tmp_right_name_19 );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_20 = var_normal_inds;

    CHECK_OBJECT( tmp_right_name_20 );
    tmp_right_name_18 = BINARY_OPERATION_ADD( tmp_left_name_19, tmp_right_name_20 );
    Py_DECREF( tmp_left_name_19 );
    if ( tmp_right_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
    tmp_assign_source_80 = tmp_left_name_18;
    Py_DECREF( tmp_right_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    var_subscripts = tmp_assign_source_80;

    branch_end_22:;
    branch_no_13:;
    tmp_compare_left_18 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_compare_right_18 = var_subscripts;

    if ( tmp_compare_right_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 400;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    // Tried code:
    tmp_called_instance_22 = var_subscripts;

    if ( tmp_called_instance_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 401;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 401;
    tmp_iter_arg_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_digest_8c60b5f1530b27d30f3986bb8e33e14a_tuple, 0 ) );

    if ( tmp_iter_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }
    tmp_assign_source_81 = MAKE_ITERATOR( tmp_iter_arg_13 );
    Py_DECREF( tmp_iter_arg_13 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_4__source_iter == NULL );
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_81;

    // Tried code:
    tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_82 = UNPACK_NEXT( tmp_unpack_7, 0 );
    if ( tmp_assign_source_82 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 401;
        goto try_except_handler_18;
    }
    assert( tmp_tuple_unpack_4__element_1 == NULL );
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_82;

    tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_83 = UNPACK_NEXT( tmp_unpack_8, 1 );
    if ( tmp_assign_source_83 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 401;
        goto try_except_handler_18;
    }
    assert( tmp_tuple_unpack_4__element_2 == NULL );
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_83;

    tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooo";
                exception_lineno = 401;
                goto try_except_handler_18;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooo";
        exception_lineno = 401;
        goto try_except_handler_18;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_84 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_84 );
    assert( var_input_subscripts == NULL );
    Py_INCREF( tmp_assign_source_84 );
    var_input_subscripts = tmp_assign_source_84;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_85 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_85 );
    {
        PyObject *old = var_output_subscript;
        var_output_subscript = tmp_assign_source_85;
        Py_INCREF( var_output_subscript );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    goto branch_end_25;
    branch_no_25:;
    tmp_assign_source_86 = var_subscripts;

    if ( tmp_assign_source_86 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 403;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_input_subscripts == NULL );
    Py_INCREF( tmp_assign_source_86 );
    var_input_subscripts = tmp_assign_source_86;

    tmp_called_instance_23 = var_subscripts;

    if ( tmp_called_instance_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "subscripts" );
        exception_tb = NULL;

        exception_lineno = 405;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 405;
    tmp_assign_source_87 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_23, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 0 ) );

    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_tmp_subscripts;
        var_tmp_subscripts = tmp_assign_source_87;
        Py_XDECREF( old );
    }

    tmp_assign_source_88 = const_str_empty;
    {
        PyObject *old = var_output_subscript;
        var_output_subscript = tmp_assign_source_88;
        Py_INCREF( var_output_subscript );
        Py_XDECREF( old );
    }

    tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_11 != NULL );
    tmp_set_arg_5 = var_tmp_subscripts;

    CHECK_OBJECT( tmp_set_arg_5 );
    tmp_args_element_name_19 = PySet_New( tmp_set_arg_5 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 407;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_iter_arg_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_iter_arg_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_89 = MAKE_ITERATOR( tmp_iter_arg_14 );
    Py_DECREF( tmp_iter_arg_14 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_8__for_iterator == NULL );
    tmp_for_loop_8__for_iterator = tmp_assign_source_89;

    // Tried code:
    loop_start_10:;
    tmp_next_source_10 = tmp_for_loop_8__for_iterator;

    CHECK_OBJECT( tmp_next_source_10 );
    tmp_assign_source_90 = ITERATOR_NEXT( tmp_next_source_10 );
    if ( tmp_assign_source_90 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_10;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 407;
            goto try_except_handler_19;
        }
    }

    {
        PyObject *old = tmp_for_loop_8__iter_value;
        tmp_for_loop_8__iter_value = tmp_assign_source_90;
        Py_XDECREF( old );
    }

    tmp_assign_source_91 = tmp_for_loop_8__iter_value;

    CHECK_OBJECT( tmp_assign_source_91 );
    {
        PyObject *old = var_s;
        var_s = tmp_assign_source_91;
        Py_INCREF( var_s );
        Py_XDECREF( old );
    }

    tmp_compare_left_19 = var_s;

    CHECK_OBJECT( tmp_compare_left_19 );
    tmp_compare_right_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols );

    if (unlikely( tmp_compare_right_19 == NULL ))
    {
        tmp_compare_right_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols );
    }

    if ( tmp_compare_right_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_symbols" );
        exception_tb = NULL;

        exception_lineno = 408;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }

    tmp_cmp_NotIn_3 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    assert( !(tmp_cmp_NotIn_3 == -1) );
    if ( tmp_cmp_NotIn_3 == 0 )
    {
        goto branch_yes_26;
    }
    else
    {
        goto branch_no_26;
    }
    branch_yes_26:;
    tmp_left_name_21 = const_str_digest_a8e467978be330e87b7a63cc9a84303b;
    tmp_right_name_21 = var_s;

    CHECK_OBJECT( tmp_right_name_21 );
    tmp_make_exception_arg_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_21, tmp_right_name_21 );
    if ( tmp_make_exception_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 409;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_9 };
        tmp_raise_type_9 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_9 );
    assert( tmp_raise_type_9 != NULL );
    exception_type = tmp_raise_type_9;
    exception_lineno = 409;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
    branch_no_26:;
    tmp_called_instance_24 = var_tmp_subscripts;

    CHECK_OBJECT( tmp_called_instance_24 );
    tmp_args_element_name_20 = var_s;

    CHECK_OBJECT( tmp_args_element_name_20 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 410;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_compare_left_20 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_count, call_args );
    }

    if ( tmp_compare_left_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    tmp_compare_right_20 = const_int_pos_1;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_20 );

        exception_lineno = 410;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    Py_DECREF( tmp_compare_left_20 );
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_left_name_22 = var_output_subscript;

    if ( tmp_left_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output_subscript" );
        exception_tb = NULL;

        exception_lineno = 411;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }

    tmp_right_name_22 = var_s;

    CHECK_OBJECT( tmp_right_name_22 );
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_22, tmp_right_name_22 );
    tmp_assign_source_92 = tmp_left_name_22;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    var_output_subscript = tmp_assign_source_92;

    branch_no_27:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_8__iter_value );
    tmp_for_loop_8__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
    Py_DECREF( tmp_for_loop_8__for_iterator );
    tmp_for_loop_8__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_for_loop_8__iter_value );
    tmp_for_loop_8__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_8__for_iterator );
    Py_DECREF( tmp_for_loop_8__for_iterator );
    tmp_for_loop_8__for_iterator = NULL;

    branch_end_25:;
    tmp_iter_arg_15 = var_output_subscript;

    if ( tmp_iter_arg_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output_subscript" );
        exception_tb = NULL;

        exception_lineno = 414;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_93 = MAKE_ITERATOR( tmp_iter_arg_15 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_9__for_iterator == NULL );
    tmp_for_loop_9__for_iterator = tmp_assign_source_93;

    // Tried code:
    loop_start_11:;
    tmp_next_source_11 = tmp_for_loop_9__for_iterator;

    CHECK_OBJECT( tmp_next_source_11 );
    tmp_assign_source_94 = ITERATOR_NEXT( tmp_next_source_11 );
    if ( tmp_assign_source_94 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_11;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooo";
            exception_lineno = 414;
            goto try_except_handler_20;
        }
    }

    {
        PyObject *old = tmp_for_loop_9__iter_value;
        tmp_for_loop_9__iter_value = tmp_assign_source_94;
        Py_XDECREF( old );
    }

    tmp_assign_source_95 = tmp_for_loop_9__iter_value;

    CHECK_OBJECT( tmp_assign_source_95 );
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_95;
        Py_INCREF( var_char );
        Py_XDECREF( old );
    }

    tmp_compare_left_21 = var_char;

    CHECK_OBJECT( tmp_compare_left_21 );
    tmp_compare_right_21 = var_input_subscripts;

    CHECK_OBJECT( tmp_compare_right_21 );
    tmp_cmp_NotIn_4 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    assert( !(tmp_cmp_NotIn_4 == -1) );
    if ( tmp_cmp_NotIn_4 == 0 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    tmp_left_name_23 = const_str_digest_f53b1132302d684159f8217c0b69f9b9;
    tmp_right_name_23 = var_char;

    CHECK_OBJECT( tmp_right_name_23 );
    tmp_make_exception_arg_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_23, tmp_right_name_23 );
    if ( tmp_make_exception_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 416;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_10 };
        tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_10 );
    assert( tmp_raise_type_10 != NULL );
    exception_type = tmp_raise_type_10;
    exception_lineno = 416;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto try_except_handler_20;
    branch_no_28:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_17;
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

    Py_XDECREF( tmp_for_loop_9__iter_value );
    tmp_for_loop_9__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
    Py_DECREF( tmp_for_loop_9__for_iterator );
    tmp_for_loop_9__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF( tmp_for_loop_9__iter_value );
    tmp_for_loop_9__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_9__for_iterator );
    Py_DECREF( tmp_for_loop_9__for_iterator );
    tmp_for_loop_9__for_iterator = NULL;

    tmp_called_instance_25 = var_input_subscripts;

    CHECK_OBJECT( tmp_called_instance_25 );
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 420;
    tmp_len_arg_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_25, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_len_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_22 = BUILTIN_LEN( tmp_len_arg_6 );
    Py_DECREF( tmp_len_arg_6 );
    if ( tmp_compare_left_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_7 = par_operands;

    CHECK_OBJECT( tmp_len_arg_7 );
    tmp_compare_right_22 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_compare_right_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_22 );

        exception_lineno = 420;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_22, tmp_compare_right_22 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_22 );
        Py_DECREF( tmp_compare_right_22 );

        exception_lineno = 420;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_22 );
    Py_DECREF( tmp_compare_right_22 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_make_exception_arg_11 = const_str_digest_dffd8e08e490fb0e512072a5709acb38;
    frame_9d9b918acf83a8a5031db053489f42c9->m_frame.f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_11 };
        tmp_raise_type_11 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_11 != NULL );
    exception_type = tmp_raise_type_11;
    exception_lineno = 421;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_29:;
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_input_subscripts;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_output_subscript;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output_subscript" );
        exception_tb = NULL;

        exception_lineno = 424;
        type_description_1 = "ooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_operands;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d9b918acf83a8a5031db053489f42c9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d9b918acf83a8a5031db053489f42c9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d9b918acf83a8a5031db053489f42c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d9b918acf83a8a5031db053489f42c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d9b918acf83a8a5031db053489f42c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d9b918acf83a8a5031db053489f42c9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9d9b918acf83a8a5031db053489f42c9,
        type_description_1,
        par_operands,
        var_subscripts,
        var_v,
        var_s,
        var_tmp_operands,
        var_operand_list,
        var_subscript_list,
        var_p,
        var_output_list,
        var_last,
        var_num,
        var_sub,
        var_invalid,
        var_used,
        var_unused,
        var_ellipse_inds,
        var_longest,
        var_input_tmp,
        var_output_sub,
        var_split_subscripts,
        var_out_sub,
        var_ellipse_count,
        var_rep_inds,
        var_out_ellipse,
        var_output_subscript,
        var_tmp_subscripts,
        var_normal_inds,
        var_input_subscripts,
        var_char
    );


    // Release cached frame.
    if ( frame_9d9b918acf83a8a5031db053489f42c9 == cache_frame_9d9b918acf83a8a5031db053489f42c9 )
    {
        Py_DECREF( frame_9d9b918acf83a8a5031db053489f42c9 );
    }
    cache_frame_9d9b918acf83a8a5031db053489f42c9 = NULL;

    assertFrameObject( frame_9d9b918acf83a8a5031db053489f42c9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_5__parse_einsum_input );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_operands );
    Py_DECREF( par_operands );
    par_operands = NULL;

    Py_XDECREF( var_subscripts );
    var_subscripts = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_tmp_operands );
    var_tmp_operands = NULL;

    Py_XDECREF( var_operand_list );
    var_operand_list = NULL;

    Py_XDECREF( var_subscript_list );
    var_subscript_list = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_output_list );
    var_output_list = NULL;

    Py_XDECREF( var_last );
    var_last = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    Py_XDECREF( var_invalid );
    var_invalid = NULL;

    Py_XDECREF( var_used );
    var_used = NULL;

    Py_XDECREF( var_unused );
    var_unused = NULL;

    Py_XDECREF( var_ellipse_inds );
    var_ellipse_inds = NULL;

    Py_XDECREF( var_longest );
    var_longest = NULL;

    Py_XDECREF( var_input_tmp );
    var_input_tmp = NULL;

    Py_XDECREF( var_output_sub );
    var_output_sub = NULL;

    Py_XDECREF( var_split_subscripts );
    var_split_subscripts = NULL;

    Py_XDECREF( var_out_sub );
    var_out_sub = NULL;

    Py_XDECREF( var_ellipse_count );
    var_ellipse_count = NULL;

    Py_XDECREF( var_rep_inds );
    var_rep_inds = NULL;

    Py_XDECREF( var_out_ellipse );
    var_out_ellipse = NULL;

    Py_XDECREF( var_output_subscript );
    var_output_subscript = NULL;

    Py_XDECREF( var_tmp_subscripts );
    var_tmp_subscripts = NULL;

    Py_XDECREF( var_normal_inds );
    var_normal_inds = NULL;

    CHECK_OBJECT( (PyObject *)var_input_subscripts );
    Py_DECREF( var_input_subscripts );
    var_input_subscripts = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_operands );
    par_operands = NULL;

    Py_XDECREF( var_subscripts );
    var_subscripts = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_tmp_operands );
    var_tmp_operands = NULL;

    Py_XDECREF( var_operand_list );
    var_operand_list = NULL;

    Py_XDECREF( var_subscript_list );
    var_subscript_list = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_output_list );
    var_output_list = NULL;

    Py_XDECREF( var_last );
    var_last = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_sub );
    var_sub = NULL;

    Py_XDECREF( var_invalid );
    var_invalid = NULL;

    Py_XDECREF( var_used );
    var_used = NULL;

    Py_XDECREF( var_unused );
    var_unused = NULL;

    Py_XDECREF( var_ellipse_inds );
    var_ellipse_inds = NULL;

    Py_XDECREF( var_longest );
    var_longest = NULL;

    Py_XDECREF( var_input_tmp );
    var_input_tmp = NULL;

    Py_XDECREF( var_output_sub );
    var_output_sub = NULL;

    Py_XDECREF( var_split_subscripts );
    var_split_subscripts = NULL;

    Py_XDECREF( var_out_sub );
    var_out_sub = NULL;

    Py_XDECREF( var_ellipse_count );
    var_ellipse_count = NULL;

    Py_XDECREF( var_rep_inds );
    var_rep_inds = NULL;

    Py_XDECREF( var_out_ellipse );
    var_out_ellipse = NULL;

    Py_XDECREF( var_output_subscript );
    var_output_subscript = NULL;

    Py_XDECREF( var_tmp_subscripts );
    var_tmp_subscripts = NULL;

    Py_XDECREF( var_normal_inds );
    var_normal_inds = NULL;

    Py_XDECREF( var_input_subscripts );
    var_input_subscripts = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_5__parse_einsum_input );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_6_einsum_path( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_operands = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_valid_contract_kwargs = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_unknown_kwargs = NULL;
    PyObject *var_path_type = NULL;
    PyObject *var_memory_limit = NULL;
    PyObject *var_einsum_call_arg = NULL;
    PyObject *var_input_subscripts = NULL;
    PyObject *var_output_subscript = NULL;
    PyObject *var_subscripts = NULL;
    PyObject *var_input_list = NULL;
    PyObject *var_x = NULL;
    PyObject *var_input_sets = NULL;
    PyObject *var_output_set = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_dimension_dict = NULL;
    PyObject *var_tnum = NULL;
    PyObject *var_term = NULL;
    PyObject *var_sh = NULL;
    PyObject *var_cnum = NULL;
    PyObject *var_char = NULL;
    PyObject *var_dim = NULL;
    PyObject *var_size_list = NULL;
    PyObject *var_max_size = NULL;
    PyObject *var_memory_arg = NULL;
    PyObject *var_naive_cost = NULL;
    PyObject *var_indices_in_input = NULL;
    PyObject *var_mult = NULL;
    PyObject *var_path = NULL;
    PyObject *var_cost_list = NULL;
    PyObject *var_scale_list = NULL;
    PyObject *var_contraction_list = NULL;
    PyObject *var_contract_inds = NULL;
    PyObject *var_contract = NULL;
    PyObject *var_out_inds = NULL;
    PyObject *var_idx_removed = NULL;
    PyObject *var_idx_contract = NULL;
    PyObject *var_cost = NULL;
    PyObject *var_tmp_inputs = NULL;
    PyObject *var_idx_result = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_sort_result = NULL;
    PyObject *var_einsum_str = NULL;
    PyObject *var_contraction = NULL;
    PyObject *var_opt_cost = NULL;
    PyObject *var_overall_contraction = NULL;
    PyObject *var_speedup = NULL;
    PyObject *var_max_i = NULL;
    PyObject *var_path_print = NULL;
    PyObject *var_n = NULL;
    PyObject *var_inds = NULL;
    PyObject *var_idx_rm = NULL;
    PyObject *var_remaining = NULL;
    PyObject *var_remaining_str = NULL;
    PyObject *var_path_run = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_3__$0 = NULL;
    PyObject *tmp_list_contraction_3__contraction_result = NULL;
    PyObject *tmp_list_contraction_3__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_4__$0 = NULL;
    PyObject *tmp_list_contraction_4__contraction_result = NULL;
    PyObject *tmp_list_contraction_4__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__element_4 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__element_4 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_list_3;
    PyObject *tmp_append_list_4;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_append_value_3;
    PyObject *tmp_append_value_4;
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
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
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
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_In_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
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
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
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
    PyObject *tmp_iter_arg_14;
    PyObject *tmp_iter_arg_15;
    PyObject *tmp_iter_arg_16;
    PyObject *tmp_iter_arg_17;
    PyObject *tmp_iter_arg_18;
    PyObject *tmp_iter_arg_19;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_iterator_name_6;
    PyObject *tmp_iterator_name_7;
    PyObject *tmp_iterator_name_8;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_kw_name_1;
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
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_left_name_22;
    PyObject *tmp_left_name_23;
    PyObject *tmp_left_name_24;
    PyObject *tmp_left_name_25;
    PyObject *tmp_left_name_26;
    PyObject *tmp_left_name_27;
    PyObject *tmp_left_name_28;
    PyObject *tmp_left_name_29;
    PyObject *tmp_left_name_30;
    PyObject *tmp_left_name_31;
    PyObject *tmp_left_name_32;
    PyObject *tmp_left_name_33;
    PyObject *tmp_left_name_34;
    PyObject *tmp_left_name_35;
    PyObject *tmp_left_name_36;
    PyObject *tmp_left_name_37;
    PyObject *tmp_left_name_38;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_len_arg_8;
    PyObject *tmp_len_arg_9;
    PyObject *tmp_len_arg_10;
    PyObject *tmp_len_arg_11;
    PyObject *tmp_len_arg_12;
    PyObject *tmp_len_arg_13;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_make_exception_arg_9;
    PyObject *tmp_make_exception_arg_10;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_next_source_5;
    PyObject *tmp_next_source_6;
    PyObject *tmp_next_source_7;
    PyObject *tmp_next_source_8;
    PyObject *tmp_next_source_9;
    PyObject *tmp_next_source_10;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_right_name_16;
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_right_name_22;
    PyObject *tmp_right_name_23;
    PyObject *tmp_right_name_24;
    PyObject *tmp_right_name_25;
    PyObject *tmp_right_name_26;
    PyObject *tmp_right_name_27;
    PyObject *tmp_right_name_28;
    PyObject *tmp_right_name_29;
    PyObject *tmp_right_name_30;
    PyObject *tmp_right_name_31;
    PyObject *tmp_right_name_32;
    PyObject *tmp_right_name_33;
    PyObject *tmp_right_name_34;
    PyObject *tmp_right_name_35;
    PyObject *tmp_right_name_36;
    PyObject *tmp_right_name_37;
    PyObject *tmp_right_name_38;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_set_arg_2;
    PyObject *tmp_set_arg_3;
    PyObject *tmp_set_arg_4;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_sum_sequence_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_arg_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2bccb313e50ee25c7103711e3916f37c = NULL;

    struct Nuitka_FrameObject *frame_2bccb313e50ee25c7103711e3916f37c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;

    // Actual function code.
    tmp_assign_source_1 = LIST_COPY( const_list_str_plain_optimize_str_plain_einsum_call_list );
    assert( var_valid_contract_kwargs == NULL );
    var_valid_contract_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2bccb313e50ee25c7103711e3916f37c, codeobj_2bccb313e50ee25c7103711e3916f37c, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2bccb313e50ee25c7103711e3916f37c = cache_frame_2bccb313e50ee25c7103711e3916f37c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2bccb313e50ee25c7103711e3916f37c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2bccb313e50ee25c7103711e3916f37c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 538;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_4;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 538;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__source_iter;
        tmp_list_contraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_list_contraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 538;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_1;
        tmp_list_contraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_list_contraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 538;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_2;
        tmp_list_contraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_list_contraction$tuple_unpack_1__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 538;
                goto try_except_handler_4;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 538;
        goto try_except_handler_4;
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_9 = tmp_list_contraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_9;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_list_contraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_10;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_k;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = var_valid_contract_kwargs;

    CHECK_OBJECT( tmp_compare_right_1 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
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
    tmp_append_value_1 = var_k;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    outline_result_1:;
    tmp_assign_source_2 = tmp_outline_return_value_1;
    assert( var_unknown_kwargs == NULL );
    var_unknown_kwargs = tmp_assign_source_2;

    tmp_len_arg_1 = var_unknown_kwargs;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_cond_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 540;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_8e49326f7690ff05ca40ba77fd983d5e;
    tmp_right_name_1 = var_unknown_kwargs;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 541;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 541;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_2 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 545;
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_optimize_false_tuple, 0 ) );

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path_type == NULL );
    var_path_type = tmp_assign_source_11;

    tmp_compare_left_2 = var_path_type;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_12 = const_str_plain_greedy;
    {
        PyObject *old = var_path_type;
        assert( old != NULL );
        var_path_type = tmp_assign_source_12;
        Py_INCREF( var_path_type );
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_compare_left_3 = var_path_type;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_13 = Py_False;
    {
        PyObject *old = var_path_type;
        assert( old != NULL );
        var_path_type = tmp_assign_source_13;
        Py_INCREF( var_path_type );
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_assign_source_14 = Py_None;
    assert( var_memory_limit == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_memory_limit = tmp_assign_source_14;

    tmp_compexpr_left_1 = var_path_type;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 554;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = Py_False;
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
    tmp_isinstance_inst_1 = var_path_type;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 554;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 554;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 554;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_len_arg_2 = var_path_type;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
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
    tmp_subscribed_name_1 = var_path_type;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_plain_einsum_path;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 558;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_len_arg_3 = var_path_type;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 562;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_pos_2;
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 563;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
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
    tmp_subscribed_name_2 = var_path_type;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 562;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_isinstance_inst_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_isinstance_inst_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_2 = (PyObject *)&PyString_Type;
    tmp_and_left_value_3 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_inst_2 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
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
    tmp_subscribed_name_3 = var_path_type;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 563;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_isinstance_inst_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_3 = const_tuple_type_int_type_float_tuple;
    tmp_and_right_value_3 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    Py_INCREF( tmp_and_right_value_2 );
    tmp_cond_value_4 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_4 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 563;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_subscribed_name_4 = var_path_type;

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 564;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_int_pos_1;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 564;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 564;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_memory_limit;
        assert( old != NULL );
        var_memory_limit = tmp_assign_source_15;
        Py_DECREF( old );
    }

    tmp_subscribed_name_5 = var_path_type;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 565;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_int_0;
    tmp_assign_source_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 565;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_path_type;
        var_path_type = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_left_name_2 = const_str_digest_0cb78dee9aaca0547cf988b1d40cdc18;
    tmp_str_arg_1 = var_path_type;

    if ( tmp_str_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 568;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 568;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 568;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
    goto frame_exception_exit_1;
    branch_end_7:;
    branch_no_6:;
    branch_no_5:;
    tmp_called_instance_3 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 571;
    tmp_assign_source_17 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_einsum_call_false_tuple, 0 ) );

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_einsum_call_arg == NULL );
    var_einsum_call_arg = tmp_assign_source_17;

    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__parse_einsum_input );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_einsum_input );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_einsum_input" );
        exception_tb = NULL;

        exception_lineno = 574;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_5;
    }

    tmp_args_element_name_1 = par_operands;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 574;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_18;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 574;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_20 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 574;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_5, 2 );
    if ( tmp_assign_source_21 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 574;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_21;

    tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 574;
                goto try_except_handler_6;
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

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 574;
        goto try_except_handler_6;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_22 );
    assert( var_input_subscripts == NULL );
    Py_INCREF( tmp_assign_source_22 );
    var_input_subscripts = tmp_assign_source_22;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_23 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_23 );
    assert( var_output_subscript == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var_output_subscript = tmp_assign_source_23;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_24 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = par_operands;
        assert( old != NULL );
        par_operands = tmp_assign_source_24;
        Py_INCREF( par_operands );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_left_name_4 = var_input_subscripts;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_3 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_left_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = var_output_subscript;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_assign_source_25 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_subscripts == NULL );
    var_subscripts = tmp_assign_source_25;

    tmp_called_instance_4 = var_input_subscripts;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 578;
    tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_input_list == NULL );
    var_input_list = tmp_assign_source_26;

    // Tried code:
    tmp_iter_arg_4 = var_input_list;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_28 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_7;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_28;

    tmp_assign_source_29 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_29;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_30 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 579;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    tmp_assign_source_31 = tmp_list_contraction_2__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_31 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_31;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_set_arg_1 = var_x;

    CHECK_OBJECT( tmp_set_arg_1 );
    tmp_append_value_2 = PySet_New( tmp_set_arg_1 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_7;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
    Py_DECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
    Py_DECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    outline_result_2:;
    tmp_assign_source_27 = tmp_outline_return_value_2;
    assert( var_input_sets == NULL );
    var_input_sets = tmp_assign_source_27;

    tmp_set_arg_2 = var_output_subscript;

    CHECK_OBJECT( tmp_set_arg_2 );
    tmp_assign_source_32 = PySet_New( tmp_set_arg_2 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_output_set == NULL );
    var_output_set = tmp_assign_source_32;

    tmp_called_instance_5 = var_input_subscripts;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 581;
    tmp_set_arg_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 0 ) );

    if ( tmp_set_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = PySet_New( tmp_set_arg_3 );
    Py_DECREF( tmp_set_arg_3 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_indices == NULL );
    var_indices = tmp_assign_source_33;

    tmp_assign_source_34 = PyDict_New();
    assert( var_dimension_dict == NULL );
    var_dimension_dict = tmp_assign_source_34;

    tmp_called_name_2 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_2 = var_input_list;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 585;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_35;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_36 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 585;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_6 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_6 );
    tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_6 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_38 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 585;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_38;
        Py_XDECREF( old );
    }

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_7, 1 );
    if ( tmp_assign_source_39 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 585;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_39;
        Py_XDECREF( old );
    }

    tmp_iterator_name_3 = tmp_tuple_unpack_2__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 585;
                goto try_except_handler_10;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 585;
        goto try_except_handler_10;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_40 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_40 );
    {
        PyObject *old = var_tnum;
        var_tnum = tmp_assign_source_40;
        Py_INCREF( var_tnum );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_41 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_41 );
    {
        PyObject *old = var_term;
        var_term = tmp_assign_source_41;
        Py_INCREF( var_term );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_subscribed_name_6 = par_operands;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = var_tnum;

    CHECK_OBJECT( tmp_subscript_name_6 );
    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_42 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = var_sh;
        var_sh = tmp_assign_source_42;
        Py_XDECREF( old );
    }

    tmp_len_arg_4 = var_sh;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    tmp_len_arg_5 = var_term;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_compare_right_4 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 587;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 587;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_3 = const_str_digest_e834105f3dae81f9d8d38e7ad6e967b2;
    tmp_subscribed_name_7 = var_input_subscripts;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = var_tnum;

    CHECK_OBJECT( tmp_subscript_name_7 );
    tmp_make_exception_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    tmp_make_exception_arg_5 = var_tnum;

    CHECK_OBJECT( tmp_make_exception_arg_5 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 588;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3, tmp_make_exception_arg_4, tmp_make_exception_arg_5 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS3( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 588;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
    goto try_except_handler_8;
    branch_no_8:;
    tmp_called_name_3 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_3 = var_term;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 591;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_iter_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    tmp_assign_source_43 = MAKE_ITERATOR( tmp_iter_arg_7 );
    Py_DECREF( tmp_iter_arg_7 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_43;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_44 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_44 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 591;
            goto try_except_handler_11;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_44;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_8 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_iter_arg_8 );
    tmp_assign_source_45 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter;
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_45;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_8, 0 );
    if ( tmp_assign_source_46 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 591;
        goto try_except_handler_13;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_1;
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_47 = UNPACK_NEXT( tmp_unpack_9, 1 );
    if ( tmp_assign_source_47 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 591;
        goto try_except_handler_13;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_2;
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_47;
        Py_XDECREF( old );
    }

    tmp_iterator_name_4 = tmp_tuple_unpack_3__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 591;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 591;
        goto try_except_handler_13;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_12;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_48 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_48 );
    {
        PyObject *old = var_cnum;
        var_cnum = tmp_assign_source_48;
        Py_INCREF( var_cnum );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_49 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_49 );
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_49;
        Py_INCREF( var_char );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_subscribed_name_8 = var_sh;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = var_cnum;

    CHECK_OBJECT( tmp_subscript_name_8 );
    tmp_assign_source_50 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = var_dim;
        var_dim = tmp_assign_source_50;
        Py_XDECREF( old );
    }

    tmp_compare_left_5 = var_char;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_called_instance_6 = var_dimension_dict;

    CHECK_OBJECT( tmp_called_instance_6 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 593;
    tmp_compare_right_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_keys );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_11;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dict_name_1 = var_dimension_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_key_name_1 = var_char;

    CHECK_OBJECT( tmp_key_name_1 );
    tmp_compare_left_6 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_11;
    }
    tmp_compare_right_6 = var_dim;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_6 = const_str_digest_672d6b5dc9ec3a69078dceb36f6e74f2;
    tmp_make_exception_arg_7 = var_char;

    CHECK_OBJECT( tmp_make_exception_arg_7 );
    tmp_make_exception_arg_8 = var_tnum;

    CHECK_OBJECT( tmp_make_exception_arg_8 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 595;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6, tmp_make_exception_arg_7, tmp_make_exception_arg_8 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 595;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
    goto try_except_handler_11;
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_dictset_value = var_dim;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_dimension_dict;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = var_char;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_11;
    }
    branch_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_assign_source_51 = PyList_New( 0 );
    assert( var_size_list == NULL );
    var_size_list = tmp_assign_source_51;

    tmp_left_name_5 = var_input_list;

    CHECK_OBJECT( tmp_left_name_5 );
    tmp_right_name_5 = PyList_New( 1 );
    tmp_list_element_1 = var_output_subscript;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_right_name_5, 0, tmp_list_element_1 );
    tmp_iter_arg_9 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_iter_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_52 = MAKE_ITERATOR( tmp_iter_arg_9 );
    Py_DECREF( tmp_iter_arg_9 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_52;

    // Tried code:
    loop_start_5:;
    tmp_next_source_5 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_5 );
    tmp_assign_source_53 = ITERATOR_NEXT( tmp_next_source_5 );
    if ( tmp_assign_source_53 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_5;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 602;
            goto try_except_handler_14;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_53;
        Py_XDECREF( old );
    }

    tmp_assign_source_54 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_54 );
    {
        PyObject *old = var_term;
        var_term = tmp_assign_source_54;
        Py_INCREF( var_term );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_size_list;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 603;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_14;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 603;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_14;
    }

    tmp_args_element_name_5 = var_term;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = var_dimension_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 603;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 603;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_14;
    }
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 603;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 603;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_11;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_6 != NULL );
    tmp_args_element_name_7 = var_size_list;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 604;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 604;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_max_size == NULL );
    var_max_size = tmp_assign_source_55;

    tmp_compare_left_7 = var_memory_limit;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "memory_limit" );
        exception_tb = NULL;

        exception_lineno = 606;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_is_3 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_3 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_56 = var_max_size;

    CHECK_OBJECT( tmp_assign_source_56 );
    assert( var_memory_arg == NULL );
    Py_INCREF( tmp_assign_source_56 );
    var_memory_arg = tmp_assign_source_56;

    goto branch_end_11;
    branch_no_11:;
    tmp_assign_source_57 = var_memory_limit;

    if ( tmp_assign_source_57 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "memory_limit" );
        exception_tb = NULL;

        exception_lineno = 609;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_memory_arg == NULL );
    Py_INCREF( tmp_assign_source_57 );
    var_memory_arg = tmp_assign_source_57;

    branch_end_11:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 613;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_indices;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = var_dimension_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 613;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_naive_cost == NULL );
    var_naive_cost = tmp_assign_source_58;

    tmp_called_instance_7 = var_input_subscripts;

    CHECK_OBJECT( tmp_called_instance_7 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 614;
    tmp_assign_source_59 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_str_chr_44_str_empty_tuple, 0 ) );

    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_indices_in_input == NULL );
    var_indices_in_input = tmp_assign_source_59;

    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_8 != NULL );
    tmp_len_arg_6 = var_input_list;

    CHECK_OBJECT( tmp_len_arg_6 );
    tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = const_int_pos_1;
    tmp_args_element_name_10 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = const_int_pos_1;
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 615;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_mult == NULL );
    var_mult = tmp_assign_source_60;

    tmp_len_arg_7 = var_indices_in_input;

    CHECK_OBJECT( tmp_len_arg_7 );
    tmp_left_name_7 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 616;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_set_arg_4 = var_indices_in_input;

    CHECK_OBJECT( tmp_set_arg_4 );
    tmp_len_arg_8 = PySet_New( tmp_set_arg_4 );
    if ( tmp_len_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 616;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = BUILTIN_LEN( tmp_len_arg_8 );
    Py_DECREF( tmp_len_arg_8 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 616;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_5 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 616;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 616;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_left_name_8 = var_mult;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_right_name_8 = const_int_pos_2;
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_61 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 617;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_mult = tmp_assign_source_61;

    branch_no_12:;
    tmp_left_name_9 = var_naive_cost;

    CHECK_OBJECT( tmp_left_name_9 );
    tmp_right_name_9 = var_mult;

    CHECK_OBJECT( tmp_right_name_9 );
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_62 = tmp_left_name_9;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_naive_cost = tmp_assign_source_62;

    tmp_compexpr_left_4 = var_path_type;

    if ( tmp_compexpr_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 621;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_4 = Py_False;
    tmp_or_left_value_2 = BOOL_FROM( tmp_compexpr_left_4 == tmp_compexpr_right_4 );
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    assert( !(tmp_or_left_truth_2 == -1) );
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_len_arg_9 = var_input_list;

    CHECK_OBJECT( tmp_len_arg_9 );
    tmp_compexpr_left_5 = BUILTIN_LEN( tmp_len_arg_9 );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = LIST_COPY( const_list_int_pos_1_int_pos_2_list );
    tmp_or_left_value_3 = SEQUENCE_CONTAINS( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    Py_DECREF( tmp_compexpr_right_5 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    assert( !(tmp_or_left_truth_3 == -1) );
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    tmp_compexpr_left_6 = var_indices;

    CHECK_OBJECT( tmp_compexpr_left_6 );
    tmp_compexpr_right_6 = var_output_set;

    CHECK_OBJECT( tmp_compexpr_right_6 );
    tmp_or_right_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 621;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_2 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    Py_INCREF( tmp_or_left_value_3 );
    tmp_or_right_value_2 = tmp_or_left_value_3;
    or_end_3:;
    tmp_cond_value_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
    tmp_cond_value_6 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 621;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_63 = PyList_New( 1 );
    tmp_len_arg_10 = var_input_list;

    CHECK_OBJECT( tmp_len_arg_10 );
    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_10 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_63 );

        exception_lineno = 623;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_63 );

        exception_lineno = 623;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_list_element_2 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_63 );

        exception_lineno = 623;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_63, 0, tmp_list_element_2 );
    assert( var_path == NULL );
    var_path = tmp_assign_source_63;

    goto branch_end_13;
    branch_no_13:;
    tmp_compare_left_8 = var_path_type;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 624;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = const_str_plain_greedy;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_12 = var_memory_arg;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_args_element_name_13 = var_max_size;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 626;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_memory_arg;
        assert( old != NULL );
        var_memory_arg = tmp_assign_source_64;
        Py_DECREF( old );
    }

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__greedy_path );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__greedy_path );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_greedy_path" );
        exception_tb = NULL;

        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = var_input_sets;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = var_output_set;

    CHECK_OBJECT( tmp_args_element_name_15 );
    tmp_args_element_name_16 = var_dimension_dict;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = var_memory_arg;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 627;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path == NULL );
    var_path = tmp_assign_source_65;

    goto branch_end_14;
    branch_no_14:;
    tmp_compare_left_9 = var_path_type;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 628;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = const_str_plain_optimal;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__optimal_path );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__optimal_path );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_optimal_path" );
        exception_tb = NULL;

        exception_lineno = 629;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = var_input_sets;

    CHECK_OBJECT( tmp_args_element_name_18 );
    tmp_args_element_name_19 = var_output_set;

    CHECK_OBJECT( tmp_args_element_name_19 );
    tmp_args_element_name_20 = var_dimension_dict;

    CHECK_OBJECT( tmp_args_element_name_20 );
    tmp_args_element_name_21 = var_memory_arg;

    CHECK_OBJECT( tmp_args_element_name_21 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 629;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 629;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path == NULL );
    var_path = tmp_assign_source_66;

    goto branch_end_15;
    branch_no_15:;
    tmp_subscribed_name_9 = var_path_type;

    if ( tmp_subscribed_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 630;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_9 = const_int_0;
    tmp_compare_left_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 630;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_str_plain_einsum_path;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 630;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_path_type;

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 631;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_67 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 631;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path == NULL );
    var_path = tmp_assign_source_67;

    goto branch_end_16;
    branch_no_16:;
    tmp_make_exception_arg_9 = const_str_digest_73fe507b2f33a2f1c3478ff095ee8003;
    tmp_make_exception_arg_10 = var_path_type;

    if ( tmp_make_exception_arg_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_type" );
        exception_tb = NULL;

        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 633;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_9, tmp_make_exception_arg_10 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS2( PyExc_KeyError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 633;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
    goto frame_exception_exit_1;
    branch_end_16:;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    tmp_iter_arg_10 = DEEP_COPY( const_tuple_list_empty_list_empty_list_empty_list_empty_tuple );
    tmp_assign_source_68 = MAKE_ITERATOR( tmp_iter_arg_10 );
    Py_DECREF( tmp_iter_arg_10 );
    assert( tmp_assign_source_68 != NULL );
    assert( tmp_tuple_unpack_4__source_iter == NULL );
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_68;

    // Tried code:
    // Tried code:
    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_10, 0 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 635;
        goto try_except_handler_16;
    }
    assert( tmp_tuple_unpack_4__element_1 == NULL );
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_69;

    tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_11, 1 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 635;
        goto try_except_handler_16;
    }
    assert( tmp_tuple_unpack_4__element_2 == NULL );
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_70;

    tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_12 );
    tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_12, 2 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 635;
        goto try_except_handler_16;
    }
    assert( tmp_tuple_unpack_4__element_3 == NULL );
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_71;

    tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_13 );
    tmp_assign_source_72 = UNPACK_NEXT( tmp_unpack_13, 3 );
    if ( tmp_assign_source_72 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 635;
        goto try_except_handler_16;
    }
    assert( tmp_tuple_unpack_4__element_4 == NULL );
    tmp_tuple_unpack_4__element_4 = tmp_assign_source_72;

    goto try_end_12;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_73 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_73 );
    assert( var_cost_list == NULL );
    Py_INCREF( tmp_assign_source_73 );
    var_cost_list = tmp_assign_source_73;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_74 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_74 );
    assert( var_scale_list == NULL );
    Py_INCREF( tmp_assign_source_74 );
    var_scale_list = tmp_assign_source_74;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    tmp_assign_source_75 = tmp_tuple_unpack_4__element_3;

    CHECK_OBJECT( tmp_assign_source_75 );
    {
        PyObject *old = var_size_list;
        assert( old != NULL );
        var_size_list = tmp_assign_source_75;
        Py_INCREF( var_size_list );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    tmp_assign_source_76 = tmp_tuple_unpack_4__element_4;

    CHECK_OBJECT( tmp_assign_source_76 );
    assert( var_contraction_list == NULL );
    Py_INCREF( tmp_assign_source_76 );
    var_contraction_list = tmp_assign_source_76;

    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    tmp_called_name_12 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_22 = var_path;

    if ( tmp_args_element_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 638;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_iter_arg_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_iter_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_77 = MAKE_ITERATOR( tmp_iter_arg_11 );
    Py_DECREF( tmp_iter_arg_11 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_77;

    // Tried code:
    loop_start_6:;
    tmp_next_source_6 = tmp_for_loop_4__for_iterator;

    CHECK_OBJECT( tmp_next_source_6 );
    tmp_assign_source_78 = ITERATOR_NEXT( tmp_next_source_6 );
    if ( tmp_assign_source_78 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_6;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 638;
            goto try_except_handler_17;
        }
    }

    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_78;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_12 = tmp_for_loop_4__iter_value;

    CHECK_OBJECT( tmp_iter_arg_12 );
    tmp_assign_source_79 = MAKE_ITERATOR( tmp_iter_arg_12 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_18;
    }
    {
        PyObject *old = tmp_tuple_unpack_5__source_iter;
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_79;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_14 );
    tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_14, 0 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 638;
        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_tuple_unpack_5__element_1;
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_80;
        Py_XDECREF( old );
    }

    tmp_unpack_15 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_15 );
    tmp_assign_source_81 = UNPACK_NEXT( tmp_unpack_15, 1 );
    if ( tmp_assign_source_81 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 638;
        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_tuple_unpack_5__element_2;
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_81;
        Py_XDECREF( old );
    }

    tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 638;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 638;
        goto try_except_handler_19;
    }
    goto try_end_14;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_18;
    // End of try:
    try_end_14:;
    goto try_end_15;
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

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_17;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    tmp_assign_source_82 = tmp_tuple_unpack_5__element_1;

    CHECK_OBJECT( tmp_assign_source_82 );
    {
        PyObject *old = var_cnum;
        var_cnum = tmp_assign_source_82;
        Py_INCREF( var_cnum );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    tmp_assign_source_83 = tmp_tuple_unpack_5__element_2;

    CHECK_OBJECT( tmp_assign_source_83 );
    {
        PyObject *old = var_contract_inds;
        var_contract_inds = tmp_assign_source_83;
        Py_INCREF( var_contract_inds );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    tmp_called_name_13 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_13 != NULL );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_list_arg_1 = var_contract_inds;

    CHECK_OBJECT( tmp_list_arg_1 );
    tmp_tuple_element_1 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 640;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_20f16b30e1951d468c3080dfc46b8748 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 640;
    tmp_tuple_arg_2 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_tuple_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_assign_source_84 = PySequence_Tuple( tmp_tuple_arg_2 );
    Py_DECREF( tmp_tuple_arg_2 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    {
        PyObject *old = var_contract_inds;
        assert( old != NULL );
        var_contract_inds = tmp_assign_source_84;
        Py_DECREF( old );
    }

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__find_contraction );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__find_contraction );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_find_contraction" );
        exception_tb = NULL;

        exception_lineno = 642;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }

    tmp_args_element_name_23 = var_contract_inds;

    CHECK_OBJECT( tmp_args_element_name_23 );
    tmp_args_element_name_24 = var_input_sets;

    if ( tmp_args_element_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "input_sets" );
        exception_tb = NULL;

        exception_lineno = 642;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }

    tmp_args_element_name_25 = var_output_set;

    CHECK_OBJECT( tmp_args_element_name_25 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 642;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 642;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    {
        PyObject *old = var_contract;
        var_contract = tmp_assign_source_85;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_13 = var_contract;

    CHECK_OBJECT( tmp_iter_arg_13 );
    tmp_assign_source_86 = MAKE_ITERATOR( tmp_iter_arg_13 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_20;
    }
    {
        PyObject *old = tmp_tuple_unpack_6__source_iter;
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_86;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_16 );
    tmp_assign_source_87 = UNPACK_NEXT( tmp_unpack_16, 0 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 643;
        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_tuple_unpack_6__element_1;
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_87;
        Py_XDECREF( old );
    }

    tmp_unpack_17 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_17 );
    tmp_assign_source_88 = UNPACK_NEXT( tmp_unpack_17, 1 );
    if ( tmp_assign_source_88 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 643;
        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_tuple_unpack_6__element_2;
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_88;
        Py_XDECREF( old );
    }

    tmp_unpack_18 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_18 );
    tmp_assign_source_89 = UNPACK_NEXT( tmp_unpack_18, 2 );
    if ( tmp_assign_source_89 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 643;
        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_tuple_unpack_6__element_3;
        tmp_tuple_unpack_6__element_3 = tmp_assign_source_89;
        Py_XDECREF( old );
    }

    tmp_unpack_19 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_19 );
    tmp_assign_source_90 = UNPACK_NEXT( tmp_unpack_19, 3 );
    if ( tmp_assign_source_90 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 643;
        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_tuple_unpack_6__element_4;
        tmp_tuple_unpack_6__element_4 = tmp_assign_source_90;
        Py_XDECREF( old );
    }

    tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 643;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 643;
        goto try_except_handler_21;
    }
    goto try_end_16;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_20;
    // End of try:
    try_end_16:;
    goto try_end_17;
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

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_3 );
    tmp_tuple_unpack_6__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_4 );
    tmp_tuple_unpack_6__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_17;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    tmp_assign_source_91 = tmp_tuple_unpack_6__element_1;

    CHECK_OBJECT( tmp_assign_source_91 );
    {
        PyObject *old = var_out_inds;
        var_out_inds = tmp_assign_source_91;
        Py_INCREF( var_out_inds );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    tmp_assign_source_92 = tmp_tuple_unpack_6__element_2;

    CHECK_OBJECT( tmp_assign_source_92 );
    {
        PyObject *old = var_input_sets;
        var_input_sets = tmp_assign_source_92;
        Py_INCREF( var_input_sets );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    tmp_assign_source_93 = tmp_tuple_unpack_6__element_3;

    CHECK_OBJECT( tmp_assign_source_93 );
    {
        PyObject *old = var_idx_removed;
        var_idx_removed = tmp_assign_source_93;
        Py_INCREF( var_idx_removed );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_6__element_3 );
    tmp_tuple_unpack_6__element_3 = NULL;

    tmp_assign_source_94 = tmp_tuple_unpack_6__element_4;

    CHECK_OBJECT( tmp_assign_source_94 );
    {
        PyObject *old = var_idx_contract;
        var_idx_contract = tmp_assign_source_94;
        Py_INCREF( var_idx_contract );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_6__element_4 );
    tmp_tuple_unpack_6__element_4 = NULL;

    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }

    tmp_args_element_name_26 = var_idx_contract;

    CHECK_OBJECT( tmp_args_element_name_26 );
    tmp_args_element_name_27 = var_dimension_dict;

    CHECK_OBJECT( tmp_args_element_name_27 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 645;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    {
        PyObject *old = var_cost;
        var_cost = tmp_assign_source_95;
        Py_XDECREF( old );
    }

    tmp_cond_value_7 = var_idx_removed;

    CHECK_OBJECT( tmp_cond_value_7 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 646;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_left_name_10 = var_cost;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_right_name_10 = const_int_pos_2;
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
    tmp_assign_source_96 = tmp_left_name_10;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    var_cost = tmp_assign_source_96;

    branch_no_17:;
    tmp_called_instance_8 = var_cost_list;

    CHECK_OBJECT( tmp_called_instance_8 );
    tmp_args_element_name_28 = var_cost;

    CHECK_OBJECT( tmp_args_element_name_28 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 648;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_scale_list;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_len_arg_11 = var_idx_contract;

    CHECK_OBJECT( tmp_len_arg_11 );
    tmp_args_element_name_29 = BUILTIN_LEN( tmp_len_arg_11 );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 649;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 649;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 649;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_size_list;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict );
    }

    if ( tmp_called_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_compute_size_by_dict" );
        exception_tb = NULL;

        exception_lineno = 650;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }

    tmp_args_element_name_31 = var_out_inds;

    CHECK_OBJECT( tmp_args_element_name_31 );
    tmp_args_element_name_32 = var_dimension_dict;

    CHECK_OBJECT( tmp_args_element_name_32 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 650;
    {
        PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
        tmp_args_element_name_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 650;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 650;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_97 = PyList_New( 0 );
    {
        PyObject *old = var_tmp_inputs;
        var_tmp_inputs = tmp_assign_source_97;
        Py_XDECREF( old );
    }

    tmp_iter_arg_14 = var_contract_inds;

    CHECK_OBJECT( tmp_iter_arg_14 );
    tmp_assign_source_98 = MAKE_ITERATOR( tmp_iter_arg_14 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    {
        PyObject *old = tmp_for_loop_5__for_iterator;
        tmp_for_loop_5__for_iterator = tmp_assign_source_98;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_7:;
    tmp_next_source_7 = tmp_for_loop_5__for_iterator;

    CHECK_OBJECT( tmp_next_source_7 );
    tmp_assign_source_99 = ITERATOR_NEXT( tmp_next_source_7 );
    if ( tmp_assign_source_99 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_7;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 653;
            goto try_except_handler_22;
        }
    }

    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_99;
        Py_XDECREF( old );
    }

    tmp_assign_source_100 = tmp_for_loop_5__iter_value;

    CHECK_OBJECT( tmp_assign_source_100 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_100;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_source_name_5 = var_tmp_inputs;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_22;
    }
    tmp_called_instance_9 = var_input_list;

    CHECK_OBJECT( tmp_called_instance_9 );
    tmp_args_element_name_34 = var_x;

    CHECK_OBJECT( tmp_args_element_name_34 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 654;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_args_element_name_33 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_pop, call_args );
    }

    if ( tmp_args_element_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 654;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_22;
    }
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 654;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_22;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_17;
    // End of try:
    try_end_18:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    tmp_left_name_11 = var_cnum;

    CHECK_OBJECT( tmp_left_name_11 );
    tmp_len_arg_12 = var_path;

    if ( tmp_len_arg_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 657;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }

    tmp_right_name_11 = BUILTIN_LEN( tmp_len_arg_12 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_compare_left_11 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_compare_right_11 = const_int_neg_1;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 657;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_101 = var_output_subscript;

    CHECK_OBJECT( tmp_assign_source_101 );
    {
        PyObject *old = var_idx_result;
        var_idx_result = tmp_assign_source_101;
        Py_INCREF( var_idx_result );
        Py_XDECREF( old );
    }

    goto branch_end_18;
    branch_no_18:;
    // Tried code:
    tmp_iter_arg_15 = var_out_inds;

    CHECK_OBJECT( tmp_iter_arg_15 );
    tmp_assign_source_103 = MAKE_ITERATOR( tmp_iter_arg_15 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_23;
    }
    {
        PyObject *old = tmp_list_contraction_3__$0;
        tmp_list_contraction_3__$0 = tmp_assign_source_103;
        Py_XDECREF( old );
    }

    tmp_assign_source_104 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_3__contraction_result;
        tmp_list_contraction_3__contraction_result = tmp_assign_source_104;
        Py_XDECREF( old );
    }

    loop_start_8:;
    tmp_next_source_8 = tmp_list_contraction_3__$0;

    CHECK_OBJECT( tmp_next_source_8 );
    tmp_assign_source_105 = ITERATOR_NEXT( tmp_next_source_8 );
    if ( tmp_assign_source_105 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_8;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 660;
            goto try_except_handler_23;
        }
    }

    {
        PyObject *old = tmp_list_contraction_3__iter_value_0;
        tmp_list_contraction_3__iter_value_0 = tmp_assign_source_105;
        Py_XDECREF( old );
    }

    tmp_assign_source_106 = tmp_list_contraction_3__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_106 );
    {
        PyObject *old = var_ind;
        var_ind = tmp_assign_source_106;
        Py_INCREF( var_ind );
        Py_XDECREF( old );
    }

    tmp_append_list_3 = tmp_list_contraction_3__contraction_result;

    CHECK_OBJECT( tmp_append_list_3 );
    tmp_append_value_3 = PyTuple_New( 2 );
    tmp_dict_name_2 = var_dimension_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = var_ind;

    CHECK_OBJECT( tmp_key_name_2 );
    tmp_tuple_element_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_append_value_3 );

        exception_lineno = 660;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_23;
    }
    PyTuple_SET_ITEM( tmp_append_value_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_ind;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_append_value_3, 1, tmp_tuple_element_2 );
    assert( PyList_Check( tmp_append_list_3 ) );
    tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
    Py_DECREF( tmp_append_value_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_23;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_8;
    loop_end_8:;
    tmp_outline_return_value_3 = tmp_list_contraction_3__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_23;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_3__$0 );
    Py_DECREF( tmp_list_contraction_3__$0 );
    tmp_list_contraction_3__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_3__contraction_result );
    Py_DECREF( tmp_list_contraction_3__contraction_result );
    tmp_list_contraction_3__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_3__iter_value_0 );
    tmp_list_contraction_3__iter_value_0 = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction_3__$0 );
    tmp_list_contraction_3__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_3__contraction_result );
    tmp_list_contraction_3__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_3__iter_value_0 );
    tmp_list_contraction_3__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    outline_result_3:;
    tmp_assign_source_102 = tmp_outline_return_value_3;
    {
        PyObject *old = var_sort_result;
        var_sort_result = tmp_assign_source_102;
        Py_XDECREF( old );
    }

    tmp_source_name_6 = const_str_empty;
    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    assert( tmp_called_name_20 != NULL );
    // Tried code:
    tmp_called_name_21 = LOOKUP_BUILTIN( const_str_plain_sorted );
    assert( tmp_called_name_21 != NULL );
    tmp_args_element_name_36 = var_sort_result;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 661;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_iter_arg_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    if ( tmp_iter_arg_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_24;
    }
    tmp_assign_source_108 = MAKE_ITERATOR( tmp_iter_arg_16 );
    Py_DECREF( tmp_iter_arg_16 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_list_contraction_4__$0;
        tmp_list_contraction_4__$0 = tmp_assign_source_108;
        Py_XDECREF( old );
    }

    tmp_assign_source_109 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_4__contraction_result;
        tmp_list_contraction_4__contraction_result = tmp_assign_source_109;
        Py_XDECREF( old );
    }

    loop_start_9:;
    tmp_next_source_9 = tmp_list_contraction_4__$0;

    CHECK_OBJECT( tmp_next_source_9 );
    tmp_assign_source_110 = ITERATOR_NEXT( tmp_next_source_9 );
    if ( tmp_assign_source_110 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_9;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 661;
            goto try_except_handler_24;
        }
    }

    {
        PyObject *old = tmp_list_contraction_4__iter_value_0;
        tmp_list_contraction_4__iter_value_0 = tmp_assign_source_110;
        Py_XDECREF( old );
    }

    tmp_assign_source_111 = tmp_list_contraction_4__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_111 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_111;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_4 = tmp_list_contraction_4__contraction_result;

    CHECK_OBJECT( tmp_append_list_4 );
    tmp_subscribed_name_10 = var_x;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_pos_1;
    tmp_append_value_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_append_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_24;
    }
    assert( PyList_Check( tmp_append_list_4 ) );
    tmp_res = PyList_Append( tmp_append_list_4, tmp_append_value_4 );
    Py_DECREF( tmp_append_value_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_24;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_24;
    }
    goto loop_start_9;
    loop_end_9:;
    tmp_outline_return_value_4 = tmp_list_contraction_4__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    // Return handler code:
    try_return_handler_24:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_4__$0 );
    Py_DECREF( tmp_list_contraction_4__$0 );
    tmp_list_contraction_4__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_4__contraction_result );
    Py_DECREF( tmp_list_contraction_4__contraction_result );
    tmp_list_contraction_4__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_4__iter_value_0 );
    tmp_list_contraction_4__iter_value_0 = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction_4__$0 );
    tmp_list_contraction_4__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_4__contraction_result );
    tmp_list_contraction_4__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_4__iter_value_0 );
    tmp_list_contraction_4__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_17;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    outline_result_4:;
    tmp_args_element_name_35 = tmp_outline_return_value_4;
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 661;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 661;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    {
        PyObject *old = var_idx_result;
        var_idx_result = tmp_assign_source_107;
        Py_XDECREF( old );
    }

    branch_end_18:;
    tmp_called_instance_10 = var_input_list;

    CHECK_OBJECT( tmp_called_instance_10 );
    tmp_args_element_name_37 = var_idx_result;

    CHECK_OBJECT( tmp_args_element_name_37 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 663;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_11 = const_str_chr_44;
    tmp_args_element_name_38 = var_tmp_inputs;

    CHECK_OBJECT( tmp_args_element_name_38 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 664;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_left_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_join, call_args );
    }

    if ( tmp_left_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 664;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_right_name_12 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_left_name_12 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_13 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 664;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    tmp_right_name_13 = var_idx_result;

    CHECK_OBJECT( tmp_right_name_13 );
    tmp_assign_source_112 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 664;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    {
        PyObject *old = var_einsum_str;
        var_einsum_str = tmp_assign_source_112;
        Py_XDECREF( old );
    }

    tmp_assign_source_113 = PyTuple_New( 4 );
    tmp_tuple_element_3 = var_contract_inds;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_113, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_idx_removed;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_113, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_einsum_str;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_113, 2, tmp_tuple_element_3 );
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_input_list;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_tuple_element_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_113 );

        exception_lineno = 666;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    PyTuple_SET_ITEM( tmp_assign_source_113, 3, tmp_tuple_element_3 );
    {
        PyObject *old = var_contraction;
        var_contraction = tmp_assign_source_113;
        Py_XDECREF( old );
    }

    tmp_called_instance_12 = var_contraction_list;

    CHECK_OBJECT( tmp_called_instance_12 );
    tmp_args_element_name_39 = var_contraction;

    CHECK_OBJECT( tmp_args_element_name_39 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 667;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 667;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_sum_sequence_1 = var_cost_list;

    CHECK_OBJECT( tmp_sum_sequence_1 );
    tmp_left_name_14 = BUILTIN_SUM1( tmp_sum_sequence_1 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = const_int_pos_1;
    tmp_assign_source_114 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_opt_cost == NULL );
    var_opt_cost = tmp_assign_source_114;

    tmp_cond_value_8 = var_einsum_call_arg;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_operands;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_contraction_list;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    branch_no_19:;
    tmp_left_name_16 = var_input_subscripts;

    CHECK_OBJECT( tmp_left_name_16 );
    tmp_right_name_15 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_left_name_15 = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_15 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = var_output_subscript;

    CHECK_OBJECT( tmp_right_name_16 );
    tmp_assign_source_115 = BINARY_OPERATION_ADD( tmp_left_name_15, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_15 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_overall_contraction == NULL );
    var_overall_contraction = tmp_assign_source_115;

    tmp_left_name_17 = var_naive_cost;

    CHECK_OBJECT( tmp_left_name_17 );
    tmp_right_name_17 = var_opt_cost;

    CHECK_OBJECT( tmp_right_name_17 );
    tmp_assign_source_116 = BINARY_OPERATION_TRUEDIV( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_speedup == NULL );
    var_speedup = tmp_assign_source_116;

    tmp_called_name_22 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_22 != NULL );
    tmp_args_element_name_40 = var_size_list;

    CHECK_OBJECT( tmp_args_element_name_40 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 679;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_max_i == NULL );
    var_max_i = tmp_assign_source_117;

    tmp_left_name_18 = const_str_digest_ba77a0d442bad3bfe694aaff76f69205;
    tmp_right_name_18 = var_overall_contraction;

    CHECK_OBJECT( tmp_right_name_18 );
    tmp_assign_source_118 = BINARY_OPERATION_REMAINDER( tmp_left_name_18, tmp_right_name_18 );
    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_path_print == NULL );
    var_path_print = tmp_assign_source_118;

    tmp_left_name_19 = var_path_print;

    CHECK_OBJECT( tmp_left_name_19 );
    tmp_left_name_20 = const_str_digest_11664ec53a5e5dce769679475095a96e;
    tmp_len_arg_13 = var_indices;

    CHECK_OBJECT( tmp_len_arg_13 );
    tmp_right_name_20 = BUILTIN_LEN( tmp_len_arg_13 );
    if ( tmp_right_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_19 = BINARY_OPERATION_REMAINDER( tmp_left_name_20, tmp_right_name_20 );
    Py_DECREF( tmp_right_name_20 );
    if ( tmp_right_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_19, tmp_right_name_19 );
    tmp_assign_source_119 = tmp_left_name_19;
    Py_DECREF( tmp_right_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_119;

    tmp_left_name_21 = var_path_print;

    CHECK_OBJECT( tmp_left_name_21 );
    tmp_left_name_22 = const_str_digest_7610632d8029595d61ca9adbe764df74;
    tmp_called_name_23 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_23 != NULL );
    tmp_args_element_name_41 = var_scale_list;

    CHECK_OBJECT( tmp_args_element_name_41 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 683;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_right_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    if ( tmp_right_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_22, tmp_right_name_22 );
    Py_DECREF( tmp_right_name_22 );
    if ( tmp_right_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
    tmp_assign_source_120 = tmp_left_name_21;
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_120;

    tmp_left_name_23 = var_path_print;

    CHECK_OBJECT( tmp_left_name_23 );
    tmp_left_name_24 = const_str_digest_b62b251e30c55c152112d08e8bb15e52;
    tmp_right_name_24 = var_naive_cost;

    CHECK_OBJECT( tmp_right_name_24 );
    tmp_right_name_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_24, tmp_right_name_24 );
    if ( tmp_right_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 684;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_23, tmp_right_name_23 );
    tmp_assign_source_121 = tmp_left_name_23;
    Py_DECREF( tmp_right_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 684;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_121;

    tmp_left_name_25 = var_path_print;

    CHECK_OBJECT( tmp_left_name_25 );
    tmp_left_name_26 = const_str_digest_e85b8bb630e437a978cce33a73ab3e23;
    tmp_right_name_26 = var_opt_cost;

    CHECK_OBJECT( tmp_right_name_26 );
    tmp_right_name_25 = BINARY_OPERATION_REMAINDER( tmp_left_name_26, tmp_right_name_26 );
    if ( tmp_right_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_25, tmp_right_name_25 );
    tmp_assign_source_122 = tmp_left_name_25;
    Py_DECREF( tmp_right_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_122;

    tmp_left_name_27 = var_path_print;

    CHECK_OBJECT( tmp_left_name_27 );
    tmp_left_name_28 = const_str_digest_026fb1843d57cefb39a75fd56f107dea;
    tmp_right_name_28 = var_speedup;

    CHECK_OBJECT( tmp_right_name_28 );
    tmp_right_name_27 = BINARY_OPERATION_REMAINDER( tmp_left_name_28, tmp_right_name_28 );
    if ( tmp_right_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_27, tmp_right_name_27 );
    tmp_assign_source_123 = tmp_left_name_27;
    Py_DECREF( tmp_right_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_123;

    tmp_left_name_29 = var_path_print;

    CHECK_OBJECT( tmp_left_name_29 );
    tmp_left_name_30 = const_str_digest_837590eb849cf650350c8cbb41ba5fe0;
    tmp_right_name_30 = var_max_i;

    CHECK_OBJECT( tmp_right_name_30 );
    tmp_right_name_29 = BINARY_OPERATION_REMAINDER( tmp_left_name_30, tmp_right_name_30 );
    if ( tmp_right_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 687;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_29, tmp_right_name_29 );
    tmp_assign_source_124 = tmp_left_name_29;
    Py_DECREF( tmp_right_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 687;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_124;

    tmp_left_name_31 = var_path_print;

    CHECK_OBJECT( tmp_left_name_31 );
    tmp_right_name_31 = const_str_digest_dfb5456781148b3ae08ed9b916e88c5e;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_31, tmp_right_name_31 );
    tmp_assign_source_125 = tmp_left_name_31;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 688;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_125;

    tmp_left_name_32 = var_path_print;

    CHECK_OBJECT( tmp_left_name_32 );
    tmp_right_name_32 = const_str_digest_1c585c7fafdaccb128085f558a2984e4;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_32, tmp_right_name_32 );
    tmp_assign_source_126 = tmp_left_name_32;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 689;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_126;

    tmp_left_name_33 = var_path_print;

    CHECK_OBJECT( tmp_left_name_33 );
    tmp_right_name_33 = const_str_digest_df8039332f386aa3444971ccdb53ddc6;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_33, tmp_right_name_33 );
    tmp_assign_source_127 = tmp_left_name_33;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    var_path_print = tmp_assign_source_127;

    tmp_called_name_24 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_42 = var_contraction_list;

    CHECK_OBJECT( tmp_args_element_name_42 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 692;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_iter_arg_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    if ( tmp_iter_arg_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_128 = MAKE_ITERATOR( tmp_iter_arg_17 );
    Py_DECREF( tmp_iter_arg_17 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_128;

    // Tried code:
    loop_start_10:;
    tmp_next_source_10 = tmp_for_loop_6__for_iterator;

    CHECK_OBJECT( tmp_next_source_10 );
    tmp_assign_source_129 = ITERATOR_NEXT( tmp_next_source_10 );
    if ( tmp_assign_source_129 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_10;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
            exception_lineno = 692;
            goto try_except_handler_25;
        }
    }

    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_129;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_18 = tmp_for_loop_6__iter_value;

    CHECK_OBJECT( tmp_iter_arg_18 );
    tmp_assign_source_130 = MAKE_ITERATOR( tmp_iter_arg_18 );
    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_tuple_unpack_7__source_iter;
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_130;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_20 = tmp_tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_20 );
    tmp_assign_source_131 = UNPACK_NEXT( tmp_unpack_20, 0 );
    if ( tmp_assign_source_131 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 692;
        goto try_except_handler_27;
    }
    {
        PyObject *old = tmp_tuple_unpack_7__element_1;
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_131;
        Py_XDECREF( old );
    }

    tmp_unpack_21 = tmp_tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_21 );
    tmp_assign_source_132 = UNPACK_NEXT( tmp_unpack_21, 1 );
    if ( tmp_assign_source_132 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 692;
        goto try_except_handler_27;
    }
    {
        PyObject *old = tmp_tuple_unpack_7__element_2;
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_132;
        Py_XDECREF( old );
    }

    tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 692;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 692;
        goto try_except_handler_27;
    }
    goto try_end_20;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_26;
    // End of try:
    try_end_20:;
    goto try_end_21;
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

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_25;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    tmp_assign_source_133 = tmp_tuple_unpack_7__element_1;

    CHECK_OBJECT( tmp_assign_source_133 );
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_133;
        Py_INCREF( var_n );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    tmp_assign_source_134 = tmp_tuple_unpack_7__element_2;

    CHECK_OBJECT( tmp_assign_source_134 );
    {
        PyObject *old = var_contraction;
        var_contraction = tmp_assign_source_134;
        Py_INCREF( var_contraction );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    // Tried code:
    tmp_iter_arg_19 = var_contraction;

    CHECK_OBJECT( tmp_iter_arg_19 );
    tmp_assign_source_135 = MAKE_ITERATOR( tmp_iter_arg_19 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 693;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_28;
    }
    {
        PyObject *old = tmp_tuple_unpack_8__source_iter;
        tmp_tuple_unpack_8__source_iter = tmp_assign_source_135;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_22 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_22 );
    tmp_assign_source_136 = UNPACK_NEXT( tmp_unpack_22, 0 );
    if ( tmp_assign_source_136 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 693;
        goto try_except_handler_29;
    }
    {
        PyObject *old = tmp_tuple_unpack_8__element_1;
        tmp_tuple_unpack_8__element_1 = tmp_assign_source_136;
        Py_XDECREF( old );
    }

    tmp_unpack_23 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_23 );
    tmp_assign_source_137 = UNPACK_NEXT( tmp_unpack_23, 1 );
    if ( tmp_assign_source_137 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 693;
        goto try_except_handler_29;
    }
    {
        PyObject *old = tmp_tuple_unpack_8__element_2;
        tmp_tuple_unpack_8__element_2 = tmp_assign_source_137;
        Py_XDECREF( old );
    }

    tmp_unpack_24 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_24 );
    tmp_assign_source_138 = UNPACK_NEXT( tmp_unpack_24, 2 );
    if ( tmp_assign_source_138 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 693;
        goto try_except_handler_29;
    }
    {
        PyObject *old = tmp_tuple_unpack_8__element_3;
        tmp_tuple_unpack_8__element_3 = tmp_assign_source_138;
        Py_XDECREF( old );
    }

    tmp_unpack_25 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_25 );
    tmp_assign_source_139 = UNPACK_NEXT( tmp_unpack_25, 3 );
    if ( tmp_assign_source_139 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 693;
        goto try_except_handler_29;
    }
    {
        PyObject *old = tmp_tuple_unpack_8__element_4;
        tmp_tuple_unpack_8__element_4 = tmp_assign_source_139;
        Py_XDECREF( old );
    }

    tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;

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

                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
                exception_lineno = 693;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        exception_lineno = 693;
        goto try_except_handler_29;
    }
    goto try_end_22;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_28;
    // End of try:
    try_end_22:;
    goto try_end_23;
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

    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_3 );
    tmp_tuple_unpack_8__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_4 );
    tmp_tuple_unpack_8__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_25;
    // End of try:
    try_end_23:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    tmp_assign_source_140 = tmp_tuple_unpack_8__element_1;

    CHECK_OBJECT( tmp_assign_source_140 );
    {
        PyObject *old = var_inds;
        var_inds = tmp_assign_source_140;
        Py_INCREF( var_inds );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    tmp_assign_source_141 = tmp_tuple_unpack_8__element_2;

    CHECK_OBJECT( tmp_assign_source_141 );
    {
        PyObject *old = var_idx_rm;
        var_idx_rm = tmp_assign_source_141;
        Py_INCREF( var_idx_rm );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    tmp_assign_source_142 = tmp_tuple_unpack_8__element_3;

    CHECK_OBJECT( tmp_assign_source_142 );
    {
        PyObject *old = var_einsum_str;
        var_einsum_str = tmp_assign_source_142;
        Py_INCREF( var_einsum_str );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_8__element_3 );
    tmp_tuple_unpack_8__element_3 = NULL;

    tmp_assign_source_143 = tmp_tuple_unpack_8__element_4;

    CHECK_OBJECT( tmp_assign_source_143 );
    {
        PyObject *old = var_remaining;
        var_remaining = tmp_assign_source_143;
        Py_INCREF( var_remaining );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_8__element_4 );
    tmp_tuple_unpack_8__element_4 = NULL;

    tmp_called_instance_13 = const_str_chr_44;
    tmp_args_element_name_43 = var_remaining;

    CHECK_OBJECT( tmp_args_element_name_43 );
    frame_2bccb313e50ee25c7103711e3916f37c->m_frame.f_lineno = 694;
    {
        PyObject *call_args[] = { tmp_args_element_name_43 };
        tmp_left_name_35 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_join, call_args );
    }

    if ( tmp_left_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 694;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    tmp_right_name_34 = const_str_digest_8c60b5f1530b27d30f3986bb8e33e14a;
    tmp_left_name_34 = BINARY_OPERATION_ADD( tmp_left_name_35, tmp_right_name_34 );
    Py_DECREF( tmp_left_name_35 );
    if ( tmp_left_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 694;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    tmp_right_name_35 = var_output_subscript;

    CHECK_OBJECT( tmp_right_name_35 );
    tmp_assign_source_144 = BINARY_OPERATION_ADD( tmp_left_name_34, tmp_right_name_35 );
    Py_DECREF( tmp_left_name_34 );
    if ( tmp_assign_source_144 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 694;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    {
        PyObject *old = var_remaining_str;
        var_remaining_str = tmp_assign_source_144;
        Py_XDECREF( old );
    }

    tmp_assign_source_145 = PyTuple_New( 3 );
    tmp_subscribed_name_11 = var_scale_list;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = var_n;

    CHECK_OBJECT( tmp_subscript_name_11 );
    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_145 );

        exception_lineno = 695;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    PyTuple_SET_ITEM( tmp_assign_source_145, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_einsum_str;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_145, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_remaining_str;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_145, 2, tmp_tuple_element_5 );
    {
        PyObject *old = var_path_run;
        var_path_run = tmp_assign_source_145;
        Py_XDECREF( old );
    }

    tmp_left_name_36 = var_path_print;

    if ( tmp_left_name_36 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_print" );
        exception_tb = NULL;

        exception_lineno = 696;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }

    tmp_left_name_37 = const_str_digest_3e3fe43ecdde34b94f67d6d2a41ef338;
    tmp_right_name_37 = var_path_run;

    CHECK_OBJECT( tmp_right_name_37 );
    tmp_right_name_36 = BINARY_OPERATION_REMAINDER( tmp_left_name_37, tmp_right_name_37 );
    if ( tmp_right_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 696;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_36, tmp_right_name_36 );
    tmp_assign_source_146 = tmp_left_name_36;
    Py_DECREF( tmp_right_name_36 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 696;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    var_path_print = tmp_assign_source_146;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto try_except_handler_25;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    tmp_left_name_38 = LIST_COPY( const_list_str_plain_einsum_path_list );
    tmp_right_name_38 = var_path;

    if ( tmp_right_name_38 == NULL )
    {
        Py_DECREF( tmp_left_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;

        exception_lineno = 698;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_147 = BINARY_OPERATION_ADD( tmp_left_name_38, tmp_right_name_38 );
    Py_DECREF( tmp_left_name_38 );
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 698;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_path;
        var_path = tmp_assign_source_147;
        Py_XDECREF( old );
    }

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_path;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_path_print;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "path_print" );
        exception_tb = NULL;

        exception_lineno = 699;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooNooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bccb313e50ee25c7103711e3916f37c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bccb313e50ee25c7103711e3916f37c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2bccb313e50ee25c7103711e3916f37c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2bccb313e50ee25c7103711e3916f37c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2bccb313e50ee25c7103711e3916f37c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2bccb313e50ee25c7103711e3916f37c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2bccb313e50ee25c7103711e3916f37c,
        type_description_1,
        par_operands,
        par_kwargs,
        var_valid_contract_kwargs,
        var_k,
        var_v,
        var_unknown_kwargs,
        var_path_type,
        var_memory_limit,
        var_einsum_call_arg,
        var_input_subscripts,
        var_output_subscript,
        var_subscripts,
        var_input_list,
        var_x,
        var_input_sets,
        var_output_set,
        var_indices,
        var_dimension_dict,
        var_tnum,
        var_term,
        var_sh,
        var_cnum,
        var_char,
        var_dim,
        var_size_list,
        var_max_size,
        var_memory_arg,
        var_naive_cost,
        var_indices_in_input,
        var_mult,
        var_path,
        var_cost_list,
        var_scale_list,
        var_contraction_list,
        var_contract_inds,
        var_contract,
        var_out_inds,
        var_idx_removed,
        var_idx_contract,
        var_cost,
        var_tmp_inputs,
        var_idx_result,
        var_ind,
        var_sort_result,
        var_einsum_str,
        var_contraction,
        var_opt_cost,
        var_overall_contraction,
        NULL,
        var_speedup,
        var_max_i,
        var_path_print,
        var_n,
        var_inds,
        var_idx_rm,
        var_remaining,
        var_remaining_str,
        var_path_run
    );


    // Release cached frame.
    if ( frame_2bccb313e50ee25c7103711e3916f37c == cache_frame_2bccb313e50ee25c7103711e3916f37c )
    {
        Py_DECREF( frame_2bccb313e50ee25c7103711e3916f37c );
    }
    cache_frame_2bccb313e50ee25c7103711e3916f37c = NULL;

    assertFrameObject( frame_2bccb313e50ee25c7103711e3916f37c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_operands );
    Py_DECREF( par_operands );
    par_operands = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_valid_contract_kwargs );
    Py_DECREF( var_valid_contract_kwargs );
    var_valid_contract_kwargs = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_unknown_kwargs );
    Py_DECREF( var_unknown_kwargs );
    var_unknown_kwargs = NULL;

    Py_XDECREF( var_path_type );
    var_path_type = NULL;

    Py_XDECREF( var_memory_limit );
    var_memory_limit = NULL;

    CHECK_OBJECT( (PyObject *)var_einsum_call_arg );
    Py_DECREF( var_einsum_call_arg );
    var_einsum_call_arg = NULL;

    CHECK_OBJECT( (PyObject *)var_input_subscripts );
    Py_DECREF( var_input_subscripts );
    var_input_subscripts = NULL;

    CHECK_OBJECT( (PyObject *)var_output_subscript );
    Py_DECREF( var_output_subscript );
    var_output_subscript = NULL;

    CHECK_OBJECT( (PyObject *)var_subscripts );
    Py_DECREF( var_subscripts );
    var_subscripts = NULL;

    CHECK_OBJECT( (PyObject *)var_input_list );
    Py_DECREF( var_input_list );
    var_input_list = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_input_sets );
    var_input_sets = NULL;

    CHECK_OBJECT( (PyObject *)var_output_set );
    Py_DECREF( var_output_set );
    var_output_set = NULL;

    CHECK_OBJECT( (PyObject *)var_indices );
    Py_DECREF( var_indices );
    var_indices = NULL;

    CHECK_OBJECT( (PyObject *)var_dimension_dict );
    Py_DECREF( var_dimension_dict );
    var_dimension_dict = NULL;

    Py_XDECREF( var_tnum );
    var_tnum = NULL;

    Py_XDECREF( var_term );
    var_term = NULL;

    Py_XDECREF( var_sh );
    var_sh = NULL;

    Py_XDECREF( var_cnum );
    var_cnum = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    CHECK_OBJECT( (PyObject *)var_size_list );
    Py_DECREF( var_size_list );
    var_size_list = NULL;

    CHECK_OBJECT( (PyObject *)var_max_size );
    Py_DECREF( var_max_size );
    var_max_size = NULL;

    Py_XDECREF( var_memory_arg );
    var_memory_arg = NULL;

    CHECK_OBJECT( (PyObject *)var_naive_cost );
    Py_DECREF( var_naive_cost );
    var_naive_cost = NULL;

    CHECK_OBJECT( (PyObject *)var_indices_in_input );
    Py_DECREF( var_indices_in_input );
    var_indices_in_input = NULL;

    CHECK_OBJECT( (PyObject *)var_mult );
    Py_DECREF( var_mult );
    var_mult = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    CHECK_OBJECT( (PyObject *)var_cost_list );
    Py_DECREF( var_cost_list );
    var_cost_list = NULL;

    CHECK_OBJECT( (PyObject *)var_scale_list );
    Py_DECREF( var_scale_list );
    var_scale_list = NULL;

    CHECK_OBJECT( (PyObject *)var_contraction_list );
    Py_DECREF( var_contraction_list );
    var_contraction_list = NULL;

    Py_XDECREF( var_contract_inds );
    var_contract_inds = NULL;

    Py_XDECREF( var_contract );
    var_contract = NULL;

    Py_XDECREF( var_out_inds );
    var_out_inds = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_tmp_inputs );
    var_tmp_inputs = NULL;

    Py_XDECREF( var_idx_result );
    var_idx_result = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_sort_result );
    var_sort_result = NULL;

    Py_XDECREF( var_einsum_str );
    var_einsum_str = NULL;

    Py_XDECREF( var_contraction );
    var_contraction = NULL;

    CHECK_OBJECT( (PyObject *)var_opt_cost );
    Py_DECREF( var_opt_cost );
    var_opt_cost = NULL;

    Py_XDECREF( var_overall_contraction );
    var_overall_contraction = NULL;

    Py_XDECREF( var_speedup );
    var_speedup = NULL;

    Py_XDECREF( var_max_i );
    var_max_i = NULL;

    Py_XDECREF( var_path_print );
    var_path_print = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_idx_rm );
    var_idx_rm = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_remaining_str );
    var_remaining_str = NULL;

    Py_XDECREF( var_path_run );
    var_path_run = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_operands );
    Py_DECREF( par_operands );
    par_operands = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_valid_contract_kwargs );
    Py_DECREF( var_valid_contract_kwargs );
    var_valid_contract_kwargs = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_unknown_kwargs );
    var_unknown_kwargs = NULL;

    Py_XDECREF( var_path_type );
    var_path_type = NULL;

    Py_XDECREF( var_memory_limit );
    var_memory_limit = NULL;

    Py_XDECREF( var_einsum_call_arg );
    var_einsum_call_arg = NULL;

    Py_XDECREF( var_input_subscripts );
    var_input_subscripts = NULL;

    Py_XDECREF( var_output_subscript );
    var_output_subscript = NULL;

    Py_XDECREF( var_subscripts );
    var_subscripts = NULL;

    Py_XDECREF( var_input_list );
    var_input_list = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_input_sets );
    var_input_sets = NULL;

    Py_XDECREF( var_output_set );
    var_output_set = NULL;

    Py_XDECREF( var_indices );
    var_indices = NULL;

    Py_XDECREF( var_dimension_dict );
    var_dimension_dict = NULL;

    Py_XDECREF( var_tnum );
    var_tnum = NULL;

    Py_XDECREF( var_term );
    var_term = NULL;

    Py_XDECREF( var_sh );
    var_sh = NULL;

    Py_XDECREF( var_cnum );
    var_cnum = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_size_list );
    var_size_list = NULL;

    Py_XDECREF( var_max_size );
    var_max_size = NULL;

    Py_XDECREF( var_memory_arg );
    var_memory_arg = NULL;

    Py_XDECREF( var_naive_cost );
    var_naive_cost = NULL;

    Py_XDECREF( var_indices_in_input );
    var_indices_in_input = NULL;

    Py_XDECREF( var_mult );
    var_mult = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_cost_list );
    var_cost_list = NULL;

    Py_XDECREF( var_scale_list );
    var_scale_list = NULL;

    Py_XDECREF( var_contraction_list );
    var_contraction_list = NULL;

    Py_XDECREF( var_contract_inds );
    var_contract_inds = NULL;

    Py_XDECREF( var_contract );
    var_contract = NULL;

    Py_XDECREF( var_out_inds );
    var_out_inds = NULL;

    Py_XDECREF( var_idx_removed );
    var_idx_removed = NULL;

    Py_XDECREF( var_idx_contract );
    var_idx_contract = NULL;

    Py_XDECREF( var_cost );
    var_cost = NULL;

    Py_XDECREF( var_tmp_inputs );
    var_tmp_inputs = NULL;

    Py_XDECREF( var_idx_result );
    var_idx_result = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_sort_result );
    var_sort_result = NULL;

    Py_XDECREF( var_einsum_str );
    var_einsum_str = NULL;

    Py_XDECREF( var_contraction );
    var_contraction = NULL;

    Py_XDECREF( var_opt_cost );
    var_opt_cost = NULL;

    Py_XDECREF( var_overall_contraction );
    var_overall_contraction = NULL;

    Py_XDECREF( var_speedup );
    var_speedup = NULL;

    Py_XDECREF( var_max_i );
    var_max_i = NULL;

    Py_XDECREF( var_path_print );
    var_path_print = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_idx_rm );
    var_idx_rm = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_remaining_str );
    var_remaining_str = NULL;

    Py_XDECREF( var_path_run );
    var_path_run = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_6_einsum_path );
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


static PyObject *impl_numpy$core$einsumfunc$$$function_7_einsum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_operands = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *var_optimize_arg = NULL;
    PyObject *var_valid_einsum_kwargs = NULL;
    PyObject *var_einsum_kwargs = NULL;
    PyObject *var_valid_contract_kwargs = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *var_unknown_kwargs = NULL;
    PyObject *var_specified_out = NULL;
    PyObject *var_out_array = NULL;
    PyObject *var_contraction_list = NULL;
    PyObject *var_num = NULL;
    PyObject *var_contraction = NULL;
    PyObject *var_inds = NULL;
    PyObject *var_idx_rm = NULL;
    PyObject *var_einsum_str = NULL;
    PyObject *var_remaining = NULL;
    PyObject *var_tmp_operands = NULL;
    PyObject *var_x = NULL;
    PyObject *var_new_view = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_In_1;
    int tmp_cmp_NotIn_1;
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    PyObject *tmp_dircall_arg4_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0d6efdcbc3710c2f0d3ea98eebf9e458 = NULL;

    struct Nuitka_FrameObject *frame_0d6efdcbc3710c2f0d3ea98eebf9e458;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0d6efdcbc3710c2f0d3ea98eebf9e458, codeobj_0d6efdcbc3710c2f0d3ea98eebf9e458, module_numpy$core$einsumfunc, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458 = cache_frame_0d6efdcbc3710c2f0d3ea98eebf9e458;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 944;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_optimize_false_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 944;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_optimize_arg == NULL );
    var_optimize_arg = tmp_assign_source_1;

    tmp_compare_left_1 = var_optimize_arg;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_False;
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
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_c_einsum );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_einsum );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "c_einsum" );
        exception_tb = NULL;

        exception_lineno = 948;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_operands;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 948;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_2 = LIST_COPY( const_list_f2cfa46d54fc751359627bd1f65900ac_list );
    assert( var_valid_einsum_kwargs == NULL );
    var_valid_einsum_kwargs = tmp_assign_source_2;

    // Tried code:
    tmp_called_instance_2 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 951;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 951;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 951;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_dictcontraction_1__$0 == NULL );
    tmp_dictcontraction_1__$0 = tmp_assign_source_4;

    tmp_assign_source_5 = PyDict_New();
    assert( tmp_dictcontraction_1__contraction == NULL );
    tmp_dictcontraction_1__contraction = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_dictcontraction_1__$0;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 951;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_dictcontraction_1__iter_value_0;
        tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 951;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
        tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;

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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 951;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
        tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;

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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 951;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
        tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;

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

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 951;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 951;
        goto try_except_handler_5;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_dictcontraction$tuple_unpack_1__source_iter );
    tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_1 );
    tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_2 );
    tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_dictcontraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_dictcontraction$tuple_unpack_1__source_iter );
    tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = outline_0_var_k;
        outline_0_var_k = tmp_assign_source_10;
        Py_INCREF( outline_0_var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_1 );
    tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_11 = tmp_dictcontraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = outline_0_var_v;
        outline_0_var_v = tmp_assign_source_11;
        Py_INCREF( outline_0_var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_2 );
    tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_2 = outline_0_var_k;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = var_valid_einsum_kwargs;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictset_value = outline_0_var_v;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = tmp_dictcontraction_1__contraction;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = outline_0_var_k;

    CHECK_OBJECT( tmp_dictset_key );
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 951;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 951;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_dictcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
    Py_DECREF( tmp_dictcontraction_1__$0 );
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
    Py_DECREF( tmp_dictcontraction_1__contraction );
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
    tmp_dictcontraction_1__iter_value_0 = NULL;

    goto try_return_handler_2;
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

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
    Py_DECREF( tmp_dictcontraction_1__$0 );
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
    Py_DECREF( tmp_dictcontraction_1__contraction );
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
    tmp_dictcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    Py_XDECREF( outline_0_var_v );
    outline_0_var_v = NULL;

    goto outline_result_1;
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

    Py_XDECREF( outline_0_var_k );
    outline_0_var_k = NULL;

    Py_XDECREF( outline_0_var_v );
    outline_0_var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
    return NULL;
    outline_exception_1:;
    exception_lineno = 951;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_3 = tmp_outline_return_value_1;
    assert( var_einsum_kwargs == NULL );
    var_einsum_kwargs = tmp_assign_source_3;

    tmp_left_name_1 = LIST_COPY( const_list_str_plain_optimize_list );
    tmp_right_name_1 = var_valid_einsum_kwargs;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_12 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 955;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_valid_contract_kwargs == NULL );
    var_valid_contract_kwargs = tmp_assign_source_12;

    // Tried code:
    tmp_called_instance_3 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 956;
    tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_items );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 956;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 956;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_14;

    tmp_assign_source_15 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_15;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 956;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_4 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 956;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__source_iter;
        tmp_list_contraction$tuple_unpack_1__source_iter = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_list_contraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_18 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 956;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_1;
        tmp_list_contraction$tuple_unpack_1__element_1 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_list_contraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_4, 1 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 956;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_2;
        tmp_list_contraction$tuple_unpack_1__element_2 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_list_contraction$tuple_unpack_1__source_iter;

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

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 956;
                goto try_except_handler_8;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 956;
        goto try_except_handler_8;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_20 = tmp_list_contraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_20;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_21 = tmp_list_contraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_21;
        Py_INCREF( var_v );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_3 = var_k;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = var_valid_contract_kwargs;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = var_k;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 956;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 956;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
    return NULL;
    outline_result_2:;
    tmp_assign_source_13 = tmp_outline_return_value_2;
    assert( var_unknown_kwargs == NULL );
    var_unknown_kwargs = tmp_assign_source_13;

    tmp_len_arg_1 = var_unknown_kwargs;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_cond_value_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 959;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 959;
        type_description_1 = "ooooooooooooooooooooo";
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
    tmp_left_name_2 = const_str_digest_8e49326f7690ff05ca40ba77fd983d5e;
    tmp_right_name_2 = var_unknown_kwargs;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 960;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 960;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 960;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assign_source_22 = Py_False;
    assert( var_specified_out == NULL );
    Py_INCREF( tmp_assign_source_22 );
    var_specified_out = tmp_assign_source_22;

    tmp_called_instance_4 = var_einsum_kwargs;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 965;
    tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_out_none_tuple, 0 ) );

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 965;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_out_array == NULL );
    var_out_array = tmp_assign_source_23;

    tmp_compare_left_4 = var_out_array;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_24 = Py_True;
    {
        PyObject *old = var_specified_out;
        assert( old != NULL );
        var_specified_out = tmp_assign_source_24;
        Py_INCREF( var_specified_out );
        Py_DECREF( old );
    }

    branch_no_5:;
    // Tried code:
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_path );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_path );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "einsum_path" );
        exception_tb = NULL;

        exception_lineno = 970;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_9;
    }

    tmp_dircall_arg2_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = var_optimize_arg;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_optimize;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = Py_True;
    tmp_dict_key_2 = const_str_plain_einsum_call;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_2 = par_operands;

    CHECK_OBJECT( tmp_dircall_arg3_2 );
    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
        tmp_iter_arg_5 = impl___internal__$$$function_11_complex_call_helper_keywords_star_list( dir_call_args );
    }
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 970;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 970;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;

    // Tried code:
    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_5, 0 );
    if ( tmp_assign_source_26 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 970;
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;

    tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_6, 1 );
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 970;
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;

    tmp_iterator_name_3 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 970;
                goto try_except_handler_10;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 970;
        goto try_except_handler_10;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_28 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_28 );
    {
        PyObject *old = par_operands;
        assert( old != NULL );
        par_operands = tmp_assign_source_28;
        Py_INCREF( par_operands );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_29 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_29 );
    assert( var_contraction_list == NULL );
    Py_INCREF( tmp_assign_source_29 );
    var_contraction_list = tmp_assign_source_29;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_1 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_1 = var_contraction_list;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 973;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 973;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 973;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_30;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_31 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 973;
            goto try_except_handler_11;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_7 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_7 );
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 973;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_7, 0 );
    if ( tmp_assign_source_33 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 973;
        goto try_except_handler_13;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_8, 1 );
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 973;
        goto try_except_handler_13;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_34;
        Py_XDECREF( old );
    }

    tmp_iterator_name_4 = tmp_tuple_unpack_2__source_iter;

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

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 973;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 973;
        goto try_except_handler_13;
    }
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_12;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_35 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_35 );
    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_35;
        Py_INCREF( var_num );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_36 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_36 );
    {
        PyObject *old = var_contraction;
        var_contraction = tmp_assign_source_36;
        Py_INCREF( var_contraction );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Tried code:
    tmp_iter_arg_8 = var_contraction;

    CHECK_OBJECT( tmp_iter_arg_8 );
    tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 974;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter;
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_9, 0 );
    if ( tmp_assign_source_38 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 974;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_1;
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_38;
        Py_XDECREF( old );
    }

    tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_10, 1 );
    if ( tmp_assign_source_39 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 974;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_2;
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_39;
        Py_XDECREF( old );
    }

    tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_11, 2 );
    if ( tmp_assign_source_40 == NULL )
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 974;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_3;
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_12 );
    tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_12, 3 );
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


        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 974;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_4;
        tmp_tuple_unpack_3__element_4 = tmp_assign_source_41;
        Py_XDECREF( old );
    }

    tmp_iterator_name_5 = tmp_tuple_unpack_3__source_iter;

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

                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 974;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooooooooooo";
        exception_lineno = 974;
        goto try_except_handler_15;
    }
    goto try_end_9;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_9:;
    goto try_end_10;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_11;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_42 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_42 );
    {
        PyObject *old = var_inds;
        var_inds = tmp_assign_source_42;
        Py_INCREF( var_inds );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_43 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_43 );
    {
        PyObject *old = var_idx_rm;
        var_idx_rm = tmp_assign_source_43;
        Py_INCREF( var_idx_rm );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_assign_source_44 = tmp_tuple_unpack_3__element_3;

    CHECK_OBJECT( tmp_assign_source_44 );
    {
        PyObject *old = var_einsum_str;
        var_einsum_str = tmp_assign_source_44;
        Py_INCREF( var_einsum_str );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    tmp_assign_source_45 = tmp_tuple_unpack_3__element_4;

    CHECK_OBJECT( tmp_assign_source_45 );
    {
        PyObject *old = var_remaining;
        var_remaining = tmp_assign_source_45;
        Py_INCREF( var_remaining );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    tmp_assign_source_46 = PyList_New( 0 );
    {
        PyObject *old = var_tmp_operands;
        var_tmp_operands = tmp_assign_source_46;
        Py_XDECREF( old );
    }

    tmp_iter_arg_9 = var_inds;

    CHECK_OBJECT( tmp_iter_arg_9 );
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_9 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 976;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_47;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_48 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 976;
            goto try_except_handler_16;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_48;
        Py_XDECREF( old );
    }

    tmp_assign_source_49 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_49 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_49;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_tmp_operands;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 977;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    tmp_called_instance_5 = par_operands;

    CHECK_OBJECT( tmp_called_instance_5 );
    tmp_args_element_name_3 = var_x;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 977;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_pop, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 977;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 977;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 977;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 976;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_11;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_and_left_value_1 = var_specified_out;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 980;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
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
    tmp_left_name_3 = var_num;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_compexpr_left_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 980;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_len_arg_2 = var_contraction_list;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 980;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 980;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
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

        exception_lineno = 980;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_ass_subvalue_1 = var_out_array;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_einsum_kwargs;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_plain_out;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 981;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    branch_no_6:;
    tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_c_einsum );

    if (unlikely( tmp_dircall_arg1_3 == NULL ))
    {
        tmp_dircall_arg1_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_einsum );
    }

    if ( tmp_dircall_arg1_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "c_einsum" );
        exception_tb = NULL;

        exception_lineno = 984;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }

    tmp_dircall_arg2_3 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_einsum_str;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_3, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_3 = var_tmp_operands;

    CHECK_OBJECT( tmp_dircall_arg3_3 );
    tmp_dircall_arg4_1 = var_einsum_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_3 );
    Py_INCREF( tmp_dircall_arg3_3 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3, tmp_dircall_arg3_3, tmp_dircall_arg4_1};
        tmp_assign_source_50 = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 984;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = var_new_view;
        var_new_view = tmp_assign_source_50;
        Py_XDECREF( old );
    }

    tmp_called_instance_6 = par_operands;

    CHECK_OBJECT( tmp_called_instance_6 );
    tmp_args_element_name_4 = var_new_view;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame.f_lineno = 987;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 987;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_unused );
    CHECK_OBJECT( var_tmp_operands );
    Py_DECREF( var_tmp_operands );
    var_tmp_operands = NULL;

    CHECK_OBJECT( var_new_view );
    Py_DECREF( var_new_view );
    var_new_view = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 973;
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_3 = var_specified_out;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 990;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_return_value = var_out_array;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_subscribed_name_1 = par_operands;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 993;
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0d6efdcbc3710c2f0d3ea98eebf9e458, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0d6efdcbc3710c2f0d3ea98eebf9e458->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0d6efdcbc3710c2f0d3ea98eebf9e458, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0d6efdcbc3710c2f0d3ea98eebf9e458,
        type_description_1,
        par_operands,
        par_kwargs,
        var_optimize_arg,
        var_valid_einsum_kwargs,
        var_einsum_kwargs,
        var_valid_contract_kwargs,
        var_k,
        var_v,
        var_unknown_kwargs,
        var_specified_out,
        var_out_array,
        var_contraction_list,
        var_num,
        var_contraction,
        var_inds,
        var_idx_rm,
        var_einsum_str,
        var_remaining,
        var_tmp_operands,
        var_x,
        var_new_view
    );


    // Release cached frame.
    if ( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 == cache_frame_0d6efdcbc3710c2f0d3ea98eebf9e458 )
    {
        Py_DECREF( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 );
    }
    cache_frame_0d6efdcbc3710c2f0d3ea98eebf9e458 = NULL;

    assertFrameObject( frame_0d6efdcbc3710c2f0d3ea98eebf9e458 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_operands );
    Py_DECREF( par_operands );
    par_operands = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_optimize_arg );
    Py_DECREF( var_optimize_arg );
    var_optimize_arg = NULL;

    Py_XDECREF( var_valid_einsum_kwargs );
    var_valid_einsum_kwargs = NULL;

    Py_XDECREF( var_einsum_kwargs );
    var_einsum_kwargs = NULL;

    Py_XDECREF( var_valid_contract_kwargs );
    var_valid_contract_kwargs = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_unknown_kwargs );
    var_unknown_kwargs = NULL;

    Py_XDECREF( var_specified_out );
    var_specified_out = NULL;

    Py_XDECREF( var_out_array );
    var_out_array = NULL;

    Py_XDECREF( var_contraction_list );
    var_contraction_list = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_contraction );
    var_contraction = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_idx_rm );
    var_idx_rm = NULL;

    Py_XDECREF( var_einsum_str );
    var_einsum_str = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_tmp_operands );
    var_tmp_operands = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_new_view );
    var_new_view = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_operands );
    Py_DECREF( par_operands );
    par_operands = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_optimize_arg );
    var_optimize_arg = NULL;

    Py_XDECREF( var_valid_einsum_kwargs );
    var_valid_einsum_kwargs = NULL;

    Py_XDECREF( var_einsum_kwargs );
    var_einsum_kwargs = NULL;

    Py_XDECREF( var_valid_contract_kwargs );
    var_valid_contract_kwargs = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_unknown_kwargs );
    var_unknown_kwargs = NULL;

    Py_XDECREF( var_specified_out );
    var_specified_out = NULL;

    Py_XDECREF( var_out_array );
    var_out_array = NULL;

    Py_XDECREF( var_contraction_list );
    var_contraction_list = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_contraction );
    var_contraction = NULL;

    Py_XDECREF( var_inds );
    var_inds = NULL;

    Py_XDECREF( var_idx_rm );
    var_idx_rm = NULL;

    Py_XDECREF( var_einsum_str );
    var_einsum_str = NULL;

    Py_XDECREF( var_remaining );
    var_remaining = NULL;

    Py_XDECREF( var_tmp_operands );
    var_tmp_operands = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_new_view );
    var_new_view = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$einsumfunc$$$function_7_einsum );
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



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_1__compute_size_by_dict(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_1__compute_size_by_dict,
        const_str_plain__compute_size_by_dict,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd8c9b62a45e966e4573a2ed9413b322,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_a30c1df030532b629808718d9ace1004,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_2__find_contraction(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_2__find_contraction,
        const_str_plain__find_contraction,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58692b4537beec7f7a23c7dc5a6104c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_aba49e18684bfc786d76b032f28e51f5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_3__optimal_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_3__optimal_path,
        const_str_plain__optimal_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b2a4ef5c8018fb97743fa40ec9658c8e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_ec4f2fe34efa162d53cf6f8323abf7a1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_3__optimal_path$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0fa6256eb8da4f66561b989a3b43503c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_4__greedy_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_4__greedy_path,
        const_str_plain__greedy_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f5302981381c8da6bbb88ded2759efdc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_4863c92cb57501986a7f15de46ba3d35,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_4__greedy_path$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62137c43c38d3f87a6bf92845b2e4e1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_5__parse_einsum_input(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_5__parse_einsum_input,
        const_str_plain__parse_einsum_input,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d9b918acf83a8a5031db053489f42c9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_05758ecedfbef83176777c048261903b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_6_einsum_path(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_6_einsum_path,
        const_str_plain_einsum_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2bccb313e50ee25c7103711e3916f37c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_a319344f3e14a19468a90df3bc97e9bc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$einsumfunc$$$function_7_einsum(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$einsumfunc$$$function_7_einsum,
        const_str_plain_einsum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0d6efdcbc3710c2f0d3ea98eebf9e458,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$einsumfunc,
        const_str_digest_4c770c8df4cb1e8934aef45ffaf3e89f,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$einsumfunc =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.einsumfunc",   /* m_name */
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

MOD_INIT_DECL( numpy$core$einsumfunc )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$einsumfunc );
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
    puts("numpy.core.einsumfunc: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.einsumfunc: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$einsumfunc" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$einsumfunc = Py_InitModule4(
        "numpy.core.einsumfunc",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$einsumfunc = PyModule_Create( &mdef_numpy$core$einsumfunc );
#endif

    moduledict_numpy$core$einsumfunc = MODULE_DICT( module_numpy$core$einsumfunc );

    CHECK_OBJECT( module_numpy$core$einsumfunc );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_496182f1c58f2275b22cd14fcdcd5aff, module_numpy$core$einsumfunc );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_set_arg_1;
    struct Nuitka_FrameObject *frame_5df9e51f688100229f0db58f8fd239e0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8cce5795c2e9e4ecac7710565bce554c;
    UPDATE_STRING_DICT0( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_eae4f10416bff44fb5331621677ba97e;
    UPDATE_STRING_DICT0( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_5df9e51f688100229f0db58f8fd239e0 = MAKE_MODULE_FRAME( codeobj_5df9e51f688100229f0db58f8fd239e0, module_numpy$core$einsumfunc );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_5df9e51f688100229f0db58f8fd239e0 );
    assert( Py_REFCNT( frame_5df9e51f688100229f0db58f8fd239e0 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$einsumfunc;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_c_einsum_tuple;
    tmp_level_name_1 = const_int_0;
    frame_5df9e51f688100229f0db58f8fd239e0->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_c_einsum );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_c_einsum, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$einsumfunc;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_asarray_str_plain_asanyarray_str_plain_result_type_tuple;
    tmp_level_name_2 = const_int_0;
    frame_5df9e51f688100229f0db58f8fd239e0->m_frame.f_lineno = 8;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asanyarray );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_11 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_result_type );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_result_type, tmp_assign_source_12 );
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

    tmp_assign_source_13 = LIST_COPY( const_list_str_plain_einsum_str_plain_einsum_path_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_a02697d78922b21de33ec4360e1c9026;
    UPDATE_STRING_DICT0( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols, tmp_assign_source_14 );
    tmp_set_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols );

    if (unlikely( tmp_set_arg_1 == NULL ))
    {
        tmp_set_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_einsum_symbols );
    }

    if ( tmp_set_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "einsum_symbols" );
        exception_tb = NULL;

        exception_lineno = 13;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = PySet_New( tmp_set_arg_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_symbols_set, tmp_assign_source_15 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5df9e51f688100229f0db58f8fd239e0 );
#endif
    popFrameStack();

    assertFrameObject( frame_5df9e51f688100229f0db58f8fd239e0 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5df9e51f688100229f0db58f8fd239e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5df9e51f688100229f0db58f8fd239e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5df9e51f688100229f0db58f8fd239e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5df9e51f688100229f0db58f8fd239e0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_16 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_1__compute_size_by_dict(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__compute_size_by_dict, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_2__find_contraction(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__find_contraction, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_3__optimal_path(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__optimal_path, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_4__greedy_path(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__greedy_path, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_5__parse_einsum_input(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain__parse_einsum_input, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_6_einsum_path(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum_path, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$core$einsumfunc$$$function_7_einsum(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$einsumfunc, (Nuitka_StringObject *)const_str_plain_einsum, tmp_assign_source_22 );

    return MOD_RETURN_VALUE( module_numpy$core$einsumfunc );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
