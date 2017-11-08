/* Generated code for Python source for module 'numpy._globals'
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

/* The _module_numpy$_globals is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_globals;
PyDictObject *moduledict_numpy$_globals;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038;
static PyObject *const_str_plain___ALL__;
static PyObject *const_str_digest_e06677149df4fe03e39f914eac1ae3c4;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__is_loaded;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_VisibleDeprecationWarning;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_1fa3ef7ab6cb10e6941391f74b0ec935;
static PyObject *const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_c4818f4c7678929ac2143c2744f099bc;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_7b134e7d928ce177f7e383fc8cc7851f;
extern PyObject *const_str_plain__NoValue;
extern PyObject *const_str_plain_ModuleDeprecationWarning;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_digest_9e9eca8947418183630fd19f8c915a83;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_6606441797b99ce3ee52b8fc5206322a;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038 = UNSTREAM_STRING( &constant_bin[ 38939 ], 39, 0 );
    const_str_plain___ALL__ = UNSTREAM_STRING( &constant_bin[ 38978 ], 7, 1 );
    const_str_digest_e06677149df4fe03e39f914eac1ae3c4 = UNSTREAM_STRING( &constant_bin[ 38985 ], 23, 0 );
    const_str_plain__is_loaded = UNSTREAM_STRING( &constant_bin[ 39008 ], 10, 1 );
    const_str_digest_1fa3ef7ab6cb10e6941391f74b0ec935 = UNSTREAM_STRING( &constant_bin[ 39018 ], 310, 0 );
    const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list, 0, const_str_plain_ModuleDeprecationWarning ); Py_INCREF( const_str_plain_ModuleDeprecationWarning );
    PyList_SET_ITEM( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list, 1, const_str_plain_VisibleDeprecationWarning ); Py_INCREF( const_str_plain_VisibleDeprecationWarning );
    PyList_SET_ITEM( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list, 2, const_str_plain__NoValue ); Py_INCREF( const_str_plain__NoValue );
    const_str_digest_c4818f4c7678929ac2143c2744f099bc = UNSTREAM_STRING( &constant_bin[ 39328 ], 585, 0 );
    const_str_digest_7b134e7d928ce177f7e383fc8cc7851f = UNSTREAM_STRING( &constant_bin[ 39913 ], 47, 0 );
    const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586 = UNSTREAM_STRING( &constant_bin[ 39960 ], 225, 0 );
    const_str_digest_9e9eca8947418183630fd19f8c915a83 = UNSTREAM_STRING( &constant_bin[ 38949 ], 14, 0 );
    const_str_digest_6606441797b99ce3ee52b8fc5206322a = UNSTREAM_STRING( &constant_bin[ 40185 ], 174, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$_globals( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_196a421092e2e9d32e3c2642cd2e6e2c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7b134e7d928ce177f7e383fc8cc7851f;
    codeobj_196a421092e2e9d32e3c2642cd2e6e2c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e06677149df4fe03e39f914eac1ae3c4, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$_globals =
{
    PyModuleDef_HEAD_INIT,
    "numpy._globals",   /* m_name */
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

MOD_INIT_DECL( numpy$_globals )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$_globals );
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
    puts("numpy._globals: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy._globals: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$_globals" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$_globals = Py_InitModule4(
        "numpy._globals",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$_globals = PyModule_Create( &mdef_numpy$_globals );
#endif

    moduledict_numpy$_globals = MODULE_DICT( module_numpy$_globals );

    CHECK_OBJECT( module_numpy$_globals );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9e9eca8947418183630fd19f8c915a83, module_numpy$_globals );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *outline_1_var___module__ = NULL;
    PyObject *outline_1_var___doc__ = NULL;
    PyObject *outline_2_var___module__ = NULL;
    PyObject *outline_2_var___doc__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    struct Nuitka_FrameObject *frame_196a421092e2e9d32e3c2642cd2e6e2c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_c4818f4c7678929ac2143c2744f099bc;
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7b134e7d928ce177f7e383fc8cc7851f;
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( tmp_assign_source_4 != NULL );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_196a421092e2e9d32e3c2642cd2e6e2c = MAKE_MODULE_FRAME( codeobj_196a421092e2e9d32e3c2642cd2e6e2c, module_numpy$_globals );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_196a421092e2e9d32e3c2642cd2e6e2c );
    assert( Py_REFCNT( frame_196a421092e2e9d32e3c2642cd2e6e2c ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_assign_source_8 = LIST_COPY( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list );
    UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___ALL__, tmp_assign_source_8 );
    tmp_compare_left_1 = const_str_plain__is_loaded;
    tmp_compare_right_1 = (PyObject *)moduledict_numpy$_globals;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038;
    frame_196a421092e2e9d32e3c2642cd2e6e2c->m_frame.f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 29;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_9 = Py_True;
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__is_loaded, tmp_assign_source_9 );
    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 33;

        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_12 = const_str_digest_9e9eca8947418183630fd19f8c915a83;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_12 );
    outline_0_var___module__ = tmp_assign_source_12;

    tmp_assign_source_13 = const_str_digest_1fa3ef7ab6cb10e6941391f74b0ec935;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_13 );
    outline_0_var___doc__ = tmp_assign_source_13;

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
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
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
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_11 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_11;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_compare_right_2 );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
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
    tmp_assign_source_14 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_15;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_14 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_ModuleDeprecationWarning;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_196a421092e2e9d32e3c2642cd2e6e2c->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_16;

    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_17 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_17 );
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning, tmp_assign_source_17 );
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

    // Tried code:
    tmp_assign_source_18 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "UserWarning" );
        exception_tb = NULL;

        exception_lineno = 45;

        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_18;

    tmp_assign_source_20 = const_str_digest_9e9eca8947418183630fd19f8c915a83;
    assert( outline_1_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_20 );
    outline_1_var___module__ = tmp_assign_source_20;

    tmp_assign_source_21 = const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586;
    assert( outline_1_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_21 );
    outline_1_var___doc__ = tmp_assign_source_21;

    // Tried code:
    tmp_outline_return_value_3 = _PyDict_NewPresized( 2 );
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
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    goto outline_result_3;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_1_var___module__ );
    Py_DECREF( outline_1_var___module__ );
    outline_1_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_1_var___doc__ );
    Py_DECREF( outline_1_var___doc__ );
    outline_1_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    outline_result_3:;
    tmp_assign_source_19 = tmp_outline_return_value_3;
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_19;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_compare_right_3 );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
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
    tmp_assign_source_22 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_6;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_6;
    }
    assert( tmp_select_metaclass_2__base == NULL );
    tmp_select_metaclass_2__base = tmp_assign_source_23;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_outline_return_value_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_outline_return_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_9;
    }
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    tmp_type_arg_2 = tmp_select_metaclass_2__base;

    CHECK_OBJECT( tmp_type_arg_2 );
    tmp_outline_return_value_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_outline_return_value_4 != NULL );
    goto try_return_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    goto outline_result_4;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
    Py_DECREF( tmp_select_metaclass_2__base );
    tmp_select_metaclass_2__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    outline_result_4:;
    tmp_assign_source_22 = tmp_outline_return_value_4;
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_22;

    tmp_called_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_4 = const_str_plain_VisibleDeprecationWarning;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_args_element_name_5 );
    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    CHECK_OBJECT( tmp_args_element_name_6 );
    frame_196a421092e2e9d32e3c2642cd2e6e2c->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_24;

    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_25 = tmp_class_creation_2__class;

    CHECK_OBJECT( tmp_assign_source_25 );
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning, tmp_assign_source_25 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_assign_source_27 = const_str_digest_9e9eca8947418183630fd19f8c915a83;
    assert( outline_2_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_27 );
    outline_2_var___module__ = tmp_assign_source_27;

    tmp_assign_source_28 = const_str_digest_6606441797b99ce3ee52b8fc5206322a;
    assert( outline_2_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_28 );
    outline_2_var___doc__ = tmp_assign_source_28;

    // Tried code:
    tmp_outline_return_value_5 = _PyDict_NewPresized( 2 );
    tmp_dict_value_5 = outline_2_var___module__;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_dict_key_5 = const_str_plain___module__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_value_6 = outline_2_var___doc__;

    CHECK_OBJECT( tmp_dict_value_6 );
    tmp_dict_key_6 = const_str_plain___doc__;
    tmp_res = PyDict_SetItem( tmp_outline_return_value_5, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    goto outline_result_5;
    // End of try:
    CHECK_OBJECT( (PyObject *)outline_2_var___module__ );
    Py_DECREF( outline_2_var___module__ );
    outline_2_var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)outline_2_var___doc__ );
    Py_DECREF( outline_2_var___doc__ );
    outline_2_var___doc__ = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    outline_result_5:;
    tmp_assign_source_26 = tmp_outline_return_value_5;
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_26;

    // Tried code:
    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_compare_right_4 );
    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
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
    tmp_assign_source_29 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_11;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    // Tried code:
    tmp_outline_return_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___metaclass__ );

    if (unlikely( tmp_outline_return_value_6 == NULL ))
    {
        tmp_outline_return_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___metaclass__ );
    }

    if ( tmp_outline_return_value_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__metaclass__" );
        exception_tb = NULL;

        exception_lineno = 56;

        goto try_except_handler_12;
    }

    Py_INCREF( tmp_outline_return_value_6 );
    goto outline_result_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_12:;
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
    tmp_outline_return_value_6 = (PyObject *)&PyClass_Type;
    Py_INCREF( tmp_outline_return_value_6 );
    goto outline_result_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$_globals );
    return MOD_RETURN_VALUE( NULL );
    outline_result_6:;
    tmp_assign_source_29 = tmp_outline_return_value_6;
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_29;

    tmp_called_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_7 = const_str_plain__NoValue;
    tmp_args_element_name_8 = const_tuple_empty;
    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    CHECK_OBJECT( tmp_args_element_name_9 );
    frame_196a421092e2e9d32e3c2642cd2e6e2c->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_30;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_196a421092e2e9d32e3c2642cd2e6e2c );
#endif
    popFrameStack();

    assertFrameObject( frame_196a421092e2e9d32e3c2642cd2e6e2c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_196a421092e2e9d32e3c2642cd2e6e2c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_196a421092e2e9d32e3c2642cd2e6e2c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_196a421092e2e9d32e3c2642cd2e6e2c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_196a421092e2e9d32e3c2642cd2e6e2c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_31 = tmp_class_creation_3__class;

    CHECK_OBJECT( tmp_assign_source_31 );
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__NoValue, tmp_assign_source_31 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;


    return MOD_RETURN_VALUE( module_numpy$_globals );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
