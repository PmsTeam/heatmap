/* Generated code for Python source for module 'numpy.fft'
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

/* The _module_numpy$fft is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft;
PyDictObject *moduledict_numpy$fft;

/* The module constants used, if any. */
static PyObject *const_str_digest_aee7a67e1fd9a66b6a92955361305593;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_fftpack;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain__numpy_tester;
static PyObject *const_list_str_digest_aee7a67e1fd9a66b6a92955361305593_list;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_helper;
static PyObject *const_str_digest_08fe9a9d882984ccf2976175dccfa13c;
static PyObject *const_str_digest_7ad4e718fb8cb619edffbc446f7b5ff9;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_plain___doc___tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_test;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_str_plain__numpy_tester_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_aee7a67e1fd9a66b6a92955361305593 = UNSTREAM_STRING( &constant_bin[ 553324 ], 39, 0 );
    const_list_str_digest_aee7a67e1fd9a66b6a92955361305593_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_aee7a67e1fd9a66b6a92955361305593_list, 0, const_str_digest_aee7a67e1fd9a66b6a92955361305593 ); Py_INCREF( const_str_digest_aee7a67e1fd9a66b6a92955361305593 );
    const_str_digest_08fe9a9d882984ccf2976175dccfa13c = UNSTREAM_STRING( &constant_bin[ 553363 ], 18, 0 );
    const_str_digest_7ad4e718fb8cb619edffbc446f7b5ff9 = UNSTREAM_STRING( &constant_bin[ 553381 ], 51, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_70957f2498c1a9c23ac5a5381ceec4d2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7ad4e718fb8cb619edffbc446f7b5ff9;
    codeobj_70957f2498c1a9c23ac5a5381ceec4d2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_08fe9a9d882984ccf2976175dccfa13c, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft",   /* m_name */
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

MOD_INIT_DECL( numpy$fft )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft );
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
    puts("numpy.fft: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.fft: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$fft" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft = Py_InitModule4(
        "numpy.fft",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$fft = PyModule_Create( &mdef_numpy$fft );
#endif

    moduledict_numpy$fft = MODULE_DICT( module_numpy$fft );

    CHECK_OBJECT( module_numpy$fft );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b53f3811d9d65c912707e9b896ba9934, module_numpy$fft );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    struct Nuitka_FrameObject *frame_70957f2498c1a9c23ac5a5381ceec4d2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7ad4e718fb8cb619edffbc446f7b5ff9;
    UPDATE_STRING_DICT0( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_aee7a67e1fd9a66b6a92955361305593_list );
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_b53f3811d9d65c912707e9b896ba9934;
    UPDATE_STRING_DICT0( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_5 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_5 );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Frame without reuse.
    frame_70957f2498c1a9c23ac5a5381ceec4d2 = MAKE_MODULE_FRAME( codeobj_70957f2498c1a9c23ac5a5381ceec4d2, module_numpy$fft );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_70957f2498c1a9c23ac5a5381ceec4d2 );
    assert( Py_REFCNT( frame_70957f2498c1a9c23ac5a5381ceec4d2 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
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
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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

    tmp_name_name_1 = const_str_plain_info;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$fft;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain___doc___tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame.f_lineno = 4;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_fftpack;
    tmp_globals_name_2 = (PyObject *)moduledict_numpy$fft;
    tmp_locals_name_2 = (PyObject *)moduledict_numpy$fft;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame.f_lineno = 6;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$fft, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_name_name_3 = const_str_plain_helper;
    tmp_globals_name_3 = (PyObject *)moduledict_numpy$fft;
    tmp_locals_name_3 = (PyObject *)moduledict_numpy$fft;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame.f_lineno = 7;
    tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$fft, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_name_name_4 = const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
    tmp_globals_name_4 = (PyObject *)moduledict_numpy$fft;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain__numpy_tester_tuple;
    tmp_level_name_4 = const_int_0;
    frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame.f_lineno = 9;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__numpy_tester );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain__numpy_tester, tmp_assign_source_10 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain__numpy_tester );

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

        exception_lineno = 10;

        goto frame_exception_exit_1;
    }

    frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame.f_lineno = 10;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_test );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_11 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain__numpy_tester );

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

        exception_lineno = 11;

        goto frame_exception_exit_1;
    }

    frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame.f_lineno = 11;
    tmp_source_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bench );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_12 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70957f2498c1a9c23ac5a5381ceec4d2 );
#endif
    popFrameStack();

    assertFrameObject( frame_70957f2498c1a9c23ac5a5381ceec4d2 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_70957f2498c1a9c23ac5a5381ceec4d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70957f2498c1a9c23ac5a5381ceec4d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70957f2498c1a9c23ac5a5381ceec4d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70957f2498c1a9c23ac5a5381ceec4d2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_numpy$fft );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
