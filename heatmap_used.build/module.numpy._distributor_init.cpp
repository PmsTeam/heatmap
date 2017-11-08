/* Generated code for Python source for module 'numpy._distributor_init'
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

/* The _module_numpy$_distributor_init is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_distributor_init;
PyDictObject *moduledict_numpy$_distributor_init;

/* The module constants used, if any. */
static PyObject *const_str_plain_wintypes;
static PyObject *const_tuple_str_plain_windll_str_plain_wintypes_tuple;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_c5adb82634d19b5ff9259afec0f02f59;
extern PyObject *const_tuple_int_pos_10_tuple;
static PyObject *const_str_plain_has_feature;
static PyObject *const_str_digest_b6998834c7d802c2eb954a04213daf08;
extern PyObject *const_str_plain_ctypes;
static PyObject *const_tuple_b0fcdd92a2aab3386ca2ee50634eaeb2_tuple;
static PyObject *const_str_digest_d2f7521d1810689d2469b77a4bfedb6c;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain_argtypes;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_1abe642f0bb87625fbedd523e08e1df8;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_8fa80cbfe9fb01c3d3710030f0c55769;
extern PyObject *const_str_plain_kernel32;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_53943f93b84b8baa5b7198990780ce43;
static PyObject *const_str_plain_DWORD;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_plain_IsProcessorFeaturePresent;
extern PyObject *const_str_plain_windll;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_wintypes = UNSTREAM_STRING( &constant_bin[ 38606 ], 8, 1 );
    const_tuple_str_plain_windll_str_plain_wintypes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_windll_str_plain_wintypes_tuple, 0, const_str_plain_windll ); Py_INCREF( const_str_plain_windll );
    PyTuple_SET_ITEM( const_tuple_str_plain_windll_str_plain_wintypes_tuple, 1, const_str_plain_wintypes ); Py_INCREF( const_str_plain_wintypes );
    const_str_digest_c5adb82634d19b5ff9259afec0f02f59 = UNSTREAM_STRING( &constant_bin[ 38614 ], 84, 0 );
    const_str_plain_has_feature = UNSTREAM_STRING( &constant_bin[ 38698 ], 11, 1 );
    const_str_digest_b6998834c7d802c2eb954a04213daf08 = UNSTREAM_STRING( &constant_bin[ 38709 ], 51, 0 );
    const_tuple_b0fcdd92a2aab3386ca2ee50634eaeb2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_b0fcdd92a2aab3386ca2ee50634eaeb2_tuple, 0, const_str_digest_c5adb82634d19b5ff9259afec0f02f59 ); Py_INCREF( const_str_digest_c5adb82634d19b5ff9259afec0f02f59 );
    const_str_digest_53943f93b84b8baa5b7198990780ce43 = UNSTREAM_STRING( &constant_bin[ 38760 ], 53, 0 );
    PyTuple_SET_ITEM( const_tuple_b0fcdd92a2aab3386ca2ee50634eaeb2_tuple, 1, const_str_digest_53943f93b84b8baa5b7198990780ce43 ); Py_INCREF( const_str_digest_53943f93b84b8baa5b7198990780ce43 );
    const_str_digest_d2f7521d1810689d2469b77a4bfedb6c = UNSTREAM_STRING( &constant_bin[ 38813 ], 32, 0 );
    const_str_plain_argtypes = UNSTREAM_STRING( &constant_bin[ 38845 ], 8, 1 );
    const_str_digest_1abe642f0bb87625fbedd523e08e1df8 = UNSTREAM_STRING( &constant_bin[ 38853 ], 56, 0 );
    const_str_digest_8fa80cbfe9fb01c3d3710030f0c55769 = UNSTREAM_STRING( &constant_bin[ 38821 ], 23, 0 );
    const_str_plain_DWORD = UNSTREAM_STRING( &constant_bin[ 38909 ], 5, 1 );
    const_str_plain_IsProcessorFeaturePresent = UNSTREAM_STRING( &constant_bin[ 38914 ], 25, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$_distributor_init( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e3223b463b894d78179332a4a9af3324;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1abe642f0bb87625fbedd523e08e1df8;
    codeobj_e3223b463b894d78179332a4a9af3324 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d2f7521d1810689d2469b77a4bfedb6c, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$_distributor_init =
{
    PyModuleDef_HEAD_INIT,
    "numpy._distributor_init",   /* m_name */
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

MOD_INIT_DECL( numpy$_distributor_init )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$_distributor_init );
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
    puts("numpy._distributor_init: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy._distributor_init: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$_distributor_init" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$_distributor_init = Py_InitModule4(
        "numpy._distributor_init",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$_distributor_init = PyModule_Create( &mdef_numpy$_distributor_init );
#endif

    moduledict_numpy$_distributor_init = MODULE_DICT( module_numpy$_distributor_init );

    CHECK_OBJECT( module_numpy$_distributor_init );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8fa80cbfe9fb01c3d3710030f0c55769, module_numpy$_distributor_init );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_is_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_e3223b463b894d78179332a4a9af3324;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b6998834c7d802c2eb954a04213daf08;
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1abe642f0bb87625fbedd523e08e1df8;
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;

    // Frame without reuse.
    frame_e3223b463b894d78179332a4a9af3324 = MAKE_MODULE_FRAME( codeobj_e3223b463b894d78179332a4a9af3324, module_numpy$_distributor_init );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e3223b463b894d78179332a4a9af3324 );
    assert( Py_REFCNT( frame_e3223b463b894d78179332a4a9af3324 ) == 2 );

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_name_name_1 = const_str_plain_ctypes;
    tmp_globals_name_1 = (PyObject *)moduledict_numpy$_distributor_init;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_windll_str_plain_wintypes_tuple;
    frame_e3223b463b894d78179332a4a9af3324->m_frame.f_lineno = 6;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_2;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_windll );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_windll, tmp_assign_source_6 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_wintypes );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_wintypes, tmp_assign_source_7 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

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

    tmp_assign_source_8 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_8;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_e3223b463b894d78179332a4a9af3324 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_e3223b463b894d78179332a4a9af3324, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_e3223b463b894d78179332a4a9af3324, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_ImportError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 7;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_compare_right_1 );
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
        exception_lineno = 5;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e3223b463b894d78179332a4a9af3324->m_frame) frame_e3223b463b894d78179332a4a9af3324->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_1;
    branch_no_1:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_distributor_init );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_windll );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_windll );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "windll" );
        exception_tb = NULL;

        exception_lineno = 10;

        goto try_except_handler_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_kernel32 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_IsProcessorFeaturePresent );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_has_feature, tmp_assign_source_9 );
    tmp_assattr_name_1 = PyList_New( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_wintypes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wintypes );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "wintypes" );
        exception_tb = NULL;

        exception_lineno = 11;

        goto try_except_handler_1;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DWORD );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 11;

        goto try_except_handler_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_1, 0, tmp_list_element_1 );
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_has_feature );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_feature );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "has_feature" );
        exception_tb = NULL;

        exception_lineno = 11;

        goto try_except_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_argtypes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 11;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_has_feature );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_has_feature );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "has_feature" );
        exception_tb = NULL;

        exception_lineno = 12;

        goto try_except_handler_1;
    }

    frame_e3223b463b894d78179332a4a9af3324->m_frame.f_lineno = 12;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_10_tuple, 0 ) );

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 12;

        goto try_except_handler_1;
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
    tmp_assign_source_10 = const_tuple_b0fcdd92a2aab3386ca2ee50634eaeb2_tuple;
    UPDATE_STRING_DICT0( moduledict_numpy$_distributor_init, (Nuitka_StringObject *)const_str_plain_msg, tmp_assign_source_10 );
    tmp_make_exception_arg_1 = const_tuple_b0fcdd92a2aab3386ca2ee50634eaeb2_tuple;
    frame_e3223b463b894d78179332a4a9af3324->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 16;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_1;
    branch_no_3:;
    branch_no_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_e3223b463b894d78179332a4a9af3324 );
#endif
    popFrameStack();

    assertFrameObject( frame_e3223b463b894d78179332a4a9af3324 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_e3223b463b894d78179332a4a9af3324 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3223b463b894d78179332a4a9af3324, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3223b463b894d78179332a4a9af3324->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3223b463b894d78179332a4a9af3324, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;


    return MOD_RETURN_VALUE( module_numpy$_distributor_init );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
