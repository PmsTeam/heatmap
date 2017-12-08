/* Generated code for Python source for module 'numpy.lib.polynomial'
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

/* The _module_numpy$lib$polynomial is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$polynomial;
PyDictObject *moduledict_numpy$lib$polynomial;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___radd__;
extern PyObject *const_str_plain_scale;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_RankWarning;
static PyObject *const_str_plain_partstr;
extern PyObject *const_str_plain_logical_or;
static PyObject *const_str_digest_4aa5fb15c76d22fba6c2db6cceed9a4d;
static PyObject *const_str_digest_a12ca88a2988b41a7bbf1fb0e924336b;
extern PyObject *const_tuple_str_chr_45_tuple;
extern PyObject *const_str_plain_poly;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_7614d066b99092ed61947ba53de28328;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_polydiv;
static PyObject *const_str_plain__variable;
extern PyObject *const_tuple_none_false_none_false_tuple;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_output;
static PyObject *const_str_digest_8e8cc082af63fdab10d5a5ad0df80a3b;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple;
extern PyObject *const_str_plain_eps;
static PyObject *const_str_digest_63e450e710f10ffa31b2603b90b1a06b;
static PyObject *const_dict_144cf727ca808c02413e0ad8ab424cf2;
extern PyObject *const_str_plain___add__;
static PyObject *const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple;
static PyObject *const_str_digest_ac4e5511907cabbe407110fccb6e5898;
static PyObject *const_str_digest_09c158c60390ce109dd1bc7de9f8a49c;
static PyObject *const_str_digest_d025b8cc434c4be4e6c06e89082ea183;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_rtol;
static PyObject *const_tuple_f3acc424a18a0019640906fc08f507d1_tuple;
extern PyObject *const_str_plain_astype;
extern PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
extern PyObject *const_str_plain_mat;
extern PyObject *const_int_pos_70;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_45d8880ac39afbe15a93a06962db39bb;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_var;
static PyObject *const_str_digest_f21e02642cb931dff513acf416b301f5;
static PyObject *const_str_digest_d31b1f7cd665ec833fe85cdeb11902cb;
extern PyObject *const_str_plain_astr;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain___ne__;
static PyObject *const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple;
extern PyObject *const_str_plain_iscomplex;
static PyObject *const_float_1e_minus_14;
extern PyObject *const_str_plain_trim_zeros;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_plain__coeffs;
static PyObject *const_str_digest_ab2bc23826697fad0288f5ff4e6158d3;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_polyval;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_floating;
extern PyObject *const_str_plain_newstr;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_125ec7974471c7c212f84a3304bc12c3;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain___rtruediv__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_integ;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_912fae8a28b8bd5ead766661045cede3;
static PyObject *const_tuple_tuple_int_pos_1_tuple_tuple;
extern PyObject *const_str_plain_rank;
extern PyObject *const_str_plain_sum;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_list_int_pos_1_list;
static PyObject *const_str_plain_coefstr;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain___setitem__;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_chr_45;
static PyObject *const_tuple_str_plain_self_str_plain_vals_tuple;
static PyObject *const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc;
extern PyObject *const_str_plain_trim;
static PyObject *const_str_digest_2e159b87ee53f6cabc8ee285b77f805b;
extern PyObject *const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_c83df442e23a024511d0efec171e26a9;
static PyObject *const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple;
static PyObject *const_str_digest_aed6bd3f7f3ffd84fb9ea5c50ffa1aa0;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_2ff8e1a6b2f03c20d4b28cacd578e113;
extern PyObject *const_tuple_false_none_tuple;
extern PyObject *const_str_plain_FutureWarning;
extern PyObject *const_str_plain_a1;
extern PyObject *const_str_plain_isscalar;
extern PyObject *const_str_plain_deg;
static PyObject *const_str_digest_0db5f082e757bf000893d1070c5314d6;
static PyObject *const_tuple_f8024a2bf18cc52be702814b03234d41_tuple;
extern PyObject *const_str_plain_accumulate;
extern PyObject *const_str_digest_d6d72a26db479ec8da48b32012f92cbf;
static PyObject *const_str_digest_9b2a32a10f34854554acce4f0a1e5df6;
static PyObject *const_str_digest_8d57b7b6e72d04b87b3e2a50f3755912;
extern PyObject *const_str_plain_polyint;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_b73629cbd250f78988da03d69fd963c8;
extern PyObject *const_str_plain_search;
static PyObject *const_str_plain_coeffs;
static PyObject *const_str_digest_37eb5527e8de3a4de5a4da95d734d451;
static PyObject *const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_ab4c9e853416c7271ef0f4718ef42aee;
static PyObject *const_str_plain_truepoly;
static PyObject *const_str_digest_99f66efd49c976cdfe5915bd3dd44a4a;
extern PyObject *const_str_plain_non_zero;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_update;
extern PyObject *const_float_2_0;
extern PyObject *const_str_plain___rdiv__;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain_s;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
static PyObject *const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8;
static PyObject *const_str_plain_Vbase;
extern PyObject *const_str_plain___div__;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
static PyObject *const_tuple_str_plain_self_str_plain_t_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_a2;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
static PyObject *const_str_plain_NX;
extern PyObject *const_str_plain_polysub;
extern PyObject *const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_1ddd25da7461a4681aa105108f792da7;
static PyObject *const_tuple_int_pos_1_none_tuple;
extern PyObject *const_str_plain_p;
static PyObject *const_str_plain_c_or_r;
static PyObject *const_str_digest_1ed57e39ffcca0b15b9cb6b3f4b1fee7;
extern PyObject *const_str_plain_polymul;
extern PyObject *const_str_plain___hash__;
static PyObject *const_str_plain_coefficients;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_tuple_type_float_tuple;
extern PyObject *const_str_plain___sub__;
extern PyObject *const_str_plain_polyder;
static PyObject *const_str_digest_4c4ee04be939a8ff5391803c933eb86b;
extern PyObject *const_str_plain_setter;
static PyObject *const_str_digest_c5e87fd3910bc5f7cbeae51aebbc38c1;
static PyObject *const_str_digest_288b855de22027ea51f62f6ba4203a91;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain___mul__;
static PyObject *const_tuple_str_plain_diag_str_plain_vander_tuple;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
static PyObject *const_str_digest_f97212fd071cadf1857ba5f3b89db023;
static PyObject *const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple;
extern PyObject *const_str_plain_full;
extern PyObject *const_str_plain___pos__;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_dot;
static PyObject *const_tuple_54532a8d90a79048cf8dd43464442f49_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_coeffs_tuple;
extern PyObject *const_str_plain_rhs;
static PyObject *const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple;
static PyObject *const_str_digest_ae8ef7cff1c65112641662cfd4904c7d;
extern PyObject *const_str_plain___truediv__;
extern PyObject *const_tuple_int_pos_1_int_0_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_aa9ae4b127e772c8ccb06e400625f2b1;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_digest_539b940ce8b78f070990007c87f8234f;
extern PyObject *const_str_plain_coef;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_0bc9862339567bf106d2e64cfb092682;
static PyObject *const_tuple_int_0_slice_none_none_none_tuple;
extern PyObject *const_str_plain___eq__;
static PyObject *const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_numeric;
static PyObject *const_str_plain_line2;
extern PyObject *const_str_plain_vander;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_digest_4dee642e949d4b9ad453719dec9278da;
static PyObject *const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple;
static PyObject *const_list_float_0_0_list;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain__;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_allclose;
static PyObject *const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple;
static PyObject *const_str_plain_span;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain__raise_power;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_str_plain_trim_zeros_tuple;
static PyObject *const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple;
extern PyObject *const_str_plain_k;
static PyObject *const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain_issubclass;
static PyObject *const_str_plain_thestr;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_vals;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_u;
static PyObject *const_str_digest_d3744a92eee9098e6debb8b135c26b8a;
extern PyObject *const_str_plain___rmul__;
extern PyObject *const_str_plain_convolve;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_zr;
static PyObject *const_str_plain_fac;
extern PyObject *const_str_plain_deriv;
extern PyObject *const_str_plain_resids;
static PyObject *const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple;
static PyObject *const_str_digest_cec87595b4737c124889189ff15d0b22;
static PyObject *const_str_plain_poly1d;
static PyObject *const_tuple_0305d76f99e78d96c5d194ee966ed73d_tuple;
extern PyObject *const_str_plain___array__;
extern PyObject *const_str_digest_cf0c975c6a453043b357f5230e9e8ede;
extern PyObject *const_str_digest_ade38aed73decbd99585ad80f3adae97;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_groups;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain___neg__;
extern PyObject *const_str_plain_polyfit;
extern PyObject *const_str_plain_core;
static PyObject *const_str_digest_9a3d23cdc33798e0a2b4bd05fa40cb1f;
extern PyObject *const_str_digest_3943f956186dfbaba7ee5555afa1df28;
static PyObject *const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple;
extern PyObject *const_str_plain_cov;
static PyObject *const_dict_550850c0300eb7076f24d8318a86fb89;
extern PyObject *const_str_plain_newaxis;
static PyObject *const_str_plain_always;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_plain_seq_of_zeros;
static PyObject *const_str_digest_5d29a5fa4d48aa4eec4b679b0c640190;
static PyObject *const_str_digest_692dc77e7651117b5059c24a0fc8e6ef;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_str_plain_self_str_plain_m_tuple;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_polyadd;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain___pow__;
static PyObject *const_str_plain_line1;
extern PyObject *const_str_plain_sh;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
extern PyObject *const_str_plain_mintypecode;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_0fd0577caa73fdd5d0bda8d20ce51418;
static PyObject *const_tuple_str_plain_q_str_plain_s_tuple;
extern PyObject *const_str_plain_A;
static PyObject *const_str_plain_toadd1;
extern PyObject *const_str_plain_lhs;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple;
static PyObject *const_str_plain_trailing_zeros;
static PyObject *const_str_plain_fmt_float;
static PyObject *const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_res;
static PyObject *const_list_75a84415d4dfb7e31ed742c0fa94f09b_list;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain__poly_mat;
extern PyObject *const_str_plain___rsub__;
static PyObject *const_str_digest_e43f3bd915f6ace2e523b3a24994fdbc;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_roots;
static PyObject *const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple;
extern PyObject *const_str_plain_outer;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_variable;
extern PyObject *const_str_plain_zeros_like;
static PyObject *const_str_digest_e830032217724d27845e33581eb30139;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain___call__;
static PyObject *const_tuple_int_pos_70_tuple;
static PyObject *const_str_plain_toadd2;
extern PyObject *const_str_plain_atleast_1d;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_partstr = UNSTREAM_STRING( &constant_bin[ 916003 ], 7, 1 );
    const_str_digest_4aa5fb15c76d22fba6c2db6cceed9a4d = UNSTREAM_STRING( &constant_bin[ 916010 ], 1319, 0 );
    const_str_digest_a12ca88a2988b41a7bbf1fb0e924336b = UNSTREAM_STRING( &constant_bin[ 917329 ], 200, 0 );
    const_str_digest_7614d066b99092ed61947ba53de28328 = UNSTREAM_STRING( &constant_bin[ 917529 ], 55, 0 );
    const_str_plain__variable = UNSTREAM_STRING( &constant_bin[ 632009 ], 9, 1 );
    const_str_digest_8e8cc082af63fdab10d5a5ad0df80a3b = UNSTREAM_STRING( &constant_bin[ 917584 ], 10, 0 );
    const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 1, const_str_plain_non_zero ); Py_INCREF( const_str_plain_non_zero );
    const_str_plain_trailing_zeros = UNSTREAM_STRING( &constant_bin[ 917594 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 2, const_str_plain_trailing_zeros ); Py_INCREF( const_str_plain_trailing_zeros );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 4, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 5, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_str_digest_63e450e710f10ffa31b2603b90b1a06b = UNSTREAM_STRING( &constant_bin[ 58571 ], 5, 0 );
    const_dict_144cf727ca808c02413e0ad8ab424cf2 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_144cf727ca808c02413e0ad8ab424cf2, const_str_plain_mode, const_str_plain_full );
    assert( PyDict_Size( const_dict_144cf727ca808c02413e0ad8ab424cf2 ) == 1 );
    const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 0, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 1, const_str_plain_a2 ); Py_INCREF( const_str_plain_a2 );
    const_str_plain_truepoly = UNSTREAM_STRING( &constant_bin[ 917608 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 3, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 4, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain_zr = UNSTREAM_STRING( &constant_bin[ 731014 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 5, const_str_plain_zr ); Py_INCREF( const_str_plain_zr );
    const_str_digest_ac4e5511907cabbe407110fccb6e5898 = UNSTREAM_STRING( &constant_bin[ 917616 ], 1910, 0 );
    const_str_digest_09c158c60390ce109dd1bc7de9f8a49c = UNSTREAM_STRING( &constant_bin[ 919526 ], 2941, 0 );
    const_str_digest_d025b8cc434c4be4e6c06e89082ea183 = UNSTREAM_STRING( &constant_bin[ 922467 ], 1864, 0 );
    const_tuple_f3acc424a18a0019640906fc08f507d1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 5, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_digest_45d8880ac39afbe15a93a06962db39bb = UNSTREAM_STRING( &constant_bin[ 924331 ], 1224, 0 );
    const_str_digest_f21e02642cb931dff513acf416b301f5 = UNSTREAM_STRING( &constant_bin[ 925555 ], 33, 0 );
    const_str_digest_d31b1f7cd665ec833fe85cdeb11902cb = UNSTREAM_STRING( &constant_bin[ 925588 ], 10, 0 );
    const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 3, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 5, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_float_1e_minus_14 = UNSTREAM_FLOAT( &constant_bin[ 925598 ] );
    const_str_plain__coeffs = UNSTREAM_STRING( &constant_bin[ 925606 ], 7, 1 );
    const_str_digest_ab2bc23826697fad0288f5ff4e6158d3 = UNSTREAM_STRING( &constant_bin[ 925613 ], 183, 0 );
    const_str_digest_125ec7974471c7c212f84a3304bc12c3 = UNSTREAM_STRING( &constant_bin[ 925796 ], 1122, 0 );
    const_str_digest_912fae8a28b8bd5ead766661045cede3 = UNSTREAM_STRING( &constant_bin[ 926918 ], 48, 0 );
    const_tuple_tuple_int_pos_1_tuple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_int_pos_1_tuple_tuple, 0, const_tuple_int_pos_1_tuple ); Py_INCREF( const_tuple_int_pos_1_tuple );
    const_str_plain_coefstr = UNSTREAM_STRING( &constant_bin[ 926966 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_vals_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_vals_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_vals_tuple, 1, const_str_plain_vals ); Py_INCREF( const_str_plain_vals );
    const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc, const_str_plain_rtol, const_float_1e_minus_14 );
    assert( PyDict_Size( const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc ) == 1 );
    const_str_digest_2e159b87ee53f6cabc8ee285b77f805b = UNSTREAM_STRING( &constant_bin[ 926973 ], 4, 0 );
    const_str_digest_c83df442e23a024511d0efec171e26a9 = UNSTREAM_STRING( &constant_bin[ 926977 ], 50, 0 );
    const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_thestr = UNSTREAM_STRING( &constant_bin[ 927027 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 1, const_str_plain_thestr ); Py_INCREF( const_str_plain_thestr );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 2, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    const_str_plain_coeffs = UNSTREAM_STRING( &constant_bin[ 925607 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 3, const_str_plain_coeffs ); Py_INCREF( const_str_plain_coeffs );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_str_plain_fmt_float = UNSTREAM_STRING( &constant_bin[ 927033 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 5, const_str_plain_fmt_float ); Py_INCREF( const_str_plain_fmt_float );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 6, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 7, const_str_plain_coefstr ); Py_INCREF( const_str_plain_coefstr );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 8, const_str_plain_power ); Py_INCREF( const_str_plain_power );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 9, const_str_plain_newstr ); Py_INCREF( const_str_plain_newstr );
    const_str_digest_aed6bd3f7f3ffd84fb9ea5c50ffa1aa0 = UNSTREAM_STRING( &constant_bin[ 927042 ], 20, 0 );
    const_str_digest_2ff8e1a6b2f03c20d4b28cacd578e113 = UNSTREAM_STRING( &constant_bin[ 927062 ], 49, 0 );
    const_str_digest_0db5f082e757bf000893d1070c5314d6 = UNSTREAM_STRING( &constant_bin[ 927111 ], 1078, 0 );
    const_tuple_f8024a2bf18cc52be702814b03234d41_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 0, const_str_plain_astr ); Py_INCREF( const_str_plain_astr );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 1, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_line1 = UNSTREAM_STRING( &constant_bin[ 928189 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 3, const_str_plain_line1 ); Py_INCREF( const_str_plain_line1 );
    const_str_plain_line2 = UNSTREAM_STRING( &constant_bin[ 928194 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 4, const_str_plain_line2 ); Py_INCREF( const_str_plain_line2 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 6, const_str_plain_mat ); Py_INCREF( const_str_plain_mat );
    const_str_plain_span = UNSTREAM_STRING( &constant_bin[ 20343 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 7, const_str_plain_span ); Py_INCREF( const_str_plain_span );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 8, const_str_plain_power ); Py_INCREF( const_str_plain_power );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 9, const_str_plain_partstr ); Py_INCREF( const_str_plain_partstr );
    const_str_plain_toadd2 = UNSTREAM_STRING( &constant_bin[ 928199 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 10, const_str_plain_toadd2 ); Py_INCREF( const_str_plain_toadd2 );
    const_str_plain_toadd1 = UNSTREAM_STRING( &constant_bin[ 928205 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 11, const_str_plain_toadd1 ); Py_INCREF( const_str_plain_toadd1 );
    const_str_digest_9b2a32a10f34854554acce4f0a1e5df6 = UNSTREAM_STRING( &constant_bin[ 42808 ], 5, 0 );
    const_str_digest_8d57b7b6e72d04b87b3e2a50f3755912 = UNSTREAM_STRING( &constant_bin[ 928211 ], 39, 0 );
    const_str_digest_b73629cbd250f78988da03d69fd963c8 = UNSTREAM_STRING( &constant_bin[ 928250 ], 752, 0 );
    const_str_digest_37eb5527e8de3a4de5a4da95d734d451 = UNSTREAM_STRING( &constant_bin[ 925589 ], 7, 0 );
    const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a = UNSTREAM_STRING( &constant_bin[ 929002 ], 20, 0 );
    const_str_digest_ab4c9e853416c7271ef0f4718ef42aee = UNSTREAM_STRING( &constant_bin[ 929022 ], 39, 0 );
    const_str_digest_99f66efd49c976cdfe5915bd3dd44a4a = UNSTREAM_STRING( &constant_bin[ 929061 ], 29, 0 );
    const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 3, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 4, const_str_plain_zr ); Py_INCREF( const_str_plain_zr );
    const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8 = UNSTREAM_STRING( &constant_bin[ 929090 ], 14, 0 );
    const_str_plain_Vbase = UNSTREAM_STRING( &constant_bin[ 929104 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_t_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_NX = UNSTREAM_STRING( &constant_bin[ 929109 ], 2, 1 );
    const_str_digest_1ddd25da7461a4681aa105108f792da7 = UNSTREAM_STRING( &constant_bin[ 929111 ], 29, 0 );
    const_tuple_int_pos_1_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_none_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_plain_c_or_r = UNSTREAM_STRING( &constant_bin[ 929140 ], 6, 1 );
    const_str_digest_1ed57e39ffcca0b15b9cb6b3f4b1fee7 = UNSTREAM_STRING( &constant_bin[ 929146 ], 2616, 0 );
    const_str_plain_coefficients = UNSTREAM_STRING( &constant_bin[ 728015 ], 12, 1 );
    const_str_digest_4c4ee04be939a8ff5391803c933eb86b = UNSTREAM_STRING( &constant_bin[ 931762 ], 37, 0 );
    const_str_digest_c5e87fd3910bc5f7cbeae51aebbc38c1 = UNSTREAM_STRING( &constant_bin[ 931799 ], 5325, 0 );
    const_str_digest_288b855de22027ea51f62f6ba4203a91 = UNSTREAM_STRING( &constant_bin[ 936742 ], 33, 0 );
    const_tuple_str_plain_diag_str_plain_vander_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diag_str_plain_vander_tuple, 0, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_str_plain_diag_str_plain_vander_tuple, 1, const_str_plain_vander ); Py_INCREF( const_str_plain_vander );
    const_str_digest_f97212fd071cadf1857ba5f3b89db023 = UNSTREAM_STRING( &constant_bin[ 937124 ], 53, 0 );
    const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple, 0, const_str_digest_63e450e710f10ffa31b2603b90b1a06b ); Py_INCREF( const_str_digest_63e450e710f10ffa31b2603b90b1a06b );
    const_str_plain_simplefilter = UNSTREAM_STRING( &constant_bin[ 934461 ], 12, 1 );
    const_tuple_54532a8d90a79048cf8dd43464442f49_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 2, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 3, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 4, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 5, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 6, const_str_plain_cov ); Py_INCREF( const_str_plain_cov );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 7, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 8, const_str_plain_lhs ); Py_INCREF( const_str_plain_lhs );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 9, const_str_plain_rhs ); Py_INCREF( const_str_plain_rhs );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 10, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 11, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 12, const_str_plain_resids ); Py_INCREF( const_str_plain_resids );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 13, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 14, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 15, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 16, const_str_plain_Vbase ); Py_INCREF( const_str_plain_Vbase );
    const_str_plain_fac = UNSTREAM_STRING( &constant_bin[ 505 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 17, const_str_plain_fac ); Py_INCREF( const_str_plain_fac );
    const_tuple_str_plain_self_str_plain_coeffs_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_coeffs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_coeffs_tuple, 1, const_str_plain_coeffs ); Py_INCREF( const_str_plain_coeffs );
    const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple, 1, const_str_plain_c_or_r ); Py_INCREF( const_str_plain_c_or_r );
    PyTuple_SET_ITEM( const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_variable = UNSTREAM_STRING( &constant_bin[ 17460 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple, 3, const_str_plain_variable ); Py_INCREF( const_str_plain_variable );
    PyTuple_SET_ITEM( const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple, 4, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_ae8ef7cff1c65112641662cfd4904c7d = UNSTREAM_STRING( &constant_bin[ 937177 ], 1270, 0 );
    const_str_digest_aa9ae4b127e772c8ccb06e400625f2b1 = UNSTREAM_STRING( &constant_bin[ 938447 ], 98, 0 );
    const_str_digest_539b940ce8b78f070990007c87f8234f = UNSTREAM_STRING( &constant_bin[ 881367 ], 3, 0 );
    const_str_digest_0bc9862339567bf106d2e64cfb092682 = UNSTREAM_STRING( &constant_bin[ 938545 ], 46, 0 );
    const_tuple_int_0_slice_none_none_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_tuple, 1, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 0, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 1, const_str_plain_abs ); Py_INCREF( const_str_plain_abs );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 2, const_str_plain_finfo ); Py_INCREF( const_str_plain_finfo );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 3, const_str_plain_atleast_1d ); Py_INCREF( const_str_plain_atleast_1d );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 4, const_str_plain_hstack ); Py_INCREF( const_str_plain_hstack );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 5, const_str_plain_dot ); Py_INCREF( const_str_plain_dot );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 6, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 7, const_str_plain_ones ); Py_INCREF( const_str_plain_ones );
    const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple = PyTuple_New( 6 );
    const_str_plain_seq_of_zeros = UNSTREAM_STRING( &constant_bin[ 920045 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 0, const_str_plain_seq_of_zeros ); Py_INCREF( const_str_plain_seq_of_zeros );
    PyTuple_SET_ITEM( const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 1, const_str_plain_sh ); Py_INCREF( const_str_plain_sh );
    PyTuple_SET_ITEM( const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 2, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 5, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_list_float_0_0_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_float_0_0_list, 0, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 2, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_plain__raise_power = UNSTREAM_STRING( &constant_bin[ 938591 ], 12, 1 );
    const_tuple_str_plain_trim_zeros_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trim_zeros_tuple, 0, const_str_plain_trim_zeros ); Py_INCREF( const_str_plain_trim_zeros );
    const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, 0, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, 1, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, 2, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_d3744a92eee9098e6debb8b135c26b8a = UNSTREAM_STRING( &constant_bin[ 938603 ], 29, 0 );
    const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 0, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 1, const_str_plain_a2 ); Py_INCREF( const_str_plain_a2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 3, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_digest_cec87595b4737c124889189ff15d0b22 = UNSTREAM_STRING( &constant_bin[ 938632 ], 210, 0 );
    const_str_plain_poly1d = UNSTREAM_STRING( &constant_bin[ 498458 ], 6, 1 );
    const_tuple_0305d76f99e78d96c5d194ee966ed73d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 938842 ], 478 );
    const_str_digest_9a3d23cdc33798e0a2b4bd05fa40cb1f = UNSTREAM_STRING( &constant_bin[ 939320 ], 91, 0 );
    const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 3, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_dict_550850c0300eb7076f24d8318a86fb89 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_550850c0300eb7076f24d8318a86fb89, const_str_plain_trim, const_str_plain_f );
    assert( PyDict_Size( const_dict_550850c0300eb7076f24d8318a86fb89 ) == 1 );
    const_str_plain_always = UNSTREAM_STRING( &constant_bin[ 48468 ], 6, 1 );
    const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19 = UNSTREAM_STRING( &constant_bin[ 939411 ], 7, 0 );
    const_str_digest_5d29a5fa4d48aa4eec4b679b0c640190 = UNSTREAM_STRING( &constant_bin[ 785 ], 2, 0 );
    const_str_digest_692dc77e7651117b5059c24a0fc8e6ef = UNSTREAM_STRING( &constant_bin[ 939418 ], 9, 0 );
    const_str_digest_0fd0577caa73fdd5d0bda8d20ce51418 = UNSTREAM_STRING( &constant_bin[ 939427 ], 36, 0 );
    const_tuple_str_plain_q_str_plain_s_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_q_str_plain_s_tuple, 0, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_str_plain_q_str_plain_s_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 0, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 3, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 4, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 6, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 7, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 8, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 9, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 10, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple, 0, const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8 ); Py_INCREF( const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8 );
    const_list_75a84415d4dfb7e31ed742c0fa94f09b_list = PyList_New( 12 );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 0, const_str_plain_poly ); Py_INCREF( const_str_plain_poly );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 2, const_str_plain_polyint ); Py_INCREF( const_str_plain_polyint );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 3, const_str_plain_polyder ); Py_INCREF( const_str_plain_polyder );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 4, const_str_plain_polyadd ); Py_INCREF( const_str_plain_polyadd );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 5, const_str_plain_polysub ); Py_INCREF( const_str_plain_polysub );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 6, const_str_plain_polymul ); Py_INCREF( const_str_plain_polymul );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 7, const_str_plain_polydiv ); Py_INCREF( const_str_plain_polydiv );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 8, const_str_plain_polyval ); Py_INCREF( const_str_plain_polyval );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 9, const_str_plain_poly1d ); Py_INCREF( const_str_plain_poly1d );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 10, const_str_plain_polyfit ); Py_INCREF( const_str_plain_polyfit );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 11, const_str_plain_RankWarning ); Py_INCREF( const_str_plain_RankWarning );
    const_str_plain__poly_mat = UNSTREAM_STRING( &constant_bin[ 939463 ], 9, 1 );
    const_str_digest_e43f3bd915f6ace2e523b3a24994fdbc = UNSTREAM_STRING( &constant_bin[ 939472 ], 27, 0 );
    const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 0, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 1, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 2, const_str_plain_imag ); Py_INCREF( const_str_plain_imag );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 3, const_str_plain_mintypecode ); Py_INCREF( const_str_plain_mintypecode );
    const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_e830032217724d27845e33581eb30139 = UNSTREAM_STRING( &constant_bin[ 939421 ], 6, 0 );
    const_tuple_int_pos_70_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_70_tuple, 0, const_int_pos_70 ); Py_INCREF( const_int_pos_70 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$polynomial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1e695da2a15c129e9ab6ee4b9c6349ce;
static PyCodeObject *codeobj_81b00ead6ebf9111391ef084dfa681a3;
static PyCodeObject *codeobj_63c8d9577b7fa95780cd0f65d5d199d0;
static PyCodeObject *codeobj_2b7db9972c25c2da1c920f44adbf6b9f;
static PyCodeObject *codeobj_983bb573810ee24e4dd61c17fd3f63f8;
static PyCodeObject *codeobj_17fa89d480a569c537e579804b21f2d0;
static PyCodeObject *codeobj_99dac4aefcd88df349d50327b9be6fcc;
static PyCodeObject *codeobj_634a4e4548617e67f9873926360f9c76;
static PyCodeObject *codeobj_b2d4a8690e13bd7b09b83d9ae6ac6871;
static PyCodeObject *codeobj_0e77f2baa13fbb45b486dad4a07dc477;
static PyCodeObject *codeobj_b9e1e943ee4bff3f30a1f652f6ac55f2;
static PyCodeObject *codeobj_06f6ba904954c59a6d861d21e1ef2c9d;
static PyCodeObject *codeobj_76f184abcc67195df1e760688db8d931;
static PyCodeObject *codeobj_748307b89e1527464c58ba504f5f46a8;
static PyCodeObject *codeobj_9dfbd131f3c6457045cf6d6aa61d87f4;
static PyCodeObject *codeobj_bb9313ecae23b7243b1c7d85e037c2b4;
static PyCodeObject *codeobj_50912faf69857aa7034337e0ca8f591d;
static PyCodeObject *codeobj_490475c83d77cccadd827e4ac18f8236;
static PyCodeObject *codeobj_3c5b953eeeeeb723490253b0f613ec0e;
static PyCodeObject *codeobj_83333c6fdf8888715de3d66a6d6980c9;
static PyCodeObject *codeobj_b77b45e5797e67af140d0b323d090b41;
static PyCodeObject *codeobj_99366efd4fbe5828a2d26d83844e711c;
static PyCodeObject *codeobj_a8b99dea9de5943f97222e9b440e0bec;
static PyCodeObject *codeobj_0b6c2b343e1f69cbf998d0f00d179c55;
static PyCodeObject *codeobj_7cf4ee1308fe5eb882b9401d698cdab0;
static PyCodeObject *codeobj_77e47401d00de2a5a6d5aa3c0b41b5b9;
static PyCodeObject *codeobj_2961595e5b37160000e4ff4a4188845d;
static PyCodeObject *codeobj_fe4bd55113a1187fe0db1830319f8db9;
static PyCodeObject *codeobj_64ed722f49a4194e2a4b9c0e05ccfbcb;
static PyCodeObject *codeobj_8b8a2dd5d250439cb1d73b3048ed7a94;
static PyCodeObject *codeobj_facdc823fd55215c9e7ab3c4aa1de531;
static PyCodeObject *codeobj_7778ad560f1065519cb63fd79a352bfe;
static PyCodeObject *codeobj_cd59464fdbda75cdd28ade7d8c9d6b88;
static PyCodeObject *codeobj_17dbdf58d5f0462d53fb364c87aba630;
static PyCodeObject *codeobj_5e639a202bf4636397229793c3ce75de;
static PyCodeObject *codeobj_4b606e62b8846481e0f12f03c25a38ba;
static PyCodeObject *codeobj_accf2b5853430ad285a95b42b2d50882;
static PyCodeObject *codeobj_2a617f7fe3c15b608eb04cbbc8519d0b;
static PyCodeObject *codeobj_b4562c0276b929f723e298d064423a1c;
static PyCodeObject *codeobj_9ce2267cad3697270584a418cfdc7c0e;
static PyCodeObject *codeobj_5fc52a888c220081dd33442555c23d9a;
static PyCodeObject *codeobj_ed8e91d30180e945d728cd571eed0c12;
static PyCodeObject *codeobj_d4c73cb707cc1993193fbed3d4f0e945;
static PyCodeObject *codeobj_af420ac53561e5e481d90adaa555af1f;
static PyCodeObject *codeobj_5730782d5557a7a493c429e3955a3ad4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f97212fd071cadf1857ba5f3b89db023;
    codeobj_1e695da2a15c129e9ab6ee4b9c6349ce = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d3744a92eee9098e6debb8b135c26b8a, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_81b00ead6ebf9111391ef084dfa681a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___add__, 1203, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_63c8d9577b7fa95780cd0f65d5d199d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array__, 1109, const_tuple_str_plain_self_str_plain_t_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b7db9972c25c2da1c920f44adbf6b9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 1180, const_tuple_str_plain_self_str_plain_val_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_983bb573810ee24e4dd61c17fd3f63f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___div__, 1227, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_17fa89d480a569c537e579804b21f2d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 1245, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_99dac4aefcd88df349d50327b9be6fcc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 1258, const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_634a4e4548617e67f9873926360f9c76 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 1082, const_tuple_0722f663bf6032aa6cbdcfef04dc02eb_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b2d4a8690e13bd7b09b83d9ae6ac6871 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 1277, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0e77f2baa13fbb45b486dad4a07dc477 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 1120, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b9e1e943ee4bff3f30a1f652f6ac55f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___mul__, 1189, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_06f6ba904954c59a6d861d21e1ef2c9d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 1252, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_76f184abcc67195df1e760688db8d931 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___neg__, 1183, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_748307b89e1527464c58ba504f5f46a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pos__, 1186, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9dfbd131f3c6457045cf6d6aa61d87f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pow__, 1211, const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bb9313ecae23b7243b1c7d85e037c2b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___radd__, 1207, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_50912faf69857aa7034337e0ca8f591d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rdiv__, 1236, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_490475c83d77cccadd827e4ac18f8236 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 1115, const_tuple_str_plain_self_str_plain_vals_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3c5b953eeeeeb723490253b0f613ec0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rmul__, 1196, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_83333c6fdf8888715de3d66a6d6980c9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rsub__, 1223, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b77b45e5797e67af140d0b323d090b41 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setitem__, 1266, const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_99366efd4fbe5828a2d26d83844e711c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 1123, const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a8b99dea9de5943f97222e9b440e0bec = MAKE_CODEOBJ( module_filename_obj, const_str_plain___sub__, 1219, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0b6c2b343e1f69cbf998d0f00d179c55 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__coeffs, 1070, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7cf4ee1308fe5eb882b9401d698cdab0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__coeffs, 1073, const_tuple_str_plain_self_str_plain_coeffs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_77e47401d00de2a5a6d5aa3c0b41b5b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raise_power, 912, const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2961595e5b37160000e4ff4a4188845d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_coeffs, 1041, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fe4bd55113a1187fe0db1830319f8db9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_coeffs, 1046, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_64ed722f49a4194e2a4b9c0e05ccfbcb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deriv, 1293, const_tuple_str_plain_self_str_plain_m_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8b8a2dd5d250439cb1d73b3048ed7a94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fmt_float, 1131, const_tuple_str_plain_q_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_facdc823fd55215c9e7ab3c4aa1de531 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_integ, 1280, const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7778ad560f1065519cb63fd79a352bfe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_order, 1058, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd59464fdbda75cdd28ade7d8c9d6b88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poly, 32, const_tuple_b91293deb64280d2ce5cef32011c8ccb_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_17dbdf58d5f0462d53fb364c87aba630 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poly1d, 939, const_tuple_0305d76f99e78d96c5d194ee966ed73d_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5e639a202bf4636397229793c3ce75de = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyadd, 683, const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b606e62b8846481e0f12f03c25a38ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyder, 330, const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_accf2b5853430ad285a95b42b2d50882 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polydiv, 846, const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2a617f7fe3c15b608eb04cbbc8519d0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyfit, 398, const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b4562c0276b929f723e298d064423a1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyint, 237, const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9ce2267cad3697270584a418cfdc7c0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polymul, 790, const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5fc52a888c220081dd33442555c23d9a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polysub, 743, const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ed8e91d30180e945d728cd571eed0c12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyval, 614, const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d4c73cb707cc1993193fbed3d4f0e945 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_roots, 153, const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_af420ac53561e5e481d90adaa555af1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_roots, 1063, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5730782d5557a7a493c429e3955a3ad4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_variable, 1052, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_10_polydiv(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_11__raise_power( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_12_coeffs(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_13_coeffs(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_14_variable(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_15_order(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_16_roots(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_17__coeffs(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_18__coeffs(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_19___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_1_poly(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_20___array__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_21___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_22___len__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_23___str__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_24___call__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_25___neg__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_26___pos__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_27___mul__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_28___rmul__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_29___add__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_2_roots(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_30___radd__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_31___pow__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_32___sub__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_33___rsub__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_34___div__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_35___rdiv__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_36___eq__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_37___ne__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_38___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_39___setitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_3_polyint( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_40___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_41_integ( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_42_deriv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_4_polyder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_5_polyfit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_6_polyval(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_7_polyadd(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_8_polysub(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_9_polymul(  );


// The module function definitions.
static PyObject *impl_numpy$lib$polynomial$$$function_1_poly( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_seq_of_zeros = python_pars[ 0 ];
    PyObject *var_sh = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_a = NULL;
    PyObject *var_k = NULL;
    PyObject *var_roots = NULL;
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
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_cd59464fdbda75cdd28ade7d8c9d6b88 = NULL;

    struct Nuitka_FrameObject *frame_cd59464fdbda75cdd28ade7d8c9d6b88;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd59464fdbda75cdd28ade7d8c9d6b88, codeobj_cd59464fdbda75cdd28ade7d8c9d6b88, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88 = cache_frame_cd59464fdbda75cdd28ade7d8c9d6b88;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd59464fdbda75cdd28ade7d8c9d6b88 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd59464fdbda75cdd28ade7d8c9d6b88 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_seq_of_zeros;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_seq_of_zeros;
        assert( old != NULL );
        par_seq_of_zeros = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_seq_of_zeros;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_sh == NULL );
    var_sh = tmp_assign_source_2;

    tmp_len_arg_1 = var_sh;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 127;
        type_description_1 = "oooooo";
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
    tmp_subscribed_name_1 = var_sh;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_sh;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 127;
        type_description_1 = "oooooo";
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
    tmp_subscribed_name_3 = var_sh;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_0;
    tmp_and_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
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

        exception_lineno = 127;
        type_description_1 = "oooooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_eigvals );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eigvals );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "eigvals" );
        exception_tb = NULL;

        exception_lineno = 128;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_seq_of_zeros;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_seq_of_zeros;
        assert( old != NULL );
        par_seq_of_zeros = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_2 = var_sh;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 129;
        type_description_1 = "oooooo";
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
    tmp_source_name_2 = par_seq_of_zeros;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dt == NULL );
    var_dt = tmp_assign_source_4;

    tmp_compare_left_2 = var_dt;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = (PyObject *)&PyBaseObject_Type;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_seq_of_zeros;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_mintypecode );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mintypecode );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mintypecode" );
        exception_tb = NULL;

        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = var_dt;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_char );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_seq_of_zeros;
        assert( old != NULL );
        par_seq_of_zeros = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_1 = const_str_digest_0bc9862339567bf106d2e64cfb092682;
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 135;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;
    tmp_len_arg_3 = par_seq_of_zeros;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 137;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = const_float_1_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_source_name_5 = par_seq_of_zeros;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 139;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_dt;
        var_dt = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_ones );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ones );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ones" );
        exception_tb = NULL;

        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_tuple_int_pos_1_tuple_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_dt;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 140;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_a == NULL );
    var_a = tmp_assign_source_7;

    tmp_len_arg_4 = par_seq_of_zeros;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 141;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            exception_lineno = 141;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_10;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_convolve );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 2 );
    tmp_list_element_1 = const_int_pos_1;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_1 );
    tmp_subscribed_name_4 = par_seq_of_zeros;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_4 = var_k;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_list_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_tuple_element_2, 1, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_dt;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 142;
    tmp_tuple_element_1 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_144cf727ca808c02413e0ad8ab424cf2 );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 142;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oooooo";
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

    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_8 != NULL );
    tmp_source_name_8 = var_a;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_type );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_complexfloating );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 145;
        type_description_1 = "oooooo";
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
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_asarray );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_seq_of_zeros;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = (PyObject *)&PyComplex_Type;
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_12;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_all );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_roots;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_sort, call_args );
    }

    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_compexpr_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sort );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = var_roots;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 148;
    tmp_args_element_name_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_conjugate );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_compexpr_right_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 148;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_13 = var_a;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 149;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_real );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame.f_lineno = 149;
    tmp_assign_source_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_no_5:;
    tmp_return_value = var_a;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd59464fdbda75cdd28ade7d8c9d6b88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd59464fdbda75cdd28ade7d8c9d6b88 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd59464fdbda75cdd28ade7d8c9d6b88 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd59464fdbda75cdd28ade7d8c9d6b88, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd59464fdbda75cdd28ade7d8c9d6b88->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd59464fdbda75cdd28ade7d8c9d6b88, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd59464fdbda75cdd28ade7d8c9d6b88,
        type_description_1,
        par_seq_of_zeros,
        var_sh,
        var_dt,
        var_a,
        var_k,
        var_roots
    );


    // Release cached frame.
    if ( frame_cd59464fdbda75cdd28ade7d8c9d6b88 == cache_frame_cd59464fdbda75cdd28ade7d8c9d6b88 )
    {
        Py_DECREF( frame_cd59464fdbda75cdd28ade7d8c9d6b88 );
    }
    cache_frame_cd59464fdbda75cdd28ade7d8c9d6b88 = NULL;

    assertFrameObject( frame_cd59464fdbda75cdd28ade7d8c9d6b88 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_1_poly );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_seq_of_zeros );
    par_seq_of_zeros = NULL;

    CHECK_OBJECT( (PyObject *)var_sh );
    Py_DECREF( var_sh );
    var_sh = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

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

    Py_XDECREF( par_seq_of_zeros );
    par_seq_of_zeros = NULL;

    Py_XDECREF( var_sh );
    var_sh = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_1_poly );
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


static PyObject *impl_numpy$lib$polynomial$$$function_2_roots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_non_zero = NULL;
    PyObject *var_trailing_zeros = NULL;
    PyObject *var_N = NULL;
    PyObject *var_A = NULL;
    PyObject *var_roots = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
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
    PyObject *tmp_int_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static struct Nuitka_FrameObject *cache_frame_d4c73cb707cc1993193fbed3d4f0e945 = NULL;

    struct Nuitka_FrameObject *frame_d4c73cb707cc1993193fbed3d4f0e945;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d4c73cb707cc1993193fbed3d4f0e945, codeobj_d4c73cb707cc1993193fbed3d4f0e945, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d4c73cb707cc1993193fbed3d4f0e945 = cache_frame_d4c73cb707cc1993193fbed3d4f0e945;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d4c73cb707cc1993193fbed3d4f0e945 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d4c73cb707cc1993193fbed3d4f0e945 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 203;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_p;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_p;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 204;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_1ddd25da7461a4681aa105108f792da7;
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 205;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nonzero );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_p;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_ravel, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_non_zero == NULL );
    var_non_zero = tmp_assign_source_2;

    tmp_len_arg_1 = var_non_zero;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 211;
        type_description_1 = "oooooo";
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
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = PyList_New( 0 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_array, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_len_arg_2 = par_p;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_non_zero;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_neg_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 215;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_3 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_trailing_zeros == NULL );
    var_trailing_zeros = tmp_assign_source_3;

    tmp_slice_source_1 = par_p;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_subscribed_name_3 = var_non_zero;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_lower_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = var_non_zero;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_neg_1;
    tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_slice_upper_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_lower_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_4 = par_p;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_floating );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_complexfloating );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 221;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 221;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
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
    tmp_called_instance_3 = par_p;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 222;
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_astype, &PyTuple_GET_ITEM( const_tuple_type_float_tuple, 0 ) );

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_3 = par_p;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_assign_source_6 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_6;

    tmp_compare_left_3 = var_N;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_diag );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diag" );
        exception_tb = NULL;

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ones );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = PyTuple_New( 1 );
    tmp_left_name_4 = var_N;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = const_int_pos_2;
    tmp_tuple_element_2 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_2 );
    tmp_source_name_8 = par_p;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = const_int_neg_1;
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_9 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_A == NULL );
    var_A = tmp_assign_source_7;

    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = par_p;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_operand_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_5 = par_p;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_A;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_tuple_int_0_slice_none_none_none_tuple;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_eigvals );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eigvals );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "eigvals" );
        exception_tb = NULL;

        exception_lineno = 229;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_A;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 229;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_8;

    goto branch_end_4;
    branch_no_4:;
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = PyList_New( 0 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_call_arg_element_2 };
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_array, call_args );
    }

    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_9;

    branch_end_4:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_hstack );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hstack );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "hstack" );
        exception_tb = NULL;

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_roots;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_11, 0, tmp_tuple_element_3 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_args_element_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_zeros );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_trailing_zeros;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_source_name_10 = var_roots;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_args_element_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_11, 1, tmp_tuple_element_3 );
    frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame.f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_roots;
        assert( old != NULL );
        var_roots = tmp_assign_source_10;
        Py_DECREF( old );
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c73cb707cc1993193fbed3d4f0e945 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c73cb707cc1993193fbed3d4f0e945 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c73cb707cc1993193fbed3d4f0e945 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d4c73cb707cc1993193fbed3d4f0e945, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d4c73cb707cc1993193fbed3d4f0e945->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d4c73cb707cc1993193fbed3d4f0e945, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d4c73cb707cc1993193fbed3d4f0e945,
        type_description_1,
        par_p,
        var_non_zero,
        var_trailing_zeros,
        var_N,
        var_A,
        var_roots
    );


    // Release cached frame.
    if ( frame_d4c73cb707cc1993193fbed3d4f0e945 == cache_frame_d4c73cb707cc1993193fbed3d4f0e945 )
    {
        Py_DECREF( frame_d4c73cb707cc1993193fbed3d4f0e945 );
    }
    cache_frame_d4c73cb707cc1993193fbed3d4f0e945 = NULL;

    assertFrameObject( frame_d4c73cb707cc1993193fbed3d4f0e945 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_roots;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_2_roots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_non_zero );
    Py_DECREF( var_non_zero );
    var_non_zero = NULL;

    Py_XDECREF( var_trailing_zeros );
    var_trailing_zeros = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

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

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_non_zero );
    var_non_zero = NULL;

    Py_XDECREF( var_trailing_zeros );
    var_trailing_zeros = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_2_roots );
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


static PyObject *impl_numpy$lib$polynomial$$$function_3_polyint( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_y = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_b4562c0276b929f723e298d064423a1c = NULL;

    struct Nuitka_FrameObject *frame_b4562c0276b929f723e298d064423a1c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4562c0276b929f723e298d064423a1c, codeobj_b4562c0276b929f723e298d064423a1c, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4562c0276b929f723e298d064423a1c = cache_frame_b4562c0276b929f723e298d064423a1c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4562c0276b929f723e298d064423a1c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4562c0276b929f723e298d064423a1c ) == 2 ); // Frame stack

    // Framed code:
    tmp_int_arg_1 = par_m;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_m;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "oooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_912fae8a28b8bd5ead766661045cede3;
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 306;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 306;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_k;

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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 308;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_m;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = (PyObject *)&PyFloat_Type;
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_zeros, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 309;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_k;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_k;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 310;
        type_description_1 = "oooooo";
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
    tmp_compexpr_left_2 = par_m;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "oooooo";
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

        exception_lineno = 310;
        type_description_1 = "oooooo";
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
    tmp_subscribed_name_1 = par_k;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 311;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_m;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = (PyObject *)&PyFloat_Type;
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_right_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_ones, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 311;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_2 = par_k;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = par_m;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 312;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_7614d066b99092ed61947ba53de28328;
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 313;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_isinstance_inst_1 = par_p;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 316;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_truepoly = tmp_assign_source_5;

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 317;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_p;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 317;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asarray, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = par_m;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_cond_value_2 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 320;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_p;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 320;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_return_value = par_p;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_concatenate );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = PyTuple_New( 2 );
    tmp_source_name_2 = par_p;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___truediv__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_arange );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_p;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_args_element_name_10 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = const_int_0;
    tmp_args_element_name_12 = const_int_neg_1;
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_subscribed_name_2 = par_k;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_1 );
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_7;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyint );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyint );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyint" );
        exception_tb = NULL;

        exception_lineno = 325;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_y;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_left_name_2 = par_m;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 325;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_k;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_dict_value_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 325;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_k;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 325;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_8;

    tmp_cond_value_3 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oooooo";
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
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 327;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_val;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_b4562c0276b929f723e298d064423a1c->m_frame.f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_return_value = var_val;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4562c0276b929f723e298d064423a1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4562c0276b929f723e298d064423a1c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4562c0276b929f723e298d064423a1c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4562c0276b929f723e298d064423a1c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4562c0276b929f723e298d064423a1c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4562c0276b929f723e298d064423a1c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4562c0276b929f723e298d064423a1c,
        type_description_1,
        par_p,
        par_m,
        par_k,
        var_truepoly,
        var_y,
        var_val
    );


    // Release cached frame.
    if ( frame_b4562c0276b929f723e298d064423a1c == cache_frame_b4562c0276b929f723e298d064423a1c )
    {
        Py_DECREF( frame_b4562c0276b929f723e298d064423a1c );
    }
    cache_frame_b4562c0276b929f723e298d064423a1c = NULL;

    assertFrameObject( frame_b4562c0276b929f723e298d064423a1c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_3_polyint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_3_polyint );
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


static PyObject *impl_numpy$lib$polynomial$$$function_4_polyder( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_n = NULL;
    PyObject *var_y = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    static struct Nuitka_FrameObject *cache_frame_4b606e62b8846481e0f12f03c25a38ba = NULL;

    struct Nuitka_FrameObject *frame_4b606e62b8846481e0f12f03c25a38ba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b606e62b8846481e0f12f03c25a38ba, codeobj_4b606e62b8846481e0f12f03c25a38ba, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b606e62b8846481e0f12f03c25a38ba = cache_frame_4b606e62b8846481e0f12f03c25a38ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b606e62b8846481e0f12f03c25a38ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b606e62b8846481e0f12f03c25a38ba ) == 2 ); // Frame stack

    // Framed code:
    tmp_int_arg_1 = par_m;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_m;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_c83df442e23a024511d0efec171e26a9;
    frame_4b606e62b8846481e0f12f03c25a38ba->m_frame.f_lineno = 384;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 384;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_p;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 386;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_truepoly = tmp_assign_source_2;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_p;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4b606e62b8846481e0f12f03c25a38ba->m_frame.f_lineno = 387;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_p;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_4;

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = par_p;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_left_name_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 389;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_n;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = const_int_0;
    tmp_args_element_name_4 = const_int_neg_1;
    frame_4b606e62b8846481e0f12f03c25a38ba->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_right_name_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_arange, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 389;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_5;

    tmp_compare_left_2 = par_m;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_6 = par_p;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_val == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_val = tmp_assign_source_6;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyder );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyder );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyder" );
        exception_tb = NULL;

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_y;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_left_name_3 = par_m;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = const_int_pos_1;
    tmp_args_element_name_6 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_4b606e62b8846481e0f12f03c25a38ba->m_frame.f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    branch_end_2:;
    tmp_cond_value_1 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_val;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_4b606e62b8846481e0f12f03c25a38ba->m_frame.f_lineno = 395;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        assert( old != NULL );
        var_val = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b606e62b8846481e0f12f03c25a38ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b606e62b8846481e0f12f03c25a38ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b606e62b8846481e0f12f03c25a38ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b606e62b8846481e0f12f03c25a38ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b606e62b8846481e0f12f03c25a38ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b606e62b8846481e0f12f03c25a38ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b606e62b8846481e0f12f03c25a38ba,
        type_description_1,
        par_p,
        par_m,
        var_truepoly,
        var_n,
        var_y,
        var_val
    );


    // Release cached frame.
    if ( frame_4b606e62b8846481e0f12f03c25a38ba == cache_frame_4b606e62b8846481e0f12f03c25a38ba )
    {
        Py_DECREF( frame_4b606e62b8846481e0f12f03c25a38ba );
    }
    cache_frame_4b606e62b8846481e0f12f03c25a38ba = NULL;

    assertFrameObject( frame_4b606e62b8846481e0f12f03c25a38ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_4_polyder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_4_polyder );
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


static PyObject *impl_numpy$lib$polynomial$$$function_5_polyfit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_deg = python_pars[ 2 ];
    PyObject *par_rcond = python_pars[ 3 ];
    PyObject *par_full = python_pars[ 4 ];
    PyObject *par_w = python_pars[ 5 ];
    PyObject *par_cov = python_pars[ 6 ];
    PyObject *var_order = NULL;
    PyObject *var_lhs = NULL;
    PyObject *var_rhs = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_c = NULL;
    PyObject *var_resids = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_s = NULL;
    PyObject *var_Vbase = NULL;
    PyObject *var_fac = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Lt_1;
    int tmp_cmp_LtE_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
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
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_left_name_16;
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
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
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2a617f7fe3c15b608eb04cbbc8519d0b = NULL;

    struct Nuitka_FrameObject *frame_2a617f7fe3c15b608eb04cbbc8519d0b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a617f7fe3c15b608eb04cbbc8519d0b, codeobj_2a617f7fe3c15b608eb04cbbc8519d0b, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b = cache_frame_2a617f7fe3c15b608eb04cbbc8519d0b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a617f7fe3c15b608eb04cbbc8519d0b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a617f7fe3c15b608eb04cbbc8519d0b ) == 2 ); // Frame stack

    // Framed code:
    tmp_int_arg_1 = par_deg;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 546;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 546;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
    }

    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 546;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 547;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_y;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 547;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
    }

    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_float_0_0;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_deg;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        type_description_1 = "oooooooooooooooNoo";
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
    tmp_make_exception_arg_1 = const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 551;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 551;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_x;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 552;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 553;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 553;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_2 = par_x;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 554;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 554;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 555;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 555;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_3 = par_y;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_or_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 556;
        type_description_1 = "oooooooooooooooNoo";
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
    tmp_source_name_4 = par_y;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_2;
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        type_description_1 = "oooooooooooooooNoo";
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

        exception_lineno = 556;
        type_description_1 = "oooooooooooooooNoo";
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
    tmp_make_exception_arg_4 = const_str_digest_3943f956186dfbaba7ee5555afa1df28;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 557;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 557;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_5 = par_x;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_y;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 558;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compare_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 558;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 558;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_5 = const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 559;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 559;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_compare_left_5 = par_rcond;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_None;
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
    tmp_len_arg_1 = par_x;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_finfo );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finfo );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "finfo" );
        exception_tb = NULL;

        exception_lineno = 563;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_x;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 563;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 563;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 563;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_eps );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 563;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 563;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_rcond;
        assert( old != NULL );
        par_rcond = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_vander );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vander );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "vander" );
        exception_tb = NULL;

        exception_lineno = 566;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_x;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = var_order;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 566;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 566;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_lhs == NULL );
    var_lhs = tmp_assign_source_5;

    tmp_assign_source_6 = par_y;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_rhs == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_rhs = tmp_assign_source_6;

    tmp_compare_left_6 = par_w;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 571;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_w;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 571;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_left_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_asarray, call_args );
    }

    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_float_0_0;
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 571;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_w;
        assert( old != NULL );
        par_w = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_source_name_9 = par_w;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 572;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = const_int_pos_1;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 572;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_6 = const_str_digest_d6d72a26db479ec8da48b32012f92cbf;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 573;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_6 != NULL );
    exception_type = tmp_raise_type_6;
    exception_lineno = 573;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_source_name_10 = par_w;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_0;
    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_y;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_shape );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 574;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_int_0;
    tmp_compare_right_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 574;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        exception_lineno = 574;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_7 = const_str_digest_cf0c975c6a453043b357f5230e9e8ede;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 575;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_7 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 575;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_left_name_6 = var_lhs;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_subscribed_name_5 = par_w;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_subscript_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 576;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_newaxis );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscript_name_5 );

        exception_lineno = 576;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_1 );
    tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_8 = tmp_left_name_6;
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    var_lhs = tmp_assign_source_8;

    tmp_source_name_13 = var_rhs;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ndim );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 577;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_int_pos_2;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 577;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_7 = var_rhs;

    CHECK_OBJECT( tmp_left_name_7 );
    tmp_subscribed_name_6 = par_w;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_2 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_subscript_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 578;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_newaxis );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscript_name_6 );

        exception_lineno = 578;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_2 );
    tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscript_name_6 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_9 = tmp_left_name_7;
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    var_rhs = tmp_assign_source_9;

    goto branch_end_10;
    branch_no_10:;
    tmp_left_name_8 = var_rhs;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_right_name_8 = par_w;

    CHECK_OBJECT( tmp_right_name_8 );
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_10 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    var_rhs = tmp_assign_source_10;

    branch_end_10:;
    branch_no_7:;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 583;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_sqrt );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = var_lhs;

    CHECK_OBJECT( tmp_left_name_9 );
    tmp_right_name_9 = var_lhs;

    CHECK_OBJECT( tmp_right_name_9 );
    tmp_source_name_16 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 583;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_sum );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 583;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 583;
    tmp_args_element_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 583;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 583;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_scale == NULL );
    var_scale = tmp_assign_source_11;

    tmp_left_name_10 = var_lhs;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_right_name_10 = var_scale;

    CHECK_OBJECT( tmp_right_name_10 );
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_10, tmp_right_name_10 );
    tmp_assign_source_12 = tmp_left_name_10;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    var_lhs = tmp_assign_source_12;

    // Tried code:
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_lstsq );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lstsq );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "lstsq" );
        exception_tb = NULL;

        exception_lineno = 585;
        type_description_1 = "oooooooooooooooNoo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_8 = var_lhs;

    CHECK_OBJECT( tmp_args_element_name_8 );
    tmp_args_element_name_9 = var_rhs;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rhs" );
        exception_tb = NULL;

        exception_lineno = 585;
        type_description_1 = "oooooooooooooooNoo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_10 = par_rcond;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 585;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "oooooooooooooooNoo";
        goto try_except_handler_2;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        type_description_1 = "oooooooooooooooNoo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_14 == NULL )
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


        type_description_1 = "oooooooooooooooNoo";
        exception_lineno = 585;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "oooooooooooooooNoo";
        exception_lineno = 585;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        type_description_1 = "oooooooooooooooNoo";
        exception_lineno = 585;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_16;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        type_description_1 = "oooooooooooooooNoo";
        exception_lineno = 585;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_17;

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

                type_description_1 = "oooooooooooooooNoo";
                exception_lineno = 585;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooooooNoo";
        exception_lineno = 585;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

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

    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    assert( var_c == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_c = tmp_assign_source_18;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    assert( var_resids == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_resids = tmp_assign_source_19;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_20 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_20 );
    assert( var_rank == NULL );
    Py_INCREF( tmp_assign_source_20 );
    var_rank = tmp_assign_source_20;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_21 );
    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_21 );
    var_s = tmp_assign_source_21;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_source_name_18 = var_c;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_T );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_scale;

    CHECK_OBJECT( tmp_right_name_11 );
    tmp_source_name_17 = BINARY_OPERATION_TRUEDIV( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_T );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_c;
        assert( old != NULL );
        var_c = tmp_assign_source_22;
        Py_DECREF( old );
    }

    tmp_compexpr_left_3 = var_rank;

    CHECK_OBJECT( tmp_compexpr_left_3 );
    tmp_compexpr_right_3 = var_order;

    CHECK_OBJECT( tmp_compexpr_right_3 );
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 589;
        type_description_1 = "oooooooooooooooNoo";
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
    tmp_operand_name_1 = par_full;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 589;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 591;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_warn );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_digest_288b855de22027ea51f62f6ba4203a91;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_RankWarning );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankWarning );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RankWarning" );
        exception_tb = NULL;

        exception_lineno = 591;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 591;
    tmp_unused = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
    tmp_cond_value_3 = par_full;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_return_value = PyTuple_New( 5 );
    tmp_tuple_element_4 = var_c;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_resids;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_rank;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_s;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_rcond;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    goto branch_end_12;
    branch_no_12:;
    tmp_cond_value_4 = par_cov;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_inv );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inv );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inv" );
        exception_tb = NULL;

        exception_lineno = 596;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_dot );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "dot" );
        exception_tb = NULL;

        exception_lineno = 596;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_20 = var_lhs;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_T );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = var_lhs;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 596;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 596;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_Vbase == NULL );
    var_Vbase = tmp_assign_source_23;

    tmp_left_name_12 = var_Vbase;

    CHECK_OBJECT( tmp_left_name_12 );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 597;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = var_scale;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = var_scale;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 597;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_right_name_12 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_outer, call_args );
    }

    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_24 = tmp_left_name_12;
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    var_Vbase = tmp_assign_source_24;

    tmp_len_arg_2 = par_x;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_10 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 602;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_13 = var_order;

    CHECK_OBJECT( tmp_left_name_13 );
    tmp_right_name_13 = const_int_pos_2;
    tmp_compare_right_10 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_compare_right_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 602;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );
        Py_DECREF( tmp_compare_right_10 );

        exception_lineno = 602;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    Py_DECREF( tmp_compare_right_10 );
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_make_exception_arg_8 = const_str_digest_9a3d23cdc33798e0a2b4bd05fa40cb1f;
    frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame.f_lineno = 603;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_8 };
        tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_8 != NULL );
    exception_type = tmp_raise_type_8;
    exception_lineno = 603;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
    branch_no_14:;
    tmp_left_name_14 = var_resids;

    CHECK_OBJECT( tmp_left_name_14 );
    tmp_len_arg_3 = par_x;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_left_name_16 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = var_order;

    CHECK_OBJECT( tmp_right_name_15 );
    tmp_left_name_15 = BINARY_OPERATION_SUB( tmp_left_name_16, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = const_float_2_0;
    tmp_right_name_14 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    assert( var_fac == NULL );
    var_fac = tmp_assign_source_25;

    tmp_source_name_21 = par_y;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ndim );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_11 = const_int_pos_1;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 606;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_c;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_left_name_17 = var_Vbase;

    CHECK_OBJECT( tmp_left_name_17 );
    tmp_right_name_17 = var_fac;

    CHECK_OBJECT( tmp_right_name_17 );
    tmp_tuple_element_5 = BINARY_OPERATION_MUL( tmp_left_name_17, tmp_right_name_17 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 607;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    goto frame_return_exit_1;
    goto branch_end_15;
    branch_no_15:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_c;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_6 );
    tmp_subscribed_name_7 = var_Vbase;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = PyTuple_New( 3 );
    tmp_tuple_element_7 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_7 );
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_subscript_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 609;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_newaxis );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_subscript_name_7 );

        exception_lineno = 609;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscript_name_7, 2, tmp_tuple_element_7 );
    tmp_left_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscript_name_7 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 609;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_18 = var_fac;

    CHECK_OBJECT( tmp_right_name_18 );
    tmp_tuple_element_6 = BINARY_OPERATION_MUL( tmp_left_name_18, tmp_right_name_18 );
    Py_DECREF( tmp_left_name_18 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 609;
        type_description_1 = "oooooooooooooooNoo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_6 );
    goto frame_return_exit_1;
    branch_end_15:;
    goto branch_end_13;
    branch_no_13:;
    tmp_return_value = var_c;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_13:;
    branch_end_12:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a617f7fe3c15b608eb04cbbc8519d0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a617f7fe3c15b608eb04cbbc8519d0b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a617f7fe3c15b608eb04cbbc8519d0b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a617f7fe3c15b608eb04cbbc8519d0b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a617f7fe3c15b608eb04cbbc8519d0b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a617f7fe3c15b608eb04cbbc8519d0b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a617f7fe3c15b608eb04cbbc8519d0b,
        type_description_1,
        par_x,
        par_y,
        par_deg,
        par_rcond,
        par_full,
        par_w,
        par_cov,
        var_order,
        var_lhs,
        var_rhs,
        var_scale,
        var_c,
        var_resids,
        var_rank,
        var_s,
        NULL,
        var_Vbase,
        var_fac
    );


    // Release cached frame.
    if ( frame_2a617f7fe3c15b608eb04cbbc8519d0b == cache_frame_2a617f7fe3c15b608eb04cbbc8519d0b )
    {
        Py_DECREF( frame_2a617f7fe3c15b608eb04cbbc8519d0b );
    }
    cache_frame_2a617f7fe3c15b608eb04cbbc8519d0b = NULL;

    assertFrameObject( frame_2a617f7fe3c15b608eb04cbbc8519d0b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_5_polyfit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)par_cov );
    Py_DECREF( par_cov );
    par_cov = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_lhs );
    Py_DECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_rhs );
    var_rhs = NULL;

    CHECK_OBJECT( (PyObject *)var_scale );
    Py_DECREF( var_scale );
    var_scale = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_resids );
    Py_DECREF( var_resids );
    var_resids = NULL;

    CHECK_OBJECT( (PyObject *)var_rank );
    Py_DECREF( var_rank );
    var_rank = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_Vbase );
    var_Vbase = NULL;

    Py_XDECREF( var_fac );
    var_fac = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    Py_XDECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)par_cov );
    Py_DECREF( par_cov );
    par_cov = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_rhs );
    var_rhs = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_resids );
    var_resids = NULL;

    Py_XDECREF( var_rank );
    var_rank = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_Vbase );
    var_Vbase = NULL;

    Py_XDECREF( var_fac );
    var_fac = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_5_polyfit );
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


static PyObject *impl_numpy$lib$polynomial$$$function_6_polyval( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *var_y = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_ed8e91d30180e945d728cd571eed0c12 = NULL;

    struct Nuitka_FrameObject *frame_ed8e91d30180e945d728cd571eed0c12;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed8e91d30180e945d728cd571eed0c12, codeobj_ed8e91d30180e945d728cd571eed0c12, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ed8e91d30180e945d728cd571eed0c12 = cache_frame_ed8e91d30180e945d728cd571eed0c12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed8e91d30180e945d728cd571eed0c12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed8e91d30180e945d728cd571eed0c12 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 673;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_p;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ed8e91d30180e945d728cd571eed0c12->m_frame.f_lineno = 673;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_asarray, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_isinstance_inst_1 = par_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 674;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
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
    tmp_assign_source_2 = const_int_0;
    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_y = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 677;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_x;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_ed8e91d30180e945d728cd571eed0c12->m_frame.f_lineno = 677;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_asarray, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 678;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_x;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_ed8e91d30180e945d728cd571eed0c12->m_frame.f_lineno = 678;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_zeros_like, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_4;

    branch_end_1:;
    tmp_len_arg_1 = par_p;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            type_description_1 = "oooo";
            exception_lineno = 679;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_7;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_y;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 680;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_right_name_1 = par_x;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = par_p;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_i;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 680;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
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

    tmp_return_value = var_y;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 681;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed8e91d30180e945d728cd571eed0c12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed8e91d30180e945d728cd571eed0c12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed8e91d30180e945d728cd571eed0c12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed8e91d30180e945d728cd571eed0c12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed8e91d30180e945d728cd571eed0c12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed8e91d30180e945d728cd571eed0c12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed8e91d30180e945d728cd571eed0c12,
        type_description_1,
        par_p,
        par_x,
        var_y,
        var_i
    );


    // Release cached frame.
    if ( frame_ed8e91d30180e945d728cd571eed0c12 == cache_frame_ed8e91d30180e945d728cd571eed0c12 )
    {
        Py_DECREF( frame_ed8e91d30180e945d728cd571eed0c12 );
    }
    cache_frame_ed8e91d30180e945d728cd571eed0c12 = NULL;

    assertFrameObject( frame_ed8e91d30180e945d728cd571eed0c12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_6_polyval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_6_polyval );
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


static PyObject *impl_numpy$lib$polynomial$$$function_7_polyadd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a1 = python_pars[ 0 ];
    PyObject *par_a2 = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_diff = NULL;
    PyObject *var_val = NULL;
    PyObject *var_zr = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_5e639a202bf4636397229793c3ce75de = NULL;

    struct Nuitka_FrameObject *frame_5e639a202bf4636397229793c3ce75de;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e639a202bf4636397229793c3ce75de, codeobj_5e639a202bf4636397229793c3ce75de, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5e639a202bf4636397229793c3ce75de = cache_frame_5e639a202bf4636397229793c3ce75de;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e639a202bf4636397229793c3ce75de );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e639a202bf4636397229793c3ce75de ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_a1;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 727;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 727;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 727;
        type_description_1 = "oooooo";
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
    tmp_isinstance_inst_2 = par_a2;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 727;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 727;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 728;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a1;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 728;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 728;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a1;
        assert( old != NULL );
        par_a1 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 729;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a2;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 729;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 729;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a2;
        assert( old != NULL );
        par_a2 = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_a2;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 730;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_a1;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 730;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 730;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_diff == NULL );
    var_diff = tmp_assign_source_4;

    tmp_compare_left_1 = var_diff;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 731;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_2 = par_a1;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_a2;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 732;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_5;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_diff;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 733;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 734;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 734;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_diff;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_2 = par_a1;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 734;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 734;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 734;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_6;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 735;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_zr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a1;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 735;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_concatenate, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = par_a2;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 737;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_abs );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "abs" );
        exception_tb = NULL;

        exception_lineno = 737;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_diff;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 737;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 737;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_a2;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 737;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 737;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_8;

    tmp_left_name_4 = par_a1;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 738;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_zr;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_a2;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_2 );
    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 738;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_concatenate, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_9;

    branch_end_2:;
    branch_end_1:;
    tmp_cond_value_1 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 739;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 740;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_val;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 740;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5e639a202bf4636397229793c3ce75de->m_frame.f_lineno = 740;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 740;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        var_val = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 741;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e639a202bf4636397229793c3ce75de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e639a202bf4636397229793c3ce75de );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e639a202bf4636397229793c3ce75de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e639a202bf4636397229793c3ce75de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e639a202bf4636397229793c3ce75de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e639a202bf4636397229793c3ce75de, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e639a202bf4636397229793c3ce75de,
        type_description_1,
        par_a1,
        par_a2,
        var_truepoly,
        var_diff,
        var_val,
        var_zr
    );


    // Release cached frame.
    if ( frame_5e639a202bf4636397229793c3ce75de == cache_frame_5e639a202bf4636397229793c3ce75de )
    {
        Py_DECREF( frame_5e639a202bf4636397229793c3ce75de );
    }
    cache_frame_5e639a202bf4636397229793c3ce75de = NULL;

    assertFrameObject( frame_5e639a202bf4636397229793c3ce75de );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_7_polyadd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_diff );
    Py_DECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_7_polyadd );
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


static PyObject *impl_numpy$lib$polynomial$$$function_8_polysub( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a1 = python_pars[ 0 ];
    PyObject *par_a2 = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_diff = NULL;
    PyObject *var_val = NULL;
    PyObject *var_zr = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
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
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_5fc52a888c220081dd33442555c23d9a = NULL;

    struct Nuitka_FrameObject *frame_5fc52a888c220081dd33442555c23d9a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5fc52a888c220081dd33442555c23d9a, codeobj_5fc52a888c220081dd33442555c23d9a, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5fc52a888c220081dd33442555c23d9a = cache_frame_5fc52a888c220081dd33442555c23d9a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5fc52a888c220081dd33442555c23d9a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5fc52a888c220081dd33442555c23d9a ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_a1;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 773;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        type_description_1 = "oooooo";
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
    tmp_isinstance_inst_2 = par_a2;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 773;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 774;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a1;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 774;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a1;
        assert( old != NULL );
        par_a1 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 775;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a2;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 775;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a2;
        assert( old != NULL );
        par_a2 = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_a2;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 776;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_a1;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 776;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 776;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_diff == NULL );
    var_diff = tmp_assign_source_4;

    tmp_compare_left_1 = var_diff;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_2 = par_a1;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_a2;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_assign_source_5 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_5;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_diff;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 779;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 780;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 780;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_diff;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_2 = par_a1;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 780;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 780;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 780;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_6;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 781;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_zr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a1;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 781;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_concatenate, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 781;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = par_a2;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 781;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 783;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 783;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_abs );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "abs" );
        exception_tb = NULL;

        exception_lineno = 783;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_diff;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 783;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 783;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_a2;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 783;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 783;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 783;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_8;

    tmp_left_name_4 = par_a1;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 784;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_zr;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_a2;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_2 );
    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 784;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_concatenate, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_9;

    branch_end_2:;
    branch_end_1:;
    tmp_cond_value_1 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 786;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_val;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 786;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5fc52a888c220081dd33442555c23d9a->m_frame.f_lineno = 786;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 786;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        var_val = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 787;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fc52a888c220081dd33442555c23d9a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fc52a888c220081dd33442555c23d9a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fc52a888c220081dd33442555c23d9a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5fc52a888c220081dd33442555c23d9a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5fc52a888c220081dd33442555c23d9a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5fc52a888c220081dd33442555c23d9a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5fc52a888c220081dd33442555c23d9a,
        type_description_1,
        par_a1,
        par_a2,
        var_truepoly,
        var_diff,
        var_val,
        var_zr
    );


    // Release cached frame.
    if ( frame_5fc52a888c220081dd33442555c23d9a == cache_frame_5fc52a888c220081dd33442555c23d9a )
    {
        Py_DECREF( frame_5fc52a888c220081dd33442555c23d9a );
    }
    cache_frame_5fc52a888c220081dd33442555c23d9a = NULL;

    assertFrameObject( frame_5fc52a888c220081dd33442555c23d9a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_8_polysub );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_diff );
    Py_DECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_8_polysub );
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


static PyObject *impl_numpy$lib$polynomial$$$function_9_polymul( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a1 = python_pars[ 0 ];
    PyObject *par_a2 = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_9ce2267cad3697270584a418cfdc7c0e = NULL;

    struct Nuitka_FrameObject *frame_9ce2267cad3697270584a418cfdc7c0e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ce2267cad3697270584a418cfdc7c0e, codeobj_9ce2267cad3697270584a418cfdc7c0e, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9ce2267cad3697270584a418cfdc7c0e = cache_frame_9ce2267cad3697270584a418cfdc7c0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ce2267cad3697270584a418cfdc7c0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ce2267cad3697270584a418cfdc7c0e ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_a1;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 839;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 839;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 839;
        type_description_1 = "oooo";
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
    tmp_isinstance_inst_2 = par_a2;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 839;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 839;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    // Tried code:
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 840;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_a1;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9ce2267cad3697270584a418cfdc7c0e->m_frame.f_lineno = 840;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 840;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 840;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_a2;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_9ce2267cad3697270584a418cfdc7c0e->m_frame.f_lineno = 840;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 840;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 840;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 840;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = par_a1;
        assert( old != NULL );
        par_a1 = tmp_assign_source_5;
        Py_INCREF( par_a1 );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_a2;
        assert( old != NULL );
        par_a2 = tmp_assign_source_6;
        Py_INCREF( par_a2 );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 841;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_a1;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_a2;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_9ce2267cad3697270584a418cfdc7c0e->m_frame.f_lineno = 841;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_convolve, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 841;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    tmp_cond_value_1 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 842;
        type_description_1 = "oooo";
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
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 843;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_val;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_9ce2267cad3697270584a418cfdc7c0e->m_frame.f_lineno = 843;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 843;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        assert( old != NULL );
        var_val = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce2267cad3697270584a418cfdc7c0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce2267cad3697270584a418cfdc7c0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ce2267cad3697270584a418cfdc7c0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ce2267cad3697270584a418cfdc7c0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ce2267cad3697270584a418cfdc7c0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ce2267cad3697270584a418cfdc7c0e,
        type_description_1,
        par_a1,
        par_a2,
        var_truepoly,
        var_val
    );


    // Release cached frame.
    if ( frame_9ce2267cad3697270584a418cfdc7c0e == cache_frame_9ce2267cad3697270584a418cfdc7c0e )
    {
        Py_DECREF( frame_9ce2267cad3697270584a418cfdc7c0e );
    }
    cache_frame_9ce2267cad3697270584a418cfdc7c0e = NULL;

    assertFrameObject( frame_9ce2267cad3697270584a418cfdc7c0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_val;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_9_polymul );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_9_polymul );
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


static PyObject *impl_numpy$lib$polynomial$$$function_10_polydiv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_u = python_pars[ 0 ];
    PyObject *par_v = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_w = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_q = NULL;
    PyObject *var_r = NULL;
    PyObject *var_k = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_slice_1__lower = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_1__upper = NULL;
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
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
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
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static struct Nuitka_FrameObject *cache_frame_accf2b5853430ad285a95b42b2d50882 = NULL;

    struct Nuitka_FrameObject *frame_accf2b5853430ad285a95b42b2d50882;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_accf2b5853430ad285a95b42b2d50882, codeobj_accf2b5853430ad285a95b42b2d50882, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_accf2b5853430ad285a95b42b2d50882 = cache_frame_accf2b5853430ad285a95b42b2d50882;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_accf2b5853430ad285a95b42b2d50882 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_accf2b5853430ad285a95b42b2d50882 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_u;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 891;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 891;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 891;
        type_description_1 = "ooooooooooo";
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
    tmp_isinstance_inst_2 = par_u;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 891;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 891;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 892;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_u;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 892;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 892;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 892;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_u;
        assert( old != NULL );
        par_u = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 893;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_v;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 893;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 893;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_0;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 893;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_v;
        assert( old != NULL );
        par_v = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_subscribed_name_1 = par_u;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 895;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_v;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 895;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 895;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_w == NULL );
    var_w = tmp_assign_source_4;

    tmp_len_arg_1 = par_u;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 896;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_5 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 896;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_5;

    tmp_len_arg_2 = par_v;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 897;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_6 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 897;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_6;

    tmp_left_name_6 = const_float_1_0;
    tmp_subscribed_name_3 = par_v;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 898;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_TRUEDIV( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 898;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scale == NULL );
    var_scale = tmp_assign_source_7;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 1 );
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_4 != NULL );
    tmp_left_name_8 = var_m;

    CHECK_OBJECT( tmp_left_name_8 );
    tmp_right_name_7 = var_n;

    CHECK_OBJECT( tmp_right_name_7 );
    tmp_left_name_7 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_7 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = const_int_pos_1;
    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_int_pos_1;
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 899;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = var_w;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 899;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_6 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 899;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_q == NULL );
    var_q = tmp_assign_source_8;

    tmp_called_instance_1 = par_u;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 900;
    tmp_assign_source_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 900;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_9;

    tmp_range2_low_1 = const_int_0;
    tmp_left_name_10 = var_m;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_right_name_9 = var_n;

    CHECK_OBJECT( tmp_right_name_9 );
    tmp_left_name_9 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_9 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = const_int_pos_1;
    tmp_range2_high_1 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            exception_lineno = 901;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_12;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_left_name_11 = var_scale;

    CHECK_OBJECT( tmp_left_name_11 );
    tmp_subscribed_name_4 = var_r;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = var_k;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_13 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_d;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_q;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = var_k;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 903;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_14 = var_r;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = tmp_inplace_assign_slice_1__target;
        tmp_inplace_assign_slice_1__target = tmp_assign_source_14;
        Py_INCREF( tmp_inplace_assign_slice_1__target );
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = var_k;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = tmp_inplace_assign_slice_1__lower;
        tmp_inplace_assign_slice_1__lower = tmp_assign_source_15;
        Py_INCREF( tmp_inplace_assign_slice_1__lower );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_left_name_13 = var_k;

    CHECK_OBJECT( tmp_left_name_13 );
    tmp_right_name_12 = var_n;

    CHECK_OBJECT( tmp_right_name_12 );
    tmp_left_name_12 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_12 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 904;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    tmp_right_name_13 = const_int_pos_1;
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 904;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_inplace_assign_slice_1__upper;
        tmp_inplace_assign_slice_1__upper = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_slice_source_1 = tmp_inplace_assign_slice_1__target;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_slice_lower_1 = tmp_inplace_assign_slice_1__lower;

    CHECK_OBJECT( tmp_slice_lower_1 );
    tmp_slice_upper_1 = tmp_inplace_assign_slice_1__upper;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_left_name_14 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 904;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    tmp_left_name_15 = var_d;

    CHECK_OBJECT( tmp_left_name_15 );
    tmp_right_name_15 = par_v;

    CHECK_OBJECT( tmp_right_name_15 );
    tmp_right_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_14 );

        exception_lineno = 904;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    tmp_sliceass_value_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 904;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    tmp_sliceass_target_1 = tmp_inplace_assign_slice_1__target;

    CHECK_OBJECT( tmp_sliceass_target_1 );
    tmp_sliceass_lower_1 = tmp_inplace_assign_slice_1__lower;

    CHECK_OBJECT( tmp_sliceass_lower_1 );
    tmp_sliceass_upper_1 = tmp_inplace_assign_slice_1__upper;

    CHECK_OBJECT( tmp_sliceass_upper_1 );
    tmp_result = SET_SLICE( tmp_sliceass_target_1, tmp_sliceass_lower_1, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 904;
        type_description_1 = "ooooooooooo";
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__lower );
    Py_DECREF( tmp_inplace_assign_slice_1__lower );
    tmp_inplace_assign_slice_1__lower = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__lower );
    Py_DECREF( tmp_inplace_assign_slice_1__lower );
    tmp_inplace_assign_slice_1__lower = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
    Py_DECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    loop_start_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_allclose );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_subscribed_name_5 = var_r;

    if ( tmp_subscribed_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc );
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 905;
    tmp_and_left_value_1 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 905;
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
    Py_DECREF( tmp_and_left_value_1 );
    tmp_source_name_4 = var_r;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_6 = const_int_neg_1;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
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

        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
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
    goto loop_end_2;
    branch_no_1:;
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_r;

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 906;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_cond_value_2 = var_truepoly;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 907;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 908;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_q;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 908;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 908;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 908;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_r;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 908;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_accf2b5853430ad285a95b42b2d50882->m_frame.f_lineno = 908;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 908;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_q;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_r;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 909;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_accf2b5853430ad285a95b42b2d50882 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_accf2b5853430ad285a95b42b2d50882 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_accf2b5853430ad285a95b42b2d50882 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_accf2b5853430ad285a95b42b2d50882, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_accf2b5853430ad285a95b42b2d50882->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_accf2b5853430ad285a95b42b2d50882, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_accf2b5853430ad285a95b42b2d50882,
        type_description_1,
        par_u,
        par_v,
        var_truepoly,
        var_w,
        var_m,
        var_n,
        var_scale,
        var_q,
        var_r,
        var_k,
        var_d
    );


    // Release cached frame.
    if ( frame_accf2b5853430ad285a95b42b2d50882 == cache_frame_accf2b5853430ad285a95b42b2d50882 )
    {
        Py_DECREF( frame_accf2b5853430ad285a95b42b2d50882 );
    }
    cache_frame_accf2b5853430ad285a95b42b2d50882 = NULL;

    assertFrameObject( frame_accf2b5853430ad285a95b42b2d50882 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_10_polydiv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_scale );
    Py_DECREF( var_scale );
    var_scale = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_10_polydiv );
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


static PyObject *impl_numpy$lib$polynomial$$$function_11__raise_power( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_astr = python_pars[ 0 ];
    PyObject *par_wrap = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_line1 = NULL;
    PyObject *var_line2 = NULL;
    PyObject *var_output = NULL;
    PyObject *var_mat = NULL;
    PyObject *var_span = NULL;
    PyObject *var_power = NULL;
    PyObject *var_partstr = NULL;
    PyObject *var_toadd2 = NULL;
    PyObject *var_toadd1 = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_len_arg_8;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    static struct Nuitka_FrameObject *cache_frame_77e47401d00de2a5a6d5aa3c0b41b5b9 = NULL;

    struct Nuitka_FrameObject *frame_77e47401d00de2a5a6d5aa3c0b41b5b9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_n == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_n = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_empty;
    assert( var_line1 == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_line1 = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_empty;
    assert( var_line2 == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_line2 = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_space;
    assert( var_output == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_output = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_77e47401d00de2a5a6d5aa3c0b41b5b9, codeobj_77e47401d00de2a5a6d5aa3c0b41b5b9, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_77e47401d00de2a5a6d5aa3c0b41b5b9 = cache_frame_77e47401d00de2a5a6d5aa3c0b41b5b9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__poly_mat );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__poly_mat );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_poly_mat" );
        exception_tb = NULL;

        exception_lineno = 918;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 918;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_astr;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = var_n;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 918;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_77e47401d00de2a5a6d5aa3c0b41b5b9->m_frame.f_lineno = 918;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 918;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_mat;
        var_mat = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_mat;

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
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_1 = var_mat;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_77e47401d00de2a5a6d5aa3c0b41b5b9->m_frame.f_lineno = 921;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_span );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 921;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_span;
        var_span = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = var_mat;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_77e47401d00de2a5a6d5aa3c0b41b5b9->m_frame.f_lineno = 922;
    tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_groups );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 922;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 922;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_power;
        var_power = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_slice_source_1 = par_astr;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_slice_lower_1 = var_n;

    if ( tmp_slice_lower_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 923;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = var_span;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_slice_upper_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_partstr;
        var_partstr = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = var_span;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_pos_1;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_partstr;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = const_str_space;
    tmp_len_arg_1 = var_power;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_toadd2;
        var_toadd2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_left_name_5 = const_str_space;
    tmp_len_arg_2 = var_partstr;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = var_power;

    CHECK_OBJECT( tmp_right_name_6 );
    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_toadd1;
        var_toadd1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_len_arg_3 = var_line2;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 927;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_7 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_4 = var_toadd2;

    CHECK_OBJECT( tmp_len_arg_4 );
    tmp_right_name_7 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 927;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_wrap;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_or_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
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
    tmp_len_arg_5 = var_line1;

    if ( tmp_len_arg_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_8 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_6 = var_toadd1;

    CHECK_OBJECT( tmp_len_arg_6 );
    tmp_right_name_8 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = par_wrap;

    CHECK_OBJECT( tmp_compexpr_right_2 );
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
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

        exception_lineno = 928;
        type_description_1 = "oooooooooooo";
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
    tmp_left_name_9 = var_output;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output" );
        exception_tb = NULL;

        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_12 = var_line1;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_str_newline;
    tmp_left_name_11 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_10 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_line2;

    if ( tmp_right_name_11 == NULL )
    {
        Py_DECREF( tmp_left_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = const_str_digest_5d29a5fa4d48aa4eec4b679b0c640190;
    tmp_right_name_9 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_12 = tmp_left_name_9;
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    var_output = tmp_assign_source_12;

    tmp_assign_source_13 = var_toadd1;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_line1;
        var_line1 = tmp_assign_source_13;
        Py_INCREF( var_line1 );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = var_toadd2;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_line2;
        var_line2 = tmp_assign_source_14;
        Py_INCREF( var_line2 );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_13 = var_line2;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 933;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_14 = var_partstr;

    CHECK_OBJECT( tmp_left_name_14 );
    tmp_left_name_15 = const_str_space;
    tmp_len_arg_7 = var_power;

    CHECK_OBJECT( tmp_len_arg_7 );
    tmp_left_name_16 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 933;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = const_int_pos_1;
    tmp_right_name_15 = BINARY_OPERATION_SUB( tmp_left_name_16, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 933;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 933;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 933;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
    tmp_assign_source_15 = tmp_left_name_13;
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 933;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    var_line2 = tmp_assign_source_15;

    tmp_left_name_17 = var_line1;

    if ( tmp_left_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 934;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_19 = const_str_space;
    tmp_len_arg_8 = var_partstr;

    CHECK_OBJECT( tmp_len_arg_8 );
    tmp_left_name_20 = BUILTIN_LEN( tmp_len_arg_8 );
    if ( tmp_left_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_19 = const_int_pos_1;
    tmp_right_name_18 = BINARY_OPERATION_SUB( tmp_left_name_20, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_20 );
    if ( tmp_right_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_18 = BINARY_OPERATION_MUL( tmp_left_name_19, tmp_right_name_18 );
    Py_DECREF( tmp_right_name_18 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_20 = var_power;

    CHECK_OBJECT( tmp_right_name_20 );
    tmp_right_name_17 = BINARY_OPERATION_ADD( tmp_left_name_18, tmp_right_name_20 );
    Py_DECREF( tmp_left_name_18 );
    if ( tmp_right_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
    tmp_assign_source_16 = tmp_left_name_17;
    Py_DECREF( tmp_right_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    var_line1 = tmp_assign_source_16;

    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 917;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_left_name_21 = var_output;

    if ( tmp_left_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output" );
        exception_tb = NULL;

        exception_lineno = 935;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_23 = var_line1;

    if ( tmp_left_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 935;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_22 = const_str_newline;
    tmp_left_name_22 = BINARY_OPERATION_ADD( tmp_left_name_23, tmp_right_name_22 );
    if ( tmp_left_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_23 = var_line2;

    if ( tmp_right_name_23 == NULL )
    {
        Py_DECREF( tmp_left_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 935;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_21 = BINARY_OPERATION_ADD( tmp_left_name_22, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_22 );
    if ( tmp_right_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
    tmp_assign_source_17 = tmp_left_name_21;
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    var_output = tmp_assign_source_17;

    tmp_left_name_24 = var_output;

    CHECK_OBJECT( tmp_left_name_24 );
    tmp_slice_source_2 = par_astr;

    CHECK_OBJECT( tmp_slice_source_2 );
    tmp_slice_lower_2 = var_n;

    if ( tmp_slice_lower_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 936;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_24 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, Py_None );
    if ( tmp_right_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 936;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_24, tmp_right_name_24 );
    Py_DECREF( tmp_right_name_24 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 936;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_77e47401d00de2a5a6d5aa3c0b41b5b9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_77e47401d00de2a5a6d5aa3c0b41b5b9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_77e47401d00de2a5a6d5aa3c0b41b5b9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_77e47401d00de2a5a6d5aa3c0b41b5b9,
        type_description_1,
        par_astr,
        par_wrap,
        var_n,
        var_line1,
        var_line2,
        var_output,
        var_mat,
        var_span,
        var_power,
        var_partstr,
        var_toadd2,
        var_toadd1
    );


    // Release cached frame.
    if ( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 == cache_frame_77e47401d00de2a5a6d5aa3c0b41b5b9 )
    {
        Py_DECREF( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 );
    }
    cache_frame_77e47401d00de2a5a6d5aa3c0b41b5b9 = NULL;

    assertFrameObject( frame_77e47401d00de2a5a6d5aa3c0b41b5b9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_11__raise_power );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_line1 );
    var_line1 = NULL;

    Py_XDECREF( var_line2 );
    var_line2 = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)var_mat );
    Py_DECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_span );
    var_span = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_partstr );
    var_partstr = NULL;

    Py_XDECREF( var_toadd2 );
    var_toadd2 = NULL;

    Py_XDECREF( var_toadd1 );
    var_toadd1 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_line1 );
    var_line1 = NULL;

    Py_XDECREF( var_line2 );
    var_line2 = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_span );
    var_span = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_partstr );
    var_partstr = NULL;

    Py_XDECREF( var_toadd2 );
    var_toadd2 = NULL;

    Py_XDECREF( var_toadd1 );
    var_toadd1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_11__raise_power );
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


static PyObject *impl_numpy$lib$polynomial$$$function_12_coeffs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_2961595e5b37160000e4ff4a4188845d = NULL;

    struct Nuitka_FrameObject *frame_2961595e5b37160000e4ff4a4188845d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2961595e5b37160000e4ff4a4188845d, codeobj_2961595e5b37160000e4ff4a4188845d, module_numpy$lib$polynomial, sizeof(void *) );
    frame_2961595e5b37160000e4ff4a4188845d = cache_frame_2961595e5b37160000e4ff4a4188845d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2961595e5b37160000e4ff4a4188845d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2961595e5b37160000e4ff4a4188845d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__coeffs );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1044;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2961595e5b37160000e4ff4a4188845d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2961595e5b37160000e4ff4a4188845d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2961595e5b37160000e4ff4a4188845d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2961595e5b37160000e4ff4a4188845d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2961595e5b37160000e4ff4a4188845d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2961595e5b37160000e4ff4a4188845d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2961595e5b37160000e4ff4a4188845d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2961595e5b37160000e4ff4a4188845d == cache_frame_2961595e5b37160000e4ff4a4188845d )
    {
        Py_DECREF( frame_2961595e5b37160000e4ff4a4188845d );
    }
    cache_frame_2961595e5b37160000e4ff4a4188845d = NULL;

    assertFrameObject( frame_2961595e5b37160000e4ff4a4188845d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_12_coeffs );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_12_coeffs );
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


static PyObject *impl_numpy$lib$polynomial$$$function_13_coeffs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_fe4bd55113a1187fe0db1830319f8db9 = NULL;

    struct Nuitka_FrameObject *frame_fe4bd55113a1187fe0db1830319f8db9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe4bd55113a1187fe0db1830319f8db9, codeobj_fe4bd55113a1187fe0db1830319f8db9, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_fe4bd55113a1187fe0db1830319f8db9 = cache_frame_fe4bd55113a1187fe0db1830319f8db9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe4bd55113a1187fe0db1830319f8db9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe4bd55113a1187fe0db1830319f8db9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_value;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__coeffs );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1049;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_1 = const_str_digest_aed6bd3f7f3ffd84fb9ea5c50ffa1aa0;
    frame_fe4bd55113a1187fe0db1830319f8db9->m_frame.f_lineno = 1050;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AttributeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1050;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe4bd55113a1187fe0db1830319f8db9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe4bd55113a1187fe0db1830319f8db9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe4bd55113a1187fe0db1830319f8db9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe4bd55113a1187fe0db1830319f8db9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe4bd55113a1187fe0db1830319f8db9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe4bd55113a1187fe0db1830319f8db9,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_fe4bd55113a1187fe0db1830319f8db9 == cache_frame_fe4bd55113a1187fe0db1830319f8db9 )
    {
        Py_DECREF( frame_fe4bd55113a1187fe0db1830319f8db9 );
    }
    cache_frame_fe4bd55113a1187fe0db1830319f8db9 = NULL;

    assertFrameObject( frame_fe4bd55113a1187fe0db1830319f8db9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_13_coeffs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_13_coeffs );
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


static PyObject *impl_numpy$lib$polynomial$$$function_14_variable( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_5730782d5557a7a493c429e3955a3ad4 = NULL;

    struct Nuitka_FrameObject *frame_5730782d5557a7a493c429e3955a3ad4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5730782d5557a7a493c429e3955a3ad4, codeobj_5730782d5557a7a493c429e3955a3ad4, module_numpy$lib$polynomial, sizeof(void *) );
    frame_5730782d5557a7a493c429e3955a3ad4 = cache_frame_5730782d5557a7a493c429e3955a3ad4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5730782d5557a7a493c429e3955a3ad4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5730782d5557a7a493c429e3955a3ad4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__variable );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1055;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5730782d5557a7a493c429e3955a3ad4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5730782d5557a7a493c429e3955a3ad4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5730782d5557a7a493c429e3955a3ad4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5730782d5557a7a493c429e3955a3ad4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5730782d5557a7a493c429e3955a3ad4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5730782d5557a7a493c429e3955a3ad4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5730782d5557a7a493c429e3955a3ad4,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5730782d5557a7a493c429e3955a3ad4 == cache_frame_5730782d5557a7a493c429e3955a3ad4 )
    {
        Py_DECREF( frame_5730782d5557a7a493c429e3955a3ad4 );
    }
    cache_frame_5730782d5557a7a493c429e3955a3ad4 = NULL;

    assertFrameObject( frame_5730782d5557a7a493c429e3955a3ad4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_14_variable );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_14_variable );
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


static PyObject *impl_numpy$lib$polynomial$$$function_15_order( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_7778ad560f1065519cb63fd79a352bfe = NULL;

    struct Nuitka_FrameObject *frame_7778ad560f1065519cb63fd79a352bfe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7778ad560f1065519cb63fd79a352bfe, codeobj_7778ad560f1065519cb63fd79a352bfe, module_numpy$lib$polynomial, sizeof(void *) );
    frame_7778ad560f1065519cb63fd79a352bfe = cache_frame_7778ad560f1065519cb63fd79a352bfe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7778ad560f1065519cb63fd79a352bfe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7778ad560f1065519cb63fd79a352bfe ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__coeffs );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7778ad560f1065519cb63fd79a352bfe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7778ad560f1065519cb63fd79a352bfe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7778ad560f1065519cb63fd79a352bfe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7778ad560f1065519cb63fd79a352bfe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7778ad560f1065519cb63fd79a352bfe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7778ad560f1065519cb63fd79a352bfe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7778ad560f1065519cb63fd79a352bfe,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7778ad560f1065519cb63fd79a352bfe == cache_frame_7778ad560f1065519cb63fd79a352bfe )
    {
        Py_DECREF( frame_7778ad560f1065519cb63fd79a352bfe );
    }
    cache_frame_7778ad560f1065519cb63fd79a352bfe = NULL;

    assertFrameObject( frame_7778ad560f1065519cb63fd79a352bfe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_15_order );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_15_order );
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


static PyObject *impl_numpy$lib$polynomial$$$function_16_roots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_af420ac53561e5e481d90adaa555af1f = NULL;

    struct Nuitka_FrameObject *frame_af420ac53561e5e481d90adaa555af1f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_af420ac53561e5e481d90adaa555af1f, codeobj_af420ac53561e5e481d90adaa555af1f, module_numpy$lib$polynomial, sizeof(void *) );
    frame_af420ac53561e5e481d90adaa555af1f = cache_frame_af420ac53561e5e481d90adaa555af1f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_af420ac53561e5e481d90adaa555af1f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_af420ac53561e5e481d90adaa555af1f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_roots );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_roots );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "roots" );
        exception_tb = NULL;

        exception_lineno = 1066;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__coeffs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1066;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_af420ac53561e5e481d90adaa555af1f->m_frame.f_lineno = 1066;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1066;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af420ac53561e5e481d90adaa555af1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_af420ac53561e5e481d90adaa555af1f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_af420ac53561e5e481d90adaa555af1f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_af420ac53561e5e481d90adaa555af1f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_af420ac53561e5e481d90adaa555af1f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_af420ac53561e5e481d90adaa555af1f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_af420ac53561e5e481d90adaa555af1f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_af420ac53561e5e481d90adaa555af1f == cache_frame_af420ac53561e5e481d90adaa555af1f )
    {
        Py_DECREF( frame_af420ac53561e5e481d90adaa555af1f );
    }
    cache_frame_af420ac53561e5e481d90adaa555af1f = NULL;

    assertFrameObject( frame_af420ac53561e5e481d90adaa555af1f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_16_roots );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_16_roots );
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


static PyObject *impl_numpy$lib$polynomial$$$function_17__coeffs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_0b6c2b343e1f69cbf998d0f00d179c55 = NULL;

    struct Nuitka_FrameObject *frame_0b6c2b343e1f69cbf998d0f00d179c55;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b6c2b343e1f69cbf998d0f00d179c55, codeobj_0b6c2b343e1f69cbf998d0f00d179c55, module_numpy$lib$polynomial, sizeof(void *) );
    frame_0b6c2b343e1f69cbf998d0f00d179c55 = cache_frame_0b6c2b343e1f69cbf998d0f00d179c55;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b6c2b343e1f69cbf998d0f00d179c55 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b6c2b343e1f69cbf998d0f00d179c55 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1072;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_coeffs;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1072;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b6c2b343e1f69cbf998d0f00d179c55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b6c2b343e1f69cbf998d0f00d179c55 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b6c2b343e1f69cbf998d0f00d179c55 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b6c2b343e1f69cbf998d0f00d179c55, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b6c2b343e1f69cbf998d0f00d179c55->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b6c2b343e1f69cbf998d0f00d179c55, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b6c2b343e1f69cbf998d0f00d179c55,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0b6c2b343e1f69cbf998d0f00d179c55 == cache_frame_0b6c2b343e1f69cbf998d0f00d179c55 )
    {
        Py_DECREF( frame_0b6c2b343e1f69cbf998d0f00d179c55 );
    }
    cache_frame_0b6c2b343e1f69cbf998d0f00d179c55 = NULL;

    assertFrameObject( frame_0b6c2b343e1f69cbf998d0f00d179c55 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_17__coeffs );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_17__coeffs );
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


static PyObject *impl_numpy$lib$polynomial$$$function_18__coeffs( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_coeffs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_7cf4ee1308fe5eb882b9401d698cdab0 = NULL;

    struct Nuitka_FrameObject *frame_7cf4ee1308fe5eb882b9401d698cdab0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7cf4ee1308fe5eb882b9401d698cdab0, codeobj_7cf4ee1308fe5eb882b9401d698cdab0, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_7cf4ee1308fe5eb882b9401d698cdab0 = cache_frame_7cf4ee1308fe5eb882b9401d698cdab0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7cf4ee1308fe5eb882b9401d698cdab0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7cf4ee1308fe5eb882b9401d698cdab0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_ass_subvalue_1 = par_coeffs;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1075;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_coeffs;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1075;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cf4ee1308fe5eb882b9401d698cdab0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cf4ee1308fe5eb882b9401d698cdab0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7cf4ee1308fe5eb882b9401d698cdab0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7cf4ee1308fe5eb882b9401d698cdab0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7cf4ee1308fe5eb882b9401d698cdab0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cf4ee1308fe5eb882b9401d698cdab0,
        type_description_1,
        par_self,
        par_coeffs
    );


    // Release cached frame.
    if ( frame_7cf4ee1308fe5eb882b9401d698cdab0 == cache_frame_7cf4ee1308fe5eb882b9401d698cdab0 )
    {
        Py_DECREF( frame_7cf4ee1308fe5eb882b9401d698cdab0 );
    }
    cache_frame_7cf4ee1308fe5eb882b9401d698cdab0 = NULL;

    assertFrameObject( frame_7cf4ee1308fe5eb882b9401d698cdab0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_18__coeffs );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_coeffs );
    Py_DECREF( par_coeffs );
    par_coeffs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_coeffs );
    Py_DECREF( par_coeffs );
    par_coeffs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_18__coeffs );
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


static PyObject *impl_numpy$lib$polynomial$$$function_19___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c_or_r = python_pars[ 1 ];
    PyObject *par_r = python_pars[ 2 ];
    PyObject *par_variable = python_pars[ 3 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_set_arg_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_634a4e4548617e67f9873926360f9c76 = NULL;

    struct Nuitka_FrameObject *frame_634a4e4548617e67f9873926360f9c76;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_634a4e4548617e67f9873926360f9c76, codeobj_634a4e4548617e67f9873926360f9c76, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_634a4e4548617e67f9873926360f9c76 = cache_frame_634a4e4548617e67f9873926360f9c76;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_634a4e4548617e67f9873926360f9c76 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_634a4e4548617e67f9873926360f9c76 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_c_or_r;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1083;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1083;
        type_description_1 = "ooooN";
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
    tmp_source_name_1 = par_c_or_r;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__variable );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1084;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__variable, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 1084;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_2 = par_c_or_r;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__coeffs );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1085;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__coeffs, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 1085;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_3 = par_c_or_r;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_set_arg_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_3 );
    if ( tmp_set_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1087;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1087;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_set_arg_2 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_4 );
    if ( tmp_set_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 1087;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PySet_New( tmp_set_arg_2 );
    Py_DECREF( tmp_set_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 1087;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1087;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1087;
        type_description_1 = "ooooN";
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 1090;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1090;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_digest_aa9ae4b127e772c8ccb06e400625f2b1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_FutureWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FutureWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FutureWarning" );
        exception_tb = NULL;

        exception_lineno = 1090;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1090;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1090;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_source_name_6 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_7 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1091;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_update );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1091;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_c_or_r;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_8 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1091;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1091;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1091;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_compare_left_1 = par_variable;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assattr_name_3 = par_variable;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__variable, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1094;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_r;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1096;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly" );
        exception_tb = NULL;

        exception_lineno = 1097;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_c_or_r;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1097;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 1098;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_c_or_r;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1098;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_source_name_9 = par_c_or_r;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1099;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 1099;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_1 = const_str_digest_e43f3bd915f6ace2e523b3a24994fdbc;
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1100;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1100;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooN";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_trim_zeros );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trim_zeros );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "trim_zeros" );
        exception_tb = NULL;

        exception_lineno = 1101;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = par_c_or_r;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_550850c0300eb7076f24d8318a86fb89 );
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1101;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1101;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_c_or_r;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1102;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 1102;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1103;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LIST_COPY( const_list_float_0_0_list );
    frame_634a4e4548617e67f9873926360f9c76->m_frame.f_lineno = 1103;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_array, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1103;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_assattr_name_4 = par_c_or_r;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__coeffs, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1104;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = par_variable;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_5 = const_str_plain_x;
    {
        PyObject *old = par_variable;
        assert( old != NULL );
        par_variable = tmp_assign_source_5;
        Py_INCREF( par_variable );
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_assattr_name_5 = par_variable;

    CHECK_OBJECT( tmp_assattr_name_5 );
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__variable, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1107;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_634a4e4548617e67f9873926360f9c76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_634a4e4548617e67f9873926360f9c76 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_634a4e4548617e67f9873926360f9c76 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_634a4e4548617e67f9873926360f9c76, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_634a4e4548617e67f9873926360f9c76->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_634a4e4548617e67f9873926360f9c76, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_634a4e4548617e67f9873926360f9c76,
        type_description_1,
        par_self,
        par_c_or_r,
        par_r,
        par_variable,
        NULL
    );


    // Release cached frame.
    if ( frame_634a4e4548617e67f9873926360f9c76 == cache_frame_634a4e4548617e67f9873926360f9c76 )
    {
        Py_DECREF( frame_634a4e4548617e67f9873926360f9c76 );
    }
    cache_frame_634a4e4548617e67f9873926360f9c76 = NULL;

    assertFrameObject( frame_634a4e4548617e67f9873926360f9c76 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_19___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_c_or_r );
    par_c_or_r = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_variable );
    par_variable = NULL;

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

    Py_XDECREF( par_c_or_r );
    par_c_or_r = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_variable );
    par_variable = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_19___init__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_20___array__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_63c8d9577b7fa95780cd0f65d5d199d0 = NULL;

    struct Nuitka_FrameObject *frame_63c8d9577b7fa95780cd0f65d5d199d0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_63c8d9577b7fa95780cd0f65d5d199d0, codeobj_63c8d9577b7fa95780cd0f65d5d199d0, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_63c8d9577b7fa95780cd0f65d5d199d0 = cache_frame_63c8d9577b7fa95780cd0f65d5d199d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_63c8d9577b7fa95780cd0f65d5d199d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_63c8d9577b7fa95780cd0f65d5d199d0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_t;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1110;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_t;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_63c8d9577b7fa95780cd0f65d5d199d0->m_frame.f_lineno = 1111;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1111;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_63c8d9577b7fa95780cd0f65d5d199d0->m_frame.f_lineno = 1113;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1113;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63c8d9577b7fa95780cd0f65d5d199d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_63c8d9577b7fa95780cd0f65d5d199d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_63c8d9577b7fa95780cd0f65d5d199d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_63c8d9577b7fa95780cd0f65d5d199d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_63c8d9577b7fa95780cd0f65d5d199d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_63c8d9577b7fa95780cd0f65d5d199d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_63c8d9577b7fa95780cd0f65d5d199d0,
        type_description_1,
        par_self,
        par_t
    );


    // Release cached frame.
    if ( frame_63c8d9577b7fa95780cd0f65d5d199d0 == cache_frame_63c8d9577b7fa95780cd0f65d5d199d0 )
    {
        Py_DECREF( frame_63c8d9577b7fa95780cd0f65d5d199d0 );
    }
    cache_frame_63c8d9577b7fa95780cd0f65d5d199d0 = NULL;

    assertFrameObject( frame_63c8d9577b7fa95780cd0f65d5d199d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_20___array__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_20___array__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_21___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_vals = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_490475c83d77cccadd827e4ac18f8236 = NULL;

    struct Nuitka_FrameObject *frame_490475c83d77cccadd827e4ac18f8236;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_490475c83d77cccadd827e4ac18f8236, codeobj_490475c83d77cccadd827e4ac18f8236, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_490475c83d77cccadd827e4ac18f8236 = cache_frame_490475c83d77cccadd827e4ac18f8236;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_490475c83d77cccadd827e4ac18f8236 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_490475c83d77cccadd827e4ac18f8236 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1116;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1116;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_vals == NULL );
    var_vals = tmp_assign_source_1;

    tmp_sliceslicedel_index_lower_1 = 6;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_vals;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_assign_source_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1117;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vals;
        assert( old != NULL );
        var_vals = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_left_name_1 = const_str_digest_8e8cc082af63fdab10d5a5ad0df80a3b;
    tmp_right_name_1 = var_vals;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1118;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_490475c83d77cccadd827e4ac18f8236 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_490475c83d77cccadd827e4ac18f8236 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_490475c83d77cccadd827e4ac18f8236 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_490475c83d77cccadd827e4ac18f8236, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_490475c83d77cccadd827e4ac18f8236->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_490475c83d77cccadd827e4ac18f8236, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_490475c83d77cccadd827e4ac18f8236,
        type_description_1,
        par_self,
        var_vals
    );


    // Release cached frame.
    if ( frame_490475c83d77cccadd827e4ac18f8236 == cache_frame_490475c83d77cccadd827e4ac18f8236 )
    {
        Py_DECREF( frame_490475c83d77cccadd827e4ac18f8236 );
    }
    cache_frame_490475c83d77cccadd827e4ac18f8236 = NULL;

    assertFrameObject( frame_490475c83d77cccadd827e4ac18f8236 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_21___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_vals );
    Py_DECREF( var_vals );
    var_vals = NULL;

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

    Py_XDECREF( var_vals );
    var_vals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_21___repr__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_22___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_0e77f2baa13fbb45b486dad4a07dc477 = NULL;

    struct Nuitka_FrameObject *frame_0e77f2baa13fbb45b486dad4a07dc477;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e77f2baa13fbb45b486dad4a07dc477, codeobj_0e77f2baa13fbb45b486dad4a07dc477, module_numpy$lib$polynomial, sizeof(void *) );
    frame_0e77f2baa13fbb45b486dad4a07dc477 = cache_frame_0e77f2baa13fbb45b486dad4a07dc477;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e77f2baa13fbb45b486dad4a07dc477 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e77f2baa13fbb45b486dad4a07dc477 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_order );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1121;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e77f2baa13fbb45b486dad4a07dc477 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e77f2baa13fbb45b486dad4a07dc477 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e77f2baa13fbb45b486dad4a07dc477 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e77f2baa13fbb45b486dad4a07dc477, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e77f2baa13fbb45b486dad4a07dc477->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e77f2baa13fbb45b486dad4a07dc477, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e77f2baa13fbb45b486dad4a07dc477,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0e77f2baa13fbb45b486dad4a07dc477 == cache_frame_0e77f2baa13fbb45b486dad4a07dc477 )
    {
        Py_DECREF( frame_0e77f2baa13fbb45b486dad4a07dc477 );
    }
    cache_frame_0e77f2baa13fbb45b486dad4a07dc477 = NULL;

    assertFrameObject( frame_0e77f2baa13fbb45b486dad4a07dc477 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_22___len__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_22___len__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_23___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_thestr = NULL;
    PyObject *var_var = NULL;
    PyObject *var_coeffs = NULL;
    PyObject *var_N = NULL;
    PyObject *var_fmt_float = NULL;
    PyObject *var_k = NULL;
    PyObject *var_coefstr = NULL;
    PyObject *var_power = NULL;
    PyObject *var_newstr = NULL;
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
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
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
    PyObject *tmp_called_instance_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Gt_1;
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
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_iter_arg_1;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
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
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
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
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    static struct Nuitka_FrameObject *cache_frame_99366efd4fbe5828a2d26d83844e711c = NULL;

    struct Nuitka_FrameObject *frame_99366efd4fbe5828a2d26d83844e711c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_0;
    assert( var_thestr == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_thestr = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99366efd4fbe5828a2d26d83844e711c, codeobj_99366efd4fbe5828a2d26d83844e711c, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_99366efd4fbe5828a2d26d83844e711c = cache_frame_99366efd4fbe5828a2d26d83844e711c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99366efd4fbe5828a2d26d83844e711c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99366efd4fbe5828a2d26d83844e711c ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_variable );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1125;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_var == NULL );
    var_var = tmp_assign_source_2;

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_logical_or );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_accumulate );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coeffs );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1128;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscript_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1128;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_coeffs == NULL );
    var_coeffs = tmp_assign_source_3;

    tmp_len_arg_1 = var_coeffs;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1129;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1129;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float(  );
    assert( var_fmt_float == NULL );
    var_fmt_float = tmp_assign_source_5;

    tmp_len_arg_2 = var_coeffs;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1137;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1137;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1137;
        type_description_1 = "oooooooooo";
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
            type_description_1 = "oooooooooo";
            exception_lineno = 1137;
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

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iscomplex" );
        exception_tb = NULL;

        exception_lineno = 1138;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_2 = var_coeffs;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = var_k;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1138;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1138;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1138;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1138;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
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
    tmp_called_name_3 = var_fmt_float;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "real" );
        exception_tb = NULL;

        exception_lineno = 1139;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_3 = var_coeffs;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = var_k;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1139;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1139;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1139;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1139;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1139;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coefstr;
        var_coefstr = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "real" );
        exception_tb = NULL;

        exception_lineno = 1140;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_4 = var_coeffs;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = var_k;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1140;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1140;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1140;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1140;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
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
    tmp_left_name_2 = const_str_digest_539b940ce8b78f070990007c87f8234f;
    tmp_called_name_6 = var_fmt_float;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_imag );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "imag" );
        exception_tb = NULL;

        exception_lineno = 1141;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_5 = var_coeffs;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = var_k;

    CHECK_OBJECT( tmp_subscript_name_5 );
    tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1141;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1141;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coefstr;
        var_coefstr = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_3 = const_str_digest_d31b1f7cd665ec833fe85cdeb11902cb;
    tmp_right_name_3 = PyTuple_New( 2 );
    tmp_called_name_8 = var_fmt_float;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "real" );
        exception_tb = NULL;

        exception_lineno = 1143;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_6 = var_coeffs;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = var_k;

    CHECK_OBJECT( tmp_subscript_name_6 );
    tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1143;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1143;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1143;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1143;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1143;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
    tmp_called_name_10 = var_fmt_float;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_imag );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "imag" );
        exception_tb = NULL;

        exception_lineno = 1144;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_7 = var_coeffs;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = var_k;

    CHECK_OBJECT( tmp_subscript_name_7 );
    tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1144;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1144;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1144;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1144;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1144;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1143;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coefstr;
        var_coefstr = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    branch_end_2:;
    branch_end_1:;
    tmp_left_name_4 = var_N;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = var_k;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_assign_source_12 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1146;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_power;
        var_power = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_power;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1147;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_3 = var_coefstr;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1148;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = const_str_plain_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1148;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
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
    tmp_left_name_5 = const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
    tmp_right_name_5 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_coefstr;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1149;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_2 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1149;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_4 = var_k;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1151;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_14 = const_str_plain_0;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_14;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_assign_source_15 = const_str_empty;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_15;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    branch_end_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_5 = var_power;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1155;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compare_left_6 = var_coefstr;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1156;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_6 = const_str_plain_0;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1156;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_16 = const_str_empty;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_16;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_7 = var_coefstr;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1158;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_7 = const_str_plain_b;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1158;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_17 = var_var;

    CHECK_OBJECT( tmp_assign_source_17 );
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_17;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_8;
    branch_no_8:;
    tmp_left_name_6 = const_str_digest_9b2a32a10f34854554acce4f0a1e5df6;
    tmp_right_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_coefstr;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1161;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_var;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_3 );
    tmp_assign_source_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1161;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    branch_end_8:;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_8 = var_coefstr;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1163;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_8 = const_str_plain_0;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1163;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_7 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_19 = const_str_empty;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_19;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_9 = var_coefstr;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1165;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_9 = const_str_plain_b;
    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1165;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_8 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_7 = const_str_digest_e830032217724d27845e33581eb30139;
    tmp_right_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_var;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_power;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_4 );
    tmp_assign_source_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1166;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    goto branch_end_10;
    branch_no_10:;
    tmp_left_name_8 = const_str_digest_692dc77e7651117b5059c24a0fc8e6ef;
    tmp_right_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_5 = var_coefstr;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1168;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_var;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_power;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 2, tmp_tuple_element_5 );
    tmp_assign_source_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1168;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    branch_end_10:;
    branch_end_9:;
    branch_end_6:;
    branch_end_3:;
    tmp_compare_left_10 = var_k;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1170;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_compare_left_11 = var_newstr;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1171;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_11 = const_str_empty;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1171;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_instance_1 = var_newstr;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1172;
    tmp_cond_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 1172;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_left_name_9 = const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
    tmp_right_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_thestr;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_right_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "thestr" );
        exception_tb = NULL;

        exception_lineno = 1173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_6 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_newstr;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_right_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 1173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_6 );
    tmp_assign_source_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1173;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_thestr;
        var_thestr = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    goto branch_end_13;
    branch_no_13:;
    tmp_left_name_10 = const_str_digest_37eb5527e8de3a4de5a4da95d734d451;
    tmp_right_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_thestr;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "thestr" );
        exception_tb = NULL;

        exception_lineno = 1175;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_newstr;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1175;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_7 );
    tmp_assign_source_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1175;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_thestr;
        var_thestr = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    branch_end_13:;
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_assign_source_24 = var_newstr;

    if ( tmp_assign_source_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1177;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_thestr;
        var_thestr = tmp_assign_source_24;
        Py_INCREF( var_thestr );
        Py_XDECREF( old );
    }

    branch_end_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1137;
        type_description_1 = "oooooooooo";
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

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__raise_power );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raise_power );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raise_power" );
        exception_tb = NULL;

        exception_lineno = 1178;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_thestr;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "thestr" );
        exception_tb = NULL;

        exception_lineno = 1178;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_99366efd4fbe5828a2d26d83844e711c->m_frame.f_lineno = 1178;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1178;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99366efd4fbe5828a2d26d83844e711c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99366efd4fbe5828a2d26d83844e711c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99366efd4fbe5828a2d26d83844e711c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99366efd4fbe5828a2d26d83844e711c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99366efd4fbe5828a2d26d83844e711c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99366efd4fbe5828a2d26d83844e711c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99366efd4fbe5828a2d26d83844e711c,
        type_description_1,
        par_self,
        var_thestr,
        var_var,
        var_coeffs,
        var_N,
        var_fmt_float,
        var_k,
        var_coefstr,
        var_power,
        var_newstr
    );


    // Release cached frame.
    if ( frame_99366efd4fbe5828a2d26d83844e711c == cache_frame_99366efd4fbe5828a2d26d83844e711c )
    {
        Py_DECREF( frame_99366efd4fbe5828a2d26d83844e711c );
    }
    cache_frame_99366efd4fbe5828a2d26d83844e711c = NULL;

    assertFrameObject( frame_99366efd4fbe5828a2d26d83844e711c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_23___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_thestr );
    var_thestr = NULL;

    CHECK_OBJECT( (PyObject *)var_var );
    Py_DECREF( var_var );
    var_var = NULL;

    CHECK_OBJECT( (PyObject *)var_coeffs );
    Py_DECREF( var_coeffs );
    var_coeffs = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_fmt_float );
    Py_DECREF( var_fmt_float );
    var_fmt_float = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_coefstr );
    var_coefstr = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_newstr );
    var_newstr = NULL;

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

    Py_XDECREF( var_thestr );
    var_thestr = NULL;

    Py_XDECREF( var_var );
    var_var = NULL;

    Py_XDECREF( var_coeffs );
    var_coeffs = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_fmt_float );
    var_fmt_float = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_coefstr );
    var_coefstr = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_newstr );
    var_newstr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_23___str__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_q = python_pars[ 0 ];
    PyObject *var_s = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    static struct Nuitka_FrameObject *cache_frame_8b8a2dd5d250439cb1d73b3048ed7a94 = NULL;

    struct Nuitka_FrameObject *frame_8b8a2dd5d250439cb1d73b3048ed7a94;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b8a2dd5d250439cb1d73b3048ed7a94, codeobj_8b8a2dd5d250439cb1d73b3048ed7a94, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_8b8a2dd5d250439cb1d73b3048ed7a94 = cache_frame_8b8a2dd5d250439cb1d73b3048ed7a94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b8a2dd5d250439cb1d73b3048ed7a94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b8a2dd5d250439cb1d73b3048ed7a94 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_2e159b87ee53f6cabc8ee285b77f805b;
    tmp_right_name_1 = par_q;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1132;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_1;

    tmp_called_instance_1 = var_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8b8a2dd5d250439cb1d73b3048ed7a94->m_frame.f_lineno = 1133;
    tmp_cond_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_endswith, &PyTuple_GET_ITEM( const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1133;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1133;
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
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -5;
    tmp_slice_source_1 = var_s;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_assign_source_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1134;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_s;
        assert( old != NULL );
        var_s = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b8a2dd5d250439cb1d73b3048ed7a94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b8a2dd5d250439cb1d73b3048ed7a94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b8a2dd5d250439cb1d73b3048ed7a94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b8a2dd5d250439cb1d73b3048ed7a94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b8a2dd5d250439cb1d73b3048ed7a94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b8a2dd5d250439cb1d73b3048ed7a94,
        type_description_1,
        par_q,
        var_s
    );


    // Release cached frame.
    if ( frame_8b8a2dd5d250439cb1d73b3048ed7a94 == cache_frame_8b8a2dd5d250439cb1d73b3048ed7a94 )
    {
        Py_DECREF( frame_8b8a2dd5d250439cb1d73b3048ed7a94 );
    }
    cache_frame_8b8a2dd5d250439cb1d73b3048ed7a94 = NULL;

    assertFrameObject( frame_8b8a2dd5d250439cb1d73b3048ed7a94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float );
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


static PyObject *impl_numpy$lib$polynomial$$$function_24___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_2b7db9972c25c2da1c920f44adbf6b9f = NULL;

    struct Nuitka_FrameObject *frame_2b7db9972c25c2da1c920f44adbf6b9f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b7db9972c25c2da1c920f44adbf6b9f, codeobj_2b7db9972c25c2da1c920f44adbf6b9f, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_2b7db9972c25c2da1c920f44adbf6b9f = cache_frame_2b7db9972c25c2da1c920f44adbf6b9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b7db9972c25c2da1c920f44adbf6b9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b7db9972c25c2da1c920f44adbf6b9f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 1181;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_val;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_2b7db9972c25c2da1c920f44adbf6b9f->m_frame.f_lineno = 1181;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b7db9972c25c2da1c920f44adbf6b9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b7db9972c25c2da1c920f44adbf6b9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b7db9972c25c2da1c920f44adbf6b9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b7db9972c25c2da1c920f44adbf6b9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b7db9972c25c2da1c920f44adbf6b9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b7db9972c25c2da1c920f44adbf6b9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b7db9972c25c2da1c920f44adbf6b9f,
        type_description_1,
        par_self,
        par_val
    );


    // Release cached frame.
    if ( frame_2b7db9972c25c2da1c920f44adbf6b9f == cache_frame_2b7db9972c25c2da1c920f44adbf6b9f )
    {
        Py_DECREF( frame_2b7db9972c25c2da1c920f44adbf6b9f );
    }
    cache_frame_2b7db9972c25c2da1c920f44adbf6b9f = NULL;

    assertFrameObject( frame_2b7db9972c25c2da1c920f44adbf6b9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_24___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_24___call__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_25___neg__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_76f184abcc67195df1e760688db8d931 = NULL;

    struct Nuitka_FrameObject *frame_76f184abcc67195df1e760688db8d931;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76f184abcc67195df1e760688db8d931, codeobj_76f184abcc67195df1e760688db8d931, module_numpy$lib$polynomial, sizeof(void *) );
    frame_76f184abcc67195df1e760688db8d931 = cache_frame_76f184abcc67195df1e760688db8d931;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76f184abcc67195df1e760688db8d931 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76f184abcc67195df1e760688db8d931 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1184;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1184;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1184;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_76f184abcc67195df1e760688db8d931->m_frame.f_lineno = 1184;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1184;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76f184abcc67195df1e760688db8d931 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76f184abcc67195df1e760688db8d931 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76f184abcc67195df1e760688db8d931 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76f184abcc67195df1e760688db8d931, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76f184abcc67195df1e760688db8d931->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76f184abcc67195df1e760688db8d931, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76f184abcc67195df1e760688db8d931,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_76f184abcc67195df1e760688db8d931 == cache_frame_76f184abcc67195df1e760688db8d931 )
    {
        Py_DECREF( frame_76f184abcc67195df1e760688db8d931 );
    }
    cache_frame_76f184abcc67195df1e760688db8d931 = NULL;

    assertFrameObject( frame_76f184abcc67195df1e760688db8d931 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_25___neg__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_25___neg__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_26___pos__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_26___pos__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_26___pos__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$polynomial$$$function_27___mul__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_b9e1e943ee4bff3f30a1f652f6ac55f2 = NULL;

    struct Nuitka_FrameObject *frame_b9e1e943ee4bff3f30a1f652f6ac55f2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9e1e943ee4bff3f30a1f652f6ac55f2, codeobj_b9e1e943ee4bff3f30a1f652f6ac55f2, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_b9e1e943ee4bff3f30a1f652f6ac55f2 = cache_frame_b9e1e943ee4bff3f30a1f652f6ac55f2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_b9e1e943ee4bff3f30a1f652f6ac55f2->m_frame.f_lineno = 1190;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1190;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_other;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_b9e1e943ee4bff3f30a1f652f6ac55f2->m_frame.f_lineno = 1191;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1191;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1193;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_b9e1e943ee4bff3f30a1f652f6ac55f2->m_frame.f_lineno = 1193;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1193;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1194;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1194;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1194;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coeffs );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 1194;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_b9e1e943ee4bff3f30a1f652f6ac55f2->m_frame.f_lineno = 1194;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1194;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_b9e1e943ee4bff3f30a1f652f6ac55f2->m_frame.f_lineno = 1194;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1194;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9e1e943ee4bff3f30a1f652f6ac55f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9e1e943ee4bff3f30a1f652f6ac55f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9e1e943ee4bff3f30a1f652f6ac55f2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9e1e943ee4bff3f30a1f652f6ac55f2,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 == cache_frame_b9e1e943ee4bff3f30a1f652f6ac55f2 )
    {
        Py_DECREF( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 );
    }
    cache_frame_b9e1e943ee4bff3f30a1f652f6ac55f2 = NULL;

    assertFrameObject( frame_b9e1e943ee4bff3f30a1f652f6ac55f2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_27___mul__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_27___mul__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_28___rmul__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_3c5b953eeeeeb723490253b0f613ec0e = NULL;

    struct Nuitka_FrameObject *frame_3c5b953eeeeeb723490253b0f613ec0e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3c5b953eeeeeb723490253b0f613ec0e, codeobj_3c5b953eeeeeb723490253b0f613ec0e, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_3c5b953eeeeeb723490253b0f613ec0e = cache_frame_3c5b953eeeeeb723490253b0f613ec0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c5b953eeeeeb723490253b0f613ec0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c5b953eeeeeb723490253b0f613ec0e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1197;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_3c5b953eeeeeb723490253b0f613ec0e->m_frame.f_lineno = 1197;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1197;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1197;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = par_other;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3c5b953eeeeeb723490253b0f613ec0e->m_frame.f_lineno = 1198;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1200;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_3c5b953eeeeeb723490253b0f613ec0e->m_frame.f_lineno = 1200;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1200;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coeffs );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 1201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3c5b953eeeeeb723490253b0f613ec0e->m_frame.f_lineno = 1201;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_3c5b953eeeeeb723490253b0f613ec0e->m_frame.f_lineno = 1201;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c5b953eeeeeb723490253b0f613ec0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c5b953eeeeeb723490253b0f613ec0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c5b953eeeeeb723490253b0f613ec0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c5b953eeeeeb723490253b0f613ec0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c5b953eeeeeb723490253b0f613ec0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c5b953eeeeeb723490253b0f613ec0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c5b953eeeeeb723490253b0f613ec0e,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_3c5b953eeeeeb723490253b0f613ec0e == cache_frame_3c5b953eeeeeb723490253b0f613ec0e )
    {
        Py_DECREF( frame_3c5b953eeeeeb723490253b0f613ec0e );
    }
    cache_frame_3c5b953eeeeeb723490253b0f613ec0e = NULL;

    assertFrameObject( frame_3c5b953eeeeeb723490253b0f613ec0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_28___rmul__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_28___rmul__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_29___add__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_81b00ead6ebf9111391ef084dfa681a3 = NULL;

    struct Nuitka_FrameObject *frame_81b00ead6ebf9111391ef084dfa681a3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_81b00ead6ebf9111391ef084dfa681a3, codeobj_81b00ead6ebf9111391ef084dfa681a3, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_81b00ead6ebf9111391ef084dfa681a3 = cache_frame_81b00ead6ebf9111391ef084dfa681a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81b00ead6ebf9111391ef084dfa681a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81b00ead6ebf9111391ef084dfa681a3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1204;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_81b00ead6ebf9111391ef084dfa681a3->m_frame.f_lineno = 1204;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1204;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyadd );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyadd" );
        exception_tb = NULL;

        exception_lineno = 1205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_81b00ead6ebf9111391ef084dfa681a3->m_frame.f_lineno = 1205;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_81b00ead6ebf9111391ef084dfa681a3->m_frame.f_lineno = 1205;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b00ead6ebf9111391ef084dfa681a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b00ead6ebf9111391ef084dfa681a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81b00ead6ebf9111391ef084dfa681a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81b00ead6ebf9111391ef084dfa681a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81b00ead6ebf9111391ef084dfa681a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81b00ead6ebf9111391ef084dfa681a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81b00ead6ebf9111391ef084dfa681a3,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_81b00ead6ebf9111391ef084dfa681a3 == cache_frame_81b00ead6ebf9111391ef084dfa681a3 )
    {
        Py_DECREF( frame_81b00ead6ebf9111391ef084dfa681a3 );
    }
    cache_frame_81b00ead6ebf9111391ef084dfa681a3 = NULL;

    assertFrameObject( frame_81b00ead6ebf9111391ef084dfa681a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_29___add__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_29___add__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_30___radd__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_bb9313ecae23b7243b1c7d85e037c2b4 = NULL;

    struct Nuitka_FrameObject *frame_bb9313ecae23b7243b1c7d85e037c2b4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb9313ecae23b7243b1c7d85e037c2b4, codeobj_bb9313ecae23b7243b1c7d85e037c2b4, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_bb9313ecae23b7243b1c7d85e037c2b4 = cache_frame_bb9313ecae23b7243b1c7d85e037c2b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb9313ecae23b7243b1c7d85e037c2b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb9313ecae23b7243b1c7d85e037c2b4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_bb9313ecae23b7243b1c7d85e037c2b4->m_frame.f_lineno = 1208;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyadd );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyadd" );
        exception_tb = NULL;

        exception_lineno = 1209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_bb9313ecae23b7243b1c7d85e037c2b4->m_frame.f_lineno = 1209;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_bb9313ecae23b7243b1c7d85e037c2b4->m_frame.f_lineno = 1209;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb9313ecae23b7243b1c7d85e037c2b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb9313ecae23b7243b1c7d85e037c2b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb9313ecae23b7243b1c7d85e037c2b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb9313ecae23b7243b1c7d85e037c2b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb9313ecae23b7243b1c7d85e037c2b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb9313ecae23b7243b1c7d85e037c2b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb9313ecae23b7243b1c7d85e037c2b4,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_bb9313ecae23b7243b1c7d85e037c2b4 == cache_frame_bb9313ecae23b7243b1c7d85e037c2b4 )
    {
        Py_DECREF( frame_bb9313ecae23b7243b1c7d85e037c2b4 );
    }
    cache_frame_bb9313ecae23b7243b1c7d85e037c2b4 = NULL;

    assertFrameObject( frame_bb9313ecae23b7243b1c7d85e037c2b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_30___radd__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_30___radd__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_31___pow__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *var_res = NULL;
    PyObject *var__ = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_9dfbd131f3c6457045cf6d6aa61d87f4 = NULL;

    struct Nuitka_FrameObject *frame_9dfbd131f3c6457045cf6d6aa61d87f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9dfbd131f3c6457045cf6d6aa61d87f4, codeobj_9dfbd131f3c6457045cf6d6aa61d87f4, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9dfbd131f3c6457045cf6d6aa61d87f4 = cache_frame_9dfbd131f3c6457045cf6d6aa61d87f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9dfbd131f3c6457045cf6d6aa61d87f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9dfbd131f3c6457045cf6d6aa61d87f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_val;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_9dfbd131f3c6457045cf6d6aa61d87f4->m_frame.f_lineno = 1212;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1212;
        type_description_1 = "oooo";
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
    tmp_int_arg_1 = par_val;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_compexpr_left_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_val;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_or_left_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 1212;
        type_description_1 = "oooo";
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
    tmp_compexpr_left_2 = par_val;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1212;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1212;
        type_description_1 = "oooo";
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
    tmp_make_exception_arg_1 = const_str_digest_0fd0577caa73fdd5d0bda8d20ce51418;
    frame_9dfbd131f3c6457045cf6d6aa61d87f4->m_frame.f_lineno = 1213;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1213;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = LIST_COPY( const_list_int_pos_1_list );
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_range_arg_1 = par_val;

    CHECK_OBJECT( tmp_range_arg_1 );
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1215;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1215;
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
            exception_lineno = 1215;
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
        PyObject *old = var__;
        var__ = tmp_assign_source_4;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1216;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1216;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_res;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 1216;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_9dfbd131f3c6457045cf6d6aa61d87f4->m_frame.f_lineno = 1216;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1216;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1215;
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1217;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_res;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 1217;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_9dfbd131f3c6457045cf6d6aa61d87f4->m_frame.f_lineno = 1217;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1217;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dfbd131f3c6457045cf6d6aa61d87f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dfbd131f3c6457045cf6d6aa61d87f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9dfbd131f3c6457045cf6d6aa61d87f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9dfbd131f3c6457045cf6d6aa61d87f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9dfbd131f3c6457045cf6d6aa61d87f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9dfbd131f3c6457045cf6d6aa61d87f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9dfbd131f3c6457045cf6d6aa61d87f4,
        type_description_1,
        par_self,
        par_val,
        var_res,
        var__
    );


    // Release cached frame.
    if ( frame_9dfbd131f3c6457045cf6d6aa61d87f4 == cache_frame_9dfbd131f3c6457045cf6d6aa61d87f4 )
    {
        Py_DECREF( frame_9dfbd131f3c6457045cf6d6aa61d87f4 );
    }
    cache_frame_9dfbd131f3c6457045cf6d6aa61d87f4 = NULL;

    assertFrameObject( frame_9dfbd131f3c6457045cf6d6aa61d87f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_31___pow__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_31___pow__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_32___sub__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_a8b99dea9de5943f97222e9b440e0bec = NULL;

    struct Nuitka_FrameObject *frame_a8b99dea9de5943f97222e9b440e0bec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8b99dea9de5943f97222e9b440e0bec, codeobj_a8b99dea9de5943f97222e9b440e0bec, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_a8b99dea9de5943f97222e9b440e0bec = cache_frame_a8b99dea9de5943f97222e9b440e0bec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8b99dea9de5943f97222e9b440e0bec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8b99dea9de5943f97222e9b440e0bec ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1220;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a8b99dea9de5943f97222e9b440e0bec->m_frame.f_lineno = 1220;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1220;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polysub );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polysub );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polysub" );
        exception_tb = NULL;

        exception_lineno = 1221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_a8b99dea9de5943f97222e9b440e0bec->m_frame.f_lineno = 1221;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_a8b99dea9de5943f97222e9b440e0bec->m_frame.f_lineno = 1221;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1221;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8b99dea9de5943f97222e9b440e0bec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8b99dea9de5943f97222e9b440e0bec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8b99dea9de5943f97222e9b440e0bec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8b99dea9de5943f97222e9b440e0bec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8b99dea9de5943f97222e9b440e0bec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8b99dea9de5943f97222e9b440e0bec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8b99dea9de5943f97222e9b440e0bec,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_a8b99dea9de5943f97222e9b440e0bec == cache_frame_a8b99dea9de5943f97222e9b440e0bec )
    {
        Py_DECREF( frame_a8b99dea9de5943f97222e9b440e0bec );
    }
    cache_frame_a8b99dea9de5943f97222e9b440e0bec = NULL;

    assertFrameObject( frame_a8b99dea9de5943f97222e9b440e0bec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_32___sub__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_32___sub__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_33___rsub__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_83333c6fdf8888715de3d66a6d6980c9 = NULL;

    struct Nuitka_FrameObject *frame_83333c6fdf8888715de3d66a6d6980c9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83333c6fdf8888715de3d66a6d6980c9, codeobj_83333c6fdf8888715de3d66a6d6980c9, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_83333c6fdf8888715de3d66a6d6980c9 = cache_frame_83333c6fdf8888715de3d66a6d6980c9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83333c6fdf8888715de3d66a6d6980c9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83333c6fdf8888715de3d66a6d6980c9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1224;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_83333c6fdf8888715de3d66a6d6980c9->m_frame.f_lineno = 1224;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1224;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1225;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polysub );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polysub );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polysub" );
        exception_tb = NULL;

        exception_lineno = 1225;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_other;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1225;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1225;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_83333c6fdf8888715de3d66a6d6980c9->m_frame.f_lineno = 1225;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1225;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_83333c6fdf8888715de3d66a6d6980c9->m_frame.f_lineno = 1225;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1225;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83333c6fdf8888715de3d66a6d6980c9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_83333c6fdf8888715de3d66a6d6980c9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83333c6fdf8888715de3d66a6d6980c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83333c6fdf8888715de3d66a6d6980c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83333c6fdf8888715de3d66a6d6980c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83333c6fdf8888715de3d66a6d6980c9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83333c6fdf8888715de3d66a6d6980c9,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_83333c6fdf8888715de3d66a6d6980c9 == cache_frame_83333c6fdf8888715de3d66a6d6980c9 )
    {
        Py_DECREF( frame_83333c6fdf8888715de3d66a6d6980c9 );
    }
    cache_frame_83333c6fdf8888715de3d66a6d6980c9 = NULL;

    assertFrameObject( frame_83333c6fdf8888715de3d66a6d6980c9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_33___rsub__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_33___rsub__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_34___div__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_983bb573810ee24e4dd61c17fd3f63f8 = NULL;

    struct Nuitka_FrameObject *frame_983bb573810ee24e4dd61c17fd3f63f8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_983bb573810ee24e4dd61c17fd3f63f8, codeobj_983bb573810ee24e4dd61c17fd3f63f8, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_983bb573810ee24e4dd61c17fd3f63f8 = cache_frame_983bb573810ee24e4dd61c17fd3f63f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_983bb573810ee24e4dd61c17fd3f63f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_983bb573810ee24e4dd61c17fd3f63f8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1228;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_983bb573810ee24e4dd61c17fd3f63f8->m_frame.f_lineno = 1228;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1228;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1228;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_other;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_2 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_983bb573810ee24e4dd61c17fd3f63f8->m_frame.f_lineno = 1229;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1229;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_983bb573810ee24e4dd61c17fd3f63f8->m_frame.f_lineno = 1231;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1231;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydiv );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polydiv" );
        exception_tb = NULL;

        exception_lineno = 1232;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_self;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_other;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_983bb573810ee24e4dd61c17fd3f63f8->m_frame.f_lineno = 1232;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1232;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_983bb573810ee24e4dd61c17fd3f63f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_983bb573810ee24e4dd61c17fd3f63f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_983bb573810ee24e4dd61c17fd3f63f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_983bb573810ee24e4dd61c17fd3f63f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_983bb573810ee24e4dd61c17fd3f63f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_983bb573810ee24e4dd61c17fd3f63f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_983bb573810ee24e4dd61c17fd3f63f8,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_983bb573810ee24e4dd61c17fd3f63f8 == cache_frame_983bb573810ee24e4dd61c17fd3f63f8 )
    {
        Py_DECREF( frame_983bb573810ee24e4dd61c17fd3f63f8 );
    }
    cache_frame_983bb573810ee24e4dd61c17fd3f63f8 = NULL;

    assertFrameObject( frame_983bb573810ee24e4dd61c17fd3f63f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_34___div__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_34___div__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_35___rdiv__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_50912faf69857aa7034337e0ca8f591d = NULL;

    struct Nuitka_FrameObject *frame_50912faf69857aa7034337e0ca8f591d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_50912faf69857aa7034337e0ca8f591d, codeobj_50912faf69857aa7034337e0ca8f591d, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_50912faf69857aa7034337e0ca8f591d = cache_frame_50912faf69857aa7034337e0ca8f591d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_50912faf69857aa7034337e0ca8f591d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_50912faf69857aa7034337e0ca8f591d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1237;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_50912faf69857aa7034337e0ca8f591d->m_frame.f_lineno = 1237;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1237;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1237;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = par_other;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_50912faf69857aa7034337e0ca8f591d->m_frame.f_lineno = 1238;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1238;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1240;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_50912faf69857aa7034337e0ca8f591d->m_frame.f_lineno = 1240;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1240;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydiv );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polydiv" );
        exception_tb = NULL;

        exception_lineno = 1241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_other;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_self;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_50912faf69857aa7034337e0ca8f591d->m_frame.f_lineno = 1241;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_50912faf69857aa7034337e0ca8f591d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_50912faf69857aa7034337e0ca8f591d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_50912faf69857aa7034337e0ca8f591d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_50912faf69857aa7034337e0ca8f591d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_50912faf69857aa7034337e0ca8f591d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_50912faf69857aa7034337e0ca8f591d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_50912faf69857aa7034337e0ca8f591d,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_50912faf69857aa7034337e0ca8f591d == cache_frame_50912faf69857aa7034337e0ca8f591d )
    {
        Py_DECREF( frame_50912faf69857aa7034337e0ca8f591d );
    }
    cache_frame_50912faf69857aa7034337e0ca8f591d = NULL;

    assertFrameObject( frame_50912faf69857aa7034337e0ca8f591d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_35___rdiv__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_35___rdiv__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_36___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static struct Nuitka_FrameObject *cache_frame_17fa89d480a569c537e579804b21f2d0 = NULL;

    struct Nuitka_FrameObject *frame_17fa89d480a569c537e579804b21f2d0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17fa89d480a569c537e579804b21f2d0, codeobj_17fa89d480a569c537e579804b21f2d0, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_17fa89d480a569c537e579804b21f2d0 = cache_frame_17fa89d480a569c537e579804b21f2d0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17fa89d480a569c537e579804b21f2d0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17fa89d480a569c537e579804b21f2d0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1246;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1246;
        type_description_1 = "oo";
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
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1248;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1248;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coeffs );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1248;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1248;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 1248;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coeffs );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1250;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_other;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_coeffs );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 1250;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1250;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_17fa89d480a569c537e579804b21f2d0->m_frame.f_lineno = 1250;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_all );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1250;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17fa89d480a569c537e579804b21f2d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_17fa89d480a569c537e579804b21f2d0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17fa89d480a569c537e579804b21f2d0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17fa89d480a569c537e579804b21f2d0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17fa89d480a569c537e579804b21f2d0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17fa89d480a569c537e579804b21f2d0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17fa89d480a569c537e579804b21f2d0,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_17fa89d480a569c537e579804b21f2d0 == cache_frame_17fa89d480a569c537e579804b21f2d0 )
    {
        Py_DECREF( frame_17fa89d480a569c537e579804b21f2d0 );
    }
    cache_frame_17fa89d480a569c537e579804b21f2d0 = NULL;

    assertFrameObject( frame_17fa89d480a569c537e579804b21f2d0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_36___eq__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_36___eq__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_37___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_operand_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_06f6ba904954c59a6d861d21e1ef2c9d = NULL;

    struct Nuitka_FrameObject *frame_06f6ba904954c59a6d861d21e1ef2c9d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_06f6ba904954c59a6d861d21e1ef2c9d, codeobj_06f6ba904954c59a6d861d21e1ef2c9d, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_06f6ba904954c59a6d861d21e1ef2c9d = cache_frame_06f6ba904954c59a6d861d21e1ef2c9d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_06f6ba904954c59a6d861d21e1ef2c9d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_06f6ba904954c59a6d861d21e1ef2c9d ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1253;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1253;
        type_description_1 = "oo";
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
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_06f6ba904954c59a6d861d21e1ef2c9d->m_frame.f_lineno = 1255;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___eq__, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1255;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1255;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06f6ba904954c59a6d861d21e1ef2c9d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_06f6ba904954c59a6d861d21e1ef2c9d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_06f6ba904954c59a6d861d21e1ef2c9d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06f6ba904954c59a6d861d21e1ef2c9d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06f6ba904954c59a6d861d21e1ef2c9d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06f6ba904954c59a6d861d21e1ef2c9d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_06f6ba904954c59a6d861d21e1ef2c9d,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_06f6ba904954c59a6d861d21e1ef2c9d == cache_frame_06f6ba904954c59a6d861d21e1ef2c9d )
    {
        Py_DECREF( frame_06f6ba904954c59a6d861d21e1ef2c9d );
    }
    cache_frame_06f6ba904954c59a6d861d21e1ef2c9d = NULL;

    assertFrameObject( frame_06f6ba904954c59a6d861d21e1ef2c9d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_37___ne__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_37___ne__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_38___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *var_ind = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_99dac4aefcd88df349d50327b9be6fcc = NULL;

    struct Nuitka_FrameObject *frame_99dac4aefcd88df349d50327b9be6fcc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99dac4aefcd88df349d50327b9be6fcc, codeobj_99dac4aefcd88df349d50327b9be6fcc, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_99dac4aefcd88df349d50327b9be6fcc = cache_frame_99dac4aefcd88df349d50327b9be6fcc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99dac4aefcd88df349d50327b9be6fcc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99dac4aefcd88df349d50327b9be6fcc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_order );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1259;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_val;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1259;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_ind == NULL );
    var_ind = tmp_assign_source_1;

    tmp_compare_left_1 = par_val;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_order );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 1260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_val;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1262;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coeffs );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1264;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_ind;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1264;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99dac4aefcd88df349d50327b9be6fcc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99dac4aefcd88df349d50327b9be6fcc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99dac4aefcd88df349d50327b9be6fcc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99dac4aefcd88df349d50327b9be6fcc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99dac4aefcd88df349d50327b9be6fcc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99dac4aefcd88df349d50327b9be6fcc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99dac4aefcd88df349d50327b9be6fcc,
        type_description_1,
        par_self,
        par_val,
        var_ind
    );


    // Release cached frame.
    if ( frame_99dac4aefcd88df349d50327b9be6fcc == cache_frame_99dac4aefcd88df349d50327b9be6fcc )
    {
        Py_DECREF( frame_99dac4aefcd88df349d50327b9be6fcc );
    }
    cache_frame_99dac4aefcd88df349d50327b9be6fcc = NULL;

    assertFrameObject( frame_99dac4aefcd88df349d50327b9be6fcc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_38___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_38___getitem__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_39___setitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_val = python_pars[ 2 ];
    PyObject *var_ind = NULL;
    PyObject *var_zr = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_b77b45e5797e67af140d0b323d090b41 = NULL;

    struct Nuitka_FrameObject *frame_b77b45e5797e67af140d0b323d090b41;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b77b45e5797e67af140d0b323d090b41, codeobj_b77b45e5797e67af140d0b323d090b41, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b77b45e5797e67af140d0b323d090b41 = cache_frame_b77b45e5797e67af140d0b323d090b41;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b77b45e5797e67af140d0b323d090b41 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b77b45e5797e67af140d0b323d090b41 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_order );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1267;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_key;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1267;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ind == NULL );
    var_ind = tmp_assign_source_1;

    tmp_compare_left_1 = par_key;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1268;
        type_description_1 = "ooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_f21e02642cb931dff513acf416b301f5;
    frame_b77b45e5797e67af140d0b323d090b41->m_frame.f_lineno = 1269;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1269;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_key;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_order );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1270;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 1270;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = par_key;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_order );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_coeffs );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_b77b45e5797e67af140d0b323d090b41->m_frame.f_lineno = 1271;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1271;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_2;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1272;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_concatenate );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1272;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_zr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_coeffs );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1272;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    frame_b77b45e5797e67af140d0b323d090b41->m_frame.f_lineno = 1272;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1272;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__coeffs, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 1272;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assign_source_3 = const_int_0;
    {
        PyObject *old = var_ind;
        assert( old != NULL );
        var_ind = tmp_assign_source_3;
        Py_INCREF( var_ind );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_ass_subvalue_1 = par_val;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__coeffs );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = var_ind;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1274;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b77b45e5797e67af140d0b323d090b41 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b77b45e5797e67af140d0b323d090b41 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b77b45e5797e67af140d0b323d090b41, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b77b45e5797e67af140d0b323d090b41->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b77b45e5797e67af140d0b323d090b41, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b77b45e5797e67af140d0b323d090b41,
        type_description_1,
        par_self,
        par_key,
        par_val,
        var_ind,
        var_zr
    );


    // Release cached frame.
    if ( frame_b77b45e5797e67af140d0b323d090b41 == cache_frame_b77b45e5797e67af140d0b323d090b41 )
    {
        Py_DECREF( frame_b77b45e5797e67af140d0b323d090b41 );
    }
    cache_frame_b77b45e5797e67af140d0b323d090b41 = NULL;

    assertFrameObject( frame_b77b45e5797e67af140d0b323d090b41 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_39___setitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_39___setitem__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_40___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b2d4a8690e13bd7b09b83d9ae6ac6871 = NULL;

    struct Nuitka_FrameObject *frame_b2d4a8690e13bd7b09b83d9ae6ac6871;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b2d4a8690e13bd7b09b83d9ae6ac6871, codeobj_b2d4a8690e13bd7b09b83d9ae6ac6871, module_numpy$lib$polynomial, sizeof(void *) );
    frame_b2d4a8690e13bd7b09b83d9ae6ac6871 = cache_frame_b2d4a8690e13bd7b09b83d9ae6ac6871;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1278;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1278;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2d4a8690e13bd7b09b83d9ae6ac6871, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2d4a8690e13bd7b09b83d9ae6ac6871->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2d4a8690e13bd7b09b83d9ae6ac6871, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2d4a8690e13bd7b09b83d9ae6ac6871,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 == cache_frame_b2d4a8690e13bd7b09b83d9ae6ac6871 )
    {
        Py_DECREF( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 );
    }
    cache_frame_b2d4a8690e13bd7b09b83d9ae6ac6871 = NULL;

    assertFrameObject( frame_b2d4a8690e13bd7b09b83d9ae6ac6871 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_40___iter__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_40___iter__ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_41_integ( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_facdc823fd55215c9e7ab3c4aa1de531 = NULL;

    struct Nuitka_FrameObject *frame_facdc823fd55215c9e7ab3c4aa1de531;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_facdc823fd55215c9e7ab3c4aa1de531, codeobj_facdc823fd55215c9e7ab3c4aa1de531, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_facdc823fd55215c9e7ab3c4aa1de531 = cache_frame_facdc823fd55215c9e7ab3c4aa1de531;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_facdc823fd55215c9e7ab3c4aa1de531 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_facdc823fd55215c9e7ab3c4aa1de531 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyint );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyint );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyint" );
        exception_tb = NULL;

        exception_lineno = 1291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 1291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_m;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_m;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_k;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_k;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_facdc823fd55215c9e7ab3c4aa1de531->m_frame.f_lineno = 1291;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_facdc823fd55215c9e7ab3c4aa1de531->m_frame.f_lineno = 1291;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_facdc823fd55215c9e7ab3c4aa1de531 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_facdc823fd55215c9e7ab3c4aa1de531 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_facdc823fd55215c9e7ab3c4aa1de531 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_facdc823fd55215c9e7ab3c4aa1de531, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_facdc823fd55215c9e7ab3c4aa1de531->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_facdc823fd55215c9e7ab3c4aa1de531, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_facdc823fd55215c9e7ab3c4aa1de531,
        type_description_1,
        par_self,
        par_m,
        par_k
    );


    // Release cached frame.
    if ( frame_facdc823fd55215c9e7ab3c4aa1de531 == cache_frame_facdc823fd55215c9e7ab3c4aa1de531 )
    {
        Py_DECREF( frame_facdc823fd55215c9e7ab3c4aa1de531 );
    }
    cache_frame_facdc823fd55215c9e7ab3c4aa1de531 = NULL;

    assertFrameObject( frame_facdc823fd55215c9e7ab3c4aa1de531 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_41_integ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_41_integ );
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


static PyObject *impl_numpy$lib$polynomial$$$function_42_deriv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_64ed722f49a4194e2a4b9c0e05ccfbcb = NULL;

    struct Nuitka_FrameObject *frame_64ed722f49a4194e2a4b9c0e05ccfbcb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_64ed722f49a4194e2a4b9c0e05ccfbcb, codeobj_64ed722f49a4194e2a4b9c0e05ccfbcb, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *) );
    frame_64ed722f49a4194e2a4b9c0e05ccfbcb = cache_frame_64ed722f49a4194e2a4b9c0e05ccfbcb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64ed722f49a4194e2a4b9c0e05ccfbcb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64ed722f49a4194e2a4b9c0e05ccfbcb ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyder" );
        exception_tb = NULL;

        exception_lineno = 1304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 1304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_m;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_m;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_64ed722f49a4194e2a4b9c0e05ccfbcb->m_frame.f_lineno = 1304;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_64ed722f49a4194e2a4b9c0e05ccfbcb->m_frame.f_lineno = 1304;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1304;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64ed722f49a4194e2a4b9c0e05ccfbcb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_64ed722f49a4194e2a4b9c0e05ccfbcb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64ed722f49a4194e2a4b9c0e05ccfbcb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64ed722f49a4194e2a4b9c0e05ccfbcb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64ed722f49a4194e2a4b9c0e05ccfbcb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64ed722f49a4194e2a4b9c0e05ccfbcb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64ed722f49a4194e2a4b9c0e05ccfbcb,
        type_description_1,
        par_self,
        par_m
    );


    // Release cached frame.
    if ( frame_64ed722f49a4194e2a4b9c0e05ccfbcb == cache_frame_64ed722f49a4194e2a4b9c0e05ccfbcb )
    {
        Py_DECREF( frame_64ed722f49a4194e2a4b9c0e05ccfbcb );
    }
    cache_frame_64ed722f49a4194e2a4b9c0e05ccfbcb = NULL;

    assertFrameObject( frame_64ed722f49a4194e2a4b9c0e05ccfbcb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_42_deriv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_42_deriv );
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



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_10_polydiv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_10_polydiv,
        const_str_plain_polydiv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_accf2b5853430ad285a95b42b2d50882,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ae8ef7cff1c65112641662cfd4904c7d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_11__raise_power( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_11__raise_power,
        const_str_plain__raise_power,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_77e47401d00de2a5a6d5aa3c0b41b5b9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_12_coeffs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_12_coeffs,
        const_str_plain_coeffs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2961595e5b37160000e4ff4a4188845d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_99f66efd49c976cdfe5915bd3dd44a4a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_13_coeffs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_13_coeffs,
        const_str_plain_coeffs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe4bd55113a1187fe0db1830319f8db9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_14_variable(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_14_variable,
        const_str_plain_variable,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5730782d5557a7a493c429e3955a3ad4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_4c4ee04be939a8ff5391803c933eb86b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_15_order(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_15_order,
        const_str_plain_order,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7778ad560f1065519cb63fd79a352bfe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ab4c9e853416c7271ef0f4718ef42aee,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_16_roots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_16_roots,
        const_str_plain_roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_af420ac53561e5e481d90adaa555af1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_2ff8e1a6b2f03c20d4b28cacd578e113,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_17__coeffs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_17__coeffs,
        const_str_plain__coeffs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b6c2b343e1f69cbf998d0f00d179c55,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_18__coeffs(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_18__coeffs,
        const_str_plain__coeffs,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7cf4ee1308fe5eb882b9401d698cdab0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_19___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_19___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_634a4e4548617e67f9873926360f9c76,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_1_poly(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_1_poly,
        const_str_plain_poly,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd59464fdbda75cdd28ade7d8c9d6b88,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_09c158c60390ce109dd1bc7de9f8a49c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_20___array__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_20___array__,
        const_str_plain___array__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_63c8d9577b7fa95780cd0f65d5d199d0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_21___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_21___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_490475c83d77cccadd827e4ac18f8236,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_22___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_22___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0e77f2baa13fbb45b486dad4a07dc477,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_23___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_23___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99366efd4fbe5828a2d26d83844e711c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_23___str__$$$function_1_fmt_float,
        const_str_plain_fmt_float,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b8a2dd5d250439cb1d73b3048ed7a94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_24___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_24___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2b7db9972c25c2da1c920f44adbf6b9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_25___neg__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_25___neg__,
        const_str_plain___neg__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_76f184abcc67195df1e760688db8d931,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_26___pos__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_26___pos__,
        const_str_plain___pos__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_748307b89e1527464c58ba504f5f46a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_27___mul__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_27___mul__,
        const_str_plain___mul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9e1e943ee4bff3f30a1f652f6ac55f2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_28___rmul__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_28___rmul__,
        const_str_plain___rmul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3c5b953eeeeeb723490253b0f613ec0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_29___add__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_29___add__,
        const_str_plain___add__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_81b00ead6ebf9111391ef084dfa681a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_2_roots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_2_roots,
        const_str_plain_roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d4c73cb707cc1993193fbed3d4f0e945,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_45d8880ac39afbe15a93a06962db39bb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_30___radd__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_30___radd__,
        const_str_plain___radd__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bb9313ecae23b7243b1c7d85e037c2b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_31___pow__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_31___pow__,
        const_str_plain___pow__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9dfbd131f3c6457045cf6d6aa61d87f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_32___sub__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_32___sub__,
        const_str_plain___sub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a8b99dea9de5943f97222e9b440e0bec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_33___rsub__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_33___rsub__,
        const_str_plain___rsub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_83333c6fdf8888715de3d66a6d6980c9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_34___div__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_34___div__,
        const_str_plain___div__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_983bb573810ee24e4dd61c17fd3f63f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_35___rdiv__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_35___rdiv__,
        const_str_plain___rdiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_50912faf69857aa7034337e0ca8f591d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_36___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_36___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_17fa89d480a569c537e579804b21f2d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_37___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_37___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_06f6ba904954c59a6d861d21e1ef2c9d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_38___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_38___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99dac4aefcd88df349d50327b9be6fcc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_39___setitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_39___setitem__,
        const_str_plain___setitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b77b45e5797e67af140d0b323d090b41,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_3_polyint( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_3_polyint,
        const_str_plain_polyint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b4562c0276b929f723e298d064423a1c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ac4e5511907cabbe407110fccb6e5898,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_40___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_40___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b2d4a8690e13bd7b09b83d9ae6ac6871,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_41_integ( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_41_integ,
        const_str_plain_integ,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_facdc823fd55215c9e7ab3c4aa1de531,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_cec87595b4737c124889189ff15d0b22,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_42_deriv( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_42_deriv,
        const_str_plain_deriv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_64ed722f49a4194e2a4b9c0e05ccfbcb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ab2bc23826697fad0288f5ff4e6158d3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_4_polyder( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_4_polyder,
        const_str_plain_polyder,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b606e62b8846481e0f12f03c25a38ba,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_125ec7974471c7c212f84a3304bc12c3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_5_polyfit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_5_polyfit,
        const_str_plain_polyfit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2a617f7fe3c15b608eb04cbbc8519d0b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_c5e87fd3910bc5f7cbeae51aebbc38c1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_6_polyval(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_6_polyval,
        const_str_plain_polyval,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed8e91d30180e945d728cd571eed0c12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_d025b8cc434c4be4e6c06e89082ea183,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_7_polyadd(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_7_polyadd,
        const_str_plain_polyadd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e639a202bf4636397229793c3ce75de,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_0db5f082e757bf000893d1070c5314d6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_8_polysub(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_8_polysub,
        const_str_plain_polysub,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5fc52a888c220081dd33442555c23d9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_b73629cbd250f78988da03d69fd963c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_9_polymul(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_9_polymul,
        const_str_plain_polymul,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9ce2267cad3697270584a418cfdc7c0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_4aa5fb15c76d22fba6c2db6cceed9a4d,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$polynomial =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.polynomial",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$polynomial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$polynomial );
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
    puts("numpy.lib.polynomial: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib.polynomial: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib$polynomial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$polynomial = Py_InitModule4(
        "numpy.lib.polynomial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$polynomial = PyModule_Create( &mdef_numpy$lib$polynomial );
#endif

    moduledict_numpy$lib$polynomial = MODULE_DICT( module_numpy$lib$polynomial );

    CHECK_OBJECT( module_numpy$lib$polynomial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a, module_numpy$lib$polynomial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var___hash__ = NULL;
    PyObject *outline_1_var_coeffs = NULL;
    PyObject *outline_1_var_variable = NULL;
    PyObject *outline_1_var_order = NULL;
    PyObject *outline_1_var_roots = NULL;
    PyObject *outline_1_var__coeffs = NULL;
    PyObject *outline_1_var_r = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_1_var_coef = NULL;
    PyObject *outline_1_var_coefficients = NULL;
    PyObject *outline_1_var_o = NULL;
    PyObject *outline_1_var___init__ = NULL;
    PyObject *outline_1_var___array__ = NULL;
    PyObject *outline_1_var___repr__ = NULL;
    PyObject *outline_1_var___len__ = NULL;
    PyObject *outline_1_var___str__ = NULL;
    PyObject *outline_1_var___call__ = NULL;
    PyObject *outline_1_var___neg__ = NULL;
    PyObject *outline_1_var___pos__ = NULL;
    PyObject *outline_1_var___mul__ = NULL;
    PyObject *outline_1_var___rmul__ = NULL;
    PyObject *outline_1_var___add__ = NULL;
    PyObject *outline_1_var___radd__ = NULL;
    PyObject *outline_1_var___pow__ = NULL;
    PyObject *outline_1_var___sub__ = NULL;
    PyObject *outline_1_var___rsub__ = NULL;
    PyObject *outline_1_var___div__ = NULL;
    PyObject *outline_1_var___truediv__ = NULL;
    PyObject *outline_1_var___rdiv__ = NULL;
    PyObject *outline_1_var___rtruediv__ = NULL;
    PyObject *outline_1_var___eq__ = NULL;
    PyObject *outline_1_var___ne__ = NULL;
    PyObject *outline_1_var___getitem__ = NULL;
    PyObject *outline_1_var___setitem__ = NULL;
    PyObject *outline_1_var___iter__ = NULL;
    PyObject *outline_1_var_integ = NULL;
    PyObject *outline_1_var_deriv = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_poly1d$assign_unpack_1__assign_source = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
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
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
    PyObject *tmp_dict_key_38;
    PyObject *tmp_dict_key_39;
    PyObject *tmp_dict_key_40;
    PyObject *tmp_dict_key_41;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
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
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_dict_value_38;
    PyObject *tmp_dict_value_39;
    PyObject *tmp_dict_value_40;
    PyObject *tmp_dict_value_41;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
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
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_17dbdf58d5f0462d53fb364c87aba630_2 = NULL;

    struct Nuitka_FrameObject *frame_17dbdf58d5f0462d53fb364c87aba630_2;

    struct Nuitka_FrameObject *frame_1e695da2a15c129e9ab6ee4b9c6349ce;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8d57b7b6e72d04b87b3e2a50f3755912;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f97212fd071cadf1857ba5f3b89db023;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_1e695da2a15c129e9ab6ee4b9c6349ce = MAKE_MODULE_FRAME( codeobj_1e695da2a15c129e9ab6ee4b9c6349ce, module_numpy$lib$polynomial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_1e695da2a15c129e9ab6ee4b9c6349ce );
    assert( Py_REFCNT( frame_1e695da2a15c129e9ab6ee4b9c6349ce ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_assign_source_8 = LIST_COPY( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_plain_re;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 11;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 12;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_digest_aa3423acdb6152e259f846c9911226b3;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX, tmp_assign_source_11 );
    tmp_name_name_4 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple;
    tmp_level_name_4 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 15;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_isscalar );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_abs );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_finfo );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_15 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_atleast_1d );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d, tmp_assign_source_16 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_hstack );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_hstack, tmp_assign_source_17 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_dot );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_dot, tmp_assign_source_18 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_array );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_19 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_ones );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_ones, tmp_assign_source_20 );
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

    tmp_name_name_5 = const_str_digest_4dee642e949d4b9ad453719dec9278da;
    tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_diag_str_plain_vander_tuple;
    tmp_level_name_5 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 17;
    tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_21;

    // Tried code:
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_diag );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_diag, tmp_assign_source_22 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_vander );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_vander, tmp_assign_source_23 );
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

    tmp_name_name_6 = const_str_digest_ade38aed73decbd99585ad80f3adae97;
    tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_trim_zeros_tuple;
    tmp_level_name_6 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 18;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_trim_zeros );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_trim_zeros, tmp_assign_source_24 );
    tmp_name_name_7 = const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
    tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple;
    tmp_level_name_7 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 19;
    tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_25;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_iscomplex );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_iscomplex, tmp_assign_source_26 );
    tmp_import_name_from_18 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_real );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real, tmp_assign_source_27 );
    tmp_import_name_from_19 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_imag );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_imag, tmp_assign_source_28 );
    tmp_import_name_from_20 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_mintypecode );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_mintypecode, tmp_assign_source_29 );
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

    tmp_name_name_8 = const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
    tmp_globals_name_8 = (PyObject *)moduledict_numpy$lib$polynomial;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple;
    tmp_level_name_8 = const_int_0;
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 20;
    tmp_assign_source_30 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_30;

    // Tried code:
    tmp_import_name_from_21 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_eigvals );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_eigvals, tmp_assign_source_31 );
    tmp_import_name_from_22 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_lstsq );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_32 );
    tmp_import_name_from_23 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_inv );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_inv, tmp_assign_source_33 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Tried code:
    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "UserWarning" );
        exception_tb = NULL;

        exception_lineno = 22;

        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_34;

    tmp_assign_source_36 = const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_36 );
    outline_0_var___module__ = tmp_assign_source_36;

    tmp_assign_source_37 = const_str_digest_a12ca88a2988b41a7bbf1fb0e924336b;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_37 );
    outline_0_var___doc__ = tmp_assign_source_37;

    // Tried code:
    tmp_outline_return_value_1 = _PyDict_NewPresized( 2 );
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
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_35 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_35;

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
    tmp_assign_source_38 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_6;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_39 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_6;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_39;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_9;
    }
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_6 );
    Py_XDECREF( exception_keeper_value_6 );
    Py_XDECREF( exception_keeper_tb_6 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_38 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_38;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_RankWarning;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_40;

    goto try_end_6;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_41 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_41 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_RankWarning, tmp_assign_source_41 );
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

    tmp_assign_source_42 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_1_poly(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly, tmp_assign_source_42 );
    tmp_assign_source_43 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_2_roots(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_roots, tmp_assign_source_43 );
    tmp_defaults_1 = const_tuple_int_pos_1_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_44 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_3_polyint( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyint, tmp_assign_source_44 );
    tmp_defaults_2 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_45 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_4_polyder( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyder, tmp_assign_source_45 );
    tmp_defaults_3 = const_tuple_none_false_none_false_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_46 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_5_polyfit( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyfit, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_6_polyval(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyval, tmp_assign_source_47 );
    tmp_assign_source_48 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_7_polyadd(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd, tmp_assign_source_48 );
    tmp_assign_source_49 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_8_polysub(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polysub, tmp_assign_source_49 );
    tmp_assign_source_50 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_9_polymul(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul, tmp_assign_source_50 );
    tmp_assign_source_51 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_10_polydiv(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv, tmp_assign_source_51 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 911;

        goto frame_exception_exit_1;
    }

    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 911;
    tmp_assign_source_52 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple, 0 ) );

    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 911;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__poly_mat, tmp_assign_source_52 );
    tmp_defaults_4 = const_tuple_int_pos_70_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_53 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_11__raise_power( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__raise_power, tmp_assign_source_53 );
    // Tried code:
    tmp_assign_source_55 = const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_55 );
    outline_1_var___module__ = tmp_assign_source_55;

    tmp_assign_source_56 = const_str_digest_1ed57e39ffcca0b15b9cb6b3f4b1fee7;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_56 );
    outline_1_var___doc__ = tmp_assign_source_56;

    tmp_assign_source_57 = Py_None;
    assert( outline_1_var___hash__ == NULL );
    Py_INCREF( tmp_assign_source_57 );
    outline_1_var___hash__ = tmp_assign_source_57;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_17dbdf58d5f0462d53fb364c87aba630_2, codeobj_17dbdf58d5f0462d53fb364c87aba630, module_numpy$lib$polynomial, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_17dbdf58d5f0462d53fb364c87aba630_2 = cache_frame_17dbdf58d5f0462d53fb364c87aba630_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_17dbdf58d5f0462d53fb364c87aba630_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_17dbdf58d5f0462d53fb364c87aba630_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_12_coeffs(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1041;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1041;
        type_description_2 = "oooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_coeffs == NULL );
    outline_1_var_coeffs = tmp_assign_source_58;

    tmp_called_instance_2 = outline_1_var_coeffs;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_5 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_13_coeffs(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1046;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_59 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_setter, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1046;
        type_description_2 = "ooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    {
        PyObject *old = outline_1_var_coeffs;
        assert( old != NULL );
        outline_1_var_coeffs = tmp_assign_source_59;
        Py_DECREF( old );
    }

    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_6 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_14_variable(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1052;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1052;
        type_description_2 = "ooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_variable == NULL );
    outline_1_var_variable = tmp_assign_source_60;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_7 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_15_order(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1058;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1058;
        type_description_2 = "oooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_order == NULL );
    outline_1_var_order = tmp_assign_source_61;

    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_8 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_16_roots(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1063;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1063;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var_roots == NULL );
    outline_1_var_roots = tmp_assign_source_62;

    tmp_called_name_6 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_9 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_17__coeffs(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1070;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1070;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_1_var__coeffs == NULL );
    outline_1_var__coeffs = tmp_assign_source_63;

    tmp_called_instance_3 = outline_1_var__coeffs;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_10 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_18__coeffs(  );
    frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame.f_lineno = 1073;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_64 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_setter, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1073;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    {
        PyObject *old = outline_1_var__coeffs;
        assert( old != NULL );
        outline_1_var__coeffs = tmp_assign_source_64;
        Py_DECREF( old );
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_17dbdf58d5f0462d53fb364c87aba630_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_17dbdf58d5f0462d53fb364c87aba630_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_17dbdf58d5f0462d53fb364c87aba630_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_17dbdf58d5f0462d53fb364c87aba630_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_17dbdf58d5f0462d53fb364c87aba630_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_17dbdf58d5f0462d53fb364c87aba630_2,
        type_description_2,
        outline_1_var___module__,
        outline_1_var___doc__,
        outline_1_var___hash__,
        outline_1_var_coeffs,
        outline_1_var_variable,
        outline_1_var_order,
        outline_1_var_roots,
        outline_1_var__coeffs,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_17dbdf58d5f0462d53fb364c87aba630_2 == cache_frame_17dbdf58d5f0462d53fb364c87aba630_2 )
    {
        Py_DECREF( frame_17dbdf58d5f0462d53fb364c87aba630_2 );
    }
    cache_frame_17dbdf58d5f0462d53fb364c87aba630_2 = NULL;

    assertFrameObject( frame_17dbdf58d5f0462d53fb364c87aba630_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_11;
    skip_nested_handling_1:;
    tmp_assign_source_65 = outline_1_var_roots;

    CHECK_OBJECT( tmp_assign_source_65 );
    assert( outline_1_var_r == NULL );
    Py_INCREF( tmp_assign_source_65 );
    outline_1_var_r = tmp_assign_source_65;

    tmp_assign_source_66 = outline_1_var_coeffs;

    CHECK_OBJECT( tmp_assign_source_66 );
    assert( tmp_poly1d$assign_unpack_1__assign_source == NULL );
    Py_INCREF( tmp_assign_source_66 );
    tmp_poly1d$assign_unpack_1__assign_source = tmp_assign_source_66;

    tmp_assign_source_67 = tmp_poly1d$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_67 );
    assert( outline_1_var_c == NULL );
    Py_INCREF( tmp_assign_source_67 );
    outline_1_var_c = tmp_assign_source_67;

    tmp_assign_source_68 = tmp_poly1d$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_68 );
    assert( outline_1_var_coef == NULL );
    Py_INCREF( tmp_assign_source_68 );
    outline_1_var_coef = tmp_assign_source_68;

    tmp_assign_source_69 = tmp_poly1d$assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_69 );
    assert( outline_1_var_coefficients == NULL );
    Py_INCREF( tmp_assign_source_69 );
    outline_1_var_coefficients = tmp_assign_source_69;

    CHECK_OBJECT( (PyObject *)tmp_poly1d$assign_unpack_1__assign_source );
    Py_DECREF( tmp_poly1d$assign_unpack_1__assign_source );
    tmp_poly1d$assign_unpack_1__assign_source = NULL;

    tmp_assign_source_70 = outline_1_var_order;

    CHECK_OBJECT( tmp_assign_source_70 );
    assert( outline_1_var_o == NULL );
    Py_INCREF( tmp_assign_source_70 );
    outline_1_var_o = tmp_assign_source_70;

    tmp_defaults_5 = const_tuple_false_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_71 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_19___init__( tmp_defaults_5 );
    assert( outline_1_var___init__ == NULL );
    outline_1_var___init__ = tmp_assign_source_71;

    tmp_defaults_6 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_72 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_20___array__( tmp_defaults_6 );
    assert( outline_1_var___array__ == NULL );
    outline_1_var___array__ = tmp_assign_source_72;

    tmp_assign_source_73 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_21___repr__(  );
    assert( outline_1_var___repr__ == NULL );
    outline_1_var___repr__ = tmp_assign_source_73;

    tmp_assign_source_74 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_22___len__(  );
    assert( outline_1_var___len__ == NULL );
    outline_1_var___len__ = tmp_assign_source_74;

    tmp_assign_source_75 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_23___str__(  );
    assert( outline_1_var___str__ == NULL );
    outline_1_var___str__ = tmp_assign_source_75;

    tmp_assign_source_76 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_24___call__(  );
    assert( outline_1_var___call__ == NULL );
    outline_1_var___call__ = tmp_assign_source_76;

    tmp_assign_source_77 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_25___neg__(  );
    assert( outline_1_var___neg__ == NULL );
    outline_1_var___neg__ = tmp_assign_source_77;

    tmp_assign_source_78 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_26___pos__(  );
    assert( outline_1_var___pos__ == NULL );
    outline_1_var___pos__ = tmp_assign_source_78;

    tmp_assign_source_79 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_27___mul__(  );
    assert( outline_1_var___mul__ == NULL );
    outline_1_var___mul__ = tmp_assign_source_79;

    tmp_assign_source_80 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_28___rmul__(  );
    assert( outline_1_var___rmul__ == NULL );
    outline_1_var___rmul__ = tmp_assign_source_80;

    tmp_assign_source_81 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_29___add__(  );
    assert( outline_1_var___add__ == NULL );
    outline_1_var___add__ = tmp_assign_source_81;

    tmp_assign_source_82 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_30___radd__(  );
    assert( outline_1_var___radd__ == NULL );
    outline_1_var___radd__ = tmp_assign_source_82;

    tmp_assign_source_83 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_31___pow__(  );
    assert( outline_1_var___pow__ == NULL );
    outline_1_var___pow__ = tmp_assign_source_83;

    tmp_assign_source_84 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_32___sub__(  );
    assert( outline_1_var___sub__ == NULL );
    outline_1_var___sub__ = tmp_assign_source_84;

    tmp_assign_source_85 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_33___rsub__(  );
    assert( outline_1_var___rsub__ == NULL );
    outline_1_var___rsub__ = tmp_assign_source_85;

    tmp_assign_source_86 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_34___div__(  );
    assert( outline_1_var___div__ == NULL );
    outline_1_var___div__ = tmp_assign_source_86;

    tmp_assign_source_87 = outline_1_var___div__;

    CHECK_OBJECT( tmp_assign_source_87 );
    assert( outline_1_var___truediv__ == NULL );
    Py_INCREF( tmp_assign_source_87 );
    outline_1_var___truediv__ = tmp_assign_source_87;

    tmp_assign_source_88 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_35___rdiv__(  );
    assert( outline_1_var___rdiv__ == NULL );
    outline_1_var___rdiv__ = tmp_assign_source_88;

    tmp_assign_source_89 = outline_1_var___rdiv__;

    CHECK_OBJECT( tmp_assign_source_89 );
    assert( outline_1_var___rtruediv__ == NULL );
    Py_INCREF( tmp_assign_source_89 );
    outline_1_var___rtruediv__ = tmp_assign_source_89;

    tmp_assign_source_90 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_36___eq__(  );
    assert( outline_1_var___eq__ == NULL );
    outline_1_var___eq__ = tmp_assign_source_90;

    tmp_assign_source_91 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_37___ne__(  );
    assert( outline_1_var___ne__ == NULL );
    outline_1_var___ne__ = tmp_assign_source_91;

    tmp_assign_source_92 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_38___getitem__(  );
    assert( outline_1_var___getitem__ == NULL );
    outline_1_var___getitem__ = tmp_assign_source_92;

    tmp_assign_source_93 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_39___setitem__(  );
    assert( outline_1_var___setitem__ == NULL );
    outline_1_var___setitem__ = tmp_assign_source_93;

    tmp_assign_source_94 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_40___iter__(  );
    assert( outline_1_var___iter__ == NULL );
    outline_1_var___iter__ = tmp_assign_source_94;

    tmp_defaults_7 = const_tuple_int_pos_1_int_0_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_95 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_41_integ( tmp_defaults_7 );
    assert( outline_1_var_integ == NULL );
    outline_1_var_integ = tmp_assign_source_95;

    tmp_defaults_8 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_96 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_42_deriv( tmp_defaults_8 );
    assert( outline_1_var_deriv == NULL );
    outline_1_var_deriv = tmp_assign_source_96;

    tmp_outline_return_value_3 = _PyDict_NewPresized( 39 );
    tmp_dict_value_3 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_1_var___doc__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_1_var___hash__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___hash__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_1_var_coeffs;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_coeffs;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_1_var_variable;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_variable;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_1_var_order;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_order;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_1_var_roots;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_roots;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_1_var__coeffs;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain__coeffs;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_1_var_r;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain_r;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_1_var_c;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain_c;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = outline_1_var_coef;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain_coef;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_1_var_coefficients;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain_coefficients;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = outline_1_var_o;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain_o;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = outline_1_var___init__;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = outline_1_var___array__;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain___array__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = outline_1_var___repr__;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain___repr__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = outline_1_var___len__;

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain___len__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = outline_1_var___str__;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain___str__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = outline_1_var___call__;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain___call__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = outline_1_var___neg__;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain___neg__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = outline_1_var___pos__;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain___pos__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = outline_1_var___mul__;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain___mul__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = outline_1_var___rmul__;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain___rmul__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = outline_1_var___add__;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain___add__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = outline_1_var___radd__;

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain___radd__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_28 = outline_1_var___pow__;

    CHECK_OBJECT( tmp_dict_value_28 );
    tmp_dict_key_28 = const_str_plain___pow__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_29 = outline_1_var___sub__;

    CHECK_OBJECT( tmp_dict_value_29 );
    tmp_dict_key_29 = const_str_plain___sub__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_30 = outline_1_var___rsub__;

    CHECK_OBJECT( tmp_dict_value_30 );
    tmp_dict_key_30 = const_str_plain___rsub__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_31 = outline_1_var___div__;

    CHECK_OBJECT( tmp_dict_value_31 );
    tmp_dict_key_31 = const_str_plain___div__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_32 = outline_1_var___truediv__;

    CHECK_OBJECT( tmp_dict_value_32 );
    tmp_dict_key_32 = const_str_plain___truediv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_32, tmp_dict_value_32 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_33 = outline_1_var___rdiv__;

    CHECK_OBJECT( tmp_dict_value_33 );
    tmp_dict_key_33 = const_str_plain___rdiv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_33, tmp_dict_value_33 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_34 = outline_1_var___rtruediv__;

    CHECK_OBJECT( tmp_dict_value_34 );
    tmp_dict_key_34 = const_str_plain___rtruediv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_34, tmp_dict_value_34 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_35 = outline_1_var___eq__;

    CHECK_OBJECT( tmp_dict_value_35 );
    tmp_dict_key_35 = const_str_plain___eq__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_35, tmp_dict_value_35 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_36 = outline_1_var___ne__;

    CHECK_OBJECT( tmp_dict_value_36 );
    tmp_dict_key_36 = const_str_plain___ne__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_36, tmp_dict_value_36 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_37 = outline_1_var___getitem__;

    CHECK_OBJECT( tmp_dict_value_37 );
    tmp_dict_key_37 = const_str_plain___getitem__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_37, tmp_dict_value_37 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_38 = outline_1_var___setitem__;

    CHECK_OBJECT( tmp_dict_value_38 );
    tmp_dict_key_38 = const_str_plain___setitem__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_38, tmp_dict_value_38 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_39 = outline_1_var___iter__;

    CHECK_OBJECT( tmp_dict_value_39 );
    tmp_dict_key_39 = const_str_plain___iter__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_39, tmp_dict_value_39 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_40 = outline_1_var_integ;

    CHECK_OBJECT( tmp_dict_value_40 );
    tmp_dict_key_40 = const_str_plain_integ;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_40, tmp_dict_value_40 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_41 = outline_1_var_deriv;

    CHECK_OBJECT( tmp_dict_value_41 );
    tmp_dict_key_41 = const_str_plain_deriv;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_41, tmp_dict_value_41 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___hash__ );
    Py_DECREF( outline_1_var___hash__ );
    outline_1_var___hash__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_coeffs );
    Py_DECREF( outline_1_var_coeffs );
    outline_1_var_coeffs = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_variable );
    Py_DECREF( outline_1_var_variable );
    outline_1_var_variable = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_order );
    Py_DECREF( outline_1_var_order );
    outline_1_var_order = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_roots );
    Py_DECREF( outline_1_var_roots );
    outline_1_var_roots = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__coeffs );
    Py_DECREF( outline_1_var__coeffs );
    outline_1_var__coeffs = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_r );
    Py_DECREF( outline_1_var_r );
    outline_1_var_r = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_c );
    Py_DECREF( outline_1_var_c );
    outline_1_var_c = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_coef );
    Py_DECREF( outline_1_var_coef );
    outline_1_var_coef = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_coefficients );
    Py_DECREF( outline_1_var_coefficients );
    outline_1_var_coefficients = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_o );
    Py_DECREF( outline_1_var_o );
    outline_1_var_o = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___init__ );
    Py_DECREF( outline_1_var___init__ );
    outline_1_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___array__ );
    Py_DECREF( outline_1_var___array__ );
    outline_1_var___array__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___repr__ );
    Py_DECREF( outline_1_var___repr__ );
    outline_1_var___repr__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___len__ );
    Py_DECREF( outline_1_var___len__ );
    outline_1_var___len__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___str__ );
    Py_DECREF( outline_1_var___str__ );
    outline_1_var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___call__ );
    Py_DECREF( outline_1_var___call__ );
    outline_1_var___call__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___neg__ );
    Py_DECREF( outline_1_var___neg__ );
    outline_1_var___neg__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___pos__ );
    Py_DECREF( outline_1_var___pos__ );
    outline_1_var___pos__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___mul__ );
    Py_DECREF( outline_1_var___mul__ );
    outline_1_var___mul__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___rmul__ );
    Py_DECREF( outline_1_var___rmul__ );
    outline_1_var___rmul__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___add__ );
    Py_DECREF( outline_1_var___add__ );
    outline_1_var___add__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___radd__ );
    Py_DECREF( outline_1_var___radd__ );
    outline_1_var___radd__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___pow__ );
    Py_DECREF( outline_1_var___pow__ );
    outline_1_var___pow__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___sub__ );
    Py_DECREF( outline_1_var___sub__ );
    outline_1_var___sub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___rsub__ );
    Py_DECREF( outline_1_var___rsub__ );
    outline_1_var___rsub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___div__ );
    Py_DECREF( outline_1_var___div__ );
    outline_1_var___div__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___truediv__ );
    Py_DECREF( outline_1_var___truediv__ );
    outline_1_var___truediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___rdiv__ );
    Py_DECREF( outline_1_var___rdiv__ );
    outline_1_var___rdiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___rtruediv__ );
    Py_DECREF( outline_1_var___rtruediv__ );
    outline_1_var___rtruediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___eq__ );
    Py_DECREF( outline_1_var___eq__ );
    outline_1_var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___ne__ );
    Py_DECREF( outline_1_var___ne__ );
    outline_1_var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___getitem__ );
    Py_DECREF( outline_1_var___getitem__ );
    outline_1_var___getitem__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___setitem__ );
    Py_DECREF( outline_1_var___setitem__ );
    outline_1_var___setitem__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___iter__ );
    Py_DECREF( outline_1_var___iter__ );
    outline_1_var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_integ );
    Py_DECREF( outline_1_var_integ );
    outline_1_var_integ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var_deriv );
    Py_DECREF( outline_1_var_deriv );
    outline_1_var_deriv = NULL;

    goto outline_result_3;
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

    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___hash__ );
    Py_DECREF( outline_1_var___hash__ );
    outline_1_var___hash__ = NULL;

    Py_XDECREF( outline_1_var_coeffs );
    outline_1_var_coeffs = NULL;

    Py_XDECREF( outline_1_var_variable );
    outline_1_var_variable = NULL;

    Py_XDECREF( outline_1_var_order );
    outline_1_var_order = NULL;

    Py_XDECREF( outline_1_var_roots );
    outline_1_var_roots = NULL;

    Py_XDECREF( outline_1_var__coeffs );
    outline_1_var__coeffs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 939;
    goto try_except_handler_10;
    outline_result_3:;
    tmp_assign_source_54 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_54;

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
    tmp_assign_source_97 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 939;

        goto try_except_handler_10;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_97 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_97 );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_97;

    tmp_called_name_7 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_7 );
    tmp_args_element_name_11 = const_str_plain_poly1d;
    tmp_args_element_name_12 = const_tuple_type_object_tuple;
    tmp_args_element_name_13 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 939;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 939;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_98;

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

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_99 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_99 );
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d, tmp_assign_source_99 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 1308;

        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_simplefilter );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1308;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = const_str_plain_always;
    tmp_args_element_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_RankWarning );

    if (unlikely( tmp_args_element_name_15 == NULL ))
    {
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankWarning );
    }

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RankWarning" );
        exception_tb = NULL;

        exception_lineno = 1308;

        goto frame_exception_exit_1;
    }

    frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame.f_lineno = 1308;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1308;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e695da2a15c129e9ab6ee4b9c6349ce );
#endif
    popFrameStack();

    assertFrameObject( frame_1e695da2a15c129e9ab6ee4b9c6349ce );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e695da2a15c129e9ab6ee4b9c6349ce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e695da2a15c129e9ab6ee4b9c6349ce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e695da2a15c129e9ab6ee4b9c6349ce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e695da2a15c129e9ab6ee4b9c6349ce, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_numpy$lib$polynomial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
