/* Generated code for Python source for module 'numpy.lib.index_tricks'
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

/* The _module_numpy$lib$index_tricks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$index_tricks;
PyDictObject *moduledict_numpy$lib$index_tricks;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
extern PyObject *const_str_plain__nx;
static PyObject *const_list_fa22549eaa1a878119e86a628980cdb1_list;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_nd_grid;
extern PyObject *const_str_plain_ix_;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain__t;
extern PyObject *const_str_plain_matrixlib;
static PyObject *const_str_plain__it;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain_indices;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_function_base;
static PyObject *const_str_digest_fc8926c182d686d26fd1d5b3b74287d6;
extern PyObject *const_str_plain_mgrid;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_multi_index;
extern PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_next;
static PyObject *const_str_digest_10070abaa510b7ab1f69c9f0869da78b;
extern PyObject *const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_length;
extern PyObject *const_tuple_int_pos_1_tuple;
static PyObject *const_str_digest_a332407a4cd6cc926dbf54a127eff824;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_find_common_type;
static PyObject *const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple;
static PyObject *const_str_plain_fill_diagonal;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_e0b85dd40506d9fdc856d21937e604a5;
extern PyObject *const_str_plain_nn;
static PyObject *const_str_plain_diag_indices_from;
extern PyObject *const_str_plain_transpose;
static PyObject *const_str_digest_3e9c4e5fc3ec9f112df1e590712b1ef6;
extern PyObject *const_str_plain_as_strided;
static PyObject *const_str_plain_diag_indices;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_IndexExpression;
extern PyObject *const_str_plain_f_locals;
static PyObject *const_tuple_str_plain_self_str_plain_maketuple_tuple;
extern PyObject *const_str_plain___iter__;
static PyObject *const_tuple_str_plain_diff_tuple;
static PyObject *const_dict_24180b9cdfcea30958fba9a165d5c6dd;
static PyObject *const_str_plain_CClass;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain_ndmin;
static PyObject *const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
static PyObject *const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_40f1dc3f07fc4b907728e1e1bbce86a6;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
static PyObject *const_tuple_str_plain_as_strided_tuple;
extern PyObject *const_str_plain___next__;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_alltrue;
static PyObject *const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_cumprod;
extern PyObject *const_str_plain_nditer;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_ogrid;
extern PyObject *const_str_plain_a;
static PyObject *const_str_digest_dc389157f25a06c45c9e142fdf180587;
static PyObject *const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
extern PyObject *const_str_plain_ndindex;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
extern PyObject *const_str_plain_typ;
static PyObject *const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_RClass;
extern PyObject *const_str_plain_swapaxes;
extern PyObject *const_int_pos_3;
static PyObject *const_dict_c94aedb3aac0d244f6f14be59f80d888;
extern PyObject *const_dict_a00acf95180a0925f15877b623331589;
static PyObject *const_str_digest_1f23860369d1fd3c6fbbd33bcd90092f;
extern PyObject *const_str_plain_ravel_multi_index;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain__getframe;
static PyObject *const_str_digest_4f6ec58bd7ed319799ea7cbde3aac475;
extern PyObject *const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
static PyObject *const_tuple_c57b074157051e4228b5b76a70f578dc_tuple;
static PyObject *const_str_plain_ndincr;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain_makemat;
static PyObject *const_tuple_str_plain_self_str_plain_sparse_tuple;
extern PyObject *const_str_plain_unravel_index;
extern PyObject *const_tuple_str_plain_self_str_plain_arr_tuple;
static PyObject *const_str_digest_ba86cdcd3e361316c8e20be24aceabc4;
extern PyObject *const_str_plain_AxisConcatenator;
static PyObject *const_tuple_8ff040ee8a6b331ddbd0be9130e66a54_tuple;
extern PyObject *const_tuple_str_plain_arr_tuple;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_tuple_d41b7300892721d5a465b890d461f3a0_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_dict_28ebf724697f63eaa96dcded742e9de0;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_f_back;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_plain_maketuple;
static PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
extern PyObject *const_str_plain_C;
static PyObject *const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_strides;
static PyObject *const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6;
extern PyObject *const_str_plain_end;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_str_plain_slobj;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_d8136e55f9e3a758c257217caddb80a0;
static PyObject *const_list_str_plain_multi_index_str_plain_zerosize_ok_list;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_ndenumerate;
static PyObject *const_dict_0d87fdb65ac69f3e7f132f381a92030e;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_axis;
static PyObject *const_tuple_f57186059421a8f2f530b4210f3b6183_tuple;
static PyObject *const_str_plain_s_;
static PyObject *const_str_plain_index_exp;
static PyObject *const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
extern PyObject *const_str_plain__x;
static PyObject *const_tuple_str_plain_r_str_plain_c_tuple;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_core;
static PyObject *const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253;
extern PyObject *const_str_plain_newaxis;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_ScalarType;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_dict_b4dcb48ac0b3434981963a3b0a181907;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple;
extern PyObject *const_str_plain_start;
static PyObject *const_str_digest_3eb9b2ce1271918b85093c648f730487;
extern PyObject *const_str_plain_arange;
static PyObject *const_str_plain_c_;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_67205772204d1e33862eb50e826ab1cb;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_trans1d;
static PyObject *const_str_digest_768284c408c3a084dbbd31908c895311;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_0db3e65f485c2a70345d144c49db3008;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_stop;
static PyObject *const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
extern PyObject *const_str_plain_coords;
extern PyObject *const_str_plain_zerosize_ok;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_str_digest_4d27999bfd5f6bdb12905dae26741abe;
extern PyObject *const_str_plain_iter;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_str_plain_function_base_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
extern PyObject *const_str_plain_zeros_like;
extern PyObject *const_str_plain_num;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_int_0_false_int_pos_1_int_neg_1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    const_list_fa22549eaa1a878119e86a628980cdb1_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 2, const_str_plain_mgrid ); Py_INCREF( const_str_plain_mgrid );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 3, const_str_plain_ogrid ); Py_INCREF( const_str_plain_ogrid );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 4, const_str_plain_r_ ); Py_INCREF( const_str_plain_r_ );
    const_str_plain_c_ = UNSTREAM_STRING( &constant_bin[ 16476 ], 2, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 5, const_str_plain_c_ ); Py_INCREF( const_str_plain_c_ );
    const_str_plain_s_ = UNSTREAM_STRING( &constant_bin[ 692 ], 2, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 6, const_str_plain_s_ ); Py_INCREF( const_str_plain_s_ );
    const_str_plain_index_exp = UNSTREAM_STRING( &constant_bin[ 814920 ], 9, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 7, const_str_plain_index_exp ); Py_INCREF( const_str_plain_index_exp );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 8, const_str_plain_ix_ ); Py_INCREF( const_str_plain_ix_ );
    const_str_plain_ndenumerate = UNSTREAM_STRING( &constant_bin[ 673148 ], 11, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 9, const_str_plain_ndenumerate ); Py_INCREF( const_str_plain_ndenumerate );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 10, const_str_plain_ndindex ); Py_INCREF( const_str_plain_ndindex );
    const_str_plain_fill_diagonal = UNSTREAM_STRING( &constant_bin[ 814929 ], 13, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 11, const_str_plain_fill_diagonal ); Py_INCREF( const_str_plain_fill_diagonal );
    const_str_plain_diag_indices = UNSTREAM_STRING( &constant_bin[ 814942 ], 12, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 12, const_str_plain_diag_indices ); Py_INCREF( const_str_plain_diag_indices );
    const_str_plain_diag_indices_from = UNSTREAM_STRING( &constant_bin[ 814954 ], 17, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 13, const_str_plain_diag_indices_from ); Py_INCREF( const_str_plain_diag_indices_from );
    const_str_plain_nd_grid = UNSTREAM_STRING( &constant_bin[ 174506 ], 7, 1 );
    const_str_plain__t = UNSTREAM_STRING( &constant_bin[ 16466 ], 2, 1 );
    const_str_plain__it = UNSTREAM_STRING( &constant_bin[ 17051 ], 3, 1 );
    const_str_digest_fc8926c182d686d26fd1d5b3b74287d6 = UNSTREAM_STRING( &constant_bin[ 814971 ], 1268, 0 );
    const_str_digest_10070abaa510b7ab1f69c9f0869da78b = UNSTREAM_STRING( &constant_bin[ 816239 ], 2301, 0 );
    const_str_digest_a332407a4cd6cc926dbf54a127eff824 = UNSTREAM_STRING( &constant_bin[ 818540 ], 280, 0 );
    const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 2, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 3, const_str_plain_ndmin ); Py_INCREF( const_str_plain_ndmin );
    const_str_plain_trans1d = UNSTREAM_STRING( &constant_bin[ 818820 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 4, const_str_plain_trans1d ); Py_INCREF( const_str_plain_trans1d );
    const_str_digest_e0b85dd40506d9fdc856d21937e604a5 = UNSTREAM_STRING( &constant_bin[ 818827 ], 3821, 0 );
    const_str_digest_3e9c4e5fc3ec9f112df1e590712b1ef6 = UNSTREAM_STRING( &constant_bin[ 822648 ], 31, 0 );
    const_str_plain_IndexExpression = UNSTREAM_STRING( &constant_bin[ 815142 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_maketuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_maketuple = UNSTREAM_STRING( &constant_bin[ 815534 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 1, const_str_plain_maketuple ); Py_INCREF( const_str_plain_maketuple );
    const_tuple_str_plain_diff_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diff_tuple, 0, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    const_dict_24180b9cdfcea30958fba9a165d5c6dd = _PyDict_NewPresized( 2 );
    const_list_str_plain_multi_index_str_plain_zerosize_ok_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 0, const_str_plain_multi_index ); Py_INCREF( const_str_plain_multi_index );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 1, const_str_plain_zerosize_ok ); Py_INCREF( const_str_plain_zerosize_ok );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_flags, const_list_str_plain_multi_index_str_plain_zerosize_ok_list );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_order, const_str_plain_C );
    assert( PyDict_Size( const_dict_24180b9cdfcea30958fba9a165d5c6dd ) == 2 );
    const_str_plain_CClass = UNSTREAM_STRING( &constant_bin[ 822679 ], 6, 1 );
    const_str_digest_0e72a689a82b574ba7397ec1f496ec9d = UNSTREAM_STRING( &constant_bin[ 822685 ], 43, 0 );
    const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2 = UNSTREAM_STRING( &constant_bin[ 822728 ], 276, 0 );
    const_str_digest_40f1dc3f07fc4b907728e1e1bbce86a6 = UNSTREAM_STRING( &constant_bin[ 823004 ], 751, 0 );
    const_tuple_str_plain_as_strided_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_as_strided_tuple, 0, const_str_plain_as_strided ); Py_INCREF( const_str_plain_as_strided );
    const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_dc389157f25a06c45c9e142fdf180587 = UNSTREAM_STRING( &constant_bin[ 823755 ], 33, 0 );
    const_str_digest_d685a6f7f529aa109e07a7b645a1f27e = UNSTREAM_STRING( &constant_bin[ 823788 ], 26, 0 );
    const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 1, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 2, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 3, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 4, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    const_str_plain_RClass = UNSTREAM_STRING( &constant_bin[ 823814 ], 6, 1 );
    const_dict_c94aedb3aac0d244f6f14be59f80d888 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_c94aedb3aac0d244f6f14be59f80d888, const_str_plain_sparse, Py_False );
    assert( PyDict_Size( const_dict_c94aedb3aac0d244f6f14be59f80d888 ) == 1 );
    const_str_digest_1f23860369d1fd3c6fbbd33bcd90092f = UNSTREAM_STRING( &constant_bin[ 823820 ], 1589, 0 );
    const_str_digest_4f6ec58bd7ed319799ea7cbde3aac475 = UNSTREAM_STRING( &constant_bin[ 825409 ], 118, 0 );
    const_tuple_c57b074157051e4228b5b76a70f578dc_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 2, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 3, const_str_plain_makemat ); Py_INCREF( const_str_plain_makemat );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 5, const_str_plain___getitem__ ); Py_INCREF( const_str_plain___getitem__ );
    PyTuple_SET_ITEM( const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 6, const_str_plain___len__ ); Py_INCREF( const_str_plain___len__ );
    const_str_plain_ndincr = UNSTREAM_STRING( &constant_bin[ 825527 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_sparse_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 1, const_str_plain_sparse ); Py_INCREF( const_str_plain_sparse );
    const_str_digest_ba86cdcd3e361316c8e20be24aceabc4 = UNSTREAM_STRING( &constant_bin[ 825533 ], 1579, 0 );
    const_tuple_8ff040ee8a6b331ddbd0be9130e66a54_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 827112 ], 315 );
    const_tuple_d41b7300892721d5a465b890d461f3a0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 1, const_str_plain_ScalarType ); Py_INCREF( const_str_plain_ScalarType );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 3, const_str_plain_alltrue ); Py_INCREF( const_str_plain_alltrue );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 4, const_str_plain_cumprod ); Py_INCREF( const_str_plain_cumprod );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 5, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    const_dict_28ebf724697f63eaa96dcded742e9de0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_28ebf724697f63eaa96dcded742e9de0, const_str_plain_sparse, Py_True );
    assert( PyDict_Size( const_dict_28ebf724697f63eaa96dcded742e9de0 ) == 1 );
    const_tuple_str_plain_self_str_plain_item_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_item_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_item_tuple, 1, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, 0, const_str_plain_find_common_type ); Py_INCREF( const_str_plain_find_common_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, 1, const_str_plain_issubdtype ); Py_INCREF( const_str_plain_issubdtype );
    const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6 = UNSTREAM_STRING( &constant_bin[ 827427 ], 597, 0 );
    const_str_digest_d8136e55f9e3a758c257217caddb80a0 = UNSTREAM_STRING( &constant_bin[ 828024 ], 55, 0 );
    const_dict_0d87fdb65ac69f3e7f132f381a92030e = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_0d87fdb65ac69f3e7f132f381a92030e, const_str_plain_maketuple, Py_True );
    assert( PyDict_Size( const_dict_0d87fdb65ac69f3e7f132f381a92030e ) == 1 );
    const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20 = UNSTREAM_STRING( &constant_bin[ 828079 ], 249, 0 );
    const_tuple_f57186059421a8f2f530b4210f3b6183_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 2, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 3, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 5, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 6, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 7, const_str_plain__x ); Py_INCREF( const_str_plain__x );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 8, const_str_plain__t ); Py_INCREF( const_str_plain__t );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 9, const_str_plain_nn ); Py_INCREF( const_str_plain_nn );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 10, const_str_plain_slobj ); Py_INCREF( const_str_plain_slobj );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 11, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 12, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 3, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 4, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    const_tuple_str_plain_r_str_plain_c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_c_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_r_str_plain_c_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_trans1d, const_int_0 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_ndmin, const_int_pos_2 );
    assert( PyDict_Size( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 ) == 2 );
    const_dict_b4dcb48ac0b3434981963a3b0a181907 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_b4dcb48ac0b3434981963a3b0a181907, const_str_plain_maketuple, Py_False );
    assert( PyDict_Size( const_dict_b4dcb48ac0b3434981963a3b0a181907 ) == 1 );
    const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_digest_3eb9b2ce1271918b85093c648f730487 = UNSTREAM_STRING( &constant_bin[ 828328 ], 132, 0 );
    const_str_digest_768284c408c3a084dbbd31908c895311 = UNSTREAM_STRING( &constant_bin[ 828460 ], 25, 0 );
    const_str_digest_0db3e65f485c2a70345d144c49db3008 = UNSTREAM_STRING( &constant_bin[ 828485 ], 1816, 0 );
    const_str_digest_9fce22252d81f16af5f47d8c67e196f5 = UNSTREAM_STRING( &constant_bin[ 830301 ], 32, 0 );
    const_str_digest_4d27999bfd5f6bdb12905dae26741abe = UNSTREAM_STRING( &constant_bin[ 830333 ], 421, 0 );
    const_str_digest_ae18caca66ad511d55f1373e7c1a6603 = UNSTREAM_STRING( &constant_bin[ 830754 ], 47, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$index_tricks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3b08bf90d1c7f168e43be1814174353e;
static PyCodeObject *codeobj_926e459299cb9ae25471315d1d76143d;
static PyCodeObject *codeobj_7eeab76cb87aefcb85aecf4ff8158d1b;
static PyCodeObject *codeobj_677197b00664cdb0d834892f6df383ab;
static PyCodeObject *codeobj_750845eeb2b938e796cd38bcfdbd1e99;
static PyCodeObject *codeobj_ec496630135b7818677f58f9577376d6;
static PyCodeObject *codeobj_ce6658a8ca4ae9bfaf610f18fbbefcb1;
static PyCodeObject *codeobj_7d18a2a86fb1aef1c719bad0fa16b710;
static PyCodeObject *codeobj_6c2eb24afa6a5aabd5730ef170bc7e17;
static PyCodeObject *codeobj_9a5876da0a48c7747a5c3f287b3828d8;
static PyCodeObject *codeobj_19e1f5141d05e51520e7f08ff7f0a93e;
static PyCodeObject *codeobj_7964011e302c9e9b2f972472e5f9c692;
static PyCodeObject *codeobj_c28c432d999044329e7fd08f4fc00936;
static PyCodeObject *codeobj_d2746ab44d0693284a12a1bef2c318f0;
static PyCodeObject *codeobj_a1abcde2ec47df658544045fa321a7f2;
static PyCodeObject *codeobj_05d8f2d460a7cbeb4e2f0f583dcc8aba;
static PyCodeObject *codeobj_499bc315720a6903839ca40a5fe5e2ae;
static PyCodeObject *codeobj_7bae84bca7c62a54e9f8bef816322588;
static PyCodeObject *codeobj_708d3edf1ad7f89440f79579f48dcf98;
static PyCodeObject *codeobj_dd925936b88a7fdccf69e4f6ee631a71;
static PyCodeObject *codeobj_86cee19ac7b9998ba7d1d16d5f057fd0;
static PyCodeObject *codeobj_d9f002600efb381821a1ecbc23668482;
static PyCodeObject *codeobj_9a9be0b6193e6e694ff6a621ea09a559;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_d8136e55f9e3a758c257217caddb80a0;
    codeobj_3b08bf90d1c7f168e43be1814174353e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3e9c4e5fc3ec9f112df1e590712b1ef6, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_926e459299cb9ae25471315d1d76143d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AxisConcatenator, 231, const_tuple_c57b074157051e4228b5b76a70f578dc_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7eeab76cb87aefcb85aecf4ff8158d1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 162, const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_677197b00664cdb0d834892f6df383ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 247, const_tuple_8ff040ee8a6b331ddbd0be9130e66a54_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_750845eeb2b938e796cd38bcfdbd1e99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 661, const_tuple_str_plain_self_str_plain_item_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ec496630135b7818677f58f9577376d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 159, const_tuple_str_plain_self_str_plain_sparse_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ce6658a8ca4ae9bfaf610f18fbbefcb1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 241, const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7d18a2a86fb1aef1c719bad0fa16b710 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 451, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6c2eb24afa6a5aabd5730ef170bc7e17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 481, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9a5876da0a48c7747a5c3f287b3828d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 513, const_tuple_str_plain_self_str_plain_arr_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_19e1f5141d05e51520e7f08ff7f0a93e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 566, const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7964011e302c9e9b2f972472e5f9c692 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 658, const_tuple_str_plain_self_str_plain_maketuple_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c28c432d999044329e7fd08f4fc00936 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 530, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d2746ab44d0693284a12a1bef2c318f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 574, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a1abcde2ec47df658544045fa321a7f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 223, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_05d8f2d460a7cbeb4e2f0f583dcc8aba = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 349, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_499bc315720a6903839ca40a5fe5e2ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 516, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7bae84bca7c62a54e9f8bef816322588 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 585, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_708d3edf1ad7f89440f79579f48dcf98 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag_indices, 790, const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dd925936b88a7fdccf69e4f6ee631a71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag_indices_from, 858, const_tuple_str_plain_arr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_86cee19ac7b9998ba7d1d16d5f057fd0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill_diagonal, 676, const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d9f002600efb381821a1ecbc23668482 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ix_, 26, const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9a9be0b6193e6e694ff6a621ea09a559 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ndincr, 577, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_10___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_11___next__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_12___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_13___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_14___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_15_ndincr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_16___next__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_17___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_18___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_19_fill_diagonal( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1_ix_(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_20_diag_indices( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_21_diag_indices_from(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4___len__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_6___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_7___len__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_9___init__(  );


// The module function definitions.
static PyObject *impl_numpy$lib$index_tricks$$$function_1_ix_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_out = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_k = NULL;
    PyObject *var_new = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
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
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d9f002600efb381821a1ecbc23668482 = NULL;

    struct Nuitka_FrameObject *frame_d9f002600efb381821a1ecbc23668482;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_out == NULL );
    var_out = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9f002600efb381821a1ecbc23668482, codeobj_d9f002600efb381821a1ecbc23668482, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9f002600efb381821a1ecbc23668482 = cache_frame_d9f002600efb381821a1ecbc23668482;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9f002600efb381821a1ecbc23668482 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9f002600efb381821a1ecbc23668482 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_args;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_nd == NULL );
    var_nd = tmp_assign_source_2;

    tmp_called_name_1 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_1 = par_args;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "ooooo";
            exception_lineno = 85;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "ooooo";
        exception_lineno = 85;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "ooooo";
        exception_lineno = 85;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                type_description_1 = "ooooo";
                exception_lineno = 85;
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

        type_description_1 = "ooooo";
        exception_lineno = 85;
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

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_new;
        var_new = tmp_assign_source_9;
        Py_INCREF( var_new );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asarray );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asarray" );
        exception_tb = NULL;

        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_new;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new;
        assert( old != NULL );
        var_new = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_source_name_1 = var_new;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 87;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_dc389157f25a06c45c9e142fdf180587;
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 88;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_2;
    branch_no_1:;
    tmp_source_name_2 = var_new;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 89;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = var_new;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_intp );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new;
        assert( old != NULL );
        var_new = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_issubdtype );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubdtype );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "issubdtype" );
        exception_tb = NULL;

        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_5 = var_new;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bool_ );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 92;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
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
    // Tried code:
    tmp_called_instance_1 = var_new;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 93;
    tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_nonzero );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_13 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 93;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
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

                type_description_1 = "ooooo";
                exception_lineno = 93;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooo";
        exception_lineno = 93;
        goto try_except_handler_6;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_new;
        assert( old != NULL );
        var_new = tmp_assign_source_14;
        Py_INCREF( var_new );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    branch_no_3:;
    tmp_source_name_7 = var_new;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "new" );
        exception_tb = NULL;

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reshape );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_3 = const_tuple_int_pos_1_tuple;
    tmp_right_name_1 = var_k;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_2 = PyTuple_New( 1 );
    tmp_source_name_8 = var_new;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "new" );
        exception_tb = NULL;

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_size );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_4 = const_tuple_int_pos_1_tuple;
    tmp_left_name_6 = var_nd;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_5 = var_k;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_6 = const_int_pos_1;
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new;
        var_new = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_out;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_7 = var_new;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_d9f002600efb381821a1ecbc23668482->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_tuple_arg_1 = var_out;

    CHECK_OBJECT( tmp_tuple_arg_1 );
    tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9f002600efb381821a1ecbc23668482 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9f002600efb381821a1ecbc23668482 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9f002600efb381821a1ecbc23668482 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9f002600efb381821a1ecbc23668482, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9f002600efb381821a1ecbc23668482->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9f002600efb381821a1ecbc23668482, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9f002600efb381821a1ecbc23668482,
        type_description_1,
        par_args,
        var_out,
        var_nd,
        var_k,
        var_new
    );


    // Release cached frame.
    if ( frame_d9f002600efb381821a1ecbc23668482 == cache_frame_d9f002600efb381821a1ecbc23668482 )
    {
        Py_DECREF( frame_d9f002600efb381821a1ecbc23668482 );
    }
    cache_frame_d9f002600efb381821a1ecbc23668482 = NULL;

    assertFrameObject( frame_d9f002600efb381821a1ecbc23668482 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_1_ix_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_out );
    Py_DECREF( var_out );
    var_out = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_new );
    var_new = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_out );
    Py_DECREF( var_out );
    var_out = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_new );
    var_new = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_1_ix_ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sparse = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ec496630135b7818677f58f9577376d6 = NULL;

    struct Nuitka_FrameObject *frame_ec496630135b7818677f58f9577376d6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec496630135b7818677f58f9577376d6, codeobj_ec496630135b7818677f58f9577376d6, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_ec496630135b7818677f58f9577376d6 = cache_frame_ec496630135b7818677f58f9577376d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec496630135b7818677f58f9577376d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec496630135b7818677f58f9577376d6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_sparse;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sparse, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec496630135b7818677f58f9577376d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec496630135b7818677f58f9577376d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec496630135b7818677f58f9577376d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec496630135b7818677f58f9577376d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec496630135b7818677f58f9577376d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ec496630135b7818677f58f9577376d6,
        type_description_1,
        par_self,
        par_sparse
    );


    // Release cached frame.
    if ( frame_ec496630135b7818677f58f9577376d6 == cache_frame_ec496630135b7818677f58f9577376d6 )
    {
        Py_DECREF( frame_ec496630135b7818677f58f9577376d6 );
    }
    cache_frame_ec496630135b7818677f58f9577376d6 = NULL;

    assertFrameObject( frame_ec496630135b7818677f58f9577376d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_2___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_3___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_size = NULL;
    PyObject *var_typ = NULL;
    PyObject *var_k = NULL;
    PyObject *var_step = NULL;
    PyObject *var_start = NULL;
    PyObject *var__x = NULL;
    PyObject *var__t = NULL;
    PyObject *var_nn = NULL;
    PyObject *var_slobj = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_length = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
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
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_float_arg_2;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
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
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7eeab76cb87aefcb85aecf4ff8158d1b = NULL;

    struct Nuitka_FrameObject *frame_7eeab76cb87aefcb85aecf4ff8158d1b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_size == NULL );
    var_size = tmp_assign_source_1;

    tmp_assign_source_2 = (PyObject *)&PyInt_Type;
    assert( var_typ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_typ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7eeab76cb87aefcb85aecf4ff8158d1b, codeobj_7eeab76cb87aefcb85aecf4ff8158d1b, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7eeab76cb87aefcb85aecf4ff8158d1b = cache_frame_7eeab76cb87aefcb85aecf4ff8158d1b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7eeab76cb87aefcb85aecf4ff8158d1b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7eeab76cb87aefcb85aecf4ff8158d1b ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_len_arg_1 = par_key;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "ooooooooooooo";
            exception_lineno = 166;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_5;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_k;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = var_k;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_start );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_start;

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
    tmp_assign_source_8 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_8;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = var_step;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_9 = const_int_pos_1;
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_9;
        Py_INCREF( var_step );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_isinstance_inst_1 = var_step;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyComplex_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
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
    tmp_source_name_3 = var_size;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var_step;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 174;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 174;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_10 = (PyObject *)&PyFloat_Type;
    {
        PyObject *old = var_typ;
        var_typ = tmp_assign_source_10;
        Py_INCREF( var_typ );
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_4 = var_size;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ceil );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_subscribed_name_3 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = var_k;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stop );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_right_name_1 = var_start;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_left_name_3 = var_step;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_float_1_0;
    tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_4 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 178;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 177;
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


        exception_lineno = 177;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_end_3:;
    tmp_isinstance_inst_2 = var_step;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyFloat_Type;
    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
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
    tmp_isinstance_inst_3 = var_start;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = (PyObject *)&PyFloat_Type;
    tmp_or_left_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
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
    tmp_subscribed_name_4 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = var_k;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stop );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_isinstance_inst_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_isinstance_cls_4 = (PyObject *)&PyFloat_Type;
    tmp_or_right_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_inst_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
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


        exception_lineno = 181;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_11 = (PyObject *)&PyFloat_Type;
    {
        PyObject *old = var_typ;
        var_typ = tmp_assign_source_11;
        Py_INCREF( var_typ );
        Py_XDECREF( old );
    }

    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sparse );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 183;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
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
    // Tried code:
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_5 = var_size;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_left_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_typ;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
        exception_tb = NULL;

        exception_lineno = 185;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_left_name_4, 0, tmp_tuple_element_1 );
    tmp_len_arg_2 = var_size;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
    assert( tmp_right_name_4 != NULL );
    tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_13;

    tmp_assign_source_14 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_14;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            exception_lineno = 184;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__source_iter;
        tmp_list_contraction$tuple_unpack_1__source_iter = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_list_contraction$tuple_unpack_1__source_iter;

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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 184;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_1;
        tmp_list_contraction$tuple_unpack_1__element_1 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_list_contraction$tuple_unpack_1__source_iter;

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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 184;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_2;
        tmp_list_contraction$tuple_unpack_1__element_2 = tmp_assign_source_18;
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

                type_description_1 = "ooooooooooooo";
                exception_lineno = 184;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooo";
        exception_lineno = 184;
        goto try_except_handler_6;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_list_contraction$tuple_unpack_1__source_iter );
    tmp_list_contraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_19 = tmp_list_contraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var__x;
        var__x = tmp_assign_source_19;
        Py_INCREF( var__x );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_1 );
    tmp_list_contraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_20 = tmp_list_contraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var__t;
        var__t = tmp_assign_source_20;
        Py_INCREF( var__t );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_list_contraction$tuple_unpack_1__element_2 );
    tmp_list_contraction$tuple_unpack_1__element_2 = NULL;

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_arange );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var__x;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var__t;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 184;
    tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3___getitem__ );
    return NULL;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( var_nn == NULL );
    var_nn = tmp_assign_source_12;

    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 187;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indices );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_size;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = var_typ;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
        exception_tb = NULL;

        exception_lineno = 187;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( var_nn == NULL );
    var_nn = tmp_assign_source_21;

    branch_end_5:;
    tmp_len_arg_3 = var_size;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_range_arg_2 = BUILTIN_LEN( tmp_len_arg_3 );
    assert( tmp_range_arg_2 != NULL );
    tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_2 );
    Py_DECREF( tmp_range_arg_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_22;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            exception_lineno = 188;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_assign_source_24 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_24;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_5 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = var_k;

    CHECK_OBJECT( tmp_subscript_name_5 );
    tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_step );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_6 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = var_k;

    CHECK_OBJECT( tmp_subscript_name_6 );
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_start );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_start;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_27 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_27;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_compare_left_4 = var_step;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_4 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_28 = const_int_pos_1;
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_28;
        Py_INCREF( var_step );
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_isinstance_inst_5 = var_step;

    CHECK_OBJECT( tmp_isinstance_inst_5 );
    tmp_isinstance_cls_5 = (PyObject *)&PyComplex_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_9 = var_step;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_29 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_29;
        Py_DECREF( old );
    }

    tmp_compare_left_5 = var_step;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_subscribed_name_7 = par_key;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = var_k;

    CHECK_OBJECT( tmp_subscript_name_7 );
    tmp_source_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_stop );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_5 = var_start;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_left_name_7 = var_step;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_right_name_7 = const_int_pos_1;
    tmp_float_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_float_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 198;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_6 = TO_FLOAT( tmp_float_arg_1 );
    Py_DECREF( tmp_float_arg_1 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 198;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_30 = BINARY_OPERATION_TRUEDIV( tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_30;
        Py_DECREF( old );
    }

    branch_no_9:;
    branch_no_8:;
    tmp_subscribed_name_8 = var_nn;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = var_k;

    CHECK_OBJECT( tmp_subscript_name_8 );
    tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_8 = var_step;

    if ( tmp_right_name_8 == NULL )
    {
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "step" );
        exception_tb = NULL;

        exception_lineno = 199;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_right_name_9 = var_start;

    CHECK_OBJECT( tmp_right_name_9 );
    tmp_ass_subvalue_1 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_8 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_ass_subscribed_1 = var_nn;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = var_k;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_14 = par_self;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sparse );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 200;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_10 = PyList_New( 1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_left_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 201;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_newaxis );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 201;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_left_name_10, 0, tmp_list_element_1 );
    tmp_len_arg_4 = var_size;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_right_name_10 = BUILTIN_LEN( tmp_len_arg_4 );
    assert( tmp_right_name_10 != NULL );
    tmp_assign_source_31 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( var_slobj == NULL );
    var_slobj = tmp_assign_source_31;

    tmp_len_arg_5 = var_size;

    CHECK_OBJECT( tmp_len_arg_5 );
    tmp_range_arg_3 = BUILTIN_LEN( tmp_len_arg_5 );
    assert( tmp_range_arg_3 != NULL );
    tmp_iter_arg_5 = BUILTIN_RANGE( tmp_range_arg_3 );
    Py_DECREF( tmp_range_arg_3 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_32;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_next_source_4 );
    tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_33 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooo";
            exception_lineno = 202;
            goto try_except_handler_8;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_assign_source_34 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_34 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_34;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_2 = const_slice_none_none_none;
    tmp_ass_subscribed_2 = var_slobj;

    CHECK_OBJECT( tmp_ass_subscribed_2 );
    tmp_ass_subscript_2 = var_k;

    CHECK_OBJECT( tmp_ass_subscript_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_subscribed_name_10 = var_nn;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_9 = var_k;

    CHECK_OBJECT( tmp_subscript_name_9 );
    tmp_subscribed_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_9 );
    if ( tmp_subscribed_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_subscript_name_10 = var_slobj;

    CHECK_OBJECT( tmp_subscript_name_10 );
    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_10 );
    Py_DECREF( tmp_subscribed_name_9 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subscribed_3 = var_nn;

    CHECK_OBJECT( tmp_ass_subscribed_3 );
    tmp_ass_subscript_3 = var_k;

    CHECK_OBJECT( tmp_ass_subscript_3 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_newaxis );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    tmp_ass_subscribed_4 = var_slobj;

    CHECK_OBJECT( tmp_ass_subscribed_4 );
    tmp_ass_subscript_4 = var_k;

    CHECK_OBJECT( tmp_ass_subscript_4 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    branch_no_10:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_7eeab76cb87aefcb85aecf4ff8158d1b );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_7eeab76cb87aefcb85aecf4ff8158d1b, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_7eeab76cb87aefcb85aecf4ff8158d1b, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_IndexError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 207;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_17 = par_key;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_step );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_source_name_18 = par_key;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_stop );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stop == NULL );
    var_stop = tmp_assign_source_36;

    tmp_source_name_19 = par_key;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_start );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    tmp_compare_left_7 = var_start;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = Py_None;
    tmp_is_5 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_5 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_38 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_38;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_12:;
    tmp_isinstance_inst_6 = var_step;

    CHECK_OBJECT( tmp_isinstance_inst_6 );
    tmp_isinstance_cls_6 = (PyObject *)&PyComplex_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_10 = var_step;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_int_arg_4 = var_step;

    CHECK_OBJECT( tmp_int_arg_4 );
    tmp_assign_source_40 = PyNumber_Int( tmp_int_arg_4 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_length == NULL );
    var_length = tmp_assign_source_40;

    tmp_compare_left_8 = var_step;

    CHECK_OBJECT( tmp_compare_left_8 );
    tmp_compare_right_8 = const_int_pos_1;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_20 = par_key;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_left_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_stop );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_start;

    CHECK_OBJECT( tmp_right_name_11 );
    tmp_left_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_13 = var_step;

    CHECK_OBJECT( tmp_left_name_13 );
    tmp_right_name_13 = const_int_pos_1;
    tmp_float_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_float_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 217;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = TO_FLOAT( tmp_float_arg_2 );
    Py_DECREF( tmp_float_arg_2 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 217;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = BINARY_OPERATION_TRUEDIV( tmp_left_name_11, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_11 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_41;
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_source_name_21 = par_key;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_left_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_stop );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = var_step;

    CHECK_OBJECT( tmp_right_name_14 );
    tmp_assign_source_42 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_stop;
        assert( old != NULL );
        var_stop = tmp_assign_source_42;
        Py_DECREF( old );
    }

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 219;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = const_int_0;
    tmp_args_element_name_12 = var_length;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_args_element_name_13 = const_int_pos_1;
    tmp_args_element_name_14 = (PyObject *)&PyFloat_Type;
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_left_name_16 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain_arange, call_args );
    }

    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = var_step;

    CHECK_OBJECT( tmp_right_name_15 );
    tmp_left_name_15 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = var_start;

    CHECK_OBJECT( tmp_right_name_16 );
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_15, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_15 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_13;
    branch_no_13:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 221;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = var_start;

    CHECK_OBJECT( tmp_args_element_name_15 );
    tmp_args_element_name_16 = var_stop;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = var_step;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_arange, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_13:;
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 163;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame) frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
    branch_end_11:;
    // End of try:
    try_end_6:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7eeab76cb87aefcb85aecf4ff8158d1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_7eeab76cb87aefcb85aecf4ff8158d1b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7eeab76cb87aefcb85aecf4ff8158d1b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7eeab76cb87aefcb85aecf4ff8158d1b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7eeab76cb87aefcb85aecf4ff8158d1b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7eeab76cb87aefcb85aecf4ff8158d1b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7eeab76cb87aefcb85aecf4ff8158d1b,
        type_description_1,
        par_self,
        par_key,
        var_size,
        var_typ,
        var_k,
        var_step,
        var_start,
        var__x,
        var__t,
        var_nn,
        var_slobj,
        var_stop,
        var_length
    );


    // Release cached frame.
    if ( frame_7eeab76cb87aefcb85aecf4ff8158d1b == cache_frame_7eeab76cb87aefcb85aecf4ff8158d1b )
    {
        Py_DECREF( frame_7eeab76cb87aefcb85aecf4ff8158d1b );
    }
    cache_frame_7eeab76cb87aefcb85aecf4ff8158d1b = NULL;

    assertFrameObject( frame_7eeab76cb87aefcb85aecf4ff8158d1b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_nn;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var__x );
    var__x = NULL;

    Py_XDECREF( var__t );
    var__t = NULL;

    Py_XDECREF( var_nn );
    var_nn = NULL;

    Py_XDECREF( var_slobj );
    var_slobj = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var__x );
    var__x = NULL;

    Py_XDECREF( var__t );
    var__t = NULL;

    Py_XDECREF( var_nn );
    var_nn = NULL;

    Py_XDECREF( var_slobj );
    var_slobj = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_4___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4___len__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4___len__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_matrix = python_pars[ 2 ];
    PyObject *par_ndmin = python_pars[ 3 ];
    PyObject *par_trans1d = python_pars[ 4 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 = NULL;

    struct Nuitka_FrameObject *frame_ce6658a8ca4ae9bfaf610f18fbbefcb1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce6658a8ca4ae9bfaf610f18fbbefcb1, codeobj_ce6658a8ca4ae9bfaf610f18fbbefcb1, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 = cache_frame_ce6658a8ca4ae9bfaf610f18fbbefcb1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_axis;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_axis, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_matrix;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_matrix, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_trans1d;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_trans1d, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_ndmin;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ndmin, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce6658a8ca4ae9bfaf610f18fbbefcb1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce6658a8ca4ae9bfaf610f18fbbefcb1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce6658a8ca4ae9bfaf610f18fbbefcb1,
        type_description_1,
        par_self,
        par_axis,
        par_matrix,
        par_ndmin,
        par_trans1d
    );


    // Release cached frame.
    if ( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 == cache_frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 )
    {
        Py_DECREF( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 );
    }
    cache_frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 = NULL;

    assertFrameObject( frame_ce6658a8ca4ae9bfaf610f18fbbefcb1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_ndmin );
    Py_DECREF( par_ndmin );
    par_ndmin = NULL;

    CHECK_OBJECT( (PyObject *)par_trans1d );
    Py_DECREF( par_trans1d );
    par_trans1d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_ndmin );
    Py_DECREF( par_ndmin );
    par_ndmin = NULL;

    CHECK_OBJECT( (PyObject *)par_trans1d );
    Py_DECREF( par_trans1d );
    par_trans1d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_5___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_6___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_frame = NULL;
    PyObject *var_mymat = NULL;
    PyObject *var_trans1d = NULL;
    PyObject *var_ndmin = NULL;
    PyObject *var_matrix = NULL;
    PyObject *var_axis = NULL;
    PyObject *var_objs = NULL;
    PyObject *var_scalars = NULL;
    PyObject *var_arraytypes = NULL;
    PyObject *var_scalartypes = NULL;
    PyObject *var_k = NULL;
    PyObject *var_item = NULL;
    PyObject *var_scalar = NULL;
    PyObject *var_step = NULL;
    PyObject *var_start = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_size = NULL;
    PyObject *var_newobj = NULL;
    PyObject *var_col = NULL;
    PyObject *var_vec = NULL;
    PyObject *var_x = NULL;
    PyObject *var_tempobj = NULL;
    PyObject *var_k2 = NULL;
    PyObject *var_defaxes = NULL;
    PyObject *var_k1 = NULL;
    PyObject *var_axes = NULL;
    PyObject *var_final_dtype = NULL;
    PyObject *var_res = NULL;
    PyObject *var_oldndim = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_677197b00664cdb0d834892f6df383ab = NULL;

    struct Nuitka_FrameObject *frame_677197b00664cdb0d834892f6df383ab;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_677197b00664cdb0d834892f6df383ab, codeobj_677197b00664cdb0d834892f6df383ab, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_677197b00664cdb0d834892f6df383ab = cache_frame_677197b00664cdb0d834892f6df383ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_677197b00664cdb0d834892f6df383ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_677197b00664cdb0d834892f6df383ab ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_key;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys );

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

        exception_lineno = 250;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 250;
    tmp_source_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__getframe );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_back );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_frame == NULL );
    var_frame = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrixlib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrixlib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "matrixlib" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bmat );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_key;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_3 = var_frame;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_globals );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 251;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_frame;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_locals );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 251;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 251;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_mymat == NULL );
    var_mymat = tmp_assign_source_2;

    tmp_return_value = var_mymat;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_key;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_assign_source_3 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_key;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_key;
        assert( old != NULL );
        par_key = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_trans1d );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_trans1d == NULL );
    var_trans1d = tmp_assign_source_4;

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndmin );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ndmin == NULL );
    var_ndmin = tmp_assign_source_5;

    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_matrix );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_matrix == NULL );
    var_matrix = tmp_assign_source_6;

    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_axis );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_axis == NULL );
    var_axis = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( var_objs == NULL );
    var_objs = tmp_assign_source_8;

    tmp_assign_source_9 = PyList_New( 0 );
    assert( var_scalars == NULL );
    var_scalars = tmp_assign_source_9;

    tmp_assign_source_10 = PyList_New( 0 );
    assert( var_arraytypes == NULL );
    var_arraytypes = tmp_assign_source_10;

    tmp_assign_source_11 = PyList_New( 0 );
    assert( var_scalartypes == NULL );
    var_scalartypes = tmp_assign_source_11;

    tmp_called_name_2 = (PyObject *)&PyEnum_Type;
    tmp_args_element_name_4 = par_key;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_12;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 268;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_15 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooooooo";
        exception_lineno = 268;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooo";
        exception_lineno = 268;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 268;
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

        type_description_1 = "ooooooooooooooooooooooooooooooo";
        exception_lineno = 268;
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

    tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_17 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_17;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_18 );
    {
        PyObject *old = var_item;
        var_item = tmp_assign_source_18;
        Py_INCREF( var_item );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_19 = Py_False;
    {
        PyObject *old = var_scalar;
        var_scalar = tmp_assign_source_19;
        Py_INCREF( var_scalar );
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_3 = var_item;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = (PyObject *)&PySlice_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
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
    tmp_source_name_9 = var_item;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_step );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_source_name_10 = var_item;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_start );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_source_name_11 = var_item;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_stop );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_stop;
        var_stop = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_start;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_23 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_23;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_compare_left_2 = var_step;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_24 = const_int_pos_1;
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_24;
        Py_INCREF( var_step );
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_isinstance_inst_4 = var_step;

    CHECK_OBJECT( tmp_isinstance_inst_4 );
    tmp_isinstance_cls_4 = (PyObject *)&PyComplex_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
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
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_5 = var_step;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_25 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_size;
        var_size = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "function_base" );
        exception_tb = NULL;

        exception_lineno = 280;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_linspace );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_start;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_stop;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_size;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_num;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 280;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 282;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = var_start;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = var_stop;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = var_step;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_27 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_arange, call_args );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    branch_end_6:;
    tmp_compare_left_3 = var_ndmin;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 283;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_newobj;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = Py_False;
    tmp_dict_key_2 = const_str_plain_copy;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = var_ndmin;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 284;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_3 = const_str_plain_ndmin;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 284;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_28;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = var_trans1d;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 285;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_4 = const_int_neg_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_13 = var_newobj;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_swapaxes );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = const_int_neg_1;
    tmp_args_element_name_10 = var_trans1d;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 286;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 286;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_29;
        Py_DECREF( old );
    }

    branch_no_8:;
    branch_no_7:;
    goto branch_end_3;
    branch_no_3:;
    tmp_isinstance_inst_5 = var_item;

    CHECK_OBJECT( tmp_isinstance_inst_5 );
    tmp_isinstance_cls_5 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_5 = var_k;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = const_int_0;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_1 = const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 289;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
    branch_no_10:;
    tmp_compare_left_6 = var_item;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = const_tuple_str_plain_r_str_plain_c_tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_30 = Py_True;
    {
        PyObject *old = var_matrix;
        var_matrix = tmp_assign_source_30;
        Py_INCREF( var_matrix );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_item;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_str_plain_c;
    tmp_assign_source_31 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_col;
        var_col = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    goto loop_start_1;
    branch_no_11:;
    tmp_compare_left_7 = const_str_chr_44;
    tmp_compare_right_7 = var_item;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_instance_3 = var_item;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 296;
    tmp_assign_source_32 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_vec;
        var_vec = tmp_assign_source_32;
        Py_XDECREF( old );
    }

    // Tried code:
    // Tried code:
    // Tried code:
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_slice_source_1 = var_vec;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_iter_arg_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_list_contraction_1__$0;
        tmp_list_contraction_1__$0 = tmp_assign_source_34;
        Py_XDECREF( old );
    }

    tmp_assign_source_35 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_1__contraction_result;
        tmp_list_contraction_1__contraction_result = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 298;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    tmp_assign_source_37 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_37 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_37;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_int_arg_2 = var_x;

    CHECK_OBJECT( tmp_int_arg_2 );
    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_6___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_7:;
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
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_6___getitem__ );
    return NULL;
    outline_result_1:;
    tmp_iter_arg_3 = tmp_outline_return_value_1;
    tmp_assign_source_33 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooo";
        exception_lineno = 298;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_38;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_4, 1 );
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


        type_description_1 = "ooooooooooooooooooooooooooooooo";
        exception_lineno = 298;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_39;
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

                type_description_1 = "ooooooooooooooooooooooooooooooo";
                exception_lineno = 298;
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

        type_description_1 = "ooooooooooooooooooooooooooooooo";
        exception_lineno = 298;
        goto try_except_handler_8;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_40 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_40 );
    {
        PyObject *old = var_axis;
        var_axis = tmp_assign_source_40;
        Py_INCREF( var_axis );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_41 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_41 );
    {
        PyObject *old = var_ndmin;
        var_ndmin = tmp_assign_source_41;
        Py_INCREF( var_ndmin );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_len_arg_1 = var_vec;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_8 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_compare_right_8 = const_int_pos_3;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 299;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_subscribed_name_1 = var_vec;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_2;
    tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_42 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_trans1d;
        var_trans1d = tmp_assign_source_42;
        Py_XDECREF( old );
    }

    branch_no_13:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_677197b00664cdb0d834892f6df383ab );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_677197b00664cdb0d834892f6df383ab, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_677197b00664cdb0d834892f6df383ab, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    tmp_make_exception_arg_2 = const_str_digest_768284c408c3a084dbbd31908c895311;
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 303;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    goto loop_start_1;
    branch_no_12:;
    // Tried code:
    tmp_int_arg_4 = var_item;

    CHECK_OBJECT( tmp_int_arg_4 );
    tmp_assign_source_43 = PyNumber_Int( tmp_int_arg_4 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = var_axis;
        var_axis = tmp_assign_source_43;
        Py_XDECREF( old );
    }

    goto try_end_6;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_677197b00664cdb0d834892f6df383ab );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_677197b00664cdb0d834892f6df383ab, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_677197b00664cdb0d834892f6df383ab, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyTuple_New( 2 );
    tmp_tuple_element_4 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 1, tmp_tuple_element_4 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_9 );

        exception_lineno = 307;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_make_exception_arg_3 = const_str_digest_768284c408c3a084dbbd31908c895311;
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 308;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 304;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_677197b00664cdb0d834892f6df383ab->m_frame) frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
    branch_end_14:;
    // End of try:
    try_end_6:;
    goto loop_start_1;
    goto branch_end_9;
    branch_no_9:;
    tmp_type_arg_1 = var_item;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_10 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_10 != NULL );
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ScalarType );
    }

    if ( tmp_compare_right_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ScalarType" );
        exception_tb = NULL;

        exception_lineno = 309;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_3 == -1) );
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_5 = var_item;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = var_ndmin;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_4 = const_str_plain_ndmin;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 310;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_44;
        Py_XDECREF( old );
    }

    tmp_source_name_14 = var_scalars;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_len_arg_2 = var_objs;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_args_element_name_11 = BUILTIN_LEN( tmp_len_arg_2 );
    assert( tmp_args_element_name_11 != NULL );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_45 = Py_True;
    {
        PyObject *old = var_scalar;
        assert( old != NULL );
        var_scalar = tmp_assign_source_45;
        Py_INCREF( var_scalar );
        Py_DECREF( old );
    }

    tmp_source_name_15 = var_scalartypes;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_append );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_16 = var_newobj;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_dtype );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 313;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_15;
    branch_no_15:;
    tmp_assign_source_46 = var_item;

    CHECK_OBJECT( tmp_assign_source_46 );
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_46;
        Py_INCREF( var_newobj );
        Py_XDECREF( old );
    }

    tmp_compare_left_11 = var_ndmin;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_11 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 317;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_newobj;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_kw_name_4 = PyDict_Copy( const_dict_a00acf95180a0925f15877b623331589 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 317;
    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_tempobj;
        var_tempobj = tmp_assign_source_47;
        Py_XDECREF( old );
    }

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 318;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_5 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_newobj;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_kw_name_5 = _PyDict_NewPresized( 3 );
    tmp_dict_value_5 = Py_False;
    tmp_dict_key_5 = const_str_plain_copy;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = Py_True;
    tmp_dict_key_6 = const_str_plain_subok;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = var_ndmin;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 319;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_7 = const_str_plain_ndmin;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 318;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_48;
        Py_DECREF( old );
    }

    tmp_compexpr_left_2 = var_trans1d;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compexpr_right_2 = const_int_neg_1;
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
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
    tmp_source_name_17 = var_tempobj;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ndim );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_compexpr_right_3 = var_ndmin;

    if ( tmp_compexpr_right_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_and_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
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

        exception_lineno = 320;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_left_name_1 = var_ndmin;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 321;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_18 = var_tempobj;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ndim );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_49 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_k2;
        var_k2 = tmp_assign_source_49;
        Py_XDECREF( old );
    }

    tmp_compare_left_12 = var_trans1d;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 322;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_12 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_left_name_2 = var_trans1d;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 323;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_left_name_3 = var_k2;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_50 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    var_trans1d = tmp_assign_source_50;

    branch_no_18:;
    tmp_range_arg_1 = var_ndmin;

    if ( tmp_range_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 324;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_51 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_defaxes;
        var_defaxes = tmp_assign_source_51;
        Py_XDECREF( old );
    }

    tmp_assign_source_52 = var_trans1d;

    if ( tmp_assign_source_52 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 325;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_k1;
        var_k1 = tmp_assign_source_52;
        Py_INCREF( var_k1 );
        Py_XDECREF( old );
    }

    tmp_slice_source_2 = var_defaxes;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_slice_upper_1 = var_k1;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_left_name_5 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_slice_source_3 = var_defaxes;

    CHECK_OBJECT( tmp_slice_source_3 );
    tmp_slice_lower_1 = var_k2;

    CHECK_OBJECT( tmp_slice_lower_1 );
    tmp_right_name_4 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_1, Py_None );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 326;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_4 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_slice_source_4 = var_defaxes;

    CHECK_OBJECT( tmp_slice_source_4 );
    tmp_slice_lower_2 = var_k1;

    CHECK_OBJECT( tmp_slice_lower_2 );
    tmp_slice_upper_2 = var_k2;

    CHECK_OBJECT( tmp_slice_upper_2 );
    tmp_right_name_5 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_2, tmp_slice_upper_2 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 327;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_53 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_axes;
        var_axes = tmp_assign_source_53;
        Py_XDECREF( old );
    }

    tmp_called_instance_4 = var_newobj;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_13 = var_axes;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_54 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_transpose, call_args );
    }

    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_54;
        Py_DECREF( old );
    }

    branch_no_17:;
    CHECK_OBJECT( var_tempobj );
    Py_DECREF( var_tempobj );
    var_tempobj = NULL;

    branch_no_16:;
    branch_end_15:;
    branch_end_9:;
    branch_end_3:;
    tmp_source_name_19 = var_objs;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_14 = var_newobj;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
        exception_tb = NULL;

        exception_lineno = 330;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_operand_name_1 = var_scalar;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "scalar" );
        exception_tb = NULL;

        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
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
    tmp_isinstance_inst_6 = var_newobj;

    if ( tmp_isinstance_inst_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
        exception_tb = NULL;

        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_and_right_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    Py_DECREF( tmp_isinstance_cls_6 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_21 = var_arraytypes;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_22 = var_newobj;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
        exception_tb = NULL;

        exception_lineno = 332;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_dtype );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 332;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_common_type );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "find_common_type" );
        exception_tb = NULL;

        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = var_arraytypes;

    CHECK_OBJECT( tmp_args_element_name_16 );
    tmp_args_element_name_17 = var_scalartypes;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_final_dtype == NULL );
    var_final_dtype = tmp_assign_source_55;

    tmp_compare_left_13 = var_final_dtype;

    CHECK_OBJECT( tmp_compare_left_13 );
    tmp_compare_right_13 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_iter_arg_5 = var_scalars;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_56 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_56;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_3 );
    tmp_assign_source_57 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_57 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooooooooooooooooooooooo";
            exception_lineno = 337;
            goto try_except_handler_10;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_57;
        Py_XDECREF( old );
    }

    tmp_assign_source_58 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_58 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_58;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_objs;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = var_k;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_called_instance_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    tmp_args_element_name_18 = var_final_dtype;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_astype, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    tmp_ass_subscribed_1 = var_objs;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = var_k;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_20:;
    tmp_source_name_23 = par_self;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_concatenate );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_6 = PyTuple_New( 1 );
    tmp_tuple_arg_1 = var_objs;

    CHECK_OBJECT( tmp_tuple_arg_1 );
    tmp_tuple_element_8 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_name_6 );

        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_kw_name_6 = _PyDict_NewPresized( 1 );
    tmp_dict_value_8 = var_axis;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "axis" );
        exception_tb = NULL;

        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 340;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_59;

    tmp_cond_value_3 = var_matrix;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "matrix" );
        exception_tb = NULL;

        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_source_name_24 = var_res;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_assign_source_60 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_ndim );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_oldndim == NULL );
    var_oldndim = tmp_assign_source_60;

    tmp_called_instance_6 = par_self;

    CHECK_OBJECT( tmp_called_instance_6 );
    tmp_args_element_name_19 = var_res;

    CHECK_OBJECT( tmp_args_element_name_19 );
    frame_677197b00664cdb0d834892f6df383ab->m_frame.f_lineno = 344;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_61 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_makemat, call_args );
    }

    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_61;
        Py_DECREF( old );
    }

    tmp_compexpr_left_4 = var_oldndim;

    CHECK_OBJECT( tmp_compexpr_left_4 );
    tmp_compexpr_right_4 = const_int_pos_1;
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 345;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
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
    tmp_and_right_value_3 = var_col;

    if ( tmp_and_right_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "col" );
        exception_tb = NULL;

        exception_lineno = 345;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_and_right_value_3 );
    tmp_cond_value_4 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_4 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 345;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_25 = var_res;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_assign_source_62 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_T );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_62;
        Py_DECREF( old );
    }

    branch_no_22:;
    branch_no_21:;
    tmp_return_value = var_res;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 347;
        type_description_1 = "ooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_677197b00664cdb0d834892f6df383ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_677197b00664cdb0d834892f6df383ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_677197b00664cdb0d834892f6df383ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_677197b00664cdb0d834892f6df383ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_677197b00664cdb0d834892f6df383ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_677197b00664cdb0d834892f6df383ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_677197b00664cdb0d834892f6df383ab,
        type_description_1,
        par_self,
        par_key,
        var_frame,
        var_mymat,
        var_trans1d,
        var_ndmin,
        var_matrix,
        var_axis,
        var_objs,
        var_scalars,
        var_arraytypes,
        var_scalartypes,
        var_k,
        var_item,
        var_scalar,
        var_step,
        var_start,
        var_stop,
        var_size,
        var_newobj,
        var_col,
        var_vec,
        var_x,
        var_tempobj,
        var_k2,
        var_defaxes,
        var_k1,
        var_axes,
        var_final_dtype,
        var_res,
        var_oldndim
    );


    // Release cached frame.
    if ( frame_677197b00664cdb0d834892f6df383ab == cache_frame_677197b00664cdb0d834892f6df383ab )
    {
        Py_DECREF( frame_677197b00664cdb0d834892f6df383ab );
    }
    cache_frame_677197b00664cdb0d834892f6df383ab = NULL;

    assertFrameObject( frame_677197b00664cdb0d834892f6df383ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_6___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_mymat );
    var_mymat = NULL;

    Py_XDECREF( var_trans1d );
    var_trans1d = NULL;

    Py_XDECREF( var_ndmin );
    var_ndmin = NULL;

    Py_XDECREF( var_matrix );
    var_matrix = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_objs );
    var_objs = NULL;

    Py_XDECREF( var_scalars );
    var_scalars = NULL;

    Py_XDECREF( var_arraytypes );
    var_arraytypes = NULL;

    Py_XDECREF( var_scalartypes );
    var_scalartypes = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_scalar );
    var_scalar = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_newobj );
    var_newobj = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_tempobj );
    var_tempobj = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_defaxes );
    var_defaxes = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_final_dtype );
    var_final_dtype = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_oldndim );
    var_oldndim = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_trans1d );
    var_trans1d = NULL;

    Py_XDECREF( var_ndmin );
    var_ndmin = NULL;

    Py_XDECREF( var_matrix );
    var_matrix = NULL;

    Py_XDECREF( var_axis );
    var_axis = NULL;

    Py_XDECREF( var_objs );
    var_objs = NULL;

    Py_XDECREF( var_scalars );
    var_scalars = NULL;

    Py_XDECREF( var_arraytypes );
    var_arraytypes = NULL;

    Py_XDECREF( var_scalartypes );
    var_scalartypes = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_scalar );
    var_scalar = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_newobj );
    var_newobj = NULL;

    Py_XDECREF( var_col );
    var_col = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_tempobj );
    var_tempobj = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_defaxes );
    var_defaxes = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_final_dtype );
    var_final_dtype = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_oldndim );
    var_oldndim = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_6___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_7___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_7___len__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_7___len__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7d18a2a86fb1aef1c719bad0fa16b710 = NULL;

    struct Nuitka_FrameObject *frame_7d18a2a86fb1aef1c719bad0fa16b710;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d18a2a86fb1aef1c719bad0fa16b710, codeobj_7d18a2a86fb1aef1c719bad0fa16b710, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_7d18a2a86fb1aef1c719bad0fa16b710 = cache_frame_7d18a2a86fb1aef1c719bad0fa16b710;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d18a2a86fb1aef1c719bad0fa16b710 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d18a2a86fb1aef1c719bad0fa16b710 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 452;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_int_0;
    frame_7d18a2a86fb1aef1c719bad0fa16b710->m_frame.f_lineno = 452;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___init__, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d18a2a86fb1aef1c719bad0fa16b710 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d18a2a86fb1aef1c719bad0fa16b710 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d18a2a86fb1aef1c719bad0fa16b710, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d18a2a86fb1aef1c719bad0fa16b710->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d18a2a86fb1aef1c719bad0fa16b710, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d18a2a86fb1aef1c719bad0fa16b710,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7d18a2a86fb1aef1c719bad0fa16b710 == cache_frame_7d18a2a86fb1aef1c719bad0fa16b710 )
    {
        Py_DECREF( frame_7d18a2a86fb1aef1c719bad0fa16b710 );
    }
    cache_frame_7d18a2a86fb1aef1c719bad0fa16b710 = NULL;

    assertFrameObject( frame_7d18a2a86fb1aef1c719bad0fa16b710 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_8___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_8___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_9___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6c2eb24afa6a5aabd5730ef170bc7e17 = NULL;

    struct Nuitka_FrameObject *frame_6c2eb24afa6a5aabd5730ef170bc7e17;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c2eb24afa6a5aabd5730ef170bc7e17, codeobj_6c2eb24afa6a5aabd5730ef170bc7e17, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_6c2eb24afa6a5aabd5730ef170bc7e17 = cache_frame_6c2eb24afa6a5aabd5730ef170bc7e17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c2eb24afa6a5aabd5730ef170bc7e17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c2eb24afa6a5aabd5730ef170bc7e17 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 482;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_self;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_neg_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 );
    frame_6c2eb24afa6a5aabd5730ef170bc7e17->m_frame.f_lineno = 482;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c2eb24afa6a5aabd5730ef170bc7e17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c2eb24afa6a5aabd5730ef170bc7e17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c2eb24afa6a5aabd5730ef170bc7e17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c2eb24afa6a5aabd5730ef170bc7e17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c2eb24afa6a5aabd5730ef170bc7e17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c2eb24afa6a5aabd5730ef170bc7e17,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6c2eb24afa6a5aabd5730ef170bc7e17 == cache_frame_6c2eb24afa6a5aabd5730ef170bc7e17 )
    {
        Py_DECREF( frame_6c2eb24afa6a5aabd5730ef170bc7e17 );
    }
    cache_frame_6c2eb24afa6a5aabd5730ef170bc7e17 = NULL;

    assertFrameObject( frame_6c2eb24afa6a5aabd5730ef170bc7e17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_9___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_9___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_10___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arr = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_9a5876da0a48c7747a5c3f287b3828d8 = NULL;

    struct Nuitka_FrameObject *frame_9a5876da0a48c7747a5c3f287b3828d8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a5876da0a48c7747a5c3f287b3828d8, codeobj_9a5876da0a48c7747a5c3f287b3828d8, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_9a5876da0a48c7747a5c3f287b3828d8 = cache_frame_9a5876da0a48c7747a5c3f287b3828d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a5876da0a48c7747a5c3f287b3828d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a5876da0a48c7747a5c3f287b3828d8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_arr;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9a5876da0a48c7747a5c3f287b3828d8->m_frame.f_lineno = 514;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_iter, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a5876da0a48c7747a5c3f287b3828d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a5876da0a48c7747a5c3f287b3828d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a5876da0a48c7747a5c3f287b3828d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a5876da0a48c7747a5c3f287b3828d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a5876da0a48c7747a5c3f287b3828d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a5876da0a48c7747a5c3f287b3828d8,
        type_description_1,
        par_self,
        par_arr
    );


    // Release cached frame.
    if ( frame_9a5876da0a48c7747a5c3f287b3828d8 == cache_frame_9a5876da0a48c7747a5c3f287b3828d8 )
    {
        Py_DECREF( frame_9a5876da0a48c7747a5c3f287b3828d8 );
    }
    cache_frame_9a5876da0a48c7747a5c3f287b3828d8 = NULL;

    assertFrameObject( frame_9a5876da0a48c7747a5c3f287b3828d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_10___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_10___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_11___next__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_499bc315720a6903839ca40a5fe5e2ae = NULL;

    struct Nuitka_FrameObject *frame_499bc315720a6903839ca40a5fe5e2ae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_499bc315720a6903839ca40a5fe5e2ae, codeobj_499bc315720a6903839ca40a5fe5e2ae, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_499bc315720a6903839ca40a5fe5e2ae = cache_frame_499bc315720a6903839ca40a5fe5e2ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_499bc315720a6903839ca40a5fe5e2ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_499bc315720a6903839ca40a5fe5e2ae ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iter );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 528;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coords );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 528;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_iter );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 528;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_tuple_element_1 == NULL )
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
        Py_DECREF( tmp_return_value );

        type_description_1 = "o";
        exception_lineno = 528;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_499bc315720a6903839ca40a5fe5e2ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_499bc315720a6903839ca40a5fe5e2ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_499bc315720a6903839ca40a5fe5e2ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_499bc315720a6903839ca40a5fe5e2ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_499bc315720a6903839ca40a5fe5e2ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_499bc315720a6903839ca40a5fe5e2ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_499bc315720a6903839ca40a5fe5e2ae,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_499bc315720a6903839ca40a5fe5e2ae == cache_frame_499bc315720a6903839ca40a5fe5e2ae )
    {
        Py_DECREF( frame_499bc315720a6903839ca40a5fe5e2ae );
    }
    cache_frame_499bc315720a6903839ca40a5fe5e2ae = NULL;

    assertFrameObject( frame_499bc315720a6903839ca40a5fe5e2ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_11___next__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_11___next__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_12___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_self;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_12___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_12___iter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$function_13___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_x = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_len_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_19e1f5141d05e51520e7f08ff7f0a93e = NULL;

    struct Nuitka_FrameObject *frame_19e1f5141d05e51520e7f08ff7f0a93e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19e1f5141d05e51520e7f08ff7f0a93e, codeobj_19e1f5141d05e51520e7f08ff7f0a93e, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_19e1f5141d05e51520e7f08ff7f0a93e = cache_frame_19e1f5141d05e51520e7f08ff7f0a93e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19e1f5141d05e51520e7f08ff7f0a93e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19e1f5141d05e51520e7f08ff7f0a93e ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_shape;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 567;
        type_description_1 = "ooo";
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
    tmp_subscribed_name_1 = par_shape;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 567;
        type_description_1 = "ooo";
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
    tmp_subscribed_name_2 = par_shape;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 568;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_strided );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "as_strided" );
        exception_tb = NULL;

        exception_lineno = 569;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 569;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_19e1f5141d05e51520e7f08ff7f0a93e->m_frame.f_lineno = 569;
    tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_zeros, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 569;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_shape;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_shape;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 570;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_shape;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_19e1f5141d05e51520e7f08ff7f0a93e->m_frame.f_lineno = 570;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_zeros_like, call_args );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 570;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_strides;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_19e1f5141d05e51520e7f08ff7f0a93e->m_frame.f_lineno = 569;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 569;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_2;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 571;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_nditer );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_x;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = DEEP_COPY( const_dict_24180b9cdfcea30958fba9a165d5c6dd );
    frame_19e1f5141d05e51520e7f08ff7f0a93e->m_frame.f_lineno = 571;
    tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__it, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 571;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19e1f5141d05e51520e7f08ff7f0a93e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19e1f5141d05e51520e7f08ff7f0a93e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19e1f5141d05e51520e7f08ff7f0a93e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19e1f5141d05e51520e7f08ff7f0a93e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19e1f5141d05e51520e7f08ff7f0a93e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19e1f5141d05e51520e7f08ff7f0a93e,
        type_description_1,
        par_self,
        par_shape,
        var_x
    );


    // Release cached frame.
    if ( frame_19e1f5141d05e51520e7f08ff7f0a93e == cache_frame_19e1f5141d05e51520e7f08ff7f0a93e )
    {
        Py_DECREF( frame_19e1f5141d05e51520e7f08ff7f0a93e );
    }
    cache_frame_19e1f5141d05e51520e7f08ff7f0a93e = NULL;

    assertFrameObject( frame_19e1f5141d05e51520e7f08ff7f0a93e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_13___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_13___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_14___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_self;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_14___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_14___iter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$function_15_ndincr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_9a9be0b6193e6e694ff6a621ea09a559 = NULL;

    struct Nuitka_FrameObject *frame_9a9be0b6193e6e694ff6a621ea09a559;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a9be0b6193e6e694ff6a621ea09a559, codeobj_9a9be0b6193e6e694ff6a621ea09a559, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_9a9be0b6193e6e694ff6a621ea09a559 = cache_frame_9a9be0b6193e6e694ff6a621ea09a559;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a9be0b6193e6e694ff6a621ea09a559 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a9be0b6193e6e694ff6a621ea09a559 ) == 2 ); // Frame stack

    // Framed code:
    tmp_value_name_1 = par_self;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_unused = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_unused == NULL )
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


        type_description_1 = "o";
        exception_lineno = 583;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a9be0b6193e6e694ff6a621ea09a559 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a9be0b6193e6e694ff6a621ea09a559 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a9be0b6193e6e694ff6a621ea09a559, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a9be0b6193e6e694ff6a621ea09a559->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a9be0b6193e6e694ff6a621ea09a559, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a9be0b6193e6e694ff6a621ea09a559,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_9a9be0b6193e6e694ff6a621ea09a559 == cache_frame_9a9be0b6193e6e694ff6a621ea09a559 )
    {
        Py_DECREF( frame_9a9be0b6193e6e694ff6a621ea09a559 );
    }
    cache_frame_9a9be0b6193e6e694ff6a621ea09a559 = NULL;

    assertFrameObject( frame_9a9be0b6193e6e694ff6a621ea09a559 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_15_ndincr );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_15_ndincr );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_16___next__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_7bae84bca7c62a54e9f8bef816322588 = NULL;

    struct Nuitka_FrameObject *frame_7bae84bca7c62a54e9f8bef816322588;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bae84bca7c62a54e9f8bef816322588, codeobj_7bae84bca7c62a54e9f8bef816322588, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_7bae84bca7c62a54e9f8bef816322588 = cache_frame_7bae84bca7c62a54e9f8bef816322588;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bae84bca7c62a54e9f8bef816322588 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bae84bca7c62a54e9f8bef816322588 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__it );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_unused = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_unused == NULL )
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


        type_description_1 = "o";
        exception_lineno = 597;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__it );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_multi_index );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 598;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bae84bca7c62a54e9f8bef816322588 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bae84bca7c62a54e9f8bef816322588 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bae84bca7c62a54e9f8bef816322588 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bae84bca7c62a54e9f8bef816322588, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bae84bca7c62a54e9f8bef816322588->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bae84bca7c62a54e9f8bef816322588, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bae84bca7c62a54e9f8bef816322588,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7bae84bca7c62a54e9f8bef816322588 == cache_frame_7bae84bca7c62a54e9f8bef816322588 )
    {
        Py_DECREF( frame_7bae84bca7c62a54e9f8bef816322588 );
    }
    cache_frame_7bae84bca7c62a54e9f8bef816322588 = NULL;

    assertFrameObject( frame_7bae84bca7c62a54e9f8bef816322588 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_16___next__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_16___next__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_17___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_maketuple = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_7964011e302c9e9b2f972472e5f9c692 = NULL;

    struct Nuitka_FrameObject *frame_7964011e302c9e9b2f972472e5f9c692;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7964011e302c9e9b2f972472e5f9c692, codeobj_7964011e302c9e9b2f972472e5f9c692, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_7964011e302c9e9b2f972472e5f9c692 = cache_frame_7964011e302c9e9b2f972472e5f9c692;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7964011e302c9e9b2f972472e5f9c692 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7964011e302c9e9b2f972472e5f9c692 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_maketuple;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_maketuple, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 659;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7964011e302c9e9b2f972472e5f9c692 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7964011e302c9e9b2f972472e5f9c692 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7964011e302c9e9b2f972472e5f9c692, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7964011e302c9e9b2f972472e5f9c692->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7964011e302c9e9b2f972472e5f9c692, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7964011e302c9e9b2f972472e5f9c692,
        type_description_1,
        par_self,
        par_maketuple
    );


    // Release cached frame.
    if ( frame_7964011e302c9e9b2f972472e5f9c692 == cache_frame_7964011e302c9e9b2f972472e5f9c692 )
    {
        Py_DECREF( frame_7964011e302c9e9b2f972472e5f9c692 );
    }
    cache_frame_7964011e302c9e9b2f972472e5f9c692 = NULL;

    assertFrameObject( frame_7964011e302c9e9b2f972472e5f9c692 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_17___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_maketuple );
    Py_DECREF( par_maketuple );
    par_maketuple = NULL;

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

    CHECK_OBJECT( (PyObject *)par_maketuple );
    Py_DECREF( par_maketuple );
    par_maketuple = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_17___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_18___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_item = python_pars[ 1 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_750845eeb2b938e796cd38bcfdbd1e99 = NULL;

    struct Nuitka_FrameObject *frame_750845eeb2b938e796cd38bcfdbd1e99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_750845eeb2b938e796cd38bcfdbd1e99, codeobj_750845eeb2b938e796cd38bcfdbd1e99, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *) );
    frame_750845eeb2b938e796cd38bcfdbd1e99 = cache_frame_750845eeb2b938e796cd38bcfdbd1e99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_750845eeb2b938e796cd38bcfdbd1e99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_750845eeb2b938e796cd38bcfdbd1e99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_maketuple );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 662;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 662;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_isinstance_inst_1 = par_item;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 662;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 662;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 662;
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
    tmp_return_value = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_item;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = par_item;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_750845eeb2b938e796cd38bcfdbd1e99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_750845eeb2b938e796cd38bcfdbd1e99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_750845eeb2b938e796cd38bcfdbd1e99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_750845eeb2b938e796cd38bcfdbd1e99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_750845eeb2b938e796cd38bcfdbd1e99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_750845eeb2b938e796cd38bcfdbd1e99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_750845eeb2b938e796cd38bcfdbd1e99,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame.
    if ( frame_750845eeb2b938e796cd38bcfdbd1e99 == cache_frame_750845eeb2b938e796cd38bcfdbd1e99 )
    {
        Py_DECREF( frame_750845eeb2b938e796cd38bcfdbd1e99 );
    }
    cache_frame_750845eeb2b938e796cd38bcfdbd1e99 = NULL;

    assertFrameObject( frame_750845eeb2b938e796cd38bcfdbd1e99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_18___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_item );
    Py_DECREF( par_item );
    par_item = NULL;

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

    CHECK_OBJECT( (PyObject *)par_item );
    Py_DECREF( par_item );
    par_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_18___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_19_fill_diagonal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *par_wrap = python_pars[ 2 ];
    PyObject *var_end = NULL;
    PyObject *var_step = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    static struct Nuitka_FrameObject *cache_frame_86cee19ac7b9998ba7d1d16d5f057fd0 = NULL;

    struct Nuitka_FrameObject *frame_86cee19ac7b9998ba7d1d16d5f057fd0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86cee19ac7b9998ba7d1d16d5f057fd0, codeobj_86cee19ac7b9998ba7d1d16d5f057fd0, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_86cee19ac7b9998ba7d1d16d5f057fd0 = cache_frame_86cee19ac7b9998ba7d1d16d5f057fd0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86cee19ac7b9998ba7d1d16d5f057fd0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86cee19ac7b9998ba7d1d16d5f057fd0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 769;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 769;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
    frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame.f_lineno = 770;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 770;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = Py_None;
    assert( var_end == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_end = tmp_assign_source_1;

    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 772;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_step == NULL );
    var_step = tmp_assign_source_2;

    tmp_cond_value_1 = par_wrap;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = par_a;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_a;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 778;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_pos_1;
    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 778;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        assert( old != NULL );
        var_end = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "alltrue" );
        exception_tb = NULL;

        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diff" );
        exception_tb = NULL;

        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_a;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame.f_lineno = 782;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame.f_lineno = 782;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 782;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
    frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame.f_lineno = 783;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 783;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_left_name_3 = const_int_pos_1;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cumprod );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "cumprod" );
        exception_tb = NULL;

        exception_lineno = 784;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_7 = par_a;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame.f_lineno = 784;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame.f_lineno = 784;
    tmp_right_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_sum );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_step == NULL );
    var_step = tmp_assign_source_4;

    branch_end_2:;
    tmp_ass_subvalue_1 = par_val;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_8 = par_a;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_flat );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 787;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = var_end;

    if ( tmp_stop_name_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;

        exception_lineno = 787;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = var_step;

    CHECK_OBJECT( tmp_step_name_1 );
    tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_ass_subscript_1 != NULL );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 787;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86cee19ac7b9998ba7d1d16d5f057fd0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86cee19ac7b9998ba7d1d16d5f057fd0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86cee19ac7b9998ba7d1d16d5f057fd0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86cee19ac7b9998ba7d1d16d5f057fd0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86cee19ac7b9998ba7d1d16d5f057fd0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86cee19ac7b9998ba7d1d16d5f057fd0,
        type_description_1,
        par_a,
        par_val,
        par_wrap,
        var_end,
        var_step
    );


    // Release cached frame.
    if ( frame_86cee19ac7b9998ba7d1d16d5f057fd0 == cache_frame_86cee19ac7b9998ba7d1d16d5f057fd0 )
    {
        Py_DECREF( frame_86cee19ac7b9998ba7d1d16d5f057fd0 );
    }
    cache_frame_86cee19ac7b9998ba7d1d16d5f057fd0 = NULL;

    assertFrameObject( frame_86cee19ac7b9998ba7d1d16d5f057fd0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_19_fill_diagonal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_19_fill_diagonal );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_20_diag_indices( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    PyObject *var_idx = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_708d3edf1ad7f89440f79579f48dcf98 = NULL;

    struct Nuitka_FrameObject *frame_708d3edf1ad7f89440f79579f48dcf98;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_708d3edf1ad7f89440f79579f48dcf98, codeobj_708d3edf1ad7f89440f79579f48dcf98, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_708d3edf1ad7f89440f79579f48dcf98 = cache_frame_708d3edf1ad7f89440f79579f48dcf98;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_708d3edf1ad7f89440f79579f48dcf98 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_708d3edf1ad7f89440f79579f48dcf98 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange );

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

        exception_lineno = 854;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_n;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_708d3edf1ad7f89440f79579f48dcf98->m_frame.f_lineno = 854;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 854;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_idx == NULL );
    var_idx = tmp_assign_source_1;

    tmp_left_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_idx;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_1 );
    tmp_right_name_1 = par_ndim;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 855;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_708d3edf1ad7f89440f79579f48dcf98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_708d3edf1ad7f89440f79579f48dcf98 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_708d3edf1ad7f89440f79579f48dcf98 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_708d3edf1ad7f89440f79579f48dcf98, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_708d3edf1ad7f89440f79579f48dcf98->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_708d3edf1ad7f89440f79579f48dcf98, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_708d3edf1ad7f89440f79579f48dcf98,
        type_description_1,
        par_n,
        par_ndim,
        var_idx
    );


    // Release cached frame.
    if ( frame_708d3edf1ad7f89440f79579f48dcf98 == cache_frame_708d3edf1ad7f89440f79579f48dcf98 )
    {
        Py_DECREF( frame_708d3edf1ad7f89440f79579f48dcf98 );
    }
    cache_frame_708d3edf1ad7f89440f79579f48dcf98 = NULL;

    assertFrameObject( frame_708d3edf1ad7f89440f79579f48dcf98 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_20_diag_indices );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
    var_idx = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    Py_XDECREF( var_idx );
    var_idx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_20_diag_indices );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_21_diag_indices_from( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_dd925936b88a7fdccf69e4f6ee631a71 = NULL;

    struct Nuitka_FrameObject *frame_dd925936b88a7fdccf69e4f6ee631a71;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd925936b88a7fdccf69e4f6ee631a71, codeobj_dd925936b88a7fdccf69e4f6ee631a71, module_numpy$lib$index_tricks, sizeof(void *) );
    frame_dd925936b88a7fdccf69e4f6ee631a71 = cache_frame_dd925936b88a7fdccf69e4f6ee631a71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd925936b88a7fdccf69e4f6ee631a71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd925936b88a7fdccf69e4f6ee631a71 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_arr;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 878;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 878;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
    frame_dd925936b88a7fdccf69e4f6ee631a71->m_frame.f_lineno = 879;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 879;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "alltrue" );
        exception_tb = NULL;

        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diff" );
        exception_tb = NULL;

        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_arr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_dd925936b88a7fdccf69e4f6ee631a71->m_frame.f_lineno = 882;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_dd925936b88a7fdccf69e4f6ee631a71->m_frame.f_lineno = 882;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 882;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
    frame_dd925936b88a7fdccf69e4f6ee631a71->m_frame.f_lineno = 883;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 883;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag_indices );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diag_indices" );
        exception_tb = NULL;

        exception_lineno = 885;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_arr;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 885;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 885;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_arr;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 885;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_dd925936b88a7fdccf69e4f6ee631a71->m_frame.f_lineno = 885;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 885;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd925936b88a7fdccf69e4f6ee631a71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd925936b88a7fdccf69e4f6ee631a71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dd925936b88a7fdccf69e4f6ee631a71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd925936b88a7fdccf69e4f6ee631a71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd925936b88a7fdccf69e4f6ee631a71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd925936b88a7fdccf69e4f6ee631a71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd925936b88a7fdccf69e4f6ee631a71,
        type_description_1,
        par_arr
    );


    // Release cached frame.
    if ( frame_dd925936b88a7fdccf69e4f6ee631a71 == cache_frame_dd925936b88a7fdccf69e4f6ee631a71 )
    {
        Py_DECREF( frame_dd925936b88a7fdccf69e4f6ee631a71 );
    }
    cache_frame_dd925936b88a7fdccf69e4f6ee631a71 = NULL;

    assertFrameObject( frame_dd925936b88a7fdccf69e4f6ee631a71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_21_diag_indices_from );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_21_diag_indices_from );
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



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_10___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_10___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9a5876da0a48c7747a5c3f287b3828d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_11___next__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_11___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_499bc315720a6903839ca40a5fe5e2ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_12___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_12___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c28c432d999044329e7fd08f4fc00936,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_13___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_19e1f5141d05e51520e7f08ff7f0a93e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_14___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_14___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d2746ab44d0693284a12a1bef2c318f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_15_ndincr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_15_ndincr,
        const_str_plain_ndincr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9a9be0b6193e6e694ff6a621ea09a559,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_3eb9b2ce1271918b85093c648f730487,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_16___next__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_16___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7bae84bca7c62a54e9f8bef816322588,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_17___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7964011e302c9e9b2f972472e5f9c692,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_18___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_18___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_750845eeb2b938e796cd38bcfdbd1e99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_19_fill_diagonal( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_19_fill_diagonal,
        const_str_plain_fill_diagonal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_86cee19ac7b9998ba7d1d16d5f057fd0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_10070abaa510b7ab1f69c9f0869da78b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1_ix_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_1_ix_,
        const_str_plain_ix_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9f002600efb381821a1ecbc23668482,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_1f23860369d1fd3c6fbbd33bcd90092f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_20_diag_indices( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_20_diag_indices,
        const_str_plain_diag_indices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_708d3edf1ad7f89440f79579f48dcf98,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_ba86cdcd3e361316c8e20be24aceabc4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_21_diag_indices_from(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_21_diag_indices_from,
        const_str_plain_diag_indices_from,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd925936b88a7fdccf69e4f6ee631a71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_a332407a4cd6cc926dbf54a127eff824,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ec496630135b7818677f58f9577376d6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_3___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7eeab76cb87aefcb85aecf4ff8158d1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_4___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a1abcde2ec47df658544045fa321a7f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce6658a8ca4ae9bfaf610f18fbbefcb1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_6___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_6___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_677197b00664cdb0d834892f6df383ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_7___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_7___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_05d8f2d460a7cbeb4e2f0f583dcc8aba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7d18a2a86fb1aef1c719bad0fa16b710,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_9___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6c2eb24afa6a5aabd5730ef170bc7e17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$index_tricks =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.index_tricks",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$index_tricks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
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
    puts("numpy.lib.index_tricks: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.index_tricks: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$index_tricks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$index_tricks = Py_InitModule4(
        "numpy.lib.index_tricks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$index_tricks = PyModule_Create( &mdef_numpy$lib$index_tricks );
#endif

    moduledict_numpy$lib$index_tricks = MODULE_DICT( module_numpy$lib$index_tricks );

    CHECK_OBJECT( module_numpy$lib$index_tricks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_82d72071fc1da9db8c6dd31f1049410c, module_numpy$lib$index_tricks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var___getitem__ = NULL;
    PyObject *outline_0_var___len__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var_concatenate = NULL;
    PyObject *outline_1_var_makemat = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var___getitem__ = NULL;
    PyObject *outline_1_var___len__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_3_var___module__ = NULL;
    PyObject *outline_3_var___doc__ = NULL;
    PyObject *outline_3_var___init__ = NULL;
    PyObject *outline_4_var___module__ = NULL;
    PyObject *outline_4_var___doc__ = NULL;
    PyObject *outline_4_var___init__ = NULL;
    PyObject *outline_4_var___next__ = NULL;
    PyObject *outline_4_var___iter__ = NULL;
    PyObject *outline_4_var_next = NULL;
    PyObject *outline_5_var___module__ = NULL;
    PyObject *outline_5_var___doc__ = NULL;
    PyObject *outline_5_var___init__ = NULL;
    PyObject *outline_5_var___iter__ = NULL;
    PyObject *outline_5_var_ndincr = NULL;
    PyObject *outline_5_var___next__ = NULL;
    PyObject *outline_5_var_next = NULL;
    PyObject *outline_6_var___module__ = NULL;
    PyObject *outline_6_var___doc__ = NULL;
    PyObject *outline_6_var___init__ = NULL;
    PyObject *outline_6_var___getitem__ = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
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
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
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
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_staticmethod_arg_1;
    PyObject *tmp_staticmethod_arg_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    static struct Nuitka_FrameObject *cache_frame_926e459299cb9ae25471315d1d76143d_2 = NULL;

    struct Nuitka_FrameObject *frame_926e459299cb9ae25471315d1d76143d_2;

    struct Nuitka_FrameObject *frame_3b08bf90d1c7f168e43be1814174353e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d8136e55f9e3a758c257217caddb80a0;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_3b08bf90d1c7f168e43be1814174353e = MAKE_MODULE_FRAME( codeobj_3b08bf90d1c7f168e43be1814174353e, module_numpy$lib$index_tricks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_3b08bf90d1c7f168e43be1814174353e );
    assert( Py_REFCNT( frame_3b08bf90d1c7f168e43be1814174353e ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 3;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_math;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 4;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_d41b7300892721d5a465b890d461f3a0_tuple;
    tmp_level_name_4 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 7;
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
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_asarray );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_12 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ScalarType );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_array );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_alltrue );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue, tmp_assign_source_15 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_cumprod );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod, tmp_assign_source_16 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_arange );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_17 );
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

    tmp_name_name_5 = const_str_digest_67205772204d1e33862eb50e826ab1cb;
    tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple;
    tmp_level_name_5 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 10;
    tmp_assign_source_18 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_18;

    // Tried code:
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_find_common_type );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type, tmp_assign_source_19 );
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_issubdtype );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_issubdtype, tmp_assign_source_20 );
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

    tmp_name_name_6 = const_str_empty;
    tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_function_base_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 12;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_function_base );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_function_base, tmp_assign_source_21 );
    tmp_name_name_7 = const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
    tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    tmp_level_name_7 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 13;
    tmp_import_name_from_15 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_matrixlib );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrixlib, tmp_assign_source_22 );
    tmp_name_name_8 = const_str_plain_function_base;
    tmp_globals_name_8 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_diff_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 14;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_diff );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff, tmp_assign_source_23 );
    tmp_name_name_9 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
    tmp_globals_name_9 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
    tmp_level_name_9 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 15;
    tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_24;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_ravel_multi_index );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ravel_multi_index, tmp_assign_source_25 );
    tmp_import_name_from_18 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_unravel_index );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_unravel_index, tmp_assign_source_26 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_10 = const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
    tmp_globals_name_10 = (PyObject *)moduledict_numpy$lib$index_tricks;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_as_strided_tuple;
    tmp_level_name_10 = const_int_0;
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 16;
    tmp_import_name_from_19 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_as_strided );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided, tmp_assign_source_27 );
    tmp_assign_source_28 = LIST_COPY( const_list_fa22549eaa1a878119e86a628980cdb1_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1_ix_(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ix_, tmp_assign_source_29 );
    tmp_assign_source_31 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_31 );
    outline_0_var___module__ = tmp_assign_source_31;

    tmp_assign_source_32 = const_str_digest_0db3e65f485c2a70345d144c49db3008;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_32 );
    outline_0_var___doc__ = tmp_assign_source_32;

    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3___getitem__(  );
    assert( outline_0_var___getitem__ == NULL );
    outline_0_var___getitem__ = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4___len__(  );
    assert( outline_0_var___len__ == NULL );
    outline_0_var___len__ = tmp_assign_source_35;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 5 );
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
    tmp_dict_value_4 = outline_0_var___getitem__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___getitem__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var___len__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___len__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___getitem__ );
    Py_DECREF( outline_0_var___getitem__ );
    outline_0_var___getitem__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___len__ );
    Py_DECREF( outline_0_var___len__ );
    outline_0_var___len__ = NULL;

    goto outline_result_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_30 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_30;

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
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_6;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_36 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_36 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_36;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_nd_grid;
    tmp_args_element_name_2 = const_tuple_type_object_tuple;
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_37;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_38 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_38 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid, tmp_assign_source_38 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nd_grid" );
        exception_tb = NULL;

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_c94aedb3aac0d244f6f14be59f80d888 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 226;
    tmp_assign_source_39 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid, tmp_assign_source_39 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nd_grid" );
        exception_tb = NULL;

        exception_lineno = 227;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_28ebf724697f63eaa96dcded742e9de0 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 227;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid, tmp_assign_source_40 );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mgrid );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "mgrid" );
        exception_tb = NULL;

        exception_lineno = 228;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___doc__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;

        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ogrid );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ogrid" );
        exception_tb = NULL;

        exception_lineno = 229;

        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;

        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_assign_source_42 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_42 );
    outline_1_var___module__ = tmp_assign_source_42;

    tmp_assign_source_43 = const_str_digest_4f6ec58bd7ed319799ea7cbde3aac475;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_43 );
    outline_1_var___doc__ = tmp_assign_source_43;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_926e459299cb9ae25471315d1d76143d_2, codeobj_926e459299cb9ae25471315d1d76143d, module_numpy$lib$index_tricks, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_926e459299cb9ae25471315d1d76143d_2 = cache_frame_926e459299cb9ae25471315d1d76143d_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_926e459299cb9ae25471315d1d76143d_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_926e459299cb9ae25471315d1d76143d_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 238;
        type_description_2 = "ooNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_staticmethod_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
    if ( tmp_staticmethod_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_2 = "ooNNNNN";
        goto frame_exception_exit_2;
    }
    tmp_assign_source_44 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
    Py_DECREF( tmp_staticmethod_arg_1 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_2 = "ooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_concatenate == NULL );
    outline_1_var_concatenate = tmp_assign_source_44;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrixlib );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrixlib );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "matrixlib" );
        exception_tb = NULL;

        exception_lineno = 239;
        type_description_2 = "oooNNNN";
        goto frame_exception_exit_2;
    }

    tmp_staticmethod_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_matrix );
    if ( tmp_staticmethod_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_2 = "oooNNNN";
        goto frame_exception_exit_2;
    }
    tmp_assign_source_45 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
    Py_DECREF( tmp_staticmethod_arg_2 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_2 = "oooNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_makemat == NULL );
    outline_1_var_makemat = tmp_assign_source_45;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_926e459299cb9ae25471315d1d76143d_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_926e459299cb9ae25471315d1d76143d_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_926e459299cb9ae25471315d1d76143d_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_926e459299cb9ae25471315d1d76143d_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_926e459299cb9ae25471315d1d76143d_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_926e459299cb9ae25471315d1d76143d_2,
        type_description_2,
        outline_1_var___module__,
        outline_1_var___doc__,
        outline_1_var_concatenate,
        outline_1_var_makemat,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_926e459299cb9ae25471315d1d76143d_2 == cache_frame_926e459299cb9ae25471315d1d76143d_2 )
    {
        Py_DECREF( frame_926e459299cb9ae25471315d1d76143d_2 );
    }
    cache_frame_926e459299cb9ae25471315d1d76143d_2 = NULL;

    assertFrameObject( frame_926e459299cb9ae25471315d1d76143d_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_8;
    skip_nested_handling_1:;
    tmp_defaults_2 = const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_46 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_5___init__( tmp_defaults_2 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_46;

    tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_6___getitem__(  );
    assert( outline_1_var___getitem__ == NULL );
    outline_1_var___getitem__ = tmp_assign_source_47;

    tmp_assign_source_48 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_7___len__(  );
    assert( outline_1_var___len__ == NULL );
    outline_1_var___len__ = tmp_assign_source_48;

    tmp_outline_return_value_2 = _PyDict_NewPresized( 7 );
    tmp_dict_value_6 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_1_var___doc__;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_1_var_concatenate;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_concatenate;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_1_var_makemat;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_makemat;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_1_var___init__;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_1_var___getitem__;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain___getitem__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_1_var___len__;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain___len__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_concatenate );
    Py_DECREF( outline_1_var_concatenate );
    outline_1_var_concatenate = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_makemat );
    Py_DECREF( outline_1_var_makemat );
    outline_1_var_makemat = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___init__ );
    Py_DECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___getitem__ );
    Py_DECREF( outline_1_var___getitem__ );
    outline_1_var___getitem__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___len__ );
    Py_DECREF( outline_1_var___len__ );
    outline_1_var___len__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    Py_XDECREF( outline_1_var_concatenate );
    outline_1_var_concatenate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 231;
    goto try_except_handler_7;
    outline_result_2:;
    tmp_assign_source_41 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_41;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_49 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_7;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_49 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_49 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_49;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_element_name_4 = const_str_plain_AxisConcatenator;
    tmp_args_element_name_5 = const_tuple_type_object_tuple;
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_50;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_51 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_51 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator, tmp_assign_source_51 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    tmp_assign_source_52 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 356;

        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_52;

    tmp_assign_source_54 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_54 );
    outline_2_var___module__ = tmp_assign_source_54;

    tmp_assign_source_55 = const_str_digest_e0b85dd40506d9fdc856d21937e604a5;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_55 );
    outline_2_var___doc__ = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_8___init__(  );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_56;

    // Tried code:
    tmp_outline_return_value_3 = _PyDict_NewPresized( 3 );
    tmp_dict_value_13 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_2_var___doc__;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = outline_2_var___init__;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_53 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_53;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_57 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;

        goto try_except_handler_9;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_1 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_58 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;

        goto try_except_handler_9;
    }
    assert( tmp_select_metaclass_3__base == NULL );
    tmp_select_metaclass_3__base = tmp_assign_source_58;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;

        goto try_except_handler_12;
    }
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_8 );
    Py_XDECREF( exception_keeper_value_8 );
    Py_XDECREF( exception_keeper_tb_8 );
    tmp_type_arg_1 = tmp_select_metaclass_3__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_4 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_4 != NULL );
    goto try_return_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
    Py_DECREF( tmp_select_metaclass_3__base );
    tmp_select_metaclass_3__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_57 = tmp_outline_return_value_4;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_57;

    tmp_called_name_5 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_7 = const_str_plain_RClass;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 356;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_59;

    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_60 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_60 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass, tmp_assign_source_60 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RClass );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RClass" );
        exception_tb = NULL;

        exception_lineno = 454;

        goto frame_exception_exit_1;
    }

    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 454;
    tmp_assign_source_61 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_r_, tmp_assign_source_61 );
    // Tried code:
    tmp_assign_source_62 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 456;

        goto try_except_handler_13;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_62;

    tmp_assign_source_64 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_3_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_64 );
    outline_3_var___module__ = tmp_assign_source_64;

    tmp_assign_source_65 = const_str_digest_40f1dc3f07fc4b907728e1e1bbce86a6;
    assert( outline_3_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_65 );
    outline_3_var___doc__ = tmp_assign_source_65;

    tmp_assign_source_66 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_9___init__(  );
    assert( outline_3_var___init__ == NULL );
    outline_3_var___init__ = tmp_assign_source_66;

    // Tried code:
    tmp_outline_return_value_5 = _PyDict_NewPresized( 3 );
    tmp_dict_value_16 = outline_3_var___module__;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = outline_3_var___doc__;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = outline_3_var___init__;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_3_var___module__ );
    Py_DECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___doc__ );
    Py_DECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___init__ );
    Py_DECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_3_var___module__ );
    Py_DECREF( outline_3_var___module__ );
    outline_3_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___doc__ );
    Py_DECREF( outline_3_var___doc__ );
    outline_3_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_3_var___init__ );
    Py_DECREF( outline_3_var___init__ );
    outline_3_var___init__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_63 = tmp_outline_return_value_5;
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_63;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_4 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_key_name_4 = const_str_plain___metaclass__;
    tmp_assign_source_67 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;

        goto try_except_handler_13;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_subscribed_name_2 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_68 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;

        goto try_except_handler_13;
    }
    assert( tmp_select_metaclass_4__base == NULL );
    tmp_select_metaclass_4__base = tmp_assign_source_68;

    // Tried code:
    // Tried code:
    tmp_source_name_4 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_outline_return_value_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_outline_return_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;

        goto try_except_handler_16;
    }
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_10 );
    Py_XDECREF( exception_keeper_value_10 );
    Py_XDECREF( exception_keeper_tb_10 );
    tmp_type_arg_2 = tmp_select_metaclass_4__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_6 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_6 != NULL );
    goto try_return_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    goto outline_result_6;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
    Py_DECREF( tmp_select_metaclass_4__base );
    tmp_select_metaclass_4__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_67 = tmp_outline_return_value_6;
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_67;

    tmp_called_name_7 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_10 = const_str_plain_CClass;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    CHECK_OBJECT( tmp_args_element_name_12 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 456;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 456;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_69;

    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    tmp_assign_source_70 = tmp_class_creation_4__class;

    CHECK_OBJECT( tmp_assign_source_70 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass, tmp_assign_source_70 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CClass );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CClass" );
        exception_tb = NULL;

        exception_lineno = 484;

        goto frame_exception_exit_1;
    }

    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 484;
    tmp_assign_source_71 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 484;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_c_, tmp_assign_source_71 );
    tmp_assign_source_73 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_4_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_73 );
    outline_4_var___module__ = tmp_assign_source_73;

    tmp_assign_source_74 = const_str_digest_4d27999bfd5f6bdb12905dae26741abe;
    assert( outline_4_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_74 );
    outline_4_var___doc__ = tmp_assign_source_74;

    tmp_assign_source_75 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_10___init__(  );
    assert( outline_4_var___init__ == NULL );
    outline_4_var___init__ = tmp_assign_source_75;

    tmp_assign_source_76 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_11___next__(  );
    assert( outline_4_var___next__ == NULL );
    outline_4_var___next__ = tmp_assign_source_76;

    tmp_assign_source_77 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_12___iter__(  );
    assert( outline_4_var___iter__ == NULL );
    outline_4_var___iter__ = tmp_assign_source_77;

    tmp_assign_source_78 = outline_4_var___next__;

    CHECK_OBJECT( tmp_assign_source_78 );
    assert( outline_4_var_next == NULL );
    Py_INCREF( tmp_assign_source_78 );
    outline_4_var_next = tmp_assign_source_78;

    // Tried code:
    tmp_outline_return_value_7 = _PyDict_NewPresized( 6 );
    tmp_dict_value_19 = outline_4_var___module__;

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = outline_4_var___doc__;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = outline_4_var___init__;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = outline_4_var___next__;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain___next__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = outline_4_var___iter__;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain___iter__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = outline_4_var_next;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain_next;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_7, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    CHECK_OBJECT( (PyObject *)outline_4_var___module__ );
    Py_DECREF( outline_4_var___module__ );
    outline_4_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___doc__ );
    Py_DECREF( outline_4_var___doc__ );
    outline_4_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___init__ );
    Py_DECREF( outline_4_var___init__ );
    outline_4_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___next__ );
    Py_DECREF( outline_4_var___next__ );
    outline_4_var___next__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var___iter__ );
    Py_DECREF( outline_4_var___iter__ );
    outline_4_var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_4_var_next );
    Py_DECREF( outline_4_var_next );
    outline_4_var_next = NULL;

    goto outline_result_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_7:;
    tmp_assign_source_72 = tmp_outline_return_value_7;
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_72;

    // Tried code:
    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain___metaclass__;
    tmp_assign_source_79 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;

        goto try_except_handler_18;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_79 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_79 );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_79;

    tmp_called_name_9 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_9 );
    tmp_args_element_name_13 = const_str_plain_ndenumerate;
    tmp_args_element_name_14 = const_tuple_type_object_tuple;
    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 486;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;

        goto try_except_handler_18;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_80;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_81 = tmp_class_creation_5__class;

    CHECK_OBJECT( tmp_assign_source_81 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndenumerate, tmp_assign_source_81 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    tmp_assign_source_83 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_5_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_83 );
    outline_5_var___module__ = tmp_assign_source_83;

    tmp_assign_source_84 = const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6;
    assert( outline_5_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_84 );
    outline_5_var___doc__ = tmp_assign_source_84;

    tmp_assign_source_85 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_13___init__(  );
    assert( outline_5_var___init__ == NULL );
    outline_5_var___init__ = tmp_assign_source_85;

    tmp_assign_source_86 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_14___iter__(  );
    assert( outline_5_var___iter__ == NULL );
    outline_5_var___iter__ = tmp_assign_source_86;

    tmp_assign_source_87 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_15_ndincr(  );
    assert( outline_5_var_ndincr == NULL );
    outline_5_var_ndincr = tmp_assign_source_87;

    tmp_assign_source_88 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_16___next__(  );
    assert( outline_5_var___next__ == NULL );
    outline_5_var___next__ = tmp_assign_source_88;

    tmp_assign_source_89 = outline_5_var___next__;

    CHECK_OBJECT( tmp_assign_source_89 );
    assert( outline_5_var_next == NULL );
    Py_INCREF( tmp_assign_source_89 );
    outline_5_var_next = tmp_assign_source_89;

    // Tried code:
    tmp_outline_return_value_8 = _PyDict_NewPresized( 7 );
    tmp_dict_value_25 = outline_5_var___module__;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = outline_5_var___doc__;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = outline_5_var___init__;

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_28 = outline_5_var___iter__;

    CHECK_OBJECT( tmp_dict_value_28 );
    tmp_dict_key_28 = const_str_plain___iter__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_29 = outline_5_var_ndincr;

    CHECK_OBJECT( tmp_dict_value_29 );
    tmp_dict_key_29 = const_str_plain_ndincr;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_30 = outline_5_var___next__;

    CHECK_OBJECT( tmp_dict_value_30 );
    tmp_dict_key_30 = const_str_plain___next__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_31 = outline_5_var_next;

    CHECK_OBJECT( tmp_dict_value_31 );
    tmp_dict_key_31 = const_str_plain_next;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_8, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    CHECK_OBJECT( (PyObject *)outline_5_var___module__ );
    Py_DECREF( outline_5_var___module__ );
    outline_5_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var___doc__ );
    Py_DECREF( outline_5_var___doc__ );
    outline_5_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var___init__ );
    Py_DECREF( outline_5_var___init__ );
    outline_5_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var___iter__ );
    Py_DECREF( outline_5_var___iter__ );
    outline_5_var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var_ndincr );
    Py_DECREF( outline_5_var_ndincr );
    outline_5_var_ndincr = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var___next__ );
    Py_DECREF( outline_5_var___next__ );
    outline_5_var___next__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_5_var_next );
    Py_DECREF( outline_5_var_next );
    outline_5_var_next = NULL;

    goto outline_result_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_8:;
    tmp_assign_source_82 = tmp_outline_return_value_8;
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_82;

    // Tried code:
    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_compare_right_6 );
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dict_name_6 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_key_name_6 = const_str_plain___metaclass__;
    tmp_assign_source_90 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 536;

        goto try_except_handler_20;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_90 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_90 );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_90;

    tmp_called_name_10 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_args_element_name_16 = const_str_plain_ndindex;
    tmp_args_element_name_17 = const_tuple_type_object_tuple;
    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 536;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 536;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_91;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    tmp_assign_source_92 = tmp_class_creation_6__class;

    CHECK_OBJECT( tmp_assign_source_92 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndindex, tmp_assign_source_92 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    tmp_assign_source_94 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( outline_6_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_94 );
    outline_6_var___module__ = tmp_assign_source_94;

    tmp_assign_source_95 = const_str_digest_fc8926c182d686d26fd1d5b3b74287d6;
    assert( outline_6_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_95 );
    outline_6_var___doc__ = tmp_assign_source_95;

    tmp_assign_source_96 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_17___init__(  );
    assert( outline_6_var___init__ == NULL );
    outline_6_var___init__ = tmp_assign_source_96;

    tmp_assign_source_97 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_18___getitem__(  );
    assert( outline_6_var___getitem__ == NULL );
    outline_6_var___getitem__ = tmp_assign_source_97;

    // Tried code:
    tmp_outline_return_value_9 = _PyDict_NewPresized( 4 );
    tmp_dict_value_32 = outline_6_var___module__;

    CHECK_OBJECT( tmp_dict_value_32 );
    tmp_dict_key_32 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_9, tmp_dict_key_32, tmp_dict_value_32 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_33 = outline_6_var___doc__;

    CHECK_OBJECT( tmp_dict_value_33 );
    tmp_dict_key_33 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_9, tmp_dict_key_33, tmp_dict_value_33 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_34 = outline_6_var___init__;

    CHECK_OBJECT( tmp_dict_value_34 );
    tmp_dict_key_34 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_9, tmp_dict_key_34, tmp_dict_value_34 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_35 = outline_6_var___getitem__;

    CHECK_OBJECT( tmp_dict_value_35 );
    tmp_dict_key_35 = const_str_plain___getitem__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_9, tmp_dict_key_35, tmp_dict_value_35 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    CHECK_OBJECT( (PyObject *)outline_6_var___module__ );
    Py_DECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___doc__ );
    Py_DECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___init__ );
    Py_DECREF( outline_6_var___init__ );
    outline_6_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___getitem__ );
    Py_DECREF( outline_6_var___getitem__ );
    outline_6_var___getitem__ = NULL;

    goto outline_result_9;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_6_var___module__ );
    Py_DECREF( outline_6_var___module__ );
    outline_6_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___doc__ );
    Py_DECREF( outline_6_var___doc__ );
    outline_6_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___init__ );
    Py_DECREF( outline_6_var___init__ );
    outline_6_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_6_var___getitem__ );
    Py_DECREF( outline_6_var___getitem__ );
    outline_6_var___getitem__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks );
    return MOD_RETURN_VALUE( NULL );
    outline_result_9:;
    tmp_assign_source_93 = tmp_outline_return_value_9;
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_93;

    // Tried code:
    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_compare_right_7 );
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_7 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_key_name_7 = const_str_plain___metaclass__;
    tmp_assign_source_98 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;

        goto try_except_handler_22;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_98 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_98 );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_98;

    tmp_called_name_11 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_args_element_name_19 = const_str_plain_IndexExpression;
    tmp_args_element_name_20 = const_tuple_type_object_tuple;
    tmp_args_element_name_21 = tmp_class_creation_7__class_dict;

    CHECK_OBJECT( tmp_args_element_name_21 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 614;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 614;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_99;

    goto try_end_11;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_100 = tmp_class_creation_7__class;

    CHECK_OBJECT( tmp_assign_source_100 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression, tmp_assign_source_100 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "IndexExpression" );
        exception_tb = NULL;

        exception_lineno = 667;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = PyDict_Copy( const_dict_0d87fdb65ac69f3e7f132f381a92030e );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 667;
    tmp_assign_source_101 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 667;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_index_exp, tmp_assign_source_101 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "IndexExpression" );
        exception_tb = NULL;

        exception_lineno = 668;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = PyDict_Copy( const_dict_b4dcb48ac0b3434981963a3b0a181907 );
    frame_3b08bf90d1c7f168e43be1814174353e->m_frame.f_lineno = 668;
    tmp_assign_source_102 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 668;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_s_, tmp_assign_source_102 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b08bf90d1c7f168e43be1814174353e );
#endif
    popFrameStack();

    assertFrameObject( frame_3b08bf90d1c7f168e43be1814174353e );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b08bf90d1c7f168e43be1814174353e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b08bf90d1c7f168e43be1814174353e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b08bf90d1c7f168e43be1814174353e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b08bf90d1c7f168e43be1814174353e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_defaults_3 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_103 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_19_fill_diagonal( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_fill_diagonal, tmp_assign_source_103 );
    tmp_defaults_4 = const_tuple_int_pos_2_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_104 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_20_diag_indices( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices, tmp_assign_source_104 );
    tmp_assign_source_105 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_21_diag_indices_from(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices_from, tmp_assign_source_105 );

    return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
