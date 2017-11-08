/* Generated code for Python source for module 'numpy.ctypeslib'
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

/* The _module_numpy$ctypeslib is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$ctypeslib;
PyDictObject *moduledict_numpy$ctypeslib;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain__ndim_;
static PyObject *const_str_plain_prep_pointer;
extern PyObject *const_str_plain_data;
static PyObject *const_str_digest_d9a6c45fcf44af5918c67465b2eae108;
static PyObject *const_tuple_str_plain_intp_tuple;
static PyObject *const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple;
extern PyObject *const_str_plain_tp;
static PyObject *const_str_digest_d9e2e8232b677ebaff782fb5a24aaa12;
static PyObject *const_tuple_str_plain_args_str_plain_kwds_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_nic;
static PyObject *const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain__shape_;
static PyObject *const_str_plain__dummy;
static PyObject *const_str_plain__ndptr;
static PyObject *const_str_digest_3fda54a2a4a66d402bf3d39862ea704c;
static PyObject *const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_c_byte;
extern PyObject *const_str_plain_descr;
static PyObject *const_str_plain_sizeof;
static PyObject *const_str_digest_b7e30228f3e0c93bffaadd92e3c2a96d;
static PyObject *const_list_a3141bdf77735564bbf18197c00a6f94_list;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_simple_types;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_ext;
static PyObject *const_str_plain___keep;
static PyObject *const_str_digest_6d315605648e433b0f5827b4d0f11ccf;
static PyObject *const_str_plain_cdll;
static PyObject *const_str_digest_1da87a8dd68efa7aad16166393ba2ffe;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_c_long;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_libdir;
static PyObject *const_str_plain_flagsobj;
static PyObject *const_str_plain__flags_fromnum;
static PyObject *const_str_plain_inter;
static PyObject *const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple;
static PyObject *const_str_plain_OWNDATA;
static PyObject *const_str_plain_c_uint;
static PyObject *const_str_plain_so_ext2;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_abspath;
static PyObject *const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple;
static PyObject *const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple;
extern PyObject *const_str_plain_value;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
static PyObject *const_str_digest_73590e51d1e1c9cc5fecc41c3633ed39;
static PyObject *const_list_54194ab635e74563c5cfcba2eda8536d_list;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_c_short;
static PyObject *const_str_plain__num_fromflags;
static PyObject *const_str_digest_e176ec4552c1af79187e477f4e60b3b6;
static PyObject *const_str_plain__ARRAY_TYPE;
static PyObject *const_str_digest_b63e97201afff05bc02e60c6633f99a8;
static PyObject *const_str_plain_addr;
static PyObject *const_str_plain_prep_simple;
extern PyObject *const_str_plain_upper;
static PyObject *const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_prep_array;
extern PyObject *const_str_plain__getintp_ctype;
static PyObject *const_str_digest_5cf4127836c26da1953714e7d0bbc0bd;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_dim;
static PyObject *const_str_digest_5c326258629e22294a67a54ecf742b9b;
extern PyObject *const_str_plain_readonly;
static PyObject *const_str_plain__type_;
static PyObject *const_str_plain_c_ushort;
static PyObject *const_str_plain_contents;
static PyObject *const_str_plain_loader_path;
extern PyObject *const_str_plain_c_longlong;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e495f158835bada9803dca4da4e5b652;
static PyObject *const_str_plain_libpath;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_as_array;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_42b99953faf416ce9a2ec59abf13efa0;
static PyObject *const_str_digest_b3e01b7f6fe965902fb0f2c5fe538d06;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_e2804ac65c6fbdd5accf55e43cffbd99;
static PyObject *const_str_plain_get_shared_lib_extension;
static PyObject *const_str_plain__typecodes;
static PyObject *const_str_plain_simple_type;
extern PyObject *const_str_plain_strides;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_648cc759900d37d74b7f6205ed6a23df;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_exists;
static PyObject *const_str_plain_flaglist;
static PyObject *const_str_digest_d3a31592cd8c822f5811917362887051;
static PyObject *const_str_plain_C_CONTIGUOUS;
static PyObject *const_str_digest_e37af17a5b24336f26d24dc610638b8f;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_chr_44;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_str_plain_so_ext;
static PyObject *const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70;
extern PyObject *const_str_plain_ai;
static PyObject *const_str_plain__flagdict;
static PyObject *const_str_plain__flagnames;
extern PyObject *const_str_plain___array_interface__;
static PyObject *const_str_plain___ref;
static PyObject *const_str_plain_c_float;
extern PyObject *const_str_plain_ctypes;
static PyObject *const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_as_ctypes;
static PyObject *const_str_plain_c_intp;
static PyObject *const_str_plain_strshape;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_none_none_none_none_tuple;
static PyObject *const_str_plain_from_address;
static PyObject *const_str_plain__check_retval_;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_digest_770dfc7c45a247e1a34a824431aca553;
static PyObject *const_str_digest_736f1bf9d66cc81139d4e3af71316535;
static PyObject *const_str_plain_UPDATEIFCOPY;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_ob;
extern PyObject *const_str_plain__internal;
static PyObject *const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple;
static PyObject *const_str_plain_libname;
static PyObject *const_str_plain_addressof;
static PyObject *const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple;
static PyObject *const_str_plain_from_param;
static PyObject *const_str_digest_a2941e7fbded98383d41b07f0ec64d12;
static PyObject *const_str_plain_is_python_ext;
static PyObject *const_str_plain_libname_ext;
static PyObject *const_dict_28a8d78f880d037d2aa990c97d5eaf57;
static PyObject *const_str_plain__ndptr_base;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain__;
static PyObject *const_str_digest_b71718e9ee231439014d32459ca5aebb;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_test;
static PyObject *const_str_digest_6e67341cb4da9db91dba5c39139bf34f;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_klass;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_x;
static PyObject *const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_key;
static PyObject *const_str_digest_a1c179c92fdc674608c39fa15e8cce51;
static PyObject *const_str_digest_5b09d61a27343621d029a01f97434bb3;
static PyObject *const_str_digest_462731c6abdb66ce201ddc39b13bc596;
static PyObject *const_str_plain_ctypes_load_library;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_plain_WRITEABLE;
static PyObject *const_str_plain_F_CONTIGUOUS;
static PyObject *const_str_plain_isdir;
extern PyObject *const_str_plain_array_type;
static PyObject *const_str_plain_ndpointer;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_plain_splitext;
static PyObject *const_str_plain_pointer_obj;
static PyObject *const_str_plain_ct;
extern PyObject *const_str_plain__dtype;
static PyObject *const_tuple_7012641a4a60334c6f085068be27397e_tuple;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain_deprecate;
static PyObject *const_str_digest_a5fd5fde618a1101906733f10cb3f59d;
static PyObject *const_str_digest_8ad18dc7e52200f94f56a47ed39b3f14;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_types;
static PyObject *const_str_plain__pointer_type_cache;
static PyObject *const_tuple_str_plain_get_shared_lib_extension_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_c_ubyte;
extern PyObject *const_int_0;
static PyObject *const_str_plain_ln;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_typestr;
static PyObject *const_str_plain_c_double;
static PyObject *const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_c_int;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_any;
static PyObject *const_str_plain_ALIGNED;
static PyObject *const_str_digest_f5e907abd3e6b65a3054d68a931223cf;
static PyObject *const_str_plain__dtype_;
static PyObject *const_str_plain_code;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_cls_str_plain_obj_tuple;
static PyObject *const_str_plain__flags_;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_c_ulong;
static PyObject *const_str_digest_a9e44db0a1490ce98218807379f1405e;
static PyObject *const_str_plain_load_library;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_kwds;
static PyObject *const_str_plain_c_ulonglong;
static PyObject *const_tuple_str_plain_self_str_plain_typestr_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__length_;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__ndim_ = UNSTREAM_STRING( &constant_bin[ 546934 ], 6, 1 );
    const_str_plain_prep_pointer = UNSTREAM_STRING( &constant_bin[ 546940 ], 12, 1 );
    const_str_digest_d9a6c45fcf44af5918c67465b2eae108 = UNSTREAM_STRING( &constant_bin[ 546952 ], 27, 0 );
    const_tuple_str_plain_intp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_intp_tuple, 0, const_str_plain_intp ); Py_INCREF( const_str_plain_intp );
    const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple = PyTuple_New( 5 );
    const_str_plain_pointer_obj = UNSTREAM_STRING( &constant_bin[ 546979 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 0, const_str_plain_pointer_obj ); Py_INCREF( const_str_plain_pointer_obj );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_contents = UNSTREAM_STRING( &constant_bin[ 14939 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 2, const_str_plain_contents ); Py_INCREF( const_str_plain_contents );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 3, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_inter = UNSTREAM_STRING( &constant_bin[ 10004 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 4, const_str_plain_inter ); Py_INCREF( const_str_plain_inter );
    const_str_digest_d9e2e8232b677ebaff782fb5a24aaa12 = UNSTREAM_STRING( &constant_bin[ 546990 ], 5, 0 );
    const_tuple_str_plain_args_str_plain_kwds_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_plain_nic = UNSTREAM_STRING( &constant_bin[ 13672 ], 3, 1 );
    const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 1, const_str_plain_descr ); Py_INCREF( const_str_plain_descr );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_typestr = UNSTREAM_STRING( &constant_bin[ 56708 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 3, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    const_str_plain__shape_ = UNSTREAM_STRING( &constant_bin[ 546995 ], 7, 1 );
    const_str_plain__dummy = UNSTREAM_STRING( &constant_bin[ 547002 ], 6, 1 );
    const_str_plain__ndptr = UNSTREAM_STRING( &constant_bin[ 547008 ], 6, 1 );
    const_str_digest_3fda54a2a4a66d402bf3d39862ea704c = UNSTREAM_STRING( &constant_bin[ 547014 ], 31, 0 );
    const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 0, const_str_plain_array_type ); Py_INCREF( const_str_plain_array_type );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    const_str_plain_ob = UNSTREAM_STRING( &constant_bin[ 616 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 2, const_str_plain_ob ); Py_INCREF( const_str_plain_ob );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 3, const_str_plain_ai ); Py_INCREF( const_str_plain_ai );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 4, const_str_plain_descr ); Py_INCREF( const_str_plain_descr );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 5, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    PyTuple_SET_ITEM( const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 6, const_str_plain___array_interface__ ); Py_INCREF( const_str_plain___array_interface__ );
    const_str_plain_c_byte = UNSTREAM_STRING( &constant_bin[ 547045 ], 6, 1 );
    const_str_plain_sizeof = UNSTREAM_STRING( &constant_bin[ 547051 ], 6, 1 );
    const_str_digest_b7e30228f3e0c93bffaadd92e3c2a96d = UNSTREAM_STRING( &constant_bin[ 547057 ], 24, 0 );
    const_list_a3141bdf77735564bbf18197c00a6f94_list = PyList_New( 6 );
    const_str_plain_C_CONTIGUOUS = UNSTREAM_STRING( &constant_bin[ 64597 ], 12, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 0, const_str_plain_C_CONTIGUOUS ); Py_INCREF( const_str_plain_C_CONTIGUOUS );
    const_str_plain_F_CONTIGUOUS = UNSTREAM_STRING( &constant_bin[ 64623 ], 12, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 1, const_str_plain_F_CONTIGUOUS ); Py_INCREF( const_str_plain_F_CONTIGUOUS );
    const_str_plain_ALIGNED = UNSTREAM_STRING( &constant_bin[ 62870 ], 7, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 2, const_str_plain_ALIGNED ); Py_INCREF( const_str_plain_ALIGNED );
    const_str_plain_WRITEABLE = UNSTREAM_STRING( &constant_bin[ 62859 ], 9, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 3, const_str_plain_WRITEABLE ); Py_INCREF( const_str_plain_WRITEABLE );
    const_str_plain_OWNDATA = UNSTREAM_STRING( &constant_bin[ 64650 ], 7, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 4, const_str_plain_OWNDATA ); Py_INCREF( const_str_plain_OWNDATA );
    const_str_plain_UPDATEIFCOPY = UNSTREAM_STRING( &constant_bin[ 62883 ], 12, 1 );
    PyList_SET_ITEM( const_list_a3141bdf77735564bbf18197c00a6f94_list, 5, const_str_plain_UPDATEIFCOPY ); Py_INCREF( const_str_plain_UPDATEIFCOPY );
    const_str_plain_simple_types = UNSTREAM_STRING( &constant_bin[ 547081 ], 12, 1 );
    const_str_plain___keep = UNSTREAM_STRING( &constant_bin[ 547093 ], 6, 1 );
    const_str_digest_6d315605648e433b0f5827b4d0f11ccf = UNSTREAM_STRING( &constant_bin[ 547099 ], 25, 0 );
    const_str_plain_cdll = UNSTREAM_STRING( &constant_bin[ 547124 ], 4, 1 );
    const_str_digest_1da87a8dd68efa7aad16166393ba2ffe = UNSTREAM_STRING( &constant_bin[ 547128 ], 1603, 0 );
    const_str_plain_libdir = UNSTREAM_STRING( &constant_bin[ 548731 ], 6, 1 );
    const_str_plain_flagsobj = UNSTREAM_STRING( &constant_bin[ 548737 ], 8, 1 );
    const_str_plain__flags_fromnum = UNSTREAM_STRING( &constant_bin[ 548745 ], 14, 1 );
    const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 0, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 1, const_str_plain_ndarray ); Py_INCREF( const_str_plain_ndarray );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 3, const_str_plain_deprecate ); Py_INCREF( const_str_plain_deprecate );
    PyTuple_SET_ITEM( const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple, 4, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    const_str_plain_c_uint = UNSTREAM_STRING( &constant_bin[ 548759 ], 6, 1 );
    const_str_plain_so_ext2 = UNSTREAM_STRING( &constant_bin[ 548765 ], 7, 1 );
    const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple = PyTuple_New( 1 );
    const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70 = UNSTREAM_STRING( &constant_bin[ 548772 ], 65, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple, 0, const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70 ); Py_INCREF( const_str_digest_52b1aa567e3e4e0d7f7d700f99899d70 );
    const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 2, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    const_str_digest_73590e51d1e1c9cc5fecc41c3633ed39 = UNSTREAM_STRING( &constant_bin[ 548837 ], 131, 0 );
    const_list_54194ab635e74563c5cfcba2eda8536d_list = PyList_New( 7 );
    const_str_plain_load_library = UNSTREAM_STRING( &constant_bin[ 548968 ], 12, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 0, const_str_plain_load_library ); Py_INCREF( const_str_plain_load_library );
    const_str_plain_ndpointer = UNSTREAM_STRING( &constant_bin[ 547174 ], 9, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 1, const_str_plain_ndpointer ); Py_INCREF( const_str_plain_ndpointer );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 2, const_str_plain_test ); Py_INCREF( const_str_plain_test );
    const_str_plain_ctypes_load_library = UNSTREAM_STRING( &constant_bin[ 548980 ], 19, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 3, const_str_plain_ctypes_load_library ); Py_INCREF( const_str_plain_ctypes_load_library );
    const_str_plain_c_intp = UNSTREAM_STRING( &constant_bin[ 128803 ], 6, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 4, const_str_plain_c_intp ); Py_INCREF( const_str_plain_c_intp );
    const_str_plain_as_ctypes = UNSTREAM_STRING( &constant_bin[ 548999 ], 9, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 5, const_str_plain_as_ctypes ); Py_INCREF( const_str_plain_as_ctypes );
    const_str_plain_as_array = UNSTREAM_STRING( &constant_bin[ 549008 ], 8, 1 );
    PyList_SET_ITEM( const_list_54194ab635e74563c5cfcba2eda8536d_list, 6, const_str_plain_as_array ); Py_INCREF( const_str_plain_as_array );
    const_str_plain_c_short = UNSTREAM_STRING( &constant_bin[ 129976 ], 7, 1 );
    const_str_plain__num_fromflags = UNSTREAM_STRING( &constant_bin[ 549016 ], 14, 1 );
    const_str_digest_e176ec4552c1af79187e477f4e60b3b6 = UNSTREAM_STRING( &constant_bin[ 549030 ], 169, 0 );
    const_str_plain__ARRAY_TYPE = UNSTREAM_STRING( &constant_bin[ 549199 ], 11, 1 );
    const_str_digest_b63e97201afff05bc02e60c6633f99a8 = UNSTREAM_STRING( &constant_bin[ 549210 ], 143, 0 );
    const_str_plain_addr = UNSTREAM_STRING( &constant_bin[ 95664 ], 4, 1 );
    const_str_plain_prep_simple = UNSTREAM_STRING( &constant_bin[ 549353 ], 11, 1 );
    const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple = PyTuple_New( 2 );
    const_str_plain__flagdict = UNSTREAM_STRING( &constant_bin[ 549364 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple, 0, const_str_plain__flagdict ); Py_INCREF( const_str_plain__flagdict );
    PyTuple_SET_ITEM( const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple, 1, const_str_plain_flagsobj ); Py_INCREF( const_str_plain_flagsobj );
    const_str_plain_prep_array = UNSTREAM_STRING( &constant_bin[ 549373 ], 10, 1 );
    const_str_digest_5cf4127836c26da1953714e7d0bbc0bd = UNSTREAM_STRING( &constant_bin[ 549383 ], 24, 0 );
    const_str_digest_5c326258629e22294a67a54ecf742b9b = UNSTREAM_STRING( &constant_bin[ 128057 ], 15, 0 );
    const_str_plain__type_ = UNSTREAM_STRING( &constant_bin[ 549407 ], 6, 1 );
    const_str_plain_c_ushort = UNSTREAM_STRING( &constant_bin[ 549413 ], 8, 1 );
    const_str_plain_loader_path = UNSTREAM_STRING( &constant_bin[ 549421 ], 11, 1 );
    const_str_digest_e495f158835bada9803dca4da4e5b652 = UNSTREAM_STRING( &constant_bin[ 549432 ], 48, 0 );
    const_str_plain_libpath = UNSTREAM_STRING( &constant_bin[ 549480 ], 7, 1 );
    const_str_digest_42b99953faf416ce9a2ec59abf13efa0 = UNSTREAM_STRING( &constant_bin[ 549487 ], 24, 0 );
    const_str_digest_b3e01b7f6fe965902fb0f2c5fe538d06 = UNSTREAM_STRING( &constant_bin[ 549511 ], 1317, 0 );
    const_str_digest_e2804ac65c6fbdd5accf55e43cffbd99 = UNSTREAM_STRING( &constant_bin[ 550828 ], 130, 0 );
    const_str_plain_get_shared_lib_extension = UNSTREAM_STRING( &constant_bin[ 550958 ], 24, 1 );
    const_str_plain__typecodes = UNSTREAM_STRING( &constant_bin[ 550982 ], 10, 1 );
    const_str_plain_simple_type = UNSTREAM_STRING( &constant_bin[ 547081 ], 11, 1 );
    const_str_digest_648cc759900d37d74b7f6205ed6a23df = UNSTREAM_STRING( &constant_bin[ 550992 ], 874, 0 );
    const_str_plain_flaglist = UNSTREAM_STRING( &constant_bin[ 551866 ], 8, 1 );
    const_str_digest_d3a31592cd8c822f5811917362887051 = UNSTREAM_STRING( &constant_bin[ 551874 ], 27, 0 );
    const_str_digest_e37af17a5b24336f26d24dc610638b8f = UNSTREAM_STRING( &constant_bin[ 551901 ], 4, 0 );
    const_str_plain_so_ext = UNSTREAM_STRING( &constant_bin[ 548765 ], 6, 1 );
    const_str_plain__flagnames = UNSTREAM_STRING( &constant_bin[ 551905 ], 10, 1 );
    const_str_plain___ref = UNSTREAM_STRING( &constant_bin[ 551915 ], 5, 1 );
    const_str_plain_c_float = UNSTREAM_STRING( &constant_bin[ 551920 ], 7, 1 );
    const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 0, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 2, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 3, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 4, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 5, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 6, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_strshape = UNSTREAM_STRING( &constant_bin[ 551927 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 7, const_str_plain_strshape ); Py_INCREF( const_str_plain_strshape );
    PyTuple_SET_ITEM( const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 8, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    const_tuple_none_none_none_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain_from_address = UNSTREAM_STRING( &constant_bin[ 551935 ], 12, 1 );
    const_str_plain__check_retval_ = UNSTREAM_STRING( &constant_bin[ 551947 ], 14, 1 );
    const_str_digest_736f1bf9d66cc81139d4e3af71316535 = UNSTREAM_STRING( &constant_bin[ 551961 ], 12, 0 );
    const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple, 0, const_str_plain___module__ ); Py_INCREF( const_str_plain___module__ );
    PyTuple_SET_ITEM( const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple, 1, const_str_plain__check_retval_ ); Py_INCREF( const_str_plain__check_retval_ );
    PyTuple_SET_ITEM( const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple, 2, const_str_plain___array_interface__ ); Py_INCREF( const_str_plain___array_interface__ );
    const_str_plain_from_param = UNSTREAM_STRING( &constant_bin[ 551973 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple, 3, const_str_plain_from_param ); Py_INCREF( const_str_plain_from_param );
    const_str_plain_libname = UNSTREAM_STRING( &constant_bin[ 551380 ], 7, 1 );
    const_str_plain_addressof = UNSTREAM_STRING( &constant_bin[ 551983 ], 9, 1 );
    const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 0, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_a2941e7fbded98383d41b07f0ec64d12 = UNSTREAM_STRING( &constant_bin[ 551992 ], 287, 0 );
    const_str_plain_is_python_ext = UNSTREAM_STRING( &constant_bin[ 552279 ], 13, 1 );
    const_str_plain_libname_ext = UNSTREAM_STRING( &constant_bin[ 552292 ], 11, 1 );
    const_dict_28a8d78f880d037d2aa990c97d5eaf57 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_28a8d78f880d037d2aa990c97d5eaf57, const_str_plain_is_python_ext, Py_True );
    assert( PyDict_Size( const_dict_28a8d78f880d037d2aa990c97d5eaf57 ) == 1 );
    const_str_plain__ndptr_base = UNSTREAM_STRING( &constant_bin[ 552303 ], 11, 1 );
    const_str_digest_b71718e9ee231439014d32459ca5aebb = UNSTREAM_STRING( &constant_bin[ 552314 ], 177, 0 );
    const_str_digest_6e67341cb4da9db91dba5c39139bf34f = UNSTREAM_STRING( &constant_bin[ 552491 ], 4, 0 );
    const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 0, const_str_plain_flaglist ); Py_INCREF( const_str_plain_flaglist );
    PyTuple_SET_ITEM( const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 1, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 0, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 1, const_str_plain_ai ); Py_INCREF( const_str_plain_ai );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 2, const_str_plain_addr ); Py_INCREF( const_str_plain_addr );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 3, const_str_plain_readonly ); Py_INCREF( const_str_plain_readonly );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 4, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 5, const_str_plain_dim ); Py_INCREF( const_str_plain_dim );
    PyTuple_SET_ITEM( const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_a1c179c92fdc674608c39fa15e8cce51 = UNSTREAM_STRING( &constant_bin[ 552495 ], 44, 0 );
    const_str_digest_5b09d61a27343621d029a01f97434bb3 = UNSTREAM_STRING( &constant_bin[ 552539 ], 28, 0 );
    const_str_digest_462731c6abdb66ce201ddc39b13bc596 = UNSTREAM_STRING( &constant_bin[ 552567 ], 31, 0 );
    const_str_plain_isdir = UNSTREAM_STRING( &constant_bin[ 552598 ], 5, 1 );
    const_str_plain_ct = UNSTREAM_STRING( &constant_bin[ 47 ], 2, 1 );
    const_tuple_7012641a4a60334c6f085068be27397e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 0, const_str_plain_simple_type ); Py_INCREF( const_str_plain_simple_type );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 1, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 2, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    PyTuple_SET_ITEM( const_tuple_7012641a4a60334c6f085068be27397e_tuple, 3, const_str_plain___array_interface__ ); Py_INCREF( const_str_plain___array_interface__ );
    const_str_digest_a5fd5fde618a1101906733f10cb3f59d = UNSTREAM_STRING( &constant_bin[ 552603 ], 28, 0 );
    const_str_digest_8ad18dc7e52200f94f56a47ed39b3f14 = UNSTREAM_STRING( &constant_bin[ 552631 ], 27, 0 );
    const_str_plain__pointer_type_cache = UNSTREAM_STRING( &constant_bin[ 552658 ], 19, 1 );
    const_tuple_str_plain_get_shared_lib_extension_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_shared_lib_extension_tuple, 0, const_str_plain_get_shared_lib_extension ); Py_INCREF( const_str_plain_get_shared_lib_extension );
    const_str_plain_c_ubyte = UNSTREAM_STRING( &constant_bin[ 552677 ], 7, 1 );
    const_str_plain_ln = UNSTREAM_STRING( &constant_bin[ 233967 ], 2, 1 );
    const_str_plain_c_double = UNSTREAM_STRING( &constant_bin[ 129839 ], 8, 1 );
    const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 0, const_str_plain_libname ); Py_INCREF( const_str_plain_libname );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 1, const_str_plain_loader_path ); Py_INCREF( const_str_plain_loader_path );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 2, const_str_plain_warnings ); Py_INCREF( const_str_plain_warnings );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 3, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 4, const_str_plain_get_shared_lib_extension ); Py_INCREF( const_str_plain_get_shared_lib_extension );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 5, const_str_plain_so_ext ); Py_INCREF( const_str_plain_so_ext );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 6, const_str_plain_libname_ext ); Py_INCREF( const_str_plain_libname_ext );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 7, const_str_plain_so_ext2 ); Py_INCREF( const_str_plain_so_ext2 );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 8, const_str_plain_libdir ); Py_INCREF( const_str_plain_libdir );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 9, const_str_plain_ln ); Py_INCREF( const_str_plain_ln );
    PyTuple_SET_ITEM( const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 10, const_str_plain_libpath ); Py_INCREF( const_str_plain_libpath );
    const_str_digest_f5e907abd3e6b65a3054d68a931223cf = UNSTREAM_STRING( &constant_bin[ 552684 ], 24, 0 );
    const_str_plain__dtype_ = UNSTREAM_STRING( &constant_bin[ 241319 ], 7, 1 );
    const_str_plain_code = UNSTREAM_STRING( &constant_bin[ 13674 ], 4, 1 );
    const_tuple_str_plain_cls_str_plain_obj_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_obj_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_obj_tuple, 1, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    const_str_plain__flags_ = UNSTREAM_STRING( &constant_bin[ 548745 ], 7, 1 );
    const_str_plain_c_ulong = UNSTREAM_STRING( &constant_bin[ 552708 ], 7, 1 );
    const_str_digest_a9e44db0a1490ce98218807379f1405e = UNSTREAM_STRING( &constant_bin[ 552715 ], 132, 0 );
    const_str_plain_c_ulonglong = UNSTREAM_STRING( &constant_bin[ 552847 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_typestr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_typestr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_typestr_tuple, 1, const_str_plain_typestr ); Py_INCREF( const_str_plain_typestr );
    const_str_plain__length_ = UNSTREAM_STRING( &constant_bin[ 552858 ], 8, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$ctypeslib( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c15317c0f984b29ee1789812a12be6fc;
static PyCodeObject *codeobj_28c167a863e01f34d9e629882fea4cb0;
static PyCodeObject *codeobj_a6714fa96db096713895c837e09624fe;
static PyCodeObject *codeobj_89cdb4d6d9300d80cd1f7bd6c64a23df;
static PyCodeObject *codeobj_35f4303919e37237c82abdeacc4730cc;
static PyCodeObject *codeobj_d70aff9f820a53bd8d3ac0d6690487e4;
static PyCodeObject *codeobj_7bc2a7436a4e67296e0b260c8cf5e646;
static PyCodeObject *codeobj_6b256e915fd1a9a49c2f3fa8c3046482;
static PyCodeObject *codeobj_c2ce2952a37490286ad64769ee9d3659;
static PyCodeObject *codeobj_6fc001f9e61e53e0fee2537e9127d8ec;
static PyCodeObject *codeobj_26a7adfcb56e57d37668f645c8a630dd;
static PyCodeObject *codeobj_6f10ea83b082c3a0a86f18fa5b03394c;
static PyCodeObject *codeobj_ddfb93a264e499aa40965e85590a7fc0;
static PyCodeObject *codeobj_76b29fa607acd986250f6b7b037f951f;
static PyCodeObject *codeobj_036ad7ef2aff533e543392e9d1ae0131;
static PyCodeObject *codeobj_d12402fd91f04a235aed2166b84f2a3e;
static PyCodeObject *codeobj_db737288a38ad4dbd93c991cce8a18d9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e495f158835bada9803dca4da4e5b652;
    codeobj_c15317c0f984b29ee1789812a12be6fc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_b7e30228f3e0c93bffaadd92e3c2a96d, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_28c167a863e01f34d9e629882fea4cb0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_interface__, 185, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a6714fa96db096713895c837e09624fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_interface__, 341, const_tuple_str_plain_self_str_plain_typestr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_89cdb4d6d9300d80cd1f7bd6c64a23df = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_interface__, 387, const_tuple_bffb18c809c7b2573227b9b259979d6e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_35f4303919e37237c82abdeacc4730cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_retval_, 179, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d70aff9f820a53bd8d3ac0d6690487e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dummy, 67, const_tuple_str_plain_args_str_plain_kwds_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7bc2a7436a4e67296e0b260c8cf5e646 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__flags_fromnum, 168, const_tuple_str_plain_num_str_plain_res_str_plain_key_str_plain_value_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6b256e915fd1a9a49c2f3fa8c3046482 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ndptr, 177, const_tuple_bc30c35d4f2a006b1077f640f3af387c_tuple, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c2ce2952a37490286ad64769ee9d3659 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__num_fromflags, 160, const_tuple_str_plain_flaglist_str_plain_num_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6fc001f9e61e53e0fee2537e9127d8ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_array, 421, const_tuple_str_plain_obj_str_plain_shape_str_plain_tp_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_26a7adfcb56e57d37668f645c8a630dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_as_ctypes, 437, const_tuple_970d9a7f1857268f14c1404c6d8da076_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6f10ea83b082c3a0a86f18fa5b03394c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_param, 196, const_tuple_str_plain_cls_str_plain_obj_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ddfb93a264e499aa40965e85590a7fc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_library, 91, const_tuple_3116bee7b3b7702766dce693a1a4ef17_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_76b29fa607acd986250f6b7b037f951f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ndpointer, 219, const_tuple_5e2a7ec24a26b095054157b803d007e6_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_036ad7ef2aff533e543392e9d1ae0131 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prep_array, 369, const_tuple_b7f5d815b527e10e3cf048fcff7a6094_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d12402fd91f04a235aed2166b84f2a3e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prep_pointer, 399, const_tuple_eacc76a6a954c874f2061d4123d25fe1_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_db737288a38ad4dbd93c991cce8a18d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prep_simple, 330, const_tuple_7012641a4a60334c6f085068be27397e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_10_prep_array(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__( struct Nuitka_CellObject *closure_descr, struct Nuitka_CellObject *closure_shape, struct Nuitka_CellObject *closure_typestr );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_11_prep_pointer(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_12_as_array( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_13_as_ctypes(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_1__dummy(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_2_load_library(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_3__num_fromflags(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_4__flags_fromnum(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_5__check_retval_(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_6___array_interface__(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_7_from_param(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_8_ndpointer( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_9_prep_simple(  );


static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__( struct Nuitka_CellObject *closure_typestr );


// The module function definitions.
static PyObject *impl_numpy$ctypeslib$$$function_1__dummy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    static struct Nuitka_FrameObject *cache_frame_d70aff9f820a53bd8d3ac0d6690487e4 = NULL;

    struct Nuitka_FrameObject *frame_d70aff9f820a53bd8d3ac0d6690487e4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d70aff9f820a53bd8d3ac0d6690487e4, codeobj_d70aff9f820a53bd8d3ac0d6690487e4, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *) );
    frame_d70aff9f820a53bd8d3ac0d6690487e4 = cache_frame_d70aff9f820a53bd8d3ac0d6690487e4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d70aff9f820a53bd8d3ac0d6690487e4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d70aff9f820a53bd8d3ac0d6690487e4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_make_exception_arg_1 = const_str_digest_42b99953faf416ce9a2ec59abf13efa0;
    frame_d70aff9f820a53bd8d3ac0d6690487e4->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 77;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d70aff9f820a53bd8d3ac0d6690487e4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d70aff9f820a53bd8d3ac0d6690487e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d70aff9f820a53bd8d3ac0d6690487e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d70aff9f820a53bd8d3ac0d6690487e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d70aff9f820a53bd8d3ac0d6690487e4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d70aff9f820a53bd8d3ac0d6690487e4,
        type_description_1,
        par_args,
        par_kwds
    );


    // Release cached frame.
    if ( frame_d70aff9f820a53bd8d3ac0d6690487e4 == cache_frame_d70aff9f820a53bd8d3ac0d6690487e4 )
    {
        Py_DECREF( frame_d70aff9f820a53bd8d3ac0d6690487e4 );
    }
    cache_frame_d70aff9f820a53bd8d3ac0d6690487e4 = NULL;

    assertFrameObject( frame_d70aff9f820a53bd8d3ac0d6690487e4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_1__dummy );
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_1__dummy );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_numpy$ctypeslib$$$function_2_load_library( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_libname = python_pars[ 0 ];
    PyObject *par_loader_path = python_pars[ 1 ];
    PyObject *var_warnings = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_get_shared_lib_extension = NULL;
    PyObject *var_so_ext = NULL;
    PyObject *var_libname_ext = NULL;
    PyObject *var_so_ext2 = NULL;
    PyObject *var_libdir = NULL;
    PyObject *var_ln = NULL;
    PyObject *var_libpath = NULL;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_next_source_1;
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
    PyObject *tmp_source_name_10;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ddfb93a264e499aa40965e85590a7fc0 = NULL;

    struct Nuitka_FrameObject *frame_ddfb93a264e499aa40965e85590a7fc0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ddfb93a264e499aa40965e85590a7fc0, codeobj_ddfb93a264e499aa40965e85590a7fc0, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ddfb93a264e499aa40965e85590a7fc0 = cache_frame_ddfb93a264e499aa40965e85590a7fc0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ddfb93a264e499aa40965e85590a7fc0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ddfb93a264e499aa40965e85590a7fc0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___version__ );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_digest_d9e2e8232b677ebaff782fb5a24aaa12;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
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
    tmp_name_name_1 = const_str_plain_warnings;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 120;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_warnings == NULL );
    var_warnings = tmp_assign_source_1;

    tmp_source_name_2 = var_warnings;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = const_tuple_str_digest_52b1aa567e3e4e0d7f7d700f99899d70_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 121;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_libname;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_splitext, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ext == NULL );
    var_ext = tmp_assign_source_2;

    tmp_cond_value_1 = var_ext;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooooooo";
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
    tmp_name_name_2 = const_str_digest_6d315605648e433b0f5827b4d0f11ccf;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_get_shared_lib_extension_tuple;
    tmp_level_name_2 = const_int_0;
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 129;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_get_shared_lib_extension );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_get_shared_lib_extension == NULL );
    var_get_shared_lib_extension = tmp_assign_source_3;

    tmp_called_name_2 = var_get_shared_lib_extension;

    CHECK_OBJECT( tmp_called_name_2 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 130;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_so_ext == NULL );
    var_so_ext = tmp_assign_source_4;

    tmp_assign_source_5 = PyList_New( 1 );
    tmp_left_name_1 = par_libname;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = var_so_ext;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_list_element_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
    assert( var_libname_ext == NULL );
    var_libname_ext = tmp_assign_source_5;

    tmp_called_name_3 = var_get_shared_lib_extension;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_28a8d78f880d037d2aa990c97d5eaf57 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 134;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_so_ext2 == NULL );
    var_so_ext2 = tmp_assign_source_6;

    tmp_compare_left_2 = var_so_ext2;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = var_so_ext;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = var_libname_ext;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_insert );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_0;
    tmp_left_name_2 = par_libname;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = var_so_ext2;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 136;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 136;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_7 = PyList_New( 1 );
    tmp_list_element_2 = par_libname;

    CHECK_OBJECT( tmp_list_element_2 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assign_source_7, 0, tmp_list_element_2 );
    assert( var_libname_ext == NULL );
    var_libname_ext = tmp_assign_source_7;

    branch_end_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_loader_path;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abspath, call_args );
    }

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_loader_path;
        assert( old != NULL );
        par_loader_path = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_loader_path;

    CHECK_OBJECT( tmp_args_element_name_5 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_isdir, call_args );
    }

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 141;
        type_description_1 = "ooooooooooo";
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
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_path );
    if ( tmp_called_instance_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_loader_path;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 142;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_dirname, call_args );
    }

    Py_DECREF( tmp_called_instance_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_libdir == NULL );
    var_libdir = tmp_assign_source_9;

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_10 = par_loader_path;

    CHECK_OBJECT( tmp_assign_source_10 );
    assert( var_libdir == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_libdir = tmp_assign_source_10;

    branch_end_4:;
    tmp_iter_arg_1 = var_libname_ext;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooooo";
            exception_lineno = 146;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_ln;
        var_ln = tmp_assign_source_13;
        Py_INCREF( var_ln );
        Py_XDECREF( old );
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_called_instance_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_libdir;

    CHECK_OBJECT( tmp_args_element_name_7 );
    tmp_args_element_name_8 = var_ln;

    CHECK_OBJECT( tmp_args_element_name_8 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_14 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_called_instance_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_libpath;
        var_libpath = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_path );
    if ( tmp_called_instance_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = var_libpath;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_cond_value_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_exists, call_args );
    }

    Py_DECREF( tmp_called_instance_6 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 148;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    // Tried code:
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_cdll );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    tmp_subscript_name_2 = var_libpath;

    CHECK_OBJECT( tmp_subscript_name_2 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_2_load_library );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_ddfb93a264e499aa40965e85590a7fc0 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ddfb93a264e499aa40965e85590a7fc0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ddfb93a264e499aa40965e85590a7fc0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_OSError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 153;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ddfb93a264e499aa40965e85590a7fc0->m_frame) frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 149;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ddfb93a264e499aa40965e85590a7fc0->m_frame) frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
    branch_end_6:;
    // End of try:
    branch_no_5:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

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

    tmp_make_exception_arg_1 = const_str_digest_3fda54a2a4a66d402bf3d39862ea704c;
    frame_ddfb93a264e499aa40965e85590a7fc0->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_OSError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 155;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ddfb93a264e499aa40965e85590a7fc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_ddfb93a264e499aa40965e85590a7fc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ddfb93a264e499aa40965e85590a7fc0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ddfb93a264e499aa40965e85590a7fc0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ddfb93a264e499aa40965e85590a7fc0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ddfb93a264e499aa40965e85590a7fc0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ddfb93a264e499aa40965e85590a7fc0,
        type_description_1,
        par_libname,
        par_loader_path,
        var_warnings,
        var_ext,
        var_get_shared_lib_extension,
        var_so_ext,
        var_libname_ext,
        var_so_ext2,
        var_libdir,
        var_ln,
        var_libpath
    );


    // Release cached frame.
    if ( frame_ddfb93a264e499aa40965e85590a7fc0 == cache_frame_ddfb93a264e499aa40965e85590a7fc0 )
    {
        Py_DECREF( frame_ddfb93a264e499aa40965e85590a7fc0 );
    }
    cache_frame_ddfb93a264e499aa40965e85590a7fc0 = NULL;

    assertFrameObject( frame_ddfb93a264e499aa40965e85590a7fc0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_2_load_library );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_libname );
    Py_DECREF( par_libname );
    par_libname = NULL;

    CHECK_OBJECT( (PyObject *)par_loader_path );
    Py_DECREF( par_loader_path );
    par_loader_path = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    CHECK_OBJECT( (PyObject *)var_ext );
    Py_DECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_get_shared_lib_extension );
    var_get_shared_lib_extension = NULL;

    Py_XDECREF( var_so_ext );
    var_so_ext = NULL;

    CHECK_OBJECT( (PyObject *)var_libname_ext );
    Py_DECREF( var_libname_ext );
    var_libname_ext = NULL;

    Py_XDECREF( var_so_ext2 );
    var_so_ext2 = NULL;

    CHECK_OBJECT( (PyObject *)var_libdir );
    Py_DECREF( var_libdir );
    var_libdir = NULL;

    CHECK_OBJECT( (PyObject *)var_ln );
    Py_DECREF( var_ln );
    var_ln = NULL;

    CHECK_OBJECT( (PyObject *)var_libpath );
    Py_DECREF( var_libpath );
    var_libpath = NULL;

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

    CHECK_OBJECT( (PyObject *)par_libname );
    Py_DECREF( par_libname );
    par_libname = NULL;

    CHECK_OBJECT( (PyObject *)par_loader_path );
    Py_DECREF( par_loader_path );
    par_loader_path = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_get_shared_lib_extension );
    var_get_shared_lib_extension = NULL;

    Py_XDECREF( var_so_ext );
    var_so_ext = NULL;

    Py_XDECREF( var_libname_ext );
    var_libname_ext = NULL;

    Py_XDECREF( var_so_ext2 );
    var_so_ext2 = NULL;

    Py_XDECREF( var_libdir );
    var_libdir = NULL;

    Py_XDECREF( var_ln );
    var_ln = NULL;

    Py_XDECREF( var_libpath );
    var_libpath = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_2_load_library );
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


static PyObject *impl_numpy$ctypeslib$$$function_3__num_fromflags( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flaglist = python_pars[ 0 ];
    PyObject *var_num = NULL;
    PyObject *var_val = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_c2ce2952a37490286ad64769ee9d3659 = NULL;

    struct Nuitka_FrameObject *frame_c2ce2952a37490286ad64769ee9d3659;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_int_0;
    assert( var_num == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_num = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c2ce2952a37490286ad64769ee9d3659, codeobj_c2ce2952a37490286ad64769ee9d3659, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c2ce2952a37490286ad64769ee9d3659 = cache_frame_c2ce2952a37490286ad64769ee9d3659;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c2ce2952a37490286ad64769ee9d3659 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c2ce2952a37490286ad64769ee9d3659 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_flaglist;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooo";
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
            type_description_1 = "ooo";
            exception_lineno = 162;
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
        PyObject *old = var_val;
        var_val = tmp_assign_source_4;
        Py_INCREF( var_val );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_num;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagdict );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flagdict );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flagdict" );
        exception_tb = NULL;

        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_val;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_5 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    var_num = tmp_assign_source_5;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooo";
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

    tmp_return_value = var_num;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 164;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ce2952a37490286ad64769ee9d3659 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ce2952a37490286ad64769ee9d3659 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c2ce2952a37490286ad64769ee9d3659 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c2ce2952a37490286ad64769ee9d3659, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c2ce2952a37490286ad64769ee9d3659->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c2ce2952a37490286ad64769ee9d3659, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c2ce2952a37490286ad64769ee9d3659,
        type_description_1,
        par_flaglist,
        var_num,
        var_val
    );


    // Release cached frame.
    if ( frame_c2ce2952a37490286ad64769ee9d3659 == cache_frame_c2ce2952a37490286ad64769ee9d3659 )
    {
        Py_DECREF( frame_c2ce2952a37490286ad64769ee9d3659 );
    }
    cache_frame_c2ce2952a37490286ad64769ee9d3659 = NULL;

    assertFrameObject( frame_c2ce2952a37490286ad64769ee9d3659 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_3__num_fromflags );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_flaglist );
    Py_DECREF( par_flaglist );
    par_flaglist = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

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

    CHECK_OBJECT( (PyObject *)par_flaglist );
    Py_DECREF( par_flaglist );
    par_flaglist = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_3__num_fromflags );
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


static PyObject *impl_numpy$ctypeslib$$$function_4__flags_fromnum( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7bc2a7436a4e67296e0b260c8cf5e646 = NULL;

    struct Nuitka_FrameObject *frame_7bc2a7436a4e67296e0b260c8cf5e646;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7bc2a7436a4e67296e0b260c8cf5e646, codeobj_7bc2a7436a4e67296e0b260c8cf5e646, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7bc2a7436a4e67296e0b260c8cf5e646 = cache_frame_7bc2a7436a4e67296e0b260c8cf5e646;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7bc2a7436a4e67296e0b260c8cf5e646 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7bc2a7436a4e67296e0b260c8cf5e646 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagnames );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flagnames );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flagnames" );
        exception_tb = NULL;

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
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
            exception_lineno = 170;
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
        PyObject *old = var_key;
        var_key = tmp_assign_source_4;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagdict );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flagdict );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flagdict" );
        exception_tb = NULL;

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_key;

    CHECK_OBJECT( tmp_subscript_name_1 );
    tmp_assign_source_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_value;
        var_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = par_num;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = var_value;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_cond_value_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 172;
        type_description_1 = "oooo";
        goto try_except_handler_2;
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
    tmp_called_instance_1 = var_res;

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = var_key;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_7bc2a7436a4e67296e0b260c8cf5e646->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bc2a7436a4e67296e0b260c8cf5e646 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7bc2a7436a4e67296e0b260c8cf5e646 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7bc2a7436a4e67296e0b260c8cf5e646, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7bc2a7436a4e67296e0b260c8cf5e646->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7bc2a7436a4e67296e0b260c8cf5e646, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7bc2a7436a4e67296e0b260c8cf5e646,
        type_description_1,
        par_num,
        var_res,
        var_key,
        var_value
    );


    // Release cached frame.
    if ( frame_7bc2a7436a4e67296e0b260c8cf5e646 == cache_frame_7bc2a7436a4e67296e0b260c8cf5e646 )
    {
        Py_DECREF( frame_7bc2a7436a4e67296e0b260c8cf5e646 );
    }
    cache_frame_7bc2a7436a4e67296e0b260c8cf5e646 = NULL;

    assertFrameObject( frame_7bc2a7436a4e67296e0b260c8cf5e646 );

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

    tmp_return_value = var_res;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_4__flags_fromnum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_4__flags_fromnum );
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


static PyObject *impl_numpy$ctypeslib$$$function_5__check_retval_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_35f4303919e37237c82abdeacc4730cc = NULL;

    struct Nuitka_FrameObject *frame_35f4303919e37237c82abdeacc4730cc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_35f4303919e37237c82abdeacc4730cc, codeobj_35f4303919e37237c82abdeacc4730cc, module_numpy$ctypeslib, sizeof(void *) );
    frame_35f4303919e37237c82abdeacc4730cc = cache_frame_35f4303919e37237c82abdeacc4730cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_35f4303919e37237c82abdeacc4730cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_35f4303919e37237c82abdeacc4730cc ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_array );

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

        exception_lineno = 183;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_35f4303919e37237c82abdeacc4730cc->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35f4303919e37237c82abdeacc4730cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_35f4303919e37237c82abdeacc4730cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_35f4303919e37237c82abdeacc4730cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_35f4303919e37237c82abdeacc4730cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_35f4303919e37237c82abdeacc4730cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_35f4303919e37237c82abdeacc4730cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35f4303919e37237c82abdeacc4730cc,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_35f4303919e37237c82abdeacc4730cc == cache_frame_35f4303919e37237c82abdeacc4730cc )
    {
        Py_DECREF( frame_35f4303919e37237c82abdeacc4730cc );
    }
    cache_frame_35f4303919e37237c82abdeacc4730cc = NULL;

    assertFrameObject( frame_35f4303919e37237c82abdeacc4730cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5__check_retval_ );
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_5__check_retval_ );
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


static PyObject *impl_numpy$ctypeslib$$$function_6___array_interface__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_28c167a863e01f34d9e629882fea4cb0 = NULL;

    struct Nuitka_FrameObject *frame_28c167a863e01f34d9e629882fea4cb0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28c167a863e01f34d9e629882fea4cb0, codeobj_28c167a863e01f34d9e629882fea4cb0, module_numpy$ctypeslib, sizeof(void *) );
    frame_28c167a863e01f34d9e629882fea4cb0 = cache_frame_28c167a863e01f34d9e629882fea4cb0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28c167a863e01f34d9e629882fea4cb0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28c167a863e01f34d9e629882fea4cb0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = _PyDict_NewPresized( 7 );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__dtype_ );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 187;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_descr );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 187;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_descr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_self;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___ref;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_strides;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_source_name_3 = par_self;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__shape_ );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 190;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_shape;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = const_int_pos_3;
    tmp_dict_key_5 = const_str_plain_version;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_source_name_5 = par_self;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dtype_ );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_descr );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_dict_value_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 192;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = const_str_plain_typestr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_source_name_6 = par_self;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_value );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 193;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_1 );
    tmp_dict_key_7 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28c167a863e01f34d9e629882fea4cb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28c167a863e01f34d9e629882fea4cb0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28c167a863e01f34d9e629882fea4cb0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28c167a863e01f34d9e629882fea4cb0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28c167a863e01f34d9e629882fea4cb0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28c167a863e01f34d9e629882fea4cb0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28c167a863e01f34d9e629882fea4cb0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_28c167a863e01f34d9e629882fea4cb0 == cache_frame_28c167a863e01f34d9e629882fea4cb0 )
    {
        Py_DECREF( frame_28c167a863e01f34d9e629882fea4cb0 );
    }
    cache_frame_28c167a863e01f34d9e629882fea4cb0 = NULL;

    assertFrameObject( frame_28c167a863e01f34d9e629882fea4cb0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6___array_interface__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_6___array_interface__ );
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


static PyObject *impl_numpy$ctypeslib$$$function_7_from_param( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_left_8;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    PyObject *tmp_compexpr_right_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    int tmp_res;
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
    PyObject *tmp_str_arg_1;
    static struct Nuitka_FrameObject *cache_frame_6f10ea83b082c3a0a86f18fa5b03394c = NULL;

    struct Nuitka_FrameObject *frame_6f10ea83b082c3a0a86f18fa5b03394c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6f10ea83b082c3a0a86f18fa5b03394c, codeobj_6f10ea83b082c3a0a86f18fa5b03394c, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *) );
    frame_6f10ea83b082c3a0a86f18fa5b03394c = cache_frame_6f10ea83b082c3a0a86f18fa5b03394c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6f10ea83b082c3a0a86f18fa5b03394c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6f10ea83b082c3a0a86f18fa5b03394c ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_obj;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ndarray );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndarray" );
        exception_tb = NULL;

        exception_lineno = 198;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
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
    tmp_make_exception_arg_1 = const_str_digest_d3a31592cd8c822f5811917362887051;
    frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 199;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_cls;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dtype_ );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oo";
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
    tmp_source_name_2 = par_obj;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_cls;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__dtype_ );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 201;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
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

        exception_lineno = 201;
        type_description_1 = "oo";
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
    tmp_left_name_1 = const_str_digest_a5fd5fde618a1101906733f10cb3f59d;
    tmp_source_name_4 = par_cls;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dtype_ );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 202;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_5 = par_cls;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__ndim_ );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_2 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    assert( !(tmp_and_left_truth_2 == -1) );
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_source_name_6 = par_obj;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_cls;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__ndim_ );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 204;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 204;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_2 = const_str_digest_462731c6abdb66ce201ddc39b13bc596;
    tmp_source_name_8 = par_cls;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__ndim_ );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame.f_lineno = 205;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 205;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_9 = par_cls;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__shape_ );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = Py_None;
    tmp_and_left_value_3 = BOOL_FROM( tmp_compexpr_left_5 != tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    assert( !(tmp_and_left_truth_3 == -1) );
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_source_name_10 = par_obj;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_cls;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__shape_ );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        exception_lineno = 207;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_3 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    Py_INCREF( tmp_and_left_value_3 );
    tmp_cond_value_3 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 207;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_3 = const_str_digest_5cf4127836c26da1953714e7d0bbc0bd;
    tmp_source_name_12 = par_cls;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_str_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__shape_ );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame.f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 208;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_13 = par_cls;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__flags_ );
    if ( tmp_compexpr_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_7 = Py_None;
    tmp_and_left_value_4 = BOOL_FROM( tmp_compexpr_left_7 != tmp_compexpr_right_7 );
    Py_DECREF( tmp_compexpr_left_7 );
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    assert( !(tmp_and_left_truth_4 == -1) );
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    tmp_source_name_15 = par_obj;

    CHECK_OBJECT( tmp_source_name_15 );
    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_flags );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_num );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_cls;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__flags_ );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_8 = BINARY_OPERATION( PyNumber_And, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_compexpr_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_cls;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__flags_ );
    if ( tmp_compexpr_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_8 );

        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_4 = RICH_COMPARE_NE( tmp_compexpr_left_8, tmp_compexpr_right_8 );
    Py_DECREF( tmp_compexpr_left_8 );
    Py_DECREF( tmp_compexpr_right_8 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    Py_INCREF( tmp_and_left_value_4 );
    tmp_cond_value_4 = tmp_and_left_value_4;
    and_end_4:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 210;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_5 = const_str_digest_f5e907abd3e6b65a3054d68a931223cf;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flags_fromnum );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flags_fromnum" );
        exception_tb = NULL;

        exception_lineno = 212;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = par_cls;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain__flags_ );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_make_exception_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame.f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_5 );
    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 211;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_19 = par_obj;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ctypes );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f10ea83b082c3a0a86f18fa5b03394c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f10ea83b082c3a0a86f18fa5b03394c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6f10ea83b082c3a0a86f18fa5b03394c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6f10ea83b082c3a0a86f18fa5b03394c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6f10ea83b082c3a0a86f18fa5b03394c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6f10ea83b082c3a0a86f18fa5b03394c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f10ea83b082c3a0a86f18fa5b03394c,
        type_description_1,
        par_cls,
        par_obj
    );


    // Release cached frame.
    if ( frame_6f10ea83b082c3a0a86f18fa5b03394c == cache_frame_6f10ea83b082c3a0a86f18fa5b03394c )
    {
        Py_DECREF( frame_6f10ea83b082c3a0a86f18fa5b03394c );
    }
    cache_frame_6f10ea83b082c3a0a86f18fa5b03394c = NULL;

    assertFrameObject( frame_6f10ea83b082c3a0a86f18fa5b03394c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_from_param );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_7_from_param );
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


static PyObject *impl_numpy$ctypeslib$$$function_8_ndpointer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dtype = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    PyObject *par_shape = python_pars[ 2 ];
    PyObject *par_flags = python_pars[ 3 ];
    PyObject *var_num = NULL;
    PyObject *var_x = NULL;
    PyObject *var_name = NULL;
    PyObject *var_strshape = NULL;
    PyObject *var_klass = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_id_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_str_arg_2;
    PyObject *tmp_str_arg_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_type_name_name_1;
    static struct Nuitka_FrameObject *cache_frame_76b29fa607acd986250f6b7b037f951f = NULL;

    struct Nuitka_FrameObject *frame_76b29fa607acd986250f6b7b037f951f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76b29fa607acd986250f6b7b037f951f, codeobj_76b29fa607acd986250f6b7b037f951f, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76b29fa607acd986250f6b7b037f951f = cache_frame_76b29fa607acd986250f6b7b037f951f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76b29fa607acd986250f6b7b037f951f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76b29fa607acd986250f6b7b037f951f ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_dtype;

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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dtype );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dtype" );
        exception_tb = NULL;

        exception_lineno = 272;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_assign_source_2 = Py_None;
    assert( var_num == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_num = tmp_assign_source_2;

    tmp_compare_left_2 = par_flags;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_isinstance_inst_1 = par_flags;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "ooooooooo";
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
    tmp_called_instance_1 = par_flags;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 276;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_flags;
        assert( old != NULL );
        par_flags = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_isinstance_inst_2 = par_flags;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = (PyObject *)&PyInt_Type;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_integer );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer" );
        exception_tb = NULL;

        exception_lineno = 277;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_2, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_4 = par_flags;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_num;
        assert( old != NULL );
        var_num = tmp_assign_source_4;
        Py_INCREF( var_num );
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flags_fromnum );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flags_fromnum" );
        exception_tb = NULL;

        exception_lineno = 279;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_num;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_flags;
        assert( old != NULL );
        par_flags = tmp_assign_source_5;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_isinstance_inst_3 = par_flags;

    CHECK_OBJECT( tmp_isinstance_inst_3 );
    tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_flagsobj );

    if (unlikely( tmp_isinstance_cls_3 == NULL ))
    {
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flagsobj );
    }

    if ( tmp_isinstance_cls_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "flagsobj" );
        exception_tb = NULL;

        exception_lineno = 280;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_1 = par_flags;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_num );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_num;
        assert( old != NULL );
        var_num = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__flags_fromnum );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_flags_fromnum" );
        exception_tb = NULL;

        exception_lineno = 282;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_num;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_flags;
        assert( old != NULL );
        par_flags = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_5:;
    branch_end_4:;
    branch_end_3:;
    tmp_compare_left_3 = var_num;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 283;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

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
    // Tried code:
    // Tried code:
    tmp_iter_arg_1 = par_flags;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;

        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }

    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_9;

    tmp_assign_source_10 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_10;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

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
            type_description_1 = "ooooooooo";
            exception_lineno = 285;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_list_contraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_12;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_instance_3 = var_x;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 285;
    tmp_called_instance_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_strip );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 285;
    tmp_append_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_upper );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        type_description_1 = "ooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
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
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    outline_result_1:;
    tmp_assign_source_8 = tmp_outline_return_value_1;
    {
        PyObject *old = par_flags;
        par_flags = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    goto try_end_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_76b29fa607acd986250f6b7b037f951f );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_76b29fa607acd986250f6b7b037f951f, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_76b29fa607acd986250f6b7b037f951f, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_make_exception_arg_1 = const_str_digest_8ad18dc7e52200f94f56a47ed39b3f14;
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 287;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__num_fromflags );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__num_fromflags );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_num_fromflags" );
        exception_tb = NULL;

        exception_lineno = 288;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_flags;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 288;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_num;
        var_num = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_pointer_type_cache" );
        exception_tb = NULL;

        exception_lineno = 290;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    tmp_subscript_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_2 = par_dtype;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_ndim;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_shape;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_num;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_subscript_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 290;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_1, 3, tmp_tuple_element_2 );
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_76b29fa607acd986250f6b7b037f951f );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_76b29fa607acd986250f6b7b037f951f, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_76b29fa607acd986250f6b7b037f951f, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 289;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_76b29fa607acd986250f6b7b037f951f->m_frame) frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_7:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_compare_left_5 = par_dtype;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_None;
    tmp_is_2 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_2 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_14 = const_str_plain_any;
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_name = tmp_assign_source_14;

    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_2 = par_dtype;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_names );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 295;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_id_arg_1 = par_dtype;

    CHECK_OBJECT( tmp_id_arg_1 );
    tmp_str_arg_1 = PyLong_FromVoidPtr( tmp_id_arg_1 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_15;

    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_3 = par_dtype;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_str );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_16;

    branch_end_9:;
    branch_end_8:;
    tmp_compare_left_6 = par_ndim;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_1 = var_name;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 300;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = const_str_digest_e37af17a5b24336f26d24dc610638b8f;
    tmp_right_name_2 = par_ndim;

    CHECK_OBJECT( tmp_right_name_2 );
    tmp_right_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_17 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 300;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    var_name = tmp_assign_source_17;

    branch_no_10:;
    tmp_compare_left_7 = par_shape;

    CHECK_OBJECT( tmp_compare_left_7 );
    tmp_compare_right_7 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    // Tried code:
    // Tried code:
    tmp_iter_arg_2 = par_shape;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_19;

    tmp_assign_source_20 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_20;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            exception_lineno = 303;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_list_contraction_2__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_22;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_str_arg_2 = var_x;

    CHECK_OBJECT( tmp_str_arg_2 );
    tmp_append_value_2 = PyObject_Str( tmp_str_arg_2 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
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
    try_except_handler_6:;
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

    goto try_except_handler_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    outline_result_2:;
    tmp_assign_source_18 = tmp_outline_return_value_2;
    assert( var_strshape == NULL );
    var_strshape = tmp_assign_source_18;

    goto try_end_3;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_76b29fa607acd986250f6b7b037f951f );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_76b29fa607acd986250f6b7b037f951f, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_76b29fa607acd986250f6b7b037f951f, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    tmp_compare_left_8 = PyThreadState_GET()->exc_type;
    tmp_compare_right_8 = PyExc_TypeError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_23 = PyList_New( 1 );
    tmp_str_arg_3 = par_shape;

    CHECK_OBJECT( tmp_str_arg_3 );
    tmp_list_element_1 = PyObject_Str( tmp_str_arg_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        exception_lineno = 305;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_23, 0, tmp_list_element_1 );
    assert( var_strshape == NULL );
    var_strshape = tmp_assign_source_23;

    tmp_assign_source_24 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_shape;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_3 );
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_24;
        Py_DECREF( old );
    }

    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 302;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_76b29fa607acd986250f6b7b037f951f->m_frame) frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_end_12:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    // End of try:
    try_end_3:;
    tmp_tuple_arg_1 = par_shape;

    if ( tmp_tuple_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 307;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_shape;
        par_shape = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_name;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = const_str_plain__;
    tmp_source_name_4 = const_str_plain_x;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_5 = var_strshape;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "strshape" );
        exception_tb = NULL;

        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 308;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_26 = tmp_left_name_3;
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    var_name = tmp_assign_source_26;

    branch_no_11:;
    tmp_compare_left_9 = par_flags;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;

        exception_lineno = 309;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_9 != tmp_compare_right_9 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_left_name_5 = var_name;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = const_str_plain__;
    tmp_source_name_5 = const_str_plain__;
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_6 != NULL );
    tmp_args_element_name_6 = par_flags;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;

        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76b29fa607acd986250f6b7b037f951f->m_frame.f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_27 = tmp_left_name_5;
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    var_name = tmp_assign_source_27;

    goto branch_end_13;
    branch_no_13:;
    tmp_assign_source_28 = PyList_New( 0 );
    {
        PyObject *old = par_flags;
        par_flags = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    branch_end_13:;
    tmp_left_name_7 = const_str_digest_736f1bf9d66cc81139d4e3af71316535;
    tmp_right_name_7 = var_name;

    if ( tmp_right_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_type_name_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_type_name_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_bases_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ndptr );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_type_name_name_1 );
        Py_DECREF( tmp_bases_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ndptr" );
        exception_tb = NULL;

        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_bases_name_1, 0, tmp_tuple_element_4 );
    tmp_dict_name_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_dtype;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain__dtype_;
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_shape;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain__shape_;
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = par_ndim;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain__ndim_;
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = var_num;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_type_name_name_1 );
        Py_DECREF( tmp_bases_name_1 );
        Py_DECREF( tmp_dict_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 317;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain__flags_;
    tmp_res = PyDict_SetItem( tmp_dict_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_assign_source_29 = BUILTIN_TYPE3( const_str_digest_5c326258629e22294a67a54ecf742b9b, tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1 );
    Py_DECREF( tmp_type_name_name_1 );
    Py_DECREF( tmp_bases_name_1 );
    Py_DECREF( tmp_dict_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_klass == NULL );
    var_klass = tmp_assign_source_29;

    tmp_ass_subvalue_1 = var_klass;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__pointer_type_cache );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_pointer_type_cache" );
        exception_tb = NULL;

        exception_lineno = 318;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = PyTuple_New( 4 );
    tmp_tuple_element_5 = par_dtype;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = par_shape;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = par_ndim;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 2, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_num;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_ass_subscript_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "num" );
        exception_tb = NULL;

        exception_lineno = 318;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_ass_subscript_1, 3, tmp_tuple_element_5 );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_76b29fa607acd986250f6b7b037f951f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_76b29fa607acd986250f6b7b037f951f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_76b29fa607acd986250f6b7b037f951f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76b29fa607acd986250f6b7b037f951f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76b29fa607acd986250f6b7b037f951f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76b29fa607acd986250f6b7b037f951f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76b29fa607acd986250f6b7b037f951f,
        type_description_1,
        par_dtype,
        par_ndim,
        par_shape,
        par_flags,
        var_num,
        var_x,
        var_name,
        var_strshape,
        var_klass
    );


    // Release cached frame.
    if ( frame_76b29fa607acd986250f6b7b037f951f == cache_frame_76b29fa607acd986250f6b7b037f951f )
    {
        Py_DECREF( frame_76b29fa607acd986250f6b7b037f951f );
    }
    cache_frame_76b29fa607acd986250f6b7b037f951f = NULL;

    assertFrameObject( frame_76b29fa607acd986250f6b7b037f951f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_klass;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_strshape );
    var_strshape = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

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

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( par_flags );
    par_flags = NULL;

    Py_XDECREF( var_num );
    var_num = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_strshape );
    var_strshape = NULL;

    Py_XDECREF( var_klass );
    var_klass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_8_ndpointer );
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


static PyObject *impl_numpy$ctypeslib$$$function_9_prep_simple( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_simple_type = python_pars[ 0 ];
    PyObject *par_dtype = python_pars[ 1 ];
    struct Nuitka_CellObject *var_typestr = PyCell_EMPTY();
    PyObject *var___array_interface__ = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_db737288a38ad4dbd93c991cce8a18d9 = NULL;

    struct Nuitka_FrameObject *frame_db737288a38ad4dbd93c991cce8a18d9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_db737288a38ad4dbd93c991cce8a18d9, codeobj_db737288a38ad4dbd93c991cce8a18d9, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_db737288a38ad4dbd93c991cce8a18d9 = cache_frame_db737288a38ad4dbd93c991cce8a18d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_db737288a38ad4dbd93c991cce8a18d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_db737288a38ad4dbd93c991cce8a18d9 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_source_name_1 = par_simple_type;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooco";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_db737288a38ad4dbd93c991cce8a18d9 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_db737288a38ad4dbd93c991cce8a18d9, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_db737288a38ad4dbd93c991cce8a18d9, exception_keeper_lineno_1 );
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


        exception_lineno = 335;
        type_description_1 = "ooco";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 334;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_db737288a38ad4dbd93c991cce8a18d9->m_frame) frame_db737288a38ad4dbd93c991cce8a18d9->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooco";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_prep_simple );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
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

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dtype );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dtype" );
        exception_tb = NULL;

        exception_lineno = 338;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_dtype;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_db737288a38ad4dbd93c991cce8a18d9->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_str );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_typestr );
        PyCell_SET( var_typestr, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = par_simple_type;

    CHECK_OBJECT( tmp_ass_subvalue_1 );
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__typecodes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_typecodes" );
        exception_tb = NULL;

        exception_lineno = 339;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    if ( var_typestr == NULL )
    {
        tmp_ass_subscript_1 = NULL;
    }
    else
    {
        tmp_ass_subscript_1 = PyCell_GET( var_typestr );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typestr" );
        exception_tb = NULL;

        exception_lineno = 339;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_FUNCTION_numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__( var_typestr );
    assert( var___array_interface__ == NULL );
    var___array_interface__ = tmp_assign_source_4;

    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = var___array_interface__;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_db737288a38ad4dbd93c991cce8a18d9->m_frame.f_lineno = 351;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_simple_type;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 351;
        type_description_1 = "ooco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_db737288a38ad4dbd93c991cce8a18d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_db737288a38ad4dbd93c991cce8a18d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_db737288a38ad4dbd93c991cce8a18d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db737288a38ad4dbd93c991cce8a18d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db737288a38ad4dbd93c991cce8a18d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db737288a38ad4dbd93c991cce8a18d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_db737288a38ad4dbd93c991cce8a18d9,
        type_description_1,
        par_simple_type,
        par_dtype,
        var_typestr,
        var___array_interface__
    );


    // Release cached frame.
    if ( frame_db737288a38ad4dbd93c991cce8a18d9 == cache_frame_db737288a38ad4dbd93c991cce8a18d9 )
    {
        Py_DECREF( frame_db737288a38ad4dbd93c991cce8a18d9 );
    }
    cache_frame_db737288a38ad4dbd93c991cce8a18d9 = NULL;

    assertFrameObject( frame_db737288a38ad4dbd93c991cce8a18d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_prep_simple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_simple_type );
    Py_DECREF( par_simple_type );
    par_simple_type = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_simple_type );
    Py_DECREF( par_simple_type );
    par_simple_type = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_prep_simple );
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


static PyObject *impl_numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
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
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_a6714fa96db096713895c837e09624fe = NULL;

    struct Nuitka_FrameObject *frame_a6714fa96db096713895c837e09624fe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a6714fa96db096713895c837e09624fe, codeobj_a6714fa96db096713895c837e09624fe, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *) );
    frame_a6714fa96db096713895c837e09624fe = cache_frame_a6714fa96db096713895c837e09624fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a6714fa96db096713895c837e09624fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a6714fa96db096713895c837e09624fe ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = _PyDict_NewPresized( 7 );
    tmp_dict_value_1 = PyList_New( 1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    if ( self->m_closure[0] == NULL )
    {
        tmp_tuple_element_1 = NULL;
    }
    else
    {
        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typestr" );
        exception_tb = NULL;

        exception_lineno = 342;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_dict_value_1, 0, tmp_list_element_1 );
    tmp_dict_key_1 = const_str_plain_descr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_self;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___ref;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_strides;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = const_tuple_empty;
    tmp_dict_key_4 = const_str_plain_shape;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = const_int_pos_3;
    tmp_dict_key_5 = const_str_plain_version;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    if ( self->m_closure[0] == NULL )
    {
        tmp_dict_value_6 = NULL;
    }
    else
    {
        tmp_dict_value_6 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typestr" );
        exception_tb = NULL;

        exception_lineno = 347;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_typestr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 348;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_a6714fa96db096713895c837e09624fe->m_frame.f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addressof, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 348;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_False;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_2 );
    tmp_dict_key_7 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6714fa96db096713895c837e09624fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6714fa96db096713895c837e09624fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a6714fa96db096713895c837e09624fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a6714fa96db096713895c837e09624fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a6714fa96db096713895c837e09624fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a6714fa96db096713895c837e09624fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a6714fa96db096713895c837e09624fe,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_a6714fa96db096713895c837e09624fe == cache_frame_a6714fa96db096713895c837e09624fe )
    {
        Py_DECREF( frame_a6714fa96db096713895c837e09624fe );
    }
    cache_frame_a6714fa96db096713895c837e09624fe = NULL;

    assertFrameObject( frame_a6714fa96db096713895c837e09624fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__ );
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


static PyObject *impl_numpy$ctypeslib$$$function_10_prep_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_array_type = python_pars[ 0 ];
    struct Nuitka_CellObject *var_shape = PyCell_EMPTY();
    PyObject *var_ob = NULL;
    PyObject *var_ai = NULL;
    struct Nuitka_CellObject *var_descr = PyCell_EMPTY();
    struct Nuitka_CellObject *var_typestr = PyCell_EMPTY();
    PyObject *var___array_interface__ = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_036ad7ef2aff533e543392e9d1ae0131 = NULL;

    struct Nuitka_FrameObject *frame_036ad7ef2aff533e543392e9d1ae0131;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_036ad7ef2aff533e543392e9d1ae0131, codeobj_036ad7ef2aff533e543392e9d1ae0131, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_036ad7ef2aff533e543392e9d1ae0131 = cache_frame_036ad7ef2aff533e543392e9d1ae0131;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_036ad7ef2aff533e543392e9d1ae0131 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_036ad7ef2aff533e543392e9d1ae0131 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_source_name_1 = par_array_type;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "ocoocco";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_036ad7ef2aff533e543392e9d1ae0131 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_036ad7ef2aff533e543392e9d1ae0131, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_036ad7ef2aff533e543392e9d1ae0131, exception_keeper_lineno_1 );
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


        exception_lineno = 374;
        type_description_1 = "ocoocco";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 373;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_036ad7ef2aff533e543392e9d1ae0131->m_frame) frame_036ad7ef2aff533e543392e9d1ae0131->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ocoocco";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_prep_array );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
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

    tmp_assign_source_3 = PyList_New( 0 );
    {
        PyObject *old = PyCell_GET( var_shape );
        PyCell_SET( var_shape, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = par_array_type;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_ob == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_ob = tmp_assign_source_4;

    loop_start_1:;
    tmp_type_arg_1 = var_ob;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 379;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ARRAY_TYPE );

    if (unlikely( tmp_compare_right_3 == NULL ))
    {
        tmp_compare_right_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ARRAY_TYPE );
    }

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ARRAY_TYPE" );
        exception_tb = NULL;

        exception_lineno = 379;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    if ( var_shape == NULL )
    {
        tmp_source_name_2 = NULL;
    }
    else
    {
        tmp_source_name_2 = PyCell_GET( var_shape );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 380;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_ob;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 380;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__length_ );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 380;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    frame_036ad7ef2aff533e543392e9d1ae0131->m_frame.f_lineno = 380;
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


        exception_lineno = 380;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_ob;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 381;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__type_ );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ob;
        var_ob = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if ( var_shape == NULL )
    {
        tmp_tuple_arg_1 = NULL;
    }
    else
    {
        tmp_tuple_arg_1 = PyCell_GET( var_shape );
    }

    if ( tmp_tuple_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;

        exception_lineno = 382;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_shape );
        PyCell_SET( var_shape, tmp_assign_source_6 );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = var_ob;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ob" );
        exception_tb = NULL;

        exception_lineno = 383;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }

    frame_036ad7ef2aff533e543392e9d1ae0131->m_frame.f_lineno = 383;
    tmp_source_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___array_interface__ );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    assert( var_ai == NULL );
    var_ai = tmp_assign_source_7;

    tmp_subscribed_name_1 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_str_plain_descr;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 384;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_descr );
        PyCell_SET( var_descr, tmp_assign_source_8 );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_str_plain_typestr;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_typestr );
        PyCell_SET( var_typestr, tmp_assign_source_9 );
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = MAKE_FUNCTION_numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__( var_descr, var_shape, var_typestr );
    assert( var___array_interface__ == NULL );
    var___array_interface__ = tmp_assign_source_10;

    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = var___array_interface__;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_036ad7ef2aff533e543392e9d1ae0131->m_frame.f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_array_type;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 397;
        type_description_1 = "ocoocco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

#if 1
    RESTORE_FRAME_EXCEPTION( frame_036ad7ef2aff533e543392e9d1ae0131 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_036ad7ef2aff533e543392e9d1ae0131 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_036ad7ef2aff533e543392e9d1ae0131 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_036ad7ef2aff533e543392e9d1ae0131, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_036ad7ef2aff533e543392e9d1ae0131->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_036ad7ef2aff533e543392e9d1ae0131, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_036ad7ef2aff533e543392e9d1ae0131,
        type_description_1,
        par_array_type,
        var_shape,
        var_ob,
        var_ai,
        var_descr,
        var_typestr,
        var___array_interface__
    );


    // Release cached frame.
    if ( frame_036ad7ef2aff533e543392e9d1ae0131 == cache_frame_036ad7ef2aff533e543392e9d1ae0131 )
    {
        Py_DECREF( frame_036ad7ef2aff533e543392e9d1ae0131 );
    }
    cache_frame_036ad7ef2aff533e543392e9d1ae0131 = NULL;

    assertFrameObject( frame_036ad7ef2aff533e543392e9d1ae0131 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_prep_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_array_type );
    Py_DECREF( par_array_type );
    par_array_type = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_ob );
    var_ob = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    CHECK_OBJECT( (PyObject *)var_descr );
    Py_DECREF( var_descr );
    var_descr = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

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

    CHECK_OBJECT( (PyObject *)par_array_type );
    Py_DECREF( par_array_type );
    par_array_type = NULL;

    CHECK_OBJECT( (PyObject *)var_shape );
    Py_DECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_ob );
    var_ob = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    CHECK_OBJECT( (PyObject *)var_descr );
    Py_DECREF( var_descr );
    var_descr = NULL;

    CHECK_OBJECT( (PyObject *)var_typestr );
    Py_DECREF( var_typestr );
    var_typestr = NULL;

    Py_XDECREF( var___array_interface__ );
    var___array_interface__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_prep_array );
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


static PyObject *impl_numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
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
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_89cdb4d6d9300d80cd1f7bd6c64a23df = NULL;

    struct Nuitka_FrameObject *frame_89cdb4d6d9300d80cd1f7bd6c64a23df;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_89cdb4d6d9300d80cd1f7bd6c64a23df, codeobj_89cdb4d6d9300d80cd1f7bd6c64a23df, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_89cdb4d6d9300d80cd1f7bd6c64a23df = cache_frame_89cdb4d6d9300d80cd1f7bd6c64a23df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_89cdb4d6d9300d80cd1f7bd6c64a23df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_89cdb4d6d9300d80cd1f7bd6c64a23df ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = _PyDict_NewPresized( 7 );
    if ( self->m_closure[0] == NULL )
    {
        tmp_dict_value_1 = NULL;
    }
    else
    {
        tmp_dict_value_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "descr" );
        exception_tb = NULL;

        exception_lineno = 388;
        type_description_1 = "occc";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_descr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = par_self;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain___ref;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_strides;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    if ( self->m_closure[1] == NULL )
    {
        tmp_dict_value_4 = NULL;
    }
    else
    {
        tmp_dict_value_4 = PyCell_GET( self->m_closure[1] );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "shape" );
        exception_tb = NULL;

        exception_lineno = 391;
        type_description_1 = "occc";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_shape;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_5 = const_int_pos_3;
    tmp_dict_key_5 = const_str_plain_version;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    if ( self->m_closure[2] == NULL )
    {
        tmp_dict_value_6 = NULL;
    }
    else
    {
        tmp_dict_value_6 = PyCell_GET( self->m_closure[2] );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typestr" );
        exception_tb = NULL;

        exception_lineno = 393;
        type_description_1 = "occc";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_typestr;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_7 = PyTuple_New( 2 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 394;
        type_description_1 = "occc";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_self;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_89cdb4d6d9300d80cd1f7bd6c64a23df->m_frame.f_lineno = 394;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addressof, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_dict_value_7 );

        exception_lineno = 394;
        type_description_1 = "occc";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_7, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_7, 1, tmp_tuple_element_1 );
    tmp_dict_key_7 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89cdb4d6d9300d80cd1f7bd6c64a23df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89cdb4d6d9300d80cd1f7bd6c64a23df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_89cdb4d6d9300d80cd1f7bd6c64a23df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89cdb4d6d9300d80cd1f7bd6c64a23df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89cdb4d6d9300d80cd1f7bd6c64a23df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89cdb4d6d9300d80cd1f7bd6c64a23df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_89cdb4d6d9300d80cd1f7bd6c64a23df,
        type_description_1,
        par_self,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_89cdb4d6d9300d80cd1f7bd6c64a23df == cache_frame_89cdb4d6d9300d80cd1f7bd6c64a23df )
    {
        Py_DECREF( frame_89cdb4d6d9300d80cd1f7bd6c64a23df );
    }
    cache_frame_89cdb4d6d9300d80cd1f7bd6c64a23df = NULL;

    assertFrameObject( frame_89cdb4d6d9300d80cd1f7bd6c64a23df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__ );
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


static PyObject *impl_numpy$ctypeslib$$$function_11_prep_pointer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pointer_obj = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_contents = NULL;
    PyObject *var_dtype = NULL;
    PyObject *var_inter = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d12402fd91f04a235aed2166b84f2a3e = NULL;

    struct Nuitka_FrameObject *frame_d12402fd91f04a235aed2166b84f2a3e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d12402fd91f04a235aed2166b84f2a3e, codeobj_d12402fd91f04a235aed2166b84f2a3e, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d12402fd91f04a235aed2166b84f2a3e = cache_frame_d12402fd91f04a235aed2166b84f2a3e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d12402fd91f04a235aed2166b84f2a3e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d12402fd91f04a235aed2166b84f2a3e ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_source_name_1 = par_pointer_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
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

    tmp_assign_source_2 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_d12402fd91f04a235aed2166b84f2a3e );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d12402fd91f04a235aed2166b84f2a3e, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d12402fd91f04a235aed2166b84f2a3e, exception_keeper_lineno_1 );
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


        exception_lineno = 405;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 404;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d12402fd91f04a235aed2166b84f2a3e->m_frame) frame_d12402fd91f04a235aed2166b84f2a3e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_11_prep_pointer );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    branch_no_2:;
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

    tmp_source_name_2 = par_pointer_obj;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_contents );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_contents == NULL );
    var_contents = tmp_assign_source_3;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dtype );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dtype" );
        exception_tb = NULL;

        exception_lineno = 409;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_type_arg_1 = var_contents;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_args_element_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_args_element_name_1 != NULL );
    frame_d12402fd91f04a235aed2166b84f2a3e->m_frame.f_lineno = 409;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dtype == NULL );
    var_dtype = tmp_assign_source_4;

    tmp_assign_source_5 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = const_int_pos_3;
    tmp_dict_key_1 = const_str_plain_version;
    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_source_name_3 = var_dtype;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_str );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 412;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_typestr;
    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = PyTuple_New( 2 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_dict_value_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 413;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_contents;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_d12402fd91f04a235aed2166b84f2a3e->m_frame.f_lineno = 413;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_addressof, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );
        Py_DECREF( tmp_dict_value_3 );

        exception_lineno = 413;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_False;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dict_value_3, 1, tmp_tuple_element_1 );
    tmp_dict_key_3 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = par_shape;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_shape;
    tmp_res = PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    assert( var_inter == NULL );
    var_inter = tmp_assign_source_5;

    tmp_assattr_name_1 = var_inter;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_pointer_obj;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___array_interface__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d12402fd91f04a235aed2166b84f2a3e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_d12402fd91f04a235aed2166b84f2a3e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_d12402fd91f04a235aed2166b84f2a3e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d12402fd91f04a235aed2166b84f2a3e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d12402fd91f04a235aed2166b84f2a3e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d12402fd91f04a235aed2166b84f2a3e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d12402fd91f04a235aed2166b84f2a3e,
        type_description_1,
        par_pointer_obj,
        par_shape,
        var_contents,
        var_dtype,
        var_inter
    );


    // Release cached frame.
    if ( frame_d12402fd91f04a235aed2166b84f2a3e == cache_frame_d12402fd91f04a235aed2166b84f2a3e )
    {
        Py_DECREF( frame_d12402fd91f04a235aed2166b84f2a3e );
    }
    cache_frame_d12402fd91f04a235aed2166b84f2a3e = NULL;

    assertFrameObject( frame_d12402fd91f04a235aed2166b84f2a3e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_11_prep_pointer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pointer_obj );
    Py_DECREF( par_pointer_obj );
    par_pointer_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_contents );
    var_contents = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_inter );
    var_inter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pointer_obj );
    Py_DECREF( par_pointer_obj );
    par_pointer_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_contents );
    var_contents = NULL;

    Py_XDECREF( var_dtype );
    var_dtype = NULL;

    Py_XDECREF( var_inter );
    var_inter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_11_prep_pointer );
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


static PyObject *impl_numpy$ctypeslib$$$function_12_as_array( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_tp = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6fc001f9e61e53e0fee2537e9127d8ec = NULL;

    struct Nuitka_FrameObject *frame_6fc001f9e61e53e0fee2537e9127d8ec;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_type_arg_1 = par_obj;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_assign_source_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_assign_source_1 != NULL );
    assert( var_tp == NULL );
    var_tp = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fc001f9e61e53e0fee2537e9127d8ec, codeobj_6fc001f9e61e53e0fee2537e9127d8ec, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6fc001f9e61e53e0fee2537e9127d8ec = cache_frame_6fc001f9e61e53e0fee2537e9127d8ec;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fc001f9e61e53e0fee2537e9127d8ec );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fc001f9e61e53e0fee2537e9127d8ec ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_1 = var_tp;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_unused = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    PRESERVE_FRAME_EXCEPTION( frame_6fc001f9e61e53e0fee2537e9127d8ec );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6fc001f9e61e53e0fee2537e9127d8ec, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6fc001f9e61e53e0fee2537e9127d8ec, exception_keeper_lineno_1 );
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


        exception_lineno = 430;
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
    tmp_hasattr_source_1 = par_obj;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain_contents;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        type_description_1 = "ooo";
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_pointer );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prep_pointer );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "prep_pointer" );
        exception_tb = NULL;

        exception_lineno = 432;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_obj;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_shape;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_6fc001f9e61e53e0fee2537e9127d8ec->m_frame.f_lineno = 432;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_array );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prep_array );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "prep_array" );
        exception_tb = NULL;

        exception_lineno = 434;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_tp;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_6fc001f9e61e53e0fee2537e9127d8ec->m_frame.f_lineno = 434;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 434;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 429;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6fc001f9e61e53e0fee2537e9127d8ec->m_frame) frame_6fc001f9e61e53e0fee2537e9127d8ec->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_12_as_array );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 435;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_obj;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_6fc001f9e61e53e0fee2537e9127d8ec->m_frame.f_lineno = 435;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 435;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6fc001f9e61e53e0fee2537e9127d8ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_6fc001f9e61e53e0fee2537e9127d8ec );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6fc001f9e61e53e0fee2537e9127d8ec );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fc001f9e61e53e0fee2537e9127d8ec, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fc001f9e61e53e0fee2537e9127d8ec->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fc001f9e61e53e0fee2537e9127d8ec, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fc001f9e61e53e0fee2537e9127d8ec,
        type_description_1,
        par_obj,
        par_shape,
        var_tp
    );


    // Release cached frame.
    if ( frame_6fc001f9e61e53e0fee2537e9127d8ec == cache_frame_6fc001f9e61e53e0fee2537e9127d8ec )
    {
        Py_DECREF( frame_6fc001f9e61e53e0fee2537e9127d8ec );
    }
    cache_frame_6fc001f9e61e53e0fee2537e9127d8ec = NULL;

    assertFrameObject( frame_6fc001f9e61e53e0fee2537e9127d8ec );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_12_as_array );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_tp );
    Py_DECREF( var_tp );
    var_tp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_tp );
    Py_DECREF( var_tp );
    var_tp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_12_as_array );
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


static PyObject *impl_numpy$ctypeslib$$$function_13_as_ctypes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[ 0 ];
    PyObject *var_ai = NULL;
    PyObject *var_addr = NULL;
    PyObject *var_readonly = NULL;
    PyObject *var_tp = NULL;
    PyObject *var_dim = NULL;
    PyObject *var_result = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static struct Nuitka_FrameObject *cache_frame_26a7adfcb56e57d37668f645c8a630dd = NULL;

    struct Nuitka_FrameObject *frame_26a7adfcb56e57d37668f645c8a630dd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_26a7adfcb56e57d37668f645c8a630dd, codeobj_26a7adfcb56e57d37668f645c8a630dd, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_26a7adfcb56e57d37668f645c8a630dd = cache_frame_26a7adfcb56e57d37668f645c8a630dd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_26a7adfcb56e57d37668f645c8a630dd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_26a7adfcb56e57d37668f645c8a630dd ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_obj;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___array_interface__ );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ai == NULL );
    var_ai = tmp_assign_source_1;

    tmp_subscribed_name_1 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_str_plain_strides;
    tmp_cond_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 441;
        type_description_1 = "ooooooo";
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
    tmp_make_exception_arg_1 = const_str_digest_5b09d61a27343621d029a01f97434bb3;
    frame_26a7adfcb56e57d37668f645c8a630dd->m_frame.f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 442;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_subscribed_name_2 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_str_plain_version;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 443;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_a1c179c92fdc674608c39fa15e8cce51;
    frame_26a7adfcb56e57d37668f645c8a630dd->m_frame.f_lineno = 444;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 444;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    // Tried code:
    tmp_subscribed_name_3 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_str_plain_data;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
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
        exception_lineno = 445;
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
        exception_lineno = 445;
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
                exception_lineno = 445;
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
        exception_lineno = 445;
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
    assert( var_addr == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_addr = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_readonly == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_readonly = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_cond_value_2 = var_readonly;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_d9a6c45fcf44af5918c67465b2eae108;
    frame_26a7adfcb56e57d37668f645c8a630dd->m_frame.f_lineno = 447;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 447;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__typecodes );

    if (unlikely( tmp_subscribed_name_4 == NULL ))
    {
        tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__typecodes );
    }

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_typecodes" );
        exception_tb = NULL;

        exception_lineno = 448;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_5 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_str_plain_typestr;
    tmp_subscript_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_subscript_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscript_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_tp == NULL );
    var_tp = tmp_assign_source_7;

    tmp_subscribed_name_7 = var_ai;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_6 = const_str_plain_shape;
    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_6 );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_7 = const_slice_none_none_int_neg_1;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
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
            exception_lineno = 449;
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
        PyObject *old = var_dim;
        var_dim = tmp_assign_source_10;
        Py_INCREF( var_dim );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_tp;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tp" );
        exception_tb = NULL;

        exception_lineno = 450;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_right_name_1 = var_dim;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_11 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_tp;
        var_tp = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 449;
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

    tmp_called_instance_1 = var_tp;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "tp" );
        exception_tb = NULL;

        exception_lineno = 451;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_addr;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_26a7adfcb56e57d37668f645c8a630dd->m_frame.f_lineno = 451;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_from_address, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_12;

    tmp_assattr_name_1 = var_ai;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = var_result;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___keep, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26a7adfcb56e57d37668f645c8a630dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_26a7adfcb56e57d37668f645c8a630dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_26a7adfcb56e57d37668f645c8a630dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_26a7adfcb56e57d37668f645c8a630dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_26a7adfcb56e57d37668f645c8a630dd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_26a7adfcb56e57d37668f645c8a630dd,
        type_description_1,
        par_obj,
        var_ai,
        var_addr,
        var_readonly,
        var_tp,
        var_dim,
        var_result
    );


    // Release cached frame.
    if ( frame_26a7adfcb56e57d37668f645c8a630dd == cache_frame_26a7adfcb56e57d37668f645c8a630dd )
    {
        Py_DECREF( frame_26a7adfcb56e57d37668f645c8a630dd );
    }
    cache_frame_26a7adfcb56e57d37668f645c8a630dd = NULL;

    assertFrameObject( frame_26a7adfcb56e57d37668f645c8a630dd );

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
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_13_as_ctypes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)var_ai );
    Py_DECREF( var_ai );
    var_ai = NULL;

    CHECK_OBJECT( (PyObject *)var_addr );
    Py_DECREF( var_addr );
    var_addr = NULL;

    CHECK_OBJECT( (PyObject *)var_readonly );
    Py_DECREF( var_readonly );
    var_readonly = NULL;

    Py_XDECREF( var_tp );
    var_tp = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    Py_XDECREF( var_ai );
    var_ai = NULL;

    Py_XDECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( var_readonly );
    var_readonly = NULL;

    Py_XDECREF( var_tp );
    var_tp = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib$$$function_13_as_ctypes );
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



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_10_prep_array(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_10_prep_array,
        const_str_plain_prep_array,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_036ad7ef2aff533e543392e9d1ae0131,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_73590e51d1e1c9cc5fecc41c3633ed39,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__( struct Nuitka_CellObject *closure_descr, struct Nuitka_CellObject *closure_shape, struct Nuitka_CellObject *closure_typestr )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_10_prep_array$$$function_1___array_interface__,
        const_str_plain___array_interface__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_89cdb4d6d9300d80cd1f7bd6c64a23df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        3
    );

result->m_closure[0] = closure_descr;
Py_INCREF( result->m_closure[0] );
result->m_closure[1] = closure_shape;
Py_INCREF( result->m_closure[1] );
result->m_closure[2] = closure_typestr;
Py_INCREF( result->m_closure[2] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_11_prep_pointer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_11_prep_pointer,
        const_str_plain_prep_pointer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d12402fd91f04a235aed2166b84f2a3e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_b63e97201afff05bc02e60c6633f99a8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_12_as_array( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_12_as_array,
        const_str_plain_as_array,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6fc001f9e61e53e0fee2537e9127d8ec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_a2941e7fbded98383d41b07f0ec64d12,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_13_as_ctypes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_13_as_ctypes,
        const_str_plain_as_ctypes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_26a7adfcb56e57d37668f645c8a630dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_e2804ac65c6fbdd5accf55e43cffbd99,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_1__dummy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_1__dummy,
        const_str_plain__dummy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d70aff9f820a53bd8d3ac0d6690487e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_b71718e9ee231439014d32459ca5aebb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_2_load_library(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_2_load_library,
        const_str_plain_load_library,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ddfb93a264e499aa40965e85590a7fc0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_648cc759900d37d74b7f6205ed6a23df,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_3__num_fromflags(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_3__num_fromflags,
        const_str_plain__num_fromflags,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c2ce2952a37490286ad64769ee9d3659,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_4__flags_fromnum(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_4__flags_fromnum,
        const_str_plain__flags_fromnum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7bc2a7436a4e67296e0b260c8cf5e646,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_5__check_retval_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_5__check_retval_,
        const_str_plain__check_retval_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_35f4303919e37237c82abdeacc4730cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_e176ec4552c1af79187e477f4e60b3b6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_6___array_interface__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_6___array_interface__,
        const_str_plain___array_interface__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_28c167a863e01f34d9e629882fea4cb0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_7_from_param(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_7_from_param,
        const_str_plain_from_param,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6f10ea83b082c3a0a86f18fa5b03394c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_8_ndpointer( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_8_ndpointer,
        const_str_plain_ndpointer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_76b29fa607acd986250f6b7b037f951f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_1da87a8dd68efa7aad16166393ba2ffe,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_9_prep_simple(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_9_prep_simple,
        const_str_plain_prep_simple,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_db737288a38ad4dbd93c991cce8a18d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        const_str_digest_a9e44db0a1490ce98218807379f1405e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__( struct Nuitka_CellObject *closure_typestr )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$ctypeslib$$$function_9_prep_simple$$$function_1___array_interface__,
        const_str_plain___array_interface__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a6714fa96db096713895c837e09624fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$ctypeslib,
        Py_None,
        1
    );

result->m_closure[0] = closure_typestr;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$ctypeslib =
{
    PyModuleDef_HEAD_INIT,
    "numpy.ctypeslib",   /* m_name */
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

MOD_INIT_DECL( numpy$ctypeslib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$ctypeslib );
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
    puts("numpy.ctypeslib: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.ctypeslib: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$ctypeslib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$ctypeslib = Py_InitModule4(
        "numpy.ctypeslib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$ctypeslib = PyModule_Create( &mdef_numpy$ctypeslib );
#endif

    moduledict_numpy$ctypeslib = MODULE_DICT( module_numpy$ctypeslib );

    CHECK_OBJECT( module_numpy$ctypeslib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5c326258629e22294a67a54ecf742b9b, module_numpy$ctypeslib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var__check_retval_ = NULL;
    PyObject *outline_0_var___array_interface__ = NULL;
    PyObject *outline_0_var_from_param = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_classmethod_arg_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
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
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6b256e915fd1a9a49c2f3fa8c3046482_2 = NULL;

    struct Nuitka_FrameObject *frame_6b256e915fd1a9a49c2f3fa8c3046482_2;

    struct Nuitka_FrameObject *frame_c15317c0f984b29ee1789812a12be6fc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b3e01b7f6fe965902fb0f2c5fe538d06;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e495f158835bada9803dca4da4e5b652;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_c15317c0f984b29ee1789812a12be6fc = MAKE_MODULE_FRAME( codeobj_c15317c0f984b29ee1789812a12be6fc, module_numpy$ctypeslib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_c15317c0f984b29ee1789812a12be6fc );
    assert( Py_REFCNT( frame_c15317c0f984b29ee1789812a12be6fc ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_assign_source_8 = LIST_COPY( const_list_54194ab635e74563c5cfcba2eda8536d_list );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 57;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_os;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 57;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_plain_numpy;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_75a36b457ce36cac3399d833ee26ba3d_tuple;
    tmp_level_name_3 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 58;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_integer );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_integer, tmp_assign_source_12 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ndarray );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ndarray, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_dtype );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dtype, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_deprecate );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_deprecate, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_array );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_16 );
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

    tmp_name_name_4 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain__flagdict_str_plain_flagsobj_tuple;
    tmp_level_name_4 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 59;
    tmp_assign_source_17 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_17;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__flagdict );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagdict, tmp_assign_source_18 );
    tmp_import_name_from_10 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_flagsobj );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_flagsobj, tmp_assign_source_19 );
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

    // Tried code:
    tmp_name_name_5 = const_str_plain_ctypes;
    tmp_globals_name_5 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 62;
    tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_20 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_c15317c0f984b29ee1789812a12be6fc );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_c15317c0f984b29ee1789812a12be6fc, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_c15317c0f984b29ee1789812a12be6fc, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

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
    tmp_assign_source_21 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_21 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 61;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c15317c0f984b29ee1789812a12be6fc->m_frame) frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = exception_tb->tb_lineno;

    goto frame_exception_exit_1;
    branch_end_1:;
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    tmp_compare_left_2 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_compare_left_2 == NULL ))
    {
        tmp_compare_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

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
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$ctypeslib$$$function_1__dummy(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy, tmp_assign_source_22 );
    tmp_assign_source_23 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_23 == NULL ))
    {
        tmp_assign_source_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 78;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes_load_library, tmp_assign_source_23 );
    tmp_assign_source_24 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_24 == NULL ))
    {
        tmp_assign_source_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_load_library, tmp_assign_source_24 );
    tmp_assign_source_25 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_25 == NULL ))
    {
        tmp_assign_source_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 80;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_ctypes, tmp_assign_source_25 );
    tmp_assign_source_26 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__dummy );

    if (unlikely( tmp_assign_source_26 == NULL ))
    {
        tmp_assign_source_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dummy );
    }

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_dummy" );
        exception_tb = NULL;

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_array, tmp_assign_source_26 );
    tmp_name_name_6 = const_str_plain_numpy;
    tmp_globals_name_6 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_intp_tuple;
    tmp_level_name_6 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 82;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_intp );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_c_intp, tmp_assign_source_27 );
    tmp_assign_source_28 = (PyObject *)&PyBaseObject_Type;
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr_base, tmp_assign_source_28 );
    goto branch_end_2;
    branch_no_2:;
    tmp_name_name_7 = const_str_digest_770dfc7c45a247e1a34a824431aca553;
    tmp_globals_name_7 = (PyObject *)moduledict_numpy$ctypeslib;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = Py_None;
    tmp_level_name_7 = const_int_0;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 85;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    tmp_import_name_from_12 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain__internal );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_nic, tmp_assign_source_29 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_nic );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nic );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nic" );
        exception_tb = NULL;

        exception_lineno = 86;

        goto frame_exception_exit_1;
    }

    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 86;
    tmp_assign_source_30 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__getintp_ctype );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_c_intp, tmp_assign_source_30 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$ctypeslib, const_str_plain_nic );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nic" );
        exception_tb = NULL;

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_void_p );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr_base, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$ctypeslib$$$function_2_load_library(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_load_library, tmp_assign_source_32 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_deprecate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_deprecate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "deprecate" );
        exception_tb = NULL;

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_load_library );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load_library );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "load_library" );
        exception_tb = NULL;

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_plain_ctypes_load_library;
    tmp_args_element_name_3 = const_str_plain_load_library;
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 157;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes_load_library, tmp_assign_source_33 );
    branch_end_2:;
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$ctypeslib$$$function_3__num_fromflags(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__num_fromflags, tmp_assign_source_34 );
    tmp_assign_source_35 = LIST_COPY( const_list_a3141bdf77735564bbf18197c00a6f94_list );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flagnames, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$ctypeslib$$$function_4__flags_fromnum(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__flags_fromnum, tmp_assign_source_36 );
    // Tried code:
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr_base );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ndptr_base );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ndptr_base" );
        exception_tb = NULL;

        exception_lineno = 177;

        goto try_except_handler_5;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_37;

    tmp_assign_source_39 = const_str_digest_5c326258629e22294a67a54ecf742b9b;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_39 );
    outline_0_var___module__ = tmp_assign_source_39;

    tmp_assign_source_40 = MAKE_FUNCTION_numpy$ctypeslib$$$function_5__check_retval_(  );
    assert( outline_0_var__check_retval_ == NULL );
    outline_0_var__check_retval_ = tmp_assign_source_40;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6b256e915fd1a9a49c2f3fa8c3046482_2, codeobj_6b256e915fd1a9a49c2f3fa8c3046482, module_numpy$ctypeslib, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6b256e915fd1a9a49c2f3fa8c3046482_2 = cache_frame_6b256e915fd1a9a49c2f3fa8c3046482_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_4 = MAKE_FUNCTION_numpy$ctypeslib$$$function_6___array_interface__(  );
    frame_6b256e915fd1a9a49c2f3fa8c3046482_2->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_2 = "ooNN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var___array_interface__ == NULL );
    outline_0_var___array_interface__ = tmp_assign_source_41;

    tmp_classmethod_arg_1 = MAKE_FUNCTION_numpy$ctypeslib$$$function_7_from_param(  );
    tmp_assign_source_42 = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        type_description_2 = "oooN";
        goto frame_exception_exit_2;
    }
    assert( outline_0_var_from_param == NULL );
    outline_0_var_from_param = tmp_assign_source_42;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b256e915fd1a9a49c2f3fa8c3046482_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b256e915fd1a9a49c2f3fa8c3046482_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b256e915fd1a9a49c2f3fa8c3046482_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b256e915fd1a9a49c2f3fa8c3046482_2,
        type_description_2,
        outline_0_var___module__,
        outline_0_var__check_retval_,
        outline_0_var___array_interface__,
        outline_0_var_from_param
    );


    // Release cached frame.
    if ( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 == cache_frame_6b256e915fd1a9a49c2f3fa8c3046482_2 )
    {
        Py_DECREF( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 );
    }
    cache_frame_6b256e915fd1a9a49c2f3fa8c3046482_2 = NULL;

    assertFrameObject( frame_6b256e915fd1a9a49c2f3fa8c3046482_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_6;
    skip_nested_handling_1:;
    tmp_outline_return_value_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = outline_0_var___module__;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dict_key_1 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_2 = outline_0_var__check_retval_;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_dict_key_2 = const_str_plain__check_retval_;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_3 = outline_0_var___array_interface__;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_dict_key_3 = const_str_plain___array_interface__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_4 = outline_0_var_from_param;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_dict_key_4 = const_str_plain_from_param;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__check_retval_ );
    Py_DECREF( outline_0_var__check_retval_ );
    outline_0_var__check_retval_ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var___array_interface__ );
    Py_DECREF( outline_0_var___array_interface__ );
    outline_0_var___array_interface__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var_from_param );
    Py_DECREF( outline_0_var_from_param );
    outline_0_var_from_param = NULL;

    goto outline_result_1;
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

    CHECK_OBJECT( (PyObject *)outline_0_var___module__ );
    Py_DECREF( outline_0_var___module__ );
    outline_0_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_0_var__check_retval_ );
    Py_DECREF( outline_0_var__check_retval_ );
    outline_0_var__check_retval_ = NULL;

    Py_XDECREF( outline_0_var___array_interface__ );
    outline_0_var___array_interface__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 177;
    goto try_except_handler_5;
    outline_result_1:;
    tmp_assign_source_38 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_38;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_assign_source_43 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto try_except_handler_5;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_44 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto try_except_handler_5;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_44;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto try_except_handler_8;
    }
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_6 );
    Py_XDECREF( exception_keeper_value_6 );
    Py_XDECREF( exception_keeper_tb_6 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$ctypeslib );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_43 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_43;

    tmp_called_name_3 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_5 = const_str_plain__ndptr;
    tmp_args_element_name_6 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_6 );
    tmp_args_element_name_7 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_7 );
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_45;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
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
    try_end_5:;
    tmp_assign_source_46 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_46 );
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ndptr, tmp_assign_source_46 );
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

    tmp_assign_source_47 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__pointer_type_cache, tmp_assign_source_47 );
    tmp_defaults_1 = const_tuple_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_48 = MAKE_FUNCTION_numpy$ctypeslib$$$function_8_ndpointer( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ndpointer, tmp_assign_source_48 );
    tmp_compare_left_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_compare_left_4 == NULL ))
    {
        tmp_compare_left_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 321;

        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_49 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_assign_source_49 == NULL ))
    {
        tmp_assign_source_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_assign_source_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;

        exception_lineno = 322;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct, tmp_assign_source_49 );
    tmp_assign_source_50 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__typecodes, tmp_assign_source_50 );
    tmp_assign_source_51 = MAKE_FUNCTION_numpy$ctypeslib$$$function_9_prep_simple(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_simple, tmp_assign_source_51 );
    tmp_assign_source_52 = PyList_New( 3 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = PyTuple_New( 5 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_byte );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_c_short );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_c_int );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 2, tmp_tuple_element_3 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_c_long );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 3, tmp_tuple_element_3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_c_longlong );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 354;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 4, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_plain_i;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_52, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = PyTuple_New( 5 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_c_ubyte );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 0, tmp_tuple_element_5 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_c_ushort );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 1, tmp_tuple_element_5 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_c_uint );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 2, tmp_tuple_element_5 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_c_ulong );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 3, tmp_tuple_element_5 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_c_ulonglong );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_4 );

        exception_lineno = 355;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_4, 4, tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_str_plain_u;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_52, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_6 = PyTuple_New( 2 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 356;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_c_float );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 356;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_6, 0, tmp_tuple_element_7 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 356;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_c_double );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_52 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_tuple_element_6 );

        exception_lineno = 356;

        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_6, 1, tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_str_plain_f;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_6 );
    PyList_SET_ITEM( tmp_assign_source_52, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_simple_types, tmp_assign_source_52 );
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_simple_types );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_simple_types );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "simple_types" );
        exception_tb = NULL;

        exception_lineno = 360;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_53 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_53;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_54 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_54 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            exception_lineno = 360;
            goto try_except_handler_9;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_54;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_55 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_55;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_56 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_56 == NULL )
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



        exception_lineno = 360;
        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_56;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_57 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_57 == NULL )
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



        exception_lineno = 360;
        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_57;
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


                exception_lineno = 360;
                goto try_except_handler_11;
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


        exception_lineno = 360;
        goto try_except_handler_11;
    }
    goto try_end_6;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_6:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_58 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_58 );
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_58 );
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_59 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_59 );
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_code, tmp_assign_source_59 );
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_3 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_types );

    if (unlikely( tmp_iter_arg_3 == NULL ))
    {
        tmp_iter_arg_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_types );
    }

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "types" );
        exception_tb = NULL;

        exception_lineno = 361;

        goto try_except_handler_9;
    }

    tmp_assign_source_60 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;

        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_60;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_61 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_61 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            exception_lineno = 361;
            goto try_except_handler_12;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_61;
        Py_XDECREF( old );
    }

    tmp_assign_source_62 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_62 );
    UPDATE_STRING_DICT0( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_tp, tmp_assign_source_62 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_simple );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prep_simple );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "prep_simple" );
        exception_tb = NULL;

        exception_lineno = 362;

        goto try_except_handler_12;
    }

    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_tp );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tp );
    }

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "tp" );
        exception_tb = NULL;

        exception_lineno = 362;

        goto try_except_handler_12;
    }

    tmp_left_name_1 = const_str_digest_6e67341cb4da9db91dba5c39139bf34f;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_code );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_code );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "code" );
        exception_tb = NULL;

        exception_lineno = 362;

        goto try_except_handler_12;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_8 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 362;

        goto try_except_handler_12;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_sizeof );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 362;

        goto try_except_handler_12;
    }
    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_tp );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tp );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "tp" );
        exception_tb = NULL;

        exception_lineno = 362;

        goto try_except_handler_12;
    }

    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_tuple_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 362;

        goto try_except_handler_12;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_8 );
    tmp_args_element_name_9 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;

        goto try_except_handler_12;
    }
    frame_c15317c0f984b29ee1789812a12be6fc->m_frame.f_lineno = 362;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;

        goto try_except_handler_12;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;

        goto try_except_handler_12;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 360;

        goto try_except_handler_9;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_9;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_ct );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ct );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ct" );
        exception_tb = NULL;

        exception_lineno = 367;

        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_c_int );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;

        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_type_arg_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_63 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain__ARRAY_TYPE, tmp_assign_source_63 );
    tmp_assign_source_64 = MAKE_FUNCTION_numpy$ctypeslib$$$function_10_prep_array(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_array, tmp_assign_source_64 );
    tmp_assign_source_65 = MAKE_FUNCTION_numpy$ctypeslib$$$function_11_prep_pointer(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_prep_pointer, tmp_assign_source_65 );
    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_66 = MAKE_FUNCTION_numpy$ctypeslib$$$function_12_as_array( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_array, tmp_assign_source_66 );
    tmp_assign_source_67 = MAKE_FUNCTION_numpy$ctypeslib$$$function_13_as_ctypes(  );
    UPDATE_STRING_DICT1( moduledict_numpy$ctypeslib, (Nuitka_StringObject *)const_str_plain_as_ctypes, tmp_assign_source_67 );
    branch_no_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c15317c0f984b29ee1789812a12be6fc );
#endif
    popFrameStack();

    assertFrameObject( frame_c15317c0f984b29ee1789812a12be6fc );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c15317c0f984b29ee1789812a12be6fc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c15317c0f984b29ee1789812a12be6fc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c15317c0f984b29ee1789812a12be6fc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c15317c0f984b29ee1789812a12be6fc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    return MOD_RETURN_VALUE( module_numpy$ctypeslib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
