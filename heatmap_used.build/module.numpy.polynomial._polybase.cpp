/* Generated code for Python source for module 'numpy.polynomial._polybase'
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

/* The _module_numpy$polynomial$_polybase is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$_polybase;
PyDictObject *moduledict_numpy$polynomial$_polybase;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_b42beed796d24bd6809cc4eec294d8d4;
extern PyObject *const_str_plain___radd__;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_int_pos_100;
static PyObject *const_tuple_efb99f319903cc1e133aba640e0df28e_tuple;
static PyObject *const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple;
extern PyObject *const_str_plain___array_ufunc__;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
static PyObject *const_str_plain_has_samewindow;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_c1173a617796a82a0814a08106680f7a_tuple;
extern PyObject *const_str_plain_window;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_as_series;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple;
extern PyObject *const_str_plain___add__;
static PyObject *const_str_plain_basis;
extern PyObject *const_str_plain_maxpower;
extern PyObject *const_str_plain__der;
extern PyObject *const_str_plain___sub__;
static PyObject *const_str_digest_ebed222bae14d5baea3d6e14020bd482;
extern PyObject *const_str_plain_trimcoef;
static PyObject *const_str_plain_rnew;
extern PyObject *const_str_plain__fit;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_deriv;
static PyObject *const_str_digest_e7f38fd6b94eee09ef46595bfaa612f6;
extern PyObject *const_str_plain__pow;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain___ne__;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_Number;
static PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_d3cd65e570b4f8f57237436a36829fff;
extern PyObject *const_str_plain_ideg;
static PyObject *const_str_digest_5c3873fd0d998cd8e83d826364b73c58;
extern PyObject *const_str_plain_ABCPolyBase;
extern PyObject *const_str_plain_w;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_off;
static PyObject *const_str_digest_ef48f7ae9a091820ceb23e5c5c670243;
static PyObject *const_tuple_d191ce86201e61965aeff10c517a6f57_tuple;
static PyObject *const_str_digest_98e31202befde89b11571b0707e8d968;
extern PyObject *const_dict_ee9b50b2ea01af7ea63a79da3e3468b3;
static PyObject *const_str_plain_fit;
extern PyObject *const_str_plain_mapparms;
static PyObject *const_str_plain_othercoef;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_list_int_0_list;
static PyObject *const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple;
extern PyObject *const_str_plain_lbnd;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain___mul__;
extern PyObject *const_str_plain_integ;
static PyObject *const_tuple_str_plain_self_str_plain_dict_tuple;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_55d9eb6c088724632d5321a71831e4a8;
static PyObject *const_str_plain_status;
static PyObject *const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple;
static PyObject *const_str_plain_form;
static PyObject *const_tuple_ded789bdecfc4517109b0476a737849d_tuple;
extern PyObject *const_str_plain_numbers;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_xnew;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_digest_67732dba2209beca762664be526ce3ff;
static PyObject *const_str_digest_39da9fb8ae8d560bac2af4fe641d657e;
extern PyObject *const_str_plain___rfloordiv__;
static PyObject *const_str_plain_abstractproperty;
static PyObject *const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_07471bd0a9d392cf7751549f090c291f_tuple;
static PyObject *const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple;
static PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_domain;
static PyObject *const_str_plain_cutdeg;
static PyObject *const_tuple_str_plain_self_str_plain_deg_tuple;
static PyObject *const_str_digest_acf557064045411a8e7be3ebc065dd9c;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain___floordiv__;
static PyObject *const_str_digest_5dae058d009b7a6670aa297718f6267e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_plain_has_samecoef;
static PyObject *const_str_plain__get_coefficients;
static PyObject *const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple;
extern PyObject *const_str_plain___rdiv__;
static PyObject *const_str_digest_2840a70f92a629f3a4870b2cdbc33511;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___mod__;
static PyObject *const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_10042ca87e4ab2b5b839d8b6298c44c1;
extern PyObject *const_str_plain___rmul__;
extern PyObject *const_str_plain__mul;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain__line;
static PyObject *const_tuple_str_plain_self_str_plain_ret_tuple;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_plain_Number_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_8f0d4dcf823408b98925ed1444c1d1eb;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_has_samedomain;
extern PyObject *const_str_plain__sub;
extern PyObject *const_str_plain__div;
extern PyObject *const_str_plain___rtruediv__;
static PyObject *const_str_digest_78fa2448fcb3c239d1a740c0b7d98b19;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple;
static PyObject *const_str_digest_b245160a1e9321f457c87c4934f565c8;
static PyObject *const_str_digest_058dc8328bcd097c8ca82772f5b011b9;
static PyObject *const_str_digest_c552a162a573bebaa10322a24f45277b;
extern PyObject *const_str_plain___pos__;
static PyObject *const_str_plain_fromroots;
static PyObject *const_str_digest_f8e029e75f7a514fa730097cbce45802;
static PyObject *const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___hash__;
static PyObject *const_str_plain_has_sametype;
extern PyObject *const_str_plain___divmod__;
extern PyObject *const_str_plain___truediv__;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_coef;
static PyObject *const_str_plain_degree;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_pu;
static PyObject *const_str_digest_1664534d90db32878ffa9c8a6f0f0fb4;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain_scl;
extern PyObject *const_str_plain_rem;
static PyObject *const_str_digest_64ef2c5ae273200dd6a59733c0c92917;
extern PyObject *const_str_plain__int;
extern PyObject *const_str_plain_other;
static PyObject *const_str_plain_truncate;
static PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_res;
static PyObject *const_tuple_str_plain_self_str_plain_roots_tuple;
static PyObject *const_str_digest_3f3e88a2b5ee9a848a5e07299875e4e1;
extern PyObject *const_str_plain_nickname;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain__val;
extern PyObject *const_str_plain_mapdomain;
static PyObject *const_str_digest_2b9498cf29ec706ed018bb8515699045;
static PyObject *const_str_digest_a621aebae32306063eedea7c4a7bdebd;
extern PyObject *const_str_plain_trim;
extern PyObject *const_str_plain___rdivmod__;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple;
extern PyObject *const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
static PyObject *const_str_digest_7aad98442226938245bb06c8fd0bcdbf;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain___div__;
extern PyObject *const_str_plain_roots;
extern PyObject *const_str_plain__add;
extern PyObject *const_str_plain___neg__;
extern PyObject *const_str_plain_full;
static PyObject *const_list_str_plain_ABCPolyBase_list;
extern PyObject *const_str_plain_deg;
extern PyObject *const_str_plain__fromroots;
extern PyObject *const_str_plain_cast;
extern PyObject *const_str_plain__roots;
static PyObject *const_str_digest_070d2df2cae1dff89fa1d1b4ead50a9e;
extern PyObject *const_str_plain_convert;
static PyObject *const_str_plain_series;
extern PyObject *const_str_plain_quo;
static PyObject *const_str_plain_isize;
extern PyObject *const_str_plain___rmod__;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___pow__;
static PyObject *const_tuple_int_pos_100_none_tuple;
extern PyObject *const_tuple_str_plain_polyutils_tuple;
extern PyObject *const_str_plain___len__;
static PyObject *const_str_digest_5c1672ce023f467aa593f17c1716b98a;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_71dffe55807a4844520f7d312dc1cdd9;
static PyObject *const_str_digest_7906fb1fdba98836d03daef6c58d7f59;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_a8b047c55fad201071d372dfb7ac4cca;
static PyObject *const_tuple_none_none_false_none_none_tuple;
static PyObject *const_str_digest_5cff95afec2fedfa77694f6d8c7142ca;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple;
static PyObject *const_str_digest_151b92710a27f5234231f69b96a29708;
static PyObject *const_str_digest_c6764a6d39f227f5a7a04f77b96f3b53;
extern PyObject *const_str_plain_polyutils;
extern PyObject *const_str_plain___rsub__;
static PyObject *const_tuple_a6334f3be40d0f7326867a3610feb525_tuple;
extern PyObject *const_str_plain_identity;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_b6697fa852b58bbd73e9a86b2370791e;
static PyObject *const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple;
extern PyObject *const_str_plain_getdomain;
static PyObject *const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple;
extern PyObject *const_str_plain___call__;
static PyObject *const_str_plain_ABCMeta;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b42beed796d24bd6809cc4eec294d8d4 = UNSTREAM_STRING( &constant_bin[ 1273006 ], 111, 0 );
    const_tuple_efb99f319903cc1e133aba640e0df28e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 1, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 2, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    const_str_plain_has_samewindow = UNSTREAM_STRING( &constant_bin[ 1273117 ], 14, 1 );
    const_tuple_c1173a617796a82a0814a08106680f7a_tuple = PyTuple_New( 3 );
    const_str_plain_ABCMeta = UNSTREAM_STRING( &constant_bin[ 1273131 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_c1173a617796a82a0814a08106680f7a_tuple, 0, const_str_plain_ABCMeta ); Py_INCREF( const_str_plain_ABCMeta );
    const_str_plain_abstractmethod = UNSTREAM_STRING( &constant_bin[ 1273138 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_c1173a617796a82a0814a08106680f7a_tuple, 1, const_str_plain_abstractmethod ); Py_INCREF( const_str_plain_abstractmethod );
    const_str_plain_abstractproperty = UNSTREAM_STRING( &constant_bin[ 1273152 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_c1173a617796a82a0814a08106680f7a_tuple, 2, const_str_plain_abstractproperty ); Py_INCREF( const_str_plain_abstractproperty );
    const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_basis = UNSTREAM_STRING( &constant_bin[ 1272532 ], 5, 1 );
    const_str_digest_ebed222bae14d5baea3d6e14020bd482 = UNSTREAM_STRING( &constant_bin[ 1273168 ], 26, 0 );
    const_str_plain_rnew = UNSTREAM_STRING( &constant_bin[ 1273194 ], 4, 1 );
    const_str_digest_e7f38fd6b94eee09ef46595bfaa612f6 = UNSTREAM_STRING( &constant_bin[ 1273198 ], 785, 0 );
    const_str_plain_Number = UNSTREAM_STRING( &constant_bin[ 35138 ], 6, 1 );
    const_str_digest_d3cd65e570b4f8f57237436a36829fff = UNSTREAM_STRING( &constant_bin[ 1273983 ], 59, 0 );
    const_str_digest_5c3873fd0d998cd8e83d826364b73c58 = UNSTREAM_STRING( &constant_bin[ 1274042 ], 958, 0 );
    const_str_digest_ef48f7ae9a091820ceb23e5c5c670243 = UNSTREAM_STRING( &constant_bin[ 1275000 ], 1442, 0 );
    const_tuple_d191ce86201e61965aeff10c517a6f57_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 3, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_98e31202befde89b11571b0707e8d968 = UNSTREAM_STRING( &constant_bin[ 1276442 ], 319, 0 );
    const_str_plain_fit = UNSTREAM_STRING( &constant_bin[ 109762 ], 3, 1 );
    const_str_plain_othercoef = UNSTREAM_STRING( &constant_bin[ 1276761 ], 9, 1 );
    const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 4, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 5, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 6, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 7, const_str_plain_rnew ); Py_INCREF( const_str_plain_rnew );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 8, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_tuple_str_plain_self_str_plain_dict_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dict_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_dict = UNSTREAM_STRING( &constant_bin[ 13871 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dict_tuple, 1, const_str_plain_dict ); Py_INCREF( const_str_plain_dict );
    const_str_digest_55d9eb6c088724632d5321a71831e4a8 = UNSTREAM_STRING( &constant_bin[ 1276770 ], 14, 0 );
    const_str_plain_status = UNSTREAM_STRING( &constant_bin[ 341774 ], 6, 1 );
    const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 3, const_str_plain_lbnd ); Py_INCREF( const_str_plain_lbnd );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 4, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 5, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 6, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_plain_form = UNSTREAM_STRING( &constant_bin[ 2821 ], 4, 1 );
    const_tuple_ded789bdecfc4517109b0476a737849d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1276784 ], 909 );
    const_str_digest_67732dba2209beca762664be526ce3ff = UNSTREAM_STRING( &constant_bin[ 1277693 ], 14, 0 );
    const_str_digest_39da9fb8ae8d560bac2af4fe641d657e = UNSTREAM_STRING( &constant_bin[ 1277707 ], 35, 0 );
    const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 1, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 2, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 3, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 4, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 5, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_07471bd0a9d392cf7751549f090c291f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 1, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    const_str_plain_series = UNSTREAM_STRING( &constant_bin[ 556172 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 1, const_str_plain_series ); Py_INCREF( const_str_plain_series );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    const_str_plain_abc = UNSTREAM_STRING( &constant_bin[ 263866 ], 3, 1 );
    const_str_plain_cutdeg = UNSTREAM_STRING( &constant_bin[ 1277543 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_deg_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_deg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_deg_tuple, 1, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    const_str_digest_acf557064045411a8e7be3ebc065dd9c = UNSTREAM_STRING( &constant_bin[ 1277742 ], 822, 0 );
    const_str_digest_5dae058d009b7a6670aa297718f6267e = UNSTREAM_STRING( &constant_bin[ 1278564 ], 258, 0 );
    const_str_plain_has_samecoef = UNSTREAM_STRING( &constant_bin[ 1277037 ], 12, 1 );
    const_str_plain__get_coefficients = UNSTREAM_STRING( &constant_bin[ 1277109 ], 17, 1 );
    const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 1, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 4, const_str_plain_ideg ); Py_INCREF( const_str_plain_ideg );
    const_str_digest_2840a70f92a629f3a4870b2cdbc33511 = UNSTREAM_STRING( &constant_bin[ 1278822 ], 23, 0 );
    const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 1, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 2, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 3, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    const_str_digest_10042ca87e4ab2b5b839d8b6298c44c1 = UNSTREAM_STRING( &constant_bin[ 1278845 ], 284, 0 );
    const_tuple_str_plain_self_str_plain_ret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ret_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ret_tuple, 1, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_str_plain_Number_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Number_tuple, 0, const_str_plain_Number ); Py_INCREF( const_str_plain_Number );
    const_str_digest_8f0d4dcf823408b98925ed1444c1d1eb = UNSTREAM_STRING( &constant_bin[ 1279129 ], 32, 0 );
    const_str_plain_has_samedomain = UNSTREAM_STRING( &constant_bin[ 1277054 ], 14, 1 );
    const_str_digest_78fa2448fcb3c239d1a740c0b7d98b19 = UNSTREAM_STRING( &constant_bin[ 1279161 ], 1011, 0 );
    const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_digest_b245160a1e9321f457c87c4934f565c8 = UNSTREAM_STRING( &constant_bin[ 1280172 ], 811, 0 );
    const_str_digest_058dc8328bcd097c8ca82772f5b011b9 = UNSTREAM_STRING( &constant_bin[ 1280983 ], 1036, 0 );
    const_str_digest_c552a162a573bebaa10322a24f45277b = UNSTREAM_STRING( &constant_bin[ 1282019 ], 639, 0 );
    const_str_plain_fromroots = UNSTREAM_STRING( &constant_bin[ 1277023 ], 9, 1 );
    const_str_digest_f8e029e75f7a514fa730097cbce45802 = UNSTREAM_STRING( &constant_bin[ 1282658 ], 14, 0 );
    const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 2, const_str_plain_quo ); Py_INCREF( const_str_plain_quo );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 3, const_str_plain_rem ); Py_INCREF( const_str_plain_rem );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_has_sametype = UNSTREAM_STRING( &constant_bin[ 1277092 ], 12, 1 );
    const_str_plain_degree = UNSTREAM_STRING( &constant_bin[ 779196 ], 6, 1 );
    const_str_digest_1664534d90db32878ffa9c8a6f0f0fb4 = UNSTREAM_STRING( &constant_bin[ 1282672 ], 3194, 0 );
    const_str_digest_64ef2c5ae273200dd6a59733c0c92917 = UNSTREAM_STRING( &constant_bin[ 1285866 ], 651, 0 );
    const_str_plain_truncate = UNSTREAM_STRING( &constant_bin[ 120985 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_roots_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_roots_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_roots_tuple, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_str_digest_3f3e88a2b5ee9a848a5e07299875e4e1 = UNSTREAM_STRING( &constant_bin[ 1286517 ], 423, 0 );
    const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 2, const_str_plain_form ); Py_INCREF( const_str_plain_form );
    const_str_digest_2b9498cf29ec706ed018bb8515699045 = UNSTREAM_STRING( &constant_bin[ 1286940 ], 300, 0 );
    const_str_digest_a621aebae32306063eedea7c4a7bdebd = UNSTREAM_STRING( &constant_bin[ 1287240 ], 47, 0 );
    const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    const_str_plain_isize = UNSTREAM_STRING( &constant_bin[ 1287287 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 2, const_str_plain_isize ); Py_INCREF( const_str_plain_isize );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 3, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_digest_7aad98442226938245bb06c8fd0bcdbf = UNSTREAM_STRING( &constant_bin[ 1287292 ], 722, 0 );
    const_list_str_plain_ABCPolyBase_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_ABCPolyBase_list, 0, const_str_plain_ABCPolyBase ); Py_INCREF( const_str_plain_ABCPolyBase );
    const_str_digest_070d2df2cae1dff89fa1d1b4ead50a9e = UNSTREAM_STRING( &constant_bin[ 1288014 ], 1226, 0 );
    const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 3, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 4, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_tuple_int_pos_100_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_none_tuple, 0, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_5c1672ce023f467aa593f17c1716b98a = UNSTREAM_STRING( &constant_bin[ 1289240 ], 198, 0 );
    const_str_digest_71dffe55807a4844520f7d312dc1cdd9 = UNSTREAM_STRING( &constant_bin[ 1289438 ], 36, 0 );
    const_str_digest_7906fb1fdba98836d03daef6c58d7f59 = UNSTREAM_STRING( &constant_bin[ 1289474 ], 657, 0 );
    const_str_digest_a8b047c55fad201071d372dfb7ac4cca = UNSTREAM_STRING( &constant_bin[ 1290131 ], 31, 0 );
    const_tuple_none_none_false_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_5cff95afec2fedfa77694f6d8c7142ca = UNSTREAM_STRING( &constant_bin[ 1290162 ], 963, 0 );
    const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_digest_151b92710a27f5234231f69b96a29708 = UNSTREAM_STRING( &constant_bin[ 1291125 ], 319, 0 );
    const_str_digest_c6764a6d39f227f5a7a04f77b96f3b53 = UNSTREAM_STRING( &constant_bin[ 1291444 ], 327, 0 );
    const_tuple_a6334f3be40d0f7326867a3610feb525_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 2, const_str_plain_othercoef ); Py_INCREF( const_str_plain_othercoef );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 3, const_str_plain_quo ); Py_INCREF( const_str_plain_quo );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 4, const_str_plain_rem ); Py_INCREF( const_str_plain_rem );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 5, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_b6697fa852b58bbd73e9a86b2370791e = UNSTREAM_STRING( &constant_bin[ 1291771 ], 36, 0 );
    const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 3, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 4, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 5, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 6, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 7, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 8, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 9, const_str_plain_xnew ); Py_INCREF( const_str_plain_xnew );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 10, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 11, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 12, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, const_str_plain_othercoef ); Py_INCREF( const_str_plain_othercoef );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 3, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 2, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 3, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 4, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$_polybase( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_954f874e3a7b4aaf3f0f5a3e66149c17;
static PyCodeObject *codeobj_a64439963f540d2663cc00a6bb131e4f;
static PyCodeObject *codeobj_df0986a2693d67b48e4ce31ed56c1f78;
static PyCodeObject *codeobj_376708cfcbb1a29c965759934005ec25;
static PyCodeObject *codeobj_d41cae58fde901c7960e362ee62894c5;
static PyCodeObject *codeobj_5f98bc593df13526054c150916e3939f;
static PyCodeObject *codeobj_f44875e5a06c13db02186a4706faedff;
static PyCodeObject *codeobj_4b9ece47e2324d180e7313d031375e3f;
static PyCodeObject *codeobj_f254a2edbd688e0d8e19b24851092302;
static PyCodeObject *codeobj_cfb6fd4956e0fc088e4ed779da80911d;
static PyCodeObject *codeobj_a14279d65cd0a6ffb5524fdcdcf98095;
static PyCodeObject *codeobj_526162f1dae44fe7e2b6b89805640ee2;
static PyCodeObject *codeobj_e86dd87ef25782331153244cc11c9c3b;
static PyCodeObject *codeobj_5ac27532d8cf040d05e3068a731a8d2e;
static PyCodeObject *codeobj_e32c415f1e42d35118b24ba005f41ef9;
static PyCodeObject *codeobj_daba63434e3453839cd2c823c344fda3;
static PyCodeObject *codeobj_20f4f3d4021f4fc2f13244a8f68638bc;
static PyCodeObject *codeobj_aff0b167866e6f753494b94373737235;
static PyCodeObject *codeobj_7b9b77605427d9faac924ae1ce95cbac;
static PyCodeObject *codeobj_8ddd46e4c037de82831f86eceda25f7a;
static PyCodeObject *codeobj_15897ef10dfa7cb50a8c3ef0acec4a05;
static PyCodeObject *codeobj_4404a90cb968482be129da8e79d75d93;
static PyCodeObject *codeobj_cd5b96d4b1e1d16ff2e75f7eea9d8b8f;
static PyCodeObject *codeobj_7aa0eb6ff55093eb4ff1c21f4d85ed4f;
static PyCodeObject *codeobj_8089396ecbe14f136daa509080930717;
static PyCodeObject *codeobj_657f9b3d187f510e26d868c2181bf708;
static PyCodeObject *codeobj_921c937a61c02cd563bd6f975c032a6e;
static PyCodeObject *codeobj_2197abb1f749242154714c90066b06cf;
static PyCodeObject *codeobj_00ac3156fa10ad423f2b75f952138f11;
static PyCodeObject *codeobj_359c051df65f3750fa505f57ce562e02;
static PyCodeObject *codeobj_ede9313bb2b059f5296a22affc41ec81;
static PyCodeObject *codeobj_ceceef8e3851a83abc30ca23b599ac4e;
static PyCodeObject *codeobj_7f265a3570e4fe5ffcf34917e97824fe;
static PyCodeObject *codeobj_2c5ed345a1eb27c8538c7b8643f0e5e4;
static PyCodeObject *codeobj_b9b15bfbe7bde35806d4247d1a5690d0;
static PyCodeObject *codeobj_8ad82b3a9c92b1895826934ce5ea100c;
static PyCodeObject *codeobj_21d8c972fd54e04a477ac00e4d686b64;
static PyCodeObject *codeobj_a029fac50c3aa38b2d09f7bfdb19627c;
static PyCodeObject *codeobj_2bd7e85e4f38bfd76ea19c5687ca0752;
static PyCodeObject *codeobj_00128c5ec50df9c080aff46e4bcfcb96;
static PyCodeObject *codeobj_10d411ece67467134201bb5b4432dce4;
static PyCodeObject *codeobj_27fffa9a0c306ac97f52c12071afccd9;
static PyCodeObject *codeobj_8648a6ffea1df421bfc5ec5ddb1fc6d8;
static PyCodeObject *codeobj_c98f9d49375a44e03bd7fb78dfb29ec8;
static PyCodeObject *codeobj_4aee09e46cad176ae4aca71ebfa513f0;
static PyCodeObject *codeobj_ca10a3ca55f7676cb2043628b7c2f412;
static PyCodeObject *codeobj_152e1878f232aaff60a007859ac33e6a;
static PyCodeObject *codeobj_0481d5ec2c5ffa3540d1192b862a2e4d;
static PyCodeObject *codeobj_694040e1509a20c6b062ea80796bbe3b;
static PyCodeObject *codeobj_abb87c23a795101cf724a35b2e8e74a1;
static PyCodeObject *codeobj_6a412e783db0bc4c89e7dcd4a78daf71;
static PyCodeObject *codeobj_71a1264da968ce17fc166b48b3df9c2d;
static PyCodeObject *codeobj_cfd91668a7c427c6af3bfb91f252780a;
static PyCodeObject *codeobj_10fdab93b63440fd2e54f5b445688819;
static PyCodeObject *codeobj_ccf403ec1fa37aa472ef05d1fe56cc84;
static PyCodeObject *codeobj_185529345ae2db8e50c37972718579b2;
static PyCodeObject *codeobj_136b040578600222ef25154899bcf0c4;
static PyCodeObject *codeobj_d3392f00b501968d36a5b4ff8ab064a1;
static PyCodeObject *codeobj_4ea299c38d6a7ab6ed2a63c4907dfedb;
static PyCodeObject *codeobj_73bfac3c7c1a2ecef04508754c9cd26c;
static PyCodeObject *codeobj_cb51668401798bb667bdfa3b0584f8e2;
static PyCodeObject *codeobj_6852aee5ef675197a742091f8a384766;
static PyCodeObject *codeobj_be6c8c1e7f5f6d0f5d223f00a739ba2b;
static PyCodeObject *codeobj_ad6106655af09e9ad201530c832b5821;
static PyCodeObject *codeobj_8f2518bb51a465f5cea75952827b578d;
static PyCodeObject *codeobj_f2321f1532b193fd0c4a30c3e9492b03;
static PyCodeObject *codeobj_7ea6b26a0b74a4b962ae907987897114;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_d3cd65e570b4f8f57237436a36829fff;
    codeobj_954f874e3a7b4aaf3f0f5a3e66149c17 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_39da9fb8ae8d560bac2af4fe641d657e, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a64439963f540d2663cc00a6bb131e4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ABCPolyBase, 19, const_tuple_ded789bdecfc4517109b0476a737849d_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df0986a2693d67b48e4ce31ed56c1f78 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___add__, 309, const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_376708cfcbb1a29c965759934005ec25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 290, const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d41cae58fde901c7960e362ee62894c5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___div__, 339, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5f98bc593df13526054c150916e3939f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___divmod__, 364, const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f44875e5a06c13db02186a4706faedff = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 437, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b9ece47e2324d180e7313d031375e3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___floordiv__, 352, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f254a2edbd688e0d8e19b24851092302 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 278, const_tuple_str_plain_self_str_plain_ret_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cfb6fd4956e0fc088e4ed779da80911d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 246, const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a14279d65cd0a6ffb5524fdcdcf98095 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 295, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_526162f1dae44fe7e2b6b89805640ee2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 298, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e86dd87ef25782331153244cc11c9c3b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___mod__, 358, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5ac27532d8cf040d05e3068a731a8d2e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___mul__, 329, const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e32c415f1e42d35118b24ba005f41ef9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 445, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_daba63434e3453839cd2c823c344fda3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___neg__, 303, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_20f4f3d4021f4fc2f13244a8f68638bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pos__, 306, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aff0b167866e6f753494b94373737235 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pow__, 376, const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b9b77605427d9faac924ae1ce95cbac = MAKE_CODEOBJ( module_filename_obj, const_str_plain___radd__, 381, const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ddd46e4c037de82831f86eceda25f7a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rdiv__, 402, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_15897ef10dfa7cb50a8c3ef0acec4a05 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rdivmod__, 423, const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4404a90cb968482be129da8e79d75d93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 262, const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cd5b96d4b1e1d16ff2e75f7eea9d8b8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rfloordiv__, 411, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7aa0eb6ff55093eb4ff1c21f4d85ed4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rmod__, 417, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8089396ecbe14f136daa509080930717 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rmul__, 395, const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_657f9b3d187f510e26d868c2181bf708 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rsub__, 388, const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_921c937a61c02cd563bd6f975c032a6e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rtruediv__, 406, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2197abb1f749242154714c90066b06cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 285, const_tuple_str_plain_self_str_plain_dict_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_00ac3156fa10ad423f2b75f952138f11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 270, const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_359c051df65f3750fa505f57ce562e02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___sub__, 319, const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ede9313bb2b059f5296a22affc41ec81 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___truediv__, 343, const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ceceef8e3851a83abc30ca23b599ac4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__add, 85, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f265a3570e4fe5ffcf34917e97824fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain__der, 113, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c5ed345a1eb27c8538c7b8643f0e5e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__div, 97, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b9b15bfbe7bde35806d4247d1a5690d0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fit, 117, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ad82b3a9c92b1895826934ce5ea100c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fromroots, 129, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_21d8c972fd54e04a477ac00e4d686b64 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_coefficients, 210, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a029fac50c3aa38b2d09f7bfdb19627c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__int, 109, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2bd7e85e4f38bfd76ea19c5687ca0752 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__line, 121, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_00128c5ec50df9c080aff46e4bcfcb96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__mul, 93, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_10d411ece67467134201bb5b4432dce4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pow, 101, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_27fffa9a0c306ac97f52c12071afccd9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__roots, 125, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8648a6ffea1df421bfc5ec5ddb1fc6d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sub, 89, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c98f9d49375a44e03bd7fb78dfb29ec8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__val, 105, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4aee09e46cad176ae4aca71ebfa513f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_basis, 886, const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca10a3ca55f7676cb2043628b7c2f412 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cast, 925, const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_152e1878f232aaff60a007859ac33e6a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_convert, 553, const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0481d5ec2c5ffa3540d1192b862a2e4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 452, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_694040e1509a20c6b062ea80796bbe3b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cutdeg, 476, const_tuple_str_plain_self_str_plain_deg_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_abb87c23a795101cf724a35b2e8e74a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_degree, 463, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6a412e783db0bc4c89e7dcd4a78daf71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deriv, 655, const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_71a1264da968ce17fc166b48b3df9c2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_domain, 73, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cfd91668a7c427c6af3bfb91f252780a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fit, 724, const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_10fdab93b63440fd2e54f5b445688819 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fromroots, 812, const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ccf403ec1fa37aa472ef05d1fe56cc84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_samecoef, 133, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_185529345ae2db8e50c37972718579b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_samedomain, 156, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_136b040578600222ef25154899bcf0c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_sametype, 192, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d3392f00b501968d36a5b4ff8ab064a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_samewindow, 174, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ea299c38d6a7ab6ed2a63c4907dfedb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_identity, 853, const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_73bfac3c7c1a2ecef04508754c9cd26c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_integ, 622, const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cb51668401798bb667bdfa3b0584f8e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_linspace, 692, const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6852aee5ef675197a742091f8a384766 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mapparms, 593, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_be6c8c1e7f5f6d0f5d223f00a739ba2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nickname, 81, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad6106655af09e9ad201530c832b5821 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_roots, 677, const_tuple_str_plain_self_str_plain_roots_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8f2518bb51a465f5cea75952827b578d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trim, 501, const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f2321f1532b193fd0c4a30c3e9492b03 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_truncate, 524, const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ea6b26a0b74a4b962ae907987897114 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_window, 77, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_10__int(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_11__der(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_12__fit(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_13__line(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_14__roots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_15__fromroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_16_has_samecoef(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_17_has_samedomain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_18_has_samewindow(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_19_has_sametype(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_1_domain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_20__get_coefficients(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_21___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_22___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_23___str__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_24___getstate__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_25___setstate__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_26___call__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_27___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_28___len__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_29___neg__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_2_window(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_30___pos__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_31___add__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_32___sub__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_33___mul__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_34___div__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_35___truediv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_36___floordiv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_37___mod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_38___divmod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_39___pow__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_3_nickname(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_40___radd__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_41___rsub__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_42___rmul__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_43___rdiv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_44___rtruediv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_45___rfloordiv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_46___rmod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_47___rdivmod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_48___eq__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_49___ne__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_4__add(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_50_copy(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_51_degree(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_52_cutdeg(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_53_trim( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_54_truncate(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_55_convert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_56_mapparms(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_57_integ( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_58_deriv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_59_roots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_5__sub(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_60_linspace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_61_fit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_62_fromroots( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_63_identity( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_64_basis( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_65_cast( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_6__mul(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_7__div(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_8__pow(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_9__val(  );


// The module function definitions.
static PyObject *impl_numpy$polynomial$_polybase$$$function_1_domain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_1_domain );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_1_domain );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_2_window( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_2_window );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_2_window );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_3_nickname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_3_nickname );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_3_nickname );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_4__add( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_4__add );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_4__add );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_5__sub( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_5__sub );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_5__sub );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_6__mul( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_6__mul );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_6__mul );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_7__div( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_7__div );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_7__div );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_8__pow( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_8__pow );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_8__pow );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_9__val( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_9__val );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_9__val );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_10__int( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_10__int );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_10__int );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_11__der( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_11__der );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_11__der );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_12__fit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_12__fit );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_12__fit );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_13__line( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_13__line );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_13__line );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_14__roots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_14__roots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_14__roots );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_15__fromroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_15__fromroots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_15__fromroots );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_16_has_samecoef( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_ccf403ec1fa37aa472ef05d1fe56cc84 = NULL;

    struct Nuitka_FrameObject *frame_ccf403ec1fa37aa472ef05d1fe56cc84;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ccf403ec1fa37aa472ef05d1fe56cc84, codeobj_ccf403ec1fa37aa472ef05d1fe56cc84, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_ccf403ec1fa37aa472ef05d1fe56cc84 = cache_frame_ccf403ec1fa37aa472ef05d1fe56cc84;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ccf403ec1fa37aa472ef05d1fe56cc84 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ccf403ec1fa37aa472ef05d1fe56cc84 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 149;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 149;
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

        exception_lineno = 149;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 151;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coef );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 151;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_other;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coef );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 151;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 151;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_ccf403ec1fa37aa472ef05d1fe56cc84->m_frame.f_lineno = 151;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 151;
        type_description_1 = "oo";
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccf403ec1fa37aa472ef05d1fe56cc84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccf403ec1fa37aa472ef05d1fe56cc84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ccf403ec1fa37aa472ef05d1fe56cc84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ccf403ec1fa37aa472ef05d1fe56cc84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ccf403ec1fa37aa472ef05d1fe56cc84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ccf403ec1fa37aa472ef05d1fe56cc84, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ccf403ec1fa37aa472ef05d1fe56cc84,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_ccf403ec1fa37aa472ef05d1fe56cc84 == cache_frame_ccf403ec1fa37aa472ef05d1fe56cc84 )
    {
        Py_DECREF( frame_ccf403ec1fa37aa472ef05d1fe56cc84 );
    }
    cache_frame_ccf403ec1fa37aa472ef05d1fe56cc84 = NULL;

    assertFrameObject( frame_ccf403ec1fa37aa472ef05d1fe56cc84 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_16_has_samecoef );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_16_has_samecoef );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_17_has_samedomain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_185529345ae2db8e50c37972718579b2 = NULL;

    struct Nuitka_FrameObject *frame_185529345ae2db8e50c37972718579b2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_185529345ae2db8e50c37972718579b2, codeobj_185529345ae2db8e50c37972718579b2, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_185529345ae2db8e50c37972718579b2 = cache_frame_185529345ae2db8e50c37972718579b2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_185529345ae2db8e50c37972718579b2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_185529345ae2db8e50c37972718579b2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 172;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 172;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 172;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 172;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_185529345ae2db8e50c37972718579b2->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_185529345ae2db8e50c37972718579b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_185529345ae2db8e50c37972718579b2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_185529345ae2db8e50c37972718579b2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_185529345ae2db8e50c37972718579b2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_185529345ae2db8e50c37972718579b2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_185529345ae2db8e50c37972718579b2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_185529345ae2db8e50c37972718579b2,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_185529345ae2db8e50c37972718579b2 == cache_frame_185529345ae2db8e50c37972718579b2 )
    {
        Py_DECREF( frame_185529345ae2db8e50c37972718579b2 );
    }
    cache_frame_185529345ae2db8e50c37972718579b2 = NULL;

    assertFrameObject( frame_185529345ae2db8e50c37972718579b2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_17_has_samedomain );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_17_has_samedomain );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_18_has_samewindow( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_d3392f00b501968d36a5b4ff8ab064a1 = NULL;

    struct Nuitka_FrameObject *frame_d3392f00b501968d36a5b4ff8ab064a1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3392f00b501968d36a5b4ff8ab064a1, codeobj_d3392f00b501968d36a5b4ff8ab064a1, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_d3392f00b501968d36a5b4ff8ab064a1 = cache_frame_d3392f00b501968d36a5b4ff8ab064a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3392f00b501968d36a5b4ff8ab064a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3392f00b501968d36a5b4ff8ab064a1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_d3392f00b501968d36a5b4ff8ab064a1->m_frame.f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3392f00b501968d36a5b4ff8ab064a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3392f00b501968d36a5b4ff8ab064a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3392f00b501968d36a5b4ff8ab064a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3392f00b501968d36a5b4ff8ab064a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3392f00b501968d36a5b4ff8ab064a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3392f00b501968d36a5b4ff8ab064a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3392f00b501968d36a5b4ff8ab064a1,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_d3392f00b501968d36a5b4ff8ab064a1 == cache_frame_d3392f00b501968d36a5b4ff8ab064a1 )
    {
        Py_DECREF( frame_d3392f00b501968d36a5b4ff8ab064a1 );
    }
    cache_frame_d3392f00b501968d36a5b4ff8ab064a1 = NULL;

    assertFrameObject( frame_d3392f00b501968d36a5b4ff8ab064a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_18_has_samewindow );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_18_has_samewindow );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_19_has_sametype( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_136b040578600222ef25154899bcf0c4 = NULL;

    struct Nuitka_FrameObject *frame_136b040578600222ef25154899bcf0c4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_136b040578600222ef25154899bcf0c4, codeobj_136b040578600222ef25154899bcf0c4, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_136b040578600222ef25154899bcf0c4 = cache_frame_136b040578600222ef25154899bcf0c4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_136b040578600222ef25154899bcf0c4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_136b040578600222ef25154899bcf0c4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_136b040578600222ef25154899bcf0c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_136b040578600222ef25154899bcf0c4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_136b040578600222ef25154899bcf0c4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_136b040578600222ef25154899bcf0c4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_136b040578600222ef25154899bcf0c4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_136b040578600222ef25154899bcf0c4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_136b040578600222ef25154899bcf0c4,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_136b040578600222ef25154899bcf0c4 == cache_frame_136b040578600222ef25154899bcf0c4 )
    {
        Py_DECREF( frame_136b040578600222ef25154899bcf0c4 );
    }
    cache_frame_136b040578600222ef25154899bcf0c4 = NULL;

    assertFrameObject( frame_136b040578600222ef25154899bcf0c4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_19_has_sametype );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_19_has_sametype );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_20__get_coefficients( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
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
    static struct Nuitka_FrameObject *cache_frame_21d8c972fd54e04a477ac00e4d686b64 = NULL;

    struct Nuitka_FrameObject *frame_21d8c972fd54e04a477ac00e4d686b64;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21d8c972fd54e04a477ac00e4d686b64, codeobj_21d8c972fd54e04a477ac00e4d686b64, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_21d8c972fd54e04a477ac00e4d686b64 = cache_frame_21d8c972fd54e04a477ac00e4d686b64;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21d8c972fd54e04a477ac00e4d686b64 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21d8c972fd54e04a477ac00e4d686b64 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ABCPolyBase" );
        exception_tb = NULL;

        exception_lineno = 236;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
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
    tmp_isinstance_inst_2 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_1 = const_str_digest_2840a70f92a629f3a4870b2cdbc33511;
    frame_21d8c972fd54e04a477ac00e4d686b64->m_frame.f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 238;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_21d8c972fd54e04a477ac00e4d686b64->m_frame.f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 239;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_2 = const_str_digest_67732dba2209beca762664be526ce3ff;
    frame_21d8c972fd54e04a477ac00e4d686b64->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 240;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_all );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_other;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_window );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_21d8c972fd54e04a477ac00e4d686b64->m_frame.f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 241;
        type_description_1 = "oo";
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
    tmp_make_exception_arg_3 = const_str_digest_55d9eb6c088724632d5321a71831e4a8;
    frame_21d8c972fd54e04a477ac00e4d686b64->m_frame.f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 242;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    tmp_source_name_8 = par_other;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_coef );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21d8c972fd54e04a477ac00e4d686b64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_21d8c972fd54e04a477ac00e4d686b64 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21d8c972fd54e04a477ac00e4d686b64 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21d8c972fd54e04a477ac00e4d686b64, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21d8c972fd54e04a477ac00e4d686b64->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21d8c972fd54e04a477ac00e4d686b64, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21d8c972fd54e04a477ac00e4d686b64,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_21d8c972fd54e04a477ac00e4d686b64 == cache_frame_21d8c972fd54e04a477ac00e4d686b64 )
    {
        Py_DECREF( frame_21d8c972fd54e04a477ac00e4d686b64 );
    }
    cache_frame_21d8c972fd54e04a477ac00e4d686b64 = NULL;

    assertFrameObject( frame_21d8c972fd54e04a477ac00e4d686b64 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_other;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_20__get_coefficients );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_20__get_coefficients );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_21___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_coef = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static struct Nuitka_FrameObject *cache_frame_cfb6fd4956e0fc088e4ed779da80911d = NULL;

    struct Nuitka_FrameObject *frame_cfb6fd4956e0fc088e4ed779da80911d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cfb6fd4956e0fc088e4ed779da80911d, codeobj_cfb6fd4956e0fc088e4ed779da80911d, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cfb6fd4956e0fc088e4ed779da80911d = cache_frame_cfb6fd4956e0fc088e4ed779da80911d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cfb6fd4956e0fc088e4ed779da80911d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cfb6fd4956e0fc088e4ed779da80911d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 247;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_coef;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_cfb6fd4956e0fc088e4ed779da80911d->m_frame.f_lineno = 247;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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
        exception_lineno = 247;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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

                type_description_1 = "oooo";
                exception_lineno = 247;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 247;
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

    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = par_coef;
        assert( old != NULL );
        par_coef = tmp_assign_source_3;
        Py_INCREF( par_coef );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assattr_name_1 = par_coef;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_coef, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_domain;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 251;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_as_series );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 1 );
    tmp_list_element_2 = par_domain;

    CHECK_OBJECT( tmp_list_element_2 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_cfb6fd4956e0fc088e4ed779da80911d->m_frame.f_lineno = 251;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;

    // Tried code:
    tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


        type_description_1 = "oooo";
        exception_lineno = 251;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;

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

                type_description_1 = "oooo";
                exception_lineno = 251;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 251;
        goto try_except_handler_5;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_6;
        Py_INCREF( par_domain );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_len_arg_1 = par_domain;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 252;
        type_description_1 = "oooo";
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
    tmp_make_exception_arg_1 = const_str_digest_71dffe55807a4844520f7d312dc1cdd9;
    frame_cfb6fd4956e0fc088e4ed779da80911d->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 253;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_2 = par_domain;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_domain, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_3 = par_window;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 257;
        type_description_1 = "oooo";
        goto try_except_handler_6;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_as_series );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooo";
        goto try_except_handler_6;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyList_New( 1 );
    tmp_list_element_3 = par_window;

    CHECK_OBJECT( tmp_list_element_3 );
    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_tuple_element_3, 0, tmp_list_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_cfb6fd4956e0fc088e4ed779da80911d->m_frame.f_lineno = 257;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "oooo";
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_7;

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


        type_description_1 = "oooo";
        exception_lineno = 257;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_8;

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

                type_description_1 = "oooo";
                exception_lineno = 257;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 257;
        goto try_except_handler_7;
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_9;
        Py_INCREF( par_window );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_len_arg_2 = par_window;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_pos_2;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 258;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_b6697fa852b58bbd73e9a86b2370791e;
    frame_cfb6fd4956e0fc088e4ed779da80911d->m_frame.f_lineno = 259;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 259;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assattr_name_3 = par_window;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_window, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfb6fd4956e0fc088e4ed779da80911d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfb6fd4956e0fc088e4ed779da80911d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cfb6fd4956e0fc088e4ed779da80911d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cfb6fd4956e0fc088e4ed779da80911d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cfb6fd4956e0fc088e4ed779da80911d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cfb6fd4956e0fc088e4ed779da80911d,
        type_description_1,
        par_self,
        par_coef,
        par_domain,
        par_window
    );


    // Release cached frame.
    if ( frame_cfb6fd4956e0fc088e4ed779da80911d == cache_frame_cfb6fd4956e0fc088e4ed779da80911d )
    {
        Py_DECREF( frame_cfb6fd4956e0fc088e4ed779da80911d );
    }
    cache_frame_cfb6fd4956e0fc088e4ed779da80911d = NULL;

    assertFrameObject( frame_cfb6fd4956e0fc088e4ed779da80911d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_21___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_coef );
    Py_DECREF( par_coef );
    par_coef = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_coef );
    Py_DECREF( par_coef );
    par_coef = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_21___init__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_22___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_coef = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_window = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_4404a90cb968482be129da8e79d75d93 = NULL;

    struct Nuitka_FrameObject *frame_4404a90cb968482be129da8e79d75d93;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4404a90cb968482be129da8e79d75d93, codeobj_4404a90cb968482be129da8e79d75d93, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4404a90cb968482be129da8e79d75d93 = cache_frame_4404a90cb968482be129da8e79d75d93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4404a90cb968482be129da8e79d75d93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4404a90cb968482be129da8e79d75d93 ) == 2 ); // Frame stack

    // Framed code:
    tmp_sliceslicedel_index_lower_1 = 6;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_sliceslicedel_index_lower_2 = 6;
    tmp_slice_index_upper_2 = -1;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_source_2 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    assert( var_domain == NULL );
    var_domain = tmp_assign_source_2;

    tmp_sliceslicedel_index_lower_3 = 6;
    tmp_slice_index_upper_3 = -1;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_source_3 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    assert( var_window == NULL );
    var_window = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_4;

    tmp_left_name_1 = const_str_digest_f8e029e75f7a514fa730097cbce45802;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = var_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_coef;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_domain;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_window;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_1 = "oNoooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4404a90cb968482be129da8e79d75d93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4404a90cb968482be129da8e79d75d93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4404a90cb968482be129da8e79d75d93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4404a90cb968482be129da8e79d75d93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4404a90cb968482be129da8e79d75d93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4404a90cb968482be129da8e79d75d93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4404a90cb968482be129da8e79d75d93,
        type_description_1,
        par_self,
        NULL,
        var_coef,
        var_domain,
        var_window,
        var_name
    );


    // Release cached frame.
    if ( frame_4404a90cb968482be129da8e79d75d93 == cache_frame_4404a90cb968482be129da8e79d75d93 )
    {
        Py_DECREF( frame_4404a90cb968482be129da8e79d75d93 );
    }
    cache_frame_4404a90cb968482be129da8e79d75d93 = NULL;

    assertFrameObject( frame_4404a90cb968482be129da8e79d75d93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_22___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    CHECK_OBJECT( (PyObject *)var_domain );
    Py_DECREF( var_domain );
    var_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_window );
    Py_DECREF( var_window );
    var_window = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_domain );
    var_domain = NULL;

    Py_XDECREF( var_window );
    var_window = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_22___repr__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_23___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_coef = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_00ac3156fa10ad423f2b75f952138f11 = NULL;

    struct Nuitka_FrameObject *frame_00ac3156fa10ad423f2b75f952138f11;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00ac3156fa10ad423f2b75f952138f11, codeobj_00ac3156fa10ad423f2b75f952138f11, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_00ac3156fa10ad423f2b75f952138f11 = cache_frame_00ac3156fa10ad423f2b75f952138f11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00ac3156fa10ad423f2b75f952138f11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00ac3156fa10ad423f2b75f952138f11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_str_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oNoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oNoo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nickname );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oNoo";
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_2;

    tmp_left_name_1 = const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_coef;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oNoo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00ac3156fa10ad423f2b75f952138f11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_00ac3156fa10ad423f2b75f952138f11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00ac3156fa10ad423f2b75f952138f11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00ac3156fa10ad423f2b75f952138f11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00ac3156fa10ad423f2b75f952138f11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00ac3156fa10ad423f2b75f952138f11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00ac3156fa10ad423f2b75f952138f11,
        type_description_1,
        par_self,
        NULL,
        var_coef,
        var_name
    );


    // Release cached frame.
    if ( frame_00ac3156fa10ad423f2b75f952138f11 == cache_frame_00ac3156fa10ad423f2b75f952138f11 )
    {
        Py_DECREF( frame_00ac3156fa10ad423f2b75f952138f11 );
    }
    cache_frame_00ac3156fa10ad423f2b75f952138f11 = NULL;

    assertFrameObject( frame_00ac3156fa10ad423f2b75f952138f11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_23___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_23___str__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_24___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_ret = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_f254a2edbd688e0d8e19b24851092302 = NULL;

    struct Nuitka_FrameObject *frame_f254a2edbd688e0d8e19b24851092302;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f254a2edbd688e0d8e19b24851092302, codeobj_f254a2edbd688e0d8e19b24851092302, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_f254a2edbd688e0d8e19b24851092302 = cache_frame_f254a2edbd688e0d8e19b24851092302;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f254a2edbd688e0d8e19b24851092302 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f254a2edbd688e0d8e19b24851092302 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f254a2edbd688e0d8e19b24851092302->m_frame.f_lineno = 279;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f254a2edbd688e0d8e19b24851092302->m_frame.f_lineno = 280;
    tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_ret;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_plain_coef;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f254a2edbd688e0d8e19b24851092302->m_frame.f_lineno = 281;
    tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_ret;

    CHECK_OBJECT( tmp_ass_subscribed_2 );
    tmp_ass_subscript_2 = const_str_plain_domain;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_f254a2edbd688e0d8e19b24851092302->m_frame.f_lineno = 282;
    tmp_ass_subvalue_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = var_ret;

    CHECK_OBJECT( tmp_ass_subscribed_3 );
    tmp_ass_subscript_3 = const_str_plain_window;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f254a2edbd688e0d8e19b24851092302 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f254a2edbd688e0d8e19b24851092302 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f254a2edbd688e0d8e19b24851092302, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f254a2edbd688e0d8e19b24851092302->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f254a2edbd688e0d8e19b24851092302, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f254a2edbd688e0d8e19b24851092302,
        type_description_1,
        par_self,
        var_ret
    );


    // Release cached frame.
    if ( frame_f254a2edbd688e0d8e19b24851092302 == cache_frame_f254a2edbd688e0d8e19b24851092302 )
    {
        Py_DECREF( frame_f254a2edbd688e0d8e19b24851092302 );
    }
    cache_frame_f254a2edbd688e0d8e19b24851092302 = NULL;

    assertFrameObject( frame_f254a2edbd688e0d8e19b24851092302 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_ret;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_24___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

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

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_24___getstate__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_25___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dict = python_pars[ 1 ];
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
    static struct Nuitka_FrameObject *cache_frame_2197abb1f749242154714c90066b06cf = NULL;

    struct Nuitka_FrameObject *frame_2197abb1f749242154714c90066b06cf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2197abb1f749242154714c90066b06cf, codeobj_2197abb1f749242154714c90066b06cf, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_2197abb1f749242154714c90066b06cf = cache_frame_2197abb1f749242154714c90066b06cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2197abb1f749242154714c90066b06cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2197abb1f749242154714c90066b06cf ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_dict;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE_DICT_SLOT( tmp_assattr_target_1, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2197abb1f749242154714c90066b06cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2197abb1f749242154714c90066b06cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2197abb1f749242154714c90066b06cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2197abb1f749242154714c90066b06cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2197abb1f749242154714c90066b06cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2197abb1f749242154714c90066b06cf,
        type_description_1,
        par_self,
        par_dict
    );


    // Release cached frame.
    if ( frame_2197abb1f749242154714c90066b06cf == cache_frame_2197abb1f749242154714c90066b06cf )
    {
        Py_DECREF( frame_2197abb1f749242154714c90066b06cf );
    }
    cache_frame_2197abb1f749242154714c90066b06cf = NULL;

    assertFrameObject( frame_2197abb1f749242154714c90066b06cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_25___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dict );
    Py_DECREF( par_dict );
    par_dict = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dict );
    Py_DECREF( par_dict );
    par_dict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_25___setstate__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_26___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arg = python_pars[ 1 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_376708cfcbb1a29c965759934005ec25 = NULL;

    struct Nuitka_FrameObject *frame_376708cfcbb1a29c965759934005ec25;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_376708cfcbb1a29c965759934005ec25, codeobj_376708cfcbb1a29c965759934005ec25, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_376708cfcbb1a29c965759934005ec25 = cache_frame_376708cfcbb1a29c965759934005ec25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_376708cfcbb1a29c965759934005ec25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_376708cfcbb1a29c965759934005ec25 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 291;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 291;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 291;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_376708cfcbb1a29c965759934005ec25->m_frame.f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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
        exception_lineno = 291;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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
        exception_lineno = 291;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "oooo";
                exception_lineno = 291;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 291;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_off = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_scl = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = var_off;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = var_scl;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_arg;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_arg;
        assert( old != NULL );
        par_arg = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__val );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_arg;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coef );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 293;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_376708cfcbb1a29c965759934005ec25->m_frame.f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_376708cfcbb1a29c965759934005ec25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_376708cfcbb1a29c965759934005ec25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_376708cfcbb1a29c965759934005ec25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_376708cfcbb1a29c965759934005ec25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_376708cfcbb1a29c965759934005ec25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_376708cfcbb1a29c965759934005ec25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_376708cfcbb1a29c965759934005ec25,
        type_description_1,
        par_self,
        par_arg,
        var_off,
        var_scl
    );


    // Release cached frame.
    if ( frame_376708cfcbb1a29c965759934005ec25 == cache_frame_376708cfcbb1a29c965759934005ec25 )
    {
        Py_DECREF( frame_376708cfcbb1a29c965759934005ec25 );
    }
    cache_frame_376708cfcbb1a29c965759934005ec25 = NULL;

    assertFrameObject( frame_376708cfcbb1a29c965759934005ec25 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_26___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_26___call__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_27___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_a14279d65cd0a6ffb5524fdcdcf98095 = NULL;

    struct Nuitka_FrameObject *frame_a14279d65cd0a6ffb5524fdcdcf98095;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a14279d65cd0a6ffb5524fdcdcf98095, codeobj_a14279d65cd0a6ffb5524fdcdcf98095, module_numpy$polynomial$_polybase, sizeof(void *) );
    frame_a14279d65cd0a6ffb5524fdcdcf98095 = cache_frame_a14279d65cd0a6ffb5524fdcdcf98095;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a14279d65cd0a6ffb5524fdcdcf98095 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a14279d65cd0a6ffb5524fdcdcf98095 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14279d65cd0a6ffb5524fdcdcf98095 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14279d65cd0a6ffb5524fdcdcf98095 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14279d65cd0a6ffb5524fdcdcf98095 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a14279d65cd0a6ffb5524fdcdcf98095, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a14279d65cd0a6ffb5524fdcdcf98095->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a14279d65cd0a6ffb5524fdcdcf98095, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a14279d65cd0a6ffb5524fdcdcf98095,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a14279d65cd0a6ffb5524fdcdcf98095 == cache_frame_a14279d65cd0a6ffb5524fdcdcf98095 )
    {
        Py_DECREF( frame_a14279d65cd0a6ffb5524fdcdcf98095 );
    }
    cache_frame_a14279d65cd0a6ffb5524fdcdcf98095 = NULL;

    assertFrameObject( frame_a14279d65cd0a6ffb5524fdcdcf98095 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_27___iter__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_27___iter__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_28___len__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_526162f1dae44fe7e2b6b89805640ee2 = NULL;

    struct Nuitka_FrameObject *frame_526162f1dae44fe7e2b6b89805640ee2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_526162f1dae44fe7e2b6b89805640ee2, codeobj_526162f1dae44fe7e2b6b89805640ee2, module_numpy$polynomial$_polybase, sizeof(void *) );
    frame_526162f1dae44fe7e2b6b89805640ee2 = cache_frame_526162f1dae44fe7e2b6b89805640ee2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_526162f1dae44fe7e2b6b89805640ee2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_526162f1dae44fe7e2b6b89805640ee2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_526162f1dae44fe7e2b6b89805640ee2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_526162f1dae44fe7e2b6b89805640ee2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_526162f1dae44fe7e2b6b89805640ee2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_526162f1dae44fe7e2b6b89805640ee2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_526162f1dae44fe7e2b6b89805640ee2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_526162f1dae44fe7e2b6b89805640ee2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_526162f1dae44fe7e2b6b89805640ee2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_526162f1dae44fe7e2b6b89805640ee2 == cache_frame_526162f1dae44fe7e2b6b89805640ee2 )
    {
        Py_DECREF( frame_526162f1dae44fe7e2b6b89805640ee2 );
    }
    cache_frame_526162f1dae44fe7e2b6b89805640ee2 = NULL;

    assertFrameObject( frame_526162f1dae44fe7e2b6b89805640ee2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_28___len__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_28___len__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_29___neg__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_daba63434e3453839cd2c823c344fda3 = NULL;

    struct Nuitka_FrameObject *frame_daba63434e3453839cd2c823c344fda3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_daba63434e3453839cd2c823c344fda3, codeobj_daba63434e3453839cd2c823c344fda3, module_numpy$polynomial$_polybase, sizeof(void *) );
    frame_daba63434e3453839cd2c823c344fda3 = cache_frame_daba63434e3453839cd2c823c344fda3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_daba63434e3453839cd2c823c344fda3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_daba63434e3453839cd2c823c344fda3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_daba63434e3453839cd2c823c344fda3->m_frame.f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_daba63434e3453839cd2c823c344fda3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_daba63434e3453839cd2c823c344fda3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_daba63434e3453839cd2c823c344fda3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_daba63434e3453839cd2c823c344fda3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_daba63434e3453839cd2c823c344fda3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_daba63434e3453839cd2c823c344fda3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_daba63434e3453839cd2c823c344fda3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_daba63434e3453839cd2c823c344fda3 == cache_frame_daba63434e3453839cd2c823c344fda3 )
    {
        Py_DECREF( frame_daba63434e3453839cd2c823c344fda3 );
    }
    cache_frame_daba63434e3453839cd2c823c344fda3 = NULL;

    assertFrameObject( frame_daba63434e3453839cd2c823c344fda3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_29___neg__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_29___neg__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_30___pos__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_30___pos__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_30___pos__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_31___add__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_df0986a2693d67b48e4ce31ed56c1f78 = NULL;

    struct Nuitka_FrameObject *frame_df0986a2693d67b48e4ce31ed56c1f78;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_df0986a2693d67b48e4ce31ed56c1f78, codeobj_df0986a2693d67b48e4ce31ed56c1f78, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_df0986a2693d67b48e4ce31ed56c1f78 = cache_frame_df0986a2693d67b48e4ce31ed56c1f78;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df0986a2693d67b48e4ce31ed56c1f78 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df0986a2693d67b48e4ce31ed56c1f78 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_df0986a2693d67b48e4ce31ed56c1f78->m_frame.f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__get_coefficients, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__add );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 312;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_othercoef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_df0986a2693d67b48e4ce31ed56c1f78->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

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
    PRESERVE_FRAME_EXCEPTION( frame_df0986a2693d67b48e4ce31ed56c1f78 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_df0986a2693d67b48e4ce31ed56c1f78, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_df0986a2693d67b48e4ce31ed56c1f78, exception_keeper_lineno_1 );
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


        exception_lineno = 313;
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_raise_type_1 = var_e;

    CHECK_OBJECT( tmp_raise_type_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 314;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 317;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 317;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_df0986a2693d67b48e4ce31ed56c1f78->m_frame.f_lineno = 317;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_df0986a2693d67b48e4ce31ed56c1f78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_df0986a2693d67b48e4ce31ed56c1f78 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_df0986a2693d67b48e4ce31ed56c1f78 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df0986a2693d67b48e4ce31ed56c1f78, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df0986a2693d67b48e4ce31ed56c1f78->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df0986a2693d67b48e4ce31ed56c1f78, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df0986a2693d67b48e4ce31ed56c1f78,
        type_description_1,
        par_self,
        par_other,
        var_othercoef,
        var_coef,
        var_e
    );


    // Release cached frame.
    if ( frame_df0986a2693d67b48e4ce31ed56c1f78 == cache_frame_df0986a2693d67b48e4ce31ed56c1f78 )
    {
        Py_DECREF( frame_df0986a2693d67b48e4ce31ed56c1f78 );
    }
    cache_frame_df0986a2693d67b48e4ce31ed56c1f78 = NULL;

    assertFrameObject( frame_df0986a2693d67b48e4ce31ed56c1f78 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_31___add__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_31___add__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_32___sub__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_359c051df65f3750fa505f57ce562e02 = NULL;

    struct Nuitka_FrameObject *frame_359c051df65f3750fa505f57ce562e02;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_359c051df65f3750fa505f57ce562e02, codeobj_359c051df65f3750fa505f57ce562e02, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_359c051df65f3750fa505f57ce562e02 = cache_frame_359c051df65f3750fa505f57ce562e02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_359c051df65f3750fa505f57ce562e02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_359c051df65f3750fa505f57ce562e02 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_359c051df65f3750fa505f57ce562e02->m_frame.f_lineno = 321;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__get_coefficients, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 322;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_othercoef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_359c051df65f3750fa505f57ce562e02->m_frame.f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

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
    PRESERVE_FRAME_EXCEPTION( frame_359c051df65f3750fa505f57ce562e02 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_359c051df65f3750fa505f57ce562e02, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_359c051df65f3750fa505f57ce562e02, exception_keeper_lineno_1 );
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


        exception_lineno = 323;
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_raise_type_1 = var_e;

    CHECK_OBJECT( tmp_raise_type_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 324;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 327;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 327;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_359c051df65f3750fa505f57ce562e02->m_frame.f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_359c051df65f3750fa505f57ce562e02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_359c051df65f3750fa505f57ce562e02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_359c051df65f3750fa505f57ce562e02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_359c051df65f3750fa505f57ce562e02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_359c051df65f3750fa505f57ce562e02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_359c051df65f3750fa505f57ce562e02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_359c051df65f3750fa505f57ce562e02,
        type_description_1,
        par_self,
        par_other,
        var_othercoef,
        var_coef,
        var_e
    );


    // Release cached frame.
    if ( frame_359c051df65f3750fa505f57ce562e02 == cache_frame_359c051df65f3750fa505f57ce562e02 )
    {
        Py_DECREF( frame_359c051df65f3750fa505f57ce562e02 );
    }
    cache_frame_359c051df65f3750fa505f57ce562e02 = NULL;

    assertFrameObject( frame_359c051df65f3750fa505f57ce562e02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_32___sub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_32___sub__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_33___mul__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_5ac27532d8cf040d05e3068a731a8d2e = NULL;

    struct Nuitka_FrameObject *frame_5ac27532d8cf040d05e3068a731a8d2e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5ac27532d8cf040d05e3068a731a8d2e, codeobj_5ac27532d8cf040d05e3068a731a8d2e, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5ac27532d8cf040d05e3068a731a8d2e = cache_frame_5ac27532d8cf040d05e3068a731a8d2e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5ac27532d8cf040d05e3068a731a8d2e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5ac27532d8cf040d05e3068a731a8d2e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5ac27532d8cf040d05e3068a731a8d2e->m_frame.f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__get_coefficients, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mul );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 332;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_othercoef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_5ac27532d8cf040d05e3068a731a8d2e->m_frame.f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

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
    PRESERVE_FRAME_EXCEPTION( frame_5ac27532d8cf040d05e3068a731a8d2e );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5ac27532d8cf040d05e3068a731a8d2e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5ac27532d8cf040d05e3068a731a8d2e, exception_keeper_lineno_1 );
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


        exception_lineno = 333;
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_raise_type_1 = var_e;

    CHECK_OBJECT( tmp_raise_type_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 334;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_5ac27532d8cf040d05e3068a731a8d2e->m_frame.f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5ac27532d8cf040d05e3068a731a8d2e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_5ac27532d8cf040d05e3068a731a8d2e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5ac27532d8cf040d05e3068a731a8d2e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5ac27532d8cf040d05e3068a731a8d2e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5ac27532d8cf040d05e3068a731a8d2e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5ac27532d8cf040d05e3068a731a8d2e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5ac27532d8cf040d05e3068a731a8d2e,
        type_description_1,
        par_self,
        par_other,
        var_othercoef,
        var_coef,
        var_e
    );


    // Release cached frame.
    if ( frame_5ac27532d8cf040d05e3068a731a8d2e == cache_frame_5ac27532d8cf040d05e3068a731a8d2e )
    {
        Py_DECREF( frame_5ac27532d8cf040d05e3068a731a8d2e );
    }
    cache_frame_5ac27532d8cf040d05e3068a731a8d2e = NULL;

    assertFrameObject( frame_5ac27532d8cf040d05e3068a731a8d2e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_33___mul__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_33___mul__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_34___div__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d41cae58fde901c7960e362ee62894c5 = NULL;

    struct Nuitka_FrameObject *frame_d41cae58fde901c7960e362ee62894c5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d41cae58fde901c7960e362ee62894c5, codeobj_d41cae58fde901c7960e362ee62894c5, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_d41cae58fde901c7960e362ee62894c5 = cache_frame_d41cae58fde901c7960e362ee62894c5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d41cae58fde901c7960e362ee62894c5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d41cae58fde901c7960e362ee62894c5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d41cae58fde901c7960e362ee62894c5->m_frame.f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___floordiv__, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d41cae58fde901c7960e362ee62894c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d41cae58fde901c7960e362ee62894c5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d41cae58fde901c7960e362ee62894c5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d41cae58fde901c7960e362ee62894c5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d41cae58fde901c7960e362ee62894c5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d41cae58fde901c7960e362ee62894c5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d41cae58fde901c7960e362ee62894c5,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_d41cae58fde901c7960e362ee62894c5 == cache_frame_d41cae58fde901c7960e362ee62894c5 )
    {
        Py_DECREF( frame_d41cae58fde901c7960e362ee62894c5 );
    }
    cache_frame_d41cae58fde901c7960e362ee62894c5 = NULL;

    assertFrameObject( frame_d41cae58fde901c7960e362ee62894c5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_34___div__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_34___div__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_35___truediv__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    static struct Nuitka_FrameObject *cache_frame_ede9313bb2b059f5296a22affc41ec81 = NULL;

    struct Nuitka_FrameObject *frame_ede9313bb2b059f5296a22affc41ec81;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ede9313bb2b059f5296a22affc41ec81, codeobj_ede9313bb2b059f5296a22affc41ec81, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ede9313bb2b059f5296a22affc41ec81 = cache_frame_ede9313bb2b059f5296a22affc41ec81;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ede9313bb2b059f5296a22affc41ec81 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ede9313bb2b059f5296a22affc41ec81 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_Number );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Number );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Number" );
        exception_tb = NULL;

        exception_lineno = 347;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooN";
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
    tmp_isinstance_inst_2 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = (PyObject *)&PyBool_Type;
    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        type_description_1 = "ooN";
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


        exception_lineno = 347;
        type_description_1 = "ooN";
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
    tmp_left_name_1 = const_str_digest_a621aebae32306063eedea7c4a7bdebd;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_type_arg_1 = par_self;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_tuple_element_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_tuple_element_1 != NULL );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_type_arg_2 = par_other;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_tuple_element_1 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_tuple_element_1 != NULL );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    frame_ede9313bb2b059f5296a22affc41ec81->m_frame.f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 349;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooN";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ede9313bb2b059f5296a22affc41ec81->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___floordiv__, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ede9313bb2b059f5296a22affc41ec81 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ede9313bb2b059f5296a22affc41ec81 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ede9313bb2b059f5296a22affc41ec81 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ede9313bb2b059f5296a22affc41ec81, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ede9313bb2b059f5296a22affc41ec81->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ede9313bb2b059f5296a22affc41ec81, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ede9313bb2b059f5296a22affc41ec81,
        type_description_1,
        par_self,
        par_other,
        NULL
    );


    // Release cached frame.
    if ( frame_ede9313bb2b059f5296a22affc41ec81 == cache_frame_ede9313bb2b059f5296a22affc41ec81 )
    {
        Py_DECREF( frame_ede9313bb2b059f5296a22affc41ec81 );
    }
    cache_frame_ede9313bb2b059f5296a22affc41ec81 = NULL;

    assertFrameObject( frame_ede9313bb2b059f5296a22affc41ec81 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_35___truediv__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_35___truediv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_36___floordiv__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_4b9ece47e2324d180e7313d031375e3f = NULL;

    struct Nuitka_FrameObject *frame_4b9ece47e2324d180e7313d031375e3f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b9ece47e2324d180e7313d031375e3f, codeobj_4b9ece47e2324d180e7313d031375e3f, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b9ece47e2324d180e7313d031375e3f = cache_frame_4b9ece47e2324d180e7313d031375e3f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b9ece47e2324d180e7313d031375e3f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b9ece47e2324d180e7313d031375e3f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4b9ece47e2324d180e7313d031375e3f->m_frame.f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___divmod__, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b9ece47e2324d180e7313d031375e3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b9ece47e2324d180e7313d031375e3f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b9ece47e2324d180e7313d031375e3f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b9ece47e2324d180e7313d031375e3f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b9ece47e2324d180e7313d031375e3f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b9ece47e2324d180e7313d031375e3f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b9ece47e2324d180e7313d031375e3f,
        type_description_1,
        par_self,
        par_other,
        var_res
    );


    // Release cached frame.
    if ( frame_4b9ece47e2324d180e7313d031375e3f == cache_frame_4b9ece47e2324d180e7313d031375e3f )
    {
        Py_DECREF( frame_4b9ece47e2324d180e7313d031375e3f );
    }
    cache_frame_4b9ece47e2324d180e7313d031375e3f = NULL;

    assertFrameObject( frame_4b9ece47e2324d180e7313d031375e3f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_36___floordiv__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_36___floordiv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_37___mod__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_e86dd87ef25782331153244cc11c9c3b = NULL;

    struct Nuitka_FrameObject *frame_e86dd87ef25782331153244cc11c9c3b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e86dd87ef25782331153244cc11c9c3b, codeobj_e86dd87ef25782331153244cc11c9c3b, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e86dd87ef25782331153244cc11c9c3b = cache_frame_e86dd87ef25782331153244cc11c9c3b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e86dd87ef25782331153244cc11c9c3b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e86dd87ef25782331153244cc11c9c3b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e86dd87ef25782331153244cc11c9c3b->m_frame.f_lineno = 359;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___divmod__, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86dd87ef25782331153244cc11c9c3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86dd87ef25782331153244cc11c9c3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e86dd87ef25782331153244cc11c9c3b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e86dd87ef25782331153244cc11c9c3b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e86dd87ef25782331153244cc11c9c3b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e86dd87ef25782331153244cc11c9c3b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e86dd87ef25782331153244cc11c9c3b,
        type_description_1,
        par_self,
        par_other,
        var_res
    );


    // Release cached frame.
    if ( frame_e86dd87ef25782331153244cc11c9c3b == cache_frame_e86dd87ef25782331153244cc11c9c3b )
    {
        Py_DECREF( frame_e86dd87ef25782331153244cc11c9c3b );
    }
    cache_frame_e86dd87ef25782331153244cc11c9c3b = NULL;

    assertFrameObject( frame_e86dd87ef25782331153244cc11c9c3b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_37___mod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_37___mod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_38___divmod__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_quo = NULL;
    PyObject *var_rem = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_5f98bc593df13526054c150916e3939f = NULL;

    struct Nuitka_FrameObject *frame_5f98bc593df13526054c150916e3939f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5f98bc593df13526054c150916e3939f, codeobj_5f98bc593df13526054c150916e3939f, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5f98bc593df13526054c150916e3939f = cache_frame_5f98bc593df13526054c150916e3939f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f98bc593df13526054c150916e3939f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f98bc593df13526054c150916e3939f ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5f98bc593df13526054c150916e3939f->m_frame.f_lineno = 366;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__get_coefficients, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__div );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 367;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_othercoef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_5f98bc593df13526054c150916e3939f->m_frame.f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
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


        type_description_1 = "oooooo";
        exception_lineno = 367;
        goto try_except_handler_4;
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


        type_description_1 = "oooooo";
        exception_lineno = 367;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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

                type_description_1 = "oooooo";
                exception_lineno = 367;
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

        type_description_1 = "oooooo";
        exception_lineno = 367;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_5f98bc593df13526054c150916e3939f );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_5f98bc593df13526054c150916e3939f, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_5f98bc593df13526054c150916e3939f, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ZeroDivisionError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 368;
        type_description_1 = "oooooo";
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
    tmp_assign_source_5 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_e = tmp_assign_source_5;

    tmp_raise_type_1 = var_e;

    CHECK_OBJECT( tmp_raise_type_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 369;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_quo == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_quo = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_rem == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_rem = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_quo;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 372;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 372;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5f98bc593df13526054c150916e3939f->m_frame.f_lineno = 372;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_quo;
        assert( old != NULL );
        var_quo = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_rem;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_domain );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 373;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_window );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 373;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5f98bc593df13526054c150916e3939f->m_frame.f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rem;
        assert( old != NULL );
        var_rem = tmp_assign_source_9;
        Py_DECREF( old );
    }


#if 1
    RESTORE_FRAME_EXCEPTION( frame_5f98bc593df13526054c150916e3939f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_5f98bc593df13526054c150916e3939f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_5f98bc593df13526054c150916e3939f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f98bc593df13526054c150916e3939f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f98bc593df13526054c150916e3939f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f98bc593df13526054c150916e3939f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f98bc593df13526054c150916e3939f,
        type_description_1,
        par_self,
        par_other,
        var_othercoef,
        var_quo,
        var_rem,
        var_e
    );


    // Release cached frame.
    if ( frame_5f98bc593df13526054c150916e3939f == cache_frame_5f98bc593df13526054c150916e3939f )
    {
        Py_DECREF( frame_5f98bc593df13526054c150916e3939f );
    }
    cache_frame_5f98bc593df13526054c150916e3939f = NULL;

    assertFrameObject( frame_5f98bc593df13526054c150916e3939f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_quo;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_rem;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_38___divmod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_38___divmod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_39___pow__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
    PyObject *var_res = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_aff0b167866e6f753494b94373737235 = NULL;

    struct Nuitka_FrameObject *frame_aff0b167866e6f753494b94373737235;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aff0b167866e6f753494b94373737235, codeobj_aff0b167866e6f753494b94373737235, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aff0b167866e6f753494b94373737235 = cache_frame_aff0b167866e6f753494b94373737235;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aff0b167866e6f753494b94373737235 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aff0b167866e6f753494b94373737235 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pow );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 377;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_other;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maxpower );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 377;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_maxpower;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_aff0b167866e6f753494b94373737235->m_frame.f_lineno = 377;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 378;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 378;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_aff0b167866e6f753494b94373737235->m_frame.f_lineno = 378;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_aff0b167866e6f753494b94373737235 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aff0b167866e6f753494b94373737235 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aff0b167866e6f753494b94373737235, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aff0b167866e6f753494b94373737235->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aff0b167866e6f753494b94373737235, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aff0b167866e6f753494b94373737235,
        type_description_1,
        par_self,
        par_other,
        var_coef,
        var_res
    );


    // Release cached frame.
    if ( frame_aff0b167866e6f753494b94373737235 == cache_frame_aff0b167866e6f753494b94373737235 )
    {
        Py_DECREF( frame_aff0b167866e6f753494b94373737235 );
    }
    cache_frame_aff0b167866e6f753494b94373737235 = NULL;

    assertFrameObject( frame_aff0b167866e6f753494b94373737235 );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_39___pow__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_39___pow__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_40___radd__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_7b9b77605427d9faac924ae1ce95cbac = NULL;

    struct Nuitka_FrameObject *frame_7b9b77605427d9faac924ae1ce95cbac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7b9b77605427d9faac924ae1ce95cbac, codeobj_7b9b77605427d9faac924ae1ce95cbac, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7b9b77605427d9faac924ae1ce95cbac = cache_frame_7b9b77605427d9faac924ae1ce95cbac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7b9b77605427d9faac924ae1ce95cbac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7b9b77605427d9faac924ae1ce95cbac ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__add );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 383;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_7b9b77605427d9faac924ae1ce95cbac->m_frame.f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_7b9b77605427d9faac924ae1ce95cbac );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_7b9b77605427d9faac924ae1ce95cbac, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_7b9b77605427d9faac924ae1ce95cbac, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 386;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 386;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_7b9b77605427d9faac924ae1ce95cbac->m_frame.f_lineno = 386;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7b9b77605427d9faac924ae1ce95cbac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_7b9b77605427d9faac924ae1ce95cbac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_7b9b77605427d9faac924ae1ce95cbac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7b9b77605427d9faac924ae1ce95cbac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7b9b77605427d9faac924ae1ce95cbac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7b9b77605427d9faac924ae1ce95cbac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7b9b77605427d9faac924ae1ce95cbac,
        type_description_1,
        par_self,
        par_other,
        var_coef
    );


    // Release cached frame.
    if ( frame_7b9b77605427d9faac924ae1ce95cbac == cache_frame_7b9b77605427d9faac924ae1ce95cbac )
    {
        Py_DECREF( frame_7b9b77605427d9faac924ae1ce95cbac );
    }
    cache_frame_7b9b77605427d9faac924ae1ce95cbac = NULL;

    assertFrameObject( frame_7b9b77605427d9faac924ae1ce95cbac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_40___radd__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_40___radd__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_41___rsub__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_657f9b3d187f510e26d868c2181bf708 = NULL;

    struct Nuitka_FrameObject *frame_657f9b3d187f510e26d868c2181bf708;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_657f9b3d187f510e26d868c2181bf708, codeobj_657f9b3d187f510e26d868c2181bf708, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_657f9b3d187f510e26d868c2181bf708 = cache_frame_657f9b3d187f510e26d868c2181bf708;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_657f9b3d187f510e26d868c2181bf708 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_657f9b3d187f510e26d868c2181bf708 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 390;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_657f9b3d187f510e26d868c2181bf708->m_frame.f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_657f9b3d187f510e26d868c2181bf708 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_657f9b3d187f510e26d868c2181bf708, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_657f9b3d187f510e26d868c2181bf708, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 393;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 393;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_657f9b3d187f510e26d868c2181bf708->m_frame.f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_657f9b3d187f510e26d868c2181bf708 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_657f9b3d187f510e26d868c2181bf708 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_657f9b3d187f510e26d868c2181bf708 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_657f9b3d187f510e26d868c2181bf708, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_657f9b3d187f510e26d868c2181bf708->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_657f9b3d187f510e26d868c2181bf708, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_657f9b3d187f510e26d868c2181bf708,
        type_description_1,
        par_self,
        par_other,
        var_coef
    );


    // Release cached frame.
    if ( frame_657f9b3d187f510e26d868c2181bf708 == cache_frame_657f9b3d187f510e26d868c2181bf708 )
    {
        Py_DECREF( frame_657f9b3d187f510e26d868c2181bf708 );
    }
    cache_frame_657f9b3d187f510e26d868c2181bf708 = NULL;

    assertFrameObject( frame_657f9b3d187f510e26d868c2181bf708 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_41___rsub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_41___rsub__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_42___rmul__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_8089396ecbe14f136daa509080930717 = NULL;

    struct Nuitka_FrameObject *frame_8089396ecbe14f136daa509080930717;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8089396ecbe14f136daa509080930717, codeobj_8089396ecbe14f136daa509080930717, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8089396ecbe14f136daa509080930717 = cache_frame_8089396ecbe14f136daa509080930717;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8089396ecbe14f136daa509080930717 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8089396ecbe14f136daa509080930717 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mul );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 397;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    frame_8089396ecbe14f136daa509080930717->m_frame.f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_8089396ecbe14f136daa509080930717 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8089396ecbe14f136daa509080930717, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8089396ecbe14f136daa509080930717, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_8089396ecbe14f136daa509080930717->m_frame.f_lineno = 400;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8089396ecbe14f136daa509080930717 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_8089396ecbe14f136daa509080930717 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_8089396ecbe14f136daa509080930717 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8089396ecbe14f136daa509080930717, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8089396ecbe14f136daa509080930717->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8089396ecbe14f136daa509080930717, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8089396ecbe14f136daa509080930717,
        type_description_1,
        par_self,
        par_other,
        var_coef
    );


    // Release cached frame.
    if ( frame_8089396ecbe14f136daa509080930717 == cache_frame_8089396ecbe14f136daa509080930717 )
    {
        Py_DECREF( frame_8089396ecbe14f136daa509080930717 );
    }
    cache_frame_8089396ecbe14f136daa509080930717 = NULL;

    assertFrameObject( frame_8089396ecbe14f136daa509080930717 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_42___rmul__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_42___rmul__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_43___rdiv__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8ddd46e4c037de82831f86eceda25f7a = NULL;

    struct Nuitka_FrameObject *frame_8ddd46e4c037de82831f86eceda25f7a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ddd46e4c037de82831f86eceda25f7a, codeobj_8ddd46e4c037de82831f86eceda25f7a, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_8ddd46e4c037de82831f86eceda25f7a = cache_frame_8ddd46e4c037de82831f86eceda25f7a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ddd46e4c037de82831f86eceda25f7a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ddd46e4c037de82831f86eceda25f7a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_8ddd46e4c037de82831f86eceda25f7a->m_frame.f_lineno = 404;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___rfloordiv__, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ddd46e4c037de82831f86eceda25f7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ddd46e4c037de82831f86eceda25f7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ddd46e4c037de82831f86eceda25f7a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ddd46e4c037de82831f86eceda25f7a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ddd46e4c037de82831f86eceda25f7a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ddd46e4c037de82831f86eceda25f7a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ddd46e4c037de82831f86eceda25f7a,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_8ddd46e4c037de82831f86eceda25f7a == cache_frame_8ddd46e4c037de82831f86eceda25f7a )
    {
        Py_DECREF( frame_8ddd46e4c037de82831f86eceda25f7a );
    }
    cache_frame_8ddd46e4c037de82831f86eceda25f7a = NULL;

    assertFrameObject( frame_8ddd46e4c037de82831f86eceda25f7a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_43___rdiv__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_43___rdiv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_44___rtruediv__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_44___rtruediv__ );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_44___rtruediv__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$function_45___rfloordiv__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f = NULL;

    struct Nuitka_FrameObject *frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f, codeobj_cd5b96d4b1e1d16ff2e75f7eea9d8b8f, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f = cache_frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f->m_frame.f_lineno = 412;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___rdivmod__, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f,
        type_description_1,
        par_self,
        par_other,
        var_res
    );


    // Release cached frame.
    if ( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f == cache_frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f )
    {
        Py_DECREF( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f );
    }
    cache_frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f = NULL;

    assertFrameObject( frame_cd5b96d4b1e1d16ff2e75f7eea9d8b8f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_45___rfloordiv__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_45___rfloordiv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_46___rmod__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f = NULL;

    struct Nuitka_FrameObject *frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f, codeobj_7aa0eb6ff55093eb4ff1c21f4d85ed4f, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f = cache_frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f->m_frame.f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___rdivmod__, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f,
        type_description_1,
        par_self,
        par_other,
        var_res
    );


    // Release cached frame.
    if ( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f == cache_frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f )
    {
        Py_DECREF( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f );
    }
    cache_frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f = NULL;

    assertFrameObject( frame_7aa0eb6ff55093eb4ff1c21f4d85ed4f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_46___rmod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_46___rmod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_47___rdivmod__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_quo = NULL;
    PyObject *var_rem = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_15897ef10dfa7cb50a8c3ef0acec4a05 = NULL;

    struct Nuitka_FrameObject *frame_15897ef10dfa7cb50a8c3ef0acec4a05;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_15897ef10dfa7cb50a8c3ef0acec4a05, codeobj_15897ef10dfa7cb50a8c3ef0acec4a05, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_15897ef10dfa7cb50a8c3ef0acec4a05 = cache_frame_15897ef10dfa7cb50a8c3ef0acec4a05;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_15897ef10dfa7cb50a8c3ef0acec4a05 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__div );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 425;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    frame_15897ef10dfa7cb50a8c3ef0acec4a05->m_frame.f_lineno = 425;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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
        exception_lineno = 425;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "ooooo";
        exception_lineno = 425;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
                exception_lineno = 425;
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
        exception_lineno = 425;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_15897ef10dfa7cb50a8c3ef0acec4a05, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_15897ef10dfa7cb50a8c3ef0acec4a05, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ZeroDivisionError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
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
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_e = tmp_assign_source_4;

    tmp_raise_type_1 = var_e;

    CHECK_OBJECT( tmp_raise_type_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 427;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_quo == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_quo = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_rem == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_rem = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_quo;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 430;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 430;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_15897ef10dfa7cb50a8c3ef0acec4a05->m_frame.f_lineno = 430;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_quo;
        assert( old != NULL );
        var_quo = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_rem;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_domain );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 431;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_window );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 431;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_15897ef10dfa7cb50a8c3ef0acec4a05->m_frame.f_lineno = 431;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rem;
        assert( old != NULL );
        var_rem = tmp_assign_source_8;
        Py_DECREF( old );
    }


#if 1
    RESTORE_FRAME_EXCEPTION( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_15897ef10dfa7cb50a8c3ef0acec4a05, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_15897ef10dfa7cb50a8c3ef0acec4a05->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_15897ef10dfa7cb50a8c3ef0acec4a05, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_15897ef10dfa7cb50a8c3ef0acec4a05,
        type_description_1,
        par_self,
        par_other,
        var_quo,
        var_rem,
        var_e
    );


    // Release cached frame.
    if ( frame_15897ef10dfa7cb50a8c3ef0acec4a05 == cache_frame_15897ef10dfa7cb50a8c3ef0acec4a05 )
    {
        Py_DECREF( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );
    }
    cache_frame_15897ef10dfa7cb50a8c3ef0acec4a05 = NULL;

    assertFrameObject( frame_15897ef10dfa7cb50a8c3ef0acec4a05 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_quo;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_rem;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_47___rdivmod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_47___rdivmod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_48___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    int tmp_and_left_truth_4;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_left_value_4;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
    PyObject *tmp_and_right_value_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
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
    PyObject *tmp_source_name_14;
    static struct Nuitka_FrameObject *cache_frame_f44875e5a06c13db02186a4706faedff = NULL;

    struct Nuitka_FrameObject *frame_f44875e5a06c13db02186a4706faedff;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f44875e5a06c13db02186a4706faedff, codeobj_f44875e5a06c13db02186a4706faedff, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f44875e5a06c13db02186a4706faedff = cache_frame_f44875e5a06c13db02186a4706faedff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f44875e5a06c13db02186a4706faedff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f44875e5a06c13db02186a4706faedff ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f44875e5a06c13db02186a4706faedff->m_frame.f_lineno = 439;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_left_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 442;
        type_description_1 = "ooo";
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 440;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_all );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 440;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_other;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_window );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 440;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 440;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f44875e5a06c13db02186a4706faedff->m_frame.f_lineno = 440;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_and_left_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 442;
        type_description_1 = "ooo";
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
    tmp_source_name_9 = par_self;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_coef );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_other;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_coef );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 441;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 441;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 442;
        type_description_1 = "ooo";
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
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_all );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = par_self;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_coef );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_other;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_coef );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_f44875e5a06c13db02186a4706faedff->m_frame.f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_and_right_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_assign_source_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_assign_source_1 = tmp_and_left_value_1;
    and_end_1:;
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_f44875e5a06c13db02186a4706faedff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f44875e5a06c13db02186a4706faedff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f44875e5a06c13db02186a4706faedff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f44875e5a06c13db02186a4706faedff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f44875e5a06c13db02186a4706faedff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f44875e5a06c13db02186a4706faedff,
        type_description_1,
        par_self,
        par_other,
        var_res
    );


    // Release cached frame.
    if ( frame_f44875e5a06c13db02186a4706faedff == cache_frame_f44875e5a06c13db02186a4706faedff )
    {
        Py_DECREF( frame_f44875e5a06c13db02186a4706faedff );
    }
    cache_frame_f44875e5a06c13db02186a4706faedff = NULL;

    assertFrameObject( frame_f44875e5a06c13db02186a4706faedff );

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_48___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_48___eq__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_49___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e32c415f1e42d35118b24ba005f41ef9 = NULL;

    struct Nuitka_FrameObject *frame_e32c415f1e42d35118b24ba005f41ef9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e32c415f1e42d35118b24ba005f41ef9, codeobj_e32c415f1e42d35118b24ba005f41ef9, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_e32c415f1e42d35118b24ba005f41ef9 = cache_frame_e32c415f1e42d35118b24ba005f41ef9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e32c415f1e42d35118b24ba005f41ef9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e32c415f1e42d35118b24ba005f41ef9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_other;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e32c415f1e42d35118b24ba005f41ef9->m_frame.f_lineno = 446;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___eq__, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32c415f1e42d35118b24ba005f41ef9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32c415f1e42d35118b24ba005f41ef9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e32c415f1e42d35118b24ba005f41ef9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e32c415f1e42d35118b24ba005f41ef9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e32c415f1e42d35118b24ba005f41ef9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e32c415f1e42d35118b24ba005f41ef9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e32c415f1e42d35118b24ba005f41ef9,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_e32c415f1e42d35118b24ba005f41ef9 == cache_frame_e32c415f1e42d35118b24ba005f41ef9 )
    {
        Py_DECREF( frame_e32c415f1e42d35118b24ba005f41ef9 );
    }
    cache_frame_e32c415f1e42d35118b24ba005f41ef9 = NULL;

    assertFrameObject( frame_e32c415f1e42d35118b24ba005f41ef9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_49___ne__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_49___ne__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_50_copy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static struct Nuitka_FrameObject *cache_frame_0481d5ec2c5ffa3540d1192b862a2e4d = NULL;

    struct Nuitka_FrameObject *frame_0481d5ec2c5ffa3540d1192b862a2e4d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0481d5ec2c5ffa3540d1192b862a2e4d, codeobj_0481d5ec2c5ffa3540d1192b862a2e4d, module_numpy$polynomial$_polybase, sizeof(void *) );
    frame_0481d5ec2c5ffa3540d1192b862a2e4d = cache_frame_0481d5ec2c5ffa3540d1192b862a2e4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0481d5ec2c5ffa3540d1192b862a2e4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0481d5ec2c5ffa3540d1192b862a2e4d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 461;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 461;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 461;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_0481d5ec2c5ffa3540d1192b862a2e4d->m_frame.f_lineno = 461;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0481d5ec2c5ffa3540d1192b862a2e4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0481d5ec2c5ffa3540d1192b862a2e4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0481d5ec2c5ffa3540d1192b862a2e4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0481d5ec2c5ffa3540d1192b862a2e4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0481d5ec2c5ffa3540d1192b862a2e4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0481d5ec2c5ffa3540d1192b862a2e4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0481d5ec2c5ffa3540d1192b862a2e4d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_0481d5ec2c5ffa3540d1192b862a2e4d == cache_frame_0481d5ec2c5ffa3540d1192b862a2e4d )
    {
        Py_DECREF( frame_0481d5ec2c5ffa3540d1192b862a2e4d );
    }
    cache_frame_0481d5ec2c5ffa3540d1192b862a2e4d = NULL;

    assertFrameObject( frame_0481d5ec2c5ffa3540d1192b862a2e4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_50_copy );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_50_copy );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_51_degree( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_abb87c23a795101cf724a35b2e8e74a1 = NULL;

    struct Nuitka_FrameObject *frame_abb87c23a795101cf724a35b2e8e74a1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_abb87c23a795101cf724a35b2e8e74a1, codeobj_abb87c23a795101cf724a35b2e8e74a1, module_numpy$polynomial$_polybase, sizeof(void *) );
    frame_abb87c23a795101cf724a35b2e8e74a1 = cache_frame_abb87c23a795101cf724a35b2e8e74a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_abb87c23a795101cf724a35b2e8e74a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_abb87c23a795101cf724a35b2e8e74a1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_len_arg_1 = par_self;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 474;
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


        exception_lineno = 474;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb87c23a795101cf724a35b2e8e74a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb87c23a795101cf724a35b2e8e74a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_abb87c23a795101cf724a35b2e8e74a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_abb87c23a795101cf724a35b2e8e74a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_abb87c23a795101cf724a35b2e8e74a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_abb87c23a795101cf724a35b2e8e74a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_abb87c23a795101cf724a35b2e8e74a1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_abb87c23a795101cf724a35b2e8e74a1 == cache_frame_abb87c23a795101cf724a35b2e8e74a1 )
    {
        Py_DECREF( frame_abb87c23a795101cf724a35b2e8e74a1 );
    }
    cache_frame_abb87c23a795101cf724a35b2e8e74a1 = NULL;

    assertFrameObject( frame_abb87c23a795101cf724a35b2e8e74a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_51_degree );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_51_degree );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_52_cutdeg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_deg = python_pars[ 1 ];
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_694040e1509a20c6b062ea80796bbe3b = NULL;

    struct Nuitka_FrameObject *frame_694040e1509a20c6b062ea80796bbe3b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_694040e1509a20c6b062ea80796bbe3b, codeobj_694040e1509a20c6b062ea80796bbe3b, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_694040e1509a20c6b062ea80796bbe3b = cache_frame_694040e1509a20c6b062ea80796bbe3b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_694040e1509a20c6b062ea80796bbe3b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_694040e1509a20c6b062ea80796bbe3b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_truncate );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 499;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_deg;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_1;
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 499;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_694040e1509a20c6b062ea80796bbe3b->m_frame.f_lineno = 499;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 499;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_694040e1509a20c6b062ea80796bbe3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_694040e1509a20c6b062ea80796bbe3b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_694040e1509a20c6b062ea80796bbe3b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_694040e1509a20c6b062ea80796bbe3b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_694040e1509a20c6b062ea80796bbe3b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_694040e1509a20c6b062ea80796bbe3b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_694040e1509a20c6b062ea80796bbe3b,
        type_description_1,
        par_self,
        par_deg
    );


    // Release cached frame.
    if ( frame_694040e1509a20c6b062ea80796bbe3b == cache_frame_694040e1509a20c6b062ea80796bbe3b )
    {
        Py_DECREF( frame_694040e1509a20c6b062ea80796bbe3b );
    }
    cache_frame_694040e1509a20c6b062ea80796bbe3b = NULL;

    assertFrameObject( frame_694040e1509a20c6b062ea80796bbe3b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_52_cutdeg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_52_cutdeg );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_53_trim( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_8f2518bb51a465f5cea75952827b578d = NULL;

    struct Nuitka_FrameObject *frame_8f2518bb51a465f5cea75952827b578d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f2518bb51a465f5cea75952827b578d, codeobj_8f2518bb51a465f5cea75952827b578d, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f2518bb51a465f5cea75952827b578d = cache_frame_8f2518bb51a465f5cea75952827b578d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f2518bb51a465f5cea75952827b578d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f2518bb51a465f5cea75952827b578d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trimcoef );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_tol;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_8f2518bb51a465f5cea75952827b578d->m_frame.f_lineno = 521;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 522;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 522;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_8f2518bb51a465f5cea75952827b578d->m_frame.f_lineno = 522;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f2518bb51a465f5cea75952827b578d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f2518bb51a465f5cea75952827b578d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f2518bb51a465f5cea75952827b578d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f2518bb51a465f5cea75952827b578d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f2518bb51a465f5cea75952827b578d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f2518bb51a465f5cea75952827b578d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f2518bb51a465f5cea75952827b578d,
        type_description_1,
        par_self,
        par_tol,
        var_coef
    );


    // Release cached frame.
    if ( frame_8f2518bb51a465f5cea75952827b578d == cache_frame_8f2518bb51a465f5cea75952827b578d )
    {
        Py_DECREF( frame_8f2518bb51a465f5cea75952827b578d );
    }
    cache_frame_8f2518bb51a465f5cea75952827b578d = NULL;

    assertFrameObject( frame_8f2518bb51a465f5cea75952827b578d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_53_trim );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_53_trim );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_54_truncate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_isize = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    static struct Nuitka_FrameObject *cache_frame_f2321f1532b193fd0c4a30c3e9492b03 = NULL;

    struct Nuitka_FrameObject *frame_f2321f1532b193fd0c4a30c3e9492b03;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f2321f1532b193fd0c4a30c3e9492b03, codeobj_f2321f1532b193fd0c4a30c3e9492b03, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f2321f1532b193fd0c4a30c3e9492b03 = cache_frame_f2321f1532b193fd0c4a30c3e9492b03;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f2321f1532b193fd0c4a30c3e9492b03 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f2321f1532b193fd0c4a30c3e9492b03 ) == 2 ); // Frame stack

    // Framed code:
    tmp_int_arg_1 = par_size;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_isize == NULL );
    var_isize = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_isize;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_size;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 545;
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
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_2 = var_isize;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_or_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "oooo";
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

        exception_lineno = 545;
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
    tmp_make_exception_arg_1 = const_str_digest_a8b047c55fad201071d372dfb7ac4cca;
    frame_f2321f1532b193fd0c4a30c3e9492b03->m_frame.f_lineno = 546;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 546;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = var_isize;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 547;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = var_isize;

    CHECK_OBJECT( tmp_slice_upper_1 );
    tmp_assign_source_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_3;

    branch_end_2:;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 551;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 551;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_f2321f1532b193fd0c4a30c3e9492b03->m_frame.f_lineno = 551;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2321f1532b193fd0c4a30c3e9492b03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2321f1532b193fd0c4a30c3e9492b03 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2321f1532b193fd0c4a30c3e9492b03 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2321f1532b193fd0c4a30c3e9492b03, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2321f1532b193fd0c4a30c3e9492b03->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2321f1532b193fd0c4a30c3e9492b03, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f2321f1532b193fd0c4a30c3e9492b03,
        type_description_1,
        par_self,
        par_size,
        var_isize,
        var_coef
    );


    // Release cached frame.
    if ( frame_f2321f1532b193fd0c4a30c3e9492b03 == cache_frame_f2321f1532b193fd0c4a30c3e9492b03 )
    {
        Py_DECREF( frame_f2321f1532b193fd0c4a30c3e9492b03 );
    }
    cache_frame_f2321f1532b193fd0c4a30c3e9492b03 = NULL;

    assertFrameObject( frame_f2321f1532b193fd0c4a30c3e9492b03 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_54_truncate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)var_isize );
    Py_DECREF( var_isize );
    var_isize = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_isize );
    var_isize = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_54_truncate );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_55_convert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_domain = python_pars[ 1 ];
    PyObject *par_kind = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_152e1878f232aaff60a007859ac33e6a = NULL;

    struct Nuitka_FrameObject *frame_152e1878f232aaff60a007859ac33e6a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_152e1878f232aaff60a007859ac33e6a, codeobj_152e1878f232aaff60a007859ac33e6a, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_152e1878f232aaff60a007859ac33e6a = cache_frame_152e1878f232aaff60a007859ac33e6a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_152e1878f232aaff60a007859ac33e6a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_152e1878f232aaff60a007859ac33e6a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_kind;

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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_kind;
        assert( old != NULL );
        par_kind = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_domain;

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
    tmp_source_name_2 = par_kind;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 588;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_3 = par_window;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_kind;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_called_name_1 = par_self;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_source_name_4 = par_kind;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_identity );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_domain;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_window;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_window;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_152e1878f232aaff60a007859ac33e6a->m_frame.f_lineno = 591;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_152e1878f232aaff60a007859ac33e6a->m_frame.f_lineno = 591;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_152e1878f232aaff60a007859ac33e6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_152e1878f232aaff60a007859ac33e6a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_152e1878f232aaff60a007859ac33e6a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_152e1878f232aaff60a007859ac33e6a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_152e1878f232aaff60a007859ac33e6a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_152e1878f232aaff60a007859ac33e6a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_152e1878f232aaff60a007859ac33e6a,
        type_description_1,
        par_self,
        par_domain,
        par_kind,
        par_window
    );


    // Release cached frame.
    if ( frame_152e1878f232aaff60a007859ac33e6a == cache_frame_152e1878f232aaff60a007859ac33e6a )
    {
        Py_DECREF( frame_152e1878f232aaff60a007859ac33e6a );
    }
    cache_frame_152e1878f232aaff60a007859ac33e6a = NULL;

    assertFrameObject( frame_152e1878f232aaff60a007859ac33e6a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_55_convert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

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

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_55_convert );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_56_mapparms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_6852aee5ef675197a742091f8a384766 = NULL;

    struct Nuitka_FrameObject *frame_6852aee5ef675197a742091f8a384766;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6852aee5ef675197a742091f8a384766, codeobj_6852aee5ef675197a742091f8a384766, module_numpy$polynomial$_polybase, sizeof(void *) );
    frame_6852aee5ef675197a742091f8a384766 = cache_frame_6852aee5ef675197a742091f8a384766;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6852aee5ef675197a742091f8a384766 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6852aee5ef675197a742091f8a384766 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 620;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 620;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 620;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_6852aee5ef675197a742091f8a384766->m_frame.f_lineno = 620;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6852aee5ef675197a742091f8a384766 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6852aee5ef675197a742091f8a384766 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6852aee5ef675197a742091f8a384766 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6852aee5ef675197a742091f8a384766, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6852aee5ef675197a742091f8a384766->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6852aee5ef675197a742091f8a384766, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6852aee5ef675197a742091f8a384766,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6852aee5ef675197a742091f8a384766 == cache_frame_6852aee5ef675197a742091f8a384766 )
    {
        Py_DECREF( frame_6852aee5ef675197a742091f8a384766 );
    }
    cache_frame_6852aee5ef675197a742091f8a384766 = NULL;

    assertFrameObject( frame_6852aee5ef675197a742091f8a384766 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_56_mapparms );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_56_mapparms );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_57_integ( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_lbnd = python_pars[ 3 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_73bfac3c7c1a2ecef04508754c9cd26c = NULL;

    struct Nuitka_FrameObject *frame_73bfac3c7c1a2ecef04508754c9cd26c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_73bfac3c7c1a2ecef04508754c9cd26c, codeobj_73bfac3c7c1a2ecef04508754c9cd26c, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_73bfac3c7c1a2ecef04508754c9cd26c = cache_frame_73bfac3c7c1a2ecef04508754c9cd26c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_73bfac3c7c1a2ecef04508754c9cd26c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_73bfac3c7c1a2ecef04508754c9cd26c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_73bfac3c7c1a2ecef04508754c9cd26c->m_frame.f_lineno = 647;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_mapparms );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "ooooooo";
        exception_lineno = 647;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 647;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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

                type_description_1 = "ooooooo";
                exception_lineno = 647;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooo";
        exception_lineno = 647;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_off = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_scl = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = par_lbnd;

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
    tmp_assign_source_6 = const_int_0;
    {
        PyObject *old = par_lbnd;
        assert( old != NULL );
        par_lbnd = tmp_assign_source_6;
        Py_INCREF( par_lbnd );
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_left_name_1 = var_off;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = var_scl;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_lbnd;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_lbnd;
        assert( old != NULL );
        par_lbnd = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_end_1:;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__int );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 652;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_m;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_k;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_lbnd;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_left_name_3 = const_float_1_0;
    tmp_right_name_3 = var_scl;

    CHECK_OBJECT( tmp_right_name_3 );
    tmp_args_element_name_5 = BINARY_OPERATION_TRUEDIV( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 652;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_73bfac3c7c1a2ecef04508754c9cd26c->m_frame.f_lineno = 652;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_8;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 653;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 653;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_73bfac3c7c1a2ecef04508754c9cd26c->m_frame.f_lineno = 653;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73bfac3c7c1a2ecef04508754c9cd26c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_73bfac3c7c1a2ecef04508754c9cd26c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_73bfac3c7c1a2ecef04508754c9cd26c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_73bfac3c7c1a2ecef04508754c9cd26c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_73bfac3c7c1a2ecef04508754c9cd26c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_73bfac3c7c1a2ecef04508754c9cd26c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_73bfac3c7c1a2ecef04508754c9cd26c,
        type_description_1,
        par_self,
        par_m,
        par_k,
        par_lbnd,
        var_off,
        var_scl,
        var_coef
    );


    // Release cached frame.
    if ( frame_73bfac3c7c1a2ecef04508754c9cd26c == cache_frame_73bfac3c7c1a2ecef04508754c9cd26c )
    {
        Py_DECREF( frame_73bfac3c7c1a2ecef04508754c9cd26c );
    }
    cache_frame_73bfac3c7c1a2ecef04508754c9cd26c = NULL;

    assertFrameObject( frame_73bfac3c7c1a2ecef04508754c9cd26c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_57_integ );
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

    CHECK_OBJECT( (PyObject *)par_lbnd );
    Py_DECREF( par_lbnd );
    par_lbnd = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( par_lbnd );
    par_lbnd = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_57_integ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_58_deriv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_6a412e783db0bc4c89e7dcd4a78daf71 = NULL;

    struct Nuitka_FrameObject *frame_6a412e783db0bc4c89e7dcd4a78daf71;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a412e783db0bc4c89e7dcd4a78daf71, codeobj_6a412e783db0bc4c89e7dcd4a78daf71, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a412e783db0bc4c89e7dcd4a78daf71 = cache_frame_6a412e783db0bc4c89e7dcd4a78daf71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a412e783db0bc4c89e7dcd4a78daf71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a412e783db0bc4c89e7dcd4a78daf71 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6a412e783db0bc4c89e7dcd4a78daf71->m_frame.f_lineno = 673;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_mapparms );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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
        exception_lineno = 673;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "ooooo";
        exception_lineno = 673;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
                exception_lineno = 673;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooo";
        exception_lineno = 673;
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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_off = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_scl = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__der );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 674;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_m;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = var_scl;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_6a412e783db0bc4c89e7dcd4a78daf71->m_frame.f_lineno = 674;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_6;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 675;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 675;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_6a412e783db0bc4c89e7dcd4a78daf71->m_frame.f_lineno = 675;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a412e783db0bc4c89e7dcd4a78daf71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a412e783db0bc4c89e7dcd4a78daf71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a412e783db0bc4c89e7dcd4a78daf71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a412e783db0bc4c89e7dcd4a78daf71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a412e783db0bc4c89e7dcd4a78daf71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a412e783db0bc4c89e7dcd4a78daf71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a412e783db0bc4c89e7dcd4a78daf71,
        type_description_1,
        par_self,
        par_m,
        var_off,
        var_scl,
        var_coef
    );


    // Release cached frame.
    if ( frame_6a412e783db0bc4c89e7dcd4a78daf71 == cache_frame_6a412e783db0bc4c89e7dcd4a78daf71 )
    {
        Py_DECREF( frame_6a412e783db0bc4c89e7dcd4a78daf71 );
    }
    cache_frame_6a412e783db0bc4c89e7dcd4a78daf71 = NULL;

    assertFrameObject( frame_6a412e783db0bc4c89e7dcd4a78daf71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_58_deriv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_58_deriv );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_59_roots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static struct Nuitka_FrameObject *cache_frame_ad6106655af09e9ad201530c832b5821 = NULL;

    struct Nuitka_FrameObject *frame_ad6106655af09e9ad201530c832b5821;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad6106655af09e9ad201530c832b5821, codeobj_ad6106655af09e9ad201530c832b5821, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *) );
    frame_ad6106655af09e9ad201530c832b5821 = cache_frame_ad6106655af09e9ad201530c832b5821;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad6106655af09e9ad201530c832b5821 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad6106655af09e9ad201530c832b5821 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__roots );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 689;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 689;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_ad6106655af09e9ad201530c832b5821->m_frame.f_lineno = 689;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 689;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 690;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mapdomain );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_roots;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 690;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 690;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_ad6106655af09e9ad201530c832b5821->m_frame.f_lineno = 690;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad6106655af09e9ad201530c832b5821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad6106655af09e9ad201530c832b5821 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad6106655af09e9ad201530c832b5821 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad6106655af09e9ad201530c832b5821, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad6106655af09e9ad201530c832b5821->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad6106655af09e9ad201530c832b5821, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad6106655af09e9ad201530c832b5821,
        type_description_1,
        par_self,
        var_roots
    );


    // Release cached frame.
    if ( frame_ad6106655af09e9ad201530c832b5821 == cache_frame_ad6106655af09e9ad201530c832b5821 )
    {
        Py_DECREF( frame_ad6106655af09e9ad201530c832b5821 );
    }
    cache_frame_ad6106655af09e9ad201530c832b5821 = NULL;

    assertFrameObject( frame_ad6106655af09e9ad201530c832b5821 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_59_roots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_roots );
    Py_DECREF( var_roots );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_59_roots );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_60_linspace( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *var_x = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_cb51668401798bb667bdfa3b0584f8e2 = NULL;

    struct Nuitka_FrameObject *frame_cb51668401798bb667bdfa3b0584f8e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb51668401798bb667bdfa3b0584f8e2, codeobj_cb51668401798bb667bdfa3b0584f8e2, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb51668401798bb667bdfa3b0584f8e2 = cache_frame_cb51668401798bb667bdfa3b0584f8e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb51668401798bb667bdfa3b0584f8e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb51668401798bb667bdfa3b0584f8e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 720;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linspace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 720;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = par_domain;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 720;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_domain;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 720;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_n;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_cb51668401798bb667bdfa3b0584f8e2->m_frame.f_lineno = 720;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 720;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_2;

    tmp_called_name_2 = par_self;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = var_x;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_cb51668401798bb667bdfa3b0584f8e2->m_frame.f_lineno = 721;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_3;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb51668401798bb667bdfa3b0584f8e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb51668401798bb667bdfa3b0584f8e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb51668401798bb667bdfa3b0584f8e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb51668401798bb667bdfa3b0584f8e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb51668401798bb667bdfa3b0584f8e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb51668401798bb667bdfa3b0584f8e2,
        type_description_1,
        par_self,
        par_n,
        par_domain,
        var_x,
        var_y
    );


    // Release cached frame.
    if ( frame_cb51668401798bb667bdfa3b0584f8e2 == cache_frame_cb51668401798bb667bdfa3b0584f8e2 )
    {
        Py_DECREF( frame_cb51668401798bb667bdfa3b0584f8e2 );
    }
    cache_frame_cb51668401798bb667bdfa3b0584f8e2 = NULL;

    assertFrameObject( frame_cb51668401798bb667bdfa3b0584f8e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_x;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_y;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_60_linspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_60_linspace );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_61_fit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_deg = python_pars[ 3 ];
    PyObject *par_domain = python_pars[ 4 ];
    PyObject *par_rcond = python_pars[ 5 ];
    PyObject *par_full = python_pars[ 6 ];
    PyObject *par_w = python_pars[ 7 ];
    PyObject *par_window = python_pars[ 8 ];
    PyObject *var_xnew = NULL;
    PyObject *var_res = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_status = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_cfd91668a7c427c6af3bfb91f252780a = NULL;

    struct Nuitka_FrameObject *frame_cfd91668a7c427c6af3bfb91f252780a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cfd91668a7c427c6af3bfb91f252780a, codeobj_cfd91668a7c427c6af3bfb91f252780a, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cfd91668a7c427c6af3bfb91f252780a = cache_frame_cfd91668a7c427c6af3bfb91f252780a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cfd91668a7c427c6af3bfb91f252780a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cfd91668a7c427c6af3bfb91f252780a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_domain;

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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 796;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_cfd91668a7c427c6af3bfb91f252780a->m_frame.f_lineno = 796;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getdomain, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 796;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_type_arg_1 = par_domain;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_1 != NULL );
    tmp_compexpr_right_1 = (PyObject *)&PyList_Type;
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
    tmp_len_arg_1 = par_domain;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 797;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 797;
        type_description_1 = "ooooooooooooo";
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

        exception_lineno = 797;
        type_description_1 = "ooooooooooooo";
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
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 798;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_compare_left_2 = par_window;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 801;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 803;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mapdomain );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 803;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_x;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_domain;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 803;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_window;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_cfd91668a7c427c6af3bfb91f252780a->m_frame.f_lineno = 803;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 803;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_xnew == NULL );
    var_xnew = tmp_assign_source_4;

    tmp_source_name_4 = par_cls;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__fit );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 804;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_xnew;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_y;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_deg;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_w;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain_w;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_rcond;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_rcond;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_full;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_full;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_cfd91668a7c427c6af3bfb91f252780a->m_frame.f_lineno = 804;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 804;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_5;

    tmp_cond_value_2 = par_full;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 805;
        type_description_1 = "ooooooooooooo";
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
    // Tried code:
    tmp_iter_arg_1 = var_res;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 806;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;

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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 806;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;

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


        type_description_1 = "ooooooooooooo";
        exception_lineno = 806;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;

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

                type_description_1 = "ooooooooooooo";
                exception_lineno = 806;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooo";
        exception_lineno = 806;
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

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_9 );
    assert( var_coef == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_coef = tmp_assign_source_9;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_status == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_status = tmp_assign_source_10;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_return_value = PyTuple_New( 2 );
    tmp_called_name_3 = par_cls;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_coef;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_4 = par_domain;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 807;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_domain;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = par_window;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain_window;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_cfd91668a7c427c6af3bfb91f252780a->m_frame.f_lineno = 807;
    tmp_tuple_element_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 807;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_status;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_11 = var_res;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_coef == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_coef = tmp_assign_source_11;

    tmp_called_name_4 = par_cls;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_coef;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_dict_value_6 = par_domain;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 810;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_domain;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = par_window;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_window;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_cfd91668a7c427c6af3bfb91f252780a->m_frame.f_lineno = 810;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 810;
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfd91668a7c427c6af3bfb91f252780a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfd91668a7c427c6af3bfb91f252780a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfd91668a7c427c6af3bfb91f252780a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cfd91668a7c427c6af3bfb91f252780a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cfd91668a7c427c6af3bfb91f252780a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cfd91668a7c427c6af3bfb91f252780a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cfd91668a7c427c6af3bfb91f252780a,
        type_description_1,
        par_cls,
        par_x,
        par_y,
        par_deg,
        par_domain,
        par_rcond,
        par_full,
        par_w,
        par_window,
        var_xnew,
        var_res,
        var_coef,
        var_status
    );


    // Release cached frame.
    if ( frame_cfd91668a7c427c6af3bfb91f252780a == cache_frame_cfd91668a7c427c6af3bfb91f252780a )
    {
        Py_DECREF( frame_cfd91668a7c427c6af3bfb91f252780a );
    }
    cache_frame_cfd91668a7c427c6af3bfb91f252780a = NULL;

    assertFrameObject( frame_cfd91668a7c427c6af3bfb91f252780a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_61_fit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_xnew );
    Py_DECREF( var_xnew );
    var_xnew = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_xnew );
    var_xnew = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_61_fit );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_62_fromroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_roots = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *var_deg = NULL;
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_rnew = NULL;
    PyObject *var_coef = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    int tmp_res;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static struct Nuitka_FrameObject *cache_frame_10fdab93b63440fd2e54f5b445688819 = NULL;

    struct Nuitka_FrameObject *frame_10fdab93b63440fd2e54f5b445688819;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10fdab93b63440fd2e54f5b445688819, codeobj_10fdab93b63440fd2e54f5b445688819, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10fdab93b63440fd2e54f5b445688819 = cache_frame_10fdab93b63440fd2e54f5b445688819;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10fdab93b63440fd2e54f5b445688819 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10fdab93b63440fd2e54f5b445688819 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 838;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 838;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_roots;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_10fdab93b63440fd2e54f5b445688819->m_frame.f_lineno = 838;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 838;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 838;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 838;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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

                type_description_1 = "ooooooooo";
                exception_lineno = 838;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooo";
        exception_lineno = 838;
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

    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = par_roots;
        assert( old != NULL );
        par_roots = tmp_assign_source_3;
        Py_INCREF( par_roots );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_compare_left_1 = par_domain;

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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 840;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_roots;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_10fdab93b63440fd2e54f5b445688819->m_frame.f_lineno = 840;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getdomain, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_4;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_type_arg_1 = par_domain;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_1 != NULL );
    tmp_compexpr_right_1 = (PyObject *)&PyList_Type;
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
    tmp_len_arg_1 = par_domain;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 841;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 841;
        type_description_1 = "ooooooooo";
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

        exception_lineno = 841;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 842;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_compare_left_2 = par_window;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_cls;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 845;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_6;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_2 = par_roots;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_assign_source_7 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 847;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_deg == NULL );
    var_deg = tmp_assign_source_7;

    // Tried code:
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 848;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mapparms );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = par_domain;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 848;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = par_window;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_10fdab93b63440fd2e54f5b445688819->m_frame.f_lineno = 848;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;

    // Tried code:
    tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


        type_description_1 = "ooooooooo";
        exception_lineno = 848;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 1 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 848;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;

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

                type_description_1 = "ooooooooo";
                exception_lineno = 848;
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

        type_description_1 = "ooooooooo";
        exception_lineno = 848;
        goto try_except_handler_5;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_off = tmp_assign_source_11;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_scl = tmp_assign_source_12;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_left_name_1 = var_off;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = var_scl;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = par_roots;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 849;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 849;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_rnew == NULL );
    var_rnew = tmp_assign_source_13;

    tmp_called_instance_2 = par_cls;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_4 = var_rnew;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_10fdab93b63440fd2e54f5b445688819->m_frame.f_lineno = 850;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_left_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__fromroots, call_args );
    }

    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = var_scl;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_right_name_4 = var_deg;

    CHECK_OBJECT( tmp_right_name_4 );
    tmp_right_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 850;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_14;

    tmp_called_name_3 = par_cls;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_coef;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_domain;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 851;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_domain;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_window;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain_window;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_10fdab93b63440fd2e54f5b445688819->m_frame.f_lineno = 851;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 851;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10fdab93b63440fd2e54f5b445688819 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10fdab93b63440fd2e54f5b445688819 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10fdab93b63440fd2e54f5b445688819 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10fdab93b63440fd2e54f5b445688819, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10fdab93b63440fd2e54f5b445688819->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10fdab93b63440fd2e54f5b445688819, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10fdab93b63440fd2e54f5b445688819,
        type_description_1,
        par_cls,
        par_roots,
        par_domain,
        par_window,
        var_deg,
        var_off,
        var_scl,
        var_rnew,
        var_coef
    );


    // Release cached frame.
    if ( frame_10fdab93b63440fd2e54f5b445688819 == cache_frame_10fdab93b63440fd2e54f5b445688819 )
    {
        Py_DECREF( frame_10fdab93b63440fd2e54f5b445688819 );
    }
    cache_frame_10fdab93b63440fd2e54f5b445688819 = NULL;

    assertFrameObject( frame_10fdab93b63440fd2e54f5b445688819 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_62_fromroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_deg );
    Py_DECREF( var_deg );
    var_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_rnew );
    Py_DECREF( var_rnew );
    var_rnew = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_deg );
    var_deg = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_rnew );
    var_rnew = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_62_fromroots );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_63_identity( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_domain = python_pars[ 1 ];
    PyObject *par_window = python_pars[ 2 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_4ea299c38d6a7ab6ed2a63c4907dfedb = NULL;

    struct Nuitka_FrameObject *frame_4ea299c38d6a7ab6ed2a63c4907dfedb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ea299c38d6a7ab6ed2a63c4907dfedb, codeobj_4ea299c38d6a7ab6ed2a63c4907dfedb, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ea299c38d6a7ab6ed2a63c4907dfedb = cache_frame_4ea299c38d6a7ab6ed2a63c4907dfedb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ea299c38d6a7ab6ed2a63c4907dfedb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ea299c38d6a7ab6ed2a63c4907dfedb ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 879;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_window;

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
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 881;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 882;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_window;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_domain;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_4ea299c38d6a7ab6ed2a63c4907dfedb->m_frame.f_lineno = 882;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_mapparms, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        type_description_1 = "oooooo";
        exception_lineno = 882;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        type_description_1 = "oooooo";
        exception_lineno = 882;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

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

                type_description_1 = "oooooo";
                exception_lineno = 882;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooo";
        exception_lineno = 882;
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

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_off = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_scl = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_2 = par_cls;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_3 = var_off;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = var_scl;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_4ea299c38d6a7ab6ed2a63c4907dfedb->m_frame.f_lineno = 883;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain__line, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 883;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_8;

    tmp_called_name_1 = par_cls;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_5 = var_coef;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = par_domain;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = par_window;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_4ea299c38d6a7ab6ed2a63c4907dfedb->m_frame.f_lineno = 884;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 884;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ea299c38d6a7ab6ed2a63c4907dfedb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ea299c38d6a7ab6ed2a63c4907dfedb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ea299c38d6a7ab6ed2a63c4907dfedb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ea299c38d6a7ab6ed2a63c4907dfedb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ea299c38d6a7ab6ed2a63c4907dfedb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ea299c38d6a7ab6ed2a63c4907dfedb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ea299c38d6a7ab6ed2a63c4907dfedb,
        type_description_1,
        par_cls,
        par_domain,
        par_window,
        var_off,
        var_scl,
        var_coef
    );


    // Release cached frame.
    if ( frame_4ea299c38d6a7ab6ed2a63c4907dfedb == cache_frame_4ea299c38d6a7ab6ed2a63c4907dfedb )
    {
        Py_DECREF( frame_4ea299c38d6a7ab6ed2a63c4907dfedb );
    }
    cache_frame_4ea299c38d6a7ab6ed2a63c4907dfedb = NULL;

    assertFrameObject( frame_4ea299c38d6a7ab6ed2a63c4907dfedb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_63_identity );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_63_identity );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_64_basis( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_deg = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *var_ideg = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
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
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_4aee09e46cad176ae4aca71ebfa513f0 = NULL;

    struct Nuitka_FrameObject *frame_4aee09e46cad176ae4aca71ebfa513f0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4aee09e46cad176ae4aca71ebfa513f0, codeobj_4aee09e46cad176ae4aca71ebfa513f0, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4aee09e46cad176ae4aca71ebfa513f0 = cache_frame_4aee09e46cad176ae4aca71ebfa513f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4aee09e46cad176ae4aca71ebfa513f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4aee09e46cad176ae4aca71ebfa513f0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 916;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_window;

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
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 918;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_int_arg_1 = par_deg;

    CHECK_OBJECT( tmp_int_arg_1 );
    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 919;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ideg == NULL );
    var_ideg = tmp_assign_source_3;

    tmp_compexpr_left_1 = var_ideg;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_deg;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 921;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 921;
        type_description_1 = "ooooo";
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
    tmp_compexpr_left_2 = var_ideg;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 921;
        type_description_1 = "ooooo";
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

        exception_lineno = 921;
        type_description_1 = "ooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_8f0d4dcf823408b98925ed1444c1d1eb;
    frame_4aee09e46cad176ae4aca71ebfa513f0->m_frame.f_lineno = 922;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 922;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_name_1 = par_cls;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_left_name_2 = LIST_COPY( const_list_int_0_list );
    tmp_right_name_1 = var_ideg;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = LIST_COPY( const_list_int_pos_1_list );
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_domain;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_window;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_4aee09e46cad176ae4aca71ebfa513f0->m_frame.f_lineno = 923;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aee09e46cad176ae4aca71ebfa513f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aee09e46cad176ae4aca71ebfa513f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4aee09e46cad176ae4aca71ebfa513f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4aee09e46cad176ae4aca71ebfa513f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4aee09e46cad176ae4aca71ebfa513f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4aee09e46cad176ae4aca71ebfa513f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4aee09e46cad176ae4aca71ebfa513f0,
        type_description_1,
        par_cls,
        par_deg,
        par_domain,
        par_window,
        var_ideg
    );


    // Release cached frame.
    if ( frame_4aee09e46cad176ae4aca71ebfa513f0 == cache_frame_4aee09e46cad176ae4aca71ebfa513f0 )
    {
        Py_DECREF( frame_4aee09e46cad176ae4aca71ebfa513f0 );
    }
    cache_frame_4aee09e46cad176ae4aca71ebfa513f0 = NULL;

    assertFrameObject( frame_4aee09e46cad176ae4aca71ebfa513f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_64_basis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_64_basis );
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


static PyObject *impl_numpy$polynomial$_polybase$$$function_65_cast( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_series = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_ca10a3ca55f7676cb2043628b7c2f412 = NULL;

    struct Nuitka_FrameObject *frame_ca10a3ca55f7676cb2043628b7c2f412;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca10a3ca55f7676cb2043628b7c2f412, codeobj_ca10a3ca55f7676cb2043628b7c2f412, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ca10a3ca55f7676cb2043628b7c2f412 = cache_frame_ca10a3ca55f7676cb2043628b7c2f412;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca10a3ca55f7676cb2043628b7c2f412 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca10a3ca55f7676cb2043628b7c2f412 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 962;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_window;

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
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 964;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_instance_1 = par_series;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = par_domain;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_cls;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_window;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_ca10a3ca55f7676cb2043628b7c2f412->m_frame.f_lineno = 965;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_convert, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 965;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca10a3ca55f7676cb2043628b7c2f412 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca10a3ca55f7676cb2043628b7c2f412 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca10a3ca55f7676cb2043628b7c2f412 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca10a3ca55f7676cb2043628b7c2f412, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca10a3ca55f7676cb2043628b7c2f412->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca10a3ca55f7676cb2043628b7c2f412, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca10a3ca55f7676cb2043628b7c2f412,
        type_description_1,
        par_cls,
        par_series,
        par_domain,
        par_window
    );


    // Release cached frame.
    if ( frame_ca10a3ca55f7676cb2043628b7c2f412 == cache_frame_ca10a3ca55f7676cb2043628b7c2f412 )
    {
        Py_DECREF( frame_ca10a3ca55f7676cb2043628b7c2f412 );
    }
    cache_frame_ca10a3ca55f7676cb2043628b7c2f412 = NULL;

    assertFrameObject( frame_ca10a3ca55f7676cb2043628b7c2f412 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_65_cast );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_series );
    Py_DECREF( par_series );
    par_series = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_series );
    Py_DECREF( par_series );
    par_series = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$function_65_cast );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_10__int(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_10__int,
        const_str_plain__int,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a029fac50c3aa38b2d09f7bfdb19627c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_11__der(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_11__der,
        const_str_plain__der,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f265a3570e4fe5ffcf34917e97824fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_12__fit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_12__fit,
        const_str_plain__fit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b9b15bfbe7bde35806d4247d1a5690d0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_13__line(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_13__line,
        const_str_plain__line,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2bd7e85e4f38bfd76ea19c5687ca0752,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_14__roots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_14__roots,
        const_str_plain__roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_27fffa9a0c306ac97f52c12071afccd9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_15__fromroots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_15__fromroots,
        const_str_plain__fromroots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8ad82b3a9c92b1895826934ce5ea100c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_16_has_samecoef(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_16_has_samecoef,
        const_str_plain_has_samecoef,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ccf403ec1fa37aa472ef05d1fe56cc84,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_c6764a6d39f227f5a7a04f77b96f3b53,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_17_has_samedomain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_17_has_samedomain,
        const_str_plain_has_samedomain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_185529345ae2db8e50c37972718579b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_98e31202befde89b11571b0707e8d968,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_18_has_samewindow(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_18_has_samewindow,
        const_str_plain_has_samewindow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d3392f00b501968d36a5b4ff8ab064a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_151b92710a27f5234231f69b96a29708,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_19_has_sametype(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_19_has_sametype,
        const_str_plain_has_sametype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_136b040578600222ef25154899bcf0c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5dae058d009b7a6670aa297718f6267e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_1_domain(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_1_domain,
        const_str_plain_domain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_71a1264da968ce17fc166b48b3df9c2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_20__get_coefficients(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_20__get_coefficients,
        const_str_plain__get_coefficients,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_21d8c972fd54e04a477ac00e4d686b64,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_7906fb1fdba98836d03daef6c58d7f59,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_21___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cfb6fd4956e0fc088e4ed779da80911d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_22___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_22___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4404a90cb968482be129da8e79d75d93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_23___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_23___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_00ac3156fa10ad423f2b75f952138f11,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_24___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_24___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f254a2edbd688e0d8e19b24851092302,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_25___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_25___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2197abb1f749242154714c90066b06cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_26___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_26___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_376708cfcbb1a29c965759934005ec25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_27___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_27___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a14279d65cd0a6ffb5524fdcdcf98095,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_28___len__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_28___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_526162f1dae44fe7e2b6b89805640ee2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_29___neg__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_29___neg__,
        const_str_plain___neg__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_daba63434e3453839cd2c823c344fda3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_2_window(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_2_window,
        const_str_plain_window,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7ea6b26a0b74a4b962ae907987897114,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_30___pos__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_30___pos__,
        const_str_plain___pos__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_20f4f3d4021f4fc2f13244a8f68638bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_31___add__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_31___add__,
        const_str_plain___add__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df0986a2693d67b48e4ce31ed56c1f78,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_32___sub__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_32___sub__,
        const_str_plain___sub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_359c051df65f3750fa505f57ce562e02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_33___mul__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_33___mul__,
        const_str_plain___mul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5ac27532d8cf040d05e3068a731a8d2e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_34___div__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_34___div__,
        const_str_plain___div__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d41cae58fde901c7960e362ee62894c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_35___truediv__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_35___truediv__,
        const_str_plain___truediv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ede9313bb2b059f5296a22affc41ec81,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_36___floordiv__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_36___floordiv__,
        const_str_plain___floordiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b9ece47e2324d180e7313d031375e3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_37___mod__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_37___mod__,
        const_str_plain___mod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e86dd87ef25782331153244cc11c9c3b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_38___divmod__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_38___divmod__,
        const_str_plain___divmod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5f98bc593df13526054c150916e3939f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_39___pow__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_39___pow__,
        const_str_plain___pow__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aff0b167866e6f753494b94373737235,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_3_nickname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_3_nickname,
        const_str_plain_nickname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_be6c8c1e7f5f6d0f5d223f00a739ba2b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_40___radd__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_40___radd__,
        const_str_plain___radd__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7b9b77605427d9faac924ae1ce95cbac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_41___rsub__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_41___rsub__,
        const_str_plain___rsub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_657f9b3d187f510e26d868c2181bf708,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_42___rmul__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_42___rmul__,
        const_str_plain___rmul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8089396ecbe14f136daa509080930717,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_43___rdiv__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_43___rdiv__,
        const_str_plain___rdiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8ddd46e4c037de82831f86eceda25f7a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_44___rtruediv__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_44___rtruediv__,
        const_str_plain___rtruediv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_921c937a61c02cd563bd6f975c032a6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_45___rfloordiv__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_45___rfloordiv__,
        const_str_plain___rfloordiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cd5b96d4b1e1d16ff2e75f7eea9d8b8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_46___rmod__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_46___rmod__,
        const_str_plain___rmod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7aa0eb6ff55093eb4ff1c21f4d85ed4f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_47___rdivmod__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_47___rdivmod__,
        const_str_plain___rdivmod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_15897ef10dfa7cb50a8c3ef0acec4a05,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_48___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_48___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f44875e5a06c13db02186a4706faedff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_49___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_49___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e32c415f1e42d35118b24ba005f41ef9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_4__add(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_4__add,
        const_str_plain__add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ceceef8e3851a83abc30ca23b599ac4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_50_copy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_50_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0481d5ec2c5ffa3540d1192b862a2e4d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_b42beed796d24bd6809cc4eec294d8d4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_51_degree(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_51_degree,
        const_str_plain_degree,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_abb87c23a795101cf724a35b2e8e74a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5c1672ce023f467aa593f17c1716b98a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_52_cutdeg(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_52_cutdeg,
        const_str_plain_cutdeg,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_694040e1509a20c6b062ea80796bbe3b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_7aad98442226938245bb06c8fd0bcdbf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_53_trim( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_53_trim,
        const_str_plain_trim,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f2518bb51a465f5cea75952827b578d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_64ef2c5ae273200dd6a59733c0c92917,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_54_truncate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_54_truncate,
        const_str_plain_truncate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f2321f1532b193fd0c4a30c3e9492b03,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_c552a162a573bebaa10322a24f45277b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_55_convert( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_55_convert,
        const_str_plain_convert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_152e1878f232aaff60a007859ac33e6a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_058dc8328bcd097c8ca82772f5b011b9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_56_mapparms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_56_mapparms,
        const_str_plain_mapparms,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6852aee5ef675197a742091f8a384766,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5cff95afec2fedfa77694f6d8c7142ca,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_57_integ( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_57_integ,
        const_str_plain_integ,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_73bfac3c7c1a2ecef04508754c9cd26c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_e7f38fd6b94eee09ef46595bfaa612f6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_58_deriv( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_58_deriv,
        const_str_plain_deriv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6a412e783db0bc4c89e7dcd4a78daf71,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_3f3e88a2b5ee9a848a5e07299875e4e1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_59_roots(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_59_roots,
        const_str_plain_roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad6106655af09e9ad201530c832b5821,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_2b9498cf29ec706ed018bb8515699045,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_5__sub(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_5__sub,
        const_str_plain__sub,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8648a6ffea1df421bfc5ec5ddb1fc6d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_60_linspace( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_60_linspace,
        const_str_plain_linspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb51668401798bb667bdfa3b0584f8e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5c3873fd0d998cd8e83d826364b73c58,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_61_fit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_61_fit,
        const_str_plain_fit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cfd91668a7c427c6af3bfb91f252780a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_1664534d90db32878ffa9c8a6f0f0fb4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_62_fromroots( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_62_fromroots,
        const_str_plain_fromroots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10fdab93b63440fd2e54f5b445688819,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_b245160a1e9321f457c87c4934f565c8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_63_identity( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_63_identity,
        const_str_plain_identity,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4ea299c38d6a7ab6ed2a63c4907dfedb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_acf557064045411a8e7be3ebc065dd9c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_64_basis( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_64_basis,
        const_str_plain_basis,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4aee09e46cad176ae4aca71ebfa513f0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_78fa2448fcb3c239d1a740c0b7d98b19,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_65_cast( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_65_cast,
        const_str_plain_cast,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ca10a3ca55f7676cb2043628b7c2f412,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_070d2df2cae1dff89fa1d1b4ead50a9e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_6__mul(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_6__mul,
        const_str_plain__mul,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_00128c5ec50df9c080aff46e4bcfcb96,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_7__div(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_7__div,
        const_str_plain__div,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c5ed345a1eb27c8538c7b8643f0e5e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_8__pow(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_8__pow,
        const_str_plain__pow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10d411ece67467134201bb5b4432dce4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_9__val(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$function_9__val,
        const_str_plain__val,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c98f9d49375a44e03bd7fb78dfb29ec8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$_polybase =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial._polybase",   /* m_name */
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

MOD_INIT_DECL( numpy$polynomial$_polybase )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$_polybase );
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
    puts("numpy.polynomial._polybase: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.polynomial._polybase: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$polynomial$_polybase" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$_polybase = Py_InitModule4(
        "numpy.polynomial._polybase",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$polynomial$_polybase = PyModule_Create( &mdef_numpy$polynomial$_polybase );
#endif

    moduledict_numpy$polynomial$_polybase = MODULE_DICT( module_numpy$polynomial$_polybase );

    CHECK_OBJECT( module_numpy$polynomial$_polybase );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ebed222bae14d5baea3d6e14020bd482, module_numpy$polynomial$_polybase );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___metaclass__ = NULL;
    PyObject *outline_0_var___hash__ = NULL;
    PyObject *outline_0_var___array_ufunc__ = NULL;
    PyObject *outline_0_var_maxpower = NULL;
    PyObject *outline_0_var_domain = NULL;
    PyObject *outline_0_var_window = NULL;
    PyObject *outline_0_var_nickname = NULL;
    PyObject *outline_0_var__add = NULL;
    PyObject *outline_0_var__sub = NULL;
    PyObject *outline_0_var__mul = NULL;
    PyObject *outline_0_var__div = NULL;
    PyObject *outline_0_var__pow = NULL;
    PyObject *outline_0_var__val = NULL;
    PyObject *outline_0_var__int = NULL;
    PyObject *outline_0_var__der = NULL;
    PyObject *outline_0_var__fit = NULL;
    PyObject *outline_0_var__line = NULL;
    PyObject *outline_0_var__roots = NULL;
    PyObject *outline_0_var__fromroots = NULL;
    PyObject *outline_0_var_has_samecoef = NULL;
    PyObject *outline_0_var_has_samedomain = NULL;
    PyObject *outline_0_var_has_samewindow = NULL;
    PyObject *outline_0_var_has_sametype = NULL;
    PyObject *outline_0_var__get_coefficients = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var___repr__ = NULL;
    PyObject *outline_0_var___str__ = NULL;
    PyObject *outline_0_var___getstate__ = NULL;
    PyObject *outline_0_var___setstate__ = NULL;
    PyObject *outline_0_var___call__ = NULL;
    PyObject *outline_0_var___iter__ = NULL;
    PyObject *outline_0_var___len__ = NULL;
    PyObject *outline_0_var___neg__ = NULL;
    PyObject *outline_0_var___pos__ = NULL;
    PyObject *outline_0_var___add__ = NULL;
    PyObject *outline_0_var___sub__ = NULL;
    PyObject *outline_0_var___mul__ = NULL;
    PyObject *outline_0_var___div__ = NULL;
    PyObject *outline_0_var___truediv__ = NULL;
    PyObject *outline_0_var___floordiv__ = NULL;
    PyObject *outline_0_var___mod__ = NULL;
    PyObject *outline_0_var___divmod__ = NULL;
    PyObject *outline_0_var___pow__ = NULL;
    PyObject *outline_0_var___radd__ = NULL;
    PyObject *outline_0_var___rsub__ = NULL;
    PyObject *outline_0_var___rmul__ = NULL;
    PyObject *outline_0_var___rdiv__ = NULL;
    PyObject *outline_0_var___rtruediv__ = NULL;
    PyObject *outline_0_var___rfloordiv__ = NULL;
    PyObject *outline_0_var___rmod__ = NULL;
    PyObject *outline_0_var___rdivmod__ = NULL;
    PyObject *outline_0_var___eq__ = NULL;
    PyObject *outline_0_var___ne__ = NULL;
    PyObject *outline_0_var_copy = NULL;
    PyObject *outline_0_var_degree = NULL;
    PyObject *outline_0_var_cutdeg = NULL;
    PyObject *outline_0_var_trim = NULL;
    PyObject *outline_0_var_truncate = NULL;
    PyObject *outline_0_var_convert = NULL;
    PyObject *outline_0_var_mapparms = NULL;
    PyObject *outline_0_var_integ = NULL;
    PyObject *outline_0_var_deriv = NULL;
    PyObject *outline_0_var_roots = NULL;
    PyObject *outline_0_var_linspace = NULL;
    PyObject *outline_0_var_fit = NULL;
    PyObject *outline_0_var_fromroots = NULL;
    PyObject *outline_0_var_identity = NULL;
    PyObject *outline_0_var_basis = NULL;
    PyObject *outline_0_var_cast = NULL;
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
    PyObject *tmp_classmethod_arg_1;
    PyObject *tmp_classmethod_arg_2;
    PyObject *tmp_classmethod_arg_3;
    PyObject *tmp_classmethod_arg_4;
    PyObject *tmp_classmethod_arg_5;
    int tmp_cmp_In_1;
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
    PyObject *tmp_dict_key_42;
    PyObject *tmp_dict_key_43;
    PyObject *tmp_dict_key_44;
    PyObject *tmp_dict_key_45;
    PyObject *tmp_dict_key_46;
    PyObject *tmp_dict_key_47;
    PyObject *tmp_dict_key_48;
    PyObject *tmp_dict_key_49;
    PyObject *tmp_dict_key_50;
    PyObject *tmp_dict_key_51;
    PyObject *tmp_dict_key_52;
    PyObject *tmp_dict_key_53;
    PyObject *tmp_dict_key_54;
    PyObject *tmp_dict_key_55;
    PyObject *tmp_dict_key_56;
    PyObject *tmp_dict_key_57;
    PyObject *tmp_dict_key_58;
    PyObject *tmp_dict_key_59;
    PyObject *tmp_dict_key_60;
    PyObject *tmp_dict_key_61;
    PyObject *tmp_dict_key_62;
    PyObject *tmp_dict_key_63;
    PyObject *tmp_dict_key_64;
    PyObject *tmp_dict_key_65;
    PyObject *tmp_dict_key_66;
    PyObject *tmp_dict_key_67;
    PyObject *tmp_dict_key_68;
    PyObject *tmp_dict_key_69;
    PyObject *tmp_dict_key_70;
    PyObject *tmp_dict_key_71;
    PyObject *tmp_dict_name_1;
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
    PyObject *tmp_dict_value_42;
    PyObject *tmp_dict_value_43;
    PyObject *tmp_dict_value_44;
    PyObject *tmp_dict_value_45;
    PyObject *tmp_dict_value_46;
    PyObject *tmp_dict_value_47;
    PyObject *tmp_dict_value_48;
    PyObject *tmp_dict_value_49;
    PyObject *tmp_dict_value_50;
    PyObject *tmp_dict_value_51;
    PyObject *tmp_dict_value_52;
    PyObject *tmp_dict_value_53;
    PyObject *tmp_dict_value_54;
    PyObject *tmp_dict_value_55;
    PyObject *tmp_dict_value_56;
    PyObject *tmp_dict_value_57;
    PyObject *tmp_dict_value_58;
    PyObject *tmp_dict_value_59;
    PyObject *tmp_dict_value_60;
    PyObject *tmp_dict_value_61;
    PyObject *tmp_dict_value_62;
    PyObject *tmp_dict_value_63;
    PyObject *tmp_dict_value_64;
    PyObject *tmp_dict_value_65;
    PyObject *tmp_dict_value_66;
    PyObject *tmp_dict_value_67;
    PyObject *tmp_dict_value_68;
    PyObject *tmp_dict_value_69;
    PyObject *tmp_dict_value_70;
    PyObject *tmp_dict_value_71;
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
    PyObject *tmp_key_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_a64439963f540d2663cc00a6bb131e4f_2 = NULL;

    struct Nuitka_FrameObject *frame_a64439963f540d2663cc00a6bb131e4f_2;

    struct Nuitka_FrameObject *frame_954f874e3a7b4aaf3f0f5a3e66149c17;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_10042ca87e4ab2b5b839d8b6298c44c1;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d3cd65e570b4f8f57237436a36829fff;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_954f874e3a7b4aaf3f0f5a3e66149c17 = MAKE_MODULE_FRAME( codeobj_954f874e3a7b4aaf3f0f5a3e66149c17, module_numpy$polynomial$_polybase );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_954f874e3a7b4aaf3f0f5a3e66149c17 );
    assert( Py_REFCNT( frame_954f874e3a7b4aaf3f0f5a3e66149c17 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_abc;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$polynomial$_polybase;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_c1173a617796a82a0814a08106680f7a_tuple;
    tmp_level_name_1 = const_int_0;
    frame_954f874e3a7b4aaf3f0f5a3e66149c17->m_frame.f_lineno = 11;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ABCMeta );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCMeta, tmp_assign_source_9 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_abstractmethod );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_abstractproperty );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty, tmp_assign_source_11 );
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

    tmp_name_name_2 = const_str_plain_numbers;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$polynomial$_polybase;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_Number_tuple;
    tmp_level_name_2 = const_int_0;
    frame_954f874e3a7b4aaf3f0f5a3e66149c17->m_frame.f_lineno = 12;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Number );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_Number, tmp_assign_source_12 );
    tmp_name_name_3 = const_str_plain_numpy;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$polynomial$_polybase;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_954f874e3a7b4aaf3f0f5a3e66149c17->m_frame.f_lineno = 14;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_13 );
    tmp_name_name_4 = const_str_empty;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$polynomial$_polybase;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_polyutils_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_954f874e3a7b4aaf3f0f5a3e66149c17->m_frame.f_lineno = 15;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_polyutils );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu, tmp_assign_source_14 );
    tmp_assign_source_15 = LIST_COPY( const_list_str_plain_ABCPolyBase_list );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    // Tried code:
    tmp_assign_source_17 = const_str_digest_ebed222bae14d5baea3d6e14020bd482;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_17 );
    outline_0_var___module__ = tmp_assign_source_17;

    tmp_assign_source_18 = const_str_digest_ef48f7ae9a091820ceb23e5c5c670243;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_18 );
    outline_0_var___doc__ = tmp_assign_source_18;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a64439963f540d2663cc00a6bb131e4f_2, codeobj_a64439963f540d2663cc00a6bb131e4f, module_numpy$polynomial$_polybase, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a64439963f540d2663cc00a6bb131e4f_2 = cache_frame_a64439963f540d2663cc00a6bb131e4f_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a64439963f540d2663cc00a6bb131e4f_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a64439963f540d2663cc00a6bb131e4f_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assign_source_19 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCMeta );

    if (unlikely( tmp_assign_source_19 == NULL ))
    {
        tmp_assign_source_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCMeta );
    }

    if ( tmp_assign_source_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ABCMeta" );
        exception_tb = NULL;

        exception_lineno = 62;
        type_description_2 = "ooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    assert( outline_0_var___metaclass__ == NULL );
    Py_INCREF( tmp_assign_source_19 );
    outline_0_var___metaclass__ = tmp_assign_source_19;

    tmp_assign_source_20 = Py_None;
    assert( outline_0_var___hash__ == NULL );
    Py_INCREF( tmp_assign_source_20 );
    outline_0_var___hash__ = tmp_assign_source_20;

    tmp_assign_source_21 = Py_None;
    assert( outline_0_var___array_ufunc__ == NULL );
    Py_INCREF( tmp_assign_source_21 );
    outline_0_var___array_ufunc__ = tmp_assign_source_21;

    tmp_assign_source_22 = const_int_pos_100;
    assert( outline_0_var_maxpower == NULL );
    Py_INCREF( tmp_assign_source_22 );
    outline_0_var_maxpower = tmp_assign_source_22;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractproperty );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractproperty" );
        exception_tb = NULL;

        exception_lineno = 73;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_1_domain(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_2 = "ooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_domain == NULL );
    outline_0_var_domain = tmp_assign_source_23;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractproperty );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractproperty" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_2 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_2_window(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_2 = "oooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_window == NULL );
    outline_0_var_window = tmp_assign_source_24;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractproperty );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractproperty" );
        exception_tb = NULL;

        exception_lineno = 81;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_3 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_3_nickname(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "ooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_nickname == NULL );
    outline_0_var_nickname = tmp_assign_source_25;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description_2 = "oooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_4 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_4__add(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_2 = "oooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__add == NULL );
    outline_0_var__add = tmp_assign_source_26;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 89;
        type_description_2 = "ooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_5 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_5__sub(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_2 = "ooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__sub == NULL );
    outline_0_var__sub = tmp_assign_source_27;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 93;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_6 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_6__mul(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_2 = "oooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__mul == NULL );
    outline_0_var__mul = tmp_assign_source_28;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 97;
        type_description_2 = "ooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_7 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_7__div(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_2 = "ooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__div == NULL );
    outline_0_var__div = tmp_assign_source_29;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 101;
        type_description_2 = "oooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_8 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_8__pow(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_2 = "oooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__pow == NULL );
    outline_0_var__pow = tmp_assign_source_30;

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 105;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_9 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_9__val(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "ooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__val == NULL );
    outline_0_var__val = tmp_assign_source_31;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 109;
        type_description_2 = "oooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_10__int(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_2 = "oooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__int == NULL );
    outline_0_var__int = tmp_assign_source_32;

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 113;
        type_description_2 = "ooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_11 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_11__der(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "ooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__der == NULL );
    outline_0_var__der = tmp_assign_source_33;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 117;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_12 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_12__fit(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_2 = "oooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__fit == NULL );
    outline_0_var__fit = tmp_assign_source_34;

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 121;
        type_description_2 = "ooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_13 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_13__line(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_2 = "ooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__line == NULL );
    outline_0_var__line = tmp_assign_source_35;

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 125;
        type_description_2 = "oooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_14 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_14__roots(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_2 = "oooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__roots == NULL );
    outline_0_var__roots = tmp_assign_source_36;

    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 129;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }

    tmp_args_element_name_15 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_15__fromroots(  );
    frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame.f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_2 = "ooooooooooooooooooooNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__fromroots == NULL );
    outline_0_var__fromroots = tmp_assign_source_37;

    tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_16_has_samecoef(  );
    assert( outline_0_var_has_samecoef == NULL );
    outline_0_var_has_samecoef = tmp_assign_source_38;

    tmp_assign_source_39 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_17_has_samedomain(  );
    assert( outline_0_var_has_samedomain == NULL );
    outline_0_var_has_samedomain = tmp_assign_source_39;

    tmp_assign_source_40 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_18_has_samewindow(  );
    assert( outline_0_var_has_samewindow == NULL );
    outline_0_var_has_samewindow = tmp_assign_source_40;

    tmp_assign_source_41 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_19_has_sametype(  );
    assert( outline_0_var_has_sametype == NULL );
    outline_0_var_has_sametype = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_20__get_coefficients(  );
    assert( outline_0_var__get_coefficients == NULL );
    outline_0_var__get_coefficients = tmp_assign_source_42;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_43 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_21___init__( tmp_defaults_1 );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_22___repr__(  );
    assert( outline_0_var___repr__ == NULL );
    outline_0_var___repr__ = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_23___str__(  );
    assert( outline_0_var___str__ == NULL );
    outline_0_var___str__ = tmp_assign_source_45;

    tmp_assign_source_46 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_24___getstate__(  );
    assert( outline_0_var___getstate__ == NULL );
    outline_0_var___getstate__ = tmp_assign_source_46;

    tmp_assign_source_47 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_25___setstate__(  );
    assert( outline_0_var___setstate__ == NULL );
    outline_0_var___setstate__ = tmp_assign_source_47;

    tmp_assign_source_48 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_26___call__(  );
    assert( outline_0_var___call__ == NULL );
    outline_0_var___call__ = tmp_assign_source_48;

    tmp_assign_source_49 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_27___iter__(  );
    assert( outline_0_var___iter__ == NULL );
    outline_0_var___iter__ = tmp_assign_source_49;

    tmp_assign_source_50 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_28___len__(  );
    assert( outline_0_var___len__ == NULL );
    outline_0_var___len__ = tmp_assign_source_50;

    tmp_assign_source_51 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_29___neg__(  );
    assert( outline_0_var___neg__ == NULL );
    outline_0_var___neg__ = tmp_assign_source_51;

    tmp_assign_source_52 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_30___pos__(  );
    assert( outline_0_var___pos__ == NULL );
    outline_0_var___pos__ = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_31___add__(  );
    assert( outline_0_var___add__ == NULL );
    outline_0_var___add__ = tmp_assign_source_53;

    tmp_assign_source_54 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_32___sub__(  );
    assert( outline_0_var___sub__ == NULL );
    outline_0_var___sub__ = tmp_assign_source_54;

    tmp_assign_source_55 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_33___mul__(  );
    assert( outline_0_var___mul__ == NULL );
    outline_0_var___mul__ = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_34___div__(  );
    assert( outline_0_var___div__ == NULL );
    outline_0_var___div__ = tmp_assign_source_56;

    tmp_assign_source_57 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_35___truediv__(  );
    assert( outline_0_var___truediv__ == NULL );
    outline_0_var___truediv__ = tmp_assign_source_57;

    tmp_assign_source_58 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_36___floordiv__(  );
    assert( outline_0_var___floordiv__ == NULL );
    outline_0_var___floordiv__ = tmp_assign_source_58;

    tmp_assign_source_59 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_37___mod__(  );
    assert( outline_0_var___mod__ == NULL );
    outline_0_var___mod__ = tmp_assign_source_59;

    tmp_assign_source_60 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_38___divmod__(  );
    assert( outline_0_var___divmod__ == NULL );
    outline_0_var___divmod__ = tmp_assign_source_60;

    tmp_assign_source_61 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_39___pow__(  );
    assert( outline_0_var___pow__ == NULL );
    outline_0_var___pow__ = tmp_assign_source_61;

    tmp_assign_source_62 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_40___radd__(  );
    assert( outline_0_var___radd__ == NULL );
    outline_0_var___radd__ = tmp_assign_source_62;

    tmp_assign_source_63 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_41___rsub__(  );
    assert( outline_0_var___rsub__ == NULL );
    outline_0_var___rsub__ = tmp_assign_source_63;

    tmp_assign_source_64 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_42___rmul__(  );
    assert( outline_0_var___rmul__ == NULL );
    outline_0_var___rmul__ = tmp_assign_source_64;

    tmp_assign_source_65 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_43___rdiv__(  );
    assert( outline_0_var___rdiv__ == NULL );
    outline_0_var___rdiv__ = tmp_assign_source_65;

    tmp_assign_source_66 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_44___rtruediv__(  );
    assert( outline_0_var___rtruediv__ == NULL );
    outline_0_var___rtruediv__ = tmp_assign_source_66;

    tmp_assign_source_67 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_45___rfloordiv__(  );
    assert( outline_0_var___rfloordiv__ == NULL );
    outline_0_var___rfloordiv__ = tmp_assign_source_67;

    tmp_assign_source_68 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_46___rmod__(  );
    assert( outline_0_var___rmod__ == NULL );
    outline_0_var___rmod__ = tmp_assign_source_68;

    tmp_assign_source_69 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_47___rdivmod__(  );
    assert( outline_0_var___rdivmod__ == NULL );
    outline_0_var___rdivmod__ = tmp_assign_source_69;

    tmp_assign_source_70 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_48___eq__(  );
    assert( outline_0_var___eq__ == NULL );
    outline_0_var___eq__ = tmp_assign_source_70;

    tmp_assign_source_71 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_49___ne__(  );
    assert( outline_0_var___ne__ == NULL );
    outline_0_var___ne__ = tmp_assign_source_71;

    tmp_assign_source_72 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_50_copy(  );
    assert( outline_0_var_copy == NULL );
    outline_0_var_copy = tmp_assign_source_72;

    tmp_assign_source_73 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_51_degree(  );
    assert( outline_0_var_degree == NULL );
    outline_0_var_degree = tmp_assign_source_73;

    tmp_assign_source_74 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_52_cutdeg(  );
    assert( outline_0_var_cutdeg == NULL );
    outline_0_var_cutdeg = tmp_assign_source_74;

    tmp_defaults_2 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_75 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_53_trim( tmp_defaults_2 );
    assert( outline_0_var_trim == NULL );
    outline_0_var_trim = tmp_assign_source_75;

    tmp_assign_source_76 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_54_truncate(  );
    assert( outline_0_var_truncate == NULL );
    outline_0_var_truncate = tmp_assign_source_76;

    tmp_defaults_3 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_77 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_55_convert( tmp_defaults_3 );
    assert( outline_0_var_convert == NULL );
    outline_0_var_convert = tmp_assign_source_77;

    tmp_assign_source_78 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_56_mapparms(  );
    assert( outline_0_var_mapparms == NULL );
    outline_0_var_mapparms = tmp_assign_source_78;

    tmp_defaults_4 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_1 );
    tmp_assign_source_79 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_57_integ( tmp_defaults_4 );
    assert( outline_0_var_integ == NULL );
    outline_0_var_integ = tmp_assign_source_79;

    tmp_defaults_5 = const_tuple_int_pos_1_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_80 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_58_deriv( tmp_defaults_5 );
    assert( outline_0_var_deriv == NULL );
    outline_0_var_deriv = tmp_assign_source_80;

    tmp_assign_source_81 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_59_roots(  );
    assert( outline_0_var_roots == NULL );
    outline_0_var_roots = tmp_assign_source_81;

    tmp_defaults_6 = const_tuple_int_pos_100_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_82 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_60_linspace( tmp_defaults_6 );
    assert( outline_0_var_linspace == NULL );
    outline_0_var_linspace = tmp_assign_source_82;

    tmp_defaults_7 = const_tuple_none_none_false_none_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_classmethod_arg_1 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_61_fit( tmp_defaults_7 );
    tmp_assign_source_83 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 724;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_fit == NULL );
    outline_0_var_fit = tmp_assign_source_83;

    tmp_defaults_8 = PyTuple_New( 2 );
    tmp_tuple_element_2 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_8, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_8, 1, tmp_tuple_element_2 );
    tmp_classmethod_arg_2 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_62_fromroots( tmp_defaults_8 );
    tmp_assign_source_84 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
    Py_DECREF( tmp_classmethod_arg_2 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 812;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_fromroots == NULL );
    outline_0_var_fromroots = tmp_assign_source_84;

    tmp_defaults_9 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_9 );
    tmp_classmethod_arg_3 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_63_identity( tmp_defaults_9 );
    tmp_assign_source_85 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_3 );
    Py_DECREF( tmp_classmethod_arg_3 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 853;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_identity == NULL );
    outline_0_var_identity = tmp_assign_source_85;

    tmp_defaults_10 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_10 );
    tmp_classmethod_arg_4 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_64_basis( tmp_defaults_10 );
    tmp_assign_source_86 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_4 );
    Py_DECREF( tmp_classmethod_arg_4 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 886;
        type_description_2 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_basis == NULL );
    outline_0_var_basis = tmp_assign_source_86;

    tmp_defaults_11 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_11 );
    tmp_classmethod_arg_5 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$function_65_cast( tmp_defaults_11 );
    tmp_assign_source_87 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_5 );
    Py_DECREF( tmp_classmethod_arg_5 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        type_description_2 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_cast == NULL );
    outline_0_var_cast = tmp_assign_source_87;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_a64439963f540d2663cc00a6bb131e4f_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a64439963f540d2663cc00a6bb131e4f_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a64439963f540d2663cc00a6bb131e4f_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a64439963f540d2663cc00a6bb131e4f_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a64439963f540d2663cc00a6bb131e4f_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a64439963f540d2663cc00a6bb131e4f_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var___metaclass__,
        outline_0_var___hash__,
        outline_0_var___array_ufunc__,
        outline_0_var_maxpower,
        outline_0_var_domain,
        outline_0_var_window,
        outline_0_var_nickname,
        outline_0_var__add,
        outline_0_var__sub,
        outline_0_var__mul,
        outline_0_var__div,
        outline_0_var__pow,
        outline_0_var__val,
        outline_0_var__int,
        outline_0_var__der,
        outline_0_var__fit,
        outline_0_var__line,
        outline_0_var__roots,
        outline_0_var__fromroots,
        outline_0_var_has_samecoef,
        outline_0_var_has_samedomain,
        outline_0_var_has_samewindow,
        outline_0_var_has_sametype,
        outline_0_var__get_coefficients,
        outline_0_var___init__,
        outline_0_var___repr__,
        outline_0_var___str__,
        outline_0_var___getstate__,
        outline_0_var___setstate__,
        outline_0_var___call__,
        outline_0_var___iter__,
        outline_0_var___len__,
        outline_0_var___neg__,
        outline_0_var___pos__,
        outline_0_var___add__,
        outline_0_var___sub__,
        outline_0_var___mul__,
        outline_0_var___div__,
        outline_0_var___truediv__,
        outline_0_var___floordiv__,
        outline_0_var___mod__,
        outline_0_var___divmod__,
        outline_0_var___pow__,
        outline_0_var___radd__,
        outline_0_var___rsub__,
        outline_0_var___rmul__,
        outline_0_var___rdiv__,
        outline_0_var___rtruediv__,
        outline_0_var___rfloordiv__,
        outline_0_var___rmod__,
        outline_0_var___rdivmod__,
        outline_0_var___eq__,
        outline_0_var___ne__,
        outline_0_var_copy,
        outline_0_var_degree,
        outline_0_var_cutdeg,
        outline_0_var_trim,
        outline_0_var_truncate,
        outline_0_var_convert,
        outline_0_var_mapparms,
        outline_0_var_integ,
        outline_0_var_deriv,
        outline_0_var_roots,
        outline_0_var_linspace,
        outline_0_var_fit,
        outline_0_var_fromroots,
        outline_0_var_identity,
        outline_0_var_basis,
        outline_0_var_cast
    );


    // Release cached frame.
    if ( frame_a64439963f540d2663cc00a6bb131e4f_2 == cache_frame_a64439963f540d2663cc00a6bb131e4f_2 )
    {
        Py_DECREF( frame_a64439963f540d2663cc00a6bb131e4f_2 );
    }
    cache_frame_a64439963f540d2663cc00a6bb131e4f_2 = NULL;

    assertFrameObject( frame_a64439963f540d2663cc00a6bb131e4f_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = _PyDict_NewPresized( 71 );
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
    tmp_dict_value_3 = outline_0_var___metaclass__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___metaclass__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var___hash__;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain___hash__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = outline_0_var___array_ufunc__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___array_ufunc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_0_var_maxpower;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain_maxpower;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = outline_0_var_domain;

    CHECK_OBJECT( tmp_dict_value_7 );
    tmp_dict_key_7 = const_str_plain_domain;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_8 = outline_0_var_window;

    CHECK_OBJECT( tmp_dict_value_8 );
    tmp_dict_key_8 = const_str_plain_window;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_9 = outline_0_var_nickname;

    CHECK_OBJECT( tmp_dict_value_9 );
    tmp_dict_key_9 = const_str_plain_nickname;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = outline_0_var__add;

    CHECK_OBJECT( tmp_dict_value_10 );
    tmp_dict_key_10 = const_str_plain__add;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_11 = outline_0_var__sub;

    CHECK_OBJECT( tmp_dict_value_11 );
    tmp_dict_key_11 = const_str_plain__sub;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_12 = outline_0_var__mul;

    CHECK_OBJECT( tmp_dict_value_12 );
    tmp_dict_key_12 = const_str_plain__mul;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_13 = outline_0_var__div;

    CHECK_OBJECT( tmp_dict_value_13 );
    tmp_dict_key_13 = const_str_plain__div;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = outline_0_var__pow;

    CHECK_OBJECT( tmp_dict_value_14 );
    tmp_dict_key_14 = const_str_plain__pow;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_15 = outline_0_var__val;

    CHECK_OBJECT( tmp_dict_value_15 );
    tmp_dict_key_15 = const_str_plain__val;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_16 = outline_0_var__int;

    CHECK_OBJECT( tmp_dict_value_16 );
    tmp_dict_key_16 = const_str_plain__int;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_17 = outline_0_var__der;

    CHECK_OBJECT( tmp_dict_value_17 );
    tmp_dict_key_17 = const_str_plain__der;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = outline_0_var__fit;

    CHECK_OBJECT( tmp_dict_value_18 );
    tmp_dict_key_18 = const_str_plain__fit;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_19 = outline_0_var__line;

    CHECK_OBJECT( tmp_dict_value_19 );
    tmp_dict_key_19 = const_str_plain__line;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_19, tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_20 = outline_0_var__roots;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain__roots;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = outline_0_var__fromroots;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain__fromroots;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = outline_0_var_has_samecoef;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain_has_samecoef;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = outline_0_var_has_samedomain;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain_has_samedomain;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = outline_0_var_has_samewindow;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain_has_samewindow;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = outline_0_var_has_sametype;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain_has_sametype;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = outline_0_var__get_coefficients;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain__get_coefficients;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_28 = outline_0_var___repr__;

    CHECK_OBJECT( tmp_dict_value_28 );
    tmp_dict_key_28 = const_str_plain___repr__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_29 = outline_0_var___str__;

    CHECK_OBJECT( tmp_dict_value_29 );
    tmp_dict_key_29 = const_str_plain___str__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_30 = outline_0_var___getstate__;

    CHECK_OBJECT( tmp_dict_value_30 );
    tmp_dict_key_30 = const_str_plain___getstate__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_31 = outline_0_var___setstate__;

    CHECK_OBJECT( tmp_dict_value_31 );
    tmp_dict_key_31 = const_str_plain___setstate__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_32 = outline_0_var___call__;

    CHECK_OBJECT( tmp_dict_value_32 );
    tmp_dict_key_32 = const_str_plain___call__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_32, tmp_dict_value_32 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_33 = outline_0_var___iter__;

    CHECK_OBJECT( tmp_dict_value_33 );
    tmp_dict_key_33 = const_str_plain___iter__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_33, tmp_dict_value_33 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_34 = outline_0_var___len__;

    CHECK_OBJECT( tmp_dict_value_34 );
    tmp_dict_key_34 = const_str_plain___len__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_34, tmp_dict_value_34 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_35 = outline_0_var___neg__;

    CHECK_OBJECT( tmp_dict_value_35 );
    tmp_dict_key_35 = const_str_plain___neg__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_35, tmp_dict_value_35 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_36 = outline_0_var___pos__;

    CHECK_OBJECT( tmp_dict_value_36 );
    tmp_dict_key_36 = const_str_plain___pos__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_36, tmp_dict_value_36 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_37 = outline_0_var___add__;

    CHECK_OBJECT( tmp_dict_value_37 );
    tmp_dict_key_37 = const_str_plain___add__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_37, tmp_dict_value_37 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_38 = outline_0_var___sub__;

    CHECK_OBJECT( tmp_dict_value_38 );
    tmp_dict_key_38 = const_str_plain___sub__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_38, tmp_dict_value_38 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_39 = outline_0_var___mul__;

    CHECK_OBJECT( tmp_dict_value_39 );
    tmp_dict_key_39 = const_str_plain___mul__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_39, tmp_dict_value_39 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_40 = outline_0_var___div__;

    CHECK_OBJECT( tmp_dict_value_40 );
    tmp_dict_key_40 = const_str_plain___div__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_40, tmp_dict_value_40 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_41 = outline_0_var___truediv__;

    CHECK_OBJECT( tmp_dict_value_41 );
    tmp_dict_key_41 = const_str_plain___truediv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_41, tmp_dict_value_41 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_42 = outline_0_var___floordiv__;

    CHECK_OBJECT( tmp_dict_value_42 );
    tmp_dict_key_42 = const_str_plain___floordiv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_42, tmp_dict_value_42 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_43 = outline_0_var___mod__;

    CHECK_OBJECT( tmp_dict_value_43 );
    tmp_dict_key_43 = const_str_plain___mod__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_43, tmp_dict_value_43 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_44 = outline_0_var___divmod__;

    CHECK_OBJECT( tmp_dict_value_44 );
    tmp_dict_key_44 = const_str_plain___divmod__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_44, tmp_dict_value_44 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_45 = outline_0_var___pow__;

    CHECK_OBJECT( tmp_dict_value_45 );
    tmp_dict_key_45 = const_str_plain___pow__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_45, tmp_dict_value_45 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_46 = outline_0_var___radd__;

    CHECK_OBJECT( tmp_dict_value_46 );
    tmp_dict_key_46 = const_str_plain___radd__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_46, tmp_dict_value_46 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_47 = outline_0_var___rsub__;

    CHECK_OBJECT( tmp_dict_value_47 );
    tmp_dict_key_47 = const_str_plain___rsub__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_47, tmp_dict_value_47 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_48 = outline_0_var___rmul__;

    CHECK_OBJECT( tmp_dict_value_48 );
    tmp_dict_key_48 = const_str_plain___rmul__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_48, tmp_dict_value_48 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_49 = outline_0_var___rdiv__;

    CHECK_OBJECT( tmp_dict_value_49 );
    tmp_dict_key_49 = const_str_plain___rdiv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_49, tmp_dict_value_49 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_50 = outline_0_var___rtruediv__;

    CHECK_OBJECT( tmp_dict_value_50 );
    tmp_dict_key_50 = const_str_plain___rtruediv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_50, tmp_dict_value_50 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_51 = outline_0_var___rfloordiv__;

    CHECK_OBJECT( tmp_dict_value_51 );
    tmp_dict_key_51 = const_str_plain___rfloordiv__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_51, tmp_dict_value_51 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_52 = outline_0_var___rmod__;

    CHECK_OBJECT( tmp_dict_value_52 );
    tmp_dict_key_52 = const_str_plain___rmod__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_52, tmp_dict_value_52 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_53 = outline_0_var___rdivmod__;

    CHECK_OBJECT( tmp_dict_value_53 );
    tmp_dict_key_53 = const_str_plain___rdivmod__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_53, tmp_dict_value_53 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_54 = outline_0_var___eq__;

    CHECK_OBJECT( tmp_dict_value_54 );
    tmp_dict_key_54 = const_str_plain___eq__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_54, tmp_dict_value_54 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_55 = outline_0_var___ne__;

    CHECK_OBJECT( tmp_dict_value_55 );
    tmp_dict_key_55 = const_str_plain___ne__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_55, tmp_dict_value_55 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_56 = outline_0_var_copy;

    CHECK_OBJECT( tmp_dict_value_56 );
    tmp_dict_key_56 = const_str_plain_copy;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_56, tmp_dict_value_56 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_57 = outline_0_var_degree;

    CHECK_OBJECT( tmp_dict_value_57 );
    tmp_dict_key_57 = const_str_plain_degree;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_57, tmp_dict_value_57 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_58 = outline_0_var_cutdeg;

    CHECK_OBJECT( tmp_dict_value_58 );
    tmp_dict_key_58 = const_str_plain_cutdeg;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_58, tmp_dict_value_58 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_59 = outline_0_var_trim;

    CHECK_OBJECT( tmp_dict_value_59 );
    tmp_dict_key_59 = const_str_plain_trim;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_59, tmp_dict_value_59 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_60 = outline_0_var_truncate;

    CHECK_OBJECT( tmp_dict_value_60 );
    tmp_dict_key_60 = const_str_plain_truncate;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_60, tmp_dict_value_60 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_61 = outline_0_var_convert;

    CHECK_OBJECT( tmp_dict_value_61 );
    tmp_dict_key_61 = const_str_plain_convert;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_61, tmp_dict_value_61 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_62 = outline_0_var_mapparms;

    CHECK_OBJECT( tmp_dict_value_62 );
    tmp_dict_key_62 = const_str_plain_mapparms;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_62, tmp_dict_value_62 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_63 = outline_0_var_integ;

    CHECK_OBJECT( tmp_dict_value_63 );
    tmp_dict_key_63 = const_str_plain_integ;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_63, tmp_dict_value_63 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_64 = outline_0_var_deriv;

    CHECK_OBJECT( tmp_dict_value_64 );
    tmp_dict_key_64 = const_str_plain_deriv;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_64, tmp_dict_value_64 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_65 = outline_0_var_roots;

    CHECK_OBJECT( tmp_dict_value_65 );
    tmp_dict_key_65 = const_str_plain_roots;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_65, tmp_dict_value_65 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_66 = outline_0_var_linspace;

    CHECK_OBJECT( tmp_dict_value_66 );
    tmp_dict_key_66 = const_str_plain_linspace;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_66, tmp_dict_value_66 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_67 = outline_0_var_fit;

    CHECK_OBJECT( tmp_dict_value_67 );
    tmp_dict_key_67 = const_str_plain_fit;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_67, tmp_dict_value_67 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_68 = outline_0_var_fromroots;

    CHECK_OBJECT( tmp_dict_value_68 );
    tmp_dict_key_68 = const_str_plain_fromroots;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_68, tmp_dict_value_68 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_69 = outline_0_var_identity;

    CHECK_OBJECT( tmp_dict_value_69 );
    tmp_dict_key_69 = const_str_plain_identity;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_69, tmp_dict_value_69 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_70 = outline_0_var_basis;

    CHECK_OBJECT( tmp_dict_value_70 );
    tmp_dict_key_70 = const_str_plain_basis;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_70, tmp_dict_value_70 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_71 = outline_0_var_cast;

    CHECK_OBJECT( tmp_dict_value_71 );
    tmp_dict_key_71 = const_str_plain_cast;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_71, tmp_dict_value_71 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___metaclass__ );
    Py_DECREF( outline_0_var___metaclass__ );
    outline_0_var___metaclass__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___hash__ );
    Py_DECREF( outline_0_var___hash__ );
    outline_0_var___hash__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___array_ufunc__ );
    Py_DECREF( outline_0_var___array_ufunc__ );
    outline_0_var___array_ufunc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_maxpower );
    Py_DECREF( outline_0_var_maxpower );
    outline_0_var_maxpower = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_domain );
    Py_DECREF( outline_0_var_domain );
    outline_0_var_domain = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_window );
    Py_DECREF( outline_0_var_window );
    outline_0_var_window = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_nickname );
    Py_DECREF( outline_0_var_nickname );
    outline_0_var_nickname = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__add );
    Py_DECREF( outline_0_var__add );
    outline_0_var__add = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__sub );
    Py_DECREF( outline_0_var__sub );
    outline_0_var__sub = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__mul );
    Py_DECREF( outline_0_var__mul );
    outline_0_var__mul = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__div );
    Py_DECREF( outline_0_var__div );
    outline_0_var__div = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__pow );
    Py_DECREF( outline_0_var__pow );
    outline_0_var__pow = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__val );
    Py_DECREF( outline_0_var__val );
    outline_0_var__val = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__int );
    Py_DECREF( outline_0_var__int );
    outline_0_var__int = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__der );
    Py_DECREF( outline_0_var__der );
    outline_0_var__der = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__fit );
    Py_DECREF( outline_0_var__fit );
    outline_0_var__fit = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__line );
    Py_DECREF( outline_0_var__line );
    outline_0_var__line = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__roots );
    Py_DECREF( outline_0_var__roots );
    outline_0_var__roots = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__fromroots );
    Py_DECREF( outline_0_var__fromroots );
    outline_0_var__fromroots = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_has_samecoef );
    Py_DECREF( outline_0_var_has_samecoef );
    outline_0_var_has_samecoef = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_has_samedomain );
    Py_DECREF( outline_0_var_has_samedomain );
    outline_0_var_has_samedomain = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_has_samewindow );
    Py_DECREF( outline_0_var_has_samewindow );
    outline_0_var_has_samewindow = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_has_sametype );
    Py_DECREF( outline_0_var_has_sametype );
    outline_0_var_has_sametype = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__get_coefficients );
    Py_DECREF( outline_0_var__get_coefficients );
    outline_0_var__get_coefficients = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___repr__ );
    Py_DECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___str__ );
    Py_DECREF( outline_0_var___str__ );
    outline_0_var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___getstate__ );
    Py_DECREF( outline_0_var___getstate__ );
    outline_0_var___getstate__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___setstate__ );
    Py_DECREF( outline_0_var___setstate__ );
    outline_0_var___setstate__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___call__ );
    Py_DECREF( outline_0_var___call__ );
    outline_0_var___call__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___iter__ );
    Py_DECREF( outline_0_var___iter__ );
    outline_0_var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___len__ );
    Py_DECREF( outline_0_var___len__ );
    outline_0_var___len__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___neg__ );
    Py_DECREF( outline_0_var___neg__ );
    outline_0_var___neg__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___pos__ );
    Py_DECREF( outline_0_var___pos__ );
    outline_0_var___pos__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___add__ );
    Py_DECREF( outline_0_var___add__ );
    outline_0_var___add__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___sub__ );
    Py_DECREF( outline_0_var___sub__ );
    outline_0_var___sub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___mul__ );
    Py_DECREF( outline_0_var___mul__ );
    outline_0_var___mul__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___div__ );
    Py_DECREF( outline_0_var___div__ );
    outline_0_var___div__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___truediv__ );
    Py_DECREF( outline_0_var___truediv__ );
    outline_0_var___truediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___floordiv__ );
    Py_DECREF( outline_0_var___floordiv__ );
    outline_0_var___floordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___mod__ );
    Py_DECREF( outline_0_var___mod__ );
    outline_0_var___mod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___divmod__ );
    Py_DECREF( outline_0_var___divmod__ );
    outline_0_var___divmod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___pow__ );
    Py_DECREF( outline_0_var___pow__ );
    outline_0_var___pow__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___radd__ );
    Py_DECREF( outline_0_var___radd__ );
    outline_0_var___radd__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rsub__ );
    Py_DECREF( outline_0_var___rsub__ );
    outline_0_var___rsub__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rmul__ );
    Py_DECREF( outline_0_var___rmul__ );
    outline_0_var___rmul__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rdiv__ );
    Py_DECREF( outline_0_var___rdiv__ );
    outline_0_var___rdiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rtruediv__ );
    Py_DECREF( outline_0_var___rtruediv__ );
    outline_0_var___rtruediv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rfloordiv__ );
    Py_DECREF( outline_0_var___rfloordiv__ );
    outline_0_var___rfloordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rmod__ );
    Py_DECREF( outline_0_var___rmod__ );
    outline_0_var___rmod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___rdivmod__ );
    Py_DECREF( outline_0_var___rdivmod__ );
    outline_0_var___rdivmod__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___eq__ );
    Py_DECREF( outline_0_var___eq__ );
    outline_0_var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___ne__ );
    Py_DECREF( outline_0_var___ne__ );
    outline_0_var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_copy );
    Py_DECREF( outline_0_var_copy );
    outline_0_var_copy = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_degree );
    Py_DECREF( outline_0_var_degree );
    outline_0_var_degree = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_cutdeg );
    Py_DECREF( outline_0_var_cutdeg );
    outline_0_var_cutdeg = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_trim );
    Py_DECREF( outline_0_var_trim );
    outline_0_var_trim = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_truncate );
    Py_DECREF( outline_0_var_truncate );
    outline_0_var_truncate = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_convert );
    Py_DECREF( outline_0_var_convert );
    outline_0_var_convert = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_mapparms );
    Py_DECREF( outline_0_var_mapparms );
    outline_0_var_mapparms = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_integ );
    Py_DECREF( outline_0_var_integ );
    outline_0_var_integ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_deriv );
    Py_DECREF( outline_0_var_deriv );
    outline_0_var_deriv = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_roots );
    Py_DECREF( outline_0_var_roots );
    outline_0_var_roots = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_linspace );
    Py_DECREF( outline_0_var_linspace );
    outline_0_var_linspace = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_fit );
    Py_DECREF( outline_0_var_fit );
    outline_0_var_fit = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_fromroots );
    Py_DECREF( outline_0_var_fromroots );
    outline_0_var_fromroots = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_identity );
    Py_DECREF( outline_0_var_identity );
    outline_0_var_identity = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_basis );
    Py_DECREF( outline_0_var_basis );
    outline_0_var_basis = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_cast );
    Py_DECREF( outline_0_var_cast );
    outline_0_var_cast = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___doc__ );
    Py_DECREF( outline_0_var___doc__ );
    outline_0_var___doc__ = NULL;

    Py_XDECREF( outline_0_var___metaclass__ );
    outline_0_var___metaclass__ = NULL;

    Py_XDECREF( outline_0_var___hash__ );
    outline_0_var___hash__ = NULL;

    Py_XDECREF( outline_0_var___array_ufunc__ );
    outline_0_var___array_ufunc__ = NULL;

    Py_XDECREF( outline_0_var_maxpower );
    outline_0_var_maxpower = NULL;

    Py_XDECREF( outline_0_var_domain );
    outline_0_var_domain = NULL;

    Py_XDECREF( outline_0_var_window );
    outline_0_var_window = NULL;

    Py_XDECREF( outline_0_var_nickname );
    outline_0_var_nickname = NULL;

    Py_XDECREF( outline_0_var__add );
    outline_0_var__add = NULL;

    Py_XDECREF( outline_0_var__sub );
    outline_0_var__sub = NULL;

    Py_XDECREF( outline_0_var__mul );
    outline_0_var__mul = NULL;

    Py_XDECREF( outline_0_var__div );
    outline_0_var__div = NULL;

    Py_XDECREF( outline_0_var__pow );
    outline_0_var__pow = NULL;

    Py_XDECREF( outline_0_var__val );
    outline_0_var__val = NULL;

    Py_XDECREF( outline_0_var__int );
    outline_0_var__int = NULL;

    Py_XDECREF( outline_0_var__der );
    outline_0_var__der = NULL;

    Py_XDECREF( outline_0_var__fit );
    outline_0_var__fit = NULL;

    Py_XDECREF( outline_0_var__line );
    outline_0_var__line = NULL;

    Py_XDECREF( outline_0_var__roots );
    outline_0_var__roots = NULL;

    Py_XDECREF( outline_0_var__fromroots );
    outline_0_var__fromroots = NULL;

    Py_XDECREF( outline_0_var_has_samecoef );
    outline_0_var_has_samecoef = NULL;

    Py_XDECREF( outline_0_var_has_samedomain );
    outline_0_var_has_samedomain = NULL;

    Py_XDECREF( outline_0_var_has_samewindow );
    outline_0_var_has_samewindow = NULL;

    Py_XDECREF( outline_0_var_has_sametype );
    outline_0_var_has_sametype = NULL;

    Py_XDECREF( outline_0_var__get_coefficients );
    outline_0_var__get_coefficients = NULL;

    Py_XDECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var___repr__ );
    outline_0_var___repr__ = NULL;

    Py_XDECREF( outline_0_var___str__ );
    outline_0_var___str__ = NULL;

    Py_XDECREF( outline_0_var___getstate__ );
    outline_0_var___getstate__ = NULL;

    Py_XDECREF( outline_0_var___setstate__ );
    outline_0_var___setstate__ = NULL;

    Py_XDECREF( outline_0_var___call__ );
    outline_0_var___call__ = NULL;

    Py_XDECREF( outline_0_var___iter__ );
    outline_0_var___iter__ = NULL;

    Py_XDECREF( outline_0_var___len__ );
    outline_0_var___len__ = NULL;

    Py_XDECREF( outline_0_var___neg__ );
    outline_0_var___neg__ = NULL;

    Py_XDECREF( outline_0_var___pos__ );
    outline_0_var___pos__ = NULL;

    Py_XDECREF( outline_0_var___add__ );
    outline_0_var___add__ = NULL;

    Py_XDECREF( outline_0_var___sub__ );
    outline_0_var___sub__ = NULL;

    Py_XDECREF( outline_0_var___mul__ );
    outline_0_var___mul__ = NULL;

    Py_XDECREF( outline_0_var___div__ );
    outline_0_var___div__ = NULL;

    Py_XDECREF( outline_0_var___truediv__ );
    outline_0_var___truediv__ = NULL;

    Py_XDECREF( outline_0_var___floordiv__ );
    outline_0_var___floordiv__ = NULL;

    Py_XDECREF( outline_0_var___mod__ );
    outline_0_var___mod__ = NULL;

    Py_XDECREF( outline_0_var___divmod__ );
    outline_0_var___divmod__ = NULL;

    Py_XDECREF( outline_0_var___pow__ );
    outline_0_var___pow__ = NULL;

    Py_XDECREF( outline_0_var___radd__ );
    outline_0_var___radd__ = NULL;

    Py_XDECREF( outline_0_var___rsub__ );
    outline_0_var___rsub__ = NULL;

    Py_XDECREF( outline_0_var___rmul__ );
    outline_0_var___rmul__ = NULL;

    Py_XDECREF( outline_0_var___rdiv__ );
    outline_0_var___rdiv__ = NULL;

    Py_XDECREF( outline_0_var___rtruediv__ );
    outline_0_var___rtruediv__ = NULL;

    Py_XDECREF( outline_0_var___rfloordiv__ );
    outline_0_var___rfloordiv__ = NULL;

    Py_XDECREF( outline_0_var___rmod__ );
    outline_0_var___rmod__ = NULL;

    Py_XDECREF( outline_0_var___rdivmod__ );
    outline_0_var___rdivmod__ = NULL;

    Py_XDECREF( outline_0_var___eq__ );
    outline_0_var___eq__ = NULL;

    Py_XDECREF( outline_0_var___ne__ );
    outline_0_var___ne__ = NULL;

    Py_XDECREF( outline_0_var_copy );
    outline_0_var_copy = NULL;

    Py_XDECREF( outline_0_var_degree );
    outline_0_var_degree = NULL;

    Py_XDECREF( outline_0_var_cutdeg );
    outline_0_var_cutdeg = NULL;

    Py_XDECREF( outline_0_var_trim );
    outline_0_var_trim = NULL;

    Py_XDECREF( outline_0_var_truncate );
    outline_0_var_truncate = NULL;

    Py_XDECREF( outline_0_var_convert );
    outline_0_var_convert = NULL;

    Py_XDECREF( outline_0_var_mapparms );
    outline_0_var_mapparms = NULL;

    Py_XDECREF( outline_0_var_integ );
    outline_0_var_integ = NULL;

    Py_XDECREF( outline_0_var_deriv );
    outline_0_var_deriv = NULL;

    Py_XDECREF( outline_0_var_roots );
    outline_0_var_roots = NULL;

    Py_XDECREF( outline_0_var_linspace );
    outline_0_var_linspace = NULL;

    Py_XDECREF( outline_0_var_fit );
    outline_0_var_fit = NULL;

    Py_XDECREF( outline_0_var_fromroots );
    outline_0_var_fromroots = NULL;

    Py_XDECREF( outline_0_var_identity );
    outline_0_var_identity = NULL;

    Py_XDECREF( outline_0_var_basis );
    outline_0_var_basis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 19;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_16 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_16;

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
    tmp_assign_source_88 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_88 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_88 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_88;

    tmp_called_name_16 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_args_element_name_16 = const_str_plain_ABCPolyBase;
    tmp_args_element_name_17 = const_tuple_type_object_tuple;
    tmp_args_element_name_18 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_18 );
    frame_954f874e3a7b4aaf3f0f5a3e66149c17->m_frame.f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_89;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_954f874e3a7b4aaf3f0f5a3e66149c17 );
#endif
    popFrameStack();

    assertFrameObject( frame_954f874e3a7b4aaf3f0f5a3e66149c17 );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_954f874e3a7b4aaf3f0f5a3e66149c17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_954f874e3a7b4aaf3f0f5a3e66149c17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_954f874e3a7b4aaf3f0f5a3e66149c17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_954f874e3a7b4aaf3f0f5a3e66149c17, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_assign_source_90 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_90 );
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCPolyBase, tmp_assign_source_90 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$polynomial$_polybase );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
