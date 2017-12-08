/* Generated code for Python source for module 'numpy.core.getlimits'
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

/* The _module_numpy$core$getlimits is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$getlimits;
PyDictObject *moduledict_numpy$core$getlimits;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_machep;
static PyObject *const_str_digest_b11b128c563b5ffb658ae9500081eb04;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___package__;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_precision;
static PyObject *const_str_digest_8b386aa245a595a957b1bc2ae03f1a45;
extern PyObject *const_str_plain_issubclass;
static PyObject *const_int_pos_105;
extern PyObject *const_str_plain_title;
extern PyObject *const_tuple_str_plain_umath_tuple;
static PyObject *const_str_plain__convert_to_float;
extern PyObject *const_str_plain_float16;
extern PyObject *const_tuple_str_plain_numeric_tuple;
extern PyObject *const_str_plain_longdouble;
extern PyObject *const_str_plain_epsneg;
static PyObject *const_tuple_int_neg_24_tuple;
extern PyObject *const_str_plain_longfloat;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_9d407aba079586ddc2565511c907906b;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_eps;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_int_type_tuple;
extern PyObject *const_str_plain_resolution;
static PyObject *const_tuple_dc490514ccb569cefc5b1902373398fa_tuple;
extern PyObject *const_str_plain_obj2sctype;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_tobytes;
extern PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
static PyObject *const_str_plain__tiny_f128;
static PyObject *const_list_str_plain_finfo_str_plain_iinfo_list;
static PyObject *const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple;
extern PyObject *const_str_plain_umath;
static PyObject *const_tuple_int_neg_23_tuple;
static PyObject *const_str_digest_c585224fd2c43f929c10a58162297da8;
static PyObject *const_int_neg_64;
static PyObject *const_str_plain_nexp;
static PyObject *const_tuple_int_neg_113_tuple;
static PyObject *const_str_digest_c8ad69a27958f4a91e4487fd0fe6fc25;
extern PyObject *const_str_plain_dtypes;
extern PyObject *const_str_plain___repr__;
static PyObject *const_int_pos_112;
static PyObject *const_str_digest_eaaa9394d408576376e7108c86542536;
extern PyObject *const_str_plain__str_epsneg;
static PyObject *const_str_plain__tiny_f80;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_MachArLike;
static PyObject *const_tuple_str_plain_epsneg_tuple;
static PyObject *const_str_plain_ftype;
static PyObject *const_int_neg_24;
static PyObject *const_tuple_str_plain_v_str_plain_ftype_tuple;
static PyObject *const_str_plain_ma_like;
static PyObject *const_str_digest_b8eaccad553858ca41bd501c0a17651e;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_self_str_plain_fmt_tuple;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_inf;
static PyObject *const_str_plain__f16;
extern PyObject *const_str_plain_complex_;
static PyObject *const_str_plain_nmant;
extern PyObject *const_str_plain_huge;
extern PyObject *const_str_plain_warnings;
static PyObject *const_int_pos_65504;
static PyObject *const_str_plain__float64_ma;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_float_to_float;
extern PyObject *const_str_plain_float_conv;
static PyObject *const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_int_neg_1022;
extern PyObject *const_str_plain_itemsize;
static PyObject *const_int_pos_63;
static PyObject *const_int_neg_126;
static PyObject *const_float_4_4942328371557893e307;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain__str_xmin;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain__ld;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_inexact;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_int64;
static PyObject *const_str_plain__fr0;
static PyObject *const_str_plain__fr1;
static PyObject *const_str_digest_71f9600c11b1b2dcd32646ee953369ea;
static PyObject *const_str_plain__epsneg_f80;
static PyObject *const_tuple_str_plain_array_str_plain_inf_tuple;
static PyObject *const_str_plain__float128_ma;
static PyObject *const_tuple_str_plain_ibeta_tuple;
static PyObject *const_tuple_str_plain_tiny_tuple;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_plain__float80_ma;
extern PyObject *const_str_plain_float32;
static PyObject *const_str_plain__f64;
static PyObject *const_str_plain__epsneg_f128;
extern PyObject *const_str_plain_int16;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain_errstate;
extern PyObject *const_int_pos_15;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain__str_tiny;
extern PyObject *const_str_plain_half;
static PyObject *const_int_neg_63;
static PyObject *const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple;
static PyObject *const_int_neg_16382;
static PyObject *const_str_digest_0dfcf8cd171b40dc563f1a190d516493;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_floating;
static PyObject *const_tuple_str_chr_60_tuple;
static PyObject *const_str_plain__init;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain__float16_ma;
static PyObject *const_tuple_int_neg_16382_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_iu;
static PyObject *const_str_plain__huge_f80;
extern PyObject *const_str_plain_longlong;
extern PyObject *const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_ntypes;
static PyObject *const_str_plain__huge_f128;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_plain_maxexp;
static PyObject *const_str_plain__float32_ma;
extern PyObject *const_str_plain_single;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_57aa1c044b869aee3cb076817c47bad3;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_ftype_str_plain_params_tuple;
extern PyObject *const_str_plain_tiny;
static PyObject *const_str_plain_exp2;
static PyObject *const_tuple_str_plain_v_str_plain_params_tuple;
extern PyObject *const_str_plain_ngrd;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_float64;
extern PyObject *const_str_plain_array;
static PyObject *const_int_neg_14;
static PyObject *const_float_6_103515625e_minus_05;
extern PyObject *const_str_plain_c;
static PyObject *const_tuple_str_plain_double_tuple;
static PyObject *const_int_neg_11;
static PyObject *const_str_plain_itype;
static PyObject *const_str_plain__tiny_f64;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple;
extern PyObject *const_str_plain_bits;
static PyObject *const_float_2_220446049250313e_minus_16;
static PyObject *const_str_digest_7539c6308de2db2764b97103d1120c88;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_17243ada09c28419093a512ea12c0885;
static PyObject *const_str_digest_e7e19dd5257f03801740d23cfcc5941d;
static PyObject *const_float_2_2250738585072014e_minus_308;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_int_pos_10_tuple;
static PyObject *const_str_digest_81124a5be721172281510fa6fc9b29b5;
static PyObject *const_str_digest_20d89c7cbfecc7ac89421e51514a298a;
static PyObject *const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_xmax;
static PyObject *const_tuple_int_neg_11_tuple;
extern PyObject *const_str_plain_iexp;
static PyObject *const_str_plain__finfo_cache;
static PyObject *const_str_plain__discovered_machar;
static PyObject *const_tuple_int_neg_112_tuple;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain__str_resolution;
static PyObject *const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple;
static PyObject *const_str_digest_454d0777cd09130adadab5cb34c54852;
extern PyObject *const_str_plain_csingle;
static PyObject *const_str_plain__float_to_str;
static PyObject *const_tuple_float_6_103515625e_minus_05_tuple;
static PyObject *const_str_plain_nextafter;
static PyObject *const_str_plain__KNOWN_TYPES;
static PyObject *const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6;
extern PyObject *const_str_plain_it;
extern PyObject *const_str_plain_newbyteorder;
static PyObject *const_str_plain__epsneg_f64;
static PyObject *const_tuple_int_neg_126_tuple;
extern PyObject *const_str_plain_machar;
static PyObject *const_str_digest_f6e50f1e539dbc1212fdc62e9a8dbcb0;
extern PyObject *const_str_plain_flat;
static PyObject *const_tuple_str_plain_log10_str_plain_exp2_tuple;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_clongfloat;
static PyObject *const_str_digest_6da1ae55ed72337372d367d607b09d18;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_newdtype;
static PyObject *const_int_pos_16384;
extern PyObject *const_str_plain_ibeta;
static PyObject *const_str_digest_1c7a03bb335423a9f56b895c3fbc148d;
static PyObject *const_str_digest_dd8d834fa6f08a772c04822740add2d7;
extern PyObject *const_str_plain__str_eps;
extern PyObject *const_str_plain_numerictypes;
extern PyObject *const_str_plain_irnd;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_1fe6771d9d4496f5794e2ba123343157;
extern PyObject *const_str_plain_ndim;
static PyObject *const_float_3_4028234663852886e38;
static PyObject *const_str_plain__max_vals;
static PyObject *const_tuple_int_neg_105_tuple;
extern PyObject *const_str_plain__str_xmax;
static PyObject *const_str_plain__MACHAR_PARAMS;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_UserWarning;
static PyObject *const_tuple_int_neg_64_tuple;
static PyObject *const_float_1_1102230246251565e_minus_16;
static PyObject *const_int_pos_23;
extern PyObject *const_str_plain_fmt;
static PyObject *const_str_plain__str_max;
static PyObject *const_tuple_849295482a97faaf99989251c01fbde0_tuple;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_float_3_4028234663852886e38_tuple;
static PyObject *const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd;
static PyObject *const_tuple_str_plain_half_tuple;
static PyObject *const_str_digest_3122c1a6126f732cd94f8864df7d76ff;
extern PyObject *const_str_plain_min;
static PyObject *const_str_plain__huge_dd;
static PyObject *const_int_neg_105;
static PyObject *const_str_digest_ab7c9132978cbffbf3e766956f1fc60a;
static PyObject *const_int_neg_106;
static PyObject *const_str_digest_c953c461ebc82ab94922f9cdf925a15f;
static PyObject *const_tuple_int_pos_65504_tuple;
static PyObject *const_str_digest_c9daff2734dd6db50e0c7d322a45e9de;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_chr_60;
static PyObject *const_str_digest_fd500741fbfca3fe5ca984210be4208b;
extern PyObject *const_str_plain_double;
static PyObject *const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple;
extern PyObject *const_str_plain_v;
static PyObject *const_int_pos_128;
static PyObject *const_tuple_str_plain_v_str_plain_float_conv_tuple;
static PyObject *const_str_plain__f32;
static PyObject *const_tuple_int_neg_106_tuple;
extern PyObject *const_str_plain_iinfo;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_38de214fb0b486a50f3173083a2b8878_tuple;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain__get_machar;
extern PyObject *const_dict_8629c35bb486b0ff8446977b73ad0aff;
extern PyObject *const_tuple_str_plain_a_tuple;
extern PyObject *const_str_plain_negep;
extern PyObject *const_str_plain_word;
static PyObject *const_int_pos_52;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_int_neg_10;
static PyObject *const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_int_neg_23;
static PyObject *const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b;
extern PyObject *const_str_plain_float_;
static PyObject *const_tuple_str_plain_MachAr_tuple;
static PyObject *const_tuple_int_neg_63_tuple;
extern PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
static PyObject *const_tuple_int_neg_10_tuple;
static PyObject *const_tuple_str_plain_single_tuple;
static PyObject *const_int_neg_112;
static PyObject *const_int_neg_113;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_d699850a7ed4dcad4593c97865f24dd4;
static PyObject *const_str_plain__float_dd_ma;
static PyObject *const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_int32;
static PyObject *const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_digest_6ccfcc9d5b330646d0167140367b220b;
static PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_str_digest_689f5c49db7f0f46fe96e883a6a93baa;
extern PyObject *const_str_plain_epsilon;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_eps_tuple;
static PyObject *const_str_plain_int_type;
static PyObject *const_int_neg_52;
static PyObject *const_int_neg_53;
static PyObject *const_tuple_str_plain_huge_tuple;
extern PyObject *const_int_pos_1024;
static PyObject *const_tuple_int_neg_1022_tuple;
extern PyObject *const_str_plain_minexp;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_xmin;
static PyObject *const_str_plain__min_vals;
static PyObject *const_str_plain__title_fmt;
extern PyObject *const_str_angle_lambda;
static PyObject *const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple;
extern PyObject *const_str_plain_log10;
extern PyObject *const_str_plain_MachAr;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b11b128c563b5ffb658ae9500081eb04 = UNSTREAM_STRING( &constant_bin[ 418199 ], 6, 0 );
    const_str_digest_8b386aa245a595a957b1bc2ae03f1a45 = UNSTREAM_STRING( &constant_bin[ 418205 ], 16, 0 );
    const_int_pos_105 = PyInt_FromLong( 105l );
    const_str_plain__convert_to_float = UNSTREAM_STRING( &constant_bin[ 418221 ], 17, 1 );
    const_tuple_int_neg_24_tuple = PyTuple_New( 1 );
    const_int_neg_24 = PyInt_FromLong( -24l );
    PyTuple_SET_ITEM( const_tuple_int_neg_24_tuple, 0, const_int_neg_24 ); Py_INCREF( const_int_neg_24 );
    const_str_digest_9d407aba079586ddc2565511c907906b = UNSTREAM_STRING( &constant_bin[ 418238 ], 8, 0 );
    const_tuple_str_plain_self_str_plain_int_type_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_int_type_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_int_type = UNSTREAM_STRING( &constant_bin[ 103748 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_int_type_tuple, 1, const_str_plain_int_type ); Py_INCREF( const_str_plain_int_type );
    const_tuple_dc490514ccb569cefc5b1902373398fa_tuple = PyTuple_New( 4 );
    const_str_plain_ftype = UNSTREAM_STRING( &constant_bin[ 418246 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 0, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_ma_like = UNSTREAM_STRING( &constant_bin[ 418251 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 3, const_str_plain_ma_like ); Py_INCREF( const_str_plain_ma_like );
    const_str_plain__tiny_f128 = UNSTREAM_STRING( &constant_bin[ 418258 ], 10, 1 );
    const_list_str_plain_finfo_str_plain_iinfo_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_finfo_str_plain_iinfo_list, 0, const_str_plain_finfo ); Py_INCREF( const_str_plain_finfo );
    PyList_SET_ITEM( const_list_str_plain_finfo_str_plain_iinfo_list, 1, const_str_plain_iinfo ); Py_INCREF( const_str_plain_iinfo );
    const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 0, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 1, const_str_plain_iexp ); Py_INCREF( const_str_plain_iexp );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 2, const_str_plain_maxexp ); Py_INCREF( const_str_plain_maxexp );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 3, const_str_plain_minexp ); Py_INCREF( const_str_plain_minexp );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 4, const_str_plain_negep ); Py_INCREF( const_str_plain_negep );
    PyTuple_SET_ITEM( const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple, 5, const_str_plain_machep ); Py_INCREF( const_str_plain_machep );
    const_tuple_int_neg_23_tuple = PyTuple_New( 1 );
    const_int_neg_23 = PyInt_FromLong( -23l );
    PyTuple_SET_ITEM( const_tuple_int_neg_23_tuple, 0, const_int_neg_23 ); Py_INCREF( const_int_neg_23 );
    const_str_digest_c585224fd2c43f929c10a58162297da8 = UNSTREAM_STRING( &constant_bin[ 418268 ], 21, 0 );
    const_int_neg_64 = PyInt_FromLong( -64l );
    const_str_plain_nexp = UNSTREAM_STRING( &constant_bin[ 418289 ], 4, 1 );
    const_tuple_int_neg_113_tuple = PyTuple_New( 1 );
    const_int_neg_113 = PyInt_FromLong( -113l );
    PyTuple_SET_ITEM( const_tuple_int_neg_113_tuple, 0, const_int_neg_113 ); Py_INCREF( const_int_neg_113 );
    const_str_digest_c8ad69a27958f4a91e4487fd0fe6fc25 = UNSTREAM_STRING( &constant_bin[ 418293 ], 461, 0 );
    const_int_pos_112 = PyInt_FromLong( 112l );
    const_str_digest_eaaa9394d408576376e7108c86542536 = UNSTREAM_STRING( &constant_bin[ 418754 ], 4, 0 );
    const_str_plain__tiny_f80 = UNSTREAM_STRING( &constant_bin[ 418758 ], 9, 1 );
    const_str_plain_MachArLike = UNSTREAM_STRING( &constant_bin[ 418767 ], 10, 1 );
    const_tuple_str_plain_epsneg_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_epsneg_tuple, 0, const_str_plain_epsneg ); Py_INCREF( const_str_plain_epsneg );
    const_tuple_str_plain_v_str_plain_ftype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_ftype_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    const_str_digest_b8eaccad553858ca41bd501c0a17651e = UNSTREAM_STRING( &constant_bin[ 418777 ], 20, 0 );
    const_str_plain__f16 = UNSTREAM_STRING( &constant_bin[ 418797 ], 4, 1 );
    const_str_plain_nmant = UNSTREAM_STRING( &constant_bin[ 418801 ], 5, 1 );
    const_int_pos_65504 = PyInt_FromLong( 65504l );
    const_str_plain__float64_ma = UNSTREAM_STRING( &constant_bin[ 418806 ], 11, 1 );
    const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple, 0, const_str_plain_tiny ); Py_INCREF( const_str_plain_tiny );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple, 1, const_str_plain_resolution ); Py_INCREF( const_str_plain_resolution );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple, 2, const_str_plain_epsneg ); Py_INCREF( const_str_plain_epsneg );
    const_int_neg_1022 = PyInt_FromLong( -1022l );
    const_int_pos_63 = PyInt_FromLong( 63l );
    const_int_neg_126 = PyInt_FromLong( -126l );
    const_float_4_4942328371557893e307 = UNSTREAM_FLOAT( &constant_bin[ 418817 ] );
    const_str_plain__ld = UNSTREAM_STRING( &constant_bin[ 418825 ], 3, 1 );
    const_str_plain__fr0 = UNSTREAM_STRING( &constant_bin[ 418828 ], 4, 1 );
    const_str_plain__fr1 = UNSTREAM_STRING( &constant_bin[ 418832 ], 4, 1 );
    const_str_digest_71f9600c11b1b2dcd32646ee953369ea = UNSTREAM_STRING( &constant_bin[ 418836 ], 40, 0 );
    const_str_plain__epsneg_f80 = UNSTREAM_STRING( &constant_bin[ 418876 ], 11, 1 );
    const_tuple_str_plain_array_str_plain_inf_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_inf_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_str_plain_array_str_plain_inf_tuple, 1, const_str_plain_inf ); Py_INCREF( const_str_plain_inf );
    const_str_plain__float128_ma = UNSTREAM_STRING( &constant_bin[ 418887 ], 12, 1 );
    const_tuple_str_plain_ibeta_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ibeta_tuple, 0, const_str_plain_ibeta ); Py_INCREF( const_str_plain_ibeta );
    const_tuple_str_plain_tiny_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tiny_tuple, 0, const_str_plain_tiny ); Py_INCREF( const_str_plain_tiny );
    const_str_plain__float80_ma = UNSTREAM_STRING( &constant_bin[ 418899 ], 11, 1 );
    const_str_plain__f64 = UNSTREAM_STRING( &constant_bin[ 418910 ], 4, 1 );
    const_str_plain__epsneg_f128 = UNSTREAM_STRING( &constant_bin[ 418914 ], 12, 1 );
    const_str_plain__str_tiny = UNSTREAM_STRING( &constant_bin[ 418590 ], 9, 1 );
    const_int_neg_63 = PyInt_FromLong( -63l );
    const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    const_str_plain__finfo_cache = UNSTREAM_STRING( &constant_bin[ 418926 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 2, const_str_plain__finfo_cache ); Py_INCREF( const_str_plain__finfo_cache );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 3, const_str_plain___new__ ); Py_INCREF( const_str_plain___new__ );
    const_str_plain__init = UNSTREAM_STRING( &constant_bin[ 13736 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 4, const_str_plain__init ); Py_INCREF( const_str_plain__init );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 5, const_str_plain___str__ ); Py_INCREF( const_str_plain___str__ );
    PyTuple_SET_ITEM( const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 6, const_str_plain___repr__ ); Py_INCREF( const_str_plain___repr__ );
    const_int_neg_16382 = PyInt_FromLong( -16382l );
    const_str_digest_0dfcf8cd171b40dc563f1a190d516493 = UNSTREAM_STRING( &constant_bin[ 418938 ], 23, 0 );
    const_tuple_str_chr_60_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_60_tuple, 0, const_str_chr_60 ); Py_INCREF( const_str_chr_60 );
    const_str_plain__float16_ma = UNSTREAM_STRING( &constant_bin[ 418961 ], 11, 1 );
    const_tuple_int_neg_16382_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_16382_tuple, 0, const_int_neg_16382 ); Py_INCREF( const_int_neg_16382 );
    const_str_plain__huge_f80 = UNSTREAM_STRING( &constant_bin[ 418972 ], 9, 1 );
    const_str_plain__huge_f128 = UNSTREAM_STRING( &constant_bin[ 418981 ], 10, 1 );
    const_str_plain__float32_ma = UNSTREAM_STRING( &constant_bin[ 418991 ], 11, 1 );
    const_str_digest_57aa1c044b869aee3cb076817c47bad3 = UNSTREAM_STRING( &constant_bin[ 419002 ], 2, 0 );
    const_tuple_str_plain_ftype_str_plain_params_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftype_str_plain_params_tuple, 0, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_str_plain_ftype_str_plain_params_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_str_plain_exp2 = UNSTREAM_STRING( &constant_bin[ 419004 ], 4, 1 );
    const_tuple_str_plain_v_str_plain_params_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    const_int_neg_14 = PyInt_FromLong( -14l );
    const_float_6_103515625e_minus_05 = UNSTREAM_FLOAT( &constant_bin[ 419008 ] );
    const_tuple_str_plain_double_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_double_tuple, 0, const_str_plain_double ); Py_INCREF( const_str_plain_double );
    const_int_neg_11 = PyInt_FromLong( -11l );
    const_str_plain_itype = UNSTREAM_STRING( &constant_bin[ 419016 ], 5, 1 );
    const_str_plain__tiny_f64 = UNSTREAM_STRING( &constant_bin[ 419021 ], 9, 1 );
    const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 1, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    PyTuple_SET_ITEM( const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 3, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 4, const_str_plain_float_conv ); Py_INCREF( const_str_plain_float_conv );
    PyTuple_SET_ITEM( const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 5, const_str_plain_float_to_float ); Py_INCREF( const_str_plain_float_to_float );
    const_float_2_220446049250313e_minus_16 = UNSTREAM_FLOAT( &constant_bin[ 419030 ] );
    const_str_digest_7539c6308de2db2764b97103d1120c88 = UNSTREAM_STRING( &constant_bin[ 419038 ], 2414, 0 );
    const_str_digest_17243ada09c28419093a512ea12c0885 = UNSTREAM_STRING( &constant_bin[ 421452 ], 24, 0 );
    const_str_digest_e7e19dd5257f03801740d23cfcc5941d = UNSTREAM_STRING( &constant_bin[ 421476 ], 36, 0 );
    const_float_2_2250738585072014e_minus_308 = UNSTREAM_FLOAT( &constant_bin[ 421512 ] );
    const_str_digest_81124a5be721172281510fa6fc9b29b5 = UNSTREAM_STRING( &constant_bin[ 421520 ], 90, 0 );
    const_str_digest_20d89c7cbfecc7ac89421e51514a298a = UNSTREAM_STRING( &constant_bin[ 421610 ], 26, 0 );
    const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0 = UNSTREAM_STRING( &constant_bin[ 421636 ], 22, 0 );
    const_tuple_int_neg_11_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_11_tuple, 0, const_int_neg_11 ); Py_INCREF( const_int_neg_11 );
    const_str_plain__discovered_machar = UNSTREAM_STRING( &constant_bin[ 421658 ], 18, 1 );
    const_tuple_int_neg_112_tuple = PyTuple_New( 1 );
    const_int_neg_112 = PyInt_FromLong( -112l );
    PyTuple_SET_ITEM( const_tuple_int_neg_112_tuple, 0, const_int_neg_112 ); Py_INCREF( const_int_neg_112 );
    const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 2, const_str_plain_machar ); Py_INCREF( const_str_plain_machar );
    PyTuple_SET_ITEM( const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 3, const_str_plain_word ); Py_INCREF( const_str_plain_word );
    const_str_digest_454d0777cd09130adadab5cb34c54852 = UNSTREAM_STRING( &constant_bin[ 421676 ], 74, 0 );
    const_str_plain__float_to_str = UNSTREAM_STRING( &constant_bin[ 421750 ], 13, 1 );
    const_tuple_float_6_103515625e_minus_05_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_6_103515625e_minus_05_tuple, 0, const_float_6_103515625e_minus_05 ); Py_INCREF( const_float_6_103515625e_minus_05 );
    const_str_plain_nextafter = UNSTREAM_STRING( &constant_bin[ 421763 ], 9, 1 );
    const_str_plain__KNOWN_TYPES = UNSTREAM_STRING( &constant_bin[ 421772 ], 12, 1 );
    const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6 = UNSTREAM_STRING( &constant_bin[ 421784 ], 29, 0 );
    const_str_plain__epsneg_f64 = UNSTREAM_STRING( &constant_bin[ 421813 ], 11, 1 );
    const_tuple_int_neg_126_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_126_tuple, 0, const_int_neg_126 ); Py_INCREF( const_int_neg_126 );
    const_str_digest_f6e50f1e539dbc1212fdc62e9a8dbcb0 = UNSTREAM_STRING( &constant_bin[ 421824 ], 10, 0 );
    const_tuple_str_plain_log10_str_plain_exp2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_log10_str_plain_exp2_tuple, 0, const_str_plain_log10 ); Py_INCREF( const_str_plain_log10 );
    PyTuple_SET_ITEM( const_tuple_str_plain_log10_str_plain_exp2_tuple, 1, const_str_plain_exp2 ); Py_INCREF( const_str_plain_exp2 );
    const_str_digest_6da1ae55ed72337372d367d607b09d18 = UNSTREAM_STRING( &constant_bin[ 421834 ], 16, 0 );
    const_int_pos_16384 = PyInt_FromLong( 16384l );
    const_str_digest_1c7a03bb335423a9f56b895c3fbc148d = UNSTREAM_STRING( &constant_bin[ 421850 ], 86, 0 );
    const_str_digest_dd8d834fa6f08a772c04822740add2d7 = UNSTREAM_STRING( &constant_bin[ 421936 ], 640, 0 );
    const_str_digest_1fe6771d9d4496f5794e2ba123343157 = UNSTREAM_STRING( &constant_bin[ 422576 ], 29, 0 );
    const_float_3_4028234663852886e38 = UNSTREAM_FLOAT( &constant_bin[ 422605 ] );
    const_str_plain__max_vals = UNSTREAM_STRING( &constant_bin[ 422613 ], 9, 1 );
    const_tuple_int_neg_105_tuple = PyTuple_New( 1 );
    const_int_neg_105 = PyInt_FromLong( -105l );
    PyTuple_SET_ITEM( const_tuple_int_neg_105_tuple, 0, const_int_neg_105 ); Py_INCREF( const_int_neg_105 );
    const_str_plain__MACHAR_PARAMS = UNSTREAM_STRING( &constant_bin[ 422622 ], 14, 1 );
    const_tuple_int_neg_64_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_64_tuple, 0, const_int_neg_64 ); Py_INCREF( const_int_neg_64 );
    const_float_1_1102230246251565e_minus_16 = UNSTREAM_FLOAT( &constant_bin[ 422636 ] );
    const_int_pos_23 = PyInt_FromLong( 23l );
    const_str_plain__str_max = UNSTREAM_STRING( &constant_bin[ 418640 ], 8, 1 );
    const_tuple_849295482a97faaf99989251c01fbde0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_849295482a97faaf99989251c01fbde0_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_849295482a97faaf99989251c01fbde0_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_849295482a97faaf99989251c01fbde0_tuple, 2, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_849295482a97faaf99989251c01fbde0_tuple, 3, const_str_plain_dtypes ); Py_INCREF( const_str_plain_dtypes );
    PyTuple_SET_ITEM( const_tuple_849295482a97faaf99989251c01fbde0_tuple, 4, const_str_plain_newdtype ); Py_INCREF( const_str_plain_newdtype );
    PyTuple_SET_ITEM( const_tuple_849295482a97faaf99989251c01fbde0_tuple, 5, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    const_tuple_float_3_4028234663852886e38_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_float_3_4028234663852886e38_tuple, 0, const_float_3_4028234663852886e38 ); Py_INCREF( const_float_3_4028234663852886e38 );
    const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd = UNSTREAM_STRING( &constant_bin[ 422644 ], 6, 0 );
    const_tuple_str_plain_half_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_half_tuple, 0, const_str_plain_half ); Py_INCREF( const_str_plain_half );
    const_str_digest_3122c1a6126f732cd94f8864df7d76ff = UNSTREAM_STRING( &constant_bin[ 422650 ], 29, 0 );
    const_str_plain__huge_dd = UNSTREAM_STRING( &constant_bin[ 422679 ], 8, 1 );
    const_str_digest_ab7c9132978cbffbf3e766956f1fc60a = UNSTREAM_STRING( &constant_bin[ 422687 ], 66, 0 );
    const_int_neg_106 = PyInt_FromLong( -106l );
    const_str_digest_c953c461ebc82ab94922f9cdf925a15f = UNSTREAM_STRING( &constant_bin[ 422753 ], 16, 0 );
    const_tuple_int_pos_65504_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_65504_tuple, 0, const_int_pos_65504 ); Py_INCREF( const_int_pos_65504 );
    const_str_digest_c9daff2734dd6db50e0c7d322a45e9de = UNSTREAM_STRING( &constant_bin[ 422769 ], 876, 0 );
    const_str_digest_fd500741fbfca3fe5ca984210be4208b = UNSTREAM_STRING( &constant_bin[ 423645 ], 53, 0 );
    const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple = PyTuple_New( 1 );
    const_str_digest_6ccfcc9d5b330646d0167140367b220b = UNSTREAM_STRING( &constant_bin[ 423698 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple, 0, const_str_digest_6ccfcc9d5b330646d0167140367b220b ); Py_INCREF( const_str_digest_6ccfcc9d5b330646d0167140367b220b );
    const_int_pos_128 = PyInt_FromLong( 128l );
    const_tuple_str_plain_v_str_plain_float_conv_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_float_conv_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_float_conv_tuple, 1, const_str_plain_float_conv ); Py_INCREF( const_str_plain_float_conv );
    const_str_plain__f32 = UNSTREAM_STRING( &constant_bin[ 423702 ], 4, 1 );
    const_tuple_int_neg_106_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_106_tuple, 0, const_int_neg_106 ); Py_INCREF( const_int_neg_106 );
    const_tuple_38de214fb0b486a50f3173083a2b8878_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    const_str_plain__min_vals = UNSTREAM_STRING( &constant_bin[ 423706 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 2, const_str_plain__min_vals ); Py_INCREF( const_str_plain__min_vals );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 3, const_str_plain__max_vals ); Py_INCREF( const_str_plain__max_vals );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 4, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 5, const_str_plain_min ); Py_INCREF( const_str_plain_min );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 6, const_str_plain_max ); Py_INCREF( const_str_plain_max );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 7, const_str_plain___str__ ); Py_INCREF( const_str_plain___str__ );
    PyTuple_SET_ITEM( const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 8, const_str_plain___repr__ ); Py_INCREF( const_str_plain___repr__ );
    const_str_plain__get_machar = UNSTREAM_STRING( &constant_bin[ 423715 ], 11, 1 );
    const_int_pos_52 = PyInt_FromLong( 52l );
    const_int_neg_10 = PyInt_FromLong( -10l );
    const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple = PyTuple_New( 1 );
    const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b = UNSTREAM_STRING( &constant_bin[ 421720 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple, 0, const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b ); Py_INCREF( const_str_digest_61eb47d02a6bf21baa1afce40f67ac8b );
    const_tuple_str_plain_MachAr_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MachAr_tuple, 0, const_str_plain_MachAr ); Py_INCREF( const_str_plain_MachAr );
    const_tuple_int_neg_63_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_63_tuple, 0, const_int_neg_63 ); Py_INCREF( const_int_neg_63 );
    const_tuple_int_neg_10_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_10_tuple, 0, const_int_neg_10 ); Py_INCREF( const_int_neg_10 );
    const_tuple_str_plain_single_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_single_tuple, 0, const_str_plain_single ); Py_INCREF( const_str_plain_single );
    const_str_digest_d699850a7ed4dcad4593c97865f24dd4 = UNSTREAM_STRING( &constant_bin[ 423726 ], 189, 0 );
    const_str_plain__float_dd_ma = UNSTREAM_STRING( &constant_bin[ 423915 ], 12, 1 );
    const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple, 0, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple, 1, const_str_plain_params ); Py_INCREF( const_str_plain_params );
    PyTuple_SET_ITEM( const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple, 2, const_str_plain_ftype ); Py_INCREF( const_str_plain_ftype );
    const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 1, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 2, const_str_plain___init__ ); Py_INCREF( const_str_plain___init__ );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 3, const_str_plain__str_eps ); Py_INCREF( const_str_plain__str_eps );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 4, const_str_plain__str_epsneg ); Py_INCREF( const_str_plain__str_epsneg );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 5, const_str_plain__str_xmin ); Py_INCREF( const_str_plain__str_xmin );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 6, const_str_plain__str_xmax ); Py_INCREF( const_str_plain__str_xmax );
    PyTuple_SET_ITEM( const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 7, const_str_plain__str_resolution ); Py_INCREF( const_str_plain__str_resolution );
    const_tuple_int_pos_4_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4_tuple, 0, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_str_digest_689f5c49db7f0f46fe96e883a6a93baa = UNSTREAM_STRING( &constant_bin[ 423927 ], 28, 0 );
    const_tuple_str_plain_eps_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_eps_tuple, 0, const_str_plain_eps ); Py_INCREF( const_str_plain_eps );
    const_int_neg_52 = PyInt_FromLong( -52l );
    const_int_neg_53 = PyInt_FromLong( -53l );
    const_tuple_str_plain_huge_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_huge_tuple, 0, const_str_plain_huge ); Py_INCREF( const_str_plain_huge );
    const_tuple_int_neg_1022_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1022_tuple, 0, const_int_neg_1022 ); Py_INCREF( const_int_neg_1022 );
    const_str_plain__title_fmt = UNSTREAM_STRING( &constant_bin[ 423955 ], 10, 1 );
    const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 2, const_str_plain_d ); Py_INCREF( const_str_plain_d );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$getlimits( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e156b4ce634de548f96c465e66ba9301;
static PyCodeObject *codeobj_9913092b2c98990e25e202cb1334e0f8;
static PyCodeObject *codeobj_32dfad09b15009d73671f41cca584faa;
static PyCodeObject *codeobj_e95a0f8c2929c568b3708edf78f0c78c;
static PyCodeObject *codeobj_c85b1ff7900ccf1771b0224b6adfce33;
static PyCodeObject *codeobj_cb891d91f07c35f86869701bfeea4fd3;
static PyCodeObject *codeobj_0b3c4f8d525d5339e3430cc5e7d12527;
static PyCodeObject *codeobj_643f15fd7521b115cd0b0b1ba783eb14;
static PyCodeObject *codeobj_4ca5dff2617d09328c13dc5964f2e5bd;
static PyCodeObject *codeobj_9f019b9506e17963861441e1e7a2f802;
static PyCodeObject *codeobj_96afa414482125c6e39f2c9da482f9b3;
static PyCodeObject *codeobj_f93e5e9b0f77004eaaf76dd9851f530a;
static PyCodeObject *codeobj_7bb0e68a2f7645d892400de5ef48a5a1;
static PyCodeObject *codeobj_e09152bc69b218d334707abf4d1fdad1;
static PyCodeObject *codeobj_dbad0596e78b8f61c8dd157dffb78e7d;
static PyCodeObject *codeobj_9c25c9e39664233b8f38cdc9d843bec0;
static PyCodeObject *codeobj_2b0cc9af0c53c04aaa3cf78c0ff4dac1;
static PyCodeObject *codeobj_3fd935875d9b2a70c23c714b4fb29560;
static PyCodeObject *codeobj_6c3532cf7fba228993191032c80f6c83;
static PyCodeObject *codeobj_11b0aa66c3ba3af1ac737d952218da10;
static PyCodeObject *codeobj_8ca99f9408b8f1b3d3328d5c5e627622;
static PyCodeObject *codeobj_53d2bc4ec3afa23f7a1e9a502e6029fd;
static PyCodeObject *codeobj_189412fa2d28c11dcad5435bb02bf76b;
static PyCodeObject *codeobj_c15237f68cf08fb1f3ec9c2b5eae9105;
static PyCodeObject *codeobj_2c04ac430ed4ed12d1c4f76794184034;
static PyCodeObject *codeobj_4fe6e84b9868c9e6683a83c84efdf37a;
static PyCodeObject *codeobj_4eb771f6908b6f61299821cf47e6118c;
static PyCodeObject *codeobj_1f451b817a40df4f348a68987218b960;
static PyCodeObject *codeobj_ad73847fe647c6e8e449cfa50b9c972d;
static PyCodeObject *codeobj_53eface06ff315e22e1345fc36bf6801;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_fd500741fbfca3fe5ca984210be4208b;
    codeobj_e156b4ce634de548f96c465e66ba9301 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 69, const_tuple_str_plain_v_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9913092b2c98990e25e202cb1334e0f8 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 70, const_tuple_str_plain_v_str_plain_float_conv_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_32dfad09b15009d73671f41cca584faa = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 71, const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e95a0f8c2929c568b3708edf78f0c78c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 298, const_tuple_str_plain_v_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c85b1ff7900ccf1771b0224b6adfce33 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 299, const_tuple_str_plain_v_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cb891d91f07c35f86869701bfeea4fd3 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 300, const_tuple_str_plain_v_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0b3c4f8d525d5339e3430cc5e7d12527 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 301, const_tuple_str_plain_v_str_plain_params_str_plain_ftype_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_643f15fd7521b115cd0b0b1ba783eb14 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1fe6771d9d4496f5794e2ba123343157, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ca5dff2617d09328c13dc5964f2e5bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MachArLike, 62, const_tuple_386bb59b6e032ca8a6bb45054ef6ee85_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9f019b9506e17963861441e1e7a2f802 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 65, const_tuple_1cd242245f9483d22c0dbeeabf88c543_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_96afa414482125c6e39f2c9da482f9b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 507, const_tuple_str_plain_self_str_plain_int_type_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f93e5e9b0f77004eaaf76dd9851f530a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 376, const_tuple_849295482a97faaf99989251c01fbde0_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7bb0e68a2f7645d892400de5ef48a5a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 447, const_tuple_str_plain_self_str_plain_c_str_plain_d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e09152bc69b218d334707abf4d1fdad1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 557, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dbad0596e78b8f61c8dd157dffb78e7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 433, const_tuple_str_plain_self_str_plain_fmt_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9c25c9e39664233b8f38cdc9d843bec0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 546, const_tuple_str_plain_self_str_plain_fmt_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b0cc9af0c53c04aaa3cf78c0ff4dac1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__discovered_machar, 294, const_tuple_str_plain_ftype_str_plain_params_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3fd935875d9b2a70c23c714b4fb29560 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fr0, 18, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6c3532cf7fba228993191032c80f6c83 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fr1, 26, const_tuple_str_plain_a_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_11b0aa66c3ba3af1ac737d952218da10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_machar, 251, const_tuple_dc490514ccb569cefc5b1902373398fa_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8ca99f9408b8f1b3d3328d5c5e627622 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__init, 409, const_tuple_6e21946e2b63b42a7b9ed7f08a75900a_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_53d2bc4ec3afa23f7a1e9a502e6029fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain__str_eps, 88, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_189412fa2d28c11dcad5435bb02bf76b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__str_epsneg, 92, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c15237f68cf08fb1f3ec9c2b5eae9105 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__str_resolution, 104, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c04ac430ed4ed12d1c4f76794184034 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__str_xmax, 100, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4fe6e84b9868c9e6683a83c84efdf37a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__str_xmin, 96, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4eb771f6908b6f61299821cf47e6118c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finfo, 305, const_tuple_ac15f5b66f8daf413409ec3bc7beff62_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f451b817a40df4f348a68987218b960 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iinfo, 455, const_tuple_38de214fb0b486a50f3173083a2b8878_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad73847fe647c6e8e449cfa50b9c972d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_max, 532, const_tuple_str_plain_self_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_53eface06ff315e22e1345fc36bf6801 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_min, 518, const_tuple_str_plain_self_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda( struct Nuitka_CellObject *closure_ftype );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda( struct Nuitka_CellObject *closure_params );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda( struct Nuitka_CellObject *closure_ftype );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda( struct Nuitka_CellObject *closure_ftype, struct Nuitka_CellObject *closure_params );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_11___new__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_12__init(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_13___str__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_14___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_15___init__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_16_min(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_17_max(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_18___str__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_19___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_1__fr0(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_2__fr1(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda( struct Nuitka_CellObject *closure_ftype );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda( struct Nuitka_CellObject *closure_float_conv );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda( struct Nuitka_CellObject *closure_ftype, struct Nuitka_CellObject *closure_params );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_4__str_eps(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_5__str_epsneg(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_6__str_xmin(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__str_xmax(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_8__str_resolution(  );


static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_9__get_machar(  );


// The module function definitions.
static PyObject *impl_numpy$core$getlimits$$$function_1__fr0( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_3fd935875d9b2a70c23c714b4fb29560 = NULL;

    struct Nuitka_FrameObject *frame_3fd935875d9b2a70c23c714b4fb29560;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3fd935875d9b2a70c23c714b4fb29560, codeobj_3fd935875d9b2a70c23c714b4fb29560, module_numpy$core$getlimits, sizeof(void *) );
    frame_3fd935875d9b2a70c23c714b4fb29560 = cache_frame_3fd935875d9b2a70c23c714b4fb29560;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3fd935875d9b2a70c23c714b4fb29560 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3fd935875d9b2a70c23c714b4fb29560 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 20;
        type_description_1 = "o";
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
    tmp_called_instance_1 = par_a;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3fd935875d9b2a70c23c714b4fb29560->m_frame.f_lineno = 21;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_assattr_name_1 = const_tuple_int_pos_1_tuple;
    tmp_assattr_target_1 = par_a;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shape, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd935875d9b2a70c23c714b4fb29560 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3fd935875d9b2a70c23c714b4fb29560 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3fd935875d9b2a70c23c714b4fb29560, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3fd935875d9b2a70c23c714b4fb29560->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3fd935875d9b2a70c23c714b4fb29560, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3fd935875d9b2a70c23c714b4fb29560,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_3fd935875d9b2a70c23c714b4fb29560 == cache_frame_3fd935875d9b2a70c23c714b4fb29560 )
    {
        Py_DECREF( frame_3fd935875d9b2a70c23c714b4fb29560 );
    }
    cache_frame_3fd935875d9b2a70c23c714b4fb29560 = NULL;

    assertFrameObject( frame_3fd935875d9b2a70c23c714b4fb29560 );

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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_1__fr0 );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_1__fr0 );
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


static PyObject *impl_numpy$core$getlimits$$$function_2__fr1( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_6c3532cf7fba228993191032c80f6c83 = NULL;

    struct Nuitka_FrameObject *frame_6c3532cf7fba228993191032c80f6c83;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6c3532cf7fba228993191032c80f6c83, codeobj_6c3532cf7fba228993191032c80f6c83, module_numpy$core$getlimits, sizeof(void *) );
    frame_6c3532cf7fba228993191032c80f6c83 = cache_frame_6c3532cf7fba228993191032c80f6c83;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6c3532cf7fba228993191032c80f6c83 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6c3532cf7fba228993191032c80f6c83 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_size );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 28;
        type_description_1 = "o";
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
    tmp_called_instance_1 = par_a;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_6c3532cf7fba228993191032c80f6c83->m_frame.f_lineno = 29;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_assattr_name_1 = const_tuple_empty;
    tmp_assattr_target_1 = par_a;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shape, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c3532cf7fba228993191032c80f6c83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6c3532cf7fba228993191032c80f6c83 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6c3532cf7fba228993191032c80f6c83, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6c3532cf7fba228993191032c80f6c83->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6c3532cf7fba228993191032c80f6c83, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6c3532cf7fba228993191032c80f6c83,
        type_description_1,
        par_a
    );


    // Release cached frame.
    if ( frame_6c3532cf7fba228993191032c80f6c83 == cache_frame_6c3532cf7fba228993191032c80f6c83 )
    {
        Py_DECREF( frame_6c3532cf7fba228993191032c80f6c83 );
    }
    cache_frame_6c3532cf7fba228993191032c80f6c83 = NULL;

    assertFrameObject( frame_6c3532cf7fba228993191032c80f6c83 );

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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_2__fr1 );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_2__fr1 );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_CellObject *par_ftype = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_CellObject *var_params = PyCell_EMPTY();
    struct Nuitka_CellObject *var_float_conv = PyCell_EMPTY();
    PyObject *var_float_to_float = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
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
    PyObject *tmp_int_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9f019b9506e17963861441e1e7a2f802 = NULL;

    struct Nuitka_FrameObject *frame_9f019b9506e17963861441e1e7a2f802;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9f019b9506e17963861441e1e7a2f802, codeobj_9f019b9506e17963861441e1e7a2f802, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9f019b9506e17963861441e1e7a2f802 = cache_frame_9f019b9506e17963861441e1e7a2f802;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9f019b9506e17963861441e1e7a2f802 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9f019b9506e17963861441e1e7a2f802 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_MACHAR_PARAMS" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }

    if ( par_ftype == NULL )
    {
        tmp_subscript_name_1 = NULL;
    }
    else
    {
        tmp_subscript_name_1 = PyCell_GET( par_ftype );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ftype" );
        exception_tb = NULL;

        exception_lineno = 68;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_params );
        PyCell_SET( var_params, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda( par_ftype );
    {
        PyObject *old = PyCell_GET( var_float_conv );
        PyCell_SET( var_float_conv, tmp_assign_source_2 );
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda( var_float_conv );
    assert( var_float_to_float == NULL );
    var_float_to_float = tmp_assign_source_3;

    tmp_assattr_name_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda( par_ftype, var_params );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__float_to_str, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 71;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    if ( var_params == NULL )
    {
        tmp_subscribed_name_2 = NULL;
    }
    else
    {
        tmp_subscribed_name_2 = PyCell_GET( var_params );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;

        exception_lineno = 73;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_str_plain_title;
    tmp_assattr_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_title, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 73;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    // Tried code:
    tmp_called_name_1 = var_float_to_float;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_called_instance_1 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 75;
    tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_eps_tuple, 0 ) );

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ococco";
        goto try_except_handler_2;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ococco";
        goto try_except_handler_2;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_4;

    tmp_assattr_name_3 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assattr_name_3 );
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_epsilon, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ococco";
        goto try_except_handler_2;
    }
    tmp_assattr_name_4 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assattr_name_4 );
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_eps, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ococco";
        goto try_except_handler_2;
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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_called_name_2 = var_float_to_float;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_called_instance_2 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 76;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_epsneg_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_epsneg, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 76;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    // Tried code:
    tmp_called_name_3 = var_float_to_float;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_called_instance_3 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 77;
    tmp_args_element_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_huge_tuple, 0 ) );

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ococco";
        goto try_except_handler_3;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ococco";
        goto try_except_handler_3;
    }
    assert( tmp_assign_unpack_2__assign_source == NULL );
    tmp_assign_unpack_2__assign_source = tmp_assign_source_5;

    tmp_assattr_name_6 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assattr_name_6 );
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_xmax, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ococco";
        goto try_except_handler_3;
    }
    tmp_assattr_name_7 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assattr_name_7 );
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_huge, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ococco";
        goto try_except_handler_3;
    }
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

    Py_XDECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Tried code:
    tmp_called_name_4 = var_float_to_float;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_called_instance_4 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 78;
    tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_tiny_tuple, 0 ) );

    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ococco";
        goto try_except_handler_4;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ococco";
        goto try_except_handler_4;
    }
    assert( tmp_assign_unpack_3__assign_source == NULL );
    tmp_assign_unpack_3__assign_source = tmp_assign_source_6;

    tmp_assattr_name_8 = tmp_assign_unpack_3__assign_source;

    CHECK_OBJECT( tmp_assattr_name_8 );
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_xmin, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ococco";
        goto try_except_handler_4;
    }
    tmp_assattr_name_9 = tmp_assign_unpack_3__assign_source;

    CHECK_OBJECT( tmp_assattr_name_9 );
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_tiny, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ococco";
        goto try_except_handler_4;
    }
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

    Py_XDECREF( tmp_assign_unpack_3__assign_source );
    tmp_assign_unpack_3__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_3__assign_source );
    Py_DECREF( tmp_assign_unpack_3__assign_source );
    tmp_assign_unpack_3__assign_source = NULL;

    if ( var_params == NULL )
    {
        tmp_subscribed_name_3 = NULL;
    }
    else
    {
        tmp_subscribed_name_3 = PyCell_GET( var_params );
    }

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;

        exception_lineno = 79;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_str_plain_itype;
    tmp_called_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_5 = par_kwargs;

    CHECK_OBJECT( tmp_called_instance_5 );
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 79;
    tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_ibeta_tuple, 0 ) );

    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 79;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assattr_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_ibeta, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 79;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_6 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_kwargs;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_update, call_args );
    }

    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_log10 );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log10 );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "log10" );
        exception_tb = NULL;

        exception_lineno = 81;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eps );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_11 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    CHECK_OBJECT( tmp_assattr_target_11 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_precision, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 81;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_called_name_7 = var_float_to_float;

    CHECK_OBJECT( tmp_called_name_7 );
    if ( var_float_conv == NULL )
    {
        tmp_called_name_8 = NULL;
    }
    else
    {
        tmp_called_name_8 = PyCell_GET( var_float_conv );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "float_conv" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }

    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 82;
    tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_int_pos_10_tuple, 0 ) );

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_precision );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    frame_9f019b9506e17963861441e1e7a2f802->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assattr_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    CHECK_OBJECT( tmp_assattr_target_12 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_resolution, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 82;
        type_description_1 = "ococco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f019b9506e17963861441e1e7a2f802 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9f019b9506e17963861441e1e7a2f802 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9f019b9506e17963861441e1e7a2f802, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9f019b9506e17963861441e1e7a2f802->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9f019b9506e17963861441e1e7a2f802, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9f019b9506e17963861441e1e7a2f802,
        type_description_1,
        par_self,
        par_ftype,
        par_kwargs,
        var_params,
        var_float_conv,
        var_float_to_float
    );


    // Release cached frame.
    if ( frame_9f019b9506e17963861441e1e7a2f802 == cache_frame_9f019b9506e17963861441e1e7a2f802 )
    {
        Py_DECREF( frame_9f019b9506e17963861441e1e7a2f802 );
    }
    cache_frame_9f019b9506e17963861441e1e7a2f802 = NULL;

    assertFrameObject( frame_9f019b9506e17963861441e1e7a2f802 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)var_float_conv );
    Py_DECREF( var_float_conv );
    var_float_conv = NULL;

    CHECK_OBJECT( (PyObject *)var_float_to_float );
    Py_DECREF( var_float_to_float );
    var_float_to_float = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)var_float_conv );
    Py_DECREF( var_float_conv );
    var_float_conv = NULL;

    Py_XDECREF( var_float_to_float );
    var_float_to_float = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e156b4ce634de548f96c465e66ba9301 = NULL;

    struct Nuitka_FrameObject *frame_e156b4ce634de548f96c465e66ba9301;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e156b4ce634de548f96c465e66ba9301, codeobj_e156b4ce634de548f96c465e66ba9301, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_e156b4ce634de548f96c465e66ba9301 = cache_frame_e156b4ce634de548f96c465e66ba9301;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e156b4ce634de548f96c465e66ba9301 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e156b4ce634de548f96c465e66ba9301 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 69;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_v;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
        exception_tb = NULL;

        exception_lineno = 69;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    frame_e156b4ce634de548f96c465e66ba9301->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e156b4ce634de548f96c465e66ba9301 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e156b4ce634de548f96c465e66ba9301 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e156b4ce634de548f96c465e66ba9301 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e156b4ce634de548f96c465e66ba9301, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e156b4ce634de548f96c465e66ba9301->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e156b4ce634de548f96c465e66ba9301, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e156b4ce634de548f96c465e66ba9301,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_e156b4ce634de548f96c465e66ba9301 == cache_frame_e156b4ce634de548f96c465e66ba9301 )
    {
        Py_DECREF( frame_e156b4ce634de548f96c465e66ba9301 );
    }
    cache_frame_e156b4ce634de548f96c465e66ba9301 = NULL;

    assertFrameObject( frame_e156b4ce634de548f96c465e66ba9301 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_1_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_9913092b2c98990e25e202cb1334e0f8 = NULL;

    struct Nuitka_FrameObject *frame_9913092b2c98990e25e202cb1334e0f8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9913092b2c98990e25e202cb1334e0f8, codeobj_9913092b2c98990e25e202cb1334e0f8, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_9913092b2c98990e25e202cb1334e0f8 = cache_frame_9913092b2c98990e25e202cb1334e0f8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9913092b2c98990e25e202cb1334e0f8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9913092b2c98990e25e202cb1334e0f8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr1 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr1 );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr1" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

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
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "float_conv" );
        exception_tb = NULL;

        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_v;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_9913092b2c98990e25e202cb1334e0f8->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_9913092b2c98990e25e202cb1334e0f8->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9913092b2c98990e25e202cb1334e0f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9913092b2c98990e25e202cb1334e0f8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9913092b2c98990e25e202cb1334e0f8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9913092b2c98990e25e202cb1334e0f8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9913092b2c98990e25e202cb1334e0f8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9913092b2c98990e25e202cb1334e0f8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9913092b2c98990e25e202cb1334e0f8,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_9913092b2c98990e25e202cb1334e0f8 == cache_frame_9913092b2c98990e25e202cb1334e0f8 )
    {
        Py_DECREF( frame_9913092b2c98990e25e202cb1334e0f8 );
    }
    cache_frame_9913092b2c98990e25e202cb1334e0f8 = NULL;

    assertFrameObject( frame_9913092b2c98990e25e202cb1334e0f8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_2_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_32dfad09b15009d73671f41cca584faa = NULL;

    struct Nuitka_FrameObject *frame_32dfad09b15009d73671f41cca584faa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_32dfad09b15009d73671f41cca584faa, codeobj_32dfad09b15009d73671f41cca584faa, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_32dfad09b15009d73671f41cca584faa = cache_frame_32dfad09b15009d73671f41cca584faa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_32dfad09b15009d73671f41cca584faa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_32dfad09b15009d73671f41cca584faa ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[1] == NULL )
    {
        tmp_subscribed_name_1 = NULL;
    }
    else
    {
        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "params" );
        exception_tb = NULL;

        exception_lineno = 71;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_fmt;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 72;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
        exception_tb = NULL;

        exception_lineno = 72;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_v;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_32dfad09b15009d73671f41cca584faa->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 72;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 72;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_3 = NULL;
    }
    else
    {
        tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
        exception_tb = NULL;

        exception_lineno = 72;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    frame_32dfad09b15009d73671f41cca584faa->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 72;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32dfad09b15009d73671f41cca584faa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_32dfad09b15009d73671f41cca584faa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_32dfad09b15009d73671f41cca584faa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_32dfad09b15009d73671f41cca584faa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_32dfad09b15009d73671f41cca584faa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_32dfad09b15009d73671f41cca584faa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_32dfad09b15009d73671f41cca584faa,
        type_description_1,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_32dfad09b15009d73671f41cca584faa == cache_frame_32dfad09b15009d73671f41cca584faa )
    {
        Py_DECREF( frame_32dfad09b15009d73671f41cca584faa );
    }
    cache_frame_32dfad09b15009d73671f41cca584faa = NULL;

    assertFrameObject( frame_32dfad09b15009d73671f41cca584faa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_3___init__$$$function_3_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_4__str_eps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_53d2bc4ec3afa23f7a1e9a502e6029fd = NULL;

    struct Nuitka_FrameObject *frame_53d2bc4ec3afa23f7a1e9a502e6029fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53d2bc4ec3afa23f7a1e9a502e6029fd, codeobj_53d2bc4ec3afa23f7a1e9a502e6029fd, module_numpy$core$getlimits, sizeof(void *) );
    frame_53d2bc4ec3afa23f7a1e9a502e6029fd = cache_frame_53d2bc4ec3afa23f7a1e9a502e6029fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53d2bc4ec3afa23f7a1e9a502e6029fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53d2bc4ec3afa23f7a1e9a502e6029fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__float_to_str );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eps );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_53d2bc4ec3afa23f7a1e9a502e6029fd->m_frame.f_lineno = 90;
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


        exception_lineno = 90;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53d2bc4ec3afa23f7a1e9a502e6029fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53d2bc4ec3afa23f7a1e9a502e6029fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53d2bc4ec3afa23f7a1e9a502e6029fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53d2bc4ec3afa23f7a1e9a502e6029fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53d2bc4ec3afa23f7a1e9a502e6029fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53d2bc4ec3afa23f7a1e9a502e6029fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53d2bc4ec3afa23f7a1e9a502e6029fd,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_53d2bc4ec3afa23f7a1e9a502e6029fd == cache_frame_53d2bc4ec3afa23f7a1e9a502e6029fd )
    {
        Py_DECREF( frame_53d2bc4ec3afa23f7a1e9a502e6029fd );
    }
    cache_frame_53d2bc4ec3afa23f7a1e9a502e6029fd = NULL;

    assertFrameObject( frame_53d2bc4ec3afa23f7a1e9a502e6029fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_4__str_eps );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_4__str_eps );
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


static PyObject *impl_numpy$core$getlimits$$$function_5__str_epsneg( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_189412fa2d28c11dcad5435bb02bf76b = NULL;

    struct Nuitka_FrameObject *frame_189412fa2d28c11dcad5435bb02bf76b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_189412fa2d28c11dcad5435bb02bf76b, codeobj_189412fa2d28c11dcad5435bb02bf76b, module_numpy$core$getlimits, sizeof(void *) );
    frame_189412fa2d28c11dcad5435bb02bf76b = cache_frame_189412fa2d28c11dcad5435bb02bf76b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_189412fa2d28c11dcad5435bb02bf76b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_189412fa2d28c11dcad5435bb02bf76b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__float_to_str );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_epsneg );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 94;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_189412fa2d28c11dcad5435bb02bf76b->m_frame.f_lineno = 94;
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


        exception_lineno = 94;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_189412fa2d28c11dcad5435bb02bf76b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_189412fa2d28c11dcad5435bb02bf76b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_189412fa2d28c11dcad5435bb02bf76b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_189412fa2d28c11dcad5435bb02bf76b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_189412fa2d28c11dcad5435bb02bf76b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_189412fa2d28c11dcad5435bb02bf76b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_189412fa2d28c11dcad5435bb02bf76b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_189412fa2d28c11dcad5435bb02bf76b == cache_frame_189412fa2d28c11dcad5435bb02bf76b )
    {
        Py_DECREF( frame_189412fa2d28c11dcad5435bb02bf76b );
    }
    cache_frame_189412fa2d28c11dcad5435bb02bf76b = NULL;

    assertFrameObject( frame_189412fa2d28c11dcad5435bb02bf76b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_5__str_epsneg );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_5__str_epsneg );
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


static PyObject *impl_numpy$core$getlimits$$$function_6__str_xmin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_4fe6e84b9868c9e6683a83c84efdf37a = NULL;

    struct Nuitka_FrameObject *frame_4fe6e84b9868c9e6683a83c84efdf37a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4fe6e84b9868c9e6683a83c84efdf37a, codeobj_4fe6e84b9868c9e6683a83c84efdf37a, module_numpy$core$getlimits, sizeof(void *) );
    frame_4fe6e84b9868c9e6683a83c84efdf37a = cache_frame_4fe6e84b9868c9e6683a83c84efdf37a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4fe6e84b9868c9e6683a83c84efdf37a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4fe6e84b9868c9e6683a83c84efdf37a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__float_to_str );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_xmin );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 98;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_4fe6e84b9868c9e6683a83c84efdf37a->m_frame.f_lineno = 98;
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


        exception_lineno = 98;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fe6e84b9868c9e6683a83c84efdf37a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fe6e84b9868c9e6683a83c84efdf37a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4fe6e84b9868c9e6683a83c84efdf37a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4fe6e84b9868c9e6683a83c84efdf37a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4fe6e84b9868c9e6683a83c84efdf37a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4fe6e84b9868c9e6683a83c84efdf37a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4fe6e84b9868c9e6683a83c84efdf37a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_4fe6e84b9868c9e6683a83c84efdf37a == cache_frame_4fe6e84b9868c9e6683a83c84efdf37a )
    {
        Py_DECREF( frame_4fe6e84b9868c9e6683a83c84efdf37a );
    }
    cache_frame_4fe6e84b9868c9e6683a83c84efdf37a = NULL;

    assertFrameObject( frame_4fe6e84b9868c9e6683a83c84efdf37a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_6__str_xmin );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_6__str_xmin );
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


static PyObject *impl_numpy$core$getlimits$$$function_7__str_xmax( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_2c04ac430ed4ed12d1c4f76794184034 = NULL;

    struct Nuitka_FrameObject *frame_2c04ac430ed4ed12d1c4f76794184034;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2c04ac430ed4ed12d1c4f76794184034, codeobj_2c04ac430ed4ed12d1c4f76794184034, module_numpy$core$getlimits, sizeof(void *) );
    frame_2c04ac430ed4ed12d1c4f76794184034 = cache_frame_2c04ac430ed4ed12d1c4f76794184034;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2c04ac430ed4ed12d1c4f76794184034 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2c04ac430ed4ed12d1c4f76794184034 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__float_to_str );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_xmax );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_2c04ac430ed4ed12d1c4f76794184034->m_frame.f_lineno = 102;
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


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c04ac430ed4ed12d1c4f76794184034 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c04ac430ed4ed12d1c4f76794184034 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2c04ac430ed4ed12d1c4f76794184034 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2c04ac430ed4ed12d1c4f76794184034, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2c04ac430ed4ed12d1c4f76794184034->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2c04ac430ed4ed12d1c4f76794184034, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2c04ac430ed4ed12d1c4f76794184034,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2c04ac430ed4ed12d1c4f76794184034 == cache_frame_2c04ac430ed4ed12d1c4f76794184034 )
    {
        Py_DECREF( frame_2c04ac430ed4ed12d1c4f76794184034 );
    }
    cache_frame_2c04ac430ed4ed12d1c4f76794184034 = NULL;

    assertFrameObject( frame_2c04ac430ed4ed12d1c4f76794184034 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__str_xmax );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_7__str_xmax );
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


static PyObject *impl_numpy$core$getlimits$$$function_8__str_resolution( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_c15237f68cf08fb1f3ec9c2b5eae9105 = NULL;

    struct Nuitka_FrameObject *frame_c15237f68cf08fb1f3ec9c2b5eae9105;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c15237f68cf08fb1f3ec9c2b5eae9105, codeobj_c15237f68cf08fb1f3ec9c2b5eae9105, module_numpy$core$getlimits, sizeof(void *) );
    frame_c15237f68cf08fb1f3ec9c2b5eae9105 = cache_frame_c15237f68cf08fb1f3ec9c2b5eae9105;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c15237f68cf08fb1f3ec9c2b5eae9105 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c15237f68cf08fb1f3ec9c2b5eae9105 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__float_to_str );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_resolution );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 106;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_c15237f68cf08fb1f3ec9c2b5eae9105->m_frame.f_lineno = 106;
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


        exception_lineno = 106;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c15237f68cf08fb1f3ec9c2b5eae9105 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c15237f68cf08fb1f3ec9c2b5eae9105 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c15237f68cf08fb1f3ec9c2b5eae9105 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c15237f68cf08fb1f3ec9c2b5eae9105, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c15237f68cf08fb1f3ec9c2b5eae9105->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c15237f68cf08fb1f3ec9c2b5eae9105, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c15237f68cf08fb1f3ec9c2b5eae9105,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_c15237f68cf08fb1f3ec9c2b5eae9105 == cache_frame_c15237f68cf08fb1f3ec9c2b5eae9105 )
    {
        Py_DECREF( frame_c15237f68cf08fb1f3ec9c2b5eae9105 );
    }
    cache_frame_c15237f68cf08fb1f3ec9c2b5eae9105 = NULL;

    assertFrameObject( frame_c15237f68cf08fb1f3ec9c2b5eae9105 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_8__str_resolution );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_8__str_resolution );
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


static PyObject *impl_numpy$core$getlimits$$$function_9__get_machar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ftype = python_pars[ 0 ];
    PyObject *var_params = NULL;
    PyObject *var_key = NULL;
    PyObject *var_ma_like = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
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
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_11b0aa66c3ba3af1ac737d952218da10 = NULL;

    struct Nuitka_FrameObject *frame_11b0aa66c3ba3af1ac737d952218da10;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_11b0aa66c3ba3af1ac737d952218da10, codeobj_11b0aa66c3ba3af1ac737d952218da10, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_11b0aa66c3ba3af1ac737d952218da10 = cache_frame_11b0aa66c3ba3af1ac737d952218da10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11b0aa66c3ba3af1ac737d952218da10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11b0aa66c3ba3af1ac737d952218da10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_MACHAR_PARAMS" );
        exception_tb = NULL;

        exception_lineno = 274;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_ftype;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 274;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_params == NULL );
    var_params = tmp_assign_source_1;

    tmp_compare_left_1 = var_params;

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
    tmp_operand_name_1 = par_ftype;

    CHECK_OBJECT( tmp_operand_name_1 );
    tmp_make_exception_arg_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 276;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = par_ftype;

    CHECK_OBJECT( tmp_called_name_1 );
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 278;
    tmp_called_instance_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_6ccfcc9d5b330646d0167140367b220b_tuple, 0 ) );

    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 278;
    tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_newbyteorder, &PyTuple_GET_ITEM( const_tuple_str_chr_60_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 278;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tobytes );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_key == NULL );
    var_key = tmp_assign_source_2;

    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_KNOWN_TYPES" );
        exception_tb = NULL;

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_key;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ma_like == NULL );
    var_ma_like = tmp_assign_source_3;

    tmp_compexpr_left_1 = var_ma_like;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_compexpr_left_2 = par_ftype;

    CHECK_OBJECT( tmp_compexpr_left_2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 282;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_longdouble );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "oooo";
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

        exception_lineno = 282;
        type_description_1 = "oooo";
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_KNOWN_TYPES" );
        exception_tb = NULL;

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 10;
    tmp_slice_source_1 = var_key;

    CHECK_OBJECT( tmp_slice_source_1 );
    tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ma_like;
        assert( old != NULL );
        var_ma_like = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_2 = var_ma_like;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = var_ma_like;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 287;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_warn );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_called_instance_5 = const_str_digest_1c7a03bb335423a9f56b895c3fbc148d;
    tmp_args_element_name_4 = var_key;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_ftype;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_format, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 288;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "UserWarning" );
        exception_tb = NULL;

        exception_lineno = 290;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 287;
    tmp_unused = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__discovered_machar );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__discovered_machar );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_discovered_machar" );
        exception_tb = NULL;

        exception_lineno = 291;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_ftype;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_11b0aa66c3ba3af1ac737d952218da10->m_frame.f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11b0aa66c3ba3af1ac737d952218da10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_11b0aa66c3ba3af1ac737d952218da10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11b0aa66c3ba3af1ac737d952218da10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11b0aa66c3ba3af1ac737d952218da10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11b0aa66c3ba3af1ac737d952218da10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11b0aa66c3ba3af1ac737d952218da10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11b0aa66c3ba3af1ac737d952218da10,
        type_description_1,
        par_ftype,
        var_params,
        var_key,
        var_ma_like
    );


    // Release cached frame.
    if ( frame_11b0aa66c3ba3af1ac737d952218da10 == cache_frame_11b0aa66c3ba3af1ac737d952218da10 )
    {
        Py_DECREF( frame_11b0aa66c3ba3af1ac737d952218da10 );
    }
    cache_frame_11b0aa66c3ba3af1ac737d952218da10 = NULL;

    assertFrameObject( frame_11b0aa66c3ba3af1ac737d952218da10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_9__get_machar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    CHECK_OBJECT( (PyObject *)var_key );
    Py_DECREF( var_key );
    var_key = NULL;

    CHECK_OBJECT( (PyObject *)var_ma_like );
    Py_DECREF( var_ma_like );
    var_ma_like = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    Py_XDECREF( var_params );
    var_params = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_ma_like );
    var_ma_like = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_9__get_machar );
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


static PyObject *impl_numpy$core$getlimits$$$function_10__discovered_machar( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ftype = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *var_params = PyCell_EMPTY();
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
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 = NULL;

    struct Nuitka_FrameObject *frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1, codeobj_2b0cc9af0c53c04aaa3cf78c0ff4dac1, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 = cache_frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_MACHAR_PARAMS" );
        exception_tb = NULL;

        exception_lineno = 297;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    if ( par_ftype == NULL )
    {
        tmp_subscript_name_1 = NULL;
    }
    else
    {
        tmp_subscript_name_1 = PyCell_GET( par_ftype );
    }

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ftype" );
        exception_tb = NULL;

        exception_lineno = 297;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_params );
        PyCell_SET( var_params, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachAr );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachAr );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "MachAr" );
        exception_tb = NULL;

        exception_lineno = 298;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda( par_ftype );
    tmp_args_element_name_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda( var_params );
    tmp_args_element_name_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda( par_ftype );
    tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda( par_ftype, var_params );
    if ( var_params == NULL )
    {
        tmp_subscribed_name_2 = NULL;
    }
    else
    {
        tmp_subscribed_name_2 = PyCell_GET( var_params );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "params" );
        exception_tb = NULL;

        exception_lineno = 302;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_str_plain_title;
    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 302;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1->m_frame.f_lineno = 298;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1,
        type_description_1,
        par_ftype,
        var_params
    );


    // Release cached frame.
    if ( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 == cache_frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 )
    {
        Py_DECREF( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 );
    }
    cache_frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 = NULL;

    assertFrameObject( frame_2b0cc9af0c53c04aaa3cf78c0ff4dac1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

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

    CHECK_OBJECT( (PyObject *)par_ftype );
    Py_DECREF( par_ftype );
    par_ftype = NULL;

    CHECK_OBJECT( (PyObject *)var_params );
    Py_DECREF( var_params );
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar );
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


static PyObject *impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_e95a0f8c2929c568b3708edf78f0c78c = NULL;

    struct Nuitka_FrameObject *frame_e95a0f8c2929c568b3708edf78f0c78c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e95a0f8c2929c568b3708edf78f0c78c, codeobj_e95a0f8c2929c568b3708edf78f0c78c, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_e95a0f8c2929c568b3708edf78f0c78c = cache_frame_e95a0f8c2929c568b3708edf78f0c78c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e95a0f8c2929c568b3708edf78f0c78c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e95a0f8c2929c568b3708edf78f0c78c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 298;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_v;

    CHECK_OBJECT( tmp_list_element_1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
        exception_tb = NULL;

        exception_lineno = 298;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    frame_e95a0f8c2929c568b3708edf78f0c78c->m_frame.f_lineno = 298;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e95a0f8c2929c568b3708edf78f0c78c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e95a0f8c2929c568b3708edf78f0c78c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e95a0f8c2929c568b3708edf78f0c78c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e95a0f8c2929c568b3708edf78f0c78c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e95a0f8c2929c568b3708edf78f0c78c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e95a0f8c2929c568b3708edf78f0c78c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e95a0f8c2929c568b3708edf78f0c78c,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_e95a0f8c2929c568b3708edf78f0c78c == cache_frame_e95a0f8c2929c568b3708edf78f0c78c )
    {
        Py_DECREF( frame_e95a0f8c2929c568b3708edf78f0c78c );
    }
    cache_frame_e95a0f8c2929c568b3708edf78f0c78c = NULL;

    assertFrameObject( frame_e95a0f8c2929c568b3708edf78f0c78c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_c85b1ff7900ccf1771b0224b6adfce33 = NULL;

    struct Nuitka_FrameObject *frame_c85b1ff7900ccf1771b0224b6adfce33;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c85b1ff7900ccf1771b0224b6adfce33, codeobj_c85b1ff7900ccf1771b0224b6adfce33, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_c85b1ff7900ccf1771b0224b6adfce33 = cache_frame_c85b1ff7900ccf1771b0224b6adfce33;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c85b1ff7900ccf1771b0224b6adfce33 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c85b1ff7900ccf1771b0224b6adfce33 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
        exception_tb = NULL;

        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_v;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    if ( self->m_closure[0] == NULL )
    {
        tmp_subscribed_name_2 = NULL;
    }
    else
    {
        tmp_subscribed_name_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "params" );
        exception_tb = NULL;

        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_itype;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_c85b1ff7900ccf1771b0224b6adfce33->m_frame.f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    frame_c85b1ff7900ccf1771b0224b6adfce33->m_frame.f_lineno = 299;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c85b1ff7900ccf1771b0224b6adfce33 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c85b1ff7900ccf1771b0224b6adfce33 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c85b1ff7900ccf1771b0224b6adfce33 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c85b1ff7900ccf1771b0224b6adfce33, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c85b1ff7900ccf1771b0224b6adfce33->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c85b1ff7900ccf1771b0224b6adfce33, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c85b1ff7900ccf1771b0224b6adfce33,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c85b1ff7900ccf1771b0224b6adfce33 == cache_frame_c85b1ff7900ccf1771b0224b6adfce33 )
    {
        Py_DECREF( frame_c85b1ff7900ccf1771b0224b6adfce33 );
    }
    cache_frame_c85b1ff7900ccf1771b0224b6adfce33 = NULL;

    assertFrameObject( frame_c85b1ff7900ccf1771b0224b6adfce33 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_cb891d91f07c35f86869701bfeea4fd3 = NULL;

    struct Nuitka_FrameObject *frame_cb891d91f07c35f86869701bfeea4fd3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb891d91f07c35f86869701bfeea4fd3, codeobj_cb891d91f07c35f86869701bfeea4fd3, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_cb891d91f07c35f86869701bfeea4fd3 = cache_frame_cb891d91f07c35f86869701bfeea4fd3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb891d91f07c35f86869701bfeea4fd3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb891d91f07c35f86869701bfeea4fd3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 300;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
        exception_tb = NULL;

        exception_lineno = 300;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_v;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_cb891d91f07c35f86869701bfeea4fd3->m_frame.f_lineno = 300;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_3 = NULL;
    }
    else
    {
        tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
        exception_tb = NULL;

        exception_lineno = 300;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    frame_cb891d91f07c35f86869701bfeea4fd3->m_frame.f_lineno = 300;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb891d91f07c35f86869701bfeea4fd3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb891d91f07c35f86869701bfeea4fd3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb891d91f07c35f86869701bfeea4fd3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb891d91f07c35f86869701bfeea4fd3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb891d91f07c35f86869701bfeea4fd3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb891d91f07c35f86869701bfeea4fd3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb891d91f07c35f86869701bfeea4fd3,
        type_description_1,
        par_v,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_cb891d91f07c35f86869701bfeea4fd3 == cache_frame_cb891d91f07c35f86869701bfeea4fd3 )
    {
        Py_DECREF( frame_cb891d91f07c35f86869701bfeea4fd3 );
    }
    cache_frame_cb891d91f07c35f86869701bfeea4fd3 = NULL;

    assertFrameObject( frame_cb891d91f07c35f86869701bfeea4fd3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[ 0 ];
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static struct Nuitka_FrameObject *cache_frame_0b3c4f8d525d5339e3430cc5e7d12527 = NULL;

    struct Nuitka_FrameObject *frame_0b3c4f8d525d5339e3430cc5e7d12527;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b3c4f8d525d5339e3430cc5e7d12527, codeobj_0b3c4f8d525d5339e3430cc5e7d12527, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b3c4f8d525d5339e3430cc5e7d12527 = cache_frame_0b3c4f8d525d5339e3430cc5e7d12527;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b3c4f8d525d5339e3430cc5e7d12527 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b3c4f8d525d5339e3430cc5e7d12527 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[1] == NULL )
    {
        tmp_subscribed_name_1 = NULL;
    }
    else
    {
        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[1] );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "params" );
        exception_tb = NULL;

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_fmt;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0 );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fr0 );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fr0" );
        exception_tb = NULL;

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_v;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_0b3c4f8d525d5339e3430cc5e7d12527->m_frame.f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_3 = NULL;
    }
    else
    {
        tmp_args_element_name_3 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ftype" );
        exception_tb = NULL;

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }

    frame_0b3c4f8d525d5339e3430cc5e7d12527->m_frame.f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "occ";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b3c4f8d525d5339e3430cc5e7d12527 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b3c4f8d525d5339e3430cc5e7d12527 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b3c4f8d525d5339e3430cc5e7d12527 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b3c4f8d525d5339e3430cc5e7d12527, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b3c4f8d525d5339e3430cc5e7d12527->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b3c4f8d525d5339e3430cc5e7d12527, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b3c4f8d525d5339e3430cc5e7d12527,
        type_description_1,
        par_v,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_0b3c4f8d525d5339e3430cc5e7d12527 == cache_frame_0b3c4f8d525d5339e3430cc5e7d12527 )
    {
        Py_DECREF( frame_0b3c4f8d525d5339e3430cc5e7d12527 );
    }
    cache_frame_0b3c4f8d525d5339e3430cc5e7d12527 = NULL;

    assertFrameObject( frame_0b3c4f8d525d5339e3430cc5e7d12527 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda );
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


static PyObject *impl_numpy$core$getlimits$$$function_11___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *var_obj = NULL;
    PyObject *var_dtypes = NULL;
    PyObject *var_newdtype = NULL;
    PyObject *var_dt = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f93e5e9b0f77004eaaf76dd9851f530a = NULL;

    struct Nuitka_FrameObject *frame_f93e5e9b0f77004eaaf76dd9851f530a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f93e5e9b0f77004eaaf76dd9851f530a, codeobj_f93e5e9b0f77004eaaf76dd9851f530a, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f93e5e9b0f77004eaaf76dd9851f530a = cache_frame_f93e5e9b0f77004eaaf76dd9851f530a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f93e5e9b0f77004eaaf76dd9851f530a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f93e5e9b0f77004eaaf76dd9851f530a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 378;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 378;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_f93e5e9b0f77004eaaf76dd9851f530a );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f93e5e9b0f77004eaaf76dd9851f530a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f93e5e9b0f77004eaaf76dd9851f530a, exception_keeper_lineno_1 );
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


        exception_lineno = 379;
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
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 381;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_type_arg_1 = par_dtype;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_args_element_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_args_element_name_2 != NULL );
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 381;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 377;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame) frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_11___new__ );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_2 = par_cls;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__finfo_cache );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_dtype;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 383;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = Py_None;
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_obj == NULL );
    var_obj = tmp_assign_source_3;

    tmp_compare_left_2 = var_obj;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_assign_source_4 = PyList_New( 1 );
    tmp_list_element_1 = par_dtype;

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 386;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_1 );
    assert( var_dtypes == NULL );
    var_dtypes = tmp_assign_source_4;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_obj2sctype );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_dtype;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 387;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_newdtype == NULL );
    var_newdtype = tmp_assign_source_5;

    tmp_compare_left_3 = var_newdtype;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = par_dtype;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 388;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

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
    tmp_called_instance_3 = var_dtypes;

    CHECK_OBJECT( tmp_called_instance_3 );
    tmp_args_element_name_6 = var_newdtype;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_6 = var_newdtype;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_dtype;
        par_dtype = tmp_assign_source_6;
        Py_INCREF( par_dtype );
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_7 = par_dtype;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_inexact );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 391;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_left_name_1 = const_str_digest_17243ada09c28419093a512ea12c0885;
    tmp_right_name_1 = par_dtype;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 392;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 392;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 392;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_6 = par_cls;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__finfo_cache );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_dtype;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = Py_None;
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_obj;
        assert( old != NULL );
        var_obj = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = var_obj;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_5:;
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_11 = par_dtype;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_floating );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 396;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 396;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__convert_to_float );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_to_float );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_to_float" );
        exception_tb = NULL;

        exception_lineno = 397;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = par_dtype;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 397;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_newdtype;
        assert( old != NULL );
        var_newdtype = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_compare_left_5 = var_newdtype;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = par_dtype;

    if ( tmp_compare_right_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 398;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_isnot_4 = ( tmp_compare_left_5 != tmp_compare_right_5 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_instance_4 = var_dtypes;

    CHECK_OBJECT( tmp_called_instance_4 );
    tmp_args_element_name_13 = var_newdtype;

    CHECK_OBJECT( tmp_args_element_name_13 );
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_9 = var_newdtype;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = par_dtype;
        par_dtype = tmp_assign_source_9;
        Py_INCREF( par_dtype );
        Py_XDECREF( old );
    }

    branch_no_7:;
    branch_no_6:;
    tmp_source_name_9 = par_cls;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__finfo_cache );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_get );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = par_dtype;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 401;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = Py_None;
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 401;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_obj;
        assert( old != NULL );
        var_obj = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_compare_left_6 = var_obj;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_8:;
    tmp_called_instance_5 = (PyObject *)&PyBaseObject_Type;
    tmp_args_element_name_16 = par_cls;

    CHECK_OBJECT( tmp_args_element_name_16 );
    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 404;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_source_name_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain___new__, call_args );
    }

    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__init );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = par_dtype;

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dtype" );
        exception_tb = NULL;

        exception_lineno = 404;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame.f_lineno = 404;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_obj;
        assert( old != NULL );
        var_obj = tmp_assign_source_11;
        Py_DECREF( old );
    }

    tmp_iter_arg_1 = var_dtypes;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "oooooo";
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
            type_description_1 = "oooooo";
            exception_lineno = 405;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_dt;
        var_dt = tmp_assign_source_14;
        Py_INCREF( var_dt );
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_obj;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_11 = par_cls;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__finfo_cache );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    tmp_ass_subscript_1 = var_dt;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "oooooo";
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

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f93e5e9b0f77004eaaf76dd9851f530a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f93e5e9b0f77004eaaf76dd9851f530a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f93e5e9b0f77004eaaf76dd9851f530a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f93e5e9b0f77004eaaf76dd9851f530a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f93e5e9b0f77004eaaf76dd9851f530a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f93e5e9b0f77004eaaf76dd9851f530a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f93e5e9b0f77004eaaf76dd9851f530a,
        type_description_1,
        par_cls,
        par_dtype,
        var_obj,
        var_dtypes,
        var_newdtype,
        var_dt
    );


    // Release cached frame.
    if ( frame_f93e5e9b0f77004eaaf76dd9851f530a == cache_frame_f93e5e9b0f77004eaaf76dd9851f530a )
    {
        Py_DECREF( frame_f93e5e9b0f77004eaaf76dd9851f530a );
    }
    cache_frame_f93e5e9b0f77004eaaf76dd9851f530a = NULL;

    assertFrameObject( frame_f93e5e9b0f77004eaaf76dd9851f530a );

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

    tmp_return_value = var_obj;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_11___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_obj );
    Py_DECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_dtypes );
    var_dtypes = NULL;

    Py_XDECREF( var_newdtype );
    var_newdtype = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

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

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_obj );
    var_obj = NULL;

    Py_XDECREF( var_dtypes );
    var_dtypes = NULL;

    Py_XDECREF( var_newdtype );
    var_newdtype = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_11___new__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_12__init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    PyObject *var_machar = NULL;
    PyObject *var_word = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
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
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_attr_2;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_target_2;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_setattr_value_2;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8ca99f9408b8f1b3d3328d5c5e627622 = NULL;

    struct Nuitka_FrameObject *frame_8ca99f9408b8f1b3d3328d5c5e627622;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8ca99f9408b8f1b3d3328d5c5e627622, codeobj_8ca99f9408b8f1b3d3328d5c5e627622, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8ca99f9408b8f1b3d3328d5c5e627622 = cache_frame_8ca99f9408b8f1b3d3328d5c5e627622;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ca99f9408b8f1b3d3328d5c5e627622 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ca99f9408b8f1b3d3328d5c5e627622 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 410;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 410;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_dtype, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 410;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__get_machar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__get_machar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_get_machar" );
        exception_tb = NULL;

        exception_lineno = 411;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 411;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_machar == NULL );
    var_machar = tmp_assign_source_1;

    tmp_iter_arg_1 = const_tuple_ca43d747f0514ab97322a6a533c3ddf8_tuple;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_2 != NULL );
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
            exception_lineno = 413;
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
        PyObject *old = var_word;
        var_word = tmp_assign_source_4;
        Py_INCREF( var_word );
        Py_XDECREF( old );
    }

    tmp_setattr_target_1 = par_self;

    CHECK_OBJECT( tmp_setattr_target_1 );
    tmp_setattr_attr_1 = var_word;

    CHECK_OBJECT( tmp_setattr_attr_1 );
    tmp_getattr_target_1 = var_machar;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = var_word;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_setattr_value_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_setattr_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    Py_DECREF( tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
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

    tmp_iter_arg_2 = const_tuple_str_plain_tiny_str_plain_resolution_str_plain_epsneg_tuple;
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( tmp_assign_source_5 != NULL );
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            exception_lineno = 417;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_word;
        var_word = tmp_assign_source_7;
        Py_INCREF( var_word );
        Py_XDECREF( old );
    }

    tmp_setattr_target_2 = par_self;

    CHECK_OBJECT( tmp_setattr_target_2 );
    tmp_setattr_attr_2 = var_word;

    CHECK_OBJECT( tmp_setattr_attr_2 );
    tmp_getattr_target_2 = var_machar;

    CHECK_OBJECT( tmp_getattr_target_2 );
    tmp_getattr_attr_2 = var_word;

    CHECK_OBJECT( tmp_getattr_attr_2 );
    tmp_source_name_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_setattr_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_setattr_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2 );
    Py_DECREF( tmp_setattr_value_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 417;
        type_description_1 = "oooo";
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_itemsize );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_assattr_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_bits, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 419;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_5 = var_machar;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_huge );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_flat );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assattr_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_max, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 420;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_max );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_min, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 421;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_8 = var_machar;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_eps );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_flat );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_0;
    tmp_assattr_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_eps, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 422;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_9 = var_machar;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_iexp );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 423;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = par_self;

    CHECK_OBJECT( tmp_assattr_target_6 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_nexp, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 423;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_source_name_10 = var_machar;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_it );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 424;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_self;

    CHECK_OBJECT( tmp_assattr_target_7 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_nmant, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 424;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_assattr_name_8 = var_machar;

    CHECK_OBJECT( tmp_assattr_name_8 );
    tmp_assattr_target_8 = par_self;

    CHECK_OBJECT( tmp_assattr_target_8 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_machar, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = var_machar;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__str_xmin );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 426;
    tmp_assattr_name_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    CHECK_OBJECT( tmp_assattr_target_9 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__str_tiny, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 426;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_source_name_12 = var_machar;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__str_xmax );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 427;
    tmp_assattr_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    CHECK_OBJECT( tmp_assattr_target_10 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__str_max, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 427;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_source_name_13 = var_machar;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__str_epsneg );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 428;
    tmp_assattr_name_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 428;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    CHECK_OBJECT( tmp_assattr_target_11 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__str_epsneg, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 428;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    tmp_source_name_14 = var_machar;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__str_eps );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 429;
    tmp_assattr_name_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = par_self;

    CHECK_OBJECT( tmp_assattr_target_12 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain__str_eps, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 429;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_source_name_15 = var_machar;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__str_resolution );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame.f_lineno = 430;
    tmp_assattr_name_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_strip );
    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_13 = par_self;

    CHECK_OBJECT( tmp_assattr_target_13 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__str_resolution, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 430;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_13 );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ca99f9408b8f1b3d3328d5c5e627622 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ca99f9408b8f1b3d3328d5c5e627622 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ca99f9408b8f1b3d3328d5c5e627622, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ca99f9408b8f1b3d3328d5c5e627622->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ca99f9408b8f1b3d3328d5c5e627622, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ca99f9408b8f1b3d3328d5c5e627622,
        type_description_1,
        par_self,
        par_dtype,
        var_machar,
        var_word
    );


    // Release cached frame.
    if ( frame_8ca99f9408b8f1b3d3328d5c5e627622 == cache_frame_8ca99f9408b8f1b3d3328d5c5e627622 )
    {
        Py_DECREF( frame_8ca99f9408b8f1b3d3328d5c5e627622 );
    }
    cache_frame_8ca99f9408b8f1b3d3328d5c5e627622 = NULL;

    assertFrameObject( frame_8ca99f9408b8f1b3d3328d5c5e627622 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = par_self;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_12__init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_machar );
    Py_DECREF( var_machar );
    var_machar = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_machar );
    var_machar = NULL;

    Py_XDECREF( var_word );
    var_word = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_12__init );
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


static PyObject *impl_numpy$core$getlimits$$$function_13___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_dbad0596e78b8f61c8dd157dffb78e7d = NULL;

    struct Nuitka_FrameObject *frame_dbad0596e78b8f61c8dd157dffb78e7d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dbad0596e78b8f61c8dd157dffb78e7d, codeobj_dbad0596e78b8f61c8dd157dffb78e7d, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_dbad0596e78b8f61c8dd157dffb78e7d = cache_frame_dbad0596e78b8f61c8dd157dffb78e7d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dbad0596e78b8f61c8dd157dffb78e7d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dbad0596e78b8f61c8dd157dffb78e7d ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_c8ad69a27958f4a91e4487fd0fe6fc25;
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbad0596e78b8f61c8dd157dffb78e7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbad0596e78b8f61c8dd157dffb78e7d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbad0596e78b8f61c8dd157dffb78e7d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dbad0596e78b8f61c8dd157dffb78e7d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dbad0596e78b8f61c8dd157dffb78e7d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dbad0596e78b8f61c8dd157dffb78e7d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dbad0596e78b8f61c8dd157dffb78e7d,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_dbad0596e78b8f61c8dd157dffb78e7d == cache_frame_dbad0596e78b8f61c8dd157dffb78e7d )
    {
        Py_DECREF( frame_dbad0596e78b8f61c8dd157dffb78e7d );
    }
    cache_frame_dbad0596e78b8f61c8dd157dffb78e7d = NULL;

    assertFrameObject( frame_dbad0596e78b8f61c8dd157dffb78e7d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_13___str__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_13___str__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_14___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_c = NULL;
    PyObject *var_d = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_7bb0e68a2f7645d892400de5ef48a5a1 = NULL;

    struct Nuitka_FrameObject *frame_7bb0e68a2f7645d892400de5ef48a5a1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bb0e68a2f7645d892400de5ef48a5a1, codeobj_7bb0e68a2f7645d892400de5ef48a5a1, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7bb0e68a2f7645d892400de5ef48a5a1 = cache_frame_7bb0e68a2f7645d892400de5ef48a5a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bb0e68a2f7645d892400de5ef48a5a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bb0e68a2f7645d892400de5ef48a5a1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_c == NULL );
    var_c = tmp_assign_source_1;

    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_3 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_7bb0e68a2f7645d892400de5ef48a5a1->m_frame.f_lineno = 449;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_2;

    tmp_ass_subvalue_1 = var_c;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = var_d;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_str_plain_klass;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_81124a5be721172281510fa6fc9b29b5;
    tmp_right_name_1 = var_d;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bb0e68a2f7645d892400de5ef48a5a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bb0e68a2f7645d892400de5ef48a5a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bb0e68a2f7645d892400de5ef48a5a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bb0e68a2f7645d892400de5ef48a5a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bb0e68a2f7645d892400de5ef48a5a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bb0e68a2f7645d892400de5ef48a5a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bb0e68a2f7645d892400de5ef48a5a1,
        type_description_1,
        par_self,
        var_c,
        var_d
    );


    // Release cached frame.
    if ( frame_7bb0e68a2f7645d892400de5ef48a5a1 == cache_frame_7bb0e68a2f7645d892400de5ef48a5a1 )
    {
        Py_DECREF( frame_7bb0e68a2f7645d892400de5ef48a5a1 );
    }
    cache_frame_7bb0e68a2f7645d892400de5ef48a5a1 = NULL;

    assertFrameObject( frame_7bb0e68a2f7645d892400de5ef48a5a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_14___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

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

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_14___repr__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_15___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_int_type = python_pars[ 1 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_96afa414482125c6e39f2c9da482f9b3 = NULL;

    struct Nuitka_FrameObject *frame_96afa414482125c6e39f2c9da482f9b3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96afa414482125c6e39f2c9da482f9b3, codeobj_96afa414482125c6e39f2c9da482f9b3, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_96afa414482125c6e39f2c9da482f9b3 = cache_frame_96afa414482125c6e39f2c9da482f9b3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96afa414482125c6e39f2c9da482f9b3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96afa414482125c6e39f2c9da482f9b3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 509;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_int_type;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_96afa414482125c6e39f2c9da482f9b3->m_frame.f_lineno = 509;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_dtype, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_dtype, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 509;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
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
    PRESERVE_FRAME_EXCEPTION( frame_96afa414482125c6e39f2c9da482f9b3 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_96afa414482125c6e39f2c9da482f9b3, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_96afa414482125c6e39f2c9da482f9b3, exception_keeper_lineno_1 );
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


        exception_lineno = 510;
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
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 511;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_type_arg_1 = par_int_type;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_args_element_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_args_element_name_2 != NULL );
    frame_96afa414482125c6e39f2c9da482f9b3->m_frame.f_lineno = 511;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_dtype, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    CHECK_OBJECT( tmp_assattr_target_2 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_dtype, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 511;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 508;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_96afa414482125c6e39f2c9da482f9b3->m_frame) frame_96afa414482125c6e39f2c9da482f9b3->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_15___init__ );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 512;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 512;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    CHECK_OBJECT( tmp_assattr_target_3 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_kind, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 512;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_itemsize );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_8;
    tmp_assattr_name_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 513;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    CHECK_OBJECT( tmp_assattr_target_4 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_bits, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 513;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_left_name_2 = const_str_digest_1fb8303ac42db8ab17be5f2ef764dc5e;
    tmp_right_name_2 = PyTuple_New( 2 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_kind );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bits );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
    tmp_assattr_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    CHECK_OBJECT( tmp_assattr_target_5 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_key, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 514;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_kind );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_iu;
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_20d89c7cbfecc7ac89421e51514a298a;
    frame_96afa414482125c6e39f2c9da482f9b3->m_frame.f_lineno = 516;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 516;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_96afa414482125c6e39f2c9da482f9b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_96afa414482125c6e39f2c9da482f9b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96afa414482125c6e39f2c9da482f9b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96afa414482125c6e39f2c9da482f9b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96afa414482125c6e39f2c9da482f9b3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96afa414482125c6e39f2c9da482f9b3,
        type_description_1,
        par_self,
        par_int_type
    );


    // Release cached frame.
    if ( frame_96afa414482125c6e39f2c9da482f9b3 == cache_frame_96afa414482125c6e39f2c9da482f9b3 )
    {
        Py_DECREF( frame_96afa414482125c6e39f2c9da482f9b3 );
    }
    cache_frame_96afa414482125c6e39f2c9da482f9b3 = NULL;

    assertFrameObject( frame_96afa414482125c6e39f2c9da482f9b3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_15___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_int_type );
    Py_DECREF( par_int_type );
    par_int_type = NULL;

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

    CHECK_OBJECT( (PyObject *)par_int_type );
    Py_DECREF( par_int_type );
    par_int_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_15___init__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_16_min( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_val = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_53eface06ff315e22e1345fc36bf6801 = NULL;

    struct Nuitka_FrameObject *frame_53eface06ff315e22e1345fc36bf6801;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53eface06ff315e22e1345fc36bf6801, codeobj_53eface06ff315e22e1345fc36bf6801, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_53eface06ff315e22e1345fc36bf6801 = cache_frame_53eface06ff315e22e1345fc36bf6801;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53eface06ff315e22e1345fc36bf6801 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53eface06ff315e22e1345fc36bf6801 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_kind );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_u;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 520;
        type_description_1 = "oo";
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
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 524;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__min_vals );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_key );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 524;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 524;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_53eface06ff315e22e1345fc36bf6801 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_53eface06ff315e22e1345fc36bf6801, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_53eface06ff315e22e1345fc36bf6801, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
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
    tmp_left_name_1 = const_int_pos_1;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bits );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_right_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_int_arg_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 526;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_2;

    tmp_ass_subvalue_1 = var_val;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 527;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__min_vals );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 527;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_key );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subscribed_1 );

        exception_lineno = 527;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 527;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 523;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_53eface06ff315e22e1345fc36bf6801->m_frame) frame_53eface06ff315e22e1345fc36bf6801->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_16_min );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 528;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_53eface06ff315e22e1345fc36bf6801 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_53eface06ff315e22e1345fc36bf6801 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_53eface06ff315e22e1345fc36bf6801 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53eface06ff315e22e1345fc36bf6801, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53eface06ff315e22e1345fc36bf6801->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53eface06ff315e22e1345fc36bf6801, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53eface06ff315e22e1345fc36bf6801,
        type_description_1,
        par_self,
        var_val
    );


    // Release cached frame.
    if ( frame_53eface06ff315e22e1345fc36bf6801 == cache_frame_53eface06ff315e22e1345fc36bf6801 )
    {
        Py_DECREF( frame_53eface06ff315e22e1345fc36bf6801 );
    }
    cache_frame_53eface06ff315e22e1345fc36bf6801 = NULL;

    assertFrameObject( frame_53eface06ff315e22e1345fc36bf6801 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_16_min );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_16_min );
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


static PyObject *impl_numpy$core$getlimits$$$function_17_max( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_val = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_ad73847fe647c6e8e449cfa50b9c972d = NULL;

    struct Nuitka_FrameObject *frame_ad73847fe647c6e8e449cfa50b9c972d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad73847fe647c6e8e449cfa50b9c972d, codeobj_ad73847fe647c6e8e449cfa50b9c972d, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_ad73847fe647c6e8e449cfa50b9c972d = cache_frame_ad73847fe647c6e8e449cfa50b9c972d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad73847fe647c6e8e449cfa50b9c972d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad73847fe647c6e8e449cfa50b9c972d ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 535;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__max_vals );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 535;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_key );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 535;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 535;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

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
    PRESERVE_FRAME_EXCEPTION( frame_ad73847fe647c6e8e449cfa50b9c972d );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ad73847fe647c6e8e449cfa50b9c972d, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ad73847fe647c6e8e449cfa50b9c972d, exception_keeper_lineno_1 );
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


        exception_lineno = 536;
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
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_kind );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 537;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_u;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 537;
        type_description_1 = "oo";
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
    tmp_left_name_2 = const_int_pos_1;
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_bits );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_int_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_4 = const_int_pos_1;
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bits );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_right_name_3 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_4, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_int_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_3;

    branch_end_2:;
    tmp_ass_subvalue_1 = var_val;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iinfo );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iinfo" );
        exception_tb = NULL;

        exception_lineno = 541;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__max_vals );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_key );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subscribed_1 );

        exception_lineno = 541;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 541;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 534;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ad73847fe647c6e8e449cfa50b9c972d->m_frame) frame_ad73847fe647c6e8e449cfa50b9c972d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_17_max );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 542;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ad73847fe647c6e8e449cfa50b9c972d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_ad73847fe647c6e8e449cfa50b9c972d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ad73847fe647c6e8e449cfa50b9c972d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad73847fe647c6e8e449cfa50b9c972d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad73847fe647c6e8e449cfa50b9c972d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad73847fe647c6e8e449cfa50b9c972d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad73847fe647c6e8e449cfa50b9c972d,
        type_description_1,
        par_self,
        var_val
    );


    // Release cached frame.
    if ( frame_ad73847fe647c6e8e449cfa50b9c972d == cache_frame_ad73847fe647c6e8e449cfa50b9c972d )
    {
        Py_DECREF( frame_ad73847fe647c6e8e449cfa50b9c972d );
    }
    cache_frame_ad73847fe647c6e8e449cfa50b9c972d = NULL;

    assertFrameObject( frame_ad73847fe647c6e8e449cfa50b9c972d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_17_max );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_17_max );
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


static PyObject *impl_numpy$core$getlimits$$$function_18___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_9c25c9e39664233b8f38cdc9d843bec0 = NULL;

    struct Nuitka_FrameObject *frame_9c25c9e39664233b8f38cdc9d843bec0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9c25c9e39664233b8f38cdc9d843bec0, codeobj_9c25c9e39664233b8f38cdc9d843bec0, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *) );
    frame_9c25c9e39664233b8f38cdc9d843bec0 = cache_frame_9c25c9e39664233b8f38cdc9d843bec0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c25c9e39664233b8f38cdc9d843bec0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c25c9e39664233b8f38cdc9d843bec0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_d699850a7ed4dcad4593c97865f24dd4;
    tmp_right_name_1 = _PyDict_NewPresized( 3 );
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 555;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_min );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 555;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_min;
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 555;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_max;
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c25c9e39664233b8f38cdc9d843bec0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c25c9e39664233b8f38cdc9d843bec0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c25c9e39664233b8f38cdc9d843bec0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c25c9e39664233b8f38cdc9d843bec0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c25c9e39664233b8f38cdc9d843bec0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c25c9e39664233b8f38cdc9d843bec0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c25c9e39664233b8f38cdc9d843bec0,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if ( frame_9c25c9e39664233b8f38cdc9d843bec0 == cache_frame_9c25c9e39664233b8f38cdc9d843bec0 )
    {
        Py_DECREF( frame_9c25c9e39664233b8f38cdc9d843bec0 );
    }
    cache_frame_9c25c9e39664233b8f38cdc9d843bec0 = NULL;

    assertFrameObject( frame_9c25c9e39664233b8f38cdc9d843bec0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_18___str__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_18___str__ );
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


static PyObject *impl_numpy$core$getlimits$$$function_19___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_e09152bc69b218d334707abf4d1fdad1 = NULL;

    struct Nuitka_FrameObject *frame_e09152bc69b218d334707abf4d1fdad1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e09152bc69b218d334707abf4d1fdad1, codeobj_e09152bc69b218d334707abf4d1fdad1, module_numpy$core$getlimits, sizeof(void *) );
    frame_e09152bc69b218d334707abf4d1fdad1 = cache_frame_e09152bc69b218d334707abf4d1fdad1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e09152bc69b218d334707abf4d1fdad1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e09152bc69b218d334707abf4d1fdad1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_689f5c49db7f0f46fe96e883a6a93baa;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 558;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 558;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_min );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 559;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_source_name_4 = par_self;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_max );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 559;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 559;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e09152bc69b218d334707abf4d1fdad1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e09152bc69b218d334707abf4d1fdad1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e09152bc69b218d334707abf4d1fdad1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e09152bc69b218d334707abf4d1fdad1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e09152bc69b218d334707abf4d1fdad1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e09152bc69b218d334707abf4d1fdad1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e09152bc69b218d334707abf4d1fdad1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e09152bc69b218d334707abf4d1fdad1 == cache_frame_e09152bc69b218d334707abf4d1fdad1 )
    {
        Py_DECREF( frame_e09152bc69b218d334707abf4d1fdad1 );
    }
    cache_frame_e09152bc69b218d334707abf4d1fdad1 = NULL;

    assertFrameObject( frame_e09152bc69b218d334707abf4d1fdad1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_19___repr__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits$$$function_19___repr__ );
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



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_10__discovered_machar,
        const_str_plain__discovered_machar,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2b0cc9af0c53c04aaa3cf78c0ff4dac1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_ab7c9132978cbffbf3e766956f1fc60a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda( struct Nuitka_CellObject *closure_ftype )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e95a0f8c2929c568b3708edf78f0c78c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        1
    );

result->m_closure[0] = closure_ftype;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda( struct Nuitka_CellObject *closure_params )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c85b1ff7900ccf1771b0224b6adfce33,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        1
    );

result->m_closure[0] = closure_params;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda( struct Nuitka_CellObject *closure_ftype )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_cb891d91f07c35f86869701bfeea4fd3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        1
    );

result->m_closure[0] = closure_ftype;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda( struct Nuitka_CellObject *closure_ftype, struct Nuitka_CellObject *closure_params )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_10__discovered_machar$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b3c4f8d525d5339e3430cc5e7d12527,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        2
    );

result->m_closure[0] = closure_ftype;
Py_INCREF( result->m_closure[0] );
result->m_closure[1] = closure_params;
Py_INCREF( result->m_closure[1] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_11___new__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_11___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f93e5e9b0f77004eaaf76dd9851f530a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_12__init(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_12__init,
        const_str_plain__init,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8ca99f9408b8f1b3d3328d5c5e627622,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_13___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_13___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dbad0596e78b8f61c8dd157dffb78e7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_14___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_14___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7bb0e68a2f7645d892400de5ef48a5a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_15___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_96afa414482125c6e39f2c9da482f9b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_16_min(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_16_min,
        const_str_plain_min,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53eface06ff315e22e1345fc36bf6801,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_3122c1a6126f732cd94f8864df7d76ff,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_17_max(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_17_max,
        const_str_plain_max,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad73847fe647c6e8e449cfa50b9c972d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_8f6c2ba61d1aad5f470aa0d7e1c51ed6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_18___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_18___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9c25c9e39664233b8f38cdc9d843bec0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_c1416ee2e3faf191d9259e1f3f7581c0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_19___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_19___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e09152bc69b218d334707abf4d1fdad1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_1__fr0(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_1__fr0,
        const_str_plain__fr0,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3fd935875d9b2a70c23c714b4fb29560,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_c585224fd2c43f929c10a58162297da8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_2__fr1(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_2__fr1,
        const_str_plain__fr1,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6c3532cf7fba228993191032c80f6c83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_0dfcf8cd171b40dc563f1a190d516493,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9f019b9506e17963861441e1e7a2f802,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda( struct Nuitka_CellObject *closure_ftype )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e156b4ce634de548f96c465e66ba9301,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        1
    );

result->m_closure[0] = closure_ftype;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda( struct Nuitka_CellObject *closure_float_conv )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9913092b2c98990e25e202cb1334e0f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        1
    );

result->m_closure[0] = closure_float_conv;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda( struct Nuitka_CellObject *closure_ftype, struct Nuitka_CellObject *closure_params )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_3___init__$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_32dfad09b15009d73671f41cca584faa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        2
    );

result->m_closure[0] = closure_ftype;
Py_INCREF( result->m_closure[0] );
result->m_closure[1] = closure_params;
Py_INCREF( result->m_closure[1] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_4__str_eps(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_4__str_eps,
        const_str_plain__str_eps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53d2bc4ec3afa23f7a1e9a502e6029fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_5__str_epsneg(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_5__str_epsneg,
        const_str_plain__str_epsneg,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_189412fa2d28c11dcad5435bb02bf76b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_6__str_xmin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_6__str_xmin,
        const_str_plain__str_xmin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4fe6e84b9868c9e6683a83c84efdf37a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_7__str_xmax(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_7__str_xmax,
        const_str_plain__str_xmax,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c04ac430ed4ed12d1c4f76794184034,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_8__str_resolution(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_8__str_resolution,
        const_str_plain__str_resolution,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c15237f68cf08fb1f3ec9c2b5eae9105,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$getlimits$$$function_9__get_machar(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$getlimits$$$function_9__get_machar,
        const_str_plain__get_machar,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_11b0aa66c3ba3af1ac737d952218da10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$getlimits,
        const_str_digest_dd8d834fa6f08a772c04822740add2d7,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$getlimits =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.getlimits",   /* m_name */
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

MOD_INIT_DECL( numpy$core$getlimits )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$getlimits );
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
    puts("numpy.core.getlimits: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.getlimits: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$getlimits" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$getlimits = Py_InitModule4(
        "numpy.core.getlimits",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$getlimits = PyModule_Create( &mdef_numpy$core$getlimits );
#endif

    moduledict_numpy$core$getlimits = MODULE_DICT( module_numpy$core$getlimits );

    CHECK_OBJECT( module_numpy$core$getlimits );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b8eaccad553858ca41bd501c0a17651e, module_numpy$core$getlimits );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_0_var___init__ = NULL;
    PyObject *outline_0_var__str_eps = NULL;
    PyObject *outline_0_var__str_epsneg = NULL;
    PyObject *outline_0_var__str_xmin = NULL;
    PyObject *outline_0_var__str_xmax = NULL;
    PyObject *outline_0_var__str_resolution = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_1_var__finfo_cache = NULL;
    PyObject *outline_1_var___new__ = NULL;
    PyObject *outline_1_var__init = NULL;
    PyObject *outline_1_var___str__ = NULL;
    PyObject *outline_1_var___repr__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *outline_2_var__min_vals = NULL;
    PyObject *outline_2_var__max_vals = NULL;
    PyObject *outline_2_var___init__ = NULL;
    PyObject *outline_2_var_min = NULL;
    PyObject *outline_2_var_max = NULL;
    PyObject *outline_2_var___str__ = NULL;
    PyObject *outline_2_var___repr__ = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    PyObject *tmp_with_2__indicator = NULL;
    PyObject *tmp_with_2__source = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
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
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    PyObject *tmp_called_name_58;
    PyObject *tmp_called_name_59;
    PyObject *tmp_called_name_60;
    PyObject *tmp_called_name_61;
    PyObject *tmp_called_name_62;
    PyObject *tmp_called_name_63;
    PyObject *tmp_called_name_64;
    PyObject *tmp_called_name_65;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
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
    PyObject *tmp_dict_key_72;
    PyObject *tmp_dict_key_73;
    PyObject *tmp_dict_key_74;
    PyObject *tmp_dict_key_75;
    PyObject *tmp_dict_key_76;
    PyObject *tmp_dict_key_77;
    PyObject *tmp_dict_key_78;
    PyObject *tmp_dict_key_79;
    PyObject *tmp_dict_key_80;
    PyObject *tmp_dict_key_81;
    PyObject *tmp_dict_key_82;
    PyObject *tmp_dict_key_83;
    PyObject *tmp_dict_key_84;
    PyObject *tmp_dict_key_85;
    PyObject *tmp_dict_key_86;
    PyObject *tmp_dict_key_87;
    PyObject *tmp_dict_key_88;
    PyObject *tmp_dict_key_89;
    PyObject *tmp_dict_key_90;
    PyObject *tmp_dict_key_91;
    PyObject *tmp_dict_key_92;
    PyObject *tmp_dict_key_93;
    PyObject *tmp_dict_key_94;
    PyObject *tmp_dict_key_95;
    PyObject *tmp_dict_key_96;
    PyObject *tmp_dict_key_97;
    PyObject *tmp_dict_key_98;
    PyObject *tmp_dict_key_99;
    PyObject *tmp_dict_key_100;
    PyObject *tmp_dict_key_101;
    PyObject *tmp_dict_key_102;
    PyObject *tmp_dict_key_103;
    PyObject *tmp_dict_key_104;
    PyObject *tmp_dict_key_105;
    PyObject *tmp_dict_key_106;
    PyObject *tmp_dict_key_107;
    PyObject *tmp_dict_key_108;
    PyObject *tmp_dict_key_109;
    PyObject *tmp_dict_key_110;
    PyObject *tmp_dict_key_111;
    PyObject *tmp_dict_key_112;
    PyObject *tmp_dict_key_113;
    PyObject *tmp_dict_key_114;
    PyObject *tmp_dict_key_115;
    PyObject *tmp_dict_key_116;
    PyObject *tmp_dict_key_117;
    PyObject *tmp_dict_key_118;
    PyObject *tmp_dict_key_119;
    PyObject *tmp_dict_key_120;
    PyObject *tmp_dict_key_121;
    PyObject *tmp_dict_key_122;
    PyObject *tmp_dict_key_123;
    PyObject *tmp_dict_key_124;
    PyObject *tmp_dict_key_125;
    PyObject *tmp_dict_key_126;
    PyObject *tmp_dict_key_127;
    PyObject *tmp_dict_key_128;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
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
    PyObject *tmp_dict_value_72;
    PyObject *tmp_dict_value_73;
    PyObject *tmp_dict_value_74;
    PyObject *tmp_dict_value_75;
    PyObject *tmp_dict_value_76;
    PyObject *tmp_dict_value_77;
    PyObject *tmp_dict_value_78;
    PyObject *tmp_dict_value_79;
    PyObject *tmp_dict_value_80;
    PyObject *tmp_dict_value_81;
    PyObject *tmp_dict_value_82;
    PyObject *tmp_dict_value_83;
    PyObject *tmp_dict_value_84;
    PyObject *tmp_dict_value_85;
    PyObject *tmp_dict_value_86;
    PyObject *tmp_dict_value_87;
    PyObject *tmp_dict_value_88;
    PyObject *tmp_dict_value_89;
    PyObject *tmp_dict_value_90;
    PyObject *tmp_dict_value_91;
    PyObject *tmp_dict_value_92;
    PyObject *tmp_dict_value_93;
    PyObject *tmp_dict_value_94;
    PyObject *tmp_dict_value_95;
    PyObject *tmp_dict_value_96;
    PyObject *tmp_dict_value_97;
    PyObject *tmp_dict_value_98;
    PyObject *tmp_dict_value_99;
    PyObject *tmp_dict_value_100;
    PyObject *tmp_dict_value_101;
    PyObject *tmp_dict_value_102;
    PyObject *tmp_dict_value_103;
    PyObject *tmp_dict_value_104;
    PyObject *tmp_dict_value_105;
    PyObject *tmp_dict_value_106;
    PyObject *tmp_dict_value_107;
    PyObject *tmp_dict_value_108;
    PyObject *tmp_dict_value_109;
    PyObject *tmp_dict_value_110;
    PyObject *tmp_dict_value_111;
    PyObject *tmp_dict_value_112;
    PyObject *tmp_dict_value_113;
    PyObject *tmp_dict_value_114;
    PyObject *tmp_dict_value_115;
    PyObject *tmp_dict_value_116;
    PyObject *tmp_dict_value_117;
    PyObject *tmp_dict_value_118;
    PyObject *tmp_dict_value_119;
    PyObject *tmp_dict_value_120;
    PyObject *tmp_dict_value_121;
    PyObject *tmp_dict_value_122;
    PyObject *tmp_dict_value_123;
    PyObject *tmp_dict_value_124;
    PyObject *tmp_dict_value_125;
    PyObject *tmp_dict_value_126;
    PyObject *tmp_dict_value_127;
    PyObject *tmp_dict_value_128;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
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
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_staticmethod_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4ca5dff2617d09328c13dc5964f2e5bd_2 = NULL;

    struct Nuitka_FrameObject *frame_4ca5dff2617d09328c13dc5964f2e5bd_2;

    static struct Nuitka_FrameObject *cache_frame_4eb771f6908b6f61299821cf47e6118c_3 = NULL;

    struct Nuitka_FrameObject *frame_4eb771f6908b6f61299821cf47e6118c_3;

    static struct Nuitka_FrameObject *cache_frame_1f451b817a40df4f348a68987218b960_4 = NULL;

    struct Nuitka_FrameObject *frame_1f451b817a40df4f348a68987218b960_4;

    struct Nuitka_FrameObject *frame_643f15fd7521b115cd0b0b1ba783eb14;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_454d0777cd09130adadab5cb34c54852;
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_fd500741fbfca3fe5ca984210be4208b;
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_643f15fd7521b115cd0b0b1ba783eb14 = MAKE_MODULE_FRAME( codeobj_643f15fd7521b115cd0b0b1ba783eb14, module_numpy$core$getlimits );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_643f15fd7521b115cd0b0b1ba783eb14 );
    assert( Py_REFCNT( frame_643f15fd7521b115cd0b0b1ba783eb14 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_assign_source_8 = LIST_COPY( const_list_str_plain_finfo_str_plain_iinfo_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 8;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_machar;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_MachAr_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 10;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_MachAr );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachAr, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_empty;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_numeric_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 11;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric, tmp_assign_source_11 );
    tmp_name_name_4 = const_str_empty;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_numerictypes_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 12;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_numerictypes );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes, tmp_assign_source_12 );
    tmp_name_name_5 = const_str_plain_numeric;
    tmp_globals_name_5 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_array_str_plain_inf_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 13;
    tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_13;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_array );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_inf );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_inf, tmp_assign_source_15 );
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

    tmp_name_name_6 = const_str_plain_umath;
    tmp_globals_name_6 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_log10_str_plain_exp2_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 14;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_log10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_log10, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_exp2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2, tmp_assign_source_18 );
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

    tmp_name_name_7 = const_str_empty;
    tmp_globals_name_7 = (PyObject *)moduledict_numpy$core$getlimits;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_umath_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 15;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_umath );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_umath, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$core$getlimits$$$function_1__fr0(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr0, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$core$getlimits$$$function_2__fr1(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__fr1, tmp_assign_source_21 );
    tmp_assign_source_22 = _PyDict_NewPresized( 3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_single );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        Py_DECREF( tmp_dict_value_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_csingle );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );
        Py_DECREF( tmp_dict_value_1 );

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    Py_DECREF( tmp_dict_key_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_float_ );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        Py_DECREF( tmp_dict_value_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_complex_ );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );
        Py_DECREF( tmp_dict_value_2 );

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    Py_DECREF( tmp_dict_key_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_longfloat );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_22 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_clongfloat );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_22, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    Py_DECREF( tmp_dict_key_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__convert_to_float, tmp_assign_source_22 );
    tmp_assign_source_23 = const_str_digest_71f9600c11b1b2dcd32646ee953369ea;
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt, tmp_assign_source_23 );
    tmp_assign_source_24 = _PyDict_NewPresized( 4 );
    tmp_dict_value_4 = _PyDict_NewPresized( 3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_int64 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = const_str_plain_itype;
    tmp_res = PyDict_SetItem( tmp_dict_value_4, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = const_str_digest_16c966c18ae1e919ca62dfb9d9bdceba;
    tmp_dict_key_6 = const_str_plain_fmt;
    tmp_res = PyDict_SetItem( tmp_dict_value_4, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
        exception_tb = NULL;

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 47;
    tmp_dict_value_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_plain_double_tuple, 0 ) );

    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_title;
    tmp_res = PyDict_SetItem( tmp_dict_value_4, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_double );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_4 );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    Py_DECREF( tmp_dict_key_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_8 = _PyDict_NewPresized( 3 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_int32 );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_itype;
    tmp_res = PyDict_SetItem( tmp_dict_value_8, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_10 = const_str_digest_b11b128c563b5ffb658ae9500081eb04;
    tmp_dict_key_10 = const_str_plain_fmt;
    tmp_res = PyDict_SetItem( tmp_dict_value_8, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
        exception_tb = NULL;

        exception_lineno = 51;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 51;
    tmp_dict_value_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_plain_single_tuple, 0 ) );

    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_title;
    tmp_res = PyDict_SetItem( tmp_dict_value_8, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_single );
    if ( tmp_dict_key_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_8 );

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    Py_DECREF( tmp_dict_key_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_12 = _PyDict_NewPresized( 3 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_longlong );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_12 );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_13 = const_str_plain_itype;
    tmp_res = PyDict_SetItem( tmp_dict_value_12, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_14 = const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
    tmp_dict_key_14 = const_str_plain_fmt;
    tmp_res = PyDict_SetItem( tmp_dict_value_12, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
        exception_tb = NULL;

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 55;
    tmp_dict_value_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_digest_61eb47d02a6bf21baa1afce40f67ac8b_tuple, 0 ) );

    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_12 );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_15 = const_str_plain_title;
    tmp_res = PyDict_SetItem( tmp_dict_value_12, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_longdouble );
    if ( tmp_dict_key_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_12 );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    Py_DECREF( tmp_dict_key_12 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_16 = _PyDict_NewPresized( 3 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_17 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_int16 );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_16 );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = const_str_plain_itype;
    tmp_res = PyDict_SetItem( tmp_dict_value_16, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_18 = const_str_digest_08664f457b1a8dc7f05c9e1db0d9e3bd;
    tmp_dict_key_18 = const_str_plain_fmt;
    tmp_res = PyDict_SetItem( tmp_dict_value_16, tmp_dict_key_18, tmp_dict_value_18 );
    assert( !(tmp_res != 0) );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__title_fmt );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__title_fmt );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_title_fmt" );
        exception_tb = NULL;

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 59;
    tmp_dict_value_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_format, &PyTuple_GET_ITEM( const_tuple_str_plain_half_tuple, 0 ) );

    if ( tmp_dict_value_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_16 );

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_19 = const_str_plain_title;
    tmp_res = PyDict_SetItem( tmp_dict_value_16, tmp_dict_key_19, tmp_dict_value_19 );
    Py_DECREF( tmp_dict_value_19 );
    assert( !(tmp_res != 0) );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_half );
    if ( tmp_dict_key_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );
        Py_DECREF( tmp_dict_value_16 );

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_24, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_value_16 );
    Py_DECREF( tmp_dict_key_16 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__MACHAR_PARAMS, tmp_assign_source_24 );
    // Tried code:
    tmp_assign_source_26 = const_str_digest_b8eaccad553858ca41bd501c0a17651e;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_26 );
    outline_0_var___module__ = tmp_assign_source_26;

    tmp_assign_source_27 = const_str_digest_e7e19dd5257f03801740d23cfcc5941d;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_27 );
    outline_0_var___doc__ = tmp_assign_source_27;

    tmp_assign_source_28 = MAKE_FUNCTION_numpy$core$getlimits$$$function_3___init__(  );
    assert( outline_0_var___init__ == NULL );
    outline_0_var___init__ = tmp_assign_source_28;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ca5dff2617d09328c13dc5964f2e5bd_2, codeobj_4ca5dff2617d09328c13dc5964f2e5bd, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ca5dff2617d09328c13dc5964f2e5bd_2 = cache_frame_4ca5dff2617d09328c13dc5964f2e5bd_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function_4__str_eps(  );
    frame_4ca5dff2617d09328c13dc5964f2e5bd_2->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_2 = "oooNNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__str_eps == NULL );
    outline_0_var__str_eps = tmp_assign_source_29;

    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_numpy$core$getlimits$$$function_5__str_epsneg(  );
    frame_4ca5dff2617d09328c13dc5964f2e5bd_2->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_2 = "ooooNNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__str_epsneg == NULL );
    outline_0_var__str_epsneg = tmp_assign_source_30;

    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_3 = MAKE_FUNCTION_numpy$core$getlimits$$$function_6__str_xmin(  );
    frame_4ca5dff2617d09328c13dc5964f2e5bd_2->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_2 = "oooooNNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__str_xmin == NULL );
    outline_0_var__str_xmin = tmp_assign_source_31;

    tmp_called_name_4 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_numpy$core$getlimits$$$function_7__str_xmax(  );
    frame_4ca5dff2617d09328c13dc5964f2e5bd_2->m_frame.f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_2 = "ooooooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__str_xmax == NULL );
    outline_0_var__str_xmax = tmp_assign_source_32;

    tmp_called_name_5 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_5 = MAKE_FUNCTION_numpy$core$getlimits$$$function_8__str_resolution(  );
    frame_4ca5dff2617d09328c13dc5964f2e5bd_2->m_frame.f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_2 = "oooooooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var__str_resolution == NULL );
    outline_0_var__str_resolution = tmp_assign_source_33;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ca5dff2617d09328c13dc5964f2e5bd_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ca5dff2617d09328c13dc5964f2e5bd_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ca5dff2617d09328c13dc5964f2e5bd_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ca5dff2617d09328c13dc5964f2e5bd_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var___doc__,
        outline_0_var___init__,
        outline_0_var__str_eps,
        outline_0_var__str_epsneg,
        outline_0_var__str_xmin,
        outline_0_var__str_xmax,
        outline_0_var__str_resolution
    );


    // Release cached frame.
    if ( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 == cache_frame_4ca5dff2617d09328c13dc5964f2e5bd_2 )
    {
        Py_DECREF( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 );
    }
    cache_frame_4ca5dff2617d09328c13dc5964f2e5bd_2 = NULL;

    assertFrameObject( frame_4ca5dff2617d09328c13dc5964f2e5bd_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_5;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = _PyDict_NewPresized( 8 );
    tmp_dict_value_20 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_20 );
    tmp_dict_key_20 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_20, tmp_dict_value_20 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_21 = outline_0_var___doc__;

    CHECK_OBJECT( tmp_dict_value_21 );
    tmp_dict_key_21 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_21, tmp_dict_value_21 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_22 = outline_0_var___init__;

    CHECK_OBJECT( tmp_dict_value_22 );
    tmp_dict_key_22 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_22, tmp_dict_value_22 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_23 = outline_0_var__str_eps;

    CHECK_OBJECT( tmp_dict_value_23 );
    tmp_dict_key_23 = const_str_plain__str_eps;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_23, tmp_dict_value_23 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_24 = outline_0_var__str_epsneg;

    CHECK_OBJECT( tmp_dict_value_24 );
    tmp_dict_key_24 = const_str_plain__str_epsneg;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_24, tmp_dict_value_24 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_25 = outline_0_var__str_xmin;

    CHECK_OBJECT( tmp_dict_value_25 );
    tmp_dict_key_25 = const_str_plain__str_xmin;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_25, tmp_dict_value_25 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_26 = outline_0_var__str_xmax;

    CHECK_OBJECT( tmp_dict_value_26 );
    tmp_dict_key_26 = const_str_plain__str_xmax;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_26, tmp_dict_value_26 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_27 = outline_0_var__str_resolution;

    CHECK_OBJECT( tmp_dict_value_27 );
    tmp_dict_key_27 = const_str_plain__str_resolution;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_27, tmp_dict_value_27 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
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

    CHECK_OBJECT( (PyObject *)outline_0_var__str_eps );
    Py_DECREF( outline_0_var__str_eps );
    outline_0_var__str_eps = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__str_epsneg );
    Py_DECREF( outline_0_var__str_epsneg );
    outline_0_var__str_epsneg = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__str_xmin );
    Py_DECREF( outline_0_var__str_xmin );
    outline_0_var__str_xmin = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__str_xmax );
    Py_DECREF( outline_0_var__str_xmax );
    outline_0_var__str_xmax = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__str_resolution );
    Py_DECREF( outline_0_var__str_resolution );
    outline_0_var__str_resolution = NULL;

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

    CHECK_OBJECT( (PyObject *)outline_0_var___init__ );
    Py_DECREF( outline_0_var___init__ );
    outline_0_var___init__ = NULL;

    Py_XDECREF( outline_0_var__str_eps );
    outline_0_var__str_eps = NULL;

    Py_XDECREF( outline_0_var__str_epsneg );
    outline_0_var__str_epsneg = NULL;

    Py_XDECREF( outline_0_var__str_xmin );
    outline_0_var__str_xmin = NULL;

    Py_XDECREF( outline_0_var__str_xmax );
    outline_0_var__str_xmax = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 62;
    goto try_except_handler_4;
    outline_result_1:;
    tmp_assign_source_25 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_25;

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
    tmp_assign_source_34 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_34 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_34 );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_34;

    tmp_called_name_6 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_args_element_name_6 = const_str_plain_MachArLike;
    tmp_args_element_name_7 = const_tuple_type_object_tuple;
    tmp_args_element_name_8 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_35;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
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
    try_end_4:;
    tmp_assign_source_36 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_36 );
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike, tmp_assign_source_36 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_float16 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f16, tmp_assign_source_37 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "MachArLike" );
        exception_tb = NULL;

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f16 );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f16 );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f16" );
        exception_tb = NULL;

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 13 );
    tmp_dict_value_28 = const_int_neg_10;
    tmp_dict_key_28 = const_str_plain_machep;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_28, tmp_dict_value_28 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_29 = const_int_neg_11;
    tmp_dict_key_29 = const_str_plain_negep;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_29, tmp_dict_value_29 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_30 = const_int_neg_14;
    tmp_dict_key_30 = const_str_plain_minexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_30, tmp_dict_value_30 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_31 = const_int_pos_16;
    tmp_dict_key_31 = const_str_plain_maxexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_31, tmp_dict_value_31 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_32 = const_int_pos_10;
    tmp_dict_key_32 = const_str_plain_it;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_32, tmp_dict_value_32 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_33 = const_int_pos_5;
    tmp_dict_key_33 = const_str_plain_iexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_33, tmp_dict_value_33 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_34 = const_int_pos_2;
    tmp_dict_key_34 = const_str_plain_ibeta;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_34, tmp_dict_value_34 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_35 = const_int_pos_5;
    tmp_dict_key_35 = const_str_plain_irnd;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_35, tmp_dict_value_35 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_36 = const_int_0;
    tmp_dict_key_36 = const_str_plain_ngrd;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_36, tmp_dict_value_36 );
    assert( !(tmp_res != 0) );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f16 );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f16 );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f16" );
        exception_tb = NULL;

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 122;
    tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_int_neg_10_tuple, 0 ) );

    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dict_value_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dict_value_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_37 = const_str_plain_eps;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_37, tmp_dict_value_37 );
    Py_DECREF( tmp_dict_value_37 );
    assert( !(tmp_res != 0) );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_10 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f16 );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f16 );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f16" );
        exception_tb = NULL;

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 123;
    tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_int_neg_11_tuple, 0 ) );

    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dict_value_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dict_value_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_38 = const_str_plain_epsneg;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_38, tmp_dict_value_38 );
    Py_DECREF( tmp_dict_value_38 );
    assert( !(tmp_res != 0) );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f16 );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f16 );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f16" );
        exception_tb = NULL;

        exception_lineno = 124;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 124;
    tmp_dict_value_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_int_pos_65504_tuple, 0 ) );

    if ( tmp_dict_value_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 124;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_39 = const_str_plain_huge;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_39, tmp_dict_value_39 );
    Py_DECREF( tmp_dict_value_39 );
    assert( !(tmp_res != 0) );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f16 );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f16 );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f16" );
        exception_tb = NULL;

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 125;
    tmp_dict_value_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_float_6_103515625e_minus_05_tuple, 0 ) );

    if ( tmp_dict_value_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_40 = const_str_plain_tiny;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_40, tmp_dict_value_40 );
    Py_DECREF( tmp_dict_value_40 );
    assert( !(tmp_res != 0) );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 112;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float16_ma, tmp_assign_source_38 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 128;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_float32 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f32, tmp_assign_source_39 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "MachArLike" );
        exception_tb = NULL;

        exception_lineno = 129;

        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f32 );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f32 );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f32" );
        exception_tb = NULL;

        exception_lineno = 129;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 13 );
    tmp_dict_value_41 = const_int_neg_23;
    tmp_dict_key_41 = const_str_plain_machep;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_41, tmp_dict_value_41 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_42 = const_int_neg_24;
    tmp_dict_key_42 = const_str_plain_negep;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_42, tmp_dict_value_42 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_43 = const_int_neg_126;
    tmp_dict_key_43 = const_str_plain_minexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_43, tmp_dict_value_43 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_44 = const_int_pos_128;
    tmp_dict_key_44 = const_str_plain_maxexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_44, tmp_dict_value_44 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_45 = const_int_pos_23;
    tmp_dict_key_45 = const_str_plain_it;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_45, tmp_dict_value_45 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_46 = const_int_pos_8;
    tmp_dict_key_46 = const_str_plain_iexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_46, tmp_dict_value_46 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_47 = const_int_pos_2;
    tmp_dict_key_47 = const_str_plain_ibeta;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_47, tmp_dict_value_47 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_48 = const_int_pos_5;
    tmp_dict_key_48 = const_str_plain_irnd;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_48, tmp_dict_value_48 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_49 = const_int_0;
    tmp_dict_key_49 = const_str_plain_ngrd;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_49, tmp_dict_value_49 );
    assert( !(tmp_res != 0) );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_15 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f32 );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f32 );
    }

    if ( tmp_called_name_16 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f32" );
        exception_tb = NULL;

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 139;
    tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_int_neg_23_tuple, 0 ) );

    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_dict_value_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_dict_value_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 139;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_50 = const_str_plain_eps;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_50, tmp_dict_value_50 );
    Py_DECREF( tmp_dict_value_50 );
    assert( !(tmp_res != 0) );
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_17 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 140;

        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f32 );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f32 );
    }

    if ( tmp_called_name_18 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f32" );
        exception_tb = NULL;

        exception_lineno = 140;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 140;
    tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, &PyTuple_GET_ITEM( const_tuple_int_neg_24_tuple, 0 ) );

    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 140;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_dict_value_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_dict_value_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 140;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_51 = const_str_plain_epsneg;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_51, tmp_dict_value_51 );
    Py_DECREF( tmp_dict_value_51 );
    assert( !(tmp_res != 0) );
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f32 );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f32 );
    }

    if ( tmp_called_name_19 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f32" );
        exception_tb = NULL;

        exception_lineno = 141;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 141;
    tmp_dict_value_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_float_3_4028234663852886e38_tuple, 0 ) );

    if ( tmp_dict_value_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 141;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_52 = const_str_plain_huge;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_52, tmp_dict_value_52 );
    Py_DECREF( tmp_dict_value_52 );
    assert( !(tmp_res != 0) );
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_20 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 142;

        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f32 );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f32 );
    }

    if ( tmp_called_name_21 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f32" );
        exception_tb = NULL;

        exception_lineno = 142;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 142;
    tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, &PyTuple_GET_ITEM( const_tuple_int_neg_126_tuple, 0 ) );

    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 142;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_dict_value_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_dict_value_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 142;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_53 = const_str_plain_tiny;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_53, tmp_dict_value_53 );
    Py_DECREF( tmp_dict_value_53 );
    assert( !(tmp_res != 0) );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 129;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float32_ma, tmp_assign_source_40 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 145;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_41 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_float64 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f64, tmp_assign_source_41 );
    tmp_assign_source_42 = const_float_1_1102230246251565e_minus_16;
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f64, tmp_assign_source_42 );
    tmp_assign_source_43 = const_float_2_2250738585072014e_minus_308;
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f64, tmp_assign_source_43 );
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "MachArLike" );
        exception_tb = NULL;

        exception_lineno = 148;

        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f64 );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f64 );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f64" );
        exception_tb = NULL;

        exception_lineno = 148;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = _PyDict_NewPresized( 13 );
    tmp_dict_value_54 = const_int_neg_52;
    tmp_dict_key_54 = const_str_plain_machep;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_54, tmp_dict_value_54 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_55 = const_int_neg_53;
    tmp_dict_key_55 = const_str_plain_negep;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_55, tmp_dict_value_55 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_56 = const_int_neg_1022;
    tmp_dict_key_56 = const_str_plain_minexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_56, tmp_dict_value_56 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_57 = const_int_pos_1024;
    tmp_dict_key_57 = const_str_plain_maxexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_57, tmp_dict_value_57 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_58 = const_int_pos_52;
    tmp_dict_key_58 = const_str_plain_it;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_58, tmp_dict_value_58 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_59 = const_int_pos_11;
    tmp_dict_key_59 = const_str_plain_iexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_59, tmp_dict_value_59 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_60 = const_int_pos_2;
    tmp_dict_key_60 = const_str_plain_ibeta;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_60, tmp_dict_value_60 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_61 = const_int_pos_5;
    tmp_dict_key_61 = const_str_plain_irnd;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_61, tmp_dict_value_61 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_62 = const_int_0;
    tmp_dict_key_62 = const_str_plain_ngrd;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_62, tmp_dict_value_62 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_63 = const_float_2_220446049250313e_minus_16;
    tmp_dict_key_63 = const_str_plain_eps;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_63, tmp_dict_value_63 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_64 = const_float_1_1102230246251565e_minus_16;
    tmp_dict_key_64 = const_str_plain_epsneg;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_64, tmp_dict_value_64 );
    assert( !(tmp_res != 0) );
    tmp_left_name_1 = const_float_4_4942328371557893e307;
    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__f64 );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__f64 );
    }

    if ( tmp_called_name_23 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_f64" );
        exception_tb = NULL;

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 160;
    tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_65 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_dict_value_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_65 = const_str_plain_huge;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_65, tmp_dict_value_65 );
    Py_DECREF( tmp_dict_value_65 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_66 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f64 );

    if (unlikely( tmp_dict_value_66 == NULL ))
    {
        tmp_dict_value_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tiny_f64 );
    }

    if ( tmp_dict_value_66 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_tiny_f64" );
        exception_tb = NULL;

        exception_lineno = 161;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_66 = const_str_plain_tiny;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_66, tmp_dict_value_66 );
    assert( !(tmp_res != 0) );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 148;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float64_ma, tmp_assign_source_44 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_ntypes );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ntypes );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ntypes" );
        exception_tb = NULL;

        exception_lineno = 164;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_longdouble );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld, tmp_assign_source_45 );
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 165;

        goto frame_exception_exit_1;
    }

    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 165;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 165;
    tmp_args_element_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, &PyTuple_GET_ITEM( const_tuple_int_neg_113_tuple, 0 ) );

    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f128, tmp_assign_source_46 );
    tmp_called_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_26 == NULL ))
    {
        tmp_called_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 166;

        goto frame_exception_exit_1;
    }

    tmp_called_name_27 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_27 == NULL ))
    {
        tmp_called_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 166;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 166;
    tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, &PyTuple_GET_ITEM( const_tuple_int_neg_16382_tuple, 0 ) );

    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f128, tmp_assign_source_47 );
    // Tried code:
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 168;

        goto try_except_handler_6;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_errstate );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_6;
    }
    tmp_kw_name_4 = PyDict_Copy( const_dict_8629c35bb486b0ff8446977b73ad0aff );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 168;
    tmp_assign_source_48 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_28, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_6;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_48;

    tmp_source_name_20 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_20 );
    tmp_assign_source_49 = LOOKUP_SPECIAL( tmp_source_name_20, const_str_plain___exit__ );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_6;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_49;

    tmp_source_name_21 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_29 = LOOKUP_SPECIAL( tmp_source_name_21, const_str_plain___enter__ );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_6;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 168;
    tmp_assign_source_50 = CALL_FUNCTION_NO_ARGS( tmp_called_name_29 );
    Py_DECREF( tmp_called_name_29 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_6;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_50;

    tmp_assign_source_51 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_51 );
    tmp_with_1__indicator = tmp_assign_source_51;

    // Tried code:
    // Tried code:
    tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_30 == NULL ))
    {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 169;

        goto try_except_handler_8;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 169;
    tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_8;
    }
    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f128 );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__epsneg_f128 );
    }

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_epsneg_f128" );
        exception_tb = NULL;

        exception_lineno = 169;

        goto try_except_handler_8;
    }

    tmp_left_name_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_8;
    }
    tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f128 );

    if (unlikely( tmp_right_name_3 == NULL ))
    {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tiny_f128 );
    }

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_tiny_f128" );
        exception_tb = NULL;

        exception_lineno = 169;

        goto try_except_handler_8;
    }

    tmp_left_name_2 = BINARY_OPERATION_TRUEDIV( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_8;
    }
    tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_31 == NULL ))
    {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_31 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 169;

        goto try_except_handler_8;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 169;
    tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 169;

        goto try_except_handler_8;
    }
    tmp_assign_source_52 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__huge_f128, tmp_assign_source_52 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_643f15fd7521b115cd0b0b1ba783eb14 );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_643f15fd7521b115cd0b0b1ba783eb14, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_643f15fd7521b115cd0b0b1ba783eb14, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_7;
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
    tmp_assign_source_53 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_53;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_32 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_32 );
    tmp_args_element_name_16 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_17 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_18 = PyThreadState_GET()->exc_traceback;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_32, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_7;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 168;

        goto try_except_handler_7;
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
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 168;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame) frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_7;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 168;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame) frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_7;
    branch_end_1:;
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
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

    tmp_compare_left_3 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_33 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_33 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 168;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_33, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_7 );
        Py_XDECREF( exception_keeper_value_7 );
        Py_XDECREF( exception_keeper_tb_7 );

        exception_lineno = 168;

        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    tmp_compare_left_4 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_34 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_34 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 168;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_34, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;

        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    goto try_end_7;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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

    tmp_called_name_35 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

    if (unlikely( tmp_called_name_35 == NULL ))
    {
        tmp_called_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
    }

    if ( tmp_called_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "MachArLike" );
        exception_tb = NULL;

        exception_lineno = 170;

        goto frame_exception_exit_1;
    }

    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 170;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_kw_name_5 = _PyDict_NewPresized( 13 );
    tmp_dict_value_67 = const_int_neg_112;
    tmp_dict_key_67 = const_str_plain_machep;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_67, tmp_dict_value_67 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_68 = const_int_neg_113;
    tmp_dict_key_68 = const_str_plain_negep;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_68, tmp_dict_value_68 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_69 = const_int_neg_16382;
    tmp_dict_key_69 = const_str_plain_minexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_69, tmp_dict_value_69 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_70 = const_int_pos_16384;
    tmp_dict_key_70 = const_str_plain_maxexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_70, tmp_dict_value_70 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_71 = const_int_pos_112;
    tmp_dict_key_71 = const_str_plain_it;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_71, tmp_dict_value_71 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_72 = const_int_pos_15;
    tmp_dict_key_72 = const_str_plain_iexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_72, tmp_dict_value_72 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_73 = const_int_pos_2;
    tmp_dict_key_73 = const_str_plain_ibeta;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_73, tmp_dict_value_73 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_74 = const_int_pos_5;
    tmp_dict_key_74 = const_str_plain_irnd;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_74, tmp_dict_value_74 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_75 = const_int_0;
    tmp_dict_key_75 = const_str_plain_ngrd;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_75, tmp_dict_value_75 );
    assert( !(tmp_res != 0) );
    tmp_called_name_36 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_36 == NULL ))
    {
        tmp_called_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_36 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 180;

        goto frame_exception_exit_1;
    }

    tmp_called_name_37 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_37 == NULL ))
    {
        tmp_called_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_37 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 180;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 180;
    tmp_args_element_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, &PyTuple_GET_ITEM( const_tuple_int_neg_112_tuple, 0 ) );

    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 180;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_dict_value_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_dict_value_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );

        exception_lineno = 180;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_76 = const_str_plain_eps;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_76, tmp_dict_value_76 );
    Py_DECREF( tmp_dict_value_76 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_77 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f128 );

    if (unlikely( tmp_dict_value_77 == NULL ))
    {
        tmp_dict_value_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__epsneg_f128 );
    }

    if ( tmp_dict_value_77 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_epsneg_f128" );
        exception_tb = NULL;

        exception_lineno = 181;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_77 = const_str_plain_epsneg;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_77, tmp_dict_value_77 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_78 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__huge_f128 );

    if (unlikely( tmp_dict_value_78 == NULL ))
    {
        tmp_dict_value_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__huge_f128 );
    }

    if ( tmp_dict_value_78 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_huge_f128" );
        exception_tb = NULL;

        exception_lineno = 182;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_78 = const_str_plain_huge;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_78, tmp_dict_value_78 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_79 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f128 );

    if (unlikely( tmp_dict_value_79 == NULL ))
    {
        tmp_dict_value_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tiny_f128 );
    }

    if ( tmp_dict_value_79 == NULL )
    {
        Py_DECREF( tmp_args_name_4 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_tiny_f128" );
        exception_tb = NULL;

        exception_lineno = 183;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_79 = const_str_plain_tiny;
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_79, tmp_dict_value_79 );
    assert( !(tmp_res != 0) );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 170;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_name_35, tmp_args_name_4, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float128_ma, tmp_assign_source_54 );
    tmp_called_name_38 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_38 == NULL ))
    {
        tmp_called_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 186;

        goto frame_exception_exit_1;
    }

    tmp_called_name_39 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_39 == NULL ))
    {
        tmp_called_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 186;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 186;
    tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, &PyTuple_GET_ITEM( const_tuple_int_neg_64_tuple, 0 ) );

    if ( tmp_args_element_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f80, tmp_assign_source_55 );
    tmp_called_name_40 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_40 == NULL ))
    {
        tmp_called_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 187;

        goto frame_exception_exit_1;
    }

    tmp_called_name_41 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_41 == NULL ))
    {
        tmp_called_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 187;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 187;
    tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, &PyTuple_GET_ITEM( const_tuple_int_neg_16382_tuple, 0 ) );

    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f80, tmp_assign_source_56 );
    // Tried code:
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 189;

        goto try_except_handler_9;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_errstate );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_9;
    }
    tmp_kw_name_6 = PyDict_Copy( const_dict_8629c35bb486b0ff8446977b73ad0aff );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 189;
    tmp_assign_source_57 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_42, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_42 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_9;
    }
    assert( tmp_with_2__source == NULL );
    tmp_with_2__source = tmp_assign_source_57;

    tmp_source_name_23 = tmp_with_2__source;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_assign_source_58 = LOOKUP_SPECIAL( tmp_source_name_23, const_str_plain___exit__ );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_9;
    }
    assert( tmp_with_2__exit == NULL );
    tmp_with_2__exit = tmp_assign_source_58;

    tmp_source_name_24 = tmp_with_2__source;

    CHECK_OBJECT( tmp_source_name_24 );
    tmp_called_name_43 = LOOKUP_SPECIAL( tmp_source_name_24, const_str_plain___enter__ );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_9;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 189;
    tmp_assign_source_59 = CALL_FUNCTION_NO_ARGS( tmp_called_name_43 );
    Py_DECREF( tmp_called_name_43 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_9;
    }
    assert( tmp_with_2__enter == NULL );
    tmp_with_2__enter = tmp_assign_source_59;

    tmp_assign_source_60 = Py_True;
    assert( tmp_with_2__indicator == NULL );
    Py_INCREF( tmp_assign_source_60 );
    tmp_with_2__indicator = tmp_assign_source_60;

    // Tried code:
    // Tried code:
    tmp_called_name_44 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_44 == NULL ))
    {
        tmp_called_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 190;

        goto try_except_handler_11;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 190;
    tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto try_except_handler_11;
    }
    tmp_right_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f80 );

    if (unlikely( tmp_right_name_5 == NULL ))
    {
        tmp_right_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__epsneg_f80 );
    }

    if ( tmp_right_name_5 == NULL )
    {
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_epsneg_f80" );
        exception_tb = NULL;

        exception_lineno = 190;

        goto try_except_handler_11;
    }

    tmp_left_name_6 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto try_except_handler_11;
    }
    tmp_right_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f80 );

    if (unlikely( tmp_right_name_6 == NULL ))
    {
        tmp_right_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tiny_f80 );
    }

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_tiny_f80" );
        exception_tb = NULL;

        exception_lineno = 190;

        goto try_except_handler_11;
    }

    tmp_left_name_5 = BINARY_OPERATION_TRUEDIV( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto try_except_handler_11;
    }
    tmp_called_name_45 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_45 == NULL ))
    {
        tmp_called_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_45 == NULL )
    {
        Py_DECREF( tmp_left_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 190;

        goto try_except_handler_11;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 190;
    tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 190;

        goto try_except_handler_11;
    }
    tmp_assign_source_61 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__huge_f80, tmp_assign_source_61 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_643f15fd7521b115cd0b0b1ba783eb14 );
    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_643f15fd7521b115cd0b0b1ba783eb14, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_643f15fd7521b115cd0b0b1ba783eb14, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    tmp_compare_left_5 = PyThreadState_GET()->exc_type;
    tmp_compare_right_5 = PyExc_BaseException;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_10;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_62 = Py_False;
    {
        PyObject *old = tmp_with_2__indicator;
        assert( old != NULL );
        tmp_with_2__indicator = tmp_assign_source_62;
        Py_INCREF( tmp_with_2__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_46 = tmp_with_2__exit;

    CHECK_OBJECT( tmp_called_name_46 );
    tmp_args_element_name_22 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_23 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_24 = PyThreadState_GET()->exc_traceback;
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_46, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_10;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 189;

        goto try_except_handler_10;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 189;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame) frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_10;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 189;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame) frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_10;
    branch_end_5:;
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_6 = tmp_with_2__indicator;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_True;
    tmp_is_3 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_3 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_47 = tmp_with_2__exit;

    CHECK_OBJECT( tmp_called_name_47 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 189;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_47, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_10 );
        Py_XDECREF( exception_keeper_value_10 );
        Py_XDECREF( exception_keeper_tb_10 );

        exception_lineno = 189;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    tmp_compare_left_7 = tmp_with_2__indicator;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = Py_True;
    tmp_is_4 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_4 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_48 = tmp_with_2__exit;

    CHECK_OBJECT( tmp_called_name_48 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 189;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_48, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    branch_no_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    Py_XDECREF( tmp_with_2__indicator );
    tmp_with_2__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_with_2__source );
    Py_DECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
    Py_DECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
    Py_DECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    Py_XDECREF( tmp_with_2__indicator );
    tmp_with_2__indicator = NULL;

    tmp_called_name_49 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

    if (unlikely( tmp_called_name_49 == NULL ))
    {
        tmp_called_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
    }

    if ( tmp_called_name_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "MachArLike" );
        exception_tb = NULL;

        exception_lineno = 191;

        goto frame_exception_exit_1;
    }

    tmp_args_name_5 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 191;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_5 );
    tmp_kw_name_7 = _PyDict_NewPresized( 13 );
    tmp_dict_value_80 = const_int_neg_63;
    tmp_dict_key_80 = const_str_plain_machep;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_80, tmp_dict_value_80 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_81 = const_int_neg_64;
    tmp_dict_key_81 = const_str_plain_negep;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_81, tmp_dict_value_81 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_82 = const_int_neg_16382;
    tmp_dict_key_82 = const_str_plain_minexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_82, tmp_dict_value_82 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_83 = const_int_pos_16384;
    tmp_dict_key_83 = const_str_plain_maxexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_83, tmp_dict_value_83 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_84 = const_int_pos_63;
    tmp_dict_key_84 = const_str_plain_it;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_84, tmp_dict_value_84 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_85 = const_int_pos_15;
    tmp_dict_key_85 = const_str_plain_iexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_85, tmp_dict_value_85 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_86 = const_int_pos_2;
    tmp_dict_key_86 = const_str_plain_ibeta;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_86, tmp_dict_value_86 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_87 = const_int_pos_5;
    tmp_dict_key_87 = const_str_plain_irnd;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_87, tmp_dict_value_87 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_88 = const_int_0;
    tmp_dict_key_88 = const_str_plain_ngrd;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_88, tmp_dict_value_88 );
    assert( !(tmp_res != 0) );
    tmp_called_name_50 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_50 == NULL ))
    {
        tmp_called_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_50 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }

    tmp_called_name_51 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_51 == NULL ))
    {
        tmp_called_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_51 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 201;
    tmp_args_element_name_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, &PyTuple_GET_ITEM( const_tuple_int_neg_63_tuple, 0 ) );

    if ( tmp_args_element_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_dict_value_89 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_dict_value_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_89 = const_str_plain_eps;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_89, tmp_dict_value_89 );
    Py_DECREF( tmp_dict_value_89 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_90 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__epsneg_f80 );

    if (unlikely( tmp_dict_value_90 == NULL ))
    {
        tmp_dict_value_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__epsneg_f80 );
    }

    if ( tmp_dict_value_90 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_epsneg_f80" );
        exception_tb = NULL;

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_90 = const_str_plain_epsneg;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_90, tmp_dict_value_90 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_91 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__huge_f80 );

    if (unlikely( tmp_dict_value_91 == NULL ))
    {
        tmp_dict_value_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__huge_f80 );
    }

    if ( tmp_dict_value_91 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_huge_f80" );
        exception_tb = NULL;

        exception_lineno = 203;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_91 = const_str_plain_huge;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_91, tmp_dict_value_91 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_92 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__tiny_f80 );

    if (unlikely( tmp_dict_value_92 == NULL ))
    {
        tmp_dict_value_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__tiny_f80 );
    }

    if ( tmp_dict_value_92 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_tiny_f80" );
        exception_tb = NULL;

        exception_lineno = 204;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_92 = const_str_plain_tiny;
    tmp_res = PyDict_SetItem( tmp_kw_name_7, tmp_dict_key_92, tmp_dict_value_92 );
    assert( !(tmp_res != 0) );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 191;
    tmp_assign_source_63 = CALL_FUNCTION( tmp_called_name_49, tmp_args_name_5, tmp_kw_name_7 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_7 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float80_ma, tmp_assign_source_63 );
    tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_umath );

    if (unlikely( tmp_hasattr_source_1 == NULL ))
    {
        tmp_hasattr_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umath );
    }

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "umath" );
        exception_tb = NULL;

        exception_lineno = 211;

        goto frame_exception_exit_1;
    }

    tmp_hasattr_attr_1 = const_str_plain_nextafter;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;

        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_umath );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umath );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "umath" );
        exception_tb = NULL;

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }

    tmp_called_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_nextafter );
    if ( tmp_called_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;

        goto frame_exception_exit_1;
    }
    tmp_called_name_53 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_53 == NULL ))
    {
        tmp_called_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_53 == NULL )
    {
        Py_DECREF( tmp_called_name_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_27 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_inf );

    if (unlikely( tmp_args_element_name_27 == NULL ))
    {
        tmp_args_element_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inf );
    }

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "inf" );
        exception_tb = NULL;

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
    }

    if ( tmp_args_element_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_52 );

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }
    tmp_called_name_54 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_54 == NULL ))
    {
        tmp_called_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_52 );
        Py_DECREF( tmp_args_element_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 210;
    tmp_args_element_name_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_54, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_args_element_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_52 );
        Py_DECREF( tmp_args_element_name_26 );

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_28 };
        tmp_assign_source_64 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_52, call_args );
    }

    Py_DECREF( tmp_called_name_52 );
    Py_DECREF( tmp_args_element_name_26 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;

        goto frame_exception_exit_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float64_ma );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float64_ma );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float64_ma" );
        exception_tb = NULL;

        exception_lineno = 212;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_64 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_huge );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;

        goto frame_exception_exit_1;
    }
    condexpr_end_2:;
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__huge_dd, tmp_assign_source_64 );
    tmp_called_name_55 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_MachArLike );

    if (unlikely( tmp_called_name_55 == NULL ))
    {
        tmp_called_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MachArLike );
    }

    if ( tmp_called_name_55 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "MachArLike" );
        exception_tb = NULL;

        exception_lineno = 213;

        goto frame_exception_exit_1;
    }

    tmp_args_name_6 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 213;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_6 );
    tmp_kw_name_8 = _PyDict_NewPresized( 13 );
    tmp_dict_value_93 = const_int_neg_105;
    tmp_dict_key_93 = const_str_plain_machep;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_93, tmp_dict_value_93 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_94 = const_int_neg_106;
    tmp_dict_key_94 = const_str_plain_negep;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_94, tmp_dict_value_94 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_95 = const_int_neg_1022;
    tmp_dict_key_95 = const_str_plain_minexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_95, tmp_dict_value_95 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_96 = const_int_pos_1024;
    tmp_dict_key_96 = const_str_plain_maxexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_96, tmp_dict_value_96 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_97 = const_int_pos_105;
    tmp_dict_key_97 = const_str_plain_it;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_97, tmp_dict_value_97 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_98 = const_int_pos_11;
    tmp_dict_key_98 = const_str_plain_iexp;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_98, tmp_dict_value_98 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_99 = const_int_pos_2;
    tmp_dict_key_99 = const_str_plain_ibeta;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_99, tmp_dict_value_99 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_100 = const_int_pos_5;
    tmp_dict_key_100 = const_str_plain_irnd;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_100, tmp_dict_value_100 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_101 = const_int_0;
    tmp_dict_key_101 = const_str_plain_ngrd;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_101, tmp_dict_value_101 );
    assert( !(tmp_res != 0) );
    tmp_called_name_56 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_56 == NULL ))
    {
        tmp_called_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_56 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 223;

        goto frame_exception_exit_1;
    }

    tmp_called_name_57 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_57 == NULL ))
    {
        tmp_called_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_57 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 223;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 223;
    tmp_args_element_name_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_57, &PyTuple_GET_ITEM( const_tuple_int_neg_105_tuple, 0 ) );

    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 223;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_dict_value_102 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, call_args );
    }

    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_dict_value_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 223;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_102 = const_str_plain_eps;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_102, tmp_dict_value_102 );
    Py_DECREF( tmp_dict_value_102 );
    assert( !(tmp_res != 0) );
    tmp_called_name_58 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_58 == NULL ))
    {
        tmp_called_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_58 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }

    tmp_called_name_59 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_59 == NULL ))
    {
        tmp_called_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_59 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 224;
    tmp_args_element_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_59, &PyTuple_GET_ITEM( const_tuple_int_neg_106_tuple, 0 ) );

    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_dict_value_103 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_58, call_args );
    }

    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_dict_value_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_103 = const_str_plain_epsneg;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_103, tmp_dict_value_103 );
    Py_DECREF( tmp_dict_value_103 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_104 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__huge_dd );

    if (unlikely( tmp_dict_value_104 == NULL ))
    {
        tmp_dict_value_104 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__huge_dd );
    }

    if ( tmp_dict_value_104 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_huge_dd" );
        exception_tb = NULL;

        exception_lineno = 225;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_104 = const_str_plain_huge;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_104, tmp_dict_value_104 );
    assert( !(tmp_res != 0) );
    tmp_called_name_60 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_exp2 );

    if (unlikely( tmp_called_name_60 == NULL ))
    {
        tmp_called_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_exp2 );
    }

    if ( tmp_called_name_60 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "exp2" );
        exception_tb = NULL;

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }

    tmp_called_name_61 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__ld );

    if (unlikely( tmp_called_name_61 == NULL ))
    {
        tmp_called_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ld );
    }

    if ( tmp_called_name_61 == NULL )
    {
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ld" );
        exception_tb = NULL;

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }

    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 226;
    tmp_args_element_name_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, &PyTuple_GET_ITEM( const_tuple_int_neg_1022_tuple, 0 ) );

    if ( tmp_args_element_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_dict_value_105 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_60, call_args );
    }

    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_dict_value_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_8 );

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_105 = const_str_plain_tiny;
    tmp_res = PyDict_SetItem( tmp_kw_name_8, tmp_dict_key_105, tmp_dict_value_105 );
    Py_DECREF( tmp_dict_value_105 );
    assert( !(tmp_res != 0) );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 213;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_55, tmp_args_name_6, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_6 );
    Py_DECREF( tmp_kw_name_8 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_dd_ma, tmp_assign_source_65 );
    tmp_assign_source_66 = _PyDict_NewPresized( 7 );
    tmp_dict_value_106 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float64_ma );

    if (unlikely( tmp_dict_value_106 == NULL ))
    {
        tmp_dict_value_106 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float64_ma );
    }

    if ( tmp_dict_value_106 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float64_ma" );
        exception_tb = NULL;

        exception_lineno = 234;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_106 = const_str_digest_9d407aba079586ddc2565511c907906b;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_106, tmp_dict_value_106 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_107 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float32_ma );

    if (unlikely( tmp_dict_value_107 == NULL ))
    {
        tmp_dict_value_107 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float32_ma );
    }

    if ( tmp_dict_value_107 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float32_ma" );
        exception_tb = NULL;

        exception_lineno = 235;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_107 = const_str_digest_eaaa9394d408576376e7108c86542536;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_107, tmp_dict_value_107 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_108 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float16_ma );

    if (unlikely( tmp_dict_value_108 == NULL ))
    {
        tmp_dict_value_108 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float16_ma );
    }

    if ( tmp_dict_value_108 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float16_ma" );
        exception_tb = NULL;

        exception_lineno = 236;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_108 = const_str_digest_57aa1c044b869aee3cb076817c47bad3;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_108, tmp_dict_value_108 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_109 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float80_ma );

    if (unlikely( tmp_dict_value_109 == NULL ))
    {
        tmp_dict_value_109 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float80_ma );
    }

    if ( tmp_dict_value_109 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float80_ma" );
        exception_tb = NULL;

        exception_lineno = 238;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_109 = const_str_digest_f6e50f1e539dbc1212fdc62e9a8dbcb0;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_109, tmp_dict_value_109 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_110 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_dd_ma );

    if (unlikely( tmp_dict_value_110 == NULL ))
    {
        tmp_dict_value_110 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_dd_ma );
    }

    if ( tmp_dict_value_110 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float_dd_ma" );
        exception_tb = NULL;

        exception_lineno = 241;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_110 = const_str_digest_c953c461ebc82ab94922f9cdf925a15f;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_110, tmp_dict_value_110 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_111 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float_dd_ma );

    if (unlikely( tmp_dict_value_111 == NULL ))
    {
        tmp_dict_value_111 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float_dd_ma );
    }

    if ( tmp_dict_value_111 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float_dd_ma" );
        exception_tb = NULL;

        exception_lineno = 244;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_111 = const_str_digest_6da1ae55ed72337372d367d607b09d18;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_111, tmp_dict_value_111 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_112 = GET_STRING_DICT_VALUE( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__float128_ma );

    if (unlikely( tmp_dict_value_112 == NULL ))
    {
        tmp_dict_value_112 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__float128_ma );
    }

    if ( tmp_dict_value_112 == NULL )
    {
        Py_DECREF( tmp_assign_source_66 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_float128_ma" );
        exception_tb = NULL;

        exception_lineno = 247;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_112 = const_str_digest_8b386aa245a595a957b1bc2ae03f1a45;
    tmp_res = PyDict_SetItem( tmp_assign_source_66, tmp_dict_key_112, tmp_dict_value_112 );
    assert( !(tmp_res != 0) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__KNOWN_TYPES, tmp_assign_source_66 );
    tmp_assign_source_67 = MAKE_FUNCTION_numpy$core$getlimits$$$function_9__get_machar(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__get_machar, tmp_assign_source_67 );
    tmp_assign_source_68 = MAKE_FUNCTION_numpy$core$getlimits$$$function_10__discovered_machar(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain__discovered_machar, tmp_assign_source_68 );
    // Tried code:
    tmp_assign_source_70 = const_str_digest_b8eaccad553858ca41bd501c0a17651e;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_70 );
    outline_1_var___module__ = tmp_assign_source_70;

    tmp_assign_source_71 = const_str_digest_7539c6308de2db2764b97103d1120c88;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_71 );
    outline_1_var___doc__ = tmp_assign_source_71;

    tmp_assign_source_72 = PyDict_New();
    assert( outline_1_var__finfo_cache == NULL );
    outline_1_var__finfo_cache = tmp_assign_source_72;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4eb771f6908b6f61299821cf47e6118c_3, codeobj_4eb771f6908b6f61299821cf47e6118c, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4eb771f6908b6f61299821cf47e6118c_3 = cache_frame_4eb771f6908b6f61299821cf47e6118c_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4eb771f6908b6f61299821cf47e6118c_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4eb771f6908b6f61299821cf47e6118c_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_staticmethod_arg_1 = MAKE_FUNCTION_numpy$core$getlimits$$$function_11___new__(  );
    tmp_assign_source_73 = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
    Py_DECREF( tmp_staticmethod_arg_1 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_2 = "oooNNNN";
        goto frame_exception_exit_3;
    }
    assert( outline_1_var___new__ == NULL );
    outline_1_var___new__ = tmp_assign_source_73;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eb771f6908b6f61299821cf47e6118c_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4eb771f6908b6f61299821cf47e6118c_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4eb771f6908b6f61299821cf47e6118c_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4eb771f6908b6f61299821cf47e6118c_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4eb771f6908b6f61299821cf47e6118c_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4eb771f6908b6f61299821cf47e6118c_3,
        type_description_2,
        outline_1_var___module__,
        outline_1_var___doc__,
        outline_1_var__finfo_cache,
        outline_1_var___new__,
        NULL,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_4eb771f6908b6f61299821cf47e6118c_3 == cache_frame_4eb771f6908b6f61299821cf47e6118c_3 )
    {
        Py_DECREF( frame_4eb771f6908b6f61299821cf47e6118c_3 );
    }
    cache_frame_4eb771f6908b6f61299821cf47e6118c_3 = NULL;

    assertFrameObject( frame_4eb771f6908b6f61299821cf47e6118c_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_13;
    skip_nested_handling_2:;
    tmp_assign_source_74 = MAKE_FUNCTION_numpy$core$getlimits$$$function_12__init(  );
    assert( outline_1_var__init == NULL );
    outline_1_var__init = tmp_assign_source_74;

    tmp_assign_source_75 = MAKE_FUNCTION_numpy$core$getlimits$$$function_13___str__(  );
    assert( outline_1_var___str__ == NULL );
    outline_1_var___str__ = tmp_assign_source_75;

    tmp_assign_source_76 = MAKE_FUNCTION_numpy$core$getlimits$$$function_14___repr__(  );
    assert( outline_1_var___repr__ == NULL );
    outline_1_var___repr__ = tmp_assign_source_76;

    tmp_outline_return_value_2 = _PyDict_NewPresized( 7 );
    tmp_dict_value_113 = outline_1_var___module__;

    CHECK_OBJECT( tmp_dict_value_113 );
    tmp_dict_key_113 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_113, tmp_dict_value_113 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_114 = outline_1_var___doc__;

    CHECK_OBJECT( tmp_dict_value_114 );
    tmp_dict_key_114 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_114, tmp_dict_value_114 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_115 = outline_1_var__finfo_cache;

    CHECK_OBJECT( tmp_dict_value_115 );
    tmp_dict_key_115 = const_str_plain__finfo_cache;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_115, tmp_dict_value_115 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_116 = outline_1_var___new__;

    CHECK_OBJECT( tmp_dict_value_116 );
    tmp_dict_key_116 = const_str_plain___new__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_116, tmp_dict_value_116 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_117 = outline_1_var__init;

    CHECK_OBJECT( tmp_dict_value_117 );
    tmp_dict_key_117 = const_str_plain__init;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_117, tmp_dict_value_117 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_118 = outline_1_var___str__;

    CHECK_OBJECT( tmp_dict_value_118 );
    tmp_dict_key_118 = const_str_plain___str__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_118, tmp_dict_value_118 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_119 = outline_1_var___repr__;

    CHECK_OBJECT( tmp_dict_value_119 );
    tmp_dict_key_119 = const_str_plain___repr__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_2, tmp_dict_key_119, tmp_dict_value_119 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__finfo_cache );
    Py_DECREF( outline_1_var__finfo_cache );
    outline_1_var__finfo_cache = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___new__ );
    Py_DECREF( outline_1_var___new__ );
    outline_1_var___new__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var__init );
    Py_DECREF( outline_1_var__init );
    outline_1_var__init = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___str__ );
    Py_DECREF( outline_1_var___str__ );
    outline_1_var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___repr__ );
    Py_DECREF( outline_1_var___repr__ );
    outline_1_var___repr__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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

    CHECK_OBJECT( (PyObject *)outline_1_var__finfo_cache );
    Py_DECREF( outline_1_var__finfo_cache );
    outline_1_var__finfo_cache = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 305;
    goto try_except_handler_12;
    outline_result_2:;
    tmp_assign_source_69 = tmp_outline_return_value_2;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_69;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_8 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_77 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;

        goto try_except_handler_12;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_77 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_77 );
    condexpr_end_3:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_77;

    tmp_called_name_62 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_62 );
    tmp_args_element_name_32 = const_str_plain_finfo;
    tmp_args_element_name_33 = const_tuple_type_object_tuple;
    tmp_args_element_name_34 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_34 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 305;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33, tmp_args_element_name_34 };
        tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_62, call_args );
    }

    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_78;

    goto try_end_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    tmp_assign_source_79 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_79 );
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_79 );
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
    tmp_assign_source_81 = const_str_digest_b8eaccad553858ca41bd501c0a17651e;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_81 );
    outline_2_var___module__ = tmp_assign_source_81;

    tmp_assign_source_82 = const_str_digest_c9daff2734dd6db50e0c7d322a45e9de;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_82 );
    outline_2_var___doc__ = tmp_assign_source_82;

    tmp_assign_source_83 = PyDict_New();
    assert( outline_2_var__min_vals == NULL );
    outline_2_var__min_vals = tmp_assign_source_83;

    tmp_assign_source_84 = PyDict_New();
    assert( outline_2_var__max_vals == NULL );
    outline_2_var__max_vals = tmp_assign_source_84;

    tmp_assign_source_85 = MAKE_FUNCTION_numpy$core$getlimits$$$function_15___init__(  );
    assert( outline_2_var___init__ == NULL );
    outline_2_var___init__ = tmp_assign_source_85;

    tmp_assign_source_86 = MAKE_FUNCTION_numpy$core$getlimits$$$function_16_min(  );
    assert( outline_2_var_min == NULL );
    outline_2_var_min = tmp_assign_source_86;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1f451b817a40df4f348a68987218b960_4, codeobj_1f451b817a40df4f348a68987218b960, module_numpy$core$getlimits, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1f451b817a40df4f348a68987218b960_4 = cache_frame_1f451b817a40df4f348a68987218b960_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1f451b817a40df4f348a68987218b960_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1f451b817a40df4f348a68987218b960_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_63 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_35 = outline_2_var_min;

    CHECK_OBJECT( tmp_args_element_name_35 );
    frame_1f451b817a40df4f348a68987218b960_4->m_frame.f_lineno = 530;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_assign_source_87 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_63, call_args );
    }

    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        type_description_2 = "ooooooNNN";
        goto frame_exception_exit_4;
    }
    {
        PyObject *old = outline_2_var_min;
        assert( old != NULL );
        outline_2_var_min = tmp_assign_source_87;
        Py_DECREF( old );
    }

    tmp_assign_source_88 = MAKE_FUNCTION_numpy$core$getlimits$$$function_17_max(  );
    assert( outline_2_var_max == NULL );
    outline_2_var_max = tmp_assign_source_88;

    tmp_called_name_64 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_36 = outline_2_var_max;

    CHECK_OBJECT( tmp_args_element_name_36 );
    frame_1f451b817a40df4f348a68987218b960_4->m_frame.f_lineno = 544;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_64, call_args );
    }

    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        type_description_2 = "oooooooNN";
        goto frame_exception_exit_4;
    }
    {
        PyObject *old = outline_2_var_max;
        assert( old != NULL );
        outline_2_var_max = tmp_assign_source_89;
        Py_DECREF( old );
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f451b817a40df4f348a68987218b960_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1f451b817a40df4f348a68987218b960_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1f451b817a40df4f348a68987218b960_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1f451b817a40df4f348a68987218b960_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1f451b817a40df4f348a68987218b960_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1f451b817a40df4f348a68987218b960_4,
        type_description_2,
        outline_2_var___module__,
        outline_2_var___doc__,
        outline_2_var__min_vals,
        outline_2_var__max_vals,
        outline_2_var___init__,
        outline_2_var_min,
        outline_2_var_max,
        NULL,
        NULL
    );


    // Release cached frame.
    if ( frame_1f451b817a40df4f348a68987218b960_4 == cache_frame_1f451b817a40df4f348a68987218b960_4 )
    {
        Py_DECREF( frame_1f451b817a40df4f348a68987218b960_4 );
    }
    cache_frame_1f451b817a40df4f348a68987218b960_4 = NULL;

    assertFrameObject( frame_1f451b817a40df4f348a68987218b960_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_15;
    skip_nested_handling_3:;
    tmp_assign_source_90 = MAKE_FUNCTION_numpy$core$getlimits$$$function_18___str__(  );
    assert( outline_2_var___str__ == NULL );
    outline_2_var___str__ = tmp_assign_source_90;

    tmp_assign_source_91 = MAKE_FUNCTION_numpy$core$getlimits$$$function_19___repr__(  );
    assert( outline_2_var___repr__ == NULL );
    outline_2_var___repr__ = tmp_assign_source_91;

    tmp_outline_return_value_3 = _PyDict_NewPresized( 9 );
    tmp_dict_value_120 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_120 );
    tmp_dict_key_120 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_120, tmp_dict_value_120 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_121 = outline_2_var___doc__;

    CHECK_OBJECT( tmp_dict_value_121 );
    tmp_dict_key_121 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_121, tmp_dict_value_121 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_122 = outline_2_var__min_vals;

    CHECK_OBJECT( tmp_dict_value_122 );
    tmp_dict_key_122 = const_str_plain__min_vals;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_122, tmp_dict_value_122 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_123 = outline_2_var__max_vals;

    CHECK_OBJECT( tmp_dict_value_123 );
    tmp_dict_key_123 = const_str_plain__max_vals;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_123, tmp_dict_value_123 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_124 = outline_2_var___init__;

    CHECK_OBJECT( tmp_dict_value_124 );
    tmp_dict_key_124 = const_str_plain___init__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_124, tmp_dict_value_124 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_125 = outline_2_var_min;

    CHECK_OBJECT( tmp_dict_value_125 );
    tmp_dict_key_125 = const_str_plain_min;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_125, tmp_dict_value_125 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_126 = outline_2_var_max;

    CHECK_OBJECT( tmp_dict_value_126 );
    tmp_dict_key_126 = const_str_plain_max;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_126, tmp_dict_value_126 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_127 = outline_2_var___str__;

    CHECK_OBJECT( tmp_dict_value_127 );
    tmp_dict_key_127 = const_str_plain___str__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_127, tmp_dict_value_127 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_128 = outline_2_var___repr__;

    CHECK_OBJECT( tmp_dict_value_128 );
    tmp_dict_key_128 = const_str_plain___repr__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_3, tmp_dict_key_128, tmp_dict_value_128 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__min_vals );
    Py_DECREF( outline_2_var__min_vals );
    outline_2_var__min_vals = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__max_vals );
    Py_DECREF( outline_2_var__max_vals );
    outline_2_var__max_vals = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_min );
    Py_DECREF( outline_2_var_min );
    outline_2_var_min = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_max );
    Py_DECREF( outline_2_var_max );
    outline_2_var_max = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___str__ );
    Py_DECREF( outline_2_var___str__ );
    outline_2_var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___repr__ );
    Py_DECREF( outline_2_var___repr__ );
    outline_2_var___repr__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__min_vals );
    Py_DECREF( outline_2_var__min_vals );
    outline_2_var__min_vals = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var__max_vals );
    Py_DECREF( outline_2_var__max_vals );
    outline_2_var__max_vals = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___init__ );
    Py_DECREF( outline_2_var___init__ );
    outline_2_var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var_min );
    Py_DECREF( outline_2_var_min );
    outline_2_var_min = NULL;

    Py_XDECREF( outline_2_var_max );
    outline_2_var_max = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$getlimits );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 455;
    goto try_except_handler_14;
    outline_result_3:;
    tmp_assign_source_80 = tmp_outline_return_value_3;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_80;

    tmp_compare_left_9 = const_str_plain___metaclass__;
    tmp_compare_right_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_9 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_92 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;

        goto try_except_handler_14;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_92 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_assign_source_92 );
    condexpr_end_4:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_92;

    tmp_called_name_65 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_65 );
    tmp_args_element_name_37 = const_str_plain_iinfo;
    tmp_args_element_name_38 = const_tuple_type_object_tuple;
    tmp_args_element_name_39 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_39 );
    frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame.f_lineno = 455;
    {
        PyObject *call_args[] = { tmp_args_element_name_37, tmp_args_element_name_38, tmp_args_element_name_39 };
        tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_65, call_args );
    }

    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_93;

    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_643f15fd7521b115cd0b0b1ba783eb14 );
#endif
    popFrameStack();

    assertFrameObject( frame_643f15fd7521b115cd0b0b1ba783eb14 );

    goto frame_no_exception_4;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_643f15fd7521b115cd0b0b1ba783eb14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_643f15fd7521b115cd0b0b1ba783eb14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_643f15fd7521b115cd0b0b1ba783eb14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_643f15fd7521b115cd0b0b1ba783eb14, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    tmp_assign_source_94 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_94 );
    UPDATE_STRING_DICT0( moduledict_numpy$core$getlimits, (Nuitka_StringObject *)const_str_plain_iinfo, tmp_assign_source_94 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$core$getlimits );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
