/* Generated code for Python source for module 'certifi.core'
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

/* The _module_certifi$core is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_certifi$core;
PyDictObject *moduledict_certifi$core;

/* The module constants used, if any. */
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_a39dc67e328baebe6c5d74485f07012a;
static PyObject *const_str_plain_DeprecatedBundleWarning;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_30ebb52719648ba341b2f11a8b1b97a3;
static PyObject *const_str_digest_ade8678a65277f3d2b0eb2cb67698170;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1;
static PyObject *const_str_digest_7ab210378ed10fb8a66d1c4872e0470d;
extern PyObject *const_tuple_str_plain_f_tuple;
static PyObject *const_str_digest_991032b577f29ca82fd22db635f29f74;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_841df4a82a8972a6c0a533d868301b49;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_f;
static PyObject *const_str_digest_aa8997494e69f6e0a65db7ba2f587686;
extern PyObject *const_str_plain_old_where;
extern PyObject *const_str_plain_dirname;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_a39dc67e328baebe6c5d74485f07012a = UNSTREAM_STRING( &constant_bin[ 33436 ], 141, 0 );
    const_str_plain_DeprecatedBundleWarning = UNSTREAM_STRING( &constant_bin[ 33577 ], 23, 1 );
    const_str_digest_30ebb52719648ba341b2f11a8b1b97a3 = UNSTREAM_STRING( &constant_bin[ 33600 ], 12, 0 );
    const_str_digest_ade8678a65277f3d2b0eb2cb67698170 = UNSTREAM_STRING( &constant_bin[ 33612 ], 45, 0 );
    const_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1 = UNSTREAM_STRING( &constant_bin[ 33657 ], 10, 0 );
    const_str_digest_7ab210378ed10fb8a66d1c4872e0470d = UNSTREAM_STRING( &constant_bin[ 33667 ], 73, 0 );
    const_str_digest_991032b577f29ca82fd22db635f29f74 = UNSTREAM_STRING( &constant_bin[ 33740 ], 21, 0 );
    const_str_digest_841df4a82a8972a6c0a533d868301b49 = UNSTREAM_STRING( &constant_bin[ 33761 ], 85, 0 );
    const_str_digest_aa8997494e69f6e0a65db7ba2f587686 = UNSTREAM_STRING( &constant_bin[ 33846 ], 8, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_certifi$core( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0ac7cb02aef0ce47a2638993c10bda5e;
static PyCodeObject *codeobj_2a976460f9b23702e7df3075c5320038;
static PyCodeObject *codeobj_a14e8afbe4870a4830a357d534c5e7ff;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ade8678a65277f3d2b0eb2cb67698170;
    codeobj_0ac7cb02aef0ce47a2638993c10bda5e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_991032b577f29ca82fd22db635f29f74, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2a976460f9b23702e7df3075c5320038 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_old_where, 27, const_tuple_str_plain_f_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a14e8afbe4870a4830a357d534c5e7ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_where, 21, const_tuple_str_plain_f_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_certifi$core$$$function_1_where(  );


static PyObject *MAKE_FUNCTION_certifi$core$$$function_2_old_where(  );


// The module function definitions.
static PyObject *impl_certifi$core$$$function_1_where( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_f = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_a14e8afbe4870a4830a357d534c5e7ff = NULL;

    struct Nuitka_FrameObject *frame_a14e8afbe4870a4830a357d534c5e7ff;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a14e8afbe4870a4830a357d534c5e7ff, codeobj_a14e8afbe4870a4830a357d534c5e7ff, module_certifi$core, sizeof(void *) );
    frame_a14e8afbe4870a4830a357d534c5e7ff = cache_frame_a14e8afbe4870a4830a357d534c5e7ff;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a14e8afbe4870a4830a357d534c5e7ff );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a14e8afbe4870a4830a357d534c5e7ff ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__file__" );
        exception_tb = NULL;

        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_a14e8afbe4870a4830a357d534c5e7ff->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_f;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = const_str_digest_17996ef8d8cba664fbfd1662d6aeb8d1;
    frame_a14e8afbe4870a4830a357d534c5e7ff->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14e8afbe4870a4830a357d534c5e7ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14e8afbe4870a4830a357d534c5e7ff );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a14e8afbe4870a4830a357d534c5e7ff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a14e8afbe4870a4830a357d534c5e7ff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a14e8afbe4870a4830a357d534c5e7ff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a14e8afbe4870a4830a357d534c5e7ff, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a14e8afbe4870a4830a357d534c5e7ff,
        type_description_1,
        var_f
    );


    // Release cached frame.
    if ( frame_a14e8afbe4870a4830a357d534c5e7ff == cache_frame_a14e8afbe4870a4830a357d534c5e7ff )
    {
        Py_DECREF( frame_a14e8afbe4870a4830a357d534c5e7ff );
    }
    cache_frame_a14e8afbe4870a4830a357d534c5e7ff = NULL;

    assertFrameObject( frame_a14e8afbe4870a4830a357d534c5e7ff );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( certifi$core$$$function_1_where );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( certifi$core$$$function_1_where );
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


static PyObject *impl_certifi$core$$$function_2_old_where( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_f = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2a976460f9b23702e7df3075c5320038 = NULL;

    struct Nuitka_FrameObject *frame_2a976460f9b23702e7df3075c5320038;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a976460f9b23702e7df3075c5320038, codeobj_2a976460f9b23702e7df3075c5320038, module_certifi$core, sizeof(void *) );
    frame_2a976460f9b23702e7df3075c5320038 = cache_frame_2a976460f9b23702e7df3075c5320038;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a976460f9b23702e7df3075c5320038 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a976460f9b23702e7df3075c5320038 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_7ab210378ed10fb8a66d1c4872e0470d;
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_DeprecatedBundleWarning );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecatedBundleWarning );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "DeprecatedBundleWarning" );
        exception_tb = NULL;

        exception_lineno = 31;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_2a976460f9b23702e7df3075c5320038->m_frame.f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_os );

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

        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__file__" );
        exception_tb = NULL;

        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_2a976460f9b23702e7df3075c5320038->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_1;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 34;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_f;

    CHECK_OBJECT( tmp_args_element_name_4 );
    tmp_args_element_name_5 = const_str_digest_aa8997494e69f6e0a65db7ba2f587686;
    frame_2a976460f9b23702e7df3075c5320038->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_join, call_args );
    }

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a976460f9b23702e7df3075c5320038 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a976460f9b23702e7df3075c5320038 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a976460f9b23702e7df3075c5320038 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a976460f9b23702e7df3075c5320038, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a976460f9b23702e7df3075c5320038->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a976460f9b23702e7df3075c5320038, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a976460f9b23702e7df3075c5320038,
        type_description_1,
        var_f
    );


    // Release cached frame.
    if ( frame_2a976460f9b23702e7df3075c5320038 == cache_frame_2a976460f9b23702e7df3075c5320038 )
    {
        Py_DECREF( frame_2a976460f9b23702e7df3075c5320038 );
    }
    cache_frame_2a976460f9b23702e7df3075c5320038 = NULL;

    assertFrameObject( frame_2a976460f9b23702e7df3075c5320038 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( certifi$core$$$function_2_old_where );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( certifi$core$$$function_2_old_where );
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



static PyObject *MAKE_FUNCTION_certifi$core$$$function_1_where(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_certifi$core$$$function_1_where,
        const_str_plain_where,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a14e8afbe4870a4830a357d534c5e7ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_certifi$core,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_certifi$core$$$function_2_old_where(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_certifi$core$$$function_2_old_where,
        const_str_plain_old_where,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2a976460f9b23702e7df3075c5320038,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_certifi$core,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_certifi$core =
{
    PyModuleDef_HEAD_INIT,
    "certifi.core",   /* m_name */
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

MOD_INIT_DECL( certifi$core )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_certifi$core );
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
    puts("certifi.core: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("certifi.core: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcertifi$core" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_certifi$core = Py_InitModule4(
        "certifi.core",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_certifi$core = PyModule_Create( &mdef_certifi$core );
#endif

    moduledict_certifi$core = MODULE_DICT( module_certifi$core );

    CHECK_OBJECT( module_certifi$core );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_30ebb52719648ba341b2f11a8b1b97a3, module_certifi$core );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *outline_0_var___module__ = NULL;
    PyObject *outline_0_var___doc__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_key_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    struct Nuitka_FrameObject *frame_0ac7cb02aef0ce47a2638993c10bda5e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_841df4a82a8972a6c0a533d868301b49;
    UPDATE_STRING_DICT0( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ade8678a65277f3d2b0eb2cb67698170;
    UPDATE_STRING_DICT0( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_0ac7cb02aef0ce47a2638993c10bda5e = MAKE_MODULE_FRAME( codeobj_0ac7cb02aef0ce47a2638993c10bda5e, module_certifi$core );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0ac7cb02aef0ce47a2638993c10bda5e );
    assert( Py_REFCNT( frame_0ac7cb02aef0ce47a2638993c10bda5e ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_globals_name_1 = (PyObject *)moduledict_certifi$core;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    frame_0ac7cb02aef0ce47a2638993c10bda5e->m_frame.f_lineno = 10;
    tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_warnings;
    tmp_globals_name_2 = (PyObject *)moduledict_certifi$core;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    frame_0ac7cb02aef0ce47a2638993c10bda5e->m_frame.f_lineno = 11;
    tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_5 );
    // Tried code:
    tmp_assign_source_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
        exception_tb = NULL;

        exception_lineno = 14;

        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_6;

    tmp_assign_source_8 = const_str_digest_30ebb52719648ba341b2f11a8b1b97a3;
    assert( outline_0_var___module__ == NULL );
    Py_INCREF( tmp_assign_source_8 );
    outline_0_var___module__ = tmp_assign_source_8;

    tmp_assign_source_9 = const_str_digest_a39dc67e328baebe6c5d74485f07012a;
    assert( outline_0_var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_9 );
    outline_0_var___doc__ = tmp_assign_source_9;

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
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( certifi$core );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
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
    NUITKA_CANNOT_GET_HERE( certifi$core );
    return MOD_RETURN_VALUE( NULL );
    outline_result_1:;
    tmp_assign_source_7 = tmp_outline_return_value_1;
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_7;

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
    tmp_assign_source_10 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    assert( tmp_select_metaclass_1__base == NULL );
    tmp_select_metaclass_1__base = tmp_assign_source_11;

    // Tried code:
    // Tried code:
    tmp_source_name_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_outline_return_value_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_4;
    }
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( certifi$core );
    return MOD_RETURN_VALUE( NULL );
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

    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    tmp_type_arg_1 = tmp_select_metaclass_1__base;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_outline_return_value_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_outline_return_value_2 != NULL );
    goto try_return_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( certifi$core );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    goto outline_result_2;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
    Py_DECREF( tmp_select_metaclass_1__base );
    tmp_select_metaclass_1__base = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( certifi$core );
    return MOD_RETURN_VALUE( NULL );
    outline_result_2:;
    tmp_assign_source_10 = tmp_outline_return_value_2;
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_10;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = const_str_plain_DeprecatedBundleWarning;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0ac7cb02aef0ce47a2638993c10bda5e->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_12;

    goto try_end_1;
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ac7cb02aef0ce47a2638993c10bda5e );
#endif
    popFrameStack();

    assertFrameObject( frame_0ac7cb02aef0ce47a2638993c10bda5e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ac7cb02aef0ce47a2638993c10bda5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ac7cb02aef0ce47a2638993c10bda5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ac7cb02aef0ce47a2638993c10bda5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ac7cb02aef0ce47a2638993c10bda5e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_13 = tmp_class_creation_1__class;

    CHECK_OBJECT( tmp_assign_source_13 );
    UPDATE_STRING_DICT0( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_DeprecatedBundleWarning, tmp_assign_source_13 );
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

    tmp_assign_source_14 = MAKE_FUNCTION_certifi$core$$$function_1_where(  );
    UPDATE_STRING_DICT1( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_where, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_certifi$core$$$function_2_old_where(  );
    UPDATE_STRING_DICT1( moduledict_certifi$core, (Nuitka_StringObject *)const_str_plain_old_where, tmp_assign_source_15 );

    return MOD_RETURN_VALUE( module_certifi$core );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
