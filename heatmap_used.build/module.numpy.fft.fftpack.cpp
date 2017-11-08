/* Generated code for Python source for module 'numpy.fft.fftpack'
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

/* The _module_numpy$fft$fftpack is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$fftpack;
PyDictObject *moduledict_numpy$fft$fftpack;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_plain_fftpack_lite;
extern PyObject *const_str_plain_max_item_count;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain__raw_fftnd;
static PyObject *const_str_plain_invreal;
static PyObject *const_str_digest_01f1066a51923fba70f30d308247f079;
static PyObject *const_str_digest_72f01e533c77be794cb83caa076fd016;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_23098722ef505adb63be2b05fe120fdd;
extern PyObject *const_str_plain_output;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_zeros;
static PyObject *const_tuple_str_plain_norm_tuple;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_index;
static PyObject *const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple;
static PyObject *const_str_digest_0e484a7e341d275f185007a474ec79cb;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_function;
static PyObject *const_str_plain_hfft;
static PyObject *const_tuple_75ec54f212a0137069deccc939a914f5_tuple;
static PyObject *const_str_plain_cfftb;
static PyObject *const_str_plain_cfftf;
static PyObject *const_str_plain_cffti;
static PyObject *const_str_digest_53f6110acd950a9eb6f9eef15b0f9daa;
static PyObject *const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_digest_950dc64ef6772674dbea217abe8be8b3;
static PyObject *const_list_60f473887d8c78e2f768e087222cf620_list;
static PyObject *const_str_digest_24d3f300976d1f0b4094bd13ac30f8b0;
static PyObject *const_str_digest_908e64f8abe07e7ca762be78e2dd2d4d;
static PyObject *const_str_plain_fft_cache;
static PyObject *const_str_plain__raw_fft;
extern PyObject *const_str_plain_fftpack;
extern PyObject *const_int_neg_2;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
static PyObject *const_str_plain_rfft;
static PyObject *const_str_plain_ortho;
static PyObject *const_str_digest_e2e62bdc9ea89915ae0ff9e1b643f817;
static PyObject *const_str_plain__unitary;
static PyObject *const_tuple_none_str_plain_ortho_tuple;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_digest_9ff4852d28cd7861483c7f88480ddc86;
static PyObject *const_str_digest_5c9c7abd14e51c25cd57c2d5a1659d8b;
static PyObject *const_str_plain_rfftn;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_ifft;
static PyObject *const_dict_c42c09a7ae1230df9bd4f49e205e4c00;
static PyObject *const_str_digest_5b8d182c21b80ce6cc93893e9bfd60b8;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_tuple_int_neg_2_int_neg_1_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e3b57a155d14f7030bedf77d7a70ca1e;
extern PyObject *const_list_slice_none_none_none_list;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_fft2;
extern PyObject *const_str_plain_array;
static PyObject *const_str_plain_unitary;
extern PyObject *const_str_plain_fftn;
static PyObject *const_str_plain__cook_nd_args;
extern PyObject *const_str_plain__FFTCache;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_swapaxes;
static PyObject *const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple;
static PyObject *const_str_plain_itl;
extern PyObject *const_str_plain_astype;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple;
extern PyObject *const_str_plain_put_twiddle_factors;
static PyObject *const_str_plain_irfft2;
static PyObject *const_str_plain__fft_cache;
static PyObject *const_str_digest_380dd4ace92138038f5afbeee50a20b1;
static PyObject *const_str_plain_work_function;
extern PyObject *const_str_plain_ifft2;
static PyObject *const_str_plain_ii;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_int_pos_32;
static PyObject *const_str_digest_c0d490a82d99d03062bec8127224c04c;
extern PyObject *const_str_plain_reverse;
static PyObject *const_dict_dd45c77b755c75255009fd804f504c08;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_none_int_neg_1_none_tuple;
static PyObject *const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple;
static PyObject *const_str_plain_irfftn;
static PyObject *const_tuple_none_none_int_0_tuple;
static PyObject *const_str_digest_242e8c397d863f4678e3108a3c04f924;
static PyObject *const_str_plain__real_fft_cache;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_axes;
static PyObject *const_tuple_str_plain__FFTCache_tuple;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_max_size_in_mb;
static PyObject *const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_z;
static PyObject *const_str_plain_ihfft;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_ifftn;
static PyObject *const_str_plain_rffti;
static PyObject *const_str_plain_irfft;
static PyObject *const_str_digest_2d1e18dbc777b58158ca02d4c734dde4;
static PyObject *const_tuple_str_plain_fftpack_lite_tuple;
static PyObject *const_str_plain_init_function;
static PyObject *const_str_plain_shapeless;
static PyObject *const_str_digest_dbc10c3e332a8d966e8c779c64feee7f;
extern PyObject *const_str_plain_fft;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_wsave;
static PyObject *const_str_plain_rfftf;
extern PyObject *const_str_plain_helper;
static PyObject *const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple;
static PyObject *const_str_plain_rfftb;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_pop_twiddle_factors;
extern PyObject *const_str_plain___all__;
static PyObject *const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_ad30867cb50db197c788d8d9559403d4;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
static PyObject *const_str_plain_rfft2;
extern PyObject *const_tuple_type_complex_tuple;
static PyObject *const_str_digest_67a439b64216fd79a420034aec6214a2;
static PyObject *const_dict_a02eb3206004e1dededd932dea2baa88;
static PyObject *const_dict_073d0317252e4445514a1773373206fe;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_fftpack_lite = UNSTREAM_STRING( &constant_bin[ 553496 ], 12, 1 );
    const_str_plain__raw_fftnd = UNSTREAM_STRING( &constant_bin[ 553508 ], 10, 1 );
    const_str_plain_invreal = UNSTREAM_STRING( &constant_bin[ 553518 ], 7, 1 );
    const_str_digest_01f1066a51923fba70f30d308247f079 = UNSTREAM_STRING( &constant_bin[ 553525 ], 3263, 0 );
    const_str_digest_72f01e533c77be794cb83caa076fd016 = UNSTREAM_STRING( &constant_bin[ 556788 ], 774, 0 );
    const_str_digest_23098722ef505adb63be2b05fe120fdd = UNSTREAM_STRING( &constant_bin[ 557562 ], 17, 0 );
    const_tuple_str_plain_norm_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_norm_tuple, 0, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_plain_unitary = UNSTREAM_STRING( &constant_bin[ 557579 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );
    const_str_digest_0e484a7e341d275f185007a474ec79cb = UNSTREAM_STRING( &constant_bin[ 557586 ], 3447, 0 );
    const_str_plain_hfft = UNSTREAM_STRING( &constant_bin[ 561033 ], 4, 1 );
    const_tuple_75ec54f212a0137069deccc939a914f5_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 4, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_plain_cfftb = UNSTREAM_STRING( &constant_bin[ 561037 ], 5, 1 );
    const_str_plain_cfftf = UNSTREAM_STRING( &constant_bin[ 561042 ], 5, 1 );
    const_str_plain_cffti = UNSTREAM_STRING( &constant_bin[ 561047 ], 5, 1 );
    const_str_digest_53f6110acd950a9eb6f9eef15b0f9daa = UNSTREAM_STRING( &constant_bin[ 561052 ], 3758, 0 );
    const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_digest_950dc64ef6772674dbea217abe8be8b3 = UNSTREAM_STRING( &constant_bin[ 564810 ], 3492, 0 );
    const_list_60f473887d8c78e2f768e087222cf620_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    const_str_plain_rfft = UNSTREAM_STRING( &constant_bin[ 553716 ], 4, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 2, const_str_plain_rfft ); Py_INCREF( const_str_plain_rfft );
    const_str_plain_irfft = UNSTREAM_STRING( &constant_bin[ 553745 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 3, const_str_plain_irfft ); Py_INCREF( const_str_plain_irfft );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 4, const_str_plain_hfft ); Py_INCREF( const_str_plain_hfft );
    const_str_plain_ihfft = UNSTREAM_STRING( &constant_bin[ 568302 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 5, const_str_plain_ihfft ); Py_INCREF( const_str_plain_ihfft );
    const_str_plain_rfftn = UNSTREAM_STRING( &constant_bin[ 555750 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 6, const_str_plain_rfftn ); Py_INCREF( const_str_plain_rfftn );
    const_str_plain_irfftn = UNSTREAM_STRING( &constant_bin[ 555749 ], 6, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 7, const_str_plain_irfftn ); Py_INCREF( const_str_plain_irfftn );
    const_str_plain_rfft2 = UNSTREAM_STRING( &constant_bin[ 555683 ], 5, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 8, const_str_plain_rfft2 ); Py_INCREF( const_str_plain_rfft2 );
    const_str_plain_irfft2 = UNSTREAM_STRING( &constant_bin[ 555682 ], 6, 1 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 9, const_str_plain_irfft2 ); Py_INCREF( const_str_plain_irfft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 10, const_str_plain_fft2 ); Py_INCREF( const_str_plain_fft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 11, const_str_plain_ifft2 ); Py_INCREF( const_str_plain_ifft2 );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 12, const_str_plain_fftn ); Py_INCREF( const_str_plain_fftn );
    PyList_SET_ITEM( const_list_60f473887d8c78e2f768e087222cf620_list, 13, const_str_plain_ifftn ); Py_INCREF( const_str_plain_ifftn );
    const_str_digest_24d3f300976d1f0b4094bd13ac30f8b0 = UNSTREAM_STRING( &constant_bin[ 568307 ], 3630, 0 );
    const_str_digest_908e64f8abe07e7ca762be78e2dd2d4d = UNSTREAM_STRING( &constant_bin[ 571937 ], 763, 0 );
    const_str_plain_fft_cache = UNSTREAM_STRING( &constant_bin[ 572700 ], 9, 1 );
    const_str_plain__raw_fft = UNSTREAM_STRING( &constant_bin[ 553508 ], 8, 1 );
    const_str_digest_4668369e132281bb3e0ee274b05ac5ba = UNSTREAM_STRING( &constant_bin[ 572709 ], 49, 0 );
    const_str_plain_ortho = UNSTREAM_STRING( &constant_bin[ 554848 ], 5, 1 );
    const_str_digest_e2e62bdc9ea89915ae0ff9e1b643f817 = UNSTREAM_STRING( &constant_bin[ 572758 ], 2970, 0 );
    const_str_plain__unitary = UNSTREAM_STRING( &constant_bin[ 575728 ], 8, 1 );
    const_tuple_none_str_plain_ortho_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_ortho_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_str_plain_ortho_tuple, 1, const_str_plain_ortho ); Py_INCREF( const_str_plain_ortho );
    const_str_digest_9ff4852d28cd7861483c7f88480ddc86 = UNSTREAM_STRING( &constant_bin[ 575736 ], 2992, 0 );
    const_str_digest_5c9c7abd14e51c25cd57c2d5a1659d8b = UNSTREAM_STRING( &constant_bin[ 578728 ], 3062, 0 );
    const_dict_c42c09a7ae1230df9bd4f49e205e4c00 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_c42c09a7ae1230df9bd4f49e205e4c00, const_str_plain_dtype, (PyObject *)&PyFloat_Type );
    PyDict_SetItem( const_dict_c42c09a7ae1230df9bd4f49e205e4c00, const_str_plain_copy, Py_True );
    assert( PyDict_Size( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 ) == 2 );
    const_str_digest_5b8d182c21b80ce6cc93893e9bfd60b8 = UNSTREAM_STRING( &constant_bin[ 581790 ], 3359, 0 );
    const_str_digest_e3b57a155d14f7030bedf77d7a70ca1e = UNSTREAM_STRING( &constant_bin[ 585149 ], 2623, 0 );
    const_str_plain__cook_nd_args = UNSTREAM_STRING( &constant_bin[ 587772 ], 13, 1 );
    const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    const_str_plain_ii = UNSTREAM_STRING( &constant_bin[ 85843 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_str_plain_itl = UNSTREAM_STRING( &constant_bin[ 16392 ], 3, 1 );
    const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 3, const_str_plain_invreal ); Py_INCREF( const_str_plain_invreal );
    const_str_plain_shapeless = UNSTREAM_STRING( &constant_bin[ 587785 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, const_str_plain_shapeless ); Py_INCREF( const_str_plain_shapeless );
    const_str_plain__fft_cache = UNSTREAM_STRING( &constant_bin[ 587794 ], 10, 1 );
    const_str_digest_380dd4ace92138038f5afbeee50a20b1 = UNSTREAM_STRING( &constant_bin[ 587804 ], 26, 0 );
    const_str_plain_work_function = UNSTREAM_STRING( &constant_bin[ 587830 ], 13, 1 );
    const_str_digest_c0d490a82d99d03062bec8127224c04c = UNSTREAM_STRING( &constant_bin[ 587843 ], 1773, 0 );
    const_dict_dd45c77b755c75255009fd804f504c08 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_dd45c77b755c75255009fd804f504c08, const_str_plain_invreal, const_int_pos_1 );
    assert( PyDict_Size( const_dict_dd45c77b755c75255009fd804f504c08 ) == 1 );
    const_tuple_none_int_neg_1_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 1, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_none_int_neg_1_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    const_str_plain_init_function = UNSTREAM_STRING( &constant_bin[ 589616 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 3, const_str_plain_init_function ); Py_INCREF( const_str_plain_init_function );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 4, const_str_plain_work_function ); Py_INCREF( const_str_plain_work_function );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 5, const_str_plain_fft_cache ); Py_INCREF( const_str_plain_fft_cache );
    const_str_plain_wsave = UNSTREAM_STRING( &constant_bin[ 589629 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 6, const_str_plain_wsave ); Py_INCREF( const_str_plain_wsave );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 7, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 8, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 9, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 10, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_tuple_none_none_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_digest_242e8c397d863f4678e3108a3c04f924 = UNSTREAM_STRING( &constant_bin[ 589634 ], 49, 0 );
    const_str_plain__real_fft_cache = UNSTREAM_STRING( &constant_bin[ 589683 ], 15, 1 );
    const_tuple_str_plain__FFTCache_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__FFTCache_tuple, 0, const_str_plain__FFTCache ); Py_INCREF( const_str_plain__FFTCache );
    const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 2, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 3, const_str_plain_function ); Py_INCREF( const_str_plain_function );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 4, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, const_str_plain_itl ); Py_INCREF( const_str_plain_itl );
    PyTuple_SET_ITEM( const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 6, const_str_plain_ii ); Py_INCREF( const_str_plain_ii );
    const_str_plain_rffti = UNSTREAM_STRING( &constant_bin[ 589698 ], 5, 1 );
    const_str_digest_2d1e18dbc777b58158ca02d4c734dde4 = UNSTREAM_STRING( &constant_bin[ 589703 ], 50, 0 );
    const_tuple_str_plain_fftpack_lite_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fftpack_lite_tuple, 0, const_str_plain_fftpack_lite ); Py_INCREF( const_str_plain_fftpack_lite );
    const_str_digest_dbc10c3e332a8d966e8c779c64feee7f = UNSTREAM_STRING( &constant_bin[ 589753 ], 3127, 0 );
    const_str_plain_rfftf = UNSTREAM_STRING( &constant_bin[ 592880 ], 5, 1 );
    const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 2, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 3, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, const_str_plain_unitary ); Py_INCREF( const_str_plain_unitary );
    PyTuple_SET_ITEM( const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    const_str_plain_rfftb = UNSTREAM_STRING( &constant_bin[ 592885 ], 5, 1 );
    const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 1, const_tuple_int_neg_2_int_neg_1_tuple ); Py_INCREF( const_tuple_int_neg_2_int_neg_1_tuple );
    PyTuple_SET_ITEM( const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 0, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 1, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 2, const_str_plain_zeros ); Py_INCREF( const_str_plain_zeros );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 3, const_str_plain_swapaxes ); Py_INCREF( const_str_plain_swapaxes );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 4, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 5, const_str_plain_conjugate ); Py_INCREF( const_str_plain_conjugate );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 6, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple, 7, const_str_plain_sqrt ); Py_INCREF( const_str_plain_sqrt );
    const_str_digest_ad30867cb50db197c788d8d9559403d4 = UNSTREAM_STRING( &constant_bin[ 592890 ], 38, 0 );
    const_str_digest_67a439b64216fd79a420034aec6214a2 = UNSTREAM_STRING( &constant_bin[ 592928 ], 741, 0 );
    const_dict_a02eb3206004e1dededd932dea2baa88 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_a02eb3206004e1dededd932dea2baa88, const_str_plain_dtype, (PyObject *)&PyComplex_Type );
    PyDict_SetItem( const_dict_a02eb3206004e1dededd932dea2baa88, const_str_plain_copy, Py_True );
    assert( PyDict_Size( const_dict_a02eb3206004e1dededd932dea2baa88 ) == 2 );
    const_dict_073d0317252e4445514a1773373206fe = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_073d0317252e4445514a1773373206fe, const_str_plain_max_size_in_mb, const_int_pos_100 );
    PyDict_SetItem( const_dict_073d0317252e4445514a1773373206fe, const_str_plain_max_item_count, const_int_pos_32 );
    assert( PyDict_Size( const_dict_073d0317252e4445514a1773373206fe ) == 2 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$fftpack( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_337893ba858cd626089f9ea3f818bac6;
static PyCodeObject *codeobj_317bb658b0414e279d21bd207a57fbf9;
static PyCodeObject *codeobj_f6615d8a52a8c677781097a2a000c1d9;
static PyCodeObject *codeobj_62dfa6929387e94272aa20d88b3676a7;
static PyCodeObject *codeobj_ce3cb8c38a914d5f1af338b6a4395959;
static PyCodeObject *codeobj_aad34e6872cc456b4bafe87ef9c6f015;
static PyCodeObject *codeobj_8e6400e290ece1abb205be94c5845942;
static PyCodeObject *codeobj_c61db7f5862952dcd26059e1c132b026;
static PyCodeObject *codeobj_ceecae020dfda9ee7ce3912f21c32f7a;
static PyCodeObject *codeobj_555f8c37b5021381c50d71f0cf1e9116;
static PyCodeObject *codeobj_ce479a41a699acb927774d90fbc361ea;
static PyCodeObject *codeobj_aee9ddf32f14db52e6c981861a070c4c;
static PyCodeObject *codeobj_f00d9455cc8607829d591f31283b89e5;
static PyCodeObject *codeobj_682614fe56318c3b7d74e3d5e0559da2;
static PyCodeObject *codeobj_062e68c1efc8f196afb2c711a8ce60b8;
static PyCodeObject *codeobj_0e36783e03145afa50887e5b8b05166d;
static PyCodeObject *codeobj_53358051e1608cc0a976d9387a1084e0;
static PyCodeObject *codeobj_12681175b02042825cf7c2a27b5db56d;
static PyCodeObject *codeobj_299aec246675ce2e2e6b5be47bfceff1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2d1e18dbc777b58158ca02d4c734dde4;
    codeobj_337893ba858cd626089f9ea3f818bac6 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_380dd4ace92138038f5afbeee50a20b1, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_317bb658b0414e279d21bd207a57fbf9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__cook_nd_args, 613, const_tuple_843e708ee63626fed8b1c3feb5dfba6b_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f6615d8a52a8c677781097a2a000c1d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fft, 47, const_tuple_f7fa28c80a4b4947b7d4a34e0df64c83_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_62dfa6929387e94272aa20d88b3676a7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raw_fftnd, 632, const_tuple_4a9f6740a272bc24d2e73115786d7e7e_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ce3cb8c38a914d5f1af338b6a4395959 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__unitary, 95, const_tuple_str_plain_norm_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aad34e6872cc456b4bafe87ef9c6f015 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft, 102, const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8e6400e290ece1abb205be94c5845942 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fft2, 836, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c61db7f5862952dcd26059e1c132b026 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftn, 642, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ceecae020dfda9ee7ce3912f21c32f7a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hfft, 470, const_tuple_b2472a132e5329eaad03f9fe869871a7_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_555f8c37b5021381c50d71f0cf1e9116 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft, 198, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ce479a41a699acb927774d90fbc361ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifft2, 926, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aee9ddf32f14db52e6c981861a070c4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftn, 739, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f00d9455cc8607829d591f31283b89e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ihfft, 552, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_682614fe56318c3b7d74e3d5e0559da2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft, 380, const_tuple_aa9e3b66b07b26559b8e6fd7bb9b4e93_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_062e68c1efc8f196afb2c711a8ce60b8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfft2, 1236, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0e36783e03145afa50887e5b8b05166d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irfftn, 1142, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_53358051e1608cc0a976d9387a1084e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft, 291, const_tuple_75ec54f212a0137069deccc939a914f5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_12681175b02042825cf7c2a27b5db56d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfft2, 1105, const_tuple_str_plain_a_str_plain_s_str_plain_axes_str_plain_norm_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_299aec246675ce2e2e6b5be47bfceff1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftn, 1013, const_tuple_4b5f32d3f34100dd0b7a9fd60ab6c00e_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_10__raw_fftnd( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_11_fftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_12_ifftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_13_fft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_14_ifft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_15_rfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_16_rfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_17_irfftn( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_18_irfft2( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_1__raw_fft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_2__unitary(  );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_3_fft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_4_ifft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_5_rfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_6_irfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_7_hfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_8_ihfft( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_9__cook_nd_args( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$fft$fftpack$$$function_1__raw_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_init_function = python_pars[ 3 ];
    PyObject *par_work_function = python_pars[ 4 ];
    PyObject *par_fft_cache = python_pars[ 5 ];
    PyObject *var_wsave = NULL;
    PyObject *var_s = NULL;
    PyObject *var_index = NULL;
    PyObject *var_z = NULL;
    PyObject *var_r = NULL;
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
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
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
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_start_name_1;
    PyObject *tmp_start_name_2;
    PyObject *tmp_step_name_1;
    PyObject *tmp_step_name_2;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_stop_name_2;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f6615d8a52a8c677781097a2a000c1d9 = NULL;

    struct Nuitka_FrameObject *frame_f6615d8a52a8c677781097a2a000c1d9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6615d8a52a8c677781097a2a000c1d9, codeobj_f6615d8a52a8c677781097a2a000c1d9, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f6615d8a52a8c677781097a2a000c1d9 = cache_frame_f6615d8a52a8c677781097a2a000c1d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6615d8a52a8c677781097a2a000c1d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6615d8a52a8c677781097a2a000c1d9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 49;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_n;

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
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_n;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "ooooooooooo";
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
    tmp_left_name_1 = const_str_digest_242e8c397d863f4678e3108a3c04f924;
    tmp_right_name_1 = par_n;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 55;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_instance_1 = par_fft_cache;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_2 = par_n;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_pop_twiddle_factors, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_wsave == NULL );
    var_wsave = tmp_assign_source_3;

    tmp_compare_left_3 = var_wsave;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_2 = par_init_function;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_3 = par_n;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_wsave;
        assert( old != NULL );
        var_wsave = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = par_n;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 67;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_5;

    tmp_subscribed_name_3 = var_s;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_compare_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = par_n;

    CHECK_OBJECT( tmp_compare_right_5 );
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 69;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_2 = LIST_COPY( const_list_slice_none_none_none_list );
    tmp_len_arg_1 = var_s;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 70;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_index == NULL );
    var_index = tmp_assign_source_6;

    tmp_start_name_1 = const_int_0;
    tmp_stop_name_1 = par_n;

    CHECK_OBJECT( tmp_stop_name_1 );
    tmp_step_name_1 = Py_None;
    tmp_ass_subvalue_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_ass_subvalue_1 != NULL );
    tmp_ass_subscribed_1 = var_index;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = par_axis;

    CHECK_OBJECT( tmp_ass_subscript_1 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = par_a;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = var_index;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_7;
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_left_name_3 = LIST_COPY( const_list_slice_none_none_none_list );
    tmp_len_arg_2 = var_s;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_right_name_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 74;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_index == NULL );
    var_index = tmp_assign_source_8;

    tmp_start_name_2 = const_int_0;
    tmp_subscribed_name_5 = var_s;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_5 );
    tmp_stop_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_stop_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_2 = Py_None;
    tmp_ass_subvalue_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
    Py_DECREF( tmp_stop_name_2 );
    assert( tmp_ass_subvalue_2 != NULL );
    tmp_ass_subscribed_2 = var_index;

    CHECK_OBJECT( tmp_ass_subscribed_2 );
    tmp_ass_subscript_2 = par_axis;

    CHECK_OBJECT( tmp_ass_subscript_2 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_3 = par_n;

    CHECK_OBJECT( tmp_ass_subvalue_3 );
    tmp_ass_subscribed_3 = var_s;

    CHECK_OBJECT( tmp_ass_subscribed_3 );
    tmp_ass_subscript_3 = par_axis;

    CHECK_OBJECT( tmp_ass_subscript_3 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_zeros );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_zeros );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "zeros" );
        exception_tb = NULL;

        exception_lineno = 77;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_s;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_5 = par_a;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_char );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_z == NULL );
    var_z = tmp_assign_source_9;

    tmp_ass_subvalue_4 = par_a;

    CHECK_OBJECT( tmp_ass_subvalue_4 );
    tmp_ass_subscribed_4 = var_z;

    CHECK_OBJECT( tmp_ass_subscribed_4 );
    tmp_ass_subscript_4 = var_index;

    CHECK_OBJECT( tmp_ass_subscript_4 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = var_z;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_10;
        Py_INCREF( par_a );
        Py_DECREF( old );
    }

    branch_end_5:;
    branch_no_4:;
    tmp_compare_left_6 = par_axis;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = const_int_neg_1;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_swapaxes );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "swapaxes" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_a;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 82;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = const_int_neg_1;
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    branch_no_6:;
    tmp_called_name_5 = par_work_function;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_9 = par_a;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 83;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_wsave;

    CHECK_OBJECT( tmp_args_element_name_10 );
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_12;

    tmp_compare_left_7 = par_axis;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = const_int_neg_1;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_swapaxes );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_swapaxes );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "swapaxes" );
        exception_tb = NULL;

        exception_lineno = 85;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_r;

    CHECK_OBJECT( tmp_args_element_name_11 );
    tmp_args_element_name_12 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_12 );
    tmp_args_element_name_13 = const_int_neg_1;
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        assert( old != NULL );
        var_r = tmp_assign_source_13;
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_called_instance_2 = par_fft_cache;

    CHECK_OBJECT( tmp_called_instance_2 );
    tmp_args_element_name_14 = par_n;

    CHECK_OBJECT( tmp_args_element_name_14 );
    tmp_args_element_name_15 = var_wsave;

    CHECK_OBJECT( tmp_args_element_name_15 );
    frame_f6615d8a52a8c677781097a2a000c1d9->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_put_twiddle_factors, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6615d8a52a8c677781097a2a000c1d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6615d8a52a8c677781097a2a000c1d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6615d8a52a8c677781097a2a000c1d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6615d8a52a8c677781097a2a000c1d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6615d8a52a8c677781097a2a000c1d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6615d8a52a8c677781097a2a000c1d9,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_init_function,
        par_work_function,
        par_fft_cache,
        var_wsave,
        var_s,
        var_index,
        var_z,
        var_r
    );


    // Release cached frame.
    if ( frame_f6615d8a52a8c677781097a2a000c1d9 == cache_frame_f6615d8a52a8c677781097a2a000c1d9 )
    {
        Py_DECREF( frame_f6615d8a52a8c677781097a2a000c1d9 );
    }
    cache_frame_f6615d8a52a8c677781097a2a000c1d9 = NULL;

    assertFrameObject( frame_f6615d8a52a8c677781097a2a000c1d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_r;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_1__raw_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_init_function );
    Py_DECREF( par_init_function );
    par_init_function = NULL;

    CHECK_OBJECT( (PyObject *)par_work_function );
    Py_DECREF( par_work_function );
    par_work_function = NULL;

    CHECK_OBJECT( (PyObject *)par_fft_cache );
    Py_DECREF( par_fft_cache );
    par_fft_cache = NULL;

    CHECK_OBJECT( (PyObject *)var_wsave );
    Py_DECREF( var_wsave );
    var_wsave = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_init_function );
    Py_DECREF( par_init_function );
    par_init_function = NULL;

    CHECK_OBJECT( (PyObject *)par_work_function );
    Py_DECREF( par_work_function );
    par_work_function = NULL;

    CHECK_OBJECT( (PyObject *)par_fft_cache );
    Py_DECREF( par_fft_cache );
    par_fft_cache = NULL;

    Py_XDECREF( var_wsave );
    var_wsave = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_1__raw_fft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_2__unitary( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_norm = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_ce3cb8c38a914d5f1af338b6a4395959 = NULL;

    struct Nuitka_FrameObject *frame_ce3cb8c38a914d5f1af338b6a4395959;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce3cb8c38a914d5f1af338b6a4395959, codeobj_ce3cb8c38a914d5f1af338b6a4395959, module_numpy$fft$fftpack, sizeof(void *) );
    frame_ce3cb8c38a914d5f1af338b6a4395959 = cache_frame_ce3cb8c38a914d5f1af338b6a4395959;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce3cb8c38a914d5f1af338b6a4395959 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce3cb8c38a914d5f1af338b6a4395959 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_norm;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_tuple_none_str_plain_ortho_tuple;
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
    tmp_left_name_1 = const_str_digest_4668369e132281bb3e0ee274b05ac5ba;
    tmp_right_name_1 = par_norm;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_ce3cb8c38a914d5f1af338b6a4395959->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 97;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce3cb8c38a914d5f1af338b6a4395959 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce3cb8c38a914d5f1af338b6a4395959 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce3cb8c38a914d5f1af338b6a4395959, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce3cb8c38a914d5f1af338b6a4395959->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce3cb8c38a914d5f1af338b6a4395959, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce3cb8c38a914d5f1af338b6a4395959,
        type_description_1,
        par_norm
    );


    // Release cached frame.
    if ( frame_ce3cb8c38a914d5f1af338b6a4395959 == cache_frame_ce3cb8c38a914d5f1af338b6a4395959 )
    {
        Py_DECREF( frame_ce3cb8c38a914d5f1af338b6a4395959 );
    }
    cache_frame_ce3cb8c38a914d5f1af338b6a4395959 = NULL;

    assertFrameObject( frame_ce3cb8c38a914d5f1af338b6a4395959 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_compexpr_left_1 = par_norm;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_return_value = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_2__unitary );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_2__unitary );
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


static PyObject *impl_numpy$fft$fftpack$$$function_3_fft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_output = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_aad34e6872cc456b4bafe87ef9c6f015 = NULL;

    struct Nuitka_FrameObject *frame_aad34e6872cc456b4bafe87ef9c6f015;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aad34e6872cc456b4bafe87ef9c6f015, codeobj_aad34e6872cc456b4bafe87ef9c6f015, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aad34e6872cc456b4bafe87ef9c6f015 = cache_frame_aad34e6872cc456b4bafe87ef9c6f015;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aad34e6872cc456b4bafe87ef9c6f015 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aad34e6872cc456b4bafe87ef9c6f015 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 189;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_aad34e6872cc456b4bafe87ef9c6f015->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_astype );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_type_complex_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_aad34e6872cc456b4bafe87ef9c6f015->m_frame.f_lineno = 189;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_n;

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
    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_n;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cffti );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cfftf );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_cache );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fft_cache" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_aad34e6872cc456b4bafe87ef9c6f015->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_output == NULL );
    var_output = tmp_assign_source_3;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
        exception_tb = NULL;

        exception_lineno = 193;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_aad34e6872cc456b4bafe87ef9c6f015->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 193;
        type_description_1 = "ooooo";
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
    tmp_left_name_1 = var_output;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = const_int_pos_1;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
        exception_tb = NULL;

        exception_lineno = 194;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = par_n;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_aad34e6872cc456b4bafe87ef9c6f015->m_frame.f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_4 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    var_output = tmp_assign_source_4;

    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aad34e6872cc456b4bafe87ef9c6f015 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aad34e6872cc456b4bafe87ef9c6f015 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aad34e6872cc456b4bafe87ef9c6f015, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aad34e6872cc456b4bafe87ef9c6f015->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aad34e6872cc456b4bafe87ef9c6f015, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aad34e6872cc456b4bafe87ef9c6f015,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_aad34e6872cc456b4bafe87ef9c6f015 == cache_frame_aad34e6872cc456b4bafe87ef9c6f015 )
    {
        Py_DECREF( frame_aad34e6872cc456b4bafe87ef9c6f015 );
    }
    cache_frame_aad34e6872cc456b4bafe87ef9c6f015 = NULL;

    assertFrameObject( frame_aad34e6872cc456b4bafe87ef9c6f015 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_output;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_3_fft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_3_fft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_4_ifft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_555f8c37b5021381c50d71f0cf1e9116 = NULL;

    struct Nuitka_FrameObject *frame_555f8c37b5021381c50d71f0cf1e9116;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_555f8c37b5021381c50d71f0cf1e9116, codeobj_555f8c37b5021381c50d71f0cf1e9116, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_555f8c37b5021381c50d71f0cf1e9116 = cache_frame_555f8c37b5021381c50d71f0cf1e9116;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_555f8c37b5021381c50d71f0cf1e9116 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_555f8c37b5021381c50d71f0cf1e9116 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 283;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
    frame_555f8c37b5021381c50d71f0cf1e9116->m_frame.f_lineno = 283;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_n;

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
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
        exception_tb = NULL;

        exception_lineno = 286;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_555f8c37b5021381c50d71f0cf1e9116->m_frame.f_lineno = 286;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_unitary == NULL );
    var_unitary = tmp_assign_source_3;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
        exception_tb = NULL;

        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_n;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cffti );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cfftb );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_cache );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fft_cache" );
        exception_tb = NULL;

        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_555f8c37b5021381c50d71f0cf1e9116->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_output == NULL );
    var_output = tmp_assign_source_4;

    tmp_left_name_1 = var_output;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = const_int_pos_1;
    tmp_cond_value_1 = var_unitary;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooo";
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
        exception_tb = NULL;

        exception_lineno = 288;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_n;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_555f8c37b5021381c50d71f0cf1e9116->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_right_name_2 = par_n;

    CHECK_OBJECT( tmp_right_name_2 );
    Py_INCREF( tmp_right_name_2 );
    condexpr_end_1:;
    tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_555f8c37b5021381c50d71f0cf1e9116 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_555f8c37b5021381c50d71f0cf1e9116 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_555f8c37b5021381c50d71f0cf1e9116 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_555f8c37b5021381c50d71f0cf1e9116, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_555f8c37b5021381c50d71f0cf1e9116->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_555f8c37b5021381c50d71f0cf1e9116, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_555f8c37b5021381c50d71f0cf1e9116,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_555f8c37b5021381c50d71f0cf1e9116 == cache_frame_555f8c37b5021381c50d71f0cf1e9116 )
    {
        Py_DECREF( frame_555f8c37b5021381c50d71f0cf1e9116 );
    }
    cache_frame_555f8c37b5021381c50d71f0cf1e9116 = NULL;

    assertFrameObject( frame_555f8c37b5021381c50d71f0cf1e9116 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_4_ifft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_4_ifft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_5_rfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_output = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_53358051e1608cc0a976d9387a1084e0 = NULL;

    struct Nuitka_FrameObject *frame_53358051e1608cc0a976d9387a1084e0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53358051e1608cc0a976d9387a1084e0, codeobj_53358051e1608cc0a976d9387a1084e0, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_53358051e1608cc0a976d9387a1084e0 = cache_frame_53358051e1608cc0a976d9387a1084e0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53358051e1608cc0a976d9387a1084e0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53358051e1608cc0a976d9387a1084e0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 370;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 );
    frame_53358051e1608cc0a976d9387a1084e0->m_frame.f_lineno = 370;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
        exception_tb = NULL;

        exception_lineno = 371;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_n;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 371;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rffti );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 371;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rfftf );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 371;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__real_fft_cache );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__real_fft_cache );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_real_fft_cache" );
        exception_tb = NULL;

        exception_lineno = 372;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_53358051e1608cc0a976d9387a1084e0->m_frame.f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_output == NULL );
    var_output = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
        exception_tb = NULL;

        exception_lineno = 373;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_53358051e1608cc0a976d9387a1084e0->m_frame.f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 373;
        type_description_1 = "ooooo";
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
    tmp_compare_left_1 = par_n;

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
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_left_name_1 = var_output;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = const_int_pos_1;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
        exception_tb = NULL;

        exception_lineno = 376;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_n;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_53358051e1608cc0a976d9387a1084e0->m_frame.f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_4 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    var_output = tmp_assign_source_4;

    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53358051e1608cc0a976d9387a1084e0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53358051e1608cc0a976d9387a1084e0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53358051e1608cc0a976d9387a1084e0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53358051e1608cc0a976d9387a1084e0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53358051e1608cc0a976d9387a1084e0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53358051e1608cc0a976d9387a1084e0,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_output
    );


    // Release cached frame.
    if ( frame_53358051e1608cc0a976d9387a1084e0 == cache_frame_53358051e1608cc0a976d9387a1084e0 )
    {
        Py_DECREF( frame_53358051e1608cc0a976d9387a1084e0 );
    }
    cache_frame_53358051e1608cc0a976d9387a1084e0 = NULL;

    assertFrameObject( frame_53358051e1608cc0a976d9387a1084e0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_output;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_5_rfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_5_rfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_6_irfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_682614fe56318c3b7d74e3d5e0559da2 = NULL;

    struct Nuitka_FrameObject *frame_682614fe56318c3b7d74e3d5e0559da2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_682614fe56318c3b7d74e3d5e0559da2, codeobj_682614fe56318c3b7d74e3d5e0559da2, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_682614fe56318c3b7d74e3d5e0559da2 = cache_frame_682614fe56318c3b7d74e3d5e0559da2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_682614fe56318c3b7d74e3d5e0559da2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_682614fe56318c3b7d74e3d5e0559da2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
    frame_682614fe56318c3b7d74e3d5e0559da2->m_frame.f_lineno = 461;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_n;

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
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 463;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
        exception_tb = NULL;

        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_682614fe56318c3b7d74e3d5e0559da2->m_frame.f_lineno = 464;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_unitary == NULL );
    var_unitary = tmp_assign_source_3;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fft );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fft" );
        exception_tb = NULL;

        exception_lineno = 465;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_n;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 465;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_rffti );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 465;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rfftb );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 465;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__real_fft_cache );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__real_fft_cache );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        Py_DECREF( tmp_args_element_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_real_fft_cache" );
        exception_tb = NULL;

        exception_lineno = 466;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_682614fe56318c3b7d74e3d5e0559da2->m_frame.f_lineno = 465;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_output == NULL );
    var_output = tmp_assign_source_4;

    tmp_left_name_3 = var_output;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_left_name_4 = const_int_pos_1;
    tmp_cond_value_1 = var_unitary;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "oooooo";
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
        exception_tb = NULL;

        exception_lineno = 467;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_n;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_682614fe56318c3b7d74e3d5e0559da2->m_frame.f_lineno = 467;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_right_name_4 = par_n;

    CHECK_OBJECT( tmp_right_name_4 );
    Py_INCREF( tmp_right_name_4 );
    condexpr_end_1:;
    tmp_right_name_3 = BINARY_OPERATION_TRUEDIV( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 467;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_682614fe56318c3b7d74e3d5e0559da2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_682614fe56318c3b7d74e3d5e0559da2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_682614fe56318c3b7d74e3d5e0559da2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_682614fe56318c3b7d74e3d5e0559da2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_682614fe56318c3b7d74e3d5e0559da2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_682614fe56318c3b7d74e3d5e0559da2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_682614fe56318c3b7d74e3d5e0559da2,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_682614fe56318c3b7d74e3d5e0559da2 == cache_frame_682614fe56318c3b7d74e3d5e0559da2 )
    {
        Py_DECREF( frame_682614fe56318c3b7d74e3d5e0559da2 );
    }
    cache_frame_682614fe56318c3b7d74e3d5e0559da2 = NULL;

    assertFrameObject( frame_682614fe56318c3b7d74e3d5e0559da2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_6_irfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_6_irfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_7_hfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_ceecae020dfda9ee7ce3912f21c32f7a = NULL;

    struct Nuitka_FrameObject *frame_ceecae020dfda9ee7ce3912f21c32f7a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ceecae020dfda9ee7ce3912f21c32f7a, codeobj_ceecae020dfda9ee7ce3912f21c32f7a, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ceecae020dfda9ee7ce3912f21c32f7a = cache_frame_ceecae020dfda9ee7ce3912f21c32f7a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ceecae020dfda9ee7ce3912f21c32f7a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ceecae020dfda9ee7ce3912f21c32f7a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 545;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
    frame_ceecae020dfda9ee7ce3912f21c32f7a->m_frame.f_lineno = 545;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_n;

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
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
        exception_tb = NULL;

        exception_lineno = 548;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ceecae020dfda9ee7ce3912f21c32f7a->m_frame.f_lineno = 548;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_unitary == NULL );
    var_unitary = tmp_assign_source_3;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "irfft" );
        exception_tb = NULL;

        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_conjugate );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "conjugate" );
        exception_tb = NULL;

        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_a;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_ceecae020dfda9ee7ce3912f21c32f7a->m_frame.f_lineno = 549;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_n;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_ceecae020dfda9ee7ce3912f21c32f7a->m_frame.f_lineno = 549;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = var_unitary;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 549;
        type_description_1 = "ooooo";
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
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_left_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
        exception_tb = NULL;

        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_n;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_ceecae020dfda9ee7ce3912f21c32f7a->m_frame.f_lineno = 549;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_right_name_3 = par_n;

    CHECK_OBJECT( tmp_right_name_3 );
    Py_INCREF( tmp_right_name_3 );
    condexpr_end_1:;
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ceecae020dfda9ee7ce3912f21c32f7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ceecae020dfda9ee7ce3912f21c32f7a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ceecae020dfda9ee7ce3912f21c32f7a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ceecae020dfda9ee7ce3912f21c32f7a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ceecae020dfda9ee7ce3912f21c32f7a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ceecae020dfda9ee7ce3912f21c32f7a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ceecae020dfda9ee7ce3912f21c32f7a,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary
    );


    // Release cached frame.
    if ( frame_ceecae020dfda9ee7ce3912f21c32f7a == cache_frame_ceecae020dfda9ee7ce3912f21c32f7a )
    {
        Py_DECREF( frame_ceecae020dfda9ee7ce3912f21c32f7a );
    }
    cache_frame_ceecae020dfda9ee7ce3912f21c32f7a = NULL;

    assertFrameObject( frame_ceecae020dfda9ee7ce3912f21c32f7a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_7_hfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_7_hfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_8_ihfft( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_axis = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_unitary = NULL;
    PyObject *var_output = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_f00d9455cc8607829d591f31283b89e5 = NULL;

    struct Nuitka_FrameObject *frame_f00d9455cc8607829d591f31283b89e5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f00d9455cc8607829d591f31283b89e5, codeobj_f00d9455cc8607829d591f31283b89e5, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f00d9455cc8607829d591f31283b89e5 = cache_frame_f00d9455cc8607829d591f31283b89e5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f00d9455cc8607829d591f31283b89e5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f00d9455cc8607829d591f31283b89e5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 605;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 );
    frame_f00d9455cc8607829d591f31283b89e5->m_frame.f_lineno = 605;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_n;

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
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = par_axis;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_n;
        assert( old != NULL );
        par_n = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__unitary );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_unitary" );
        exception_tb = NULL;

        exception_lineno = 608;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_f00d9455cc8607829d591f31283b89e5->m_frame.f_lineno = 608;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_unitary == NULL );
    var_unitary = tmp_assign_source_3;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_conjugate );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_conjugate );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "conjugate" );
        exception_tb = NULL;

        exception_lineno = 609;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "rfft" );
        exception_tb = NULL;

        exception_lineno = 609;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_a;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_n;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = par_axis;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_f00d9455cc8607829d591f31283b89e5->m_frame.f_lineno = 609;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_f00d9455cc8607829d591f31283b89e5->m_frame.f_lineno = 609;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_output == NULL );
    var_output = tmp_assign_source_4;

    tmp_left_name_1 = var_output;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_left_name_2 = const_int_pos_1;
    tmp_cond_value_1 = var_unitary;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 610;
        type_description_1 = "oooooo";
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
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sqrt );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sqrt" );
        exception_tb = NULL;

        exception_lineno = 610;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_n;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_f00d9455cc8607829d591f31283b89e5->m_frame.f_lineno = 610;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 610;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_right_name_2 = par_n;

    CHECK_OBJECT( tmp_right_name_2 );
    Py_INCREF( tmp_right_name_2 );
    condexpr_end_1:;
    tmp_right_name_1 = BINARY_OPERATION_TRUEDIV( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 610;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 610;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f00d9455cc8607829d591f31283b89e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f00d9455cc8607829d591f31283b89e5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f00d9455cc8607829d591f31283b89e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f00d9455cc8607829d591f31283b89e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f00d9455cc8607829d591f31283b89e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f00d9455cc8607829d591f31283b89e5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f00d9455cc8607829d591f31283b89e5,
        type_description_1,
        par_a,
        par_n,
        par_axis,
        par_norm,
        var_unitary,
        var_output
    );


    // Release cached frame.
    if ( frame_f00d9455cc8607829d591f31283b89e5 == cache_frame_f00d9455cc8607829d591f31283b89e5 )
    {
        Py_DECREF( frame_f00d9455cc8607829d591f31283b89e5 );
    }
    cache_frame_f00d9455cc8607829d591f31283b89e5 = NULL;

    assertFrameObject( frame_f00d9455cc8607829d591f31283b89e5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_8_ihfft );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_unitary );
    Py_DECREF( var_unitary );
    var_unitary = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

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

    Py_XDECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_unitary );
    var_unitary = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_8_ihfft );
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


static PyObject *impl_numpy$fft$fftpack$$$function_9__cook_nd_args( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_invreal = python_pars[ 3 ];
    PyObject *var_shapeless = NULL;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
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
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_arg_2;
    PyObject *tmp_list_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_317bb658b0414e279d21bd207a57fbf9 = NULL;

    struct Nuitka_FrameObject *frame_317bb658b0414e279d21bd207a57fbf9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_317bb658b0414e279d21bd207a57fbf9, codeobj_317bb658b0414e279d21bd207a57fbf9, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_317bb658b0414e279d21bd207a57fbf9 = cache_frame_317bb658b0414e279d21bd207a57fbf9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_317bb658b0414e279d21bd207a57fbf9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_317bb658b0414e279d21bd207a57fbf9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_s;

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
    tmp_assign_source_1 = const_int_pos_1;
    assert( var_shapeless == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_shapeless = tmp_assign_source_1;

    tmp_compare_left_2 = par_axes;

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
    tmp_source_name_1 = par_a;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 617;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 617;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        assert( old != NULL );
        par_s = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "take" );
        exception_tb = NULL;

        exception_lineno = 619;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_a;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 619;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_317bb658b0414e279d21bd207a57fbf9->m_frame.f_lineno = 619;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 619;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        assert( old != NULL );
        par_s = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_4 = const_int_0;
    assert( var_shapeless == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_shapeless = tmp_assign_source_4;

    branch_end_1:;
    tmp_list_arg_2 = par_s;

    if ( tmp_list_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;

        exception_lineno = 622;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = PySequence_List( tmp_list_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 622;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_s;
        par_s = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = par_axes;

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
    tmp_len_arg_1 = par_s;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_operand_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_range2_low_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_range2_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_range2_high_1 = const_int_0;
    tmp_list_arg_3 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_low_1 );
    if ( tmp_list_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = PySequence_List( tmp_list_arg_3 );
    Py_DECREF( tmp_list_arg_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 624;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_6;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_2 = par_s;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_axes;

    CHECK_OBJECT( tmp_len_arg_3 );
    tmp_compare_right_4 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 625;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 625;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_1 = const_str_digest_ad30867cb50db197c788d8d9559403d4;
    frame_317bb658b0414e279d21bd207a57fbf9->m_frame.f_lineno = 626;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 626;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_and_left_value_1 = par_invreal;

    CHECK_OBJECT( tmp_and_left_value_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "ooooo";
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
    tmp_and_right_value_1 = var_shapeless;

    CHECK_OBJECT( tmp_and_right_value_1 );
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


        exception_lineno = 627;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_3 = par_a;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_axes;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_neg_1;
    tmp_subscript_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 628;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_ass_subvalue_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = par_s;

    CHECK_OBJECT( tmp_ass_subscribed_1 );
    tmp_ass_subscript_1 = const_int_neg_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 628;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_317bb658b0414e279d21bd207a57fbf9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_317bb658b0414e279d21bd207a57fbf9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_317bb658b0414e279d21bd207a57fbf9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_317bb658b0414e279d21bd207a57fbf9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_317bb658b0414e279d21bd207a57fbf9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_317bb658b0414e279d21bd207a57fbf9,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_invreal,
        var_shapeless
    );


    // Release cached frame.
    if ( frame_317bb658b0414e279d21bd207a57fbf9 == cache_frame_317bb658b0414e279d21bd207a57fbf9 )
    {
        Py_DECREF( frame_317bb658b0414e279d21bd207a57fbf9 );
    }
    cache_frame_317bb658b0414e279d21bd207a57fbf9 = NULL;

    assertFrameObject( frame_317bb658b0414e279d21bd207a57fbf9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_s;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_axes;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_9__cook_nd_args );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    CHECK_OBJECT( (PyObject *)var_shapeless );
    Py_DECREF( var_shapeless );
    var_shapeless = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_invreal );
    Py_DECREF( par_invreal );
    par_invreal = NULL;

    Py_XDECREF( var_shapeless );
    var_shapeless = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_9__cook_nd_args );
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


static PyObject *impl_numpy$fft$fftpack$$$function_10__raw_fftnd( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_function = python_pars[ 3 ];
    PyObject *par_norm = python_pars[ 4 ];
    PyObject *var_itl = NULL;
    PyObject *var_ii = NULL;
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
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_62dfa6929387e94272aa20d88b3676a7 = NULL;

    struct Nuitka_FrameObject *frame_62dfa6929387e94272aa20d88b3676a7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62dfa6929387e94272aa20d88b3676a7, codeobj_62dfa6929387e94272aa20d88b3676a7, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62dfa6929387e94272aa20d88b3676a7 = cache_frame_62dfa6929387e94272aa20d88b3676a7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62dfa6929387e94272aa20d88b3676a7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62dfa6929387e94272aa20d88b3676a7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 633;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_62dfa6929387e94272aa20d88b3676a7->m_frame.f_lineno = 633;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_cook_nd_args" );
        exception_tb = NULL;

        exception_lineno = 634;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_a;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_s;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_62dfa6929387e94272aa20d88b3676a7->m_frame.f_lineno = 634;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooo";
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


        type_description_1 = "ooooooo";
        exception_lineno = 634;
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


        type_description_1 = "ooooooo";
        exception_lineno = 634;
        goto try_except_handler_3;
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

                type_description_1 = "ooooooo";
                exception_lineno = 634;
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
        exception_lineno = 634;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = par_s;
        assert( old != NULL );
        par_s = tmp_assign_source_5;
        Py_INCREF( par_s );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_6;
        Py_INCREF( par_axes );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_len_arg_1 = par_axes;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_itl == NULL );
    var_itl = tmp_assign_source_7;

    tmp_called_instance_1 = var_itl;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_62dfa6929387e94272aa20d88b3676a7->m_frame.f_lineno = 636;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_reverse );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 636;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_2 = var_itl;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 637;
        type_description_1 = "ooooooo";
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
            type_description_1 = "ooooooo";
            exception_lineno = 637;
            goto try_except_handler_4;
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
        PyObject *old = var_ii;
        var_ii = tmp_assign_source_10;
        Py_INCREF( var_ii );
        Py_XDECREF( old );
    }

    tmp_called_name_3 = par_function;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 638;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_subscribed_name_1 = par_s;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_ii;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 638;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_dict_key_1 = const_str_plain_n;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_subscribed_name_2 = par_axes;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = var_ii;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 638;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_dict_key_2 = const_str_plain_axis;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_norm;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain_norm;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_62dfa6929387e94272aa20d88b3676a7->m_frame.f_lineno = 638;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 637;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_return_value = par_a;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 639;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62dfa6929387e94272aa20d88b3676a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62dfa6929387e94272aa20d88b3676a7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62dfa6929387e94272aa20d88b3676a7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62dfa6929387e94272aa20d88b3676a7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62dfa6929387e94272aa20d88b3676a7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62dfa6929387e94272aa20d88b3676a7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62dfa6929387e94272aa20d88b3676a7,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_function,
        par_norm,
        var_itl,
        var_ii
    );


    // Release cached frame.
    if ( frame_62dfa6929387e94272aa20d88b3676a7 == cache_frame_62dfa6929387e94272aa20d88b3676a7 )
    {
        Py_DECREF( frame_62dfa6929387e94272aa20d88b3676a7 );
    }
    cache_frame_62dfa6929387e94272aa20d88b3676a7 = NULL;

    assertFrameObject( frame_62dfa6929387e94272aa20d88b3676a7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_10__raw_fftnd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    CHECK_OBJECT( (PyObject *)var_itl );
    Py_DECREF( var_itl );
    var_itl = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_function );
    Py_DECREF( par_function );
    par_function = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_itl );
    var_itl = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_10__raw_fftnd );
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


static PyObject *impl_numpy$fft$fftpack$$$function_11_fftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c61db7f5862952dcd26059e1c132b026 = NULL;

    struct Nuitka_FrameObject *frame_c61db7f5862952dcd26059e1c132b026;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c61db7f5862952dcd26059e1c132b026, codeobj_c61db7f5862952dcd26059e1c132b026, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c61db7f5862952dcd26059e1c132b026 = cache_frame_c61db7f5862952dcd26059e1c132b026;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c61db7f5862952dcd26059e1c132b026 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c61db7f5862952dcd26059e1c132b026 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
        exception_tb = NULL;

        exception_lineno = 736;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fft" );
        exception_tb = NULL;

        exception_lineno = 736;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_c61db7f5862952dcd26059e1c132b026->m_frame.f_lineno = 736;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c61db7f5862952dcd26059e1c132b026 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c61db7f5862952dcd26059e1c132b026 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c61db7f5862952dcd26059e1c132b026 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c61db7f5862952dcd26059e1c132b026, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c61db7f5862952dcd26059e1c132b026->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c61db7f5862952dcd26059e1c132b026, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c61db7f5862952dcd26059e1c132b026,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_c61db7f5862952dcd26059e1c132b026 == cache_frame_c61db7f5862952dcd26059e1c132b026 )
    {
        Py_DECREF( frame_c61db7f5862952dcd26059e1c132b026 );
    }
    cache_frame_c61db7f5862952dcd26059e1c132b026 = NULL;

    assertFrameObject( frame_c61db7f5862952dcd26059e1c132b026 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_11_fftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_11_fftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_12_ifftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_aee9ddf32f14db52e6c981861a070c4c = NULL;

    struct Nuitka_FrameObject *frame_aee9ddf32f14db52e6c981861a070c4c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aee9ddf32f14db52e6c981861a070c4c, codeobj_aee9ddf32f14db52e6c981861a070c4c, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aee9ddf32f14db52e6c981861a070c4c = cache_frame_aee9ddf32f14db52e6c981861a070c4c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aee9ddf32f14db52e6c981861a070c4c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aee9ddf32f14db52e6c981861a070c4c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
        exception_tb = NULL;

        exception_lineno = 833;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ifft" );
        exception_tb = NULL;

        exception_lineno = 833;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_aee9ddf32f14db52e6c981861a070c4c->m_frame.f_lineno = 833;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 833;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aee9ddf32f14db52e6c981861a070c4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aee9ddf32f14db52e6c981861a070c4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aee9ddf32f14db52e6c981861a070c4c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aee9ddf32f14db52e6c981861a070c4c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aee9ddf32f14db52e6c981861a070c4c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aee9ddf32f14db52e6c981861a070c4c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aee9ddf32f14db52e6c981861a070c4c,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_aee9ddf32f14db52e6c981861a070c4c == cache_frame_aee9ddf32f14db52e6c981861a070c4c )
    {
        Py_DECREF( frame_aee9ddf32f14db52e6c981861a070c4c );
    }
    cache_frame_aee9ddf32f14db52e6c981861a070c4c = NULL;

    assertFrameObject( frame_aee9ddf32f14db52e6c981861a070c4c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_12_ifftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_12_ifftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_13_fft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8e6400e290ece1abb205be94c5845942 = NULL;

    struct Nuitka_FrameObject *frame_8e6400e290ece1abb205be94c5845942;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e6400e290ece1abb205be94c5845942, codeobj_8e6400e290ece1abb205be94c5845942, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8e6400e290ece1abb205be94c5845942 = cache_frame_8e6400e290ece1abb205be94c5845942;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e6400e290ece1abb205be94c5845942 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e6400e290ece1abb205be94c5845942 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
        exception_tb = NULL;

        exception_lineno = 923;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fft" );
        exception_tb = NULL;

        exception_lineno = 923;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_8e6400e290ece1abb205be94c5845942->m_frame.f_lineno = 923;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e6400e290ece1abb205be94c5845942 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e6400e290ece1abb205be94c5845942 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e6400e290ece1abb205be94c5845942 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e6400e290ece1abb205be94c5845942, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e6400e290ece1abb205be94c5845942->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e6400e290ece1abb205be94c5845942, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e6400e290ece1abb205be94c5845942,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_8e6400e290ece1abb205be94c5845942 == cache_frame_8e6400e290ece1abb205be94c5845942 )
    {
        Py_DECREF( frame_8e6400e290ece1abb205be94c5845942 );
    }
    cache_frame_8e6400e290ece1abb205be94c5845942 = NULL;

    assertFrameObject( frame_8e6400e290ece1abb205be94c5845942 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_13_fft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_13_fft2 );
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


static PyObject *impl_numpy$fft$fftpack$$$function_14_ifft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ce479a41a699acb927774d90fbc361ea = NULL;

    struct Nuitka_FrameObject *frame_ce479a41a699acb927774d90fbc361ea;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce479a41a699acb927774d90fbc361ea, codeobj_ce479a41a699acb927774d90fbc361ea, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ce479a41a699acb927774d90fbc361ea = cache_frame_ce479a41a699acb927774d90fbc361ea;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce479a41a699acb927774d90fbc361ea );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce479a41a699acb927774d90fbc361ea ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raw_fftnd );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raw_fftnd" );
        exception_tb = NULL;

        exception_lineno = 1010;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ifft" );
        exception_tb = NULL;

        exception_lineno = 1010;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_ce479a41a699acb927774d90fbc361ea->m_frame.f_lineno = 1010;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1010;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce479a41a699acb927774d90fbc361ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce479a41a699acb927774d90fbc361ea );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce479a41a699acb927774d90fbc361ea );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce479a41a699acb927774d90fbc361ea, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce479a41a699acb927774d90fbc361ea->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce479a41a699acb927774d90fbc361ea, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce479a41a699acb927774d90fbc361ea,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_ce479a41a699acb927774d90fbc361ea == cache_frame_ce479a41a699acb927774d90fbc361ea )
    {
        Py_DECREF( frame_ce479a41a699acb927774d90fbc361ea );
    }
    cache_frame_ce479a41a699acb927774d90fbc361ea = NULL;

    assertFrameObject( frame_ce479a41a699acb927774d90fbc361ea );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_14_ifft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_14_ifft2 );
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


static PyObject *impl_numpy$fft$fftpack$$$function_15_rfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_299aec246675ce2e2e6b5be47bfceff1 = NULL;

    struct Nuitka_FrameObject *frame_299aec246675ce2e2e6b5be47bfceff1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_299aec246675ce2e2e6b5be47bfceff1, codeobj_299aec246675ce2e2e6b5be47bfceff1, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_299aec246675ce2e2e6b5be47bfceff1 = cache_frame_299aec246675ce2e2e6b5be47bfceff1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_299aec246675ce2e2e6b5be47bfceff1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_299aec246675ce2e2e6b5be47bfceff1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 1097;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_c42c09a7ae1230df9bd4f49e205e4c00 );
    frame_299aec246675ce2e2e6b5be47bfceff1->m_frame.f_lineno = 1097;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_cook_nd_args" );
        exception_tb = NULL;

        exception_lineno = 1098;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_299aec246675ce2e2e6b5be47bfceff1->m_frame.f_lineno = 1098;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        type_description_1 = "ooooo";
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


        type_description_1 = "ooooo";
        exception_lineno = 1098;
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


        type_description_1 = "ooooo";
        exception_lineno = 1098;
        goto try_except_handler_3;
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

                type_description_1 = "ooooo";
                exception_lineno = 1098;
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
        exception_lineno = 1098;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = par_s;
        assert( old != NULL );
        par_s = tmp_assign_source_5;
        Py_INCREF( par_s );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_6;
        Py_INCREF( par_axes );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfft );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "rfft" );
        exception_tb = NULL;

        exception_lineno = 1099;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_a;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_subscribed_name_1 = par_s;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_neg_1;
    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1099;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_axes;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_neg_1;
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 1099;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_299aec246675ce2e2e6b5be47bfceff1->m_frame.f_lineno = 1099;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1099;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_axes;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_range_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        type_description_1 = "ooooo";
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
            type_description_1 = "ooooo";
            exception_lineno = 1100;
            goto try_except_handler_4;
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
        PyObject *old = var_ii;
        var_ii = tmp_assign_source_10;
        Py_INCREF( var_ii );
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fft" );
        exception_tb = NULL;

        exception_lineno = 1101;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_8 = par_a;

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 1101;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_subscribed_name_3 = par_s;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = var_ii;

    CHECK_OBJECT( tmp_subscript_name_3 );
    tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1101;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_subscribed_name_4 = par_axes;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = var_ii;

    CHECK_OBJECT( tmp_subscript_name_4 );
    tmp_args_element_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_9 );

        exception_lineno = 1101;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_11 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_11 );
    frame_299aec246675ce2e2e6b5be47bfceff1->m_frame.f_lineno = 1101;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1101;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_return_value = par_a;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 1102;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_299aec246675ce2e2e6b5be47bfceff1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_299aec246675ce2e2e6b5be47bfceff1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_299aec246675ce2e2e6b5be47bfceff1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_299aec246675ce2e2e6b5be47bfceff1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_299aec246675ce2e2e6b5be47bfceff1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_299aec246675ce2e2e6b5be47bfceff1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_299aec246675ce2e2e6b5be47bfceff1,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_299aec246675ce2e2e6b5be47bfceff1 == cache_frame_299aec246675ce2e2e6b5be47bfceff1 )
    {
        Py_DECREF( frame_299aec246675ce2e2e6b5be47bfceff1 );
    }
    cache_frame_299aec246675ce2e2e6b5be47bfceff1 = NULL;

    assertFrameObject( frame_299aec246675ce2e2e6b5be47bfceff1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_15_rfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_15_rfftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_16_rfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    static struct Nuitka_FrameObject *cache_frame_12681175b02042825cf7c2a27b5db56d = NULL;

    struct Nuitka_FrameObject *frame_12681175b02042825cf7c2a27b5db56d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_12681175b02042825cf7c2a27b5db56d, codeobj_12681175b02042825cf7c2a27b5db56d, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_12681175b02042825cf7c2a27b5db56d = cache_frame_12681175b02042825cf7c2a27b5db56d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12681175b02042825cf7c2a27b5db56d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12681175b02042825cf7c2a27b5db56d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfftn );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rfftn );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "rfftn" );
        exception_tb = NULL;

        exception_lineno = 1139;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_12681175b02042825cf7c2a27b5db56d->m_frame.f_lineno = 1139;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1139;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12681175b02042825cf7c2a27b5db56d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_12681175b02042825cf7c2a27b5db56d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12681175b02042825cf7c2a27b5db56d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12681175b02042825cf7c2a27b5db56d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12681175b02042825cf7c2a27b5db56d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12681175b02042825cf7c2a27b5db56d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12681175b02042825cf7c2a27b5db56d,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_12681175b02042825cf7c2a27b5db56d == cache_frame_12681175b02042825cf7c2a27b5db56d )
    {
        Py_DECREF( frame_12681175b02042825cf7c2a27b5db56d );
    }
    cache_frame_12681175b02042825cf7c2a27b5db56d = NULL;

    assertFrameObject( frame_12681175b02042825cf7c2a27b5db56d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_16_rfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_16_rfft2 );
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


static PyObject *impl_numpy$fft$fftpack$$$function_17_irfftn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
    PyObject *var_ii = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_0e36783e03145afa50887e5b8b05166d = NULL;

    struct Nuitka_FrameObject *frame_0e36783e03145afa50887e5b8b05166d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e36783e03145afa50887e5b8b05166d, codeobj_0e36783e03145afa50887e5b8b05166d, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0e36783e03145afa50887e5b8b05166d = cache_frame_0e36783e03145afa50887e5b8b05166d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e36783e03145afa50887e5b8b05166d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e36783e03145afa50887e5b8b05166d ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 1228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a02eb3206004e1dededd932dea2baa88 );
    frame_0e36783e03145afa50887e5b8b05166d->m_frame.f_lineno = 1228;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        assert( old != NULL );
        par_a = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__cook_nd_args );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_cook_nd_args" );
        exception_tb = NULL;

        exception_lineno = 1229;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_name_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = par_a;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_s;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_axes;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_dd45c77b755c75255009fd804f504c08 );
    frame_0e36783e03145afa50887e5b8b05166d->m_frame.f_lineno = 1229;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1229;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1229;
        type_description_1 = "ooooo";
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


        type_description_1 = "ooooo";
        exception_lineno = 1229;
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


        type_description_1 = "ooooo";
        exception_lineno = 1229;
        goto try_except_handler_3;
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

                type_description_1 = "ooooo";
                exception_lineno = 1229;
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
        exception_lineno = 1229;
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

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = par_s;
        assert( old != NULL );
        par_s = tmp_assign_source_5;
        Py_INCREF( par_s );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_6;
        Py_INCREF( par_axes );
        Py_DECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_len_arg_1 = par_axes;

    CHECK_OBJECT( tmp_len_arg_1 );
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1230;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_range_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1230;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1230;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1230;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooo";
            exception_lineno = 1230;
            goto try_except_handler_4;
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
        PyObject *old = var_ii;
        var_ii = tmp_assign_source_9;
        Py_INCREF( var_ii );
        Py_XDECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ifft );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ifft" );
        exception_tb = NULL;

        exception_lineno = 1231;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = par_a;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 1231;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_subscribed_name_1 = par_s;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = var_ii;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1231;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_subscribed_name_2 = par_axes;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = var_ii;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 1231;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_4 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_0e36783e03145afa50887e5b8b05166d->m_frame.f_lineno = 1231;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1231;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1230;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfft );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "irfft" );
        exception_tb = NULL;

        exception_lineno = 1232;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_a;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 1232;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_3 = par_s;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_neg_1;
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1232;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = par_axes;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_neg_1;
    tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 1232;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_0e36783e03145afa50887e5b8b05166d->m_frame.f_lineno = 1232;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1232;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }


#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e36783e03145afa50887e5b8b05166d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e36783e03145afa50887e5b8b05166d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e36783e03145afa50887e5b8b05166d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e36783e03145afa50887e5b8b05166d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e36783e03145afa50887e5b8b05166d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e36783e03145afa50887e5b8b05166d,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm,
        var_ii
    );


    // Release cached frame.
    if ( frame_0e36783e03145afa50887e5b8b05166d == cache_frame_0e36783e03145afa50887e5b8b05166d )
    {
        Py_DECREF( frame_0e36783e03145afa50887e5b8b05166d );
    }
    cache_frame_0e36783e03145afa50887e5b8b05166d = NULL;

    assertFrameObject( frame_0e36783e03145afa50887e5b8b05166d );

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
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_17_irfftn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

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

    Py_XDECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    Py_XDECREF( var_ii );
    var_ii = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_17_irfftn );
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


static PyObject *impl_numpy$fft$fftpack$$$function_18_irfft2( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_s = python_pars[ 1 ];
    PyObject *par_axes = python_pars[ 2 ];
    PyObject *par_norm = python_pars[ 3 ];
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
    static struct Nuitka_FrameObject *cache_frame_062e68c1efc8f196afb2c711a8ce60b8 = NULL;

    struct Nuitka_FrameObject *frame_062e68c1efc8f196afb2c711a8ce60b8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_062e68c1efc8f196afb2c711a8ce60b8, codeobj_062e68c1efc8f196afb2c711a8ce60b8, module_numpy$fft$fftpack, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_062e68c1efc8f196afb2c711a8ce60b8 = cache_frame_062e68c1efc8f196afb2c711a8ce60b8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_062e68c1efc8f196afb2c711a8ce60b8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_062e68c1efc8f196afb2c711a8ce60b8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfftn );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_irfftn );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "irfftn" );
        exception_tb = NULL;

        exception_lineno = 1270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_s;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_axes;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_norm;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_062e68c1efc8f196afb2c711a8ce60b8->m_frame.f_lineno = 1270;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1270;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_062e68c1efc8f196afb2c711a8ce60b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_062e68c1efc8f196afb2c711a8ce60b8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_062e68c1efc8f196afb2c711a8ce60b8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_062e68c1efc8f196afb2c711a8ce60b8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_062e68c1efc8f196afb2c711a8ce60b8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_062e68c1efc8f196afb2c711a8ce60b8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_062e68c1efc8f196afb2c711a8ce60b8,
        type_description_1,
        par_a,
        par_s,
        par_axes,
        par_norm
    );


    // Release cached frame.
    if ( frame_062e68c1efc8f196afb2c711a8ce60b8 == cache_frame_062e68c1efc8f196afb2c711a8ce60b8 )
    {
        Py_DECREF( frame_062e68c1efc8f196afb2c711a8ce60b8 );
    }
    cache_frame_062e68c1efc8f196afb2c711a8ce60b8 = NULL;

    assertFrameObject( frame_062e68c1efc8f196afb2c711a8ce60b8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_18_irfft2 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_axes );
    Py_DECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)par_norm );
    Py_DECREF( par_norm );
    par_norm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$fftpack$$$function_18_irfft2 );
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



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_10__raw_fftnd( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_10__raw_fftnd,
        const_str_plain__raw_fftnd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62dfa6929387e94272aa20d88b3676a7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_11_fftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_11_fftn,
        const_str_plain_fftn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c61db7f5862952dcd26059e1c132b026,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_24d3f300976d1f0b4094bd13ac30f8b0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_12_ifftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_12_ifftn,
        const_str_plain_ifftn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aee9ddf32f14db52e6c981861a070c4c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_53f6110acd950a9eb6f9eef15b0f9daa,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_13_fft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_13_fft2,
        const_str_plain_fft2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8e6400e290ece1abb205be94c5845942,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_950dc64ef6772674dbea217abe8be8b3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_14_ifft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_14_ifft2,
        const_str_plain_ifft2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce479a41a699acb927774d90fbc361ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_0e484a7e341d275f185007a474ec79cb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_15_rfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_15_rfftn,
        const_str_plain_rfftn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_299aec246675ce2e2e6b5be47bfceff1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_dbc10c3e332a8d966e8c779c64feee7f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_16_rfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_16_rfft2,
        const_str_plain_rfft2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_12681175b02042825cf7c2a27b5db56d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_67a439b64216fd79a420034aec6214a2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_17_irfftn( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_17_irfftn,
        const_str_plain_irfftn,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0e36783e03145afa50887e5b8b05166d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_5b8d182c21b80ce6cc93893e9bfd60b8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_18_irfft2( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_18_irfft2,
        const_str_plain_irfft2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_062e68c1efc8f196afb2c711a8ce60b8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_72f01e533c77be794cb83caa076fd016,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_1__raw_fft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_1__raw_fft,
        const_str_plain__raw_fft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f6615d8a52a8c677781097a2a000c1d9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_2__unitary(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_2__unitary,
        const_str_plain__unitary,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ce3cb8c38a914d5f1af338b6a4395959,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_3_fft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_3_fft,
        const_str_plain_fft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aad34e6872cc456b4bafe87ef9c6f015,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_5c9c7abd14e51c25cd57c2d5a1659d8b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_4_ifft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_4_ifft,
        const_str_plain_ifft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_555f8c37b5021381c50d71f0cf1e9116,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_e2e62bdc9ea89915ae0ff9e1b643f817,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_5_rfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_5_rfft,
        const_str_plain_rfft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53358051e1608cc0a976d9387a1084e0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_9ff4852d28cd7861483c7f88480ddc86,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_6_irfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_6_irfft,
        const_str_plain_irfft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_682614fe56318c3b7d74e3d5e0559da2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_01f1066a51923fba70f30d308247f079,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_7_hfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_7_hfft,
        const_str_plain_hfft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ceecae020dfda9ee7ce3912f21c32f7a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_e3b57a155d14f7030bedf77d7a70ca1e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_8_ihfft( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_8_ihfft,
        const_str_plain_ihfft,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f00d9455cc8607829d591f31283b89e5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        const_str_digest_c0d490a82d99d03062bec8127224c04c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$fftpack$$$function_9__cook_nd_args( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$fft$fftpack$$$function_9__cook_nd_args,
        const_str_plain__cook_nd_args,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_317bb658b0414e279d21bd207a57fbf9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$fftpack,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$fftpack =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.fftpack",   /* m_name */
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

MOD_INIT_DECL( numpy$fft$fftpack )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$fftpack );
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
    puts("numpy.fft.fftpack: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft.fftpack: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft$fftpack" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$fftpack = Py_InitModule4(
        "numpy.fft.fftpack",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$fft$fftpack = PyModule_Create( &mdef_numpy$fft$fftpack );
#endif

    moduledict_numpy$fft$fftpack = MODULE_DICT( module_numpy$fft$fftpack );

    CHECK_OBJECT( module_numpy$fft$fftpack );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_23098722ef505adb63be2b05fe120fdd, module_numpy$fft$fftpack );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    struct Nuitka_FrameObject *frame_337893ba858cd626089f9ea3f818bac6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_908e64f8abe07e7ca762be78e2dd2d4d;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2d1e18dbc777b58158ca02d4c734dde4;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_337893ba858cd626089f9ea3f818bac6 = MAKE_MODULE_FRAME( codeobj_337893ba858cd626089f9ea3f818bac6, module_numpy$fft$fftpack );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_337893ba858cd626089f9ea3f818bac6 );
    assert( Py_REFCNT( frame_337893ba858cd626089f9ea3f818bac6 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_assign_source_8 = LIST_COPY( const_list_60f473887d8c78e2f768e087222cf620_list );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft$fftpack;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_51c8848fc394aa1e51d5cda5f608f872_tuple;
    tmp_level_name_1 = const_int_0;
    frame_337893ba858cd626089f9ea3f818bac6->m_frame.f_lineno = 38;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_array );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_asarray );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_zeros );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_zeros, tmp_assign_source_12 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_swapaxes );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_swapaxes, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_shape );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_shape, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_conjugate );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_conjugate, tmp_assign_source_15 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_take );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_16 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_sqrt );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_sqrt, tmp_assign_source_17 );
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

    tmp_name_name_2 = const_str_empty;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft$fftpack;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_fftpack_lite_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_337893ba858cd626089f9ea3f818bac6->m_frame.f_lineno = 40;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_fftpack_lite );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack, tmp_assign_source_18 );
    tmp_name_name_3 = const_str_plain_helper;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft$fftpack;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain__FFTCache_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_337893ba858cd626089f9ea3f818bac6->m_frame.f_lineno = 41;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain__FFTCache );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__FFTCache, tmp_assign_source_19 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__FFTCache );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FFTCache );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_FFTCache" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_073d0317252e4445514a1773373206fe );
    frame_337893ba858cd626089f9ea3f818bac6->m_frame.f_lineno = 43;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache, tmp_assign_source_20 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__FFTCache );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__FFTCache );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_FFTCache" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_073d0317252e4445514a1773373206fe );
    frame_337893ba858cd626089f9ea3f818bac6->m_frame.f_lineno = 44;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__real_fft_cache, tmp_assign_source_21 );
    tmp_defaults_1 = PyTuple_New( 5 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_neg_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cffti );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftpack );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpack );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpack" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cfftf );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__fft_cache );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fft_cache );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_fft_cache" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_1 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_1__raw_fft( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fft, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_2__unitary(  );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__unitary, tmp_assign_source_23 );
    tmp_defaults_2 = const_tuple_none_int_neg_1_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_24 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_3_fft( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_24 );
    tmp_defaults_3 = const_tuple_none_int_neg_1_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_assign_source_25 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_4_ifft( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_25 );
    tmp_defaults_4 = const_tuple_none_int_neg_1_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_5_rfft( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft, tmp_assign_source_26 );
    tmp_defaults_5 = const_tuple_none_int_neg_1_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_6_irfft( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft, tmp_assign_source_27 );
    tmp_defaults_6 = const_tuple_none_int_neg_1_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_7_hfft( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_hfft, tmp_assign_source_28 );
    tmp_defaults_7 = const_tuple_none_int_neg_1_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_8_ihfft( tmp_defaults_7 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ihfft, tmp_assign_source_29 );
    tmp_defaults_8 = const_tuple_none_none_int_0_tuple;
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_9__cook_nd_args( tmp_defaults_8 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__cook_nd_args, tmp_assign_source_30 );
    tmp_defaults_9 = PyTuple_New( 4 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_9, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_9, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fft );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_defaults_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fft" );
        exception_tb = NULL;

        exception_lineno = 632;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_9, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_9, 3, tmp_tuple_element_2 );
    tmp_assign_source_31 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_10__raw_fftnd( tmp_defaults_9 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain__raw_fftnd, tmp_assign_source_31 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_337893ba858cd626089f9ea3f818bac6 );
#endif
    popFrameStack();

    assertFrameObject( frame_337893ba858cd626089f9ea3f818bac6 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_337893ba858cd626089f9ea3f818bac6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_337893ba858cd626089f9ea3f818bac6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_337893ba858cd626089f9ea3f818bac6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_337893ba858cd626089f9ea3f818bac6, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_defaults_10 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_10 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_11_fftn( tmp_defaults_10 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fftn, tmp_assign_source_32 );
    tmp_defaults_11 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_11 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_12_ifftn( tmp_defaults_11 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifftn, tmp_assign_source_33 );
    tmp_defaults_12 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
    Py_INCREF( tmp_defaults_12 );
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_13_fft2( tmp_defaults_12 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_fft2, tmp_assign_source_34 );
    tmp_defaults_13 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
    Py_INCREF( tmp_defaults_13 );
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_14_ifft2( tmp_defaults_13 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_ifft2, tmp_assign_source_35 );
    tmp_defaults_14 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_14 );
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_15_rfftn( tmp_defaults_14 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfftn, tmp_assign_source_36 );
    tmp_defaults_15 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
    Py_INCREF( tmp_defaults_15 );
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_16_rfft2( tmp_defaults_15 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_rfft2, tmp_assign_source_37 );
    tmp_defaults_16 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_16 );
    tmp_assign_source_38 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_17_irfftn( tmp_defaults_16 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfftn, tmp_assign_source_38 );
    tmp_defaults_17 = const_tuple_none_tuple_int_neg_2_int_neg_1_tuple_none_tuple;
    Py_INCREF( tmp_defaults_17 );
    tmp_assign_source_39 = MAKE_FUNCTION_numpy$fft$fftpack$$$function_18_irfft2( tmp_defaults_17 );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$fftpack, (Nuitka_StringObject *)const_str_plain_irfft2, tmp_assign_source_39 );

    return MOD_RETURN_VALUE( module_numpy$fft$fftpack );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
