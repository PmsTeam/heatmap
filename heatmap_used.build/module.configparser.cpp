/* Generated code for Python source for module 'configparser'
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

/* The _module_configparser is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_configparser;
PyDictObject *moduledict_configparser;

/* The module constants used, if any. */
extern PyObject *const_str_plain_RawConfigParser;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_BasicInterpolation;
extern PyObject *const_str_plain_ExtendedInterpolation;
extern PyObject *const_str_plain_InterpolationMissingOptionError;
extern PyObject *const_str_plain_Error;
static PyObject *const_tuple_a40ded0241d414021d252a589e18a00f_tuple;
extern PyObject *const_str_plain_MAX_INTERPOLATION_DEPTH;
extern PyObject *const_str_plain_DuplicateSectionError;
extern PyObject *const_str_plain_InterpolationDepthError;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_DuplicateOptionError;
static PyObject *const_str_digest_ec96d7d78f78893dbf1846a7d2216a77;
extern PyObject *const_str_plain_InterpolationSyntaxError;
extern PyObject *const_str_plain__UNSET;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_InterpolationError;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_configparser;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_NoOptionError;
extern PyObject *const_str_plain_MissingSectionHeaderError;
extern PyObject *const_str_plain_LegacyInterpolation;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_NoSectionError;
extern PyObject *const_str_plain__ChainMap;
extern PyObject *const_str_plain_division;
extern PyObject *const_list_7559f37a4d4a089c4373f758af56e97a_list;
static PyObject *const_unicode_digest_318efd49bd1090a16461c05e657d055b;
extern PyObject *const_str_plain_ParsingError;
extern PyObject *const_str_plain_ConverterMapping;
extern PyObject *const_str_plain__default_dict;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_SectionProxy;
extern PyObject *const_str_plain_SafeConfigParser;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_Interpolation;
extern PyObject *const_str_digest_031a36d9e219a028fd504d88b7a8c068;
static PyObject *const_str_digest_0aa6d3163b6fe4047701ac163c4478ac;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_DEFAULTSECT;
extern PyObject *const_str_plain_ConfigParser;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_a40ded0241d414021d252a589e18a00f_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 33790 ], 540 );
    const_str_digest_ec96d7d78f78893dbf1846a7d2216a77 = UNSTREAM_STRING( &constant_bin[ 34330 ], 45, 0 );
    const_unicode_digest_318efd49bd1090a16461c05e657d055b = UNSTREAM_UNICODE( &constant_bin[ 34375 ], 68 );
    const_str_digest_0aa6d3163b6fe4047701ac163c4478ac = UNSTREAM_STRING( &constant_bin[ 34443 ], 21, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_configparser( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d3130b20364daf1dce43585e873a9923;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ec96d7d78f78893dbf1846a7d2216a77;
    codeobj_d3130b20364daf1dce43585e873a9923 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0aa6d3163b6fe4047701ac163c4478ac, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_configparser =
{
    PyModuleDef_HEAD_INIT,
    "configparser",   /* m_name */
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

MOD_INIT_DECL( configparser )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_configparser );
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
    puts("configparser: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("configparser: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initconfigparser" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_configparser = Py_InitModule4(
        "configparser",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_configparser = PyModule_Create( &mdef_configparser );
#endif

    moduledict_configparser = MODULE_DICT( module_configparser );

    CHECK_OBJECT( module_configparser );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_configparser, module_configparser );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
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
    PyObject *tmp_assign_source_34;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
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
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_d3130b20364daf1dce43585e873a9923;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_unicode_digest_318efd49bd1090a16461c05e657d055b;
    UPDATE_STRING_DICT0( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ec96d7d78f78893dbf1846a7d2216a77;
    UPDATE_STRING_DICT0( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_d3130b20364daf1dce43585e873a9923 = MAKE_MODULE_FRAME( codeobj_d3130b20364daf1dce43585e873a9923, module_configparser );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d3130b20364daf1dce43585e873a9923 );
    assert( Py_REFCNT( frame_d3130b20364daf1dce43585e873a9923 ) == 2 );

    // Framed code:
    frame_d3130b20364daf1dce43585e873a9923->m_frame.f_lineno = 6;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_1 != NULL );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    frame_d3130b20364daf1dce43585e873a9923->m_frame.f_lineno = 7;
    tmp_import_name_from_2 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_2 != NULL );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    frame_d3130b20364daf1dce43585e873a9923->m_frame.f_lineno = 8;
    tmp_import_name_from_3 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_3 != NULL );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    frame_d3130b20364daf1dce43585e873a9923->m_frame.f_lineno = 9;
    tmp_import_name_from_4 = PyImport_ImportModule("__future__");
    assert( tmp_import_name_from_4 != NULL );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_unicode_literals );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_7 );
    tmp_name_name_1 = const_str_digest_031a36d9e219a028fd504d88b7a8c068;
    tmp_globals_name_1 = (PyObject *)moduledict_configparser;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_a40ded0241d414021d252a589e18a00f_tuple;
    tmp_level_name_1 = const_int_0;
    frame_d3130b20364daf1dce43585e873a9923->m_frame.f_lineno = 12;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_RawConfigParser );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_RawConfigParser, tmp_assign_source_9 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ConfigParser );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_ConfigParser, tmp_assign_source_10 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SafeConfigParser );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_SafeConfigParser, tmp_assign_source_11 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SectionProxy );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_SectionProxy, tmp_assign_source_12 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Interpolation );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_Interpolation, tmp_assign_source_13 );
    tmp_import_name_from_10 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_BasicInterpolation );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_BasicInterpolation, tmp_assign_source_14 );
    tmp_import_name_from_11 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_ExtendedInterpolation );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_ExtendedInterpolation, tmp_assign_source_15 );
    tmp_import_name_from_12 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_LegacyInterpolation );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_LegacyInterpolation, tmp_assign_source_16 );
    tmp_import_name_from_13 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_Error );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_17 );
    tmp_import_name_from_14 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_NoSectionError );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_NoSectionError, tmp_assign_source_18 );
    tmp_import_name_from_15 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_DuplicateSectionError );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_DuplicateSectionError, tmp_assign_source_19 );
    tmp_import_name_from_16 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_DuplicateOptionError );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_DuplicateOptionError, tmp_assign_source_20 );
    tmp_import_name_from_17 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_NoOptionError );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_NoOptionError, tmp_assign_source_21 );
    tmp_import_name_from_18 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_InterpolationError );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_InterpolationError, tmp_assign_source_22 );
    tmp_import_name_from_19 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_InterpolationMissingOptionError );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_InterpolationMissingOptionError, tmp_assign_source_23 );
    tmp_import_name_from_20 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_InterpolationSyntaxError );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_InterpolationSyntaxError, tmp_assign_source_24 );
    tmp_import_name_from_21 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_InterpolationDepthError );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_InterpolationDepthError, tmp_assign_source_25 );
    tmp_import_name_from_22 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_ParsingError );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_ParsingError, tmp_assign_source_26 );
    tmp_import_name_from_23 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_MissingSectionHeaderError );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_MissingSectionHeaderError, tmp_assign_source_27 );
    tmp_import_name_from_24 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ConverterMapping );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_ConverterMapping, tmp_assign_source_28 );
    tmp_import_name_from_25 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain__UNSET );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain__UNSET, tmp_assign_source_29 );
    tmp_import_name_from_26 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_DEFAULTSECT );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_DEFAULTSECT, tmp_assign_source_30 );
    tmp_import_name_from_27 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_MAX_INTERPOLATION_DEPTH );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain_MAX_INTERPOLATION_DEPTH, tmp_assign_source_31 );
    tmp_import_name_from_28 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain__default_dict );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain__default_dict, tmp_assign_source_32 );
    tmp_import_name_from_29 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain__ChainMap );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain__ChainMap, tmp_assign_source_33 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3130b20364daf1dce43585e873a9923 );
#endif
    popFrameStack();

    assertFrameObject( frame_d3130b20364daf1dce43585e873a9923 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3130b20364daf1dce43585e873a9923 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3130b20364daf1dce43585e873a9923, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3130b20364daf1dce43585e873a9923->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3130b20364daf1dce43585e873a9923, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_34 = LIST_COPY( const_list_7559f37a4d4a089c4373f758af56e97a_list );
    UPDATE_STRING_DICT1( moduledict_configparser, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_34 );

    return MOD_RETURN_VALUE( module_configparser );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
