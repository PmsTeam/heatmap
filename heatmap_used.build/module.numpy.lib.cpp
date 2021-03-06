/* Generated code for Python source for module 'numpy.lib'
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

/* The _module_numpy$lib is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib;
PyDictObject *moduledict_numpy$lib;

/* The module constants used, if any. */
static PyObject *const_str_plain_twodim_base;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_emath;
static PyObject *const_tuple_str_plain_scimath_tuple;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
static PyObject *const_str_plain_arraypad;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_str_plain__numpy_tester_tuple;
static PyObject *const_str_plain_scimath;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_list_str_plain_emath_str_plain_math_str_plain_tracemalloc_domain_list;
extern PyObject *const_str_plain__numpy_tester;
static PyObject *const_str_plain_tracemalloc_domain;
extern PyObject *const_str_plain_shape_base;
static PyObject *const_str_digest_a8583e29b1c0eedaa1f165e55f2b3ed0;
static PyObject *const_str_plain_financial;
static PyObject *const_list_str_digest_29ceddd63f9559edf8a27710ce200ae8_list;
static PyObject *const_str_plain_arraysetops;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_index_tricks;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ufunclike;
extern PyObject *const_str_plain_Arrayterator;
extern PyObject *const_tuple_str_plain___doc___tuple;
extern PyObject *const_str_plain_utils;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_bench;
static PyObject *const_str_plain_type_check;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_polynomial;
static PyObject *const_str_digest_363db690c7804b03d8d681bb80b04333;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_Arrayterator_tuple;
static PyObject *const_str_digest_29ceddd63f9559edf8a27710ce200ae8;
extern PyObject *const_str_plain_test;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_arrayterator;
static PyObject *const_tuple_str_plain_tracemalloc_domain_tuple;
static PyObject *const_str_plain__version;
extern PyObject *const_str_digest_cad1fcb236d0fed73a31a019d414de2f;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_stride_tricks;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_npyio;
static PyObject *const_str_plain_nanfunctions;
static PyObject *const_str_plain_mixins;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_twodim_base = UNSTREAM_STRING( &constant_bin[ 606938 ], 11, 1 );
    const_str_plain_emath = UNSTREAM_STRING( &constant_bin[ 606949 ], 5, 1 );
    const_tuple_str_plain_scimath_tuple = PyTuple_New( 1 );
    const_str_plain_scimath = UNSTREAM_STRING( &constant_bin[ 606954 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_scimath_tuple, 0, const_str_plain_scimath ); Py_INCREF( const_str_plain_scimath );
    const_str_plain_arraypad = UNSTREAM_STRING( &constant_bin[ 606961 ], 8, 1 );
    const_list_str_plain_emath_str_plain_math_str_plain_tracemalloc_domain_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_emath_str_plain_math_str_plain_tracemalloc_domain_list, 0, const_str_plain_emath ); Py_INCREF( const_str_plain_emath );
    PyList_SET_ITEM( const_list_str_plain_emath_str_plain_math_str_plain_tracemalloc_domain_list, 1, const_str_plain_math ); Py_INCREF( const_str_plain_math );
    const_str_plain_tracemalloc_domain = UNSTREAM_STRING( &constant_bin[ 606969 ], 18, 1 );
    PyList_SET_ITEM( const_list_str_plain_emath_str_plain_math_str_plain_tracemalloc_domain_list, 2, const_str_plain_tracemalloc_domain ); Py_INCREF( const_str_plain_tracemalloc_domain );
    const_str_digest_a8583e29b1c0eedaa1f165e55f2b3ed0 = UNSTREAM_STRING( &constant_bin[ 606987 ], 18, 0 );
    const_str_plain_financial = UNSTREAM_STRING( &constant_bin[ 607005 ], 9, 1 );
    const_list_str_digest_29ceddd63f9559edf8a27710ce200ae8_list = PyList_New( 1 );
    const_str_digest_29ceddd63f9559edf8a27710ce200ae8 = UNSTREAM_STRING( &constant_bin[ 607014 ], 39, 0 );
    PyList_SET_ITEM( const_list_str_digest_29ceddd63f9559edf8a27710ce200ae8_list, 0, const_str_digest_29ceddd63f9559edf8a27710ce200ae8 ); Py_INCREF( const_str_digest_29ceddd63f9559edf8a27710ce200ae8 );
    const_str_plain_arraysetops = UNSTREAM_STRING( &constant_bin[ 607053 ], 11, 1 );
    const_str_plain_index_tricks = UNSTREAM_STRING( &constant_bin[ 174607 ], 12, 1 );
    const_str_plain_type_check = UNSTREAM_STRING( &constant_bin[ 607064 ], 10, 1 );
    const_str_digest_363db690c7804b03d8d681bb80b04333 = UNSTREAM_STRING( &constant_bin[ 607074 ], 51, 0 );
    const_tuple_str_plain_Arrayterator_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Arrayterator_tuple, 0, const_str_plain_Arrayterator ); Py_INCREF( const_str_plain_Arrayterator );
    const_str_plain_arrayterator = UNSTREAM_STRING( &constant_bin[ 607125 ], 12, 1 );
    const_tuple_str_plain_tracemalloc_domain_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tracemalloc_domain_tuple, 0, const_str_plain_tracemalloc_domain ); Py_INCREF( const_str_plain_tracemalloc_domain );
    const_str_plain__version = UNSTREAM_STRING( &constant_bin[ 2456 ], 8, 1 );
    const_str_plain_npyio = UNSTREAM_STRING( &constant_bin[ 607137 ], 5, 1 );
    const_str_plain_nanfunctions = UNSTREAM_STRING( &constant_bin[ 607142 ], 12, 1 );
    const_str_plain_mixins = UNSTREAM_STRING( &constant_bin[ 607154 ], 6, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d179303ef481a0bf77d8fbb03183f2b7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_363db690c7804b03d8d681bb80b04333;
    codeobj_d179303ef481a0bf77d8fbb03183f2b7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a8583e29b1c0eedaa1f165e55f2b3ed0, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib",   /* m_name */
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

MOD_INIT_DECL( numpy$lib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib );
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
    puts("numpy.lib: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.lib: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$lib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib = Py_InitModule4(
        "numpy.lib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib = PyModule_Create( &mdef_numpy$lib );
#endif

    moduledict_numpy$lib = MODULE_DICT( module_numpy$lib );

    CHECK_OBJECT( module_numpy$lib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8, module_numpy$lib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_fromlist_name_19;
    PyObject *tmp_fromlist_name_20;
    PyObject *tmp_fromlist_name_21;
    PyObject *tmp_fromlist_name_22;
    PyObject *tmp_fromlist_name_23;
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
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_globals_name_19;
    PyObject *tmp_globals_name_20;
    PyObject *tmp_globals_name_21;
    PyObject *tmp_globals_name_22;
    PyObject *tmp_globals_name_23;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
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
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
    PyObject *tmp_level_name_19;
    PyObject *tmp_level_name_20;
    PyObject *tmp_level_name_21;
    PyObject *tmp_level_name_22;
    PyObject *tmp_level_name_23;
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
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_locals_name_19;
    PyObject *tmp_locals_name_20;
    PyObject *tmp_locals_name_21;
    PyObject *tmp_locals_name_22;
    PyObject *tmp_locals_name_23;
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
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    PyObject *tmp_name_name_19;
    PyObject *tmp_name_name_20;
    PyObject *tmp_name_name_21;
    PyObject *tmp_name_name_22;
    PyObject *tmp_name_name_23;
    bool tmp_result;
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
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    PyObject *tmp_star_imported_8;
    PyObject *tmp_star_imported_9;
    PyObject *tmp_star_imported_10;
    PyObject *tmp_star_imported_11;
    PyObject *tmp_star_imported_12;
    PyObject *tmp_star_imported_13;
    PyObject *tmp_star_imported_14;
    PyObject *tmp_star_imported_15;
    PyObject *tmp_star_imported_16;
    struct Nuitka_FrameObject *frame_d179303ef481a0bf77d8fbb03183f2b7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_363db690c7804b03d8d681bb80b04333;
    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_29ceddd63f9559edf8a27710ce200ae8_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
    UPDATE_STRING_DICT0( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_5 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_5 );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Frame without reuse.
    frame_d179303ef481a0bf77d8fbb03183f2b7 = MAKE_MODULE_FRAME( codeobj_d179303ef481a0bf77d8fbb03183f2b7, module_numpy$lib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d179303ef481a0bf77d8fbb03183f2b7 );
    assert( Py_REFCNT( frame_d179303ef481a0bf77d8fbb03183f2b7 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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

    tmp_name_name_1 = const_str_plain_math;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 3;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( tmp_assign_source_9 != NULL );
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_info;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain___doc___tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_digest_cad1fcb236d0fed73a31a019d414de2f;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_version_tuple;
    tmp_level_name_3 = const_int_0;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_11 );
    tmp_name_name_4 = const_str_plain_type_check;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_4 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_4 = const_tuple_str_chr_42_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 8;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_name_name_5 = const_str_plain_index_tricks;
    tmp_globals_name_5 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_5 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 9;
    tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_name_name_6 = const_str_plain_function_base;
    tmp_globals_name_6 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_6 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_6 = const_tuple_str_chr_42_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 10;
    tmp_star_imported_3 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_name_name_7 = const_str_plain_mixins;
    tmp_globals_name_7 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_7 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 11;
    tmp_star_imported_4 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_name_name_8 = const_str_plain_nanfunctions;
    tmp_globals_name_8 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_8 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_8 = const_tuple_str_chr_42_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 12;
    tmp_star_imported_5 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_5 );
    Py_DECREF( tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    tmp_name_name_9 = const_str_plain_shape_base;
    tmp_globals_name_9 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_9 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_9 = const_tuple_str_chr_42_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 13;
    tmp_star_imported_6 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_6 );
    Py_DECREF( tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_name_name_10 = const_str_plain_stride_tricks;
    tmp_globals_name_10 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_10 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_10 = const_tuple_str_chr_42_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 14;
    tmp_star_imported_7 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_7 );
    Py_DECREF( tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_name_name_11 = const_str_plain_twodim_base;
    tmp_globals_name_11 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_11 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_11 = const_tuple_str_chr_42_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 15;
    tmp_star_imported_8 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_8 );
    Py_DECREF( tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_name_name_12 = const_str_plain_ufunclike;
    tmp_globals_name_12 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_12 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_12 = const_tuple_str_chr_42_tuple;
    tmp_level_name_12 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 16;
    tmp_star_imported_9 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_star_imported_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_9 );
    Py_DECREF( tmp_star_imported_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_name_name_13 = const_str_empty;
    tmp_globals_name_13 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_scimath_tuple;
    tmp_level_name_13 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 18;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_scimath );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_emath, tmp_assign_source_12 );
    tmp_name_name_14 = const_str_plain_polynomial;
    tmp_globals_name_14 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_14 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_14 = const_tuple_str_chr_42_tuple;
    tmp_level_name_14 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 19;
    tmp_star_imported_10 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_star_imported_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_10 );
    Py_DECREF( tmp_star_imported_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    tmp_name_name_15 = const_str_plain_utils;
    tmp_globals_name_15 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_15 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_15 = const_tuple_str_chr_42_tuple;
    tmp_level_name_15 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 21;
    tmp_star_imported_11 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_star_imported_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_11 );
    Py_DECREF( tmp_star_imported_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_name_name_16 = const_str_plain_arraysetops;
    tmp_globals_name_16 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_16 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_16 = const_tuple_str_chr_42_tuple;
    tmp_level_name_16 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 22;
    tmp_star_imported_12 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_star_imported_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_12 );
    Py_DECREF( tmp_star_imported_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    tmp_name_name_17 = const_str_plain_npyio;
    tmp_globals_name_17 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_17 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_17 = const_tuple_str_chr_42_tuple;
    tmp_level_name_17 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 23;
    tmp_star_imported_13 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_star_imported_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_13 );
    Py_DECREF( tmp_star_imported_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_name_name_18 = const_str_plain_financial;
    tmp_globals_name_18 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_18 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_18 = const_tuple_str_chr_42_tuple;
    tmp_level_name_18 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 24;
    tmp_star_imported_14 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_star_imported_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_14 );
    Py_DECREF( tmp_star_imported_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_name_name_19 = const_str_plain_arrayterator;
    tmp_globals_name_19 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_19 = Py_None;
    tmp_fromlist_name_19 = const_tuple_str_plain_Arrayterator_tuple;
    tmp_level_name_19 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 25;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Arrayterator );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_Arrayterator, tmp_assign_source_13 );
    tmp_name_name_20 = const_str_plain_arraypad;
    tmp_globals_name_20 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_20 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_20 = const_tuple_str_chr_42_tuple;
    tmp_level_name_20 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 26;
    tmp_star_imported_15 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20 );
    if ( tmp_star_imported_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_15 );
    Py_DECREF( tmp_star_imported_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_name_name_21 = const_str_plain__version;
    tmp_globals_name_21 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_21 = (PyObject *)moduledict_numpy$lib;
    tmp_fromlist_name_21 = const_tuple_str_chr_42_tuple;
    tmp_level_name_21 = const_int_pos_1;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 27;
    tmp_star_imported_16 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21 );
    if ( tmp_star_imported_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$lib, true, tmp_star_imported_16 );
    Py_DECREF( tmp_star_imported_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_name_name_22 = const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
    tmp_globals_name_22 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_22 = Py_None;
    tmp_fromlist_name_22 = const_tuple_str_plain_tracemalloc_domain_tuple;
    tmp_level_name_22 = const_int_0;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 28;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_tracemalloc_domain );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_tracemalloc_domain, tmp_assign_source_14 );
    tmp_assign_source_15 = LIST_COPY( const_list_str_plain_emath_str_plain_math_str_plain_tracemalloc_domain_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 31;

        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_type_check );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_type_check );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "type_check" );
        exception_tb = NULL;

        exception_lineno = 31;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___all__ );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_16 );
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 32;

        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_index_tricks );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_index_tricks );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "index_tricks" );
        exception_tb = NULL;

        exception_lineno = 32;

        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___all__ );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17 );
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "function_base" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___all__ );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    tmp_left_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_4 == NULL ))
    {
        tmp_left_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 34;

        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_mixins );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mixins );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "mixins" );
        exception_tb = NULL;

        exception_lineno = 34;

        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___all__ );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_19 );
    tmp_left_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_5 == NULL ))
    {
        tmp_left_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_shape_base );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape_base );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "shape_base" );
        exception_tb = NULL;

        exception_lineno = 35;

        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___all__ );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20 );
    tmp_left_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_6 == NULL ))
    {
        tmp_left_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_stride_tricks );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stride_tricks );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "stride_tricks" );
        exception_tb = NULL;

        exception_lineno = 36;

        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___all__ );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21 );
    tmp_left_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_7 == NULL ))
    {
        tmp_left_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_twodim_base );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_twodim_base );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "twodim_base" );
        exception_tb = NULL;

        exception_lineno = 37;

        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___all__ );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_22 );
    tmp_left_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_8 == NULL ))
    {
        tmp_left_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 38;

        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_ufunclike );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ufunclike );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ufunclike" );
        exception_tb = NULL;

        exception_lineno = 38;

        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___all__ );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_23 );
    tmp_left_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_9 == NULL ))
    {
        tmp_left_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 39;

        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_arraypad );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arraypad );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "arraypad" );
        exception_tb = NULL;

        exception_lineno = 39;

        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___all__ );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24 );
    tmp_left_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_10 == NULL ))
    {
        tmp_left_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 40;

        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_polynomial );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polynomial );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polynomial" );
        exception_tb = NULL;

        exception_lineno = 40;

        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___all__ );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_25 );
    tmp_left_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_11 == NULL ))
    {
        tmp_left_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 41;

        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___all__ );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_26 );
    tmp_left_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_12 == NULL ))
    {
        tmp_left_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_arraysetops );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arraysetops );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "arraysetops" );
        exception_tb = NULL;

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___all__ );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27 );
    tmp_left_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_13 == NULL ))
    {
        tmp_left_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_npyio );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_npyio );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "npyio" );
        exception_tb = NULL;

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___all__ );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_28 );
    tmp_left_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_14 == NULL ))
    {
        tmp_left_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_financial );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_financial );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "financial" );
        exception_tb = NULL;

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___all__ );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29 );
    tmp_left_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_15 == NULL ))
    {
        tmp_left_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_nanfunctions );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nanfunctions );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nanfunctions" );
        exception_tb = NULL;

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_right_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain___all__ );
    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_30 );
    tmp_name_name_23 = const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
    tmp_globals_name_23 = (PyObject *)moduledict_numpy$lib;
    tmp_locals_name_23 = Py_None;
    tmp_fromlist_name_23 = const_tuple_str_plain__numpy_tester_tuple;
    tmp_level_name_23 = const_int_0;
    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 47;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_23 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__numpy_tester );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain__numpy_tester, tmp_assign_source_31 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 48;
    tmp_source_name_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_test );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_32 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }

    frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame.f_lineno = 49;
    tmp_source_name_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_bench );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_33 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d179303ef481a0bf77d8fbb03183f2b7 );
#endif
    popFrameStack();

    assertFrameObject( frame_d179303ef481a0bf77d8fbb03183f2b7 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d179303ef481a0bf77d8fbb03183f2b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d179303ef481a0bf77d8fbb03183f2b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d179303ef481a0bf77d8fbb03183f2b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d179303ef481a0bf77d8fbb03183f2b7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$lib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
