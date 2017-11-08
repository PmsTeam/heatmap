/* Generated code for Python source for module 'numpy.core.fromnumeric'
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

/* The _module_numpy$core$fromnumeric is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$fromnumeric;
PyDictObject *moduledict_numpy$core$fromnumeric;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_fb1d23510569cbe168f39f14c7fe964a;
static PyObject *const_str_digest_33d24d6d1a6d6d15968f19eb6989caf3;
extern PyObject *const_str_plain___package__;
static PyObject *const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple;
extern PyObject *const_str_plain_trace;
extern PyObject *const_tuple_str_plain_umath_tuple;
extern PyObject *const_str_plain_squeeze;
extern PyObject *const_str_plain_multiarray;
extern PyObject *const_str_plain__amax;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple;
extern PyObject *const_str_plain__amin;
extern PyObject *const_str_plain_choices;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_prod;
static PyObject *const_tuple_str_plain_VisibleDeprecationWarning_tuple;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_digest_1ef45ecbf5bc6ea5a65383473136d504;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_searchsorted;
extern PyObject *const_str_plain_put;
static PyObject *const_str_plain__sum_;
extern PyObject *const_tuple_str_plain_a_str_plain_axis_tuple;
static PyObject *const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple;
extern PyObject *const_str_plain_sort;
static PyObject *const_dict_2830dc36950302d53e2190617abf71aa;
extern PyObject *const_str_plain_kth;
extern PyObject *const_str_plain_argsort;
extern PyObject *const_tuple_int_0_int_0_int_pos_1_none_none_tuple;
extern PyObject *const_str_plain_cumsum;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_digest_ac1157962de1619b9ba4ac2293fff7bc;
extern PyObject *const_str_plain_K;
extern PyObject *const_tuple_str_plain_raise_tuple;
extern PyObject *const_str_plain_newshape;
extern PyObject *const_str_plain_um;
static PyObject *const_str_digest_8061a2bf8d5ec969398499295c8602b6;
extern PyObject *const_tuple_int_0_none_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_amax;
static PyObject *const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_amin;
extern PyObject *const_str_plain_zeros;
static PyObject *const_str_digest_f1d642b2b049c7d76a6654a787ff6c94;
extern PyObject *const_tuple_str_plain_multiarray_tuple;
static PyObject *const_str_plain_n_copies;
static PyObject *const_str_digest_91c0725a93e66a9dd9541bfe634cf18d;
extern PyObject *const_str_plain_round_;
static PyObject *const_str_digest_ae4eb518f61ccca8530e7e84de7d80b8;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_sometrue;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain__std;
static PyObject *const_list_5bcf58e7a2932a3dd284b39be3842608_list;
static PyObject *const_str_plain__dt_;
extern PyObject *const_tuple_str_plain_a_str_plain_order_tuple;
static PyObject *const_str_plain_sorter;
extern PyObject *const_str_plain_rank;
static PyObject *const_str_plain_a_max;
extern PyObject *const_str_plain_sum;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_tuple_090a752124ee3234483a02764b842c3c_tuple;
static PyObject *const_str_digest_89511fb01a2c0575918bd4d916d0e1cf;
extern PyObject *const_str_plain_argmax;
static PyObject *const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple;
extern PyObject *const_str_plain_ndmin;
extern PyObject *const_str_plain_a;
extern PyObject *const_tuple_int_neg_1_str_plain_quicksort_none_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple;
extern PyObject *const_str_plain_resize;
extern PyObject *const_str_plain_min;
extern PyObject *const_tuple_none_none_str_plain_raise_tuple;
extern PyObject *const_str_plain_condition;
extern PyObject *const_str_plain_raise;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_digest_4b3ee679dde8d94e459b0bb06cdd762f;
extern PyObject *const_str_plain_alltrue;
extern PyObject *const_tuple_str_plain_C_tuple;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_str_plain__mean;
static PyObject *const_tuple_str_plain_a_str_plain_axis1_str_plain_axis2_tuple;
extern PyObject *const_str_plain_product;
extern PyObject *const_str_plain_flatten;
extern PyObject *const_str_plain_keepdims;
static PyObject *const_str_plain__methods;
extern PyObject *const_str_plain_reduce;
extern PyObject *const_str_plain_round;
static PyObject *const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple;
extern PyObject *const_tuple_str_plain_a_str_plain_axes_tuple;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_2abbd68e10736336fe911205e31497cd;
static PyObject *const_str_plain_alen;
static PyObject *const_str_digest_9a57076ed9f39b121973c373a4348abc;
static PyObject *const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple;
extern PyObject *const_str_plain_mean;
extern PyObject *const_str_plain_offset;
static PyObject *const_str_plain__wrapit;
static PyObject *const_str_digest_1a41896150fe48e2265939b982d714a9;
extern PyObject *const_str_plain_repeats;
static PyObject *const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_Na;
extern PyObject *const_str_plain_std;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_af78b56081e18515b964d47391ae5f26;
extern PyObject *const_str_plain__NoValue;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_6efdc240480bed276509a43fb0d786b3;
static PyObject *const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple;
static PyObject *const_str_digest_fd7b0efc97ed103434a62872cba77ea9;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_diagonal;
static PyObject *const_str_digest_1b7219e0e37b8144ad5f1f19b414b41e;
static PyObject *const_str_digest_e2ac8db184a15b8fe0224ec698d0dc50;
static PyObject *const_tuple_str_plain_a_str_plain_repeats_str_plain_axis_tuple;
static PyObject *const_str_digest_47547a130b8ae45525b36f179324e01a;
extern PyObject *const_str_plain_array;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_arr;
static PyObject *const_str_digest_05eada0efdeea74358c1ee6d52363bbf;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_squeeze_tuple;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_ptp;
extern PyObject *const_str_plain_nt;
static PyObject *const_str_digest_a45c7da78d4c28337a03040e50d043ff;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_side;
extern PyObject *const_str_plain__sum;
extern PyObject *const_str_plain_quicksort;
extern PyObject *const_str_plain_around;
static PyObject *const_tuple_str_plain_a_str_plain_newshape_str_plain_order_tuple;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_digest_fef7e379d8b29f70158a022afa317baa;
extern PyObject *const_str_plain_left;
extern PyObject *const_str_plain_indices;
extern PyObject *const_tuple_none_str_plain_raise_tuple;
extern PyObject *const_str_digest_b2018eb78a3eeac9382ce769dbfe3d62;
static PyObject *const_str_digest_93d98402019f2c5b21314376f6d62631;
extern PyObject *const_str_plain_extra;
static PyObject *const_str_digest_0505708f127872fc6f4fd08a7a7741de;
static PyObject *const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple;
extern PyObject *const_str_plain_clip;
static PyObject *const_str_digest_c310068406a2165677e3416ab3fc333c;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_sctype2char;
static PyObject *const_tuple_int_neg_1_str_plain_introselect_none_tuple;
static PyObject *const_str_digest_73bb4c2a3e8cac6830fdd1b6d142e898;
static PyObject *const_str_digest_70d16d9c01f37ca837c2fd700d98ce9f;
extern PyObject *const_str_plain_partition;
static PyObject *const_str_plain_GeneratorType;
extern PyObject *const_str_plain_ddof;
static PyObject *const_str_plain__wrapfunc;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_4353a4ef4d1c4ec280ef7e3fc2a08727;
static PyObject *const_str_plain_cumproduct;
extern PyObject *const_str_plain_new_shape;
extern PyObject *const_str_plain_name;
static PyObject *const_str_digest_598722f12e7d6a112e09b950d882275d;
static PyObject *const_str_digest_c9e31561733b63d1c3eb15eb85986b7c;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_mu;
static PyObject *const_str_digest_96a89cb2019b1773bb588a8400a7ca7a;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_result;
static PyObject *const_str_digest_1e5521195db9a177a354f84a5a740040;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_numerictypes;
extern PyObject *const_str_plain_res;
static PyObject *const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_ravel;
static PyObject *const_str_digest_6227b43899f23aac5dd8e59947bf8958;
extern PyObject *const_str_plain_ndim;
static PyObject *const_str_digest_a2692b56b5ea1224452a8348de135dac;
extern PyObject *const_str_plain_obj;
static PyObject *const_str_digest_ee89850c80de3685b03fefc07d7daada;
extern PyObject *const_str_plain___array_wrap__;
static PyObject *const_str_digest_d9aef909d8aeda9edae44c9c6eaf9cf8;
static PyObject *const_str_plain__gentype;
static PyObject *const_str_digest_83ee5e1f6969c3d467b6cd567f648bcd;
extern PyObject *const_str_plain_choose;
static PyObject *const_str_digest_12f7ab69d018fa6128bfc336a4683f67;
extern PyObject *const_str_plain__var;
static PyObject *const_str_digest_3698ea4a9e08463094511d03a54155eb;
static PyObject *const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple;
extern PyObject *const_str_plain_np;
static PyObject *const_str_plain_a_min;
extern PyObject *const_str_plain_argpartition;
static PyObject *const_tuple_str_plain__methods_tuple;
extern PyObject *const_tuple_str_plain_a_str_plain_result_tuple;
static PyObject *const_tuple_str_plain_left_none_tuple;
static PyObject *const_str_digest_3bc47629c6bc2aec17b5bac36cb0cda7;
static PyObject *const_str_digest_36babf27a20a270c2eef9b35fe47060f;
extern PyObject *const_str_plain_var;
static PyObject *const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple;
static PyObject *const_str_digest_f482b37c056aa4943ff712f0e718825a;
extern PyObject *const_str_plain_args;
static PyObject *const_tuple_int_0_int_0_int_pos_1_tuple;
extern PyObject *const_str_plain_multiply;
static PyObject *const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple;
extern PyObject *const_str_plain_decimals;
static PyObject *const_str_plain_total_size;
extern PyObject *const_str_plain_repeat;
static PyObject *const_str_plain_introselect;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
extern PyObject *const_dict_21567982cb441e6dbff88523281a645a;
static PyObject *const_str_digest_d0fe69a1b197edb6b3a9bd4123f0ee06;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_types;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_VisibleDeprecationWarning;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_matrix;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_172a1b3a40690b4fdb09facddd614332_tuple;
static PyObject *const_str_digest_a9435dc229e1d1b0ac4a49d564fa098a;
extern PyObject *const_str_plain_kwds;
static PyObject *const_str_digest_b948e7a217631f7f09a0540b484ae244;
static PyObject *const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_bc3564c9f9045dc0582523f16984f81c;
extern PyObject *const_str_plain_asanyarray;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_axis1;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_umath;
extern PyObject *const_str_plain_axis2;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_compress;
static PyObject *const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple;
static PyObject *const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple;
static PyObject *const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_digest_22aba64321e53a692d13f613c7d8d50e;
extern PyObject *const_str_plain__prod;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_str_digest_cbefd752fe01ac9f28a44807e4337d32;
extern PyObject *const_str_plain_cumprod;
extern PyObject *const_tuple_str_plain_a_str_plain_decimals_str_plain_out_tuple;
static PyObject *const_str_digest_ac46dc5d0c35fa2a6bc67dd7c8fb0514;
static PyObject *const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_e026f0e5a09dd2d6f8c03a2ebff54147;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_fb1d23510569cbe168f39f14c7fe964a = UNSTREAM_STRING( &constant_bin[ 322145 ], 1920, 0 );
    const_str_digest_33d24d6d1a6d6d15968f19eb6989caf3 = UNSTREAM_STRING( &constant_bin[ 324065 ], 2693, 0 );
    const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 6, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 7, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_tuple_str_plain_VisibleDeprecationWarning_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_VisibleDeprecationWarning_tuple, 0, const_str_plain_VisibleDeprecationWarning ); Py_INCREF( const_str_plain_VisibleDeprecationWarning );
    const_str_digest_1ef45ecbf5bc6ea5a65383473136d504 = UNSTREAM_STRING( &constant_bin[ 326758 ], 3490, 0 );
    const_str_plain__sum_ = UNSTREAM_STRING( &constant_bin[ 330248 ], 5, 1 );
    const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 3, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 5, const_str_plain_amin ); Py_INCREF( const_str_plain_amin );
    const_dict_2830dc36950302d53e2190617abf71aa = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_2830dc36950302d53e2190617abf71aa, const_str_plain_ndmin, const_int_pos_1 );
    assert( PyDict_Size( const_dict_2830dc36950302d53e2190617abf71aa ) == 1 );
    const_str_digest_ac1157962de1619b9ba4ac2293fff7bc = UNSTREAM_STRING( &constant_bin[ 330253 ], 2716, 0 );
    const_str_digest_8061a2bf8d5ec969398499295c8602b6 = UNSTREAM_STRING( &constant_bin[ 332969 ], 1658, 0 );
    const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple, 2, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple, 3, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 6, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 7, const_str_plain_sum ); Py_INCREF( const_str_plain_sum );
    const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple, 1, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple, 2, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    PyTuple_SET_ITEM( const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple, 3, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    const_str_digest_f1d642b2b049c7d76a6654a787ff6c94 = UNSTREAM_STRING( &constant_bin[ 334627 ], 138, 0 );
    const_str_plain_n_copies = UNSTREAM_STRING( &constant_bin[ 334765 ], 8, 1 );
    const_str_digest_91c0725a93e66a9dd9541bfe634cf18d = UNSTREAM_STRING( &constant_bin[ 334773 ], 1790, 0 );
    const_str_digest_ae4eb518f61ccca8530e7e84de7d80b8 = UNSTREAM_STRING( &constant_bin[ 336563 ], 142, 0 );
    const_list_5bcf58e7a2932a3dd284b39be3842608_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 336705 ], 491 );
    const_str_plain__dt_ = UNSTREAM_STRING( &constant_bin[ 337196 ], 4, 1 );
    const_str_plain_sorter = UNSTREAM_STRING( &constant_bin[ 173263 ], 6, 1 );
    const_str_plain_a_max = UNSTREAM_STRING( &constant_bin[ 335300 ], 5, 1 );
    const_str_digest_89511fb01a2c0575918bd4d916d0e1cf = UNSTREAM_STRING( &constant_bin[ 337200 ], 128, 0 );
    const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 6, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 7, const_str_plain_std ); Py_INCREF( const_str_plain_std );
    const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 6, const_str_plain_mean ); Py_INCREF( const_str_plain_mean );
    const_str_digest_4b3ee679dde8d94e459b0bb06cdd762f = UNSTREAM_STRING( &constant_bin[ 337328 ], 2892, 0 );
    const_tuple_str_plain_a_str_plain_axis1_str_plain_axis2_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis1_str_plain_axis2_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis1_str_plain_axis2_tuple, 1, const_str_plain_axis1 ); Py_INCREF( const_str_plain_axis1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis1_str_plain_axis2_tuple, 2, const_str_plain_axis2 ); Py_INCREF( const_str_plain_axis2 );
    const_str_plain__methods = UNSTREAM_STRING( &constant_bin[ 242575 ], 8, 1 );
    const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    const_str_plain_a_min = UNSTREAM_STRING( &constant_bin[ 335135 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple, 1, const_str_plain_a_min ); Py_INCREF( const_str_plain_a_min );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple, 2, const_str_plain_a_max ); Py_INCREF( const_str_plain_a_max );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_str_digest_2abbd68e10736336fe911205e31497cd = UNSTREAM_STRING( &constant_bin[ 340220 ], 2252, 0 );
    const_str_plain_alen = UNSTREAM_STRING( &constant_bin[ 43538 ], 4, 1 );
    const_str_digest_9a57076ed9f39b121973c373a4348abc = UNSTREAM_STRING( &constant_bin[ 342472 ], 2108, 0 );
    const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_plain__wrapit = UNSTREAM_STRING( &constant_bin[ 344580 ], 7, 1 );
    const_str_digest_1a41896150fe48e2265939b982d714a9 = UNSTREAM_STRING( &constant_bin[ 344587 ], 4066, 0 );
    const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple, 1, const_str_plain_choices ); Py_INCREF( const_str_plain_choices );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    const_str_plain_Na = UNSTREAM_STRING( &constant_bin[ 1786 ], 2, 1 );
    const_str_digest_af78b56081e18515b964d47391ae5f26 = UNSTREAM_STRING( &constant_bin[ 348653 ], 3519, 0 );
    const_str_digest_6efdc240480bed276509a43fb0d786b3 = UNSTREAM_STRING( &constant_bin[ 352172 ], 603, 0 );
    const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 1, const_str_plain_kth ); Py_INCREF( const_str_plain_kth );
    PyTuple_SET_ITEM( const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 3, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 4, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_str_digest_fd7b0efc97ed103434a62872cba77ea9 = UNSTREAM_STRING( &constant_bin[ 352775 ], 3197, 0 );
    const_str_digest_1b7219e0e37b8144ad5f1f19b414b41e = UNSTREAM_STRING( &constant_bin[ 355972 ], 376, 0 );
    const_str_digest_e2ac8db184a15b8fe0224ec698d0dc50 = UNSTREAM_STRING( &constant_bin[ 356348 ], 2114, 0 );
    const_tuple_str_plain_a_str_plain_repeats_str_plain_axis_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_repeats_str_plain_axis_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_repeats_str_plain_axis_tuple, 1, const_str_plain_repeats ); Py_INCREF( const_str_plain_repeats );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_repeats_str_plain_axis_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_digest_47547a130b8ae45525b36f179324e01a = UNSTREAM_STRING( &constant_bin[ 358462 ], 1307, 0 );
    const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_str_digest_05eada0efdeea74358c1ee6d52363bbf = UNSTREAM_STRING( &constant_bin[ 359769 ], 3238, 0 );
    const_tuple_str_plain_a_str_plain_axis_str_plain_squeeze_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_squeeze_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_squeeze_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_squeeze_tuple, 2, const_str_plain_squeeze ); Py_INCREF( const_str_plain_squeeze );
    const_str_digest_a45c7da78d4c28337a03040e50d043ff = UNSTREAM_STRING( &constant_bin[ 363007 ], 1795, 0 );
    const_str_plain_side = UNSTREAM_STRING( &constant_bin[ 19344 ], 4, 1 );
    const_tuple_str_plain_a_str_plain_newshape_str_plain_order_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_newshape_str_plain_order_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_newshape_str_plain_order_tuple, 1, const_str_plain_newshape ); Py_INCREF( const_str_plain_newshape );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_newshape_str_plain_order_tuple, 2, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    const_str_digest_93d98402019f2c5b21314376f6d62631 = UNSTREAM_STRING( &constant_bin[ 364802 ], 1061, 0 );
    const_str_digest_0505708f127872fc6f4fd08a7a7741de = UNSTREAM_STRING( &constant_bin[ 365863 ], 67, 0 );
    const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 4, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 5, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_c310068406a2165677e3416ab3fc333c = UNSTREAM_STRING( &constant_bin[ 365930 ], 1936, 0 );
    const_tuple_int_neg_1_str_plain_introselect_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_str_plain_introselect_none_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_plain_introselect = UNSTREAM_STRING( &constant_bin[ 79062 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_str_plain_introselect_none_tuple, 1, const_str_plain_introselect ); Py_INCREF( const_str_plain_introselect );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_str_plain_introselect_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_73bb4c2a3e8cac6830fdd1b6d142e898 = UNSTREAM_STRING( &constant_bin[ 367866 ], 3806, 0 );
    const_str_digest_70d16d9c01f37ca837c2fd700d98ce9f = UNSTREAM_STRING( &constant_bin[ 371672 ], 2278, 0 );
    const_str_plain_GeneratorType = UNSTREAM_STRING( &constant_bin[ 373950 ], 13, 1 );
    const_str_plain__wrapfunc = UNSTREAM_STRING( &constant_bin[ 373963 ], 9, 1 );
    const_str_digest_4353a4ef4d1c4ec280ef7e3fc2a08727 = UNSTREAM_STRING( &constant_bin[ 373972 ], 1307, 0 );
    const_str_plain_cumproduct = UNSTREAM_STRING( &constant_bin[ 336877 ], 10, 1 );
    const_str_digest_598722f12e7d6a112e09b950d882275d = UNSTREAM_STRING( &constant_bin[ 375279 ], 2716, 0 );
    const_str_digest_c9e31561733b63d1c3eb15eb85986b7c = UNSTREAM_STRING( &constant_bin[ 377995 ], 165, 0 );
    const_str_digest_96a89cb2019b1773bb588a8400a7ca7a = UNSTREAM_STRING( &constant_bin[ 378160 ], 982, 0 );
    const_str_digest_1e5521195db9a177a354f84a5a740040 = UNSTREAM_STRING( &constant_bin[ 379142 ], 1193, 0 );
    const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple, 1, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple, 4, const_str_plain_put ); Py_INCREF( const_str_plain_put );
    const_str_digest_6227b43899f23aac5dd8e59947bf8958 = UNSTREAM_STRING( &constant_bin[ 380335 ], 2464, 0 );
    const_str_digest_a2692b56b5ea1224452a8348de135dac = UNSTREAM_STRING( &constant_bin[ 382799 ], 919, 0 );
    const_str_digest_ee89850c80de3685b03fefc07d7daada = UNSTREAM_STRING( &constant_bin[ 383718 ], 3861, 0 );
    const_str_digest_d9aef909d8aeda9edae44c9c6eaf9cf8 = UNSTREAM_STRING( &constant_bin[ 387579 ], 141, 0 );
    const_str_plain__gentype = UNSTREAM_STRING( &constant_bin[ 387720 ], 8, 1 );
    const_str_digest_83ee5e1f6969c3d467b6cd567f648bcd = UNSTREAM_STRING( &constant_bin[ 387728 ], 637, 0 );
    const_str_digest_12f7ab69d018fa6128bfc336a4683f67 = UNSTREAM_STRING( &constant_bin[ 388365 ], 31, 0 );
    const_str_digest_3698ea4a9e08463094511d03a54155eb = UNSTREAM_STRING( &constant_bin[ 388396 ], 55, 0 );
    const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple, 1, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple, 2, const_str_plain_axis1 ); Py_INCREF( const_str_plain_axis1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple, 3, const_str_plain_axis2 ); Py_INCREF( const_str_plain_axis2 );
    const_tuple_str_plain__methods_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__methods_tuple, 0, const_str_plain__methods ); Py_INCREF( const_str_plain__methods );
    const_tuple_str_plain_left_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_left_none_tuple, 0, const_str_plain_left ); Py_INCREF( const_str_plain_left );
    PyTuple_SET_ITEM( const_tuple_str_plain_left_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_3bc47629c6bc2aec17b5bac36cb0cda7 = UNSTREAM_STRING( &constant_bin[ 388451 ], 924, 0 );
    const_str_digest_36babf27a20a270c2eef9b35fe47060f = UNSTREAM_STRING( &constant_bin[ 389375 ], 1279, 0 );
    const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple, 0, const_str_plain_condition ); Py_INCREF( const_str_plain_condition );
    PyTuple_SET_ITEM( const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_str_digest_f482b37c056aa4943ff712f0e718825a = UNSTREAM_STRING( &constant_bin[ 390654 ], 147, 0 );
    const_tuple_int_0_int_0_int_pos_1_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_pos_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_pos_1_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_pos_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_plain_total_size = UNSTREAM_STRING( &constant_bin[ 390801 ], 10, 1 );
    const_str_digest_d0fe69a1b197edb6b3a9bd4123f0ee06 = UNSTREAM_STRING( &constant_bin[ 390811 ], 4242, 0 );
    const_tuple_172a1b3a40690b4fdb09facddd614332_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 1, const_str_plain_new_shape ); Py_INCREF( const_str_plain_new_shape );
    PyTuple_SET_ITEM( const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 2, const_str_plain_Na ); Py_INCREF( const_str_plain_Na );
    PyTuple_SET_ITEM( const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 3, const_str_plain_total_size ); Py_INCREF( const_str_plain_total_size );
    PyTuple_SET_ITEM( const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 4, const_str_plain_n_copies ); Py_INCREF( const_str_plain_n_copies );
    PyTuple_SET_ITEM( const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 5, const_str_plain_extra ); Py_INCREF( const_str_plain_extra );
    const_str_digest_a9435dc229e1d1b0ac4a49d564fa098a = UNSTREAM_STRING( &constant_bin[ 395053 ], 3156, 0 );
    const_str_digest_b948e7a217631f7f09a0540b484ae244 = UNSTREAM_STRING( &constant_bin[ 398209 ], 4721, 0 );
    const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 3, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 4, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_bc3564c9f9045dc0582523f16984f81c = UNSTREAM_STRING( &constant_bin[ 402930 ], 2141, 0 );
    const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 1, const_str_plain_offset ); Py_INCREF( const_str_plain_offset );
    PyTuple_SET_ITEM( const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 2, const_str_plain_axis1 ); Py_INCREF( const_str_plain_axis1 );
    PyTuple_SET_ITEM( const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 3, const_str_plain_axis2 ); Py_INCREF( const_str_plain_axis2 );
    PyTuple_SET_ITEM( const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 4, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 5, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 6, const_str_plain_prod ); Py_INCREF( const_str_plain_prod );
    const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple, 2, const_str_plain_side ); Py_INCREF( const_str_plain_side );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple, 3, const_str_plain_sorter ); Py_INCREF( const_str_plain_sorter );
    const_str_digest_22aba64321e53a692d13f613c7d8d50e = UNSTREAM_STRING( &constant_bin[ 405071 ], 656, 0 );
    const_str_digest_cbefd752fe01ac9f28a44807e4337d32 = UNSTREAM_STRING( &constant_bin[ 405727 ], 1058, 0 );
    const_str_digest_ac46dc5d0c35fa2a6bc67dd7c8fb0514 = UNSTREAM_STRING( &constant_bin[ 406785 ], 904, 0 );
    const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 3, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 5, const_str_plain_amax ); Py_INCREF( const_str_plain_amax );
    const_str_digest_e026f0e5a09dd2d6f8c03a2ebff54147 = UNSTREAM_STRING( &constant_bin[ 407689 ], 1782, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$fromnumeric( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_8f25d9988569c2763fdd7d8087bb6304;
static PyCodeObject *codeobj_3782fd983bd95d968b4e5776fc06e13a;
static PyCodeObject *codeobj_94546b95c37d6f848e090db696a284fd;
static PyCodeObject *codeobj_26e85d5558bb42a61b04cb9b3fc67e50;
static PyCodeObject *codeobj_4563e9aaab3749205c0045f53557252f;
static PyCodeObject *codeobj_86d7ff9025e724088d2d14ae53a344c0;
static PyCodeObject *codeobj_2d8838747087c5b2003a45c211490d53;
static PyCodeObject *codeobj_aee98ad843a4a2a935e84acc30d53314;
static PyCodeObject *codeobj_1f286dcfd8cd0c2536ee22020c7b0aba;
static PyCodeObject *codeobj_e86a0a0b4965db12b55cbc128bdb7ebb;
static PyCodeObject *codeobj_bb535e6fbca89b50e966ae87f03034c6;
static PyCodeObject *codeobj_94e016a84a184e4307bff9bce3728549;
static PyCodeObject *codeobj_084fdf1419a4088eab267436923d6987;
static PyCodeObject *codeobj_79f912e84fb8750ca1981e611bc11dce;
static PyCodeObject *codeobj_eab00ba61e17010ef7e75d0f6defd9ea;
static PyCodeObject *codeobj_74d1219be38d0bfbc3002d064fafda08;
static PyCodeObject *codeobj_ab3b96fb215cdf44af8ead58a587be38;
static PyCodeObject *codeobj_290b082cc13e43edf0eb46ad59169f48;
static PyCodeObject *codeobj_c41f2c49faa913042959b50d0f31c6e7;
static PyCodeObject *codeobj_fc79d6341d07e9e366a9abbe8a9279e3;
static PyCodeObject *codeobj_681f591daff9a8703207b58d5d016f6d;
static PyCodeObject *codeobj_0637c7efc486b5cebc5435e7539a3155;
static PyCodeObject *codeobj_dd857839a54b06f6eea51371789e765f;
static PyCodeObject *codeobj_471ccb8d5e275665aa9d58a97dacfed4;
static PyCodeObject *codeobj_167f9a1d4dee3efea0f6961b4c46f059;
static PyCodeObject *codeobj_f9d82324105b06245991a7b19d41e690;
static PyCodeObject *codeobj_915080cffb930b0c8c76b014d829b3ea;
static PyCodeObject *codeobj_72716efcb943f5f5e0ca43b34b0cf0f2;
static PyCodeObject *codeobj_a40432db832dad8f90b209073558fabb;
static PyCodeObject *codeobj_60763c04f218c157984e2782bfbbfb93;
static PyCodeObject *codeobj_296387ff09017798e2e175e3dbfd7b0d;
static PyCodeObject *codeobj_de6290971fc931099f58dfe4f421ca74;
static PyCodeObject *codeobj_3b2fda2b9c059a9ffe0ea037abeac1b2;
static PyCodeObject *codeobj_ac6375c30034a3550dc37bd9006f6cf8;
static PyCodeObject *codeobj_8f6125997590f2435bb540f56de1011b;
static PyCodeObject *codeobj_b017fcb83184dce55ba5c12a33e35bb7;
static PyCodeObject *codeobj_01d01d4b7980fc3d7b02435c8b3a604f;
static PyCodeObject *codeobj_9ef28fbe208f10629211d2e1ea13e62f;
static PyCodeObject *codeobj_c1164f176ddf92a60a9c3aecf22ca08d;
static PyCodeObject *codeobj_1d477f849b2db00333ca111f631db8a2;
static PyCodeObject *codeobj_c435273ec25a07b6f693a4660c107ec8;
static PyCodeObject *codeobj_4b8639055ae79566225040d974e3c0b5;
static PyCodeObject *codeobj_27e5b1ca3e17a4178b700fc3c8fbaada;
static PyCodeObject *codeobj_3f51f9c2e8d12f439c158e5aae668d66;
static PyCodeObject *codeobj_8463160679efd9f3848e471aa833cb26;
static PyCodeObject *codeobj_3fe07f46d5b04f691b9b9ad921fccce2;
static PyCodeObject *codeobj_3dcbed045e613fd8d5caccd9e7388ec2;
static PyCodeObject *codeobj_f9411e1dc2bbe86384ccc95d60ca9494;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3698ea4a9e08463094511d03a54155eb;
    codeobj_8f25d9988569c2763fdd7d8087bb6304 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_12f7ab69d018fa6128bfc336a4683f67, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3782fd983bd95d968b4e5776fc06e13a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrapfunc, 55, const_tuple_str_plain_obj_str_plain_method_str_plain_args_str_plain_kwds_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_94546b95c37d6f848e090db696a284fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__wrapit, 42, const_tuple_d0d04fa2a1353e3e7bb24a9b5b97b4ea_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_26e85d5558bb42a61b04cb9b3fc67e50 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_alen, 2375, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4563e9aaab3749205c0045f53557252f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_all, 1973, const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_86d7ff9025e724088d2d14ae53a344c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_alltrue, 1870, const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2d8838747087c5b2003a45c211490d53 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_amax, 2174, const_tuple_ccfcd63be2a64f3e76e9c97134b8a195_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aee98ad843a4a2a935e84acc30d53314 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_amin, 2275, const_tuple_f5bc3660d50922ecfb539feec74ec95f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f286dcfd8cd0c2536ee22020c7b0aba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_any, 1886, const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e86a0a0b4965db12b55cbc128bdb7ebb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_argmax, 910, const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bb535e6fbca89b50e966ae87f03034c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_argmin, 966, const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_94e016a84a184e4307bff9bce3728549 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_argpartition, 643, const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_084fdf1419a4088eab267436923d6987 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_argsort, 826, const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79f912e84fb8750ca1981e611bc11dce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_around, 2723, const_tuple_str_plain_a_str_plain_decimals_str_plain_out_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eab00ba61e17010ef7e75d0f6defd9ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_choose, 235, const_tuple_str_plain_a_str_plain_choices_str_plain_out_str_plain_mode_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_74d1219be38d0bfbc3002d064fafda08 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_clip, 1673, const_tuple_str_plain_a_str_plain_a_min_str_plain_a_max_str_plain_out_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ab3b96fb215cdf44af8ead58a587be38 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compress, 1610, const_tuple_str_plain_condition_str_plain_a_str_plain_axis_str_plain_out_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_290b082cc13e43edf0eb46ad59169f48 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cumprod, 2521, const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c41f2c49faa913042959b50d0f31c6e7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cumproduct, 2120, const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc79d6341d07e9e366a9abbe8a9279e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cumsum, 2053, const_tuple_str_plain_a_str_plain_axis_str_plain_dtype_str_plain_out_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_681f591daff9a8703207b58d5d016f6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diagonal, 1204, const_tuple_str_plain_a_str_plain_offset_str_plain_axis1_str_plain_axis2_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0637c7efc486b5cebc5435e7539a3155 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mean, 2806, const_tuple_83ec429cfd98786891d582137f9ac7e2_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dd857839a54b06f6eea51371789e765f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ndim, 2584, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_471ccb8d5e275665aa9d58a97dacfed4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nonzero, 1487, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_167f9a1d4dee3efea0f6961b4c46f059 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_partition, 553, const_tuple_73d0d0e49e6574a5f965a19057676e41_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f9d82324105b06245991a7b19d41e690 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prod, 2408, const_tuple_063d575c2d25f6280c4ad0160e76c58c_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_915080cffb930b0c8c76b014d829b3ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_product, 1837, const_tuple_2904291e06a75096a1e8ce95bf7aaf84_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72716efcb943f5f5e0ca43b34b0cf0f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ptp, 2133, const_tuple_str_plain_a_str_plain_axis_str_plain_out_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a40432db832dad8f90b209073558fabb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_put, 401, const_tuple_348f8a62fb715ea1b97518275edfd01c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_60763c04f218c157984e2782bfbbfb93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rank, 2621, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_296387ff09017798e2e175e3dbfd7b0d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ravel, 1380, const_tuple_str_plain_a_str_plain_order_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_de6290971fc931099f58dfe4f421ca74 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_repeat, 357, const_tuple_str_plain_a_str_plain_repeats_str_plain_axis_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3b2fda2b9c059a9ffe0ea037abeac1b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reshape, 138, const_tuple_str_plain_a_str_plain_newshape_str_plain_order_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ac6375c30034a3550dc37bd9006f6cf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_resize, 1078, const_tuple_172a1b3a40690b4fdb09facddd614332_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8f6125997590f2435bb540f56de1011b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_round_, 2792, const_tuple_str_plain_a_str_plain_decimals_str_plain_out_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b017fcb83184dce55ba5c12a33e35bb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_searchsorted, 1022, const_tuple_str_plain_a_str_plain_v_str_plain_side_str_plain_sorter_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_01d01d4b7980fc3d7b02435c8b3a604f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_shape, 1565, const_tuple_str_plain_a_str_plain_result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9ef28fbe208f10629211d2e1ea13e62f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_size, 2677, const_tuple_str_plain_a_str_plain_axis_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1164f176ddf92a60a9c3aecf22ca08d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sometrue, 1852, const_tuple_7bc9f39c759b4ab5a723576d99633a5f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1d477f849b2db00333ca111f631db8a2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sort, 709, const_tuple_str_plain_a_str_plain_axis_str_plain_kind_str_plain_order_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c435273ec25a07b6f693a4660c107ec8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_squeeze, 1143, const_tuple_str_plain_a_str_plain_axis_str_plain_squeeze_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b8639055ae79566225040d974e3c0b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_std, 2912, const_tuple_0a19af851caceee30c1b7dbe95972b41_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_27e5b1ca3e17a4178b700fc3c8fbaada = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sum, 1730, const_tuple_3531904bda14a3d4ac39550ab3bec53a_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3f51f9c2e8d12f439c158e5aae668d66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_swapaxes, 458, const_tuple_str_plain_a_str_plain_axis1_str_plain_axis2_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8463160679efd9f3848e471aa833cb26 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_take, 70, const_tuple_090a752124ee3234483a02764b842c3c_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3fe07f46d5b04f691b9b9ad921fccce2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trace, 1317, const_tuple_fc9d51c46413a7b6b0a4fb1a8289c47b_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3dcbed045e613fd8d5caccd9e7388ec2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_transpose, 504, const_tuple_str_plain_a_str_plain_axes_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f9411e1dc2bbe86384ccc95d60ca9494 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_var, 3030, const_tuple_fa5fa2505a49b3707a8419f086aa8cac_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_10_partition( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_11_argpartition( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_12_sort( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_13_argsort( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_14_argmax( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_15_argmin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_16_searchsorted( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_17_resize(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_18_squeeze( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_19_diagonal( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_1__wrapit(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_20_trace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_21_ravel( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_22_nonzero(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_23_shape(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_24_compress( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_25_clip( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_26_sum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_27_product( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_28_sometrue( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_29_alltrue( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_2__wrapfunc(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_30_any( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_31_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_32_cumsum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_33_cumproduct( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_34_ptp( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_35_amax( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_36_amin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_37_alen(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_38_prod( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_39_cumprod( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_3_take( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_40_ndim(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_41_rank(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_42_size( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_43_around( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_44_round_( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_45_mean( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_46_std( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_47_var( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_4_reshape( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_5_choose( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_6_repeat( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_7_put( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_8_swapaxes(  );


static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_9_transpose( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$core$fromnumeric$$$function_1__wrapit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwds = python_pars[ 3 ];
    PyObject *var_wrap = NULL;
    PyObject *var_result = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_94546b95c37d6f848e090db696a284fd = NULL;

    struct Nuitka_FrameObject *frame_94546b95c37d6f848e090db696a284fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94546b95c37d6f848e090db696a284fd, codeobj_94546b95c37d6f848e090db696a284fd, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94546b95c37d6f848e090db696a284fd = cache_frame_94546b95c37d6f848e090db696a284fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94546b95c37d6f848e090db696a284fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94546b95c37d6f848e090db696a284fd ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_wrap__ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( var_wrap == NULL );
    var_wrap = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_94546b95c37d6f848e090db696a284fd );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_94546b95c37d6f848e090db696a284fd, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_94546b95c37d6f848e090db696a284fd, exception_keeper_lineno_1 );
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


        exception_lineno = 45;
        type_description_1 = "oooooo";
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
    tmp_assign_source_2 = Py_None;
    assert( var_wrap == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_wrap = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 43;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_94546b95c37d6f848e090db696a284fd->m_frame) frame_94546b95c37d6f848e090db696a284fd->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_1__wrapit );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 47;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_obj;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_94546b95c37d6f848e090db696a284fd->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_getattr_target_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = par_method;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_dircall_arg1_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_assign_source_3 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_3;

    tmp_cond_value_1 = var_wrap;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrap" );
        exception_tb = NULL;

        exception_lineno = 48;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
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
    tmp_isinstance_inst_1 = var_result;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 49;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 50;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_result;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_94546b95c37d6f848e090db696a284fd->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_result;
        assert( old != NULL );
        var_result = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_called_name_3 = var_wrap;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrap" );
        exception_tb = NULL;

        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_result;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_94546b95c37d6f848e090db696a284fd->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_result;
        assert( old != NULL );
        var_result = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_2:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_94546b95c37d6f848e090db696a284fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_94546b95c37d6f848e090db696a284fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94546b95c37d6f848e090db696a284fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94546b95c37d6f848e090db696a284fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94546b95c37d6f848e090db696a284fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94546b95c37d6f848e090db696a284fd,
        type_description_1,
        par_obj,
        par_method,
        par_args,
        par_kwds,
        var_wrap,
        var_result
    );


    // Release cached frame.
    if ( frame_94546b95c37d6f848e090db696a284fd == cache_frame_94546b95c37d6f848e090db696a284fd )
    {
        Py_DECREF( frame_94546b95c37d6f848e090db696a284fd );
    }
    cache_frame_94546b95c37d6f848e090db696a284fd = NULL;

    assertFrameObject( frame_94546b95c37d6f848e090db696a284fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_1__wrapit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_wrap );
    var_wrap = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_wrap );
    var_wrap = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_1__wrapit );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_2__wrapfunc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwds = python_pars[ 3 ];
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_3782fd983bd95d968b4e5776fc06e13a = NULL;

    struct Nuitka_FrameObject *frame_3782fd983bd95d968b4e5776fc06e13a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3782fd983bd95d968b4e5776fc06e13a, codeobj_3782fd983bd95d968b4e5776fc06e13a, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3782fd983bd95d968b4e5776fc06e13a = cache_frame_3782fd983bd95d968b4e5776fc06e13a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3782fd983bd95d968b4e5776fc06e13a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3782fd983bd95d968b4e5776fc06e13a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_getattr_target_1 = par_obj;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = par_method;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_dircall_arg1_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
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


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_2__wrapfunc );
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
    PRESERVE_FRAME_EXCEPTION( frame_3782fd983bd95d968b4e5776fc06e13a );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_3782fd983bd95d968b4e5776fc06e13a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_3782fd983bd95d968b4e5776fc06e13a, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 66;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapit );

    if (unlikely( tmp_dircall_arg1_2 == NULL ))
    {
        tmp_dircall_arg1_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapit );
    }

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapit" );
        exception_tb = NULL;

        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_obj;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_method;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
    tmp_dircall_arg3_2 = par_args;

    CHECK_OBJECT( tmp_dircall_arg3_2 );
    tmp_dircall_arg4_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg3_2 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 56;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3782fd983bd95d968b4e5776fc06e13a->m_frame) frame_3782fd983bd95d968b4e5776fc06e13a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_3782fd983bd95d968b4e5776fc06e13a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_3782fd983bd95d968b4e5776fc06e13a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_3782fd983bd95d968b4e5776fc06e13a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3782fd983bd95d968b4e5776fc06e13a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3782fd983bd95d968b4e5776fc06e13a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3782fd983bd95d968b4e5776fc06e13a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3782fd983bd95d968b4e5776fc06e13a,
        type_description_1,
        par_obj,
        par_method,
        par_args,
        par_kwds
    );


    // Release cached frame.
    if ( frame_3782fd983bd95d968b4e5776fc06e13a == cache_frame_3782fd983bd95d968b4e5776fc06e13a )
    {
        Py_DECREF( frame_3782fd983bd95d968b4e5776fc06e13a );
    }
    cache_frame_3782fd983bd95d968b4e5776fc06e13a = NULL;

    assertFrameObject( frame_3782fd983bd95d968b4e5776fc06e13a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_2__wrapfunc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

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

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_2__wrapfunc );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_3_take( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_indices = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_mode = python_pars[ 4 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_8463160679efd9f3848e471aa833cb26 = NULL;

    struct Nuitka_FrameObject *frame_8463160679efd9f3848e471aa833cb26;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8463160679efd9f3848e471aa833cb26, codeobj_8463160679efd9f3848e471aa833cb26, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8463160679efd9f3848e471aa833cb26 = cache_frame_8463160679efd9f3848e471aa833cb26;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8463160679efd9f3848e471aa833cb26 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8463160679efd9f3848e471aa833cb26 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 134;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_take;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_indices;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_mode;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_mode;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_8463160679efd9f3848e471aa833cb26->m_frame.f_lineno = 134;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8463160679efd9f3848e471aa833cb26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8463160679efd9f3848e471aa833cb26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8463160679efd9f3848e471aa833cb26 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8463160679efd9f3848e471aa833cb26, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8463160679efd9f3848e471aa833cb26->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8463160679efd9f3848e471aa833cb26, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8463160679efd9f3848e471aa833cb26,
        type_description_1,
        par_a,
        par_indices,
        par_axis,
        par_out,
        par_mode
    );


    // Release cached frame.
    if ( frame_8463160679efd9f3848e471aa833cb26 == cache_frame_8463160679efd9f3848e471aa833cb26 )
    {
        Py_DECREF( frame_8463160679efd9f3848e471aa833cb26 );
    }
    cache_frame_8463160679efd9f3848e471aa833cb26 = NULL;

    assertFrameObject( frame_8463160679efd9f3848e471aa833cb26 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_3_take );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_indices );
    Py_DECREF( par_indices );
    par_indices = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_3_take );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_4_reshape( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_newshape = python_pars[ 1 ];
    PyObject *par_order = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_3b2fda2b9c059a9ffe0ea037abeac1b2 = NULL;

    struct Nuitka_FrameObject *frame_3b2fda2b9c059a9ffe0ea037abeac1b2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b2fda2b9c059a9ffe0ea037abeac1b2, codeobj_3b2fda2b9c059a9ffe0ea037abeac1b2, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b2fda2b9c059a9ffe0ea037abeac1b2 = cache_frame_3b2fda2b9c059a9ffe0ea037abeac1b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 232;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_reshape;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_newshape;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_order;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_3b2fda2b9c059a9ffe0ea037abeac1b2->m_frame.f_lineno = 232;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b2fda2b9c059a9ffe0ea037abeac1b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b2fda2b9c059a9ffe0ea037abeac1b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b2fda2b9c059a9ffe0ea037abeac1b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b2fda2b9c059a9ffe0ea037abeac1b2,
        type_description_1,
        par_a,
        par_newshape,
        par_order
    );


    // Release cached frame.
    if ( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 == cache_frame_3b2fda2b9c059a9ffe0ea037abeac1b2 )
    {
        Py_DECREF( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 );
    }
    cache_frame_3b2fda2b9c059a9ffe0ea037abeac1b2 = NULL;

    assertFrameObject( frame_3b2fda2b9c059a9ffe0ea037abeac1b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_4_reshape );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_newshape );
    Py_DECREF( par_newshape );
    par_newshape = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_newshape );
    Py_DECREF( par_newshape );
    par_newshape = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_4_reshape );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_5_choose( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_choices = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_mode = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_eab00ba61e17010ef7e75d0f6defd9ea = NULL;

    struct Nuitka_FrameObject *frame_eab00ba61e17010ef7e75d0f6defd9ea;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eab00ba61e17010ef7e75d0f6defd9ea, codeobj_eab00ba61e17010ef7e75d0f6defd9ea, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eab00ba61e17010ef7e75d0f6defd9ea = cache_frame_eab00ba61e17010ef7e75d0f6defd9ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eab00ba61e17010ef7e75d0f6defd9ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eab00ba61e17010ef7e75d0f6defd9ea ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 354;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_choose;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_choices;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_out;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_mode;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_mode;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_eab00ba61e17010ef7e75d0f6defd9ea->m_frame.f_lineno = 354;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eab00ba61e17010ef7e75d0f6defd9ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eab00ba61e17010ef7e75d0f6defd9ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eab00ba61e17010ef7e75d0f6defd9ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eab00ba61e17010ef7e75d0f6defd9ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eab00ba61e17010ef7e75d0f6defd9ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eab00ba61e17010ef7e75d0f6defd9ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eab00ba61e17010ef7e75d0f6defd9ea,
        type_description_1,
        par_a,
        par_choices,
        par_out,
        par_mode
    );


    // Release cached frame.
    if ( frame_eab00ba61e17010ef7e75d0f6defd9ea == cache_frame_eab00ba61e17010ef7e75d0f6defd9ea )
    {
        Py_DECREF( frame_eab00ba61e17010ef7e75d0f6defd9ea );
    }
    cache_frame_eab00ba61e17010ef7e75d0f6defd9ea = NULL;

    assertFrameObject( frame_eab00ba61e17010ef7e75d0f6defd9ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_5_choose );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_choices );
    Py_DECREF( par_choices );
    par_choices = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_choices );
    Py_DECREF( par_choices );
    par_choices = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_5_choose );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_6_repeat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_repeats = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_de6290971fc931099f58dfe4f421ca74 = NULL;

    struct Nuitka_FrameObject *frame_de6290971fc931099f58dfe4f421ca74;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de6290971fc931099f58dfe4f421ca74, codeobj_de6290971fc931099f58dfe4f421ca74, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_de6290971fc931099f58dfe4f421ca74 = cache_frame_de6290971fc931099f58dfe4f421ca74;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de6290971fc931099f58dfe4f421ca74 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de6290971fc931099f58dfe4f421ca74 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 398;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_repeat;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_repeats;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_de6290971fc931099f58dfe4f421ca74->m_frame.f_lineno = 398;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de6290971fc931099f58dfe4f421ca74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_de6290971fc931099f58dfe4f421ca74 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de6290971fc931099f58dfe4f421ca74 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de6290971fc931099f58dfe4f421ca74, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de6290971fc931099f58dfe4f421ca74->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de6290971fc931099f58dfe4f421ca74, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de6290971fc931099f58dfe4f421ca74,
        type_description_1,
        par_a,
        par_repeats,
        par_axis
    );


    // Release cached frame.
    if ( frame_de6290971fc931099f58dfe4f421ca74 == cache_frame_de6290971fc931099f58dfe4f421ca74 )
    {
        Py_DECREF( frame_de6290971fc931099f58dfe4f421ca74 );
    }
    cache_frame_de6290971fc931099f58dfe4f421ca74 = NULL;

    assertFrameObject( frame_de6290971fc931099f58dfe4f421ca74 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_6_repeat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_repeats );
    Py_DECREF( par_repeats );
    par_repeats = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_repeats );
    Py_DECREF( par_repeats );
    par_repeats = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_6_repeat );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_7_put( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_ind = python_pars[ 1 ];
    PyObject *par_v = python_pars[ 2 ];
    PyObject *par_mode = python_pars[ 3 ];
    PyObject *var_put = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_a40432db832dad8f90b209073558fabb = NULL;

    struct Nuitka_FrameObject *frame_a40432db832dad8f90b209073558fabb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a40432db832dad8f90b209073558fabb, codeobj_a40432db832dad8f90b209073558fabb, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a40432db832dad8f90b209073558fabb = cache_frame_a40432db832dad8f90b209073558fabb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a40432db832dad8f90b209073558fabb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a40432db832dad8f90b209073558fabb ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_put );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_put == NULL );
    var_put = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_a40432db832dad8f90b209073558fabb );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a40432db832dad8f90b209073558fabb, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a40432db832dad8f90b209073558fabb, exception_keeper_lineno_1 );
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


        exception_lineno = 451;
        type_description_1 = "ooooo";
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
    tmp_source_name_2 = const_str_digest_b2018eb78a3eeac9382ce769dbfe3d62;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_source_name_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_source_name_3 != NULL );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 453;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_name;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_a40432db832dad8f90b209073558fabb->m_frame.f_lineno = 452;
    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_a40432db832dad8f90b209073558fabb->m_frame.f_lineno = 452;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 452;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 449;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a40432db832dad8f90b209073558fabb->m_frame) frame_a40432db832dad8f90b209073558fabb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_called_name_2 = var_put;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_ind;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_v;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_mode;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_mode;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_a40432db832dad8f90b209073558fabb->m_frame.f_lineno = 455;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a40432db832dad8f90b209073558fabb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a40432db832dad8f90b209073558fabb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a40432db832dad8f90b209073558fabb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a40432db832dad8f90b209073558fabb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a40432db832dad8f90b209073558fabb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a40432db832dad8f90b209073558fabb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a40432db832dad8f90b209073558fabb,
        type_description_1,
        par_a,
        par_ind,
        par_v,
        par_mode,
        var_put
    );


    // Release cached frame.
    if ( frame_a40432db832dad8f90b209073558fabb == cache_frame_a40432db832dad8f90b209073558fabb )
    {
        Py_DECREF( frame_a40432db832dad8f90b209073558fabb );
    }
    cache_frame_a40432db832dad8f90b209073558fabb = NULL;

    assertFrameObject( frame_a40432db832dad8f90b209073558fabb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_7_put );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_ind );
    Py_DECREF( par_ind );
    par_ind = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)var_put );
    Py_DECREF( var_put );
    var_put = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_ind );
    Py_DECREF( par_ind );
    par_ind = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_put );
    var_put = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_7_put );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_8_swapaxes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis1 = python_pars[ 1 ];
    PyObject *par_axis2 = python_pars[ 2 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3f51f9c2e8d12f439c158e5aae668d66 = NULL;

    struct Nuitka_FrameObject *frame_3f51f9c2e8d12f439c158e5aae668d66;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f51f9c2e8d12f439c158e5aae668d66, codeobj_3f51f9c2e8d12f439c158e5aae668d66, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3f51f9c2e8d12f439c158e5aae668d66 = cache_frame_3f51f9c2e8d12f439c158e5aae668d66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f51f9c2e8d12f439c158e5aae668d66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f51f9c2e8d12f439c158e5aae668d66 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 501;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_swapaxes;
    tmp_args_element_name_3 = par_axis1;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_axis2;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_3f51f9c2e8d12f439c158e5aae668d66->m_frame.f_lineno = 501;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 501;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f51f9c2e8d12f439c158e5aae668d66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f51f9c2e8d12f439c158e5aae668d66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f51f9c2e8d12f439c158e5aae668d66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f51f9c2e8d12f439c158e5aae668d66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f51f9c2e8d12f439c158e5aae668d66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f51f9c2e8d12f439c158e5aae668d66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f51f9c2e8d12f439c158e5aae668d66,
        type_description_1,
        par_a,
        par_axis1,
        par_axis2
    );


    // Release cached frame.
    if ( frame_3f51f9c2e8d12f439c158e5aae668d66 == cache_frame_3f51f9c2e8d12f439c158e5aae668d66 )
    {
        Py_DECREF( frame_3f51f9c2e8d12f439c158e5aae668d66 );
    }
    cache_frame_3f51f9c2e8d12f439c158e5aae668d66 = NULL;

    assertFrameObject( frame_3f51f9c2e8d12f439c158e5aae668d66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_8_swapaxes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis1 );
    Py_DECREF( par_axis1 );
    par_axis1 = NULL;

    CHECK_OBJECT( (PyObject *)par_axis2 );
    Py_DECREF( par_axis2 );
    par_axis2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis1 );
    Py_DECREF( par_axis1 );
    par_axis1 = NULL;

    CHECK_OBJECT( (PyObject *)par_axis2 );
    Py_DECREF( par_axis2 );
    par_axis2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_8_swapaxes );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_9_transpose( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3dcbed045e613fd8d5caccd9e7388ec2 = NULL;

    struct Nuitka_FrameObject *frame_3dcbed045e613fd8d5caccd9e7388ec2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3dcbed045e613fd8d5caccd9e7388ec2, codeobj_3dcbed045e613fd8d5caccd9e7388ec2, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *) );
    frame_3dcbed045e613fd8d5caccd9e7388ec2 = cache_frame_3dcbed045e613fd8d5caccd9e7388ec2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3dcbed045e613fd8d5caccd9e7388ec2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3dcbed045e613fd8d5caccd9e7388ec2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 550;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_transpose;
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_3dcbed045e613fd8d5caccd9e7388ec2->m_frame.f_lineno = 550;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dcbed045e613fd8d5caccd9e7388ec2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dcbed045e613fd8d5caccd9e7388ec2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dcbed045e613fd8d5caccd9e7388ec2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3dcbed045e613fd8d5caccd9e7388ec2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3dcbed045e613fd8d5caccd9e7388ec2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3dcbed045e613fd8d5caccd9e7388ec2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3dcbed045e613fd8d5caccd9e7388ec2,
        type_description_1,
        par_a,
        par_axes
    );


    // Release cached frame.
    if ( frame_3dcbed045e613fd8d5caccd9e7388ec2 == cache_frame_3dcbed045e613fd8d5caccd9e7388ec2 )
    {
        Py_DECREF( frame_3dcbed045e613fd8d5caccd9e7388ec2 );
    }
    cache_frame_3dcbed045e613fd8d5caccd9e7388ec2 = NULL;

    assertFrameObject( frame_3dcbed045e613fd8d5caccd9e7388ec2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_9_transpose );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_9_transpose );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_10_partition( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_kth = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_kind = python_pars[ 3 ];
    PyObject *par_order = python_pars[ 4 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_167f9a1d4dee3efea0f6961b4c46f059 = NULL;

    struct Nuitka_FrameObject *frame_167f9a1d4dee3efea0f6961b4c46f059;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_167f9a1d4dee3efea0f6961b4c46f059, codeobj_167f9a1d4dee3efea0f6961b4c46f059, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_167f9a1d4dee3efea0f6961b4c46f059 = cache_frame_167f9a1d4dee3efea0f6961b4c46f059;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_167f9a1d4dee3efea0f6961b4c46f059 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_167f9a1d4dee3efea0f6961b4c46f059 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_axis;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 635;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_167f9a1d4dee3efea0f6961b4c46f059->m_frame.f_lineno = 635;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_167f9a1d4dee3efea0f6961b4c46f059->m_frame.f_lineno = 635;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flatten );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_assign_source_2 = const_int_0;
    {
        PyObject *old = par_axis;
        assert( old != NULL );
        par_axis = tmp_assign_source_2;
        Py_INCREF( par_axis );
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 638;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_167f9a1d4dee3efea0f6961b4c46f059->m_frame.f_lineno = 638;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_21567982cb441e6dbff88523281a645a );
    frame_167f9a1d4dee3efea0f6961b4c46f059->m_frame.f_lineno = 638;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_end_1:;
    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_partition );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_kth;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_kind;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_kind;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_order;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_167f9a1d4dee3efea0f6961b4c46f059->m_frame.f_lineno = 639;
    tmp_unused = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 639;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_167f9a1d4dee3efea0f6961b4c46f059 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_167f9a1d4dee3efea0f6961b4c46f059 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_167f9a1d4dee3efea0f6961b4c46f059, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_167f9a1d4dee3efea0f6961b4c46f059->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_167f9a1d4dee3efea0f6961b4c46f059, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_167f9a1d4dee3efea0f6961b4c46f059,
        type_description_1,
        par_a,
        par_kth,
        par_axis,
        par_kind,
        par_order
    );


    // Release cached frame.
    if ( frame_167f9a1d4dee3efea0f6961b4c46f059 == cache_frame_167f9a1d4dee3efea0f6961b4c46f059 )
    {
        Py_DECREF( frame_167f9a1d4dee3efea0f6961b4c46f059 );
    }
    cache_frame_167f9a1d4dee3efea0f6961b4c46f059 = NULL;

    assertFrameObject( frame_167f9a1d4dee3efea0f6961b4c46f059 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_a;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_10_partition );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_kth );
    Py_DECREF( par_kth );
    par_kth = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_kth );
    Py_DECREF( par_kth );
    par_kth = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_10_partition );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_11_argpartition( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_kth = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_kind = python_pars[ 3 ];
    PyObject *par_order = python_pars[ 4 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_94e016a84a184e4307bff9bce3728549 = NULL;

    struct Nuitka_FrameObject *frame_94e016a84a184e4307bff9bce3728549;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_94e016a84a184e4307bff9bce3728549, codeobj_94e016a84a184e4307bff9bce3728549, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_94e016a84a184e4307bff9bce3728549 = cache_frame_94e016a84a184e4307bff9bce3728549;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_94e016a84a184e4307bff9bce3728549 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_94e016a84a184e4307bff9bce3728549 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 706;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_argpartition;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_kth;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_kind;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_kind;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_order;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_94e016a84a184e4307bff9bce3728549->m_frame.f_lineno = 706;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94e016a84a184e4307bff9bce3728549 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_94e016a84a184e4307bff9bce3728549 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_94e016a84a184e4307bff9bce3728549 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_94e016a84a184e4307bff9bce3728549, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_94e016a84a184e4307bff9bce3728549->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_94e016a84a184e4307bff9bce3728549, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_94e016a84a184e4307bff9bce3728549,
        type_description_1,
        par_a,
        par_kth,
        par_axis,
        par_kind,
        par_order
    );


    // Release cached frame.
    if ( frame_94e016a84a184e4307bff9bce3728549 == cache_frame_94e016a84a184e4307bff9bce3728549 )
    {
        Py_DECREF( frame_94e016a84a184e4307bff9bce3728549 );
    }
    cache_frame_94e016a84a184e4307bff9bce3728549 = NULL;

    assertFrameObject( frame_94e016a84a184e4307bff9bce3728549 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_11_argpartition );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_kth );
    Py_DECREF( par_kth );
    par_kth = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_kth );
    Py_DECREF( par_kth );
    par_kth = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_11_argpartition );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_12_sort( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_kind = python_pars[ 2 ];
    PyObject *par_order = python_pars[ 3 ];
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1d477f849b2db00333ca111f631db8a2 = NULL;

    struct Nuitka_FrameObject *frame_1d477f849b2db00333ca111f631db8a2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d477f849b2db00333ca111f631db8a2, codeobj_1d477f849b2db00333ca111f631db8a2, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1d477f849b2db00333ca111f631db8a2 = cache_frame_1d477f849b2db00333ca111f631db8a2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d477f849b2db00333ca111f631db8a2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d477f849b2db00333ca111f631db8a2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_axis;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 818;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_1d477f849b2db00333ca111f631db8a2->m_frame.f_lineno = 818;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 818;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_1d477f849b2db00333ca111f631db8a2->m_frame.f_lineno = 818;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flatten );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 818;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_assign_source_2 = const_int_0;
    {
        PyObject *old = par_axis;
        assert( old != NULL );
        par_axis = tmp_assign_source_2;
        Py_INCREF( par_axis );
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 821;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_1d477f849b2db00333ca111f631db8a2->m_frame.f_lineno = 821;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 821;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 821;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_21567982cb441e6dbff88523281a645a );
    frame_1d477f849b2db00333ca111f631db8a2->m_frame.f_lineno = 821;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 821;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_end_1:;
    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sort );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 822;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_kind;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_kind;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_order;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_1d477f849b2db00333ca111f631db8a2->m_frame.f_lineno = 822;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 822;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d477f849b2db00333ca111f631db8a2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d477f849b2db00333ca111f631db8a2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d477f849b2db00333ca111f631db8a2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d477f849b2db00333ca111f631db8a2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d477f849b2db00333ca111f631db8a2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d477f849b2db00333ca111f631db8a2,
        type_description_1,
        par_a,
        par_axis,
        par_kind,
        par_order
    );


    // Release cached frame.
    if ( frame_1d477f849b2db00333ca111f631db8a2 == cache_frame_1d477f849b2db00333ca111f631db8a2 )
    {
        Py_DECREF( frame_1d477f849b2db00333ca111f631db8a2 );
    }
    cache_frame_1d477f849b2db00333ca111f631db8a2 = NULL;

    assertFrameObject( frame_1d477f849b2db00333ca111f631db8a2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_a;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_12_sort );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_12_sort );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_13_argsort( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_kind = python_pars[ 2 ];
    PyObject *par_order = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_084fdf1419a4088eab267436923d6987 = NULL;

    struct Nuitka_FrameObject *frame_084fdf1419a4088eab267436923d6987;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_084fdf1419a4088eab267436923d6987, codeobj_084fdf1419a4088eab267436923d6987, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_084fdf1419a4088eab267436923d6987 = cache_frame_084fdf1419a4088eab267436923d6987;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_084fdf1419a4088eab267436923d6987 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_084fdf1419a4088eab267436923d6987 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 907;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_argsort;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_kind;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_kind;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_order;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_084fdf1419a4088eab267436923d6987->m_frame.f_lineno = 907;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 907;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_084fdf1419a4088eab267436923d6987 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_084fdf1419a4088eab267436923d6987 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_084fdf1419a4088eab267436923d6987 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_084fdf1419a4088eab267436923d6987, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_084fdf1419a4088eab267436923d6987->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_084fdf1419a4088eab267436923d6987, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_084fdf1419a4088eab267436923d6987,
        type_description_1,
        par_a,
        par_axis,
        par_kind,
        par_order
    );


    // Release cached frame.
    if ( frame_084fdf1419a4088eab267436923d6987 == cache_frame_084fdf1419a4088eab267436923d6987 )
    {
        Py_DECREF( frame_084fdf1419a4088eab267436923d6987 );
    }
    cache_frame_084fdf1419a4088eab267436923d6987 = NULL;

    assertFrameObject( frame_084fdf1419a4088eab267436923d6987 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_13_argsort );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_13_argsort );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_14_argmax( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_e86a0a0b4965db12b55cbc128bdb7ebb = NULL;

    struct Nuitka_FrameObject *frame_e86a0a0b4965db12b55cbc128bdb7ebb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e86a0a0b4965db12b55cbc128bdb7ebb, codeobj_e86a0a0b4965db12b55cbc128bdb7ebb, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e86a0a0b4965db12b55cbc128bdb7ebb = cache_frame_e86a0a0b4965db12b55cbc128bdb7ebb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e86a0a0b4965db12b55cbc128bdb7ebb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e86a0a0b4965db12b55cbc128bdb7ebb ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 963;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_argmax;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_e86a0a0b4965db12b55cbc128bdb7ebb->m_frame.f_lineno = 963;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 963;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86a0a0b4965db12b55cbc128bdb7ebb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86a0a0b4965db12b55cbc128bdb7ebb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86a0a0b4965db12b55cbc128bdb7ebb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e86a0a0b4965db12b55cbc128bdb7ebb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e86a0a0b4965db12b55cbc128bdb7ebb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e86a0a0b4965db12b55cbc128bdb7ebb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e86a0a0b4965db12b55cbc128bdb7ebb,
        type_description_1,
        par_a,
        par_axis,
        par_out
    );


    // Release cached frame.
    if ( frame_e86a0a0b4965db12b55cbc128bdb7ebb == cache_frame_e86a0a0b4965db12b55cbc128bdb7ebb )
    {
        Py_DECREF( frame_e86a0a0b4965db12b55cbc128bdb7ebb );
    }
    cache_frame_e86a0a0b4965db12b55cbc128bdb7ebb = NULL;

    assertFrameObject( frame_e86a0a0b4965db12b55cbc128bdb7ebb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_14_argmax );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_14_argmax );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_15_argmin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_bb535e6fbca89b50e966ae87f03034c6 = NULL;

    struct Nuitka_FrameObject *frame_bb535e6fbca89b50e966ae87f03034c6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb535e6fbca89b50e966ae87f03034c6, codeobj_bb535e6fbca89b50e966ae87f03034c6, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bb535e6fbca89b50e966ae87f03034c6 = cache_frame_bb535e6fbca89b50e966ae87f03034c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb535e6fbca89b50e966ae87f03034c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb535e6fbca89b50e966ae87f03034c6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 1019;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_argmin;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_bb535e6fbca89b50e966ae87f03034c6->m_frame.f_lineno = 1019;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1019;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb535e6fbca89b50e966ae87f03034c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb535e6fbca89b50e966ae87f03034c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb535e6fbca89b50e966ae87f03034c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb535e6fbca89b50e966ae87f03034c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb535e6fbca89b50e966ae87f03034c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb535e6fbca89b50e966ae87f03034c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb535e6fbca89b50e966ae87f03034c6,
        type_description_1,
        par_a,
        par_axis,
        par_out
    );


    // Release cached frame.
    if ( frame_bb535e6fbca89b50e966ae87f03034c6 == cache_frame_bb535e6fbca89b50e966ae87f03034c6 )
    {
        Py_DECREF( frame_bb535e6fbca89b50e966ae87f03034c6 );
    }
    cache_frame_bb535e6fbca89b50e966ae87f03034c6 = NULL;

    assertFrameObject( frame_bb535e6fbca89b50e966ae87f03034c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_15_argmin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_15_argmin );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_16_searchsorted( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_v = python_pars[ 1 ];
    PyObject *par_side = python_pars[ 2 ];
    PyObject *par_sorter = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_b017fcb83184dce55ba5c12a33e35bb7 = NULL;

    struct Nuitka_FrameObject *frame_b017fcb83184dce55ba5c12a33e35bb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b017fcb83184dce55ba5c12a33e35bb7, codeobj_b017fcb83184dce55ba5c12a33e35bb7, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b017fcb83184dce55ba5c12a33e35bb7 = cache_frame_b017fcb83184dce55ba5c12a33e35bb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b017fcb83184dce55ba5c12a33e35bb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b017fcb83184dce55ba5c12a33e35bb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 1075;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_searchsorted;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_v;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_side;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_side;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_sorter;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_sorter;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_b017fcb83184dce55ba5c12a33e35bb7->m_frame.f_lineno = 1075;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1075;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b017fcb83184dce55ba5c12a33e35bb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b017fcb83184dce55ba5c12a33e35bb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b017fcb83184dce55ba5c12a33e35bb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b017fcb83184dce55ba5c12a33e35bb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b017fcb83184dce55ba5c12a33e35bb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b017fcb83184dce55ba5c12a33e35bb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b017fcb83184dce55ba5c12a33e35bb7,
        type_description_1,
        par_a,
        par_v,
        par_side,
        par_sorter
    );


    // Release cached frame.
    if ( frame_b017fcb83184dce55ba5c12a33e35bb7 == cache_frame_b017fcb83184dce55ba5c12a33e35bb7 )
    {
        Py_DECREF( frame_b017fcb83184dce55ba5c12a33e35bb7 );
    }
    cache_frame_b017fcb83184dce55ba5c12a33e35bb7 = NULL;

    assertFrameObject( frame_b017fcb83184dce55ba5c12a33e35bb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_16_searchsorted );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_side );
    Py_DECREF( par_side );
    par_side = NULL;

    CHECK_OBJECT( (PyObject *)par_sorter );
    Py_DECREF( par_sorter );
    par_sorter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)par_side );
    Py_DECREF( par_side );
    par_side = NULL;

    CHECK_OBJECT( (PyObject *)par_sorter );
    Py_DECREF( par_sorter );
    par_sorter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_16_searchsorted );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_17_resize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_new_shape = python_pars[ 1 ];
    PyObject *var_Na = NULL;
    PyObject *var_total_size = NULL;
    PyObject *var_n_copies = NULL;
    PyObject *var_extra = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static struct Nuitka_FrameObject *cache_frame_ac6375c30034a3550dc37bd9006f6cf8 = NULL;

    struct Nuitka_FrameObject *frame_ac6375c30034a3550dc37bd9006f6cf8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ac6375c30034a3550dc37bd9006f6cf8, codeobj_ac6375c30034a3550dc37bd9006f6cf8, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ac6375c30034a3550dc37bd9006f6cf8 = cache_frame_ac6375c30034a3550dc37bd9006f6cf8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ac6375c30034a3550dc37bd9006f6cf8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ac6375c30034a3550dc37bd9006f6cf8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_new_shape;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyInt_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 1119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_integer );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_cls_1 );

        exception_lineno = 1119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1119;
        type_description_1 = "oooooo";
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
    tmp_assign_source_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_new_shape;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_1, 0, tmp_tuple_element_2 );
    {
        PyObject *old = par_new_shape;
        assert( old != NULL );
        par_new_shape = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_ravel );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ravel );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ravel" );
        exception_tb = NULL;

        exception_lineno = 1121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ac6375c30034a3550dc37bd9006f6cf8->m_frame.f_lineno = 1121;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_a;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_assign_source_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1122;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_Na == NULL );
    var_Na = tmp_assign_source_3;

    tmp_cond_value_1 = var_Na;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1123;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 1124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_new_shape;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ac6375c30034a3550dc37bd9006f6cf8->m_frame.f_lineno = 1124;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 1125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_multiply );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_new_shape;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_ac6375c30034a3550dc37bd9006f6cf8->m_frame.f_lineno = 1125;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_reduce, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_total_size == NULL );
    var_total_size = tmp_assign_source_4;

    tmp_left_name_1 = var_total_size;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = var_Na;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1126;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1126;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_n_copies == NULL );
    var_n_copies = tmp_assign_source_5;

    tmp_left_name_2 = var_total_size;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = var_Na;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_extra == NULL );
    var_extra = tmp_assign_source_6;

    tmp_compare_left_1 = var_total_size;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1129;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 0;
    tmp_slice_source_1 = par_a;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_return_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1130;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_compare_left_2 = var_extra;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1132;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_3 = var_n_copies;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_n_copies;
        assert( old != NULL );
        var_n_copies = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_left_name_4 = var_Na;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = var_extra;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1134;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_extra;
        assert( old != NULL );
        var_extra = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "concatenate" );
        exception_tb = NULL;

        exception_lineno = 1136;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_5 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_a;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_left_name_5, 0, tmp_tuple_element_3 );
    tmp_right_name_5 = var_n_copies;

    CHECK_OBJECT( tmp_right_name_5 );
    tmp_args_element_name_5 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1136;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_ac6375c30034a3550dc37bd9006f6cf8->m_frame.f_lineno = 1136;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1136;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_compare_left_3 = var_extra;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_slice_source_2 = par_a;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_operand_name_1 = var_extra;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_slice_upper_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1138;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1138;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_10;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_reshape );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reshape );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "reshape" );
        exception_tb = NULL;

        exception_lineno = 1140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_a;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_new_shape;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_ac6375c30034a3550dc37bd9006f6cf8->m_frame.f_lineno = 1140;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac6375c30034a3550dc37bd9006f6cf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac6375c30034a3550dc37bd9006f6cf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ac6375c30034a3550dc37bd9006f6cf8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ac6375c30034a3550dc37bd9006f6cf8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ac6375c30034a3550dc37bd9006f6cf8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ac6375c30034a3550dc37bd9006f6cf8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ac6375c30034a3550dc37bd9006f6cf8,
        type_description_1,
        par_a,
        par_new_shape,
        var_Na,
        var_total_size,
        var_n_copies,
        var_extra
    );


    // Release cached frame.
    if ( frame_ac6375c30034a3550dc37bd9006f6cf8 == cache_frame_ac6375c30034a3550dc37bd9006f6cf8 )
    {
        Py_DECREF( frame_ac6375c30034a3550dc37bd9006f6cf8 );
    }
    cache_frame_ac6375c30034a3550dc37bd9006f6cf8 = NULL;

    assertFrameObject( frame_ac6375c30034a3550dc37bd9006f6cf8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_17_resize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_new_shape );
    Py_DECREF( par_new_shape );
    par_new_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_Na );
    Py_DECREF( var_Na );
    var_Na = NULL;

    Py_XDECREF( var_total_size );
    var_total_size = NULL;

    Py_XDECREF( var_n_copies );
    var_n_copies = NULL;

    Py_XDECREF( var_extra );
    var_extra = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_new_shape );
    par_new_shape = NULL;

    Py_XDECREF( var_Na );
    var_Na = NULL;

    Py_XDECREF( var_total_size );
    var_total_size = NULL;

    Py_XDECREF( var_n_copies );
    var_n_copies = NULL;

    Py_XDECREF( var_extra );
    var_extra = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_17_resize );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_18_squeeze( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *var_squeeze = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c435273ec25a07b6f693a4660c107ec8 = NULL;

    struct Nuitka_FrameObject *frame_c435273ec25a07b6f693a4660c107ec8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c435273ec25a07b6f693a4660c107ec8, codeobj_c435273ec25a07b6f693a4660c107ec8, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c435273ec25a07b6f693a4660c107ec8 = cache_frame_c435273ec25a07b6f693a4660c107ec8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c435273ec25a07b6f693a4660c107ec8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c435273ec25a07b6f693a4660c107ec8 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_squeeze );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1193;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( var_squeeze == NULL );
    var_squeeze = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_c435273ec25a07b6f693a4660c107ec8 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c435273ec25a07b6f693a4660c107ec8, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c435273ec25a07b6f693a4660c107ec8, exception_keeper_lineno_1 );
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


        exception_lineno = 1194;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapit );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapit );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapit" );
        exception_tb = NULL;

        exception_lineno = 1195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_squeeze;
    frame_c435273ec25a07b6f693a4660c107ec8->m_frame.f_lineno = 1195;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1195;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 1192;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c435273ec25a07b6f693a4660c107ec8->m_frame) frame_c435273ec25a07b6f693a4660c107ec8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_called_name_2 = var_squeeze;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_c435273ec25a07b6f693a4660c107ec8->m_frame.f_lineno = 1198;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1198;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_18_squeeze );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_c435273ec25a07b6f693a4660c107ec8 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_c435273ec25a07b6f693a4660c107ec8, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_c435273ec25a07b6f693a4660c107ec8, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_TypeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1199;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
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
    tmp_called_name_3 = var_squeeze;

    CHECK_OBJECT( tmp_called_name_3 );
    frame_c435273ec25a07b6f693a4660c107ec8->m_frame.f_lineno = 1201;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1201;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 1196;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c435273ec25a07b6f693a4660c107ec8->m_frame) frame_c435273ec25a07b6f693a4660c107ec8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c435273ec25a07b6f693a4660c107ec8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c435273ec25a07b6f693a4660c107ec8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c435273ec25a07b6f693a4660c107ec8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c435273ec25a07b6f693a4660c107ec8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c435273ec25a07b6f693a4660c107ec8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c435273ec25a07b6f693a4660c107ec8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c435273ec25a07b6f693a4660c107ec8,
        type_description_1,
        par_a,
        par_axis,
        var_squeeze
    );


    // Release cached frame.
    if ( frame_c435273ec25a07b6f693a4660c107ec8 == cache_frame_c435273ec25a07b6f693a4660c107ec8 )
    {
        Py_DECREF( frame_c435273ec25a07b6f693a4660c107ec8 );
    }
    cache_frame_c435273ec25a07b6f693a4660c107ec8 = NULL;

    assertFrameObject( frame_c435273ec25a07b6f693a4660c107ec8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_18_squeeze );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_squeeze );
    var_squeeze = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_squeeze );
    var_squeeze = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_18_squeeze );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_19_diagonal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_offset = python_pars[ 1 ];
    PyObject *par_axis1 = python_pars[ 2 ];
    PyObject *par_axis2 = python_pars[ 3 ];
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_681f591daff9a8703207b58d5d016f6d = NULL;

    struct Nuitka_FrameObject *frame_681f591daff9a8703207b58d5d016f6d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_681f591daff9a8703207b58d5d016f6d, codeobj_681f591daff9a8703207b58d5d016f6d, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_681f591daff9a8703207b58d5d016f6d = cache_frame_681f591daff9a8703207b58d5d016f6d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_681f591daff9a8703207b58d5d016f6d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_681f591daff9a8703207b58d5d016f6d ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_a;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1310;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1310;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1310;
        type_description_1 = "oooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 1312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_681f591daff9a8703207b58d5d016f6d->m_frame.f_lineno = 1312;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_diagonal );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_offset;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_offset;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_axis1;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_axis1;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_axis2;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_axis2;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_681f591daff9a8703207b58d5d016f6d->m_frame.f_lineno = 1312;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1312;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 1314;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_681f591daff9a8703207b58d5d016f6d->m_frame.f_lineno = 1314;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1314;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_diagonal );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1314;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_4 = par_offset;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_offset;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_axis1;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_axis1;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_axis2;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_axis2;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_681f591daff9a8703207b58d5d016f6d->m_frame.f_lineno = 1314;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1314;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_681f591daff9a8703207b58d5d016f6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_681f591daff9a8703207b58d5d016f6d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_681f591daff9a8703207b58d5d016f6d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_681f591daff9a8703207b58d5d016f6d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_681f591daff9a8703207b58d5d016f6d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_681f591daff9a8703207b58d5d016f6d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_681f591daff9a8703207b58d5d016f6d,
        type_description_1,
        par_a,
        par_offset,
        par_axis1,
        par_axis2
    );


    // Release cached frame.
    if ( frame_681f591daff9a8703207b58d5d016f6d == cache_frame_681f591daff9a8703207b58d5d016f6d )
    {
        Py_DECREF( frame_681f591daff9a8703207b58d5d016f6d );
    }
    cache_frame_681f591daff9a8703207b58d5d016f6d = NULL;

    assertFrameObject( frame_681f591daff9a8703207b58d5d016f6d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_19_diagonal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    CHECK_OBJECT( (PyObject *)par_axis1 );
    Py_DECREF( par_axis1 );
    par_axis1 = NULL;

    CHECK_OBJECT( (PyObject *)par_axis2 );
    Py_DECREF( par_axis2 );
    par_axis2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    CHECK_OBJECT( (PyObject *)par_axis1 );
    Py_DECREF( par_axis1 );
    par_axis1 = NULL;

    CHECK_OBJECT( (PyObject *)par_axis2 );
    Py_DECREF( par_axis2 );
    par_axis2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_19_diagonal );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_20_trace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_offset = python_pars[ 1 ];
    PyObject *par_axis1 = python_pars[ 2 ];
    PyObject *par_axis2 = python_pars[ 3 ];
    PyObject *par_dtype = python_pars[ 4 ];
    PyObject *par_out = python_pars[ 5 ];
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_3fe07f46d5b04f691b9b9ad921fccce2 = NULL;

    struct Nuitka_FrameObject *frame_3fe07f46d5b04f691b9b9ad921fccce2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fe07f46d5b04f691b9b9ad921fccce2, codeobj_3fe07f46d5b04f691b9b9ad921fccce2, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3fe07f46d5b04f691b9b9ad921fccce2 = cache_frame_3fe07f46d5b04f691b9b9ad921fccce2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fe07f46d5b04f691b9b9ad921fccce2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fe07f46d5b04f691b9b9ad921fccce2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_a;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1373;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1373;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1373;
        type_description_1 = "oooooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 1375;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_3fe07f46d5b04f691b9b9ad921fccce2->m_frame.f_lineno = 1375;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1375;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_trace );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1375;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_1 = par_offset;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_offset;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_axis1;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_axis1;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_axis2;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_axis2;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_out;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_3fe07f46d5b04f691b9b9ad921fccce2->m_frame.f_lineno = 1375;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1375;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 1377;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_3fe07f46d5b04f691b9b9ad921fccce2->m_frame.f_lineno = 1377;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1377;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_trace );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1377;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 5 );
    tmp_dict_value_6 = par_offset;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_offset;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = par_axis1;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_axis1;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = par_axis2;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_axis2;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = par_out;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    frame_3fe07f46d5b04f691b9b9ad921fccce2->m_frame.f_lineno = 1377;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1377;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fe07f46d5b04f691b9b9ad921fccce2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fe07f46d5b04f691b9b9ad921fccce2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fe07f46d5b04f691b9b9ad921fccce2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fe07f46d5b04f691b9b9ad921fccce2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fe07f46d5b04f691b9b9ad921fccce2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fe07f46d5b04f691b9b9ad921fccce2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fe07f46d5b04f691b9b9ad921fccce2,
        type_description_1,
        par_a,
        par_offset,
        par_axis1,
        par_axis2,
        par_dtype,
        par_out
    );


    // Release cached frame.
    if ( frame_3fe07f46d5b04f691b9b9ad921fccce2 == cache_frame_3fe07f46d5b04f691b9b9ad921fccce2 )
    {
        Py_DECREF( frame_3fe07f46d5b04f691b9b9ad921fccce2 );
    }
    cache_frame_3fe07f46d5b04f691b9b9ad921fccce2 = NULL;

    assertFrameObject( frame_3fe07f46d5b04f691b9b9ad921fccce2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_20_trace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    CHECK_OBJECT( (PyObject *)par_axis1 );
    Py_DECREF( par_axis1 );
    par_axis1 = NULL;

    CHECK_OBJECT( (PyObject *)par_axis2 );
    Py_DECREF( par_axis2 );
    par_axis2 = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    CHECK_OBJECT( (PyObject *)par_axis1 );
    Py_DECREF( par_axis1 );
    par_axis1 = NULL;

    CHECK_OBJECT( (PyObject *)par_axis2 );
    Py_DECREF( par_axis2 );
    par_axis2 = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_20_trace );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_21_ravel( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_order = python_pars[ 1 ];
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_296387ff09017798e2e175e3dbfd7b0d = NULL;

    struct Nuitka_FrameObject *frame_296387ff09017798e2e175e3dbfd7b0d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_296387ff09017798e2e175e3dbfd7b0d, codeobj_296387ff09017798e2e175e3dbfd7b0d, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *) );
    frame_296387ff09017798e2e175e3dbfd7b0d = cache_frame_296387ff09017798e2e175e3dbfd7b0d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_296387ff09017798e2e175e3dbfd7b0d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_296387ff09017798e2e175e3dbfd7b0d ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_a;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1481;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1481;
        type_description_1 = "oo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 1482;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_296387ff09017798e2e175e3dbfd7b0d->m_frame.f_lineno = 1482;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1482;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1482;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_order;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_296387ff09017798e2e175e3dbfd7b0d->m_frame.f_lineno = 1482;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1482;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 1484;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_296387ff09017798e2e175e3dbfd7b0d->m_frame.f_lineno = 1484;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1484;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ravel );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1484;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = par_order;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_296387ff09017798e2e175e3dbfd7b0d->m_frame.f_lineno = 1484;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1484;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_296387ff09017798e2e175e3dbfd7b0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_296387ff09017798e2e175e3dbfd7b0d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_296387ff09017798e2e175e3dbfd7b0d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_296387ff09017798e2e175e3dbfd7b0d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_296387ff09017798e2e175e3dbfd7b0d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_296387ff09017798e2e175e3dbfd7b0d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_296387ff09017798e2e175e3dbfd7b0d,
        type_description_1,
        par_a,
        par_order
    );


    // Release cached frame.
    if ( frame_296387ff09017798e2e175e3dbfd7b0d == cache_frame_296387ff09017798e2e175e3dbfd7b0d )
    {
        Py_DECREF( frame_296387ff09017798e2e175e3dbfd7b0d );
    }
    cache_frame_296387ff09017798e2e175e3dbfd7b0d = NULL;

    assertFrameObject( frame_296387ff09017798e2e175e3dbfd7b0d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_21_ravel );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

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

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_21_ravel );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_22_nonzero( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_471ccb8d5e275665aa9d58a97dacfed4 = NULL;

    struct Nuitka_FrameObject *frame_471ccb8d5e275665aa9d58a97dacfed4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_471ccb8d5e275665aa9d58a97dacfed4, codeobj_471ccb8d5e275665aa9d58a97dacfed4, module_numpy$core$fromnumeric, sizeof(void *) );
    frame_471ccb8d5e275665aa9d58a97dacfed4 = cache_frame_471ccb8d5e275665aa9d58a97dacfed4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_471ccb8d5e275665aa9d58a97dacfed4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_471ccb8d5e275665aa9d58a97dacfed4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 1562;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = const_str_plain_nonzero;
    frame_471ccb8d5e275665aa9d58a97dacfed4->m_frame.f_lineno = 1562;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1562;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_471ccb8d5e275665aa9d58a97dacfed4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_471ccb8d5e275665aa9d58a97dacfed4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_471ccb8d5e275665aa9d58a97dacfed4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_471ccb8d5e275665aa9d58a97dacfed4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_471ccb8d5e275665aa9d58a97dacfed4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_471ccb8d5e275665aa9d58a97dacfed4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_471ccb8d5e275665aa9d58a97dacfed4,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_471ccb8d5e275665aa9d58a97dacfed4 == cache_frame_471ccb8d5e275665aa9d58a97dacfed4 )
    {
        Py_DECREF( frame_471ccb8d5e275665aa9d58a97dacfed4 );
    }
    cache_frame_471ccb8d5e275665aa9d58a97dacfed4 = NULL;

    assertFrameObject( frame_471ccb8d5e275665aa9d58a97dacfed4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_22_nonzero );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_22_nonzero );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_23_shape( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *var_result = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_01d01d4b7980fc3d7b02435c8b3a604f = NULL;

    struct Nuitka_FrameObject *frame_01d01d4b7980fc3d7b02435c8b3a604f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_01d01d4b7980fc3d7b02435c8b3a604f, codeobj_01d01d4b7980fc3d7b02435c8b3a604f, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *) );
    frame_01d01d4b7980fc3d7b02435c8b3a604f = cache_frame_01d01d4b7980fc3d7b02435c8b3a604f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_01d01d4b7980fc3d7b02435c8b3a604f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_01d01d4b7980fc3d7b02435c8b3a604f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1604;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_01d01d4b7980fc3d7b02435c8b3a604f );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_01d01d4b7980fc3d7b02435c8b3a604f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_01d01d4b7980fc3d7b02435c8b3a604f, exception_keeper_lineno_1 );
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


        exception_lineno = 1605;
        type_description_1 = "oo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 1606;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_01d01d4b7980fc3d7b02435c8b3a604f->m_frame.f_lineno = 1606;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1606;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1606;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 1603;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_01d01d4b7980fc3d7b02435c8b3a604f->m_frame) frame_01d01d4b7980fc3d7b02435c8b3a604f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_23_shape );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_return_value = var_result;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;

        exception_lineno = 1607;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_01d01d4b7980fc3d7b02435c8b3a604f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_01d01d4b7980fc3d7b02435c8b3a604f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_01d01d4b7980fc3d7b02435c8b3a604f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_01d01d4b7980fc3d7b02435c8b3a604f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_01d01d4b7980fc3d7b02435c8b3a604f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_01d01d4b7980fc3d7b02435c8b3a604f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_01d01d4b7980fc3d7b02435c8b3a604f,
        type_description_1,
        par_a,
        var_result
    );


    // Release cached frame.
    if ( frame_01d01d4b7980fc3d7b02435c8b3a604f == cache_frame_01d01d4b7980fc3d7b02435c8b3a604f )
    {
        Py_DECREF( frame_01d01d4b7980fc3d7b02435c8b3a604f );
    }
    cache_frame_01d01d4b7980fc3d7b02435c8b3a604f = NULL;

    assertFrameObject( frame_01d01d4b7980fc3d7b02435c8b3a604f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_23_shape );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_23_shape );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_24_compress( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_condition = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_ab3b96fb215cdf44af8ead58a587be38 = NULL;

    struct Nuitka_FrameObject *frame_ab3b96fb215cdf44af8ead58a587be38;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ab3b96fb215cdf44af8ead58a587be38, codeobj_ab3b96fb215cdf44af8ead58a587be38, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ab3b96fb215cdf44af8ead58a587be38 = cache_frame_ab3b96fb215cdf44af8ead58a587be38;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ab3b96fb215cdf44af8ead58a587be38 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ab3b96fb215cdf44af8ead58a587be38 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 1670;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_compress;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_condition;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_ab3b96fb215cdf44af8ead58a587be38->m_frame.f_lineno = 1670;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1670;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab3b96fb215cdf44af8ead58a587be38 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab3b96fb215cdf44af8ead58a587be38 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ab3b96fb215cdf44af8ead58a587be38 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ab3b96fb215cdf44af8ead58a587be38, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ab3b96fb215cdf44af8ead58a587be38->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ab3b96fb215cdf44af8ead58a587be38, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ab3b96fb215cdf44af8ead58a587be38,
        type_description_1,
        par_condition,
        par_a,
        par_axis,
        par_out
    );


    // Release cached frame.
    if ( frame_ab3b96fb215cdf44af8ead58a587be38 == cache_frame_ab3b96fb215cdf44af8ead58a587be38 )
    {
        Py_DECREF( frame_ab3b96fb215cdf44af8ead58a587be38 );
    }
    cache_frame_ab3b96fb215cdf44af8ead58a587be38 = NULL;

    assertFrameObject( frame_ab3b96fb215cdf44af8ead58a587be38 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_24_compress );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_condition );
    Py_DECREF( par_condition );
    par_condition = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_condition );
    Py_DECREF( par_condition );
    par_condition = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_24_compress );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_25_clip( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_a_min = python_pars[ 1 ];
    PyObject *par_a_max = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
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
    static struct Nuitka_FrameObject *cache_frame_74d1219be38d0bfbc3002d064fafda08 = NULL;

    struct Nuitka_FrameObject *frame_74d1219be38d0bfbc3002d064fafda08;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_74d1219be38d0bfbc3002d064fafda08, codeobj_74d1219be38d0bfbc3002d064fafda08, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_74d1219be38d0bfbc3002d064fafda08 = cache_frame_74d1219be38d0bfbc3002d064fafda08;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74d1219be38d0bfbc3002d064fafda08 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74d1219be38d0bfbc3002d064fafda08 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 1727;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_clip;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a_min;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a_max;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_out;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_74d1219be38d0bfbc3002d064fafda08->m_frame.f_lineno = 1727;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1727;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74d1219be38d0bfbc3002d064fafda08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_74d1219be38d0bfbc3002d064fafda08 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74d1219be38d0bfbc3002d064fafda08 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74d1219be38d0bfbc3002d064fafda08, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74d1219be38d0bfbc3002d064fafda08->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74d1219be38d0bfbc3002d064fafda08, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74d1219be38d0bfbc3002d064fafda08,
        type_description_1,
        par_a,
        par_a_min,
        par_a_max,
        par_out
    );


    // Release cached frame.
    if ( frame_74d1219be38d0bfbc3002d064fafda08 == cache_frame_74d1219be38d0bfbc3002d064fafda08 )
    {
        Py_DECREF( frame_74d1219be38d0bfbc3002d064fafda08 );
    }
    cache_frame_74d1219be38d0bfbc3002d064fafda08 = NULL;

    assertFrameObject( frame_74d1219be38d0bfbc3002d064fafda08 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_25_clip );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_a_min );
    Py_DECREF( par_a_min );
    par_a_min = NULL;

    CHECK_OBJECT( (PyObject *)par_a_max );
    Py_DECREF( par_a_max );
    par_a_max = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a_min );
    Py_DECREF( par_a_min );
    par_a_min = NULL;

    CHECK_OBJECT( (PyObject *)par_a_max );
    Py_DECREF( par_a_max );
    par_a_max = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_25_clip );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_26_sum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_res = NULL;
    PyObject *var_sum = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_27e5b1ca3e17a4178b700fc3c8fbaada = NULL;

    struct Nuitka_FrameObject *frame_27e5b1ca3e17a4178b700fc3c8fbaada;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_27e5b1ca3e17a4178b700fc3c8fbaada, codeobj_27e5b1ca3e17a4178b700fc3c8fbaada, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_27e5b1ca3e17a4178b700fc3c8fbaada = cache_frame_27e5b1ca3e17a4178b700fc3c8fbaada;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_27e5b1ca3e17a4178b700fc3c8fbaada );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_27e5b1ca3e17a4178b700fc3c8fbaada ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1818;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1818;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_isinstance_inst_1 = par_a;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__gentype );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__gentype );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_gentype" );
        exception_tb = NULL;

        exception_lineno = 1820;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1820;
        type_description_1 = "oooooooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__sum_ );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sum_ );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_sum_" );
        exception_tb = NULL;

        exception_lineno = 1821;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_27e5b1ca3e17a4178b700fc3c8fbaada->m_frame.f_lineno = 1821;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1821;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;

    tmp_compare_left_2 = par_out;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_1 = var_res;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = par_out;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = Py_Ellipsis;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1823;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = par_out;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_3 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 1826;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 1826;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_3 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_3 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_3 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sum );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1828;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    assert( var_sum == NULL );
    var_sum = tmp_assign_source_4;

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

    tmp_assign_source_5 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_27e5b1ca3e17a4178b700fc3c8fbaada );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_27e5b1ca3e17a4178b700fc3c8fbaada, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_27e5b1ca3e17a4178b700fc3c8fbaada, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1829;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 1827;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_27e5b1ca3e17a4178b700fc3c8fbaada->m_frame) frame_27e5b1ca3e17a4178b700fc3c8fbaada->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_2;
    branch_no_5:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_26_sum );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_5 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_True;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dircall_arg1_1 = var_sum;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "sum" );
        exception_tb = NULL;

        exception_lineno = 1832;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1832;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_6:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_4:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 1833;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__sum );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1833;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_4 = par_axis;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_out;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1833;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_27e5b1ca3e17a4178b700fc3c8fbaada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_27e5b1ca3e17a4178b700fc3c8fbaada );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_27e5b1ca3e17a4178b700fc3c8fbaada );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_27e5b1ca3e17a4178b700fc3c8fbaada, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_27e5b1ca3e17a4178b700fc3c8fbaada->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_27e5b1ca3e17a4178b700fc3c8fbaada, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_27e5b1ca3e17a4178b700fc3c8fbaada,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_kwargs,
        var_res,
        var_sum
    );


    // Release cached frame.
    if ( frame_27e5b1ca3e17a4178b700fc3c8fbaada == cache_frame_27e5b1ca3e17a4178b700fc3c8fbaada )
    {
        Py_DECREF( frame_27e5b1ca3e17a4178b700fc3c8fbaada );
    }
    cache_frame_27e5b1ca3e17a4178b700fc3c8fbaada = NULL;

    assertFrameObject( frame_27e5b1ca3e17a4178b700fc3c8fbaada );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_26_sum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_sum );
    var_sum = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_sum );
    var_sum = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_26_sum );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_27_product( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    bool tmp_isnot_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_915080cffb930b0c8c76b014d829b3ea = NULL;

    struct Nuitka_FrameObject *frame_915080cffb930b0c8c76b014d829b3ea;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_915080cffb930b0c8c76b014d829b3ea, codeobj_915080cffb930b0c8c76b014d829b3ea, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_915080cffb930b0c8c76b014d829b3ea = cache_frame_915080cffb930b0c8c76b014d829b3ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_915080cffb930b0c8c76b014d829b3ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_915080cffb930b0c8c76b014d829b3ea ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1847;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1847;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 1849;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_multiply );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1849;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1849;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1849;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_915080cffb930b0c8c76b014d829b3ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_915080cffb930b0c8c76b014d829b3ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_915080cffb930b0c8c76b014d829b3ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_915080cffb930b0c8c76b014d829b3ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_915080cffb930b0c8c76b014d829b3ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_915080cffb930b0c8c76b014d829b3ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_915080cffb930b0c8c76b014d829b3ea,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_915080cffb930b0c8c76b014d829b3ea == cache_frame_915080cffb930b0c8c76b014d829b3ea )
    {
        Py_DECREF( frame_915080cffb930b0c8c76b014d829b3ea );
    }
    cache_frame_915080cffb930b0c8c76b014d829b3ea = NULL;

    assertFrameObject( frame_915080cffb930b0c8c76b014d829b3ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_27_product );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_27_product );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_28_sometrue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *var_arr = NULL;
    PyObject *var_kwargs = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_isnot_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_c1164f176ddf92a60a9c3aecf22ca08d = NULL;

    struct Nuitka_FrameObject *frame_c1164f176ddf92a60a9c3aecf22ca08d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c1164f176ddf92a60a9c3aecf22ca08d, codeobj_c1164f176ddf92a60a9c3aecf22ca08d, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c1164f176ddf92a60a9c3aecf22ca08d = cache_frame_c1164f176ddf92a60a9c3aecf22ca08d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c1164f176ddf92a60a9c3aecf22ca08d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c1164f176ddf92a60a9c3aecf22ca08d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 1863;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_c1164f176ddf92a60a9c3aecf22ca08d->m_frame.f_lineno = 1863;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1863;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_arr == NULL );
    var_arr = tmp_assign_source_1;

    tmp_assign_source_2 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_2;

    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1865;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1865;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_2 = var_arr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_any );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1867;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1867;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1164f176ddf92a60a9c3aecf22ca08d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1164f176ddf92a60a9c3aecf22ca08d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1164f176ddf92a60a9c3aecf22ca08d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c1164f176ddf92a60a9c3aecf22ca08d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c1164f176ddf92a60a9c3aecf22ca08d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c1164f176ddf92a60a9c3aecf22ca08d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c1164f176ddf92a60a9c3aecf22ca08d,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_arr,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_c1164f176ddf92a60a9c3aecf22ca08d == cache_frame_c1164f176ddf92a60a9c3aecf22ca08d )
    {
        Py_DECREF( frame_c1164f176ddf92a60a9c3aecf22ca08d );
    }
    cache_frame_c1164f176ddf92a60a9c3aecf22ca08d = NULL;

    assertFrameObject( frame_c1164f176ddf92a60a9c3aecf22ca08d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_28_sometrue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_28_sometrue );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_29_alltrue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *var_arr = NULL;
    PyObject *var_kwargs = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_isnot_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_86d7ff9025e724088d2d14ae53a344c0 = NULL;

    struct Nuitka_FrameObject *frame_86d7ff9025e724088d2d14ae53a344c0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_86d7ff9025e724088d2d14ae53a344c0, codeobj_86d7ff9025e724088d2d14ae53a344c0, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_86d7ff9025e724088d2d14ae53a344c0 = cache_frame_86d7ff9025e724088d2d14ae53a344c0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_86d7ff9025e724088d2d14ae53a344c0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_86d7ff9025e724088d2d14ae53a344c0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 1879;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_86d7ff9025e724088d2d14ae53a344c0->m_frame.f_lineno = 1879;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1879;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_arr == NULL );
    var_arr = tmp_assign_source_1;

    tmp_assign_source_2 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_2;

    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1881;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1881;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_2 = var_arr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1883;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1883;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86d7ff9025e724088d2d14ae53a344c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_86d7ff9025e724088d2d14ae53a344c0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_86d7ff9025e724088d2d14ae53a344c0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_86d7ff9025e724088d2d14ae53a344c0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_86d7ff9025e724088d2d14ae53a344c0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_86d7ff9025e724088d2d14ae53a344c0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_86d7ff9025e724088d2d14ae53a344c0,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_arr,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_86d7ff9025e724088d2d14ae53a344c0 == cache_frame_86d7ff9025e724088d2d14ae53a344c0 )
    {
        Py_DECREF( frame_86d7ff9025e724088d2d14ae53a344c0 );
    }
    cache_frame_86d7ff9025e724088d2d14ae53a344c0 = NULL;

    assertFrameObject( frame_86d7ff9025e724088d2d14ae53a344c0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_29_alltrue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_29_alltrue );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_30_any( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *var_arr = NULL;
    PyObject *var_kwargs = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_isnot_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_1f286dcfd8cd0c2536ee22020c7b0aba = NULL;

    struct Nuitka_FrameObject *frame_1f286dcfd8cd0c2536ee22020c7b0aba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f286dcfd8cd0c2536ee22020c7b0aba, codeobj_1f286dcfd8cd0c2536ee22020c7b0aba, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f286dcfd8cd0c2536ee22020c7b0aba = cache_frame_1f286dcfd8cd0c2536ee22020c7b0aba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f286dcfd8cd0c2536ee22020c7b0aba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f286dcfd8cd0c2536ee22020c7b0aba ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 1966;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_1f286dcfd8cd0c2536ee22020c7b0aba->m_frame.f_lineno = 1966;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1966;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_arr == NULL );
    var_arr = tmp_assign_source_1;

    tmp_assign_source_2 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_2;

    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1968;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1968;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_2 = var_arr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_any );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1970;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1970;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f286dcfd8cd0c2536ee22020c7b0aba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f286dcfd8cd0c2536ee22020c7b0aba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f286dcfd8cd0c2536ee22020c7b0aba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f286dcfd8cd0c2536ee22020c7b0aba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f286dcfd8cd0c2536ee22020c7b0aba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f286dcfd8cd0c2536ee22020c7b0aba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f286dcfd8cd0c2536ee22020c7b0aba,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_arr,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_1f286dcfd8cd0c2536ee22020c7b0aba == cache_frame_1f286dcfd8cd0c2536ee22020c7b0aba )
    {
        Py_DECREF( frame_1f286dcfd8cd0c2536ee22020c7b0aba );
    }
    cache_frame_1f286dcfd8cd0c2536ee22020c7b0aba = NULL;

    assertFrameObject( frame_1f286dcfd8cd0c2536ee22020c7b0aba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_30_any );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_30_any );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_31_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *var_arr = NULL;
    PyObject *var_kwargs = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    bool tmp_isnot_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_4563e9aaab3749205c0045f53557252f = NULL;

    struct Nuitka_FrameObject *frame_4563e9aaab3749205c0045f53557252f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4563e9aaab3749205c0045f53557252f, codeobj_4563e9aaab3749205c0045f53557252f, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4563e9aaab3749205c0045f53557252f = cache_frame_4563e9aaab3749205c0045f53557252f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4563e9aaab3749205c0045f53557252f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4563e9aaab3749205c0045f53557252f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 2046;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4563e9aaab3749205c0045f53557252f->m_frame.f_lineno = 2046;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2046;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_arr == NULL );
    var_arr = tmp_assign_source_1;

    tmp_assign_source_2 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_2;

    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2048;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2048;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_source_name_2 = var_arr;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2050;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2050;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4563e9aaab3749205c0045f53557252f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4563e9aaab3749205c0045f53557252f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4563e9aaab3749205c0045f53557252f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4563e9aaab3749205c0045f53557252f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4563e9aaab3749205c0045f53557252f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4563e9aaab3749205c0045f53557252f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4563e9aaab3749205c0045f53557252f,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_arr,
        var_kwargs
    );


    // Release cached frame.
    if ( frame_4563e9aaab3749205c0045f53557252f == cache_frame_4563e9aaab3749205c0045f53557252f )
    {
        Py_DECREF( frame_4563e9aaab3749205c0045f53557252f );
    }
    cache_frame_4563e9aaab3749205c0045f53557252f = NULL;

    assertFrameObject( frame_4563e9aaab3749205c0045f53557252f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_31_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_kwargs );
    var_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_31_all );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_32_cumsum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_fc79d6341d07e9e366a9abbe8a9279e3 = NULL;

    struct Nuitka_FrameObject *frame_fc79d6341d07e9e366a9abbe8a9279e3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc79d6341d07e9e366a9abbe8a9279e3, codeobj_fc79d6341d07e9e366a9abbe8a9279e3, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fc79d6341d07e9e366a9abbe8a9279e3 = cache_frame_fc79d6341d07e9e366a9abbe8a9279e3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc79d6341d07e9e366a9abbe8a9279e3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc79d6341d07e9e366a9abbe8a9279e3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 2117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_cumsum;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_fc79d6341d07e9e366a9abbe8a9279e3->m_frame.f_lineno = 2117;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc79d6341d07e9e366a9abbe8a9279e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc79d6341d07e9e366a9abbe8a9279e3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc79d6341d07e9e366a9abbe8a9279e3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc79d6341d07e9e366a9abbe8a9279e3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc79d6341d07e9e366a9abbe8a9279e3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc79d6341d07e9e366a9abbe8a9279e3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc79d6341d07e9e366a9abbe8a9279e3,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out
    );


    // Release cached frame.
    if ( frame_fc79d6341d07e9e366a9abbe8a9279e3 == cache_frame_fc79d6341d07e9e366a9abbe8a9279e3 )
    {
        Py_DECREF( frame_fc79d6341d07e9e366a9abbe8a9279e3 );
    }
    cache_frame_fc79d6341d07e9e366a9abbe8a9279e3 = NULL;

    assertFrameObject( frame_fc79d6341d07e9e366a9abbe8a9279e3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_32_cumsum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_32_cumsum );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_33_cumproduct( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_c41f2c49faa913042959b50d0f31c6e7 = NULL;

    struct Nuitka_FrameObject *frame_c41f2c49faa913042959b50d0f31c6e7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c41f2c49faa913042959b50d0f31c6e7, codeobj_c41f2c49faa913042959b50d0f31c6e7, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c41f2c49faa913042959b50d0f31c6e7 = cache_frame_c41f2c49faa913042959b50d0f31c6e7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c41f2c49faa913042959b50d0f31c6e7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c41f2c49faa913042959b50d0f31c6e7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 2130;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_cumprod;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_c41f2c49faa913042959b50d0f31c6e7->m_frame.f_lineno = 2130;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2130;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c41f2c49faa913042959b50d0f31c6e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c41f2c49faa913042959b50d0f31c6e7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c41f2c49faa913042959b50d0f31c6e7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c41f2c49faa913042959b50d0f31c6e7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c41f2c49faa913042959b50d0f31c6e7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c41f2c49faa913042959b50d0f31c6e7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c41f2c49faa913042959b50d0f31c6e7,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out
    );


    // Release cached frame.
    if ( frame_c41f2c49faa913042959b50d0f31c6e7 == cache_frame_c41f2c49faa913042959b50d0f31c6e7 )
    {
        Py_DECREF( frame_c41f2c49faa913042959b50d0f31c6e7 );
    }
    cache_frame_c41f2c49faa913042959b50d0f31c6e7 = NULL;

    assertFrameObject( frame_c41f2c49faa913042959b50d0f31c6e7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_33_cumproduct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_33_cumproduct );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_34_ptp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_72716efcb943f5f5e0ca43b34b0cf0f2 = NULL;

    struct Nuitka_FrameObject *frame_72716efcb943f5f5e0ca43b34b0cf0f2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_72716efcb943f5f5e0ca43b34b0cf0f2, codeobj_72716efcb943f5f5e0ca43b34b0cf0f2, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_72716efcb943f5f5e0ca43b34b0cf0f2 = cache_frame_72716efcb943f5f5e0ca43b34b0cf0f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_72716efcb943f5f5e0ca43b34b0cf0f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_72716efcb943f5f5e0ca43b34b0cf0f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 2171;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_ptp;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_72716efcb943f5f5e0ca43b34b0cf0f2->m_frame.f_lineno = 2171;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2171;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72716efcb943f5f5e0ca43b34b0cf0f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_72716efcb943f5f5e0ca43b34b0cf0f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_72716efcb943f5f5e0ca43b34b0cf0f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_72716efcb943f5f5e0ca43b34b0cf0f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_72716efcb943f5f5e0ca43b34b0cf0f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_72716efcb943f5f5e0ca43b34b0cf0f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72716efcb943f5f5e0ca43b34b0cf0f2,
        type_description_1,
        par_a,
        par_axis,
        par_out
    );


    // Release cached frame.
    if ( frame_72716efcb943f5f5e0ca43b34b0cf0f2 == cache_frame_72716efcb943f5f5e0ca43b34b0cf0f2 )
    {
        Py_DECREF( frame_72716efcb943f5f5e0ca43b34b0cf0f2 );
    }
    cache_frame_72716efcb943f5f5e0ca43b34b0cf0f2 = NULL;

    assertFrameObject( frame_72716efcb943f5f5e0ca43b34b0cf0f2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_34_ptp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_34_ptp );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_35_amax( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_amax = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_2d8838747087c5b2003a45c211490d53 = NULL;

    struct Nuitka_FrameObject *frame_2d8838747087c5b2003a45c211490d53;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d8838747087c5b2003a45c211490d53, codeobj_2d8838747087c5b2003a45c211490d53, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d8838747087c5b2003a45c211490d53 = cache_frame_2d8838747087c5b2003a45c211490d53;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d8838747087c5b2003a45c211490d53 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d8838747087c5b2003a45c211490d53 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2260;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2260;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 2263;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 2263;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2265;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    assert( var_amax == NULL );
    var_amax = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_2d8838747087c5b2003a45c211490d53 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_2d8838747087c5b2003a45c211490d53, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_2d8838747087c5b2003a45c211490d53, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2266;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
        exception_lineno = 2264;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2d8838747087c5b2003a45c211490d53->m_frame) frame_2d8838747087c5b2003a45c211490d53->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_35_amax );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dircall_arg1_1 = var_amax;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "amax" );
        exception_tb = NULL;

        exception_lineno = 2269;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2269;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_4:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 2271;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__amax );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2271;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = par_axis;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_out;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2271;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_2d8838747087c5b2003a45c211490d53 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_2d8838747087c5b2003a45c211490d53 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_2d8838747087c5b2003a45c211490d53 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d8838747087c5b2003a45c211490d53, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d8838747087c5b2003a45c211490d53->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d8838747087c5b2003a45c211490d53, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d8838747087c5b2003a45c211490d53,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_kwargs,
        var_amax
    );


    // Release cached frame.
    if ( frame_2d8838747087c5b2003a45c211490d53 == cache_frame_2d8838747087c5b2003a45c211490d53 )
    {
        Py_DECREF( frame_2d8838747087c5b2003a45c211490d53 );
    }
    cache_frame_2d8838747087c5b2003a45c211490d53 = NULL;

    assertFrameObject( frame_2d8838747087c5b2003a45c211490d53 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_35_amax );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_amax );
    var_amax = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_amax );
    var_amax = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_35_amax );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_36_amin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_amin = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_aee98ad843a4a2a935e84acc30d53314 = NULL;

    struct Nuitka_FrameObject *frame_aee98ad843a4a2a935e84acc30d53314;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aee98ad843a4a2a935e84acc30d53314, codeobj_aee98ad843a4a2a935e84acc30d53314, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aee98ad843a4a2a935e84acc30d53314 = cache_frame_aee98ad843a4a2a935e84acc30d53314;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aee98ad843a4a2a935e84acc30d53314 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aee98ad843a4a2a935e84acc30d53314 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2361;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2361;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 2363;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 2363;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_min );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2365;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    assert( var_amin == NULL );
    var_amin = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_aee98ad843a4a2a935e84acc30d53314 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_aee98ad843a4a2a935e84acc30d53314, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_aee98ad843a4a2a935e84acc30d53314, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2366;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
        exception_lineno = 2364;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_aee98ad843a4a2a935e84acc30d53314->m_frame) frame_aee98ad843a4a2a935e84acc30d53314->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_2;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_36_amin );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dircall_arg1_1 = var_amin;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "amin" );
        exception_tb = NULL;

        exception_lineno = 2369;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2369;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_4:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 2371;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__amin );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2371;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_3 = par_axis;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_out;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2371;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_aee98ad843a4a2a935e84acc30d53314 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_aee98ad843a4a2a935e84acc30d53314 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_aee98ad843a4a2a935e84acc30d53314 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aee98ad843a4a2a935e84acc30d53314, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aee98ad843a4a2a935e84acc30d53314->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aee98ad843a4a2a935e84acc30d53314, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aee98ad843a4a2a935e84acc30d53314,
        type_description_1,
        par_a,
        par_axis,
        par_out,
        par_keepdims,
        var_kwargs,
        var_amin
    );


    // Release cached frame.
    if ( frame_aee98ad843a4a2a935e84acc30d53314 == cache_frame_aee98ad843a4a2a935e84acc30d53314 )
    {
        Py_DECREF( frame_aee98ad843a4a2a935e84acc30d53314 );
    }
    cache_frame_aee98ad843a4a2a935e84acc30d53314 = NULL;

    assertFrameObject( frame_aee98ad843a4a2a935e84acc30d53314 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_36_amin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_amin );
    var_amin = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_amin );
    var_amin = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_36_amin );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_37_alen( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_26e85d5558bb42a61b04cb9b3fc67e50 = NULL;

    struct Nuitka_FrameObject *frame_26e85d5558bb42a61b04cb9b3fc67e50;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26e85d5558bb42a61b04cb9b3fc67e50, codeobj_26e85d5558bb42a61b04cb9b3fc67e50, module_numpy$core$fromnumeric, sizeof(void *) );
    frame_26e85d5558bb42a61b04cb9b3fc67e50 = cache_frame_26e85d5558bb42a61b04cb9b3fc67e50;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26e85d5558bb42a61b04cb9b3fc67e50 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26e85d5558bb42a61b04cb9b3fc67e50 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_len_arg_1 = par_a;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2403;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_37_alen );
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
    PRESERVE_FRAME_EXCEPTION( frame_26e85d5558bb42a61b04cb9b3fc67e50 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_26e85d5558bb42a61b04cb9b3fc67e50, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_26e85d5558bb42a61b04cb9b3fc67e50, exception_keeper_lineno_1 );
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


        exception_lineno = 2404;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 2405;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_2830dc36950302d53e2190617abf71aa );
    frame_26e85d5558bb42a61b04cb9b3fc67e50->m_frame.f_lineno = 2405;
    tmp_len_arg_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2405;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2405;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 2402;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_26e85d5558bb42a61b04cb9b3fc67e50->m_frame) frame_26e85d5558bb42a61b04cb9b3fc67e50->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_26e85d5558bb42a61b04cb9b3fc67e50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_26e85d5558bb42a61b04cb9b3fc67e50 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_26e85d5558bb42a61b04cb9b3fc67e50 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26e85d5558bb42a61b04cb9b3fc67e50, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26e85d5558bb42a61b04cb9b3fc67e50->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26e85d5558bb42a61b04cb9b3fc67e50, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26e85d5558bb42a61b04cb9b3fc67e50,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_26e85d5558bb42a61b04cb9b3fc67e50 == cache_frame_26e85d5558bb42a61b04cb9b3fc67e50 )
    {
        Py_DECREF( frame_26e85d5558bb42a61b04cb9b3fc67e50 );
    }
    cache_frame_26e85d5558bb42a61b04cb9b3fc67e50 = NULL;

    assertFrameObject( frame_26e85d5558bb42a61b04cb9b3fc67e50 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_37_alen );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_37_alen );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_38_prod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_prod = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
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
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_f9d82324105b06245991a7b19d41e690 = NULL;

    struct Nuitka_FrameObject *frame_f9d82324105b06245991a7b19d41e690;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9d82324105b06245991a7b19d41e690, codeobj_f9d82324105b06245991a7b19d41e690, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f9d82324105b06245991a7b19d41e690 = cache_frame_f9d82324105b06245991a7b19d41e690;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9d82324105b06245991a7b19d41e690 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9d82324105b06245991a7b19d41e690 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2507;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2507;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 2509;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 2509;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prod );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2511;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    assert( var_prod == NULL );
    var_prod = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_f9d82324105b06245991a7b19d41e690 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f9d82324105b06245991a7b19d41e690, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f9d82324105b06245991a7b19d41e690, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2512;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
        exception_lineno = 2510;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9d82324105b06245991a7b19d41e690->m_frame) frame_f9d82324105b06245991a7b19d41e690->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_2;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_38_prod );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dircall_arg1_1 = var_prod;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "prod" );
        exception_tb = NULL;

        exception_lineno = 2515;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2515;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_4:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 2517;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__prod );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2517;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_4 = par_axis;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_out;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2517;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9d82324105b06245991a7b19d41e690 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9d82324105b06245991a7b19d41e690 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9d82324105b06245991a7b19d41e690 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9d82324105b06245991a7b19d41e690, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9d82324105b06245991a7b19d41e690->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9d82324105b06245991a7b19d41e690, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9d82324105b06245991a7b19d41e690,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_kwargs,
        var_prod
    );


    // Release cached frame.
    if ( frame_f9d82324105b06245991a7b19d41e690 == cache_frame_f9d82324105b06245991a7b19d41e690 )
    {
        Py_DECREF( frame_f9d82324105b06245991a7b19d41e690 );
    }
    cache_frame_f9d82324105b06245991a7b19d41e690 = NULL;

    assertFrameObject( frame_f9d82324105b06245991a7b19d41e690 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_38_prod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_prod );
    var_prod = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_prod );
    var_prod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_38_prod );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_39_cumprod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_290b082cc13e43edf0eb46ad59169f48 = NULL;

    struct Nuitka_FrameObject *frame_290b082cc13e43edf0eb46ad59169f48;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_290b082cc13e43edf0eb46ad59169f48, codeobj_290b082cc13e43edf0eb46ad59169f48, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_290b082cc13e43edf0eb46ad59169f48 = cache_frame_290b082cc13e43edf0eb46ad59169f48;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_290b082cc13e43edf0eb46ad59169f48 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_290b082cc13e43edf0eb46ad59169f48 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 2581;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_cumprod;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_290b082cc13e43edf0eb46ad59169f48->m_frame.f_lineno = 2581;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2581;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_290b082cc13e43edf0eb46ad59169f48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_290b082cc13e43edf0eb46ad59169f48 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_290b082cc13e43edf0eb46ad59169f48 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_290b082cc13e43edf0eb46ad59169f48, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_290b082cc13e43edf0eb46ad59169f48->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_290b082cc13e43edf0eb46ad59169f48, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_290b082cc13e43edf0eb46ad59169f48,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out
    );


    // Release cached frame.
    if ( frame_290b082cc13e43edf0eb46ad59169f48 == cache_frame_290b082cc13e43edf0eb46ad59169f48 )
    {
        Py_DECREF( frame_290b082cc13e43edf0eb46ad59169f48 );
    }
    cache_frame_290b082cc13e43edf0eb46ad59169f48 = NULL;

    assertFrameObject( frame_290b082cc13e43edf0eb46ad59169f48 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_39_cumprod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_39_cumprod );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_40_ndim( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_dd857839a54b06f6eea51371789e765f = NULL;

    struct Nuitka_FrameObject *frame_dd857839a54b06f6eea51371789e765f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dd857839a54b06f6eea51371789e765f, codeobj_dd857839a54b06f6eea51371789e765f, module_numpy$core$fromnumeric, sizeof(void *) );
    frame_dd857839a54b06f6eea51371789e765f = cache_frame_dd857839a54b06f6eea51371789e765f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dd857839a54b06f6eea51371789e765f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dd857839a54b06f6eea51371789e765f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2616;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_40_ndim );
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
    PRESERVE_FRAME_EXCEPTION( frame_dd857839a54b06f6eea51371789e765f );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_dd857839a54b06f6eea51371789e765f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_dd857839a54b06f6eea51371789e765f, exception_keeper_lineno_1 );
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


        exception_lineno = 2617;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 2618;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_dd857839a54b06f6eea51371789e765f->m_frame.f_lineno = 2618;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2618;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2618;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 2615;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_dd857839a54b06f6eea51371789e765f->m_frame) frame_dd857839a54b06f6eea51371789e765f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_dd857839a54b06f6eea51371789e765f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_dd857839a54b06f6eea51371789e765f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_dd857839a54b06f6eea51371789e765f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dd857839a54b06f6eea51371789e765f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dd857839a54b06f6eea51371789e765f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dd857839a54b06f6eea51371789e765f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dd857839a54b06f6eea51371789e765f,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_dd857839a54b06f6eea51371789e765f == cache_frame_dd857839a54b06f6eea51371789e765f )
    {
        Py_DECREF( frame_dd857839a54b06f6eea51371789e765f );
    }
    cache_frame_dd857839a54b06f6eea51371789e765f = NULL;

    assertFrameObject( frame_dd857839a54b06f6eea51371789e765f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_40_ndim );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_40_ndim );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_41_rank( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_60763c04f218c157984e2782bfbbfb93 = NULL;

    struct Nuitka_FrameObject *frame_60763c04f218c157984e2782bfbbfb93;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60763c04f218c157984e2782bfbbfb93, codeobj_60763c04f218c157984e2782bfbbfb93, module_numpy$core$fromnumeric, sizeof(void *) );
    frame_60763c04f218c157984e2782bfbbfb93 = cache_frame_60763c04f218c157984e2782bfbbfb93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60763c04f218c157984e2782bfbbfb93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60763c04f218c157984e2782bfbbfb93 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_warnings );

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

        exception_lineno = 2667;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2667;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_89511fb01a2c0575918bd4d916d0e1cf;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "VisibleDeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 2670;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_60763c04f218c157984e2782bfbbfb93->m_frame.f_lineno = 2667;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2667;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2672;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_41_rank );
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
    PRESERVE_FRAME_EXCEPTION( frame_60763c04f218c157984e2782bfbbfb93 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_60763c04f218c157984e2782bfbbfb93, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_60763c04f218c157984e2782bfbbfb93, exception_keeper_lineno_1 );
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


        exception_lineno = 2673;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 2674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_60763c04f218c157984e2782bfbbfb93->m_frame.f_lineno = 2674;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2674;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 2671;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_60763c04f218c157984e2782bfbbfb93->m_frame) frame_60763c04f218c157984e2782bfbbfb93->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_60763c04f218c157984e2782bfbbfb93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_60763c04f218c157984e2782bfbbfb93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_60763c04f218c157984e2782bfbbfb93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60763c04f218c157984e2782bfbbfb93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60763c04f218c157984e2782bfbbfb93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60763c04f218c157984e2782bfbbfb93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60763c04f218c157984e2782bfbbfb93,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_60763c04f218c157984e2782bfbbfb93 == cache_frame_60763c04f218c157984e2782bfbbfb93 )
    {
        Py_DECREF( frame_60763c04f218c157984e2782bfbbfb93 );
    }
    cache_frame_60763c04f218c157984e2782bfbbfb93 = NULL;

    assertFrameObject( frame_60763c04f218c157984e2782bfbbfb93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_41_rank );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_41_rank );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_42_size( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_9ef28fbe208f10629211d2e1ea13e62f = NULL;

    struct Nuitka_FrameObject *frame_9ef28fbe208f10629211d2e1ea13e62f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ef28fbe208f10629211d2e1ea13e62f, codeobj_9ef28fbe208f10629211d2e1ea13e62f, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *) );
    frame_9ef28fbe208f10629211d2e1ea13e62f = cache_frame_9ef28fbe208f10629211d2e1ea13e62f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ef28fbe208f10629211d2e1ea13e62f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ef28fbe208f10629211d2e1ea13e62f ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_axis;

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
    // Tried code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2713;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_42_size );
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
    PRESERVE_FRAME_EXCEPTION( frame_9ef28fbe208f10629211d2e1ea13e62f );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9ef28fbe208f10629211d2e1ea13e62f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9ef28fbe208f10629211d2e1ea13e62f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2714;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 2715;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame.f_lineno = 2715;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2715;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2715;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 2712;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame) frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2718;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2718;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_42_size );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_9ef28fbe208f10629211d2e1ea13e62f );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_9ef28fbe208f10629211d2e1ea13e62f, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_9ef28fbe208f10629211d2e1ea13e62f, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2719;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 2720;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame.f_lineno = 2720;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2720;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2720;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2720;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 2717;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame) frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_3:;
    // End of try:
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9ef28fbe208f10629211d2e1ea13e62f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9ef28fbe208f10629211d2e1ea13e62f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9ef28fbe208f10629211d2e1ea13e62f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ef28fbe208f10629211d2e1ea13e62f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ef28fbe208f10629211d2e1ea13e62f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ef28fbe208f10629211d2e1ea13e62f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ef28fbe208f10629211d2e1ea13e62f,
        type_description_1,
        par_a,
        par_axis
    );


    // Release cached frame.
    if ( frame_9ef28fbe208f10629211d2e1ea13e62f == cache_frame_9ef28fbe208f10629211d2e1ea13e62f )
    {
        Py_DECREF( frame_9ef28fbe208f10629211d2e1ea13e62f );
    }
    cache_frame_9ef28fbe208f10629211d2e1ea13e62f = NULL;

    assertFrameObject( frame_9ef28fbe208f10629211d2e1ea13e62f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_42_size );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_42_size );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_43_around( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_decimals = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_79f912e84fb8750ca1981e611bc11dce = NULL;

    struct Nuitka_FrameObject *frame_79f912e84fb8750ca1981e611bc11dce;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79f912e84fb8750ca1981e611bc11dce, codeobj_79f912e84fb8750ca1981e611bc11dce, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_79f912e84fb8750ca1981e611bc11dce = cache_frame_79f912e84fb8750ca1981e611bc11dce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79f912e84fb8750ca1981e611bc11dce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79f912e84fb8750ca1981e611bc11dce ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__wrapfunc );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_wrapfunc" );
        exception_tb = NULL;

        exception_lineno = 2789;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_round;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_decimals;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_decimals;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_79f912e84fb8750ca1981e611bc11dce->m_frame.f_lineno = 2789;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2789;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79f912e84fb8750ca1981e611bc11dce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_79f912e84fb8750ca1981e611bc11dce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79f912e84fb8750ca1981e611bc11dce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79f912e84fb8750ca1981e611bc11dce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79f912e84fb8750ca1981e611bc11dce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79f912e84fb8750ca1981e611bc11dce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79f912e84fb8750ca1981e611bc11dce,
        type_description_1,
        par_a,
        par_decimals,
        par_out
    );


    // Release cached frame.
    if ( frame_79f912e84fb8750ca1981e611bc11dce == cache_frame_79f912e84fb8750ca1981e611bc11dce )
    {
        Py_DECREF( frame_79f912e84fb8750ca1981e611bc11dce );
    }
    cache_frame_79f912e84fb8750ca1981e611bc11dce = NULL;

    assertFrameObject( frame_79f912e84fb8750ca1981e611bc11dce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_43_around );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_decimals );
    Py_DECREF( par_decimals );
    par_decimals = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_decimals );
    Py_DECREF( par_decimals );
    par_decimals = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_43_around );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_44_round_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_decimals = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
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
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_8f6125997590f2435bb540f56de1011b = NULL;

    struct Nuitka_FrameObject *frame_8f6125997590f2435bb540f56de1011b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f6125997590f2435bb540f56de1011b, codeobj_8f6125997590f2435bb540f56de1011b, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f6125997590f2435bb540f56de1011b = cache_frame_8f6125997590f2435bb540f56de1011b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f6125997590f2435bb540f56de1011b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f6125997590f2435bb540f56de1011b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_around );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_around );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "around" );
        exception_tb = NULL;

        exception_lineno = 2803;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_decimals;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_decimals;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_out;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_8f6125997590f2435bb540f56de1011b->m_frame.f_lineno = 2803;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2803;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f6125997590f2435bb540f56de1011b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f6125997590f2435bb540f56de1011b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f6125997590f2435bb540f56de1011b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f6125997590f2435bb540f56de1011b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f6125997590f2435bb540f56de1011b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f6125997590f2435bb540f56de1011b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f6125997590f2435bb540f56de1011b,
        type_description_1,
        par_a,
        par_decimals,
        par_out
    );


    // Release cached frame.
    if ( frame_8f6125997590f2435bb540f56de1011b == cache_frame_8f6125997590f2435bb540f56de1011b )
    {
        Py_DECREF( frame_8f6125997590f2435bb540f56de1011b );
    }
    cache_frame_8f6125997590f2435bb540f56de1011b = NULL;

    assertFrameObject( frame_8f6125997590f2435bb540f56de1011b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_44_round_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_decimals );
    Py_DECREF( par_decimals );
    par_decimals = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

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

    CHECK_OBJECT( (PyObject *)par_decimals );
    Py_DECREF( par_decimals );
    par_decimals = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_44_round_ );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_45_mean( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_mean = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
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
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_0637c7efc486b5cebc5435e7539a3155 = NULL;

    struct Nuitka_FrameObject *frame_0637c7efc486b5cebc5435e7539a3155;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0637c7efc486b5cebc5435e7539a3155, codeobj_0637c7efc486b5cebc5435e7539a3155, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0637c7efc486b5cebc5435e7539a3155 = cache_frame_0637c7efc486b5cebc5435e7539a3155;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0637c7efc486b5cebc5435e7539a3155 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0637c7efc486b5cebc5435e7539a3155 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2898;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2898;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 2900;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 2900;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mean );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2902;
        type_description_1 = "ooooooo";
        goto try_except_handler_3;
    }
    assert( var_mean == NULL );
    var_mean = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0637c7efc486b5cebc5435e7539a3155 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0637c7efc486b5cebc5435e7539a3155, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0637c7efc486b5cebc5435e7539a3155, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2903;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
        exception_lineno = 2901;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0637c7efc486b5cebc5435e7539a3155->m_frame) frame_0637c7efc486b5cebc5435e7539a3155->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_2;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_45_mean );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dircall_arg1_1 = var_mean;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mean" );
        exception_tb = NULL;

        exception_lineno = 2906;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2906;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_4:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 2908;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__mean );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2908;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_4 = par_axis;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_out;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2908;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0637c7efc486b5cebc5435e7539a3155 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0637c7efc486b5cebc5435e7539a3155 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_0637c7efc486b5cebc5435e7539a3155 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0637c7efc486b5cebc5435e7539a3155, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0637c7efc486b5cebc5435e7539a3155->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0637c7efc486b5cebc5435e7539a3155, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0637c7efc486b5cebc5435e7539a3155,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_keepdims,
        var_kwargs,
        var_mean
    );


    // Release cached frame.
    if ( frame_0637c7efc486b5cebc5435e7539a3155 == cache_frame_0637c7efc486b5cebc5435e7539a3155 )
    {
        Py_DECREF( frame_0637c7efc486b5cebc5435e7539a3155 );
    }
    cache_frame_0637c7efc486b5cebc5435e7539a3155 = NULL;

    assertFrameObject( frame_0637c7efc486b5cebc5435e7539a3155 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_45_mean );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_mean );
    var_mean = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_mean );
    var_mean = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_45_mean );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_46_std( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_ddof = python_pars[ 4 ];
    PyObject *par_keepdims = python_pars[ 5 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_std = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
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
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_4b8639055ae79566225040d974e3c0b5 = NULL;

    struct Nuitka_FrameObject *frame_4b8639055ae79566225040d974e3c0b5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b8639055ae79566225040d974e3c0b5, codeobj_4b8639055ae79566225040d974e3c0b5, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b8639055ae79566225040d974e3c0b5 = cache_frame_4b8639055ae79566225040d974e3c0b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b8639055ae79566225040d974e3c0b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b8639055ae79566225040d974e3c0b5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 3015;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3015;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 3018;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 3018;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_std );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3020;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    assert( var_std == NULL );
    var_std = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_4b8639055ae79566225040d974e3c0b5 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_4b8639055ae79566225040d974e3c0b5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_4b8639055ae79566225040d974e3c0b5, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3021;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
        exception_lineno = 3019;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4b8639055ae79566225040d974e3c0b5->m_frame) frame_4b8639055ae79566225040d974e3c0b5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_2;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_46_std );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dircall_arg1_1 = var_std;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "std" );
        exception_tb = NULL;

        exception_lineno = 3024;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_ddof;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_ddof;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3024;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_4:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 3026;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__std );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3026;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
    tmp_dict_value_5 = par_axis;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = par_out;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = par_ddof;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_ddof;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3026;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4b8639055ae79566225040d974e3c0b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_4b8639055ae79566225040d974e3c0b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_4b8639055ae79566225040d974e3c0b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b8639055ae79566225040d974e3c0b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b8639055ae79566225040d974e3c0b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b8639055ae79566225040d974e3c0b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b8639055ae79566225040d974e3c0b5,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_kwargs,
        var_std
    );


    // Release cached frame.
    if ( frame_4b8639055ae79566225040d974e3c0b5 == cache_frame_4b8639055ae79566225040d974e3c0b5 )
    {
        Py_DECREF( frame_4b8639055ae79566225040d974e3c0b5 );
    }
    cache_frame_4b8639055ae79566225040d974e3c0b5 = NULL;

    assertFrameObject( frame_4b8639055ae79566225040d974e3c0b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_46_std );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_std );
    var_std = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_std );
    var_std = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_46_std );
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


static PyObject *impl_numpy$core$fromnumeric$$$function_47_var( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_ddof = python_pars[ 4 ];
    PyObject *par_keepdims = python_pars[ 5 ];
    PyObject *var_kwargs = NULL;
    PyObject *var_var = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
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
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg4_1;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_f9411e1dc2bbe86384ccc95d60ca9494 = NULL;

    struct Nuitka_FrameObject *frame_f9411e1dc2bbe86384ccc95d60ca9494;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyDict_New();
    assert( var_kwargs == NULL );
    var_kwargs = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9411e1dc2bbe86384ccc95d60ca9494, codeobj_f9411e1dc2bbe86384ccc95d60ca9494, module_numpy$core$fromnumeric, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f9411e1dc2bbe86384ccc95d60ca9494 = cache_frame_f9411e1dc2bbe86384ccc95d60ca9494;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9411e1dc2bbe86384ccc95d60ca9494 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9411e1dc2bbe86384ccc95d60ca9494 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_keepdims;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 3133;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValue );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3133;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictset_value = par_keepdims;

    CHECK_OBJECT( tmp_dictset_value );
    tmp_dictset_dict = var_kwargs;

    CHECK_OBJECT( tmp_dictset_dict );
    tmp_dictset_key = const_str_plain_keepdims;
    tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
    assert( !(tmp_res != 0) );
    branch_no_1:;
    tmp_type_arg_1 = par_a;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compare_left_2 != NULL );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 3136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndarray );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 3136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_var );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3138;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    assert( var_var == NULL );
    var_var = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_f9411e1dc2bbe86384ccc95d60ca9494 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f9411e1dc2bbe86384ccc95d60ca9494, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f9411e1dc2bbe86384ccc95d60ca9494, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3140;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
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
        exception_lineno = 3137;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f9411e1dc2bbe86384ccc95d60ca9494->m_frame) frame_f9411e1dc2bbe86384ccc95d60ca9494->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_2;
    branch_no_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_47_var );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dircall_arg1_1 = var_var;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "var" );
        exception_tb = NULL;

        exception_lineno = 3143;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_axis;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_out;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_ddof;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_ddof;
    tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg3_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3143;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_4:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__methods );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_methods" );
        exception_tb = NULL;

        exception_lineno = 3145;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__var );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3145;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
    tmp_dict_value_5 = par_axis;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = par_out;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_out;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = par_ddof;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_ddof;
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = var_kwargs;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3145;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9411e1dc2bbe86384ccc95d60ca9494 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9411e1dc2bbe86384ccc95d60ca9494 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9411e1dc2bbe86384ccc95d60ca9494 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9411e1dc2bbe86384ccc95d60ca9494, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9411e1dc2bbe86384ccc95d60ca9494->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9411e1dc2bbe86384ccc95d60ca9494, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9411e1dc2bbe86384ccc95d60ca9494,
        type_description_1,
        par_a,
        par_axis,
        par_dtype,
        par_out,
        par_ddof,
        par_keepdims,
        var_kwargs,
        var_var
    );


    // Release cached frame.
    if ( frame_f9411e1dc2bbe86384ccc95d60ca9494 == cache_frame_f9411e1dc2bbe86384ccc95d60ca9494 )
    {
        Py_DECREF( frame_f9411e1dc2bbe86384ccc95d60ca9494 );
    }
    cache_frame_f9411e1dc2bbe86384ccc95d60ca9494 = NULL;

    assertFrameObject( frame_f9411e1dc2bbe86384ccc95d60ca9494 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_47_var );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_var );
    var_var = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs );
    Py_DECREF( var_kwargs );
    var_kwargs = NULL;

    Py_XDECREF( var_var );
    var_var = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric$$$function_47_var );
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



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_10_partition( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_10_partition,
        const_str_plain_partition,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_167f9a1d4dee3efea0f6961b4c46f059,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_fd7b0efc97ed103434a62872cba77ea9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_11_argpartition( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_11_argpartition,
        const_str_plain_argpartition,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_94e016a84a184e4307bff9bce3728549,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_e2ac8db184a15b8fe0224ec698d0dc50,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_12_sort( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_12_sort,
        const_str_plain_sort,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1d477f849b2db00333ca111f631db8a2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_d0fe69a1b197edb6b3a9bd4123f0ee06,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_13_argsort( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_13_argsort,
        const_str_plain_argsort,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_084fdf1419a4088eab267436923d6987,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_70d16d9c01f37ca837c2fd700d98ce9f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_14_argmax( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_14_argmax,
        const_str_plain_argmax,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e86a0a0b4965db12b55cbc128bdb7ebb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_4353a4ef4d1c4ec280ef7e3fc2a08727,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_15_argmin( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_15_argmin,
        const_str_plain_argmin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bb535e6fbca89b50e966ae87f03034c6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_47547a130b8ae45525b36f179324e01a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_16_searchsorted( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_16_searchsorted,
        const_str_plain_searchsorted,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b017fcb83184dce55ba5c12a33e35bb7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_8061a2bf8d5ec969398499295c8602b6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_17_resize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_17_resize,
        const_str_plain_resize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ac6375c30034a3550dc37bd9006f6cf8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_cbefd752fe01ac9f28a44807e4337d32,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_18_squeeze( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_18_squeeze,
        const_str_plain_squeeze,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c435273ec25a07b6f693a4660c107ec8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_36babf27a20a270c2eef9b35fe47060f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_19_diagonal( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_19_diagonal,
        const_str_plain_diagonal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_681f591daff9a8703207b58d5d016f6d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_ee89850c80de3685b03fefc07d7daada,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_1__wrapit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_1__wrapit,
        const_str_plain__wrapit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_94546b95c37d6f848e090db696a284fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_20_trace( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_20_trace,
        const_str_plain_trace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3fe07f46d5b04f691b9b9ad921fccce2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_c310068406a2165677e3416ab3fc333c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_21_ravel( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_21_ravel,
        const_str_plain_ravel,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_296387ff09017798e2e175e3dbfd7b0d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_af78b56081e18515b964d47391ae5f26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_22_nonzero(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_22_nonzero,
        const_str_plain_nonzero,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_471ccb8d5e275665aa9d58a97dacfed4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_9a57076ed9f39b121973c373a4348abc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_23_shape(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_23_shape,
        const_str_plain_shape,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_01d01d4b7980fc3d7b02435c8b3a604f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_83ee5e1f6969c3d467b6cd567f648bcd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_24_compress( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_24_compress,
        const_str_plain_compress,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ab3b96fb215cdf44af8ead58a587be38,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_e026f0e5a09dd2d6f8c03a2ebff54147,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_25_clip( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_25_clip,
        const_str_plain_clip,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_74d1219be38d0bfbc3002d064fafda08,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_91c0725a93e66a9dd9541bfe634cf18d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_26_sum( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_26_sum,
        const_str_plain_sum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_27e5b1ca3e17a4178b700fc3c8fbaada,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_4b3ee679dde8d94e459b0bb06cdd762f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_27_product( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_27_product,
        const_str_plain_product,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_915080cffb930b0c8c76b014d829b3ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_ae4eb518f61ccca8530e7e84de7d80b8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_28_sometrue( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_28_sometrue,
        const_str_plain_sometrue,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1164f176ddf92a60a9c3aecf22ca08d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_f482b37c056aa4943ff712f0e718825a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_29_alltrue( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_29_alltrue,
        const_str_plain_alltrue,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_86d7ff9025e724088d2d14ae53a344c0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_f1d642b2b049c7d76a6654a787ff6c94,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_2__wrapfunc(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_2__wrapfunc,
        const_str_plain__wrapfunc,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3782fd983bd95d968b4e5776fc06e13a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_30_any( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_30_any,
        const_str_plain_any,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f286dcfd8cd0c2536ee22020c7b0aba,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_33d24d6d1a6d6d15968f19eb6989caf3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_31_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_31_all,
        const_str_plain_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4563e9aaab3749205c0045f53557252f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_6227b43899f23aac5dd8e59947bf8958,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_32_cumsum( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_32_cumsum,
        const_str_plain_cumsum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc79d6341d07e9e366a9abbe8a9279e3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_bc3564c9f9045dc0582523f16984f81c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_33_cumproduct( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_33_cumproduct,
        const_str_plain_cumproduct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c41f2c49faa913042959b50d0f31c6e7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_d9aef909d8aeda9edae44c9c6eaf9cf8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_34_ptp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_34_ptp,
        const_str_plain_ptp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72716efcb943f5f5e0ca43b34b0cf0f2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_a2692b56b5ea1224452a8348de135dac,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_35_amax( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_35_amax,
        const_str_plain_amax,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d8838747087c5b2003a45c211490d53,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_ac1157962de1619b9ba4ac2293fff7bc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_36_amin( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_36_amin,
        const_str_plain_amin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aee98ad843a4a2a935e84acc30d53314,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_598722f12e7d6a112e09b950d882275d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_37_alen(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_37_alen,
        const_str_plain_alen,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_26e85d5558bb42a61b04cb9b3fc67e50,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_1b7219e0e37b8144ad5f1f19b414b41e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_38_prod( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_38_prod,
        const_str_plain_prod,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f9d82324105b06245991a7b19d41e690,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_05eada0efdeea74358c1ee6d52363bbf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_39_cumprod( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_39_cumprod,
        const_str_plain_cumprod,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_290b082cc13e43edf0eb46ad59169f48,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_fb1d23510569cbe168f39f14c7fe964a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_3_take( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_3_take,
        const_str_plain_take,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8463160679efd9f3848e471aa833cb26,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_a45c7da78d4c28337a03040e50d043ff,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_40_ndim(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_40_ndim,
        const_str_plain_ndim,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dd857839a54b06f6eea51371789e765f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_6efdc240480bed276509a43fb0d786b3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_41_rank(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_41_rank,
        const_str_plain_rank,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_60763c04f218c157984e2782bfbbfb93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_93d98402019f2c5b21314376f6d62631,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_42_size( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_42_size,
        const_str_plain_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9ef28fbe208f10629211d2e1ea13e62f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_22aba64321e53a692d13f613c7d8d50e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_43_around( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_43_around,
        const_str_plain_around,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_79f912e84fb8750ca1981e611bc11dce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_2abbd68e10736336fe911205e31497cd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_44_round_( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_44_round_,
        const_str_plain_round_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f6125997590f2435bb540f56de1011b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_c9e31561733b63d1c3eb15eb85986b7c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_45_mean( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_45_mean,
        const_str_plain_mean,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0637c7efc486b5cebc5435e7539a3155,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_a9435dc229e1d1b0ac4a49d564fa098a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_46_std( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_46_std,
        const_str_plain_std,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b8639055ae79566225040d974e3c0b5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_1a41896150fe48e2265939b982d714a9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_47_var( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_47_var,
        const_str_plain_var,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f9411e1dc2bbe86384ccc95d60ca9494,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_73bb4c2a3e8cac6830fdd1b6d142e898,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_4_reshape( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_4_reshape,
        const_str_plain_reshape,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3b2fda2b9c059a9ffe0ea037abeac1b2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_1ef45ecbf5bc6ea5a65383473136d504,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_5_choose( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_5_choose,
        const_str_plain_choose,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eab00ba61e17010ef7e75d0f6defd9ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_b948e7a217631f7f09a0540b484ae244,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_6_repeat( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_6_repeat,
        const_str_plain_repeat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de6290971fc931099f58dfe4f421ca74,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_96a89cb2019b1773bb588a8400a7ca7a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_7_put( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_7_put,
        const_str_plain_put,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a40432db832dad8f90b209073558fabb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_1e5521195db9a177a354f84a5a740040,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_8_swapaxes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_8_swapaxes,
        const_str_plain_swapaxes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3f51f9c2e8d12f439c158e5aae668d66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_ac46dc5d0c35fa2a6bc67dd7c8fb0514,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$fromnumeric$$$function_9_transpose( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$fromnumeric$$$function_9_transpose,
        const_str_plain_transpose,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3dcbed045e613fd8d5caccd9e7388ec2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$fromnumeric,
        const_str_digest_3bc47629c6bc2aec17b5bac36cb0cda7,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$fromnumeric =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.fromnumeric",   /* m_name */
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

MOD_INIT_DECL( numpy$core$fromnumeric )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$fromnumeric );
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
    puts("numpy.core.fromnumeric: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.fromnumeric: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$fromnumeric" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$fromnumeric = Py_InitModule4(
        "numpy.core.fromnumeric",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$fromnumeric = PyModule_Create( &mdef_numpy$core$fromnumeric );
#endif

    moduledict_numpy$core$fromnumeric = MODULE_DICT( module_numpy$core$fromnumeric );

    CHECK_OBJECT( module_numpy$core$fromnumeric );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_fef7e379d8b29f70158a022afa317baa, module_numpy$core$fromnumeric );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
    PyObject *tmp_defaults_11;
    PyObject *tmp_defaults_12;
    PyObject *tmp_defaults_13;
    PyObject *tmp_defaults_14;
    PyObject *tmp_defaults_15;
    PyObject *tmp_defaults_16;
    PyObject *tmp_defaults_17;
    PyObject *tmp_defaults_18;
    PyObject *tmp_defaults_19;
    PyObject *tmp_defaults_20;
    PyObject *tmp_defaults_21;
    PyObject *tmp_defaults_22;
    PyObject *tmp_defaults_23;
    PyObject *tmp_defaults_24;
    PyObject *tmp_defaults_25;
    PyObject *tmp_defaults_26;
    PyObject *tmp_defaults_27;
    PyObject *tmp_defaults_28;
    PyObject *tmp_defaults_29;
    PyObject *tmp_defaults_30;
    PyObject *tmp_defaults_31;
    PyObject *tmp_defaults_32;
    PyObject *tmp_defaults_33;
    PyObject *tmp_defaults_34;
    PyObject *tmp_defaults_35;
    PyObject *tmp_defaults_36;
    PyObject *tmp_defaults_37;
    PyObject *tmp_defaults_38;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    bool tmp_result;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    struct Nuitka_FrameObject *frame_8f25d9988569c2763fdd7d8087bb6304;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_0505708f127872fc6f4fd08a7a7741de;
    UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3698ea4a9e08463094511d03a54155eb;
    UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_8f25d9988569c2763fdd7d8087bb6304 = MAKE_MODULE_FRAME( codeobj_8f25d9988569c2763fdd7d8087bb6304, module_numpy$core$fromnumeric );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_8f25d9988569c2763fdd7d8087bb6304 );
    assert( Py_REFCNT( frame_8f25d9988569c2763fdd7d8087bb6304 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_types;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 6;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 7;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_plain_numpy;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 9;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    tmp_name_name_4 = const_str_empty;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_VisibleDeprecationWarning_tuple;
    tmp_level_name_4 = const_int_pos_2;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 10;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_VisibleDeprecationWarning );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning, tmp_assign_source_11 );
    tmp_name_name_5 = const_str_empty;
    tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_multiarray_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 11;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_multiarray );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mu, tmp_assign_source_12 );
    tmp_name_name_6 = const_str_empty;
    tmp_globals_name_6 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_umath_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 12;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_umath );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_um, tmp_assign_source_13 );
    tmp_name_name_7 = const_str_empty;
    tmp_globals_name_7 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_numerictypes_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 13;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_numerictypes );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_nt, tmp_assign_source_14 );
    tmp_name_name_8 = const_str_plain_numeric;
    tmp_globals_name_8 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_4d8873e9c093da027f0552f8c388be3f_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 14;
    tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_15;

    // Tried code:
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_asarray );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_array );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_asanyarray );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_concatenate );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_concatenate, tmp_assign_source_19 );
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

    tmp_name_name_9 = const_str_empty;
    tmp_globals_name_9 = (PyObject *)moduledict_numpy$core$fromnumeric;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain__methods_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = 15;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain__methods );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__methods, tmp_assign_source_20 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sctype2char );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__dt_, tmp_assign_source_21 );
    tmp_assign_source_22 = LIST_COPY( const_list_5bcf58e7a2932a3dd284b39be3842608_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22 );
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_types );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "types" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto try_except_handler_3;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_GeneratorType );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__gentype, tmp_assign_source_23 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_8f25d9988569c2763fdd7d8087bb6304 );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_8f25d9988569c2763fdd7d8087bb6304, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_8f25d9988569c2763fdd7d8087bb6304, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

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
    tmp_assign_source_24 = (PyObject *)Py_TYPE( Py_None );
    UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__gentype, tmp_assign_source_24 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 32;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8f25d9988569c2763fdd7d8087bb6304->m_frame) frame_8f25d9988569c2763fdd7d8087bb6304->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$fromnumeric );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_assign_source_25 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_sum );

    if (unlikely( tmp_assign_source_25 == NULL ))
    {
        tmp_assign_source_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sum );
    }

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sum" );
        exception_tb = NULL;

        exception_lineno = 38;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__sum_, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_1__wrapit(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapit, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_2__wrapfunc(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain__wrapfunc, tmp_assign_source_27 );
    tmp_defaults_1 = const_tuple_none_none_str_plain_raise_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_3_take( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_28 );
    tmp_defaults_2 = const_tuple_str_plain_C_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_4_reshape( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_reshape, tmp_assign_source_29 );
    tmp_defaults_3 = const_tuple_none_str_plain_raise_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_5_choose( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_choose, tmp_assign_source_30 );
    tmp_defaults_4 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_31 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_6_repeat( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_repeat, tmp_assign_source_31 );
    tmp_defaults_5 = const_tuple_str_plain_raise_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_7_put( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_put, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_8_swapaxes(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_swapaxes, tmp_assign_source_33 );
    tmp_defaults_6 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_9_transpose( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_transpose, tmp_assign_source_34 );
    tmp_defaults_7 = const_tuple_int_neg_1_str_plain_introselect_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_10_partition( tmp_defaults_7 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_partition, tmp_assign_source_35 );
    tmp_defaults_8 = const_tuple_int_neg_1_str_plain_introselect_none_tuple;
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_11_argpartition( tmp_defaults_8 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_argpartition, tmp_assign_source_36 );
    tmp_defaults_9 = const_tuple_int_neg_1_str_plain_quicksort_none_tuple;
    Py_INCREF( tmp_defaults_9 );
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_12_sort( tmp_defaults_9 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_sort, tmp_assign_source_37 );
    tmp_defaults_10 = const_tuple_int_neg_1_str_plain_quicksort_none_tuple;
    Py_INCREF( tmp_defaults_10 );
    tmp_assign_source_38 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_13_argsort( tmp_defaults_10 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_argsort, tmp_assign_source_38 );
    tmp_defaults_11 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_11 );
    tmp_assign_source_39 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_14_argmax( tmp_defaults_11 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_argmax, tmp_assign_source_39 );
    tmp_defaults_12 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_12 );
    tmp_assign_source_40 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_15_argmin( tmp_defaults_12 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_argmin, tmp_assign_source_40 );
    tmp_defaults_13 = const_tuple_str_plain_left_none_tuple;
    Py_INCREF( tmp_defaults_13 );
    tmp_assign_source_41 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_16_searchsorted( tmp_defaults_13 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_searchsorted, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_17_resize(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_resize, tmp_assign_source_42 );
    tmp_defaults_14 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_14 );
    tmp_assign_source_43 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_18_squeeze( tmp_defaults_14 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_squeeze, tmp_assign_source_43 );
    tmp_defaults_15 = const_tuple_int_0_int_0_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_15 );
    tmp_assign_source_44 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_19_diagonal( tmp_defaults_15 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_diagonal, tmp_assign_source_44 );
    tmp_defaults_16 = const_tuple_int_0_int_0_int_pos_1_none_none_tuple;
    Py_INCREF( tmp_defaults_16 );
    tmp_assign_source_45 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_20_trace( tmp_defaults_16 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_trace, tmp_assign_source_45 );
    tmp_defaults_17 = const_tuple_str_plain_C_tuple;
    Py_INCREF( tmp_defaults_17 );
    tmp_assign_source_46 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_21_ravel( tmp_defaults_17 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_ravel, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_22_nonzero(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_nonzero, tmp_assign_source_47 );
    tmp_assign_source_48 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_23_shape(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_shape, tmp_assign_source_48 );
    tmp_defaults_18 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_18 );
    tmp_assign_source_49 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_24_compress( tmp_defaults_18 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_compress, tmp_assign_source_49 );
    tmp_defaults_19 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_19 );
    tmp_assign_source_50 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_25_clip( tmp_defaults_19 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_clip, tmp_assign_source_50 );
    tmp_defaults_20 = PyTuple_New( 4 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_20, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_20, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_20, 2, tmp_tuple_element_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_defaults_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1730;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__NoValue );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_20 );

        exception_lineno = 1730;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_20, 3, tmp_tuple_element_1 );
    tmp_assign_source_51 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_26_sum( tmp_defaults_20 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_sum, tmp_assign_source_51 );
    tmp_defaults_21 = PyTuple_New( 4 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_21, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_21, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_21, 2, tmp_tuple_element_2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_defaults_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1837;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__NoValue );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_21 );

        exception_lineno = 1837;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_21, 3, tmp_tuple_element_2 );
    tmp_assign_source_52 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_27_product( tmp_defaults_21 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_product, tmp_assign_source_52 );
    tmp_defaults_22 = PyTuple_New( 3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_22, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_22, 1, tmp_tuple_element_3 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_defaults_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1852;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__NoValue );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_22 );

        exception_lineno = 1852;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_22, 2, tmp_tuple_element_3 );
    tmp_assign_source_53 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_28_sometrue( tmp_defaults_22 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_sometrue, tmp_assign_source_53 );
    tmp_defaults_23 = PyTuple_New( 3 );
    tmp_tuple_element_4 = Py_None;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_defaults_23, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = Py_None;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_defaults_23, 1, tmp_tuple_element_4 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_defaults_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1870;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__NoValue );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_23 );

        exception_lineno = 1870;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_23, 2, tmp_tuple_element_4 );
    tmp_assign_source_54 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_29_alltrue( tmp_defaults_23 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_alltrue, tmp_assign_source_54 );
    tmp_defaults_24 = PyTuple_New( 3 );
    tmp_tuple_element_5 = Py_None;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_24, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = Py_None;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_24, 1, tmp_tuple_element_5 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_defaults_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1886;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__NoValue );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_24 );

        exception_lineno = 1886;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_24, 2, tmp_tuple_element_5 );
    tmp_assign_source_55 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_30_any( tmp_defaults_24 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_any, tmp_assign_source_55 );
    tmp_defaults_25 = PyTuple_New( 3 );
    tmp_tuple_element_6 = Py_None;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_25, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = Py_None;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_25, 1, tmp_tuple_element_6 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_defaults_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1973;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__NoValue );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_25 );

        exception_lineno = 1973;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_25, 2, tmp_tuple_element_6 );
    tmp_assign_source_56 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_31_all( tmp_defaults_25 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_all, tmp_assign_source_56 );
    tmp_defaults_26 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_26 );
    tmp_assign_source_57 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_32_cumsum( tmp_defaults_26 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_cumsum, tmp_assign_source_57 );
    tmp_defaults_27 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_27 );
    tmp_assign_source_58 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_33_cumproduct( tmp_defaults_27 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_cumproduct, tmp_assign_source_58 );
    tmp_defaults_28 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_28 );
    tmp_assign_source_59 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_34_ptp( tmp_defaults_28 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_ptp, tmp_assign_source_59 );
    tmp_defaults_29 = PyTuple_New( 3 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_29, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_29, 1, tmp_tuple_element_7 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_defaults_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2174;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__NoValue );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_29 );

        exception_lineno = 2174;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_29, 2, tmp_tuple_element_7 );
    tmp_assign_source_60 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_35_amax( tmp_defaults_29 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_amax, tmp_assign_source_60 );
    tmp_defaults_30 = PyTuple_New( 3 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_30, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_30, 1, tmp_tuple_element_8 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_defaults_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2275;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__NoValue );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_30 );

        exception_lineno = 2275;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_30, 2, tmp_tuple_element_8 );
    tmp_assign_source_61 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_36_amin( tmp_defaults_30 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_amin, tmp_assign_source_61 );
    tmp_assign_source_62 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_37_alen(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_alen, tmp_assign_source_62 );
    tmp_defaults_31 = PyTuple_New( 4 );
    tmp_tuple_element_9 = Py_None;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_31, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = Py_None;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_31, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = Py_None;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_31, 2, tmp_tuple_element_9 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_defaults_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2408;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__NoValue );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_31 );

        exception_lineno = 2408;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_31, 3, tmp_tuple_element_9 );
    tmp_assign_source_63 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_38_prod( tmp_defaults_31 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_prod, tmp_assign_source_63 );
    tmp_defaults_32 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_32 );
    tmp_assign_source_64 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_39_cumprod( tmp_defaults_32 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_cumprod, tmp_assign_source_64 );
    tmp_assign_source_65 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_40_ndim(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_ndim, tmp_assign_source_65 );
    tmp_assign_source_66 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_41_rank(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_rank, tmp_assign_source_66 );
    tmp_defaults_33 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_33 );
    tmp_assign_source_67 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_42_size( tmp_defaults_33 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_size, tmp_assign_source_67 );
    tmp_defaults_34 = const_tuple_int_0_none_tuple;
    Py_INCREF( tmp_defaults_34 );
    tmp_assign_source_68 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_43_around( tmp_defaults_34 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_around, tmp_assign_source_68 );
    tmp_defaults_35 = const_tuple_int_0_none_tuple;
    Py_INCREF( tmp_defaults_35 );
    tmp_assign_source_69 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_44_round_( tmp_defaults_35 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_round_, tmp_assign_source_69 );
    tmp_defaults_36 = PyTuple_New( 4 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_36, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_36, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_36, 2, tmp_tuple_element_10 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_defaults_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2806;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__NoValue );
    if ( tmp_tuple_element_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_36 );

        exception_lineno = 2806;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_36, 3, tmp_tuple_element_10 );
    tmp_assign_source_70 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_45_mean( tmp_defaults_36 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_mean, tmp_assign_source_70 );
    tmp_defaults_37 = PyTuple_New( 5 );
    tmp_tuple_element_11 = Py_None;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_37, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = Py_None;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_37, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = Py_None;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_37, 2, tmp_tuple_element_11 );
    tmp_tuple_element_11 = const_int_0;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_37, 3, tmp_tuple_element_11 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_defaults_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 2912;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__NoValue );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_37 );

        exception_lineno = 2912;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_37, 4, tmp_tuple_element_11 );
    tmp_assign_source_71 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_46_std( tmp_defaults_37 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_std, tmp_assign_source_71 );
    tmp_defaults_38 = PyTuple_New( 5 );
    tmp_tuple_element_12 = Py_None;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_38, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = Py_None;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_38, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = Py_None;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_38, 2, tmp_tuple_element_12 );
    tmp_tuple_element_12 = const_int_0;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_38, 3, tmp_tuple_element_12 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_defaults_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 3030;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__NoValue );
    if ( tmp_tuple_element_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_38 );

        exception_lineno = 3030;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_38, 4, tmp_tuple_element_12 );
    tmp_assign_source_72 = MAKE_FUNCTION_numpy$core$fromnumeric$$$function_47_var( tmp_defaults_38 );
    UPDATE_STRING_DICT1( moduledict_numpy$core$fromnumeric, (Nuitka_StringObject *)const_str_plain_var, tmp_assign_source_72 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8f25d9988569c2763fdd7d8087bb6304 );
#endif
    popFrameStack();

    assertFrameObject( frame_8f25d9988569c2763fdd7d8087bb6304 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8f25d9988569c2763fdd7d8087bb6304 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f25d9988569c2763fdd7d8087bb6304, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f25d9988569c2763fdd7d8087bb6304->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f25d9988569c2763fdd7d8087bb6304, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$core$fromnumeric );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
