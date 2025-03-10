#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif /* PY_SSIZE_T_CLEAN */
#if defined(CYTHON_LIMITED_API) && 0
  #ifndef Py_LIMITED_API
    #if CYTHON_LIMITED_API+0 > 0x03030000
      #define Py_LIMITED_API CYTHON_LIMITED_API
    #else
      #define Py_LIMITED_API 0x03030000
    #endif
  #endif
#endif

#include "Python.h"
#ifndef Py_PYTHON_H
    #error Python headers needed to compile C extensions, please install development version of Python.
#elif PY_VERSION_HEX < 0x02070000 || (0x03000000 <= PY_VERSION_HEX && PY_VERSION_HEX < 0x03030000)
    #error Cython requires Python 2.7+ or Python 3.3+.
#else
#if defined(CYTHON_LIMITED_API) && CYTHON_LIMITED_API
#define __PYX_EXTRA_ABI_MODULE_NAME "limited"
#else
#define __PYX_EXTRA_ABI_MODULE_NAME ""
#endif
#define CYTHON_ABI "3_0_12" __PYX_EXTRA_ABI_MODULE_NAME
#define __PYX_ABI_MODULE_NAME "_cython_" CYTHON_ABI
#define __PYX_TYPE_MODULE_PREFIX __PYX_ABI_MODULE_NAME "."
#define CYTHON_HEX_VERSION 0x03000CF0
#define CYTHON_FUTURE_DIVISION 1
#include <stddef.h>
#ifndef offsetof
  #define offsetof(type, member) ( (size_t) & ((type*)0) -> member )
#endif
#if !defined(_WIN32) && !defined(WIN32) && !defined(MS_WINDOWS)
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
  #ifndef __fastcall
    #define __fastcall
  #endif
#endif
#ifndef DL_IMPORT
  #define DL_IMPORT(t) t
#endif
#ifndef DL_EXPORT
  #define DL_EXPORT(t) t
#endif
#define __PYX_COMMA ,
#ifndef HAVE_LONG_LONG
  #define HAVE_LONG_LONG
#endif
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifndef Py_HUGE_VAL
  #define Py_HUGE_VAL HUGE_VAL
#endif
#define __PYX_LIMITED_VERSION_HEX PY_VERSION_HEX
#if defined(GRAALVM_PYTHON)
  /* For very preliminary testing purposes. Most variables are set the same as PyPy.
     The existence of this section does not imply that anything works or is even tested */
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 1
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_TYPE_SPECS
  #define CYTHON_USE_TYPE_SPECS 0
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #undef CYTHON_AVOID_BORROWED_REFS
  #define CYTHON_AVOID_BORROWED_REFS 1
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS (PY_MAJOR_VERSION >= 3)
  #endif
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
  #undef CYTHON_USE_FREELISTS
  #define CYTHON_USE_FREELISTS 0
#elif defined(PYPY_VERSION)
  #define CYTHON_COMPILING_IN_PYPY 1
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #undef CYTHON_AVOID_BORROWED_REFS
  #define CYTHON_AVOID_BORROWED_REFS 1
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS (PY_MAJOR_VERSION >= 3)
  #endif
  #if PY_VERSION_HEX < 0x03090000
    #undef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #elif !defined(CYTHON_PEP489_MULTI_PHASE_INIT)
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE (PY_VERSION_HEX >= 0x030400a1 && PYPY_VERSION_NUM >= 0x07030C00)
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
  #undef CYTHON_USE_FREELISTS
  #define CYTHON_USE_FREELISTS 0
#elif defined(CYTHON_LIMITED_API)
  #ifdef Py_LIMITED_API
    #undef __PYX_LIMITED_VERSION_HEX
    #define __PYX_LIMITED_VERSION_HEX Py_LIMITED_API
  #endif
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 1
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_CLINE_IN_TRACEBACK
  #define CYTHON_CLINE_IN_TRACEBACK 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_TYPE_SPECS
  #define CYTHON_USE_TYPE_SPECS 1
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #undef CYTHON_USE_ASYNC_SLOTS
  #define CYTHON_USE_ASYNC_SLOTS 0
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #endif
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 1
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 0
  #endif
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
  #undef CYTHON_USE_FREELISTS
  #define CYTHON_USE_FREELISTS 0
#elif defined(Py_GIL_DISABLED) || defined(Py_NOGIL)
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 1
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #ifndef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #ifndef CYTHON_USE_PYLONG_INTERNALS
    #define CYTHON_USE_PYLONG_INTERNALS 0
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #ifndef CYTHON_METH_FASTCALL
    #define CYTHON_METH_FASTCALL 1
  #endif
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #ifndef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #ifndef CYTHON_USE_MODULE_STATE
    #define CYTHON_USE_MODULE_STATE 0
  #endif
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 1
  #endif
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 1
  #endif
  #ifndef CYTHON_USE_FREELISTS
    #define CYTHON_USE_FREELISTS 0
  #endif
#else
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 1
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #ifndef CYTHON_USE_PYTYPE_LOOKUP
    #define CYTHON_USE_PYTYPE_LOOKUP 1
  #endif
  #if PY_MAJOR_VERSION < 3
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #ifndef CYTHON_USE_PYLONG_INTERNALS
    #define CYTHON_USE_PYLONG_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_PYLIST_INTERNALS
    #define CYTHON_USE_PYLIST_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #if PY_VERSION_HEX < 0x030300F0 || PY_VERSION_HEX >= 0x030B00A2
    #undef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #elif !defined(CYTHON_USE_UNICODE_WRITER)
    #define CYTHON_USE_UNICODE_WRITER 1
  #endif
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #ifndef CYTHON_FAST_THREAD_STATE
    #define CYTHON_FAST_THREAD_STATE 1
  #endif
  #ifndef CYTHON_FAST_GIL
    #define CYTHON_FAST_GIL (PY_MAJOR_VERSION < 3 || PY_VERSION_HEX >= 0x03060000 && PY_VERSION_HEX < 0x030C00A6)
  #endif
  #ifndef CYTHON_METH_FASTCALL
    #define CYTHON_METH_FASTCALL (PY_VERSION_HEX >= 0x030700A1)
  #endif
  #ifndef CYTHON_FAST_PYCALL
    #define CYTHON_FAST_PYCALL 1
  #endif
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #elif !defined(CYTHON_PEP489_MULTI_PHASE_INIT)
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #ifndef CYTHON_USE_MODULE_STATE
    #define CYTHON_USE_MODULE_STATE 0
  #endif
  #if PY_VERSION_HEX < 0x030400a1
    #undef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 0
  #elif !defined(CYTHON_USE_TP_FINALIZE)
    #define CYTHON_USE_TP_FINALIZE 1
  #endif
  #if PY_VERSION_HEX < 0x030600B1
    #undef CYTHON_USE_DICT_VERSIONS
    #define CYTHON_USE_DICT_VERSIONS 0
  #elif !defined(CYTHON_USE_DICT_VERSIONS)
    #define CYTHON_USE_DICT_VERSIONS  (PY_VERSION_HEX < 0x030C00A5)
  #endif
  #if PY_VERSION_HEX < 0x030700A3
    #undef CYTHON_USE_EXC_INFO_STACK
    #define CYTHON_USE_EXC_INFO_STACK 0
  #elif !defined(CYTHON_USE_EXC_INFO_STACK)
    #define CYTHON_USE_EXC_INFO_STACK 1
  #endif
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 1
  #endif
  #ifndef CYTHON_USE_FREELISTS
    #define CYTHON_USE_FREELISTS 1
  #endif
#endif
#if !defined(CYTHON_FAST_PYCCALL)
#define CYTHON_FAST_PYCCALL  (CYTHON_FAST_PYCALL && PY_VERSION_HEX >= 0x030600B1)
#endif
#if !defined(CYTHON_VECTORCALL)
#define CYTHON_VECTORCALL  (CYTHON_FAST_PYCCALL && PY_VERSION_HEX >= 0x030800B1)
#endif
#define CYTHON_BACKPORT_VECTORCALL (CYTHON_METH_FASTCALL && PY_VERSION_HEX < 0x030800B1)
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_MAJOR_VERSION < 3
    #include "longintrepr.h"
  #endif
  #undef SHIFT
  #undef BASE
  #undef MASK
  #ifdef SIZEOF_VOID_P
    enum { __pyx_check_sizeof_voidp = 1 / (int)(SIZEOF_VOID_P == sizeof(void*)) };
  #endif
#endif
#ifndef __has_attribute
  #define __has_attribute(x) 0
#endif
#ifndef __has_cpp_attribute
  #define __has_cpp_attribute(x) 0
#endif
#ifndef CYTHON_RESTRICT
  #if defined(__GNUC__)
    #define CYTHON_RESTRICT __restrict__
  #elif defined(_MSC_VER) && _MSC_VER >= 1400
    #define CYTHON_RESTRICT __restrict
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_RESTRICT restrict
  #else
    #define CYTHON_RESTRICT
  #endif
#endif
#ifndef CYTHON_UNUSED
  #if defined(__cplusplus)
    /* for clang __has_cpp_attribute(maybe_unused) is true even before C++17
     * but leads to warnings with -pedantic, since it is a C++17 feature */
    #if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201703L) || __cplusplus >= 201703L)
      #if __has_cpp_attribute(maybe_unused)
        #define CYTHON_UNUSED [[maybe_unused]]
      #endif
    #endif
  #endif
#endif
#ifndef CYTHON_UNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define CYTHON_UNUSED __attribute__ ((__unused__))
#   else
#     define CYTHON_UNUSED
#   endif
# elif defined(__ICC) || (defined(__INTEL_COMPILER) && !defined(_MSC_VER))
#   define CYTHON_UNUSED __attribute__ ((__unused__))
# else
#   define CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_UNUSED_VAR
#  if defined(__cplusplus)
     template<class T> void CYTHON_UNUSED_VAR( const T& ) { }
#  else
#    define CYTHON_UNUSED_VAR(x) (void)(x)
#  endif
#endif
#ifndef CYTHON_MAYBE_UNUSED_VAR
  #define CYTHON_MAYBE_UNUSED_VAR(x) CYTHON_UNUSED_VAR(x)
#endif
#ifndef CYTHON_NCP_UNUSED
# if CYTHON_COMPILING_IN_CPYTHON
#  define CYTHON_NCP_UNUSED
# else
#  define CYTHON_NCP_UNUSED CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_USE_CPP_STD_MOVE
  #if defined(__cplusplus) && (\
    __cplusplus >= 201103L || (defined(_MSC_VER) && _MSC_VER >= 1600))
    #define CYTHON_USE_CPP_STD_MOVE 1
  #else
    #define CYTHON_USE_CPP_STD_MOVE 0
  #endif
#endif
#define __Pyx_void_to_None(void_result) ((void)(void_result), Py_INCREF(Py_None), Py_None)
#ifdef _MSC_VER
    #ifndef _MSC_STDINT_H_
        #if _MSC_VER < 1300
            typedef unsigned char     uint8_t;
            typedef unsigned short    uint16_t;
            typedef unsigned int      uint32_t;
        #else
            typedef unsigned __int8   uint8_t;
            typedef unsigned __int16  uint16_t;
            typedef unsigned __int32  uint32_t;
        #endif
    #endif
    #if _MSC_VER < 1300
        #ifdef _WIN64
            typedef unsigned long long  __pyx_uintptr_t;
        #else
            typedef unsigned int        __pyx_uintptr_t;
        #endif
    #else
        #ifdef _WIN64
            typedef unsigned __int64    __pyx_uintptr_t;
        #else
            typedef unsigned __int32    __pyx_uintptr_t;
        #endif
    #endif
#else
    #include <stdint.h>
    typedef uintptr_t  __pyx_uintptr_t;
#endif
#ifndef CYTHON_FALLTHROUGH
  #if defined(__cplusplus)
    /* for clang __has_cpp_attribute(fallthrough) is true even before C++17
     * but leads to warnings with -pedantic, since it is a C++17 feature */
    #if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201703L) || __cplusplus >= 201703L)
      #if __has_cpp_attribute(fallthrough)
        #define CYTHON_FALLTHROUGH [[fallthrough]]
      #endif
    #endif
    #ifndef CYTHON_FALLTHROUGH
      #if __has_cpp_attribute(clang::fallthrough)
        #define CYTHON_FALLTHROUGH [[clang::fallthrough]]
      #elif __has_cpp_attribute(gnu::fallthrough)
        #define CYTHON_FALLTHROUGH [[gnu::fallthrough]]
      #endif
    #endif
  #endif
  #ifndef CYTHON_FALLTHROUGH
    #if __has_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH __attribute__((fallthrough))
    #else
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
  #if defined(__clang__) && defined(__apple_build_version__)
    #if __apple_build_version__ < 7000000
      #undef  CYTHON_FALLTHROUGH
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
#endif
#ifdef __cplusplus
  template <typename T>
  struct __PYX_IS_UNSIGNED_IMPL {static const bool value = T(0) < T(-1);};
  #define __PYX_IS_UNSIGNED(type) (__PYX_IS_UNSIGNED_IMPL<type>::value)
#else
  #define __PYX_IS_UNSIGNED(type) (((type)-1) > 0)
#endif
#if CYTHON_COMPILING_IN_PYPY == 1
  #define __PYX_NEED_TP_PRINT_SLOT  (PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x030A0000)
#else
  #define __PYX_NEED_TP_PRINT_SLOT  (PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000)
#endif
#define __PYX_REINTERPRET_FUNCION(func_pointer, other_pointer) ((func_pointer)(void(*)(void))(other_pointer))

#ifndef CYTHON_INLINE
  #if defined(__clang__)
    #define CYTHON_INLINE __inline__ __attribute__ ((__unused__))
  #elif defined(__GNUC__)
    #define CYTHON_INLINE __inline__
  #elif defined(_MSC_VER)
    #define CYTHON_INLINE __inline
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_INLINE inline
  #else
    #define CYTHON_INLINE
  #endif
#endif

#define __PYX_BUILD_PY_SSIZE_T "n"
#define CYTHON_FORMAT_SSIZE_T "z"
#if PY_MAJOR_VERSION < 3
  #define __Pyx_BUILTIN_MODULE_NAME "__builtin__"
  #define __Pyx_DefaultClassType PyClass_Type
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a+k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#else
  #define __Pyx_BUILTIN_MODULE_NAME "builtins"
  #define __Pyx_DefaultClassType PyType_Type
#if CYTHON_COMPILING_IN_LIMITED_API
    static CYTHON_INLINE PyObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
        PyObject *exception_table = NULL;
        PyObject *types_module=NULL, *code_type=NULL, *result=NULL;
        #if __PYX_LIMITED_VERSION_HEX < 0x030B0000
        PyObject *version_info;
        PyObject *py_minor_version = NULL;
        #endif
        long minor_version = 0;
        PyObject *type, *value, *traceback;
        PyErr_Fetch(&type, &value, &traceback);
        #if __PYX_LIMITED_VERSION_HEX >= 0x030B0000
        minor_version = 11;
        #else
        if (!(version_info = PySys_GetObject("version_info"))) goto end;
        if (!(py_minor_version = PySequence_GetItem(version_info, 1))) goto end;
        minor_version = PyLong_AsLong(py_minor_version);
        Py_DECREF(py_minor_version);
        if (minor_version == -1 && PyErr_Occurred()) goto end;
        #endif
        if (!(types_module = PyImport_ImportModule("types"))) goto end;
        if (!(code_type = PyObject_GetAttrString(types_module, "CodeType"))) goto end;
        if (minor_version <= 7) {
            (void)p;
            result = PyObject_CallFunction(code_type, "iiiiiOOOOOOiOO", a, k, l, s, f, code,
                          c, n, v, fn, name, fline, lnos, fv, cell);
        } else if (minor_version <= 10) {
            result = PyObject_CallFunction(code_type, "iiiiiiOOOOOOiOO", a,p, k, l, s, f, code,
                          c, n, v, fn, name, fline, lnos, fv, cell);
        } else {
            if (!(exception_table = PyBytes_FromStringAndSize(NULL, 0))) goto end;
            result = PyObject_CallFunction(code_type, "iiiiiiOOOOOOOiOO", a,p, k, l, s, f, code,
                          c, n, v, fn, name, name, fline, lnos, exception_table, fv, cell);
        }
    end:
        Py_XDECREF(code_type);
        Py_XDECREF(exception_table);
        Py_XDECREF(types_module);
        if (type) {
            PyErr_Restore(type, value, traceback);
        }
        return result;
    }
    #ifndef CO_OPTIMIZED
    #define CO_OPTIMIZED 0x0001
    #endif
    #ifndef CO_NEWLOCALS
    #define CO_NEWLOCALS 0x0002
    #endif
    #ifndef CO_VARARGS
    #define CO_VARARGS 0x0004
    #endif
    #ifndef CO_VARKEYWORDS
    #define CO_VARKEYWORDS 0x0008
    #endif
    #ifndef CO_ASYNC_GENERATOR
    #define CO_ASYNC_GENERATOR 0x0200
    #endif
    #ifndef CO_GENERATOR
    #define CO_GENERATOR 0x0020
    #endif
    #ifndef CO_COROUTINE
    #define CO_COROUTINE 0x0080
    #endif
#elif PY_VERSION_HEX >= 0x030B0000
  static CYTHON_INLINE PyCodeObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
    PyCodeObject *result;
    PyObject *empty_bytes = PyBytes_FromStringAndSize("", 0);
    if (!empty_bytes) return NULL;
    result =
      #if PY_VERSION_HEX >= 0x030C0000
        PyUnstable_Code_NewWithPosOnlyArgs
      #else
        PyCode_NewWithPosOnlyArgs
      #endif
        (a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, name, fline, lnos, empty_bytes);
    Py_DECREF(empty_bytes);
    return result;
  }
#elif PY_VERSION_HEX >= 0x030800B2 && !CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_NewWithPosOnlyArgs(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#else
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#endif
#endif
#if PY_VERSION_HEX >= 0x030900A4 || defined(Py_IS_TYPE)
  #define __Pyx_IS_TYPE(ob, type) Py_IS_TYPE(ob, type)
#else
  #define __Pyx_IS_TYPE(ob, type) (((const PyObject*)ob)->ob_type == (type))
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_Is)
  #define __Pyx_Py_Is(x, y)  Py_Is(x, y)
#else
  #define __Pyx_Py_Is(x, y) ((x) == (y))
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsNone)
  #define __Pyx_Py_IsNone(ob) Py_IsNone(ob)
#else
  #define __Pyx_Py_IsNone(ob) __Pyx_Py_Is((ob), Py_None)
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsTrue)
  #define __Pyx_Py_IsTrue(ob) Py_IsTrue(ob)
#else
  #define __Pyx_Py_IsTrue(ob) __Pyx_Py_Is((ob), Py_True)
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsFalse)
  #define __Pyx_Py_IsFalse(ob) Py_IsFalse(ob)
#else
  #define __Pyx_Py_IsFalse(ob) __Pyx_Py_Is((ob), Py_False)
#endif
#define __Pyx_NoneAsNull(obj)  (__Pyx_Py_IsNone(obj) ? NULL : (obj))
#if PY_VERSION_HEX >= 0x030900F0 && !CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyObject_GC_IsFinalized(o) PyObject_GC_IsFinalized(o)
#else
  #define __Pyx_PyObject_GC_IsFinalized(o) _PyGC_FINALIZED(o)
#endif
#ifndef CO_COROUTINE
  #define CO_COROUTINE 0x80
#endif
#ifndef CO_ASYNC_GENERATOR
  #define CO_ASYNC_GENERATOR 0x200
#endif
#ifndef Py_TPFLAGS_CHECKTYPES
  #define Py_TPFLAGS_CHECKTYPES 0
#endif
#ifndef Py_TPFLAGS_HAVE_INDEX
  #define Py_TPFLAGS_HAVE_INDEX 0
#endif
#ifndef Py_TPFLAGS_HAVE_NEWBUFFER
  #define Py_TPFLAGS_HAVE_NEWBUFFER 0
#endif
#ifndef Py_TPFLAGS_HAVE_FINALIZE
  #define Py_TPFLAGS_HAVE_FINALIZE 0
#endif
#ifndef Py_TPFLAGS_SEQUENCE
  #define Py_TPFLAGS_SEQUENCE 0
#endif
#ifndef Py_TPFLAGS_MAPPING
  #define Py_TPFLAGS_MAPPING 0
#endif
#ifndef METH_STACKLESS
  #define METH_STACKLESS 0
#endif
#if PY_VERSION_HEX <= 0x030700A3 || !defined(METH_FASTCALL)
  #ifndef METH_FASTCALL
     #define METH_FASTCALL 0x80
  #endif
  typedef PyObject *(*__Pyx_PyCFunctionFast) (PyObject *self, PyObject *const *args, Py_ssize_t nargs);
  typedef PyObject *(*__Pyx_PyCFunctionFastWithKeywords) (PyObject *self, PyObject *const *args,
                                                          Py_ssize_t nargs, PyObject *kwnames);
#else
  #if PY_VERSION_HEX >= 0x030d00A4
  #  define __Pyx_PyCFunctionFast PyCFunctionFast
  #  define __Pyx_PyCFunctionFastWithKeywords PyCFunctionFastWithKeywords
  #else
  #  define __Pyx_PyCFunctionFast _PyCFunctionFast
  #  define __Pyx_PyCFunctionFastWithKeywords _PyCFunctionFastWithKeywords
  #endif
#endif
#if CYTHON_METH_FASTCALL
  #define __Pyx_METH_FASTCALL METH_FASTCALL
  #define __Pyx_PyCFunction_FastCall __Pyx_PyCFunctionFast
  #define __Pyx_PyCFunction_FastCallWithKeywords __Pyx_PyCFunctionFastWithKeywords
#else
  #define __Pyx_METH_FASTCALL METH_VARARGS
  #define __Pyx_PyCFunction_FastCall PyCFunction
  #define __Pyx_PyCFunction_FastCallWithKeywords PyCFunctionWithKeywords
#endif
#if CYTHON_VECTORCALL
  #define __pyx_vectorcallfunc vectorcallfunc
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  PY_VECTORCALL_ARGUMENTS_OFFSET
  #define __Pyx_PyVectorcall_NARGS(n)  PyVectorcall_NARGS((size_t)(n))
#elif CYTHON_BACKPORT_VECTORCALL
  typedef PyObject *(*__pyx_vectorcallfunc)(PyObject *callable, PyObject *const *args,
                                            size_t nargsf, PyObject *kwnames);
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  ((size_t)1 << (8 * sizeof(size_t) - 1))
  #define __Pyx_PyVectorcall_NARGS(n)  ((Py_ssize_t)(((size_t)(n)) & ~__Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET))
#else
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  0
  #define __Pyx_PyVectorcall_NARGS(n)  ((Py_ssize_t)(n))
#endif
#if PY_MAJOR_VERSION >= 0x030900B1
#define __Pyx_PyCFunction_CheckExact(func)  PyCFunction_CheckExact(func)
#else
#define __Pyx_PyCFunction_CheckExact(func)  PyCFunction_Check(func)
#endif
#define __Pyx_CyOrPyCFunction_Check(func)  PyCFunction_Check(func)
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CyOrPyCFunction_GET_FUNCTION(func)  (((PyCFunctionObject*)(func))->m_ml->ml_meth)
#elif !CYTHON_COMPILING_IN_LIMITED_API
#define __Pyx_CyOrPyCFunction_GET_FUNCTION(func)  PyCFunction_GET_FUNCTION(func)
#endif
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CyOrPyCFunction_GET_FLAGS(func)  (((PyCFunctionObject*)(func))->m_ml->ml_flags)
static CYTHON_INLINE PyObject* __Pyx_CyOrPyCFunction_GET_SELF(PyObject *func) {
    return (__Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_STATIC) ? NULL : ((PyCFunctionObject*)func)->m_self;
}
#endif
static CYTHON_INLINE int __Pyx__IsSameCFunction(PyObject *func, void *cfunc) {
#if CYTHON_COMPILING_IN_LIMITED_API
    return PyCFunction_Check(func) && PyCFunction_GetFunction(func) == (PyCFunction) cfunc;
#else
    return PyCFunction_Check(func) && PyCFunction_GET_FUNCTION(func) == (PyCFunction) cfunc;
#endif
}
#define __Pyx_IsSameCFunction(func, cfunc)   __Pyx__IsSameCFunction(func, cfunc)
#if __PYX_LIMITED_VERSION_HEX < 0x030900B1
  #define __Pyx_PyType_FromModuleAndSpec(m, s, b)  ((void)m, PyType_FromSpecWithBases(s, b))
  typedef PyObject *(*__Pyx_PyCMethod)(PyObject *, PyTypeObject *, PyObject *const *, size_t, PyObject *);
#else
  #define __Pyx_PyType_FromModuleAndSpec(m, s, b)  PyType_FromModuleAndSpec(m, s, b)
  #define __Pyx_PyCMethod  PyCMethod
#endif
#ifndef METH_METHOD
  #define METH_METHOD 0x200
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Malloc)
  #define PyObject_Malloc(s)   PyMem_Malloc(s)
  #define PyObject_Free(p)     PyMem_Free(p)
  #define PyObject_Realloc(p)  PyMem_Realloc(p)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)
#else
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)  (frame)->f_lineno = (lineno)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyThreadState_Current PyThreadState_Get()
#elif !CYTHON_FAST_THREAD_STATE
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#elif PY_VERSION_HEX >= 0x030d00A1
  #define __Pyx_PyThreadState_Current PyThreadState_GetUnchecked()
#elif PY_VERSION_HEX >= 0x03060000
  #define __Pyx_PyThreadState_Current _PyThreadState_UncheckedGet()
#elif PY_VERSION_HEX >= 0x03000000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#else
  #define __Pyx_PyThreadState_Current _PyThreadState_Current
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_INLINE void *__Pyx_PyModule_GetState(PyObject *op)
{
    void *result;
    result = PyModule_GetState(op);
    if (!result)
        Py_FatalError("Couldn't find the module state");
    return result;
}
#endif
#define __Pyx_PyObject_GetSlot(obj, name, func_ctype)  __Pyx_PyType_GetSlot(Py_TYPE(obj), name, func_ctype)
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyType_GetSlot(type, name, func_ctype)  ((func_ctype) PyType_GetSlot((type), Py_##name))
#else
  #define __Pyx_PyType_GetSlot(type, name, func_ctype)  ((type)->name)
#endif
#if PY_VERSION_HEX < 0x030700A2 && !defined(PyThread_tss_create) && !defined(Py_tss_NEEDS_INIT)
#include "pythread.h"
#define Py_tss_NEEDS_INIT 0
typedef int Py_tss_t;
static CYTHON_INLINE int PyThread_tss_create(Py_tss_t *key) {
  *key = PyThread_create_key();
  return 0;
}
static CYTHON_INLINE Py_tss_t * PyThread_tss_alloc(void) {
  Py_tss_t *key = (Py_tss_t *)PyObject_Malloc(sizeof(Py_tss_t));
  *key = Py_tss_NEEDS_INIT;
  return key;
}
static CYTHON_INLINE void PyThread_tss_free(Py_tss_t *key) {
  PyObject_Free(key);
}
static CYTHON_INLINE int PyThread_tss_is_created(Py_tss_t *key) {
  return *key != Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE void PyThread_tss_delete(Py_tss_t *key) {
  PyThread_delete_key(*key);
  *key = Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE int PyThread_tss_set(Py_tss_t *key, void *value) {
  return PyThread_set_key_value(*key, value);
}
static CYTHON_INLINE void * PyThread_tss_get(Py_tss_t *key) {
  return PyThread_get_key_value(*key);
}
#endif
#if PY_MAJOR_VERSION < 3
    #if CYTHON_COMPILING_IN_PYPY
        #if PYPY_VERSION_NUM < 0x07030600
            #if defined(__cplusplus) && __cplusplus >= 201402L
                [[deprecated("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6")]]
            #elif defined(__GNUC__) || defined(__clang__)
                __attribute__ ((__deprecated__("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6")))
            #elif defined(_MSC_VER)
                __declspec(deprecated("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6"))
            #endif
            static CYTHON_INLINE int PyGILState_Check(void) {
                return 0;
            }
        #else  // PYPY_VERSION_NUM < 0x07030600
        #endif  // PYPY_VERSION_NUM < 0x07030600
    #else
        static CYTHON_INLINE int PyGILState_Check(void) {
            PyThreadState * tstate = _PyThreadState_Current;
            return tstate && (tstate == PyGILState_GetThisThreadState());
        }
    #endif
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030d0000 || defined(_PyDict_NewPresized)
#define __Pyx_PyDict_NewPresized(n)  ((n <= 8) ? PyDict_New() : _PyDict_NewPresized(n))
#else
#define __Pyx_PyDict_NewPresized(n)  PyDict_New()
#endif
#if PY_MAJOR_VERSION >= 3 || CYTHON_FUTURE_DIVISION
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_TrueDivide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceTrueDivide(x,y)
#else
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_Divide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceDivide(x,y)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX > 0x030600B4 && PY_VERSION_HEX < 0x030d0000 && CYTHON_USE_UNICODE_INTERNALS
#define __Pyx_PyDict_GetItemStrWithError(dict, name)  _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash)
static CYTHON_INLINE PyObject * __Pyx_PyDict_GetItemStr(PyObject *dict, PyObject *name) {
    PyObject *res = __Pyx_PyDict_GetItemStrWithError(dict, name);
    if (res == NULL) PyErr_Clear();
    return res;
}
#elif PY_MAJOR_VERSION >= 3 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07020000)
#define __Pyx_PyDict_GetItemStrWithError  PyDict_GetItemWithError
#define __Pyx_PyDict_GetItemStr           PyDict_GetItem
#else
static CYTHON_INLINE PyObject * __Pyx_PyDict_GetItemStrWithError(PyObject *dict, PyObject *name) {
#if CYTHON_COMPILING_IN_PYPY
    return PyDict_GetItem(dict, name);
#else
    PyDictEntry *ep;
    PyDictObject *mp = (PyDictObject*) dict;
    long hash = ((PyStringObject *) name)->ob_shash;
    assert(hash != -1);
    ep = (mp->ma_lookup)(mp, name, hash);
    if (ep == NULL) {
        return NULL;
    }
    return ep->me_value;
#endif
}
#define __Pyx_PyDict_GetItemStr           PyDict_GetItem
#endif
#if CYTHON_USE_TYPE_SLOTS
  #define __Pyx_PyType_GetFlags(tp)   (((PyTypeObject *)tp)->tp_flags)
  #define __Pyx_PyType_HasFeature(type, feature)  ((__Pyx_PyType_GetFlags(type) & (feature)) != 0)
  #define __Pyx_PyObject_GetIterNextFunc(obj)  (Py_TYPE(obj)->tp_iternext)
#else
  #define __Pyx_PyType_GetFlags(tp)   (PyType_GetFlags((PyTypeObject *)tp))
  #define __Pyx_PyType_HasFeature(type, feature)  PyType_HasFeature(type, feature)
  #define __Pyx_PyObject_GetIterNextFunc(obj)  PyIter_Next
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_SetItemOnTypeDict(tp, k, v) PyObject_GenericSetAttr((PyObject*)tp, k, v)
#else
  #define __Pyx_SetItemOnTypeDict(tp, k, v) PyDict_SetItem(tp->tp_dict, k, v)
#endif
#if CYTHON_USE_TYPE_SPECS && PY_VERSION_HEX >= 0x03080000
#define __Pyx_PyHeapTypeObject_GC_Del(obj)  {\
    PyTypeObject *type = Py_TYPE((PyObject*)obj);\
    assert(__Pyx_PyType_HasFeature(type, Py_TPFLAGS_HEAPTYPE));\
    PyObject_GC_Del(obj);\
    Py_DECREF(type);\
}
#else
#define __Pyx_PyHeapTypeObject_GC_Del(obj)  PyObject_GC_Del(obj)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define CYTHON_PEP393_ENABLED 1
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GetLength(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_ReadChar(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((void)u, 1114111U)
  #define __Pyx_PyUnicode_KIND(u)         ((void)u, (0))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)u)
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)k, PyUnicode_ReadChar((PyObject*)(d), i))
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GetLength(u))
#elif PY_VERSION_HEX > 0x03030000 && defined(PyUnicode_KIND)
  #define CYTHON_PEP393_ENABLED 1
  #if PY_VERSION_HEX >= 0x030C0000
    #define __Pyx_PyUnicode_READY(op)       (0)
  #else
    #define __Pyx_PyUnicode_READY(op)       (likely(PyUnicode_IS_READY(op)) ?\
                                                0 : _PyUnicode_Ready((PyObject *)(op)))
  #endif
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_LENGTH(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_READ_CHAR(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   PyUnicode_MAX_CHAR_VALUE(u)
  #define __Pyx_PyUnicode_KIND(u)         ((int)PyUnicode_KIND(u))
  #define __Pyx_PyUnicode_DATA(u)         PyUnicode_DATA(u)
  #define __Pyx_PyUnicode_READ(k, d, i)   PyUnicode_READ(k, d, i)
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  PyUnicode_WRITE(k, d, i, (Py_UCS4) ch)
  #if PY_VERSION_HEX >= 0x030C0000
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_LENGTH(u))
  #else
    #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03090000
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : ((PyCompactUnicodeObject *)(u))->wstr_length))
    #else
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : PyUnicode_GET_SIZE(u)))
    #endif
  #endif
#else
  #define CYTHON_PEP393_ENABLED 0
  #define PyUnicode_1BYTE_KIND  1
  #define PyUnicode_2BYTE_KIND  2
  #define PyUnicode_4BYTE_KIND  4
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_SIZE(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) ((Py_UCS4)(PyUnicode_AS_UNICODE(u)[i]))
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((sizeof(Py_UNICODE) == 2) ? 65535U : 1114111U)
  #define __Pyx_PyUnicode_KIND(u)         ((int)sizeof(Py_UNICODE))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)PyUnicode_AS_UNICODE(u))
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)(k), (Py_UCS4)(((Py_UNICODE*)d)[i]))
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  (((void)(k)), ((Py_UNICODE*)d)[i] = (Py_UNICODE) ch)
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_SIZE(u))
#endif
#if CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyUnicode_Concat(a, b)      PyNumber_Add(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  PyNumber_Add(a, b)
#else
  #define __Pyx_PyUnicode_Concat(a, b)      PyUnicode_Concat(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  ((unlikely((a) == Py_None) || unlikely((b) == Py_None)) ?\
      PyNumber_Add(a, b) : __Pyx_PyUnicode_Concat(a, b))
#endif
#if CYTHON_COMPILING_IN_PYPY
  #if !defined(PyUnicode_DecodeUnicodeEscape)
    #define PyUnicode_DecodeUnicodeEscape(s, size, errors)  PyUnicode_Decode(s, size, "unicode_escape", errors)
  #endif
  #if !defined(PyUnicode_Contains) || (PY_MAJOR_VERSION == 2 && PYPY_VERSION_NUM < 0x07030500)
    #undef PyUnicode_Contains
    #define PyUnicode_Contains(u, s)  PySequence_Contains(u, s)
  #endif
  #if !defined(PyByteArray_Check)
    #define PyByteArray_Check(obj)  PyObject_TypeCheck(obj, &PyByteArray_Type)
  #endif
  #if !defined(PyObject_Format)
    #define PyObject_Format(obj, fmt)  PyObject_CallMethod(obj, "__format__", "O", fmt)
  #endif
#endif
#define __Pyx_PyString_FormatSafe(a, b)   ((unlikely((a) == Py_None || (PyString_Check(b) && !PyString_CheckExact(b)))) ? PyNumber_Remainder(a, b) : __Pyx_PyString_Format(a, b))
#define __Pyx_PyUnicode_FormatSafe(a, b)  ((unlikely((a) == Py_None || (PyUnicode_Check(b) && !PyUnicode_CheckExact(b)))) ? PyNumber_Remainder(a, b) : PyUnicode_Format(a, b))
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyString_Format(a, b)  PyUnicode_Format(a, b)
#else
  #define __Pyx_PyString_Format(a, b)  PyString_Format(a, b)
#endif
#if PY_MAJOR_VERSION < 3 && !defined(PyObject_ASCII)
  #define PyObject_ASCII(o)            PyObject_Repr(o)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBaseString_Type            PyUnicode_Type
  #define PyStringObject               PyUnicodeObject
  #define PyString_Type                PyUnicode_Type
  #define PyString_Check               PyUnicode_Check
  #define PyString_CheckExact          PyUnicode_CheckExact
#ifndef PyObject_Unicode
  #define PyObject_Unicode             PyObject_Str
#endif
#endif
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyBaseString_Check(obj) PyUnicode_Check(obj)
  #define __Pyx_PyBaseString_CheckExact(obj) PyUnicode_CheckExact(obj)
#else
  #define __Pyx_PyBaseString_Check(obj) (PyString_Check(obj) || PyUnicode_Check(obj))
  #define __Pyx_PyBaseString_CheckExact(obj) (PyString_CheckExact(obj) || PyUnicode_CheckExact(obj))
#endif
#if CYTHON_COMPILING_IN_CPYTHON
  #define __Pyx_PySequence_ListKeepNew(obj)\
    (likely(PyList_CheckExact(obj) && Py_REFCNT(obj) == 1) ? __Pyx_NewRef(obj) : PySequence_List(obj))
#else
  #define __Pyx_PySequence_ListKeepNew(obj)  PySequence_List(obj)
#endif
#ifndef PySet_CheckExact
  #define PySet_CheckExact(obj)        __Pyx_IS_TYPE(obj, &PySet_Type)
#endif
#if PY_VERSION_HEX >= 0x030900A4
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_SET_REFCNT(obj, refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SET_SIZE(obj, size)
#else
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_REFCNT(obj) = (refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SIZE(obj) = (size)
#endif
#if CYTHON_ASSUME_SAFE_MACROS
  #define __Pyx_PySequence_ITEM(o, i) PySequence_ITEM(o, i)
  #define __Pyx_PySequence_SIZE(seq)  Py_SIZE(seq)
  #define __Pyx_PyTuple_SET_ITEM(o, i, v) (PyTuple_SET_ITEM(o, i, v), (0))
  #define __Pyx_PyList_SET_ITEM(o, i, v) (PyList_SET_ITEM(o, i, v), (0))
  #define __Pyx_PyTuple_GET_SIZE(o) PyTuple_GET_SIZE(o)
  #define __Pyx_PyList_GET_SIZE(o) PyList_GET_SIZE(o)
  #define __Pyx_PySet_GET_SIZE(o) PySet_GET_SIZE(o)
  #define __Pyx_PyBytes_GET_SIZE(o) PyBytes_GET_SIZE(o)
  #define __Pyx_PyByteArray_GET_SIZE(o) PyByteArray_GET_SIZE(o)
#else
  #define __Pyx_PySequence_ITEM(o, i) PySequence_GetItem(o, i)
  #define __Pyx_PySequence_SIZE(seq)  PySequence_Size(seq)
  #define __Pyx_PyTuple_SET_ITEM(o, i, v) PyTuple_SetItem(o, i, v)
  #define __Pyx_PyList_SET_ITEM(o, i, v) PyList_SetItem(o, i, v)
  #define __Pyx_PyTuple_GET_SIZE(o) PyTuple_Size(o)
  #define __Pyx_PyList_GET_SIZE(o) PyList_Size(o)
  #define __Pyx_PySet_GET_SIZE(o) PySet_Size(o)
  #define __Pyx_PyBytes_GET_SIZE(o) PyBytes_Size(o)
  #define __Pyx_PyByteArray_GET_SIZE(o) PyByteArray_Size(o)
#endif
#if __PYX_LIMITED_VERSION_HEX >= 0x030d00A1
  #define __Pyx_PyImport_AddModuleRef(name) PyImport_AddModuleRef(name)
#else
  static CYTHON_INLINE PyObject *__Pyx_PyImport_AddModuleRef(const char *name) {
      PyObject *module = PyImport_AddModule(name);
      Py_XINCREF(module);
      return module;
  }
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyIntObject                  PyLongObject
  #define PyInt_Type                   PyLong_Type
  #define PyInt_Check(op)              PyLong_Check(op)
  #define PyInt_CheckExact(op)         PyLong_CheckExact(op)
  #define __Pyx_Py3Int_Check(op)       PyLong_Check(op)
  #define __Pyx_Py3Int_CheckExact(op)  PyLong_CheckExact(op)
  #define PyInt_FromString             PyLong_FromString
  #define PyInt_FromUnicode            PyLong_FromUnicode
  #define PyInt_FromLong               PyLong_FromLong
  #define PyInt_FromSize_t             PyLong_FromSize_t
  #define PyInt_FromSsize_t            PyLong_FromSsize_t
  #define PyInt_AsLong                 PyLong_AsLong
  #define PyInt_AS_LONG                PyLong_AS_LONG
  #define PyInt_AsSsize_t              PyLong_AsSsize_t
  #define PyInt_AsUnsignedLongMask     PyLong_AsUnsignedLongMask
  #define PyInt_AsUnsignedLongLongMask PyLong_AsUnsignedLongLongMask
  #define PyNumber_Int                 PyNumber_Long
#else
  #define __Pyx_Py3Int_Check(op)       (PyLong_Check(op) || PyInt_Check(op))
  #define __Pyx_Py3Int_CheckExact(op)  (PyLong_CheckExact(op) || PyInt_CheckExact(op))
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBoolObject                 PyLongObject
#endif
#if PY_MAJOR_VERSION >= 3 && CYTHON_COMPILING_IN_PYPY
  #ifndef PyUnicode_InternFromString
    #define PyUnicode_InternFromString(s) PyUnicode_FromString(s)
  #endif
#endif
#if PY_VERSION_HEX < 0x030200A4
  typedef long Py_hash_t;
  #define __Pyx_PyInt_FromHash_t PyInt_FromLong
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsHash_t
#else
  #define __Pyx_PyInt_FromHash_t PyInt_FromSsize_t
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsSsize_t
#endif
#if CYTHON_USE_ASYNC_SLOTS
  #if PY_VERSION_HEX >= 0x030500B1
    #define __Pyx_PyAsyncMethodsStruct PyAsyncMethods
    #define __Pyx_PyType_AsAsync(obj) (Py_TYPE(obj)->tp_as_async)
  #else
    #define __Pyx_PyType_AsAsync(obj) ((__Pyx_PyAsyncMethodsStruct*) (Py_TYPE(obj)->tp_reserved))
  #endif
#else
  #define __Pyx_PyType_AsAsync(obj) NULL
#endif
#ifndef __Pyx_PyAsyncMethodsStruct
    typedef struct {
        unaryfunc am_await;
        unaryfunc am_aiter;
        unaryfunc am_anext;
    } __Pyx_PyAsyncMethodsStruct;
#endif

#if defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS)
  #if !defined(_USE_MATH_DEFINES)
    #define _USE_MATH_DEFINES
  #endif
#endif
#include <math.h>
#ifdef NAN
#define __PYX_NAN() ((float) NAN)
#else
static CYTHON_INLINE float __PYX_NAN() {
  float value;
  memset(&value, 0xFF, sizeof(value));
  return value;
}
#endif
#if defined(__CYGWIN__) && defined(_LDBL_EQ_DBL)
#define __Pyx_truncl trunc
#else
#define __Pyx_truncl truncl
#endif

#define __PYX_MARK_ERR_POS(f_index, lineno) \
    { __pyx_filename = __pyx_f[f_index]; (void)__pyx_filename; __pyx_lineno = lineno; (void)__pyx_lineno; __pyx_clineno = __LINE__;  (void)__pyx_clineno; }
#define __PYX_ERR(f_index, lineno, Ln_error) \
    { __PYX_MARK_ERR_POS(f_index, lineno) goto Ln_error; }

#ifdef CYTHON_EXTERN_C
    #undef __PYX_EXTERN_C
    #define __PYX_EXTERN_C CYTHON_EXTERN_C
#elif defined(__PYX_EXTERN_C)
    #ifdef _MSC_VER
    #pragma message ("Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.")
    #else
    #warning Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.
    #endif
#else
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#define __PYX_HAVE__zorya
#define __PYX_HAVE_API__zorya
/* Early includes */
#ifdef _OPENMP
#include <omp.h>
#endif /* _OPENMP */

#if defined(PYREX_WITHOUT_ASSERTIONS) && !defined(CYTHON_WITHOUT_ASSERTIONS)
#define CYTHON_WITHOUT_ASSERTIONS
#endif

typedef struct {PyObject **p; const char *s; const Py_ssize_t n; const char* encoding;
                const char is_unicode; const char is_str; const char intern; } __Pyx_StringTabEntry;

#define __PYX_DEFAULT_STRING_ENCODING_IS_ASCII 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_UTF8 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT (PY_MAJOR_VERSION >= 3 && __PYX_DEFAULT_STRING_ENCODING_IS_UTF8)
#define __PYX_DEFAULT_STRING_ENCODING ""
#define __Pyx_PyObject_FromString __Pyx_PyBytes_FromString
#define __Pyx_PyObject_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#define __Pyx_uchar_cast(c) ((unsigned char)c)
#define __Pyx_long_cast(x) ((long)x)
#define __Pyx_fits_Py_ssize_t(v, type, is_signed)  (\
    (sizeof(type) < sizeof(Py_ssize_t))  ||\
    (sizeof(type) > sizeof(Py_ssize_t) &&\
          likely(v < (type)PY_SSIZE_T_MAX ||\
                 v == (type)PY_SSIZE_T_MAX)  &&\
          (!is_signed || likely(v > (type)PY_SSIZE_T_MIN ||\
                                v == (type)PY_SSIZE_T_MIN)))  ||\
    (sizeof(type) == sizeof(Py_ssize_t) &&\
          (is_signed || likely(v < (type)PY_SSIZE_T_MAX ||\
                               v == (type)PY_SSIZE_T_MAX)))  )
static CYTHON_INLINE int __Pyx_is_valid_index(Py_ssize_t i, Py_ssize_t limit) {
    return (size_t) i < (size_t) limit;
}
#if defined (__cplusplus) && __cplusplus >= 201103L
    #include <cstdlib>
    #define __Pyx_sst_abs(value) std::abs(value)
#elif SIZEOF_INT >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) abs(value)
#elif SIZEOF_LONG >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) labs(value)
#elif defined (_MSC_VER)
    #define __Pyx_sst_abs(value) ((Py_ssize_t)_abs64(value))
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define __Pyx_sst_abs(value) llabs(value)
#elif defined (__GNUC__)
    #define __Pyx_sst_abs(value) __builtin_llabs(value)
#else
    #define __Pyx_sst_abs(value) ((value<0) ? -value : value)
#endif
static CYTHON_INLINE Py_ssize_t __Pyx_ssize_strlen(const char *s);
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject*);
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
static CYTHON_INLINE PyObject* __Pyx_PyByteArray_FromString(const char*);
#define __Pyx_PyByteArray_FromStringAndSize(s, l) PyByteArray_FromStringAndSize((const char*)s, l)
#define __Pyx_PyBytes_FromString        PyBytes_FromString
#define __Pyx_PyBytes_FromStringAndSize PyBytes_FromStringAndSize
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char*);
#if PY_MAJOR_VERSION < 3
    #define __Pyx_PyStr_FromString        __Pyx_PyBytes_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#else
    #define __Pyx_PyStr_FromString        __Pyx_PyUnicode_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyUnicode_FromStringAndSize
#endif
#define __Pyx_PyBytes_AsWritableString(s)     ((char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableSString(s)    ((signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableUString(s)    ((unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsString(s)     ((const char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsSString(s)    ((const signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsUString(s)    ((const unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyObject_AsWritableString(s)    ((char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableSString(s)    ((signed char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableUString(s)    ((unsigned char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsSString(s)    ((const signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsUString(s)    ((const unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_FromCString(s)  __Pyx_PyObject_FromString((const char*)s)
#define __Pyx_PyBytes_FromCString(s)   __Pyx_PyBytes_FromString((const char*)s)
#define __Pyx_PyByteArray_FromCString(s)   __Pyx_PyByteArray_FromString((const char*)s)
#define __Pyx_PyStr_FromCString(s)     __Pyx_PyStr_FromString((const char*)s)
#define __Pyx_PyUnicode_FromCString(s) __Pyx_PyUnicode_FromString((const char*)s)
#define __Pyx_PyUnicode_FromOrdinal(o)       PyUnicode_FromOrdinal((int)o)
#define __Pyx_PyUnicode_AsUnicode            PyUnicode_AsUnicode
#define __Pyx_NewRef(obj) (Py_INCREF(obj), obj)
#define __Pyx_Owned_Py_None(b) __Pyx_NewRef(Py_None)
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b);
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject*);
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x);
#define __Pyx_PySequence_Tuple(obj)\
    (likely(PyTuple_CheckExact(obj)) ? __Pyx_NewRef(obj) : PySequence_Tuple(obj))
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t);
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject*);
#if CYTHON_ASSUME_SAFE_MACROS
#define __pyx_PyFloat_AsDouble(x) (PyFloat_CheckExact(x) ? PyFloat_AS_DOUBLE(x) : PyFloat_AsDouble(x))
#else
#define __pyx_PyFloat_AsDouble(x) PyFloat_AsDouble(x)
#endif
#define __pyx_PyFloat_AsFloat(x) ((float) __pyx_PyFloat_AsDouble(x))
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyNumber_Int(x) (PyLong_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Long(x))
#else
#define __Pyx_PyNumber_Int(x) (PyInt_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Int(x))
#endif
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_VERSION_HEX >= 0x030C00A7
  #ifndef _PyLong_SIGN_MASK
    #define _PyLong_SIGN_MASK 3
  #endif
  #ifndef _PyLong_NON_SIZE_BITS
    #define _PyLong_NON_SIZE_BITS 3
  #endif
  #define __Pyx_PyLong_Sign(x)  (((PyLongObject*)x)->long_value.lv_tag & _PyLong_SIGN_MASK)
  #define __Pyx_PyLong_IsNeg(x)  ((__Pyx_PyLong_Sign(x) & 2) != 0)
  #define __Pyx_PyLong_IsNonNeg(x)  (!__Pyx_PyLong_IsNeg(x))
  #define __Pyx_PyLong_IsZero(x)  (__Pyx_PyLong_Sign(x) & 1)
  #define __Pyx_PyLong_IsPos(x)  (__Pyx_PyLong_Sign(x) == 0)
  #define __Pyx_PyLong_CompactValueUnsigned(x)  (__Pyx_PyLong_Digits(x)[0])
  #define __Pyx_PyLong_DigitCount(x)  ((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> _PyLong_NON_SIZE_BITS))
  #define __Pyx_PyLong_SignedDigitCount(x)\
        ((1 - (Py_ssize_t) __Pyx_PyLong_Sign(x)) * __Pyx_PyLong_DigitCount(x))
  #if defined(PyUnstable_Long_IsCompact) && defined(PyUnstable_Long_CompactValue)
    #define __Pyx_PyLong_IsCompact(x)     PyUnstable_Long_IsCompact((PyLongObject*) x)
    #define __Pyx_PyLong_CompactValue(x)  PyUnstable_Long_CompactValue((PyLongObject*) x)
  #else
    #define __Pyx_PyLong_IsCompact(x)     (((PyLongObject*)x)->long_value.lv_tag < (2 << _PyLong_NON_SIZE_BITS))
    #define __Pyx_PyLong_CompactValue(x)  ((1 - (Py_ssize_t) __Pyx_PyLong_Sign(x)) * (Py_ssize_t) __Pyx_PyLong_Digits(x)[0])
  #endif
  typedef Py_ssize_t  __Pyx_compact_pylong;
  typedef size_t  __Pyx_compact_upylong;
  #else
  #define __Pyx_PyLong_IsNeg(x)  (Py_SIZE(x) < 0)
  #define __Pyx_PyLong_IsNonNeg(x)  (Py_SIZE(x) >= 0)
  #define __Pyx_PyLong_IsZero(x)  (Py_SIZE(x) == 0)
  #define __Pyx_PyLong_IsPos(x)  (Py_SIZE(x) > 0)
  #define __Pyx_PyLong_CompactValueUnsigned(x)  ((Py_SIZE(x) == 0) ? 0 : __Pyx_PyLong_Digits(x)[0])
  #define __Pyx_PyLong_DigitCount(x)  __Pyx_sst_abs(Py_SIZE(x))
  #define __Pyx_PyLong_SignedDigitCount(x)  Py_SIZE(x)
  #define __Pyx_PyLong_IsCompact(x)  (Py_SIZE(x) == 0 || Py_SIZE(x) == 1 || Py_SIZE(x) == -1)
  #define __Pyx_PyLong_CompactValue(x)\
        ((Py_SIZE(x) == 0) ? (sdigit) 0 : ((Py_SIZE(x) < 0) ? -(sdigit)__Pyx_PyLong_Digits(x)[0] : (sdigit)__Pyx_PyLong_Digits(x)[0]))
  typedef sdigit  __Pyx_compact_pylong;
  typedef digit  __Pyx_compact_upylong;
  #endif
  #if PY_VERSION_HEX >= 0x030C00A5
  #define __Pyx_PyLong_Digits(x)  (((PyLongObject*)x)->long_value.ob_digit)
  #else
  #define __Pyx_PyLong_Digits(x)  (((PyLongObject*)x)->ob_digit)
  #endif
#endif
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
#include <string.h>
static int __Pyx_sys_getdefaultencoding_not_ascii;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    PyObject* ascii_chars_u = NULL;
    PyObject* ascii_chars_b = NULL;
    const char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    if (strcmp(default_encoding_c, "ascii") == 0) {
        __Pyx_sys_getdefaultencoding_not_ascii = 0;
    } else {
        char ascii_chars[128];
        int c;
        for (c = 0; c < 128; c++) {
            ascii_chars[c] = (char) c;
        }
        __Pyx_sys_getdefaultencoding_not_ascii = 1;
        ascii_chars_u = PyUnicode_DecodeASCII(ascii_chars, 128, NULL);
        if (!ascii_chars_u) goto bad;
        ascii_chars_b = PyUnicode_AsEncodedString(ascii_chars_u, default_encoding_c, NULL);
        if (!ascii_chars_b || !PyBytes_Check(ascii_chars_b) || memcmp(ascii_chars, PyBytes_AS_STRING(ascii_chars_b), 128) != 0) {
            PyErr_Format(
                PyExc_ValueError,
                "This module compiled with c_string_encoding=ascii, but default encoding '%.200s' is not a superset of ascii.",
                default_encoding_c);
            goto bad;
        }
        Py_DECREF(ascii_chars_u);
        Py_DECREF(ascii_chars_b);
    }
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    Py_XDECREF(ascii_chars_u);
    Py_XDECREF(ascii_chars_b);
    return -1;
}
#endif
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT && PY_MAJOR_VERSION >= 3
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_DecodeUTF8(c_str, size, NULL)
#else
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_Decode(c_str, size, __PYX_DEFAULT_STRING_ENCODING, NULL)
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#include <string.h>
static char* __PYX_DEFAULT_STRING_ENCODING;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) (const char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    __PYX_DEFAULT_STRING_ENCODING = (char*) malloc(strlen(default_encoding_c) + 1);
    if (!__PYX_DEFAULT_STRING_ENCODING) goto bad;
    strcpy(__PYX_DEFAULT_STRING_ENCODING, default_encoding_c);
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    return -1;
}
#endif
#endif


/* Test for GCC > 2.95 */
#if defined(__GNUC__)     && (__GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ > 95)))
  #define likely(x)   __builtin_expect(!!(x), 1)
  #define unlikely(x) __builtin_expect(!!(x), 0)
#else /* !__GNUC__ or GCC < 2.95 */
  #define likely(x)   (x)
  #define unlikely(x) (x)
#endif /* __GNUC__ */
static CYTHON_INLINE void __Pyx_pretend_to_initialize(void* ptr) { (void)ptr; }

#if !CYTHON_USE_MODULE_STATE
static PyObject *__pyx_m = NULL;
#endif
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm = __FILE__;
static const char *__pyx_filename;

/* #### Code section: filename_table ### */

static const char *__pyx_f[] = {
  "zorya.py",
};
/* #### Code section: utility_code_proto_before_types ### */
/* ForceInitThreads.proto */
#ifndef __PYX_FORCE_INIT_THREADS
  #define __PYX_FORCE_INIT_THREADS 0
#endif

/* #### Code section: numeric_typedefs ### */
/* #### Code section: complex_type_declarations ### */
/* #### Code section: type_declarations ### */

/*--- Type declarations ---*/
/* #### Code section: utility_code_proto ### */

/* --- Runtime support code (head) --- */
/* Refnanny.proto */
#ifndef CYTHON_REFNANNY
  #define CYTHON_REFNANNY 0
#endif
#if CYTHON_REFNANNY
  typedef struct {
    void (*INCREF)(void*, PyObject*, Py_ssize_t);
    void (*DECREF)(void*, PyObject*, Py_ssize_t);
    void (*GOTREF)(void*, PyObject*, Py_ssize_t);
    void (*GIVEREF)(void*, PyObject*, Py_ssize_t);
    void* (*SetupContext)(const char*, Py_ssize_t, const char*);
    void (*FinishContext)(void**);
  } __Pyx_RefNannyAPIStruct;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNanny = NULL;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname);
  #define __Pyx_RefNannyDeclarations void *__pyx_refnanny = NULL;
#ifdef WITH_THREAD
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          if (acquire_gil) {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__));\
              PyGILState_Release(__pyx_gilstate_save);\
          } else {\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__));\
          }
  #define __Pyx_RefNannyFinishContextNogil() {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __Pyx_RefNannyFinishContext();\
              PyGILState_Release(__pyx_gilstate_save);\
          }
#else
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__))
  #define __Pyx_RefNannyFinishContextNogil() __Pyx_RefNannyFinishContext()
#endif
  #define __Pyx_RefNannyFinishContextNogil() {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __Pyx_RefNannyFinishContext();\
              PyGILState_Release(__pyx_gilstate_save);\
          }
  #define __Pyx_RefNannyFinishContext()\
          __Pyx_RefNanny->FinishContext(&__pyx_refnanny)
  #define __Pyx_INCREF(r)  __Pyx_RefNanny->INCREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_DECREF(r)  __Pyx_RefNanny->DECREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_GOTREF(r)  __Pyx_RefNanny->GOTREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_GIVEREF(r) __Pyx_RefNanny->GIVEREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_XINCREF(r)  do { if((r) == NULL); else {__Pyx_INCREF(r); }} while(0)
  #define __Pyx_XDECREF(r)  do { if((r) == NULL); else {__Pyx_DECREF(r); }} while(0)
  #define __Pyx_XGOTREF(r)  do { if((r) == NULL); else {__Pyx_GOTREF(r); }} while(0)
  #define __Pyx_XGIVEREF(r) do { if((r) == NULL); else {__Pyx_GIVEREF(r);}} while(0)
#else
  #define __Pyx_RefNannyDeclarations
  #define __Pyx_RefNannySetupContext(name, acquire_gil)
  #define __Pyx_RefNannyFinishContextNogil()
  #define __Pyx_RefNannyFinishContext()
  #define __Pyx_INCREF(r) Py_INCREF(r)
  #define __Pyx_DECREF(r) Py_DECREF(r)
  #define __Pyx_GOTREF(r)
  #define __Pyx_GIVEREF(r)
  #define __Pyx_XINCREF(r) Py_XINCREF(r)
  #define __Pyx_XDECREF(r) Py_XDECREF(r)
  #define __Pyx_XGOTREF(r)
  #define __Pyx_XGIVEREF(r)
#endif
#define __Pyx_Py_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; Py_XDECREF(tmp);\
    } while (0)
#define __Pyx_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_XDECREF(tmp);\
    } while (0)
#define __Pyx_DECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_DECREF(tmp);\
    } while (0)
#define __Pyx_CLEAR(r)    do { PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);} while(0)
#define __Pyx_XCLEAR(r)   do { if((r) != NULL) {PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);}} while(0)

/* PyErrExceptionMatches.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
#endif

/* PyThreadStateGet.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyThreadState_declare  PyThreadState *__pyx_tstate;
#define __Pyx_PyThreadState_assign  __pyx_tstate = __Pyx_PyThreadState_Current;
#if PY_VERSION_HEX >= 0x030C00A6
#define __Pyx_PyErr_Occurred()  (__pyx_tstate->current_exception != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  (__pyx_tstate->current_exception ? (PyObject*) Py_TYPE(__pyx_tstate->current_exception) : (PyObject*) NULL)
#else
#define __Pyx_PyErr_Occurred()  (__pyx_tstate->curexc_type != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  (__pyx_tstate->curexc_type)
#endif
#else
#define __Pyx_PyThreadState_declare
#define __Pyx_PyThreadState_assign
#define __Pyx_PyErr_Occurred()  (PyErr_Occurred() != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  PyErr_Occurred()
#endif

/* PyErrFetchRestore.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_Clear() __Pyx_ErrRestore(NULL, NULL, NULL)
#define __Pyx_ErrRestoreWithState(type, value, tb)  __Pyx_ErrRestoreInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)    __Pyx_ErrFetchInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  __Pyx_ErrRestoreInState(__pyx_tstate, type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)    __Pyx_ErrFetchInState(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A6
#define __Pyx_PyErr_SetNone(exc) (Py_INCREF(exc), __Pyx_ErrRestore((exc), NULL, NULL))
#else
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#endif
#else
#define __Pyx_PyErr_Clear() PyErr_Clear()
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#define __Pyx_ErrRestoreWithState(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestoreInState(tstate, type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchInState(tstate, type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)  PyErr_Fetch(type, value, tb)
#endif

/* PyObjectGetAttrStr.proto */
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GetAttrStr(o,n) PyObject_GetAttr(o,n)
#endif

/* PyObjectGetAttrStrNoError.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name);

/* GetBuiltinName.proto */
static PyObject *__Pyx_GetBuiltinName(PyObject *name);

/* TupleAndListFromArray.proto */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyList_FromArray(PyObject *const *src, Py_ssize_t n);
static CYTHON_INLINE PyObject* __Pyx_PyTuple_FromArray(PyObject *const *src, Py_ssize_t n);
#endif

/* IncludeStringH.proto */
#include <string.h>

/* BytesEquals.proto */
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);

/* UnicodeEquals.proto */
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);

/* fastcall.proto */
#if CYTHON_AVOID_BORROWED_REFS
    #define __Pyx_Arg_VARARGS(args, i) PySequence_GetItem(args, i)
#elif CYTHON_ASSUME_SAFE_MACROS
    #define __Pyx_Arg_VARARGS(args, i) PyTuple_GET_ITEM(args, i)
#else
    #define __Pyx_Arg_VARARGS(args, i) PyTuple_GetItem(args, i)
#endif
#if CYTHON_AVOID_BORROWED_REFS
    #define __Pyx_Arg_NewRef_VARARGS(arg) __Pyx_NewRef(arg)
    #define __Pyx_Arg_XDECREF_VARARGS(arg) Py_XDECREF(arg)
#else
    #define __Pyx_Arg_NewRef_VARARGS(arg) arg
    #define __Pyx_Arg_XDECREF_VARARGS(arg)
#endif
#define __Pyx_NumKwargs_VARARGS(kwds) PyDict_Size(kwds)
#define __Pyx_KwValues_VARARGS(args, nargs) NULL
#define __Pyx_GetKwValue_VARARGS(kw, kwvalues, s) __Pyx_PyDict_GetItemStrWithError(kw, s)
#define __Pyx_KwargsAsDict_VARARGS(kw, kwvalues) PyDict_Copy(kw)
#if CYTHON_METH_FASTCALL
    #define __Pyx_Arg_FASTCALL(args, i) args[i]
    #define __Pyx_NumKwargs_FASTCALL(kwds) PyTuple_GET_SIZE(kwds)
    #define __Pyx_KwValues_FASTCALL(args, nargs) ((args) + (nargs))
    static CYTHON_INLINE PyObject * __Pyx_GetKwValue_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues, PyObject *s);
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
    CYTHON_UNUSED static PyObject *__Pyx_KwargsAsDict_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues);
  #else
    #define __Pyx_KwargsAsDict_FASTCALL(kw, kwvalues) _PyStack_AsDict(kwvalues, kw)
  #endif
    #define __Pyx_Arg_NewRef_FASTCALL(arg) arg  /* no-op, __Pyx_Arg_FASTCALL is direct and this needs
                                                   to have the same reference counting */
    #define __Pyx_Arg_XDECREF_FASTCALL(arg)
#else
    #define __Pyx_Arg_FASTCALL __Pyx_Arg_VARARGS
    #define __Pyx_NumKwargs_FASTCALL __Pyx_NumKwargs_VARARGS
    #define __Pyx_KwValues_FASTCALL __Pyx_KwValues_VARARGS
    #define __Pyx_GetKwValue_FASTCALL __Pyx_GetKwValue_VARARGS
    #define __Pyx_KwargsAsDict_FASTCALL __Pyx_KwargsAsDict_VARARGS
    #define __Pyx_Arg_NewRef_FASTCALL(arg) __Pyx_Arg_NewRef_VARARGS(arg)
    #define __Pyx_Arg_XDECREF_FASTCALL(arg) __Pyx_Arg_XDECREF_VARARGS(arg)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
#define __Pyx_ArgsSlice_VARARGS(args, start, stop) __Pyx_PyTuple_FromArray(&__Pyx_Arg_VARARGS(args, start), stop - start)
#define __Pyx_ArgsSlice_FASTCALL(args, start, stop) __Pyx_PyTuple_FromArray(&__Pyx_Arg_FASTCALL(args, start), stop - start)
#else
#define __Pyx_ArgsSlice_VARARGS(args, start, stop) PyTuple_GetSlice(args, start, stop)
#define __Pyx_ArgsSlice_FASTCALL(args, start, stop) PyTuple_GetSlice(args, start, stop)
#endif

/* PyDictVersioning.proto */
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
#define __PYX_DICT_VERSION_INIT  ((PY_UINT64_T) -1)
#define __PYX_GET_DICT_VERSION(dict)  (((PyDictObject*)(dict))->ma_version_tag)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)\
    (version_var) = __PYX_GET_DICT_VERSION(dict);\
    (cache_var) = (value);
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP) {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    if (likely(__PYX_GET_DICT_VERSION(DICT) == __pyx_dict_version)) {\
        (VAR) = __pyx_dict_cached_value;\
    } else {\
        (VAR) = __pyx_dict_cached_value = (LOOKUP);\
        __pyx_dict_version = __PYX_GET_DICT_VERSION(DICT);\
    }\
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj);
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj);
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version);
#else
#define __PYX_GET_DICT_VERSION(dict)  (0)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP)  (VAR) = (LOOKUP);
#endif

/* GetModuleGlobalName.proto */
#if CYTHON_USE_DICT_VERSIONS
#define __Pyx_GetModuleGlobalName(var, name)  do {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    (var) = (likely(__pyx_dict_version == __PYX_GET_DICT_VERSION(__pyx_d))) ?\
        (likely(__pyx_dict_cached_value) ? __Pyx_NewRef(__pyx_dict_cached_value) : __Pyx_GetBuiltinName(name)) :\
        __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
} while(0)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  do {\
    PY_UINT64_T __pyx_dict_version;\
    PyObject *__pyx_dict_cached_value;\
    (var) = __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
} while(0)
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value);
#else
#define __Pyx_GetModuleGlobalName(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name);
#endif

/* PyObjectCall.proto */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
#endif

/* PyFunctionFastCall.proto */
#if CYTHON_FAST_PYCALL
#if !CYTHON_VECTORCALL
#define __Pyx_PyFunction_FastCall(func, args, nargs)\
    __Pyx_PyFunction_FastCallDict((func), (args), (nargs), NULL)
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs);
#endif
#define __Pyx_BUILD_ASSERT_EXPR(cond)\
    (sizeof(char [1 - 2*!(cond)]) - 1)
#ifndef Py_MEMBER_SIZE
#define Py_MEMBER_SIZE(type, member) sizeof(((type *)0)->member)
#endif
#if !CYTHON_VECTORCALL
#if PY_VERSION_HEX >= 0x03080000
  #include "frameobject.h"
#if PY_VERSION_HEX >= 0x030b00a6 && !CYTHON_COMPILING_IN_LIMITED_API && !defined(PYPY_VERSION)
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
  #define __Pxy_PyFrame_Initialize_Offsets()
  #define __Pyx_PyFrame_GetLocalsplus(frame)  ((frame)->f_localsplus)
#else
  static size_t __pyx_pyframe_localsplus_offset = 0;
  #include "frameobject.h"
  #define __Pxy_PyFrame_Initialize_Offsets()\
    ((void)__Pyx_BUILD_ASSERT_EXPR(sizeof(PyFrameObject) == offsetof(PyFrameObject, f_localsplus) + Py_MEMBER_SIZE(PyFrameObject, f_localsplus)),\
     (void)(__pyx_pyframe_localsplus_offset = ((size_t)PyFrame_Type.tp_basicsize) - Py_MEMBER_SIZE(PyFrameObject, f_localsplus)))
  #define __Pyx_PyFrame_GetLocalsplus(frame)\
    (assert(__pyx_pyframe_localsplus_offset), (PyObject **)(((char *)(frame)) + __pyx_pyframe_localsplus_offset))
#endif
#endif
#endif

/* PyObjectCallMethO.proto */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif

/* PyObjectFastCall.proto */
#define __Pyx_PyObject_FastCall(func, args, nargs)  __Pyx_PyObject_FastCallDict(func, args, (size_t)(nargs), NULL)
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs);

/* DictGetItem.proto */
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key);
#define __Pyx_PyObject_Dict_GetItem(obj, name)\
    (likely(PyDict_CheckExact(obj)) ?\
     __Pyx_PyDict_GetItem(obj, name) : PyObject_GetItem(obj, name))
#else
#define __Pyx_PyDict_GetItem(d, key) PyObject_GetItem(d, key)
#define __Pyx_PyObject_Dict_GetItem(obj, name)  PyObject_GetItem(obj, name)
#endif

/* PyObjectCallOneArg.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

/* GetItemInt.proto */
#define __Pyx_GetItemInt(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Fast(o, (Py_ssize_t)i, is_list, wraparound, boundscheck) :\
    (is_list ? (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL) :\
               __Pyx_GetItemInt_Generic(o, to_py_func(i))))
#define __Pyx_GetItemInt_List(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_List_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
#define __Pyx_GetItemInt_Tuple(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Tuple_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "tuple index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              int wraparound, int boundscheck);
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j);
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i,
                                                     int is_list, int wraparound, int boundscheck);

/* ObjectGetItem.proto */
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject *key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif

/* PyObjectCallNoArg.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);

/* ListAppend.proto */
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_PyList_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len) & likely(len > (L->allocated >> 1))) {
        Py_INCREF(x);
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
        L->ob_item[len] = x;
        #else
        PyList_SET_ITEM(list, len, x);
        #endif
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_PyList_Append(L,x) PyList_Append(L,x)
#endif

/* RaiseDoubleKeywords.proto */
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);

/* ParseKeywords.proto */
static int __Pyx_ParseOptionalKeywords(PyObject *kwds, PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2, PyObject *values[], Py_ssize_t num_pos_args,
    const char* function_name);

/* RaiseArgTupleInvalid.proto */
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);

/* PyObjectLookupSpecial.proto */
#if CYTHON_USE_PYTYPE_LOOKUP && CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_LookupSpecialNoError(obj, attr_name)  __Pyx__PyObject_LookupSpecial(obj, attr_name, 0)
#define __Pyx_PyObject_LookupSpecial(obj, attr_name)  __Pyx__PyObject_LookupSpecial(obj, attr_name, 1)
static CYTHON_INLINE PyObject* __Pyx__PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name, int with_error);
#else
#define __Pyx_PyObject_LookupSpecialNoError(o,n) __Pyx_PyObject_GetAttrStrNoError(o,n)
#define __Pyx_PyObject_LookupSpecial(o,n) __Pyx_PyObject_GetAttrStr(o,n)
#endif

/* GetTopmostException.proto */
#if CYTHON_USE_EXC_INFO_STACK && CYTHON_FAST_THREAD_STATE
static _PyErr_StackItem * __Pyx_PyErr_GetTopmostException(PyThreadState *tstate);
#endif

/* SaveResetException.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSave(type, value, tb)  __Pyx__ExceptionSave(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#define __Pyx_ExceptionReset(type, value, tb)  __Pyx__ExceptionReset(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
#else
#define __Pyx_ExceptionSave(type, value, tb)   PyErr_GetExcInfo(type, value, tb)
#define __Pyx_ExceptionReset(type, value, tb)  PyErr_SetExcInfo(type, value, tb)
#endif

/* GetException.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif

/* ListCompAppend.proto */
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_ListComp_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len)) {
        Py_INCREF(x);
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
        L->ob_item[len] = x;
        #else
        PyList_SET_ITEM(list, len, x);
        #endif
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_ListComp_Append(L,x) PyList_Append(L,x)
#endif

/* PyIntBinop.proto */
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif

/* SliceObject.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
        PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
        int has_cstart, int has_cstop, int wraparound);

/* PySequenceContains.proto */
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}

/* PyObjectSetAttrStr.proto */
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif

/* PyIntCompare.proto */
static CYTHON_INLINE PyObject* __Pyx_PyInt_EqObjC(PyObject *op1, PyObject *op2, long intval, long inplace);

/* PyIntBinop.proto */
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_MultiplyCObj(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_MultiplyCObj(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceMultiply(op1, op2) : PyNumber_Multiply(op1, op2))
#endif

/* Import.proto */
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

/* ImportFrom.proto */
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);

/* ImportDottedModule.proto */
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple);
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple);
#endif

/* IncludeStructmemberH.proto */
#include <structmember.h>

/* FixUpExtensionType.proto */
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type);
#endif

/* FetchSharedCythonModule.proto */
static PyObject *__Pyx_FetchSharedCythonABIModule(void);

/* FetchCommonType.proto */
#if !CYTHON_USE_TYPE_SPECS
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);
#else
static PyTypeObject* __Pyx_FetchCommonTypeFromSpec(PyObject *module, PyType_Spec *spec, PyObject *bases);
#endif

/* PyMethodNew.proto */
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *__Pyx_PyMethod_New(PyObject *func, PyObject *self, PyObject *typ) {
    PyObject *typesModule=NULL, *methodType=NULL, *result=NULL;
    CYTHON_UNUSED_VAR(typ);
    if (!self)
        return __Pyx_NewRef(func);
    typesModule = PyImport_ImportModule("types");
    if (!typesModule) return NULL;
    methodType = PyObject_GetAttrString(typesModule, "MethodType");
    Py_DECREF(typesModule);
    if (!methodType) return NULL;
    result = PyObject_CallFunctionObjArgs(methodType, func, self, NULL);
    Py_DECREF(methodType);
    return result;
}
#elif PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_PyMethod_New(PyObject *func, PyObject *self, PyObject *typ) {
    CYTHON_UNUSED_VAR(typ);
    if (!self)
        return __Pyx_NewRef(func);
    return PyMethod_New(func, self);
}
#else
    #define __Pyx_PyMethod_New PyMethod_New
#endif

/* PyVectorcallFastCallDict.proto */
#if CYTHON_METH_FASTCALL
static CYTHON_INLINE PyObject *__Pyx_PyVectorcall_FastCallDict(PyObject *func, __pyx_vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw);
#endif

/* CythonFunctionShared.proto */
#define __Pyx_CyFunction_USED
#define __Pyx_CYFUNCTION_STATICMETHOD  0x01
#define __Pyx_CYFUNCTION_CLASSMETHOD   0x02
#define __Pyx_CYFUNCTION_CCLASS        0x04
#define __Pyx_CYFUNCTION_COROUTINE     0x08
#define __Pyx_CyFunction_GetClosure(f)\
    (((__pyx_CyFunctionObject *) (f))->func_closure)
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_CyFunction_GetClassObj(f)\
      (((__pyx_CyFunctionObject *) (f))->func_classobj)
#else
  #define __Pyx_CyFunction_GetClassObj(f)\
      ((PyObject*) ((PyCMethodObject *) (f))->mm_class)
#endif
#define __Pyx_CyFunction_SetClassObj(f, classobj)\
    __Pyx__CyFunction_SetClassObj((__pyx_CyFunctionObject *) (f), (classobj))
#define __Pyx_CyFunction_Defaults(type, f)\
    ((type *)(((__pyx_CyFunctionObject *) (f))->defaults))
#define __Pyx_CyFunction_SetDefaultsGetter(f, g)\
    ((__pyx_CyFunctionObject *) (f))->defaults_getter = (g)
typedef struct {
#if CYTHON_COMPILING_IN_LIMITED_API
    PyObject_HEAD
    PyObject *func;
#elif PY_VERSION_HEX < 0x030900B1
    PyCFunctionObject func;
#else
    PyCMethodObject func;
#endif
#if CYTHON_BACKPORT_VECTORCALL
    __pyx_vectorcallfunc func_vectorcall;
#endif
#if PY_VERSION_HEX < 0x030500A0 || CYTHON_COMPILING_IN_LIMITED_API
    PyObject *func_weakreflist;
#endif
    PyObject *func_dict;
    PyObject *func_name;
    PyObject *func_qualname;
    PyObject *func_doc;
    PyObject *func_globals;
    PyObject *func_code;
    PyObject *func_closure;
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    PyObject *func_classobj;
#endif
    void *defaults;
    int defaults_pyobjects;
    size_t defaults_size;
    int flags;
    PyObject *defaults_tuple;
    PyObject *defaults_kwdict;
    PyObject *(*defaults_getter)(PyObject *);
    PyObject *func_annotations;
    PyObject *func_is_coroutine;
} __pyx_CyFunctionObject;
#undef __Pyx_CyOrPyCFunction_Check
#define __Pyx_CyFunction_Check(obj)  __Pyx_TypeCheck(obj, __pyx_CyFunctionType)
#define __Pyx_CyOrPyCFunction_Check(obj)  __Pyx_TypeCheck2(obj, __pyx_CyFunctionType, &PyCFunction_Type)
#define __Pyx_CyFunction_CheckExact(obj)  __Pyx_IS_TYPE(obj, __pyx_CyFunctionType)
static CYTHON_INLINE int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc);
#undef __Pyx_IsSameCFunction
#define __Pyx_IsSameCFunction(func, cfunc)   __Pyx__IsSameCyOrCFunction(func, cfunc)
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);
static CYTHON_INLINE void __Pyx__CyFunction_SetClassObj(__pyx_CyFunctionObject* f, PyObject* classobj);
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *m,
                                                         size_t size,
                                                         int pyobjects);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *m,
                                                            PyObject *tuple);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *m,
                                                             PyObject *dict);
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *m,
                                                              PyObject *dict);
static int __pyx_CyFunction_init(PyObject *module);
#if CYTHON_METH_FASTCALL
static PyObject * __Pyx_CyFunction_Vectorcall_NOARGS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_O(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames);
#if CYTHON_BACKPORT_VECTORCALL
#define __Pyx_CyFunction_func_vectorcall(f) (((__pyx_CyFunctionObject*)f)->func_vectorcall)
#else
#define __Pyx_CyFunction_func_vectorcall(f) (((PyCFunctionObject*)f)->vectorcall)
#endif
#endif

/* CythonFunction.proto */
static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml,
                                      int flags, PyObject* qualname,
                                      PyObject *closure,
                                      PyObject *module, PyObject *globals,
                                      PyObject* code);

/* SetNameInClass.proto */
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && PY_VERSION_HEX < 0x030d0000
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? _PyDict_SetItem_KnownHash(ns, name, value, ((PyASCIIObject *) name)->hash) : PyObject_SetItem(ns, name, value))
#elif CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_SetNameInClass(ns, name, value)\
    (likely(PyDict_CheckExact(ns)) ? PyDict_SetItem(ns, name, value) : PyObject_SetItem(ns, name, value))
#else
#define __Pyx_SetNameInClass(ns, name, value)  PyObject_SetItem(ns, name, value)
#endif

/* CalculateMetaclass.proto */
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases);

/* PyObjectCall2Args.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

/* Py3ClassCreate.proto */
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name, PyObject *qualname,
                                           PyObject *mkw, PyObject *modname, PyObject *doc);
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases, PyObject *dict,
                                      PyObject *mkw, int calculate_metaclass, int allow_py2_metaclass);

/* Py3UpdateBases.proto */
static PyObject* __Pyx_PEP560_update_bases(PyObject *bases);

/* CyFunctionClassCell.proto */
static int __Pyx_CyFunction_InitClassCell(PyObject *cyfunctions, PyObject *classobj);

/* CLineInTraceback.proto */
#ifdef CYTHON_CLINE_IN_TRACEBACK
#define __Pyx_CLineForTraceback(tstate, c_line)  (((CYTHON_CLINE_IN_TRACEBACK)) ? c_line : 0)
#else
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line);
#endif

/* CodeObjectCache.proto */
#if !CYTHON_COMPILING_IN_LIMITED_API
typedef struct {
    PyCodeObject* code_object;
    int code_line;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
    int count;
    int max_count;
    __Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = {0,0,NULL};
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject *__pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);
#endif

/* AddTraceback.proto */
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename);

/* GCCDiagnostics.proto */
#if !defined(__INTEL_COMPILER) && defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

/* CIntToPy.proto */
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

/* FormatTypeName.proto */
#if CYTHON_COMPILING_IN_LIMITED_API
typedef PyObject *__Pyx_TypeName;
#define __Pyx_FMT_TYPENAME "%U"
static __Pyx_TypeName __Pyx_PyType_GetName(PyTypeObject* tp);
#define __Pyx_DECREF_TypeName(obj) Py_XDECREF(obj)
#else
typedef const char *__Pyx_TypeName;
#define __Pyx_FMT_TYPENAME "%.200s"
#define __Pyx_PyType_GetName(tp) ((tp)->tp_name)
#define __Pyx_DECREF_TypeName(obj)
#endif

/* CIntFromPy.proto */
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

/* CIntFromPy.proto */
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

/* FastTypeChecks.proto */
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_TypeCheck(obj, type) __Pyx_IsSubtype(Py_TYPE(obj), (PyTypeObject *)type)
#define __Pyx_TypeCheck2(obj, type1, type2) __Pyx_IsAnySubtype2(Py_TYPE(obj), (PyTypeObject *)type1, (PyTypeObject *)type2)
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject *type);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *type1, PyObject *type2);
#else
#define __Pyx_TypeCheck(obj, type) PyObject_TypeCheck(obj, (PyTypeObject *)type)
#define __Pyx_TypeCheck2(obj, type1, type2) (PyObject_TypeCheck(obj, (PyTypeObject *)type1) || PyObject_TypeCheck(obj, (PyTypeObject *)type2))
#define __Pyx_PyErr_GivenExceptionMatches(err, type) PyErr_GivenExceptionMatches(err, type)
#define __Pyx_PyErr_GivenExceptionMatches2(err, type1, type2) (PyErr_GivenExceptionMatches(err, type1) || PyErr_GivenExceptionMatches(err, type2))
#endif
#define __Pyx_PyErr_ExceptionMatches2(err1, err2)  __Pyx_PyErr_GivenExceptionMatches2(__Pyx_PyErr_CurrentExceptionType(), err1, err2)
#define __Pyx_PyException_Check(obj) __Pyx_TypeCheck(obj, PyExc_Exception)

/* CheckBinaryVersion.proto */
static unsigned long __Pyx_get_runtime_version(void);
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer);

/* InitStrings.proto */
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);

/* #### Code section: module_declarations ### */

/* Module declarations from "zorya" */
/* #### Code section: typeinfo ### */
/* #### Code section: before_global_var ### */
#define __Pyx_MODULE_NAME "zorya"
extern int __pyx_module_is_main_zorya;
int __pyx_module_is_main_zorya = 0;

/* Implementation of "zorya" */
/* #### Code section: global_var ### */
static PyObject *__pyx_builtin_print;
static PyObject *__pyx_builtin_range;
static PyObject *__pyx_builtin_open;
static PyObject *__pyx_builtin_enumerate;
static PyObject *__pyx_builtin_super;
/* #### Code section: string_decls ### */
static const char __pyx_k_c[] = "-c";
static const char __pyx_k_f[] = "-f";
static const char __pyx_k_i[] = "i";
static const char __pyx_k_t[] = "-t";
static const char __pyx_k_w[] = "w";
static const char __pyx_k_np[] = "np";
static const char __pyx_k_pd[] = "pd";
static const char __pyx_k_pm[] = "pm";
static const char __pyx_k_rb[] = "rb";
static const char __pyx_k_sw[] = "sw";
static const char __pyx_k_v1[] = "v1";
static const char __pyx_k_v2[] = "v2";
static const char __pyx_k__10[] = "\n";
static const char __pyx_k__13[] = "";
static const char __pyx_k__15[] = " ";
static const char __pyx_k__16[] = ".";
static const char __pyx_k__17[] = "*";
static const char __pyx_k__51[] = "?";
static const char __pyx_k_doc[] = "__doc__";
static const char __pyx_k_get[] = "get";
static const char __pyx_k_loc[] = "loc";
static const char __pyx_k_log[] = "log";
static const char __pyx_k_map[] = "map";
static const char __pyx_k_plt[] = "plt";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_axis[] = "axis";
static const char __pyx_k_dict[] = "__dict__";
static const char __pyx_k_drop[] = "drop";
static const char __pyx_k_exit[] = "__exit__";
static const char __pyx_k_file[] = "--file";
static const char __pyx_k_gram[] = "gram";
static const char __pyx_k_help[] = "help";
static const char __pyx_k_init[] = "__init__";
static const char __pyx_k_keys[] = "keys";
static const char __pyx_k_line[] = "line";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_math[] = "math";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_nltk[] = "nltk";
static const char __pyx_k_open[] = "open";
static const char __pyx_k_pHam[] = "pHam";
static const char __pyx_k_page[] = "page";
static const char __pyx_k_self[] = "self";
static const char __pyx_k_spec[] = "__spec__";
static const char __pyx_k_stem[] = "stem";
static const char __pyx_k_test[] = "--test";
static const char __pyx_k_text[] = "text";
static const char __pyx_k_type[] = "type";
static const char __pyx_k_word[] = "word";
static const char __pyx_k_count[] = "count";
static const char __pyx_k_enter[] = "__enter__";
static const char __pyx_k_index[] = "index";
static const char __pyx_k_label[] = "label";
static const char __pyx_k_lines[] = "lines";
static const char __pyx_k_lower[] = "lower";
static const char __pyx_k_numpy[] = "numpy";
static const char __pyx_k_pSpam[] = "pSpam";
static const char __pyx_k_pages[] = "pages";
static const char __pyx_k_print[] = "print";
static const char __pyx_k_punkt[] = "punkt";
static const char __pyx_k_range[] = "range";
static const char __pyx_k_shape[] = "shape";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_super[] = "super";
static const char __pyx_k_terms[] = "terms";
static const char __pyx_k_train[] = "train";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_words[] = "words";
static const char __pyx_k_zorya[] = "zorya";
static const char __pyx_k_Fscore[] = "Fscore";
static const char __pyx_k_PyPDF2[] = "PyPDF2";
static const char __pyx_k_Recall[] = "Recall: ";
static const char __pyx_k_action[] = "action";
static const char __pyx_k_file_2[] = "file";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_kwargs[] = "kwargs";
static const char __pyx_k_labels[] = "labels";
static const char __pyx_k_main_2[] = "main";
static const char __pyx_k_module[] = "__module__";
static const char __pyx_k_pandas[] = "pandas";
static const char __pyx_k_parser[] = "parser";
static const char __pyx_k_pyplot[] = "pyplot";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_recall[] = "recall";
static const char __pyx_k_rename[] = "rename";
static const char __pyx_k_result[] = "result";
static const char __pyx_k_sc_bow[] = "sc_bow";
static const char __pyx_k_test_2[] = "test";
static const char __pyx_k_test_3[] = "__test__";
static const char __pyx_k_F_score[] = "F-score: ";
static const char __pyx_k_columns[] = "columns";
static const char __pyx_k_english[] = "english";
static const char __pyx_k_inplace[] = "inplace";
static const char __pyx_k_message[] = "message";
static const char __pyx_k_metrics[] = "metrics";
static const char __pyx_k_neutral[] = "neutral";
static const char __pyx_k_predict[] = "predict";
static const char __pyx_k_prepare[] = "__prepare__";
static const char __pyx_k_stemmer[] = "stemmer";
static const char __pyx_k_uniform[] = "uniform";
static const char __pyx_k_Accuracy[] = "Accuracy: ";
static const char __pyx_k_accuracy[] = "accuracy";
static const char __pyx_k_argparse[] = "argparse";
static const char __pyx_k_classify[] = "--classify";
static const char __pyx_k_data_csv[] = "data.csv";
static const char __pyx_k_download[] = "download";
static const char __pyx_k_encoding[] = "encoding";
static const char __pyx_k_pdf_file[] = "pdf_file";
static const char __pyx_k_pdf_text[] = "pdf_text";
static const char __pyx_k_qualname[] = "__qualname__";
static const char __pyx_k_read_csv[] = "read_csv";
static const char __pyx_k_set_name[] = "__set_name__";
static const char __pyx_k_testData[] = "testData";
static const char __pyx_k_true_neg[] = "true_neg";
static const char __pyx_k_true_pos[] = "true_pos";
static const char __pyx_k_zorya_py[] = "zorya.py";
static const char __pyx_k_PdfReader[] = "PdfReader";
static const char __pyx_k_Precision[] = "Precision: ";
static const char __pyx_k_Unnamed_2[] = "Unnamed: 2";
static const char __pyx_k_Unnamed_3[] = "Unnamed: 3";
static const char __pyx_k_Unnamed_4[] = "Unnamed: 4";
static const char __pyx_k_WordCloud[] = "WordCloud";
static const char __pyx_k_calc_prob[] = "calc_prob";
static const char __pyx_k_enumerate[] = "enumerate";
static const char __pyx_k_false_neg[] = "false_neg";
static const char __pyx_k_false_pos[] = "false_pos";
static const char __pyx_k_metaclass[] = "__metaclass__";
static const char __pyx_k_nltk_stem[] = "nltk.stem";
static const char __pyx_k_precision[] = "precision";
static const char __pyx_k_preds_bow[] = "preds_bow";
static const char __pyx_k_sc_tf_idf[] = "sc_tf_idf";
static const char __pyx_k_stopwords[] = "stopwords";
static const char __pyx_k_testIndex[] = "testIndex";
static const char __pyx_k_trainData[] = "trainData";
static const char __pyx_k_wordcloud[] = "wordcloud";
static const char __pyx_k_Suspicious[] = "Suspicious? :";
static const char __pyx_k_classify_2[] = "classify";
static const char __pyx_k_lower_case[] = "lower_case";
static const char __pyx_k_matplotlib[] = "matplotlib";
static const char __pyx_k_parse_args[] = "parse_args";
static const char __pyx_k_pdf_reader[] = "pdf_reader";
static const char __pyx_k_print_help[] = "print_help";
static const char __pyx_k_stop_words[] = "stop_words";
static const char __pyx_k_store_true[] = "store_true";
static const char __pyx_k_suspicious[] = "suspicious";
static const char __pyx_k_tf_neutral[] = "tf_neutral";
static const char __pyx_k_trainIndex[] = "trainIndex";
static const char __pyx_k_calc_TF_IDF[] = "calc_TF_IDF";
static const char __pyx_k_description[] = "description";
static const char __pyx_k_idf_neutral[] = "idf_neutral";
static const char __pyx_k_mro_entries[] = "__mro_entries__";
static const char __pyx_k_nltk_corpus[] = "nltk.corpus";
static const char __pyx_k_predictions[] = "predictions";
static const char __pyx_k_reset_index[] = "reset_index";
static const char __pyx_k_total_terms[] = "total_terms";
static const char __pyx_k_add_argument[] = "add_argument";
static const char __pyx_k_extract_text[] = "extract_text";
static const char __pyx_k_initializing[] = "_initializing";
static const char __pyx_k_is_coroutine[] = "_is_coroutine";
static const char __pyx_k_preds_tf_idf[] = "preds_tf_idf";
static const char __pyx_k_prob_neutral[] = "prob_neutral";
static const char __pyx_k_value_counts[] = "value_counts";
static const char __pyx_k_BowClassifier[] = "BowClassifier";
static const char __pyx_k_PorterStemmer[] = "PorterStemmer";
static const char __pyx_k_class_getitem[] = "__class_getitem__";
static const char __pyx_k_init_subclass[] = "__init_subclass__";
static const char __pyx_k_is_suspicious[] = "is_suspicious";
static const char __pyx_k_neutral_terms[] = "neutral_terms";
static const char __pyx_k_neutral_words[] = "neutral_words";
static const char __pyx_k_nltk_tokenize[] = "nltk.tokenize";
static const char __pyx_k_tf_suspicious[] = "tf_suspicious";
static const char __pyx_k_word_tokenize[] = "word_tokenize";
static const char __pyx_k_ArgumentParser[] = "ArgumentParser";
static const char __pyx_k_idf_suspicious[] = "idf_suspicious";
static const char __pyx_k_processed_line[] = "processed_line";
static const char __pyx_k_TFIDFCLassifier[] = "TFIDFCLassifier";
static const char __pyx_k_calc_TF_and_IDF[] = "calc_TF_and_IDF";
static const char __pyx_k_number_of_lines[] = "number_of_lines";
static const char __pyx_k_prob_suspicious[] = "prob_suspicious";
static const char __pyx_k_process_message[] = "process_message";
static const char __pyx_k_suspicious_line[] = "suspicious_line";
static const char __pyx_k_suspicious_lines[] = "suspicious_lines";
static const char __pyx_k_suspicious_terms[] = "suspicious_terms";
static const char __pyx_k_suspicious_words[] = "suspicious_words";
static const char __pyx_k_matplotlib_pyplot[] = "matplotlib.pyplot";
static const char __pyx_k_message_processed[] = "message_processed";
static const char __pyx_k_processed_message[] = "processed_message";
static const char __pyx_k_Please_select_mode[] = "Please select mode.";
static const char __pyx_k_asyncio_coroutines[] = "asyncio.coroutines";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_prob_neutral_entry[] = "prob_neutral_entry";
static const char __pyx_k_sum_tf_idf_neutral[] = "sum_tf_idf_neutral";
static const char __pyx_k_BowClassifier_train[] = "BowClassifier.train";
static const char __pyx_k_BowClassifier___init[] = "BowClassifier.__init__";
static const char __pyx_k_TFIDFCLassifier_train[] = "TFIDFCLassifier.train";
static const char __pyx_k_extract_text_from_pdf[] = "extract_text_from_pdf";
static const char __pyx_k_prob_suspicious_entry[] = "prob_suspicious_entry";
static const char __pyx_k_sum_tf_idf_suspicious[] = "sum_tf_idf_suspicious";
static const char __pyx_k_BowClassifier_classify[] = "BowClassifier.classify";
static const char __pyx_k_TFIDFCLassifier___init[] = "TFIDFCLassifier.__init__";
static const char __pyx_k_BowClassifier_calc_prob[] = "BowClassifier.calc_prob";
static const char __pyx_k_Lines_flagged_suspicious[] = "=========================================\n========Lines flagged suspicious:========\n=========================================\n";
static const char __pyx_k_TFIDFCLassifier_classify[] = "TFIDFCLassifier.classify";
static const char __pyx_k_Results_for_Bow_classifier[] = "Results for Bow classifier:";
static const char __pyx_k_TFIDFCLassifier_calc_TF_IDF[] = "TFIDFCLassifier.calc_TF_IDF";
static const char __pyx_k_suspicious_terms_classifier[] = "suspicious_terms_classifier";
static const char __pyx_k_Results_for_TF_x_IDF_classifier[] = "Results for TF x IDF classifier:";
static const char __pyx_k_classify_text_given_in_inverted[] = "classify text given in inverted commas as suspect or neutral using TFxIDF algorithm";
static const char __pyx_k_train_and_test_the_algorithm_on[] = "train and test the algorithm on predefined data";
static const char __pyx_k_Continued_use_of_our_platform_si[] = "Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.";
static const char __pyx_k_Our_terms_of_service_and_privacy[] = "Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards. ";
static const char __pyx_k_Testing_Continued_use_of_our_pla[] = "Testing:  'Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.'";
static const char __pyx_k_Testing_Our_terms_of_service_and[] = "Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'";
static const char __pyx_k_ZoryaTrace_Trace_AI_generated_co[] = "ZoryaTrace - Trace AI generated content";
static const char __pyx_k_path_to_the_pdf_file_to_be_analy[] = "path to the pdf file to be analyzed with the algorithm, and then return the lines deemed suspicious to the user in terms of confidentiality.";
static const char __pyx_k_suspicious_terms_classifier___in[] = "suspicious_terms_classifier.__init__";
static const char __pyx_k_suspicious_terms_classifier_calc[] = "suspicious_terms_classifier.calc_TF_and_IDF";
static const char __pyx_k_suspicious_terms_classifier_clas[] = "suspicious_terms_classifier.classify";
static const char __pyx_k_suspicious_terms_classifier_pred[] = "suspicious_terms_classifier.predict";
static const char __pyx_k_suspicious_terms_classifier_trai[] = "suspicious_terms_classifier.train";
/* #### Code section: decls ### */
static PyObject *__pyx_pf_5zorya_main(CYTHON_UNUSED PyObject *__pyx_self); /* proto */
static PyObject *__pyx_pf_5zorya_2extract_text_from_pdf(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_pdf_file); /* proto */
static PyObject *__pyx_pf_5zorya_4process_message(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_message, PyObject *__pyx_v_lower_case, PyObject *__pyx_v_stem, PyObject *__pyx_v_stop_words, PyObject *__pyx_v_gram); /* proto */
static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_trainData); /* proto */
static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_2train(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_4classify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_message); /* proto */
static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_6calc_TF_and_IDF(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_8predict(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_testData); /* proto */
static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_args, PyObject *__pyx_v_kwargs); /* proto */
static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier_2train(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier_4calc_TF_IDF(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier_6classify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_processed_message); /* proto */
static PyObject *__pyx_pf_5zorya_13BowClassifier___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_args, PyObject *__pyx_v_kwargs); /* proto */
static PyObject *__pyx_pf_5zorya_13BowClassifier_2train(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_5zorya_13BowClassifier_4calc_prob(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self); /* proto */
static PyObject *__pyx_pf_5zorya_13BowClassifier_6classify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_processed_message); /* proto */
static PyObject *__pyx_pf_5zorya_6metrics(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_labels, PyObject *__pyx_v_predictions); /* proto */
/* #### Code section: late_includes ### */
/* #### Code section: module_state ### */
typedef struct {
  PyObject *__pyx_d;
  PyObject *__pyx_b;
  PyObject *__pyx_cython_runtime;
  PyObject *__pyx_empty_tuple;
  PyObject *__pyx_empty_bytes;
  PyObject *__pyx_empty_unicode;
  #ifdef __Pyx_CyFunction_USED
  PyTypeObject *__pyx_CyFunctionType;
  #endif
  #ifdef __Pyx_FusedFunction_USED
  PyTypeObject *__pyx_FusedFunctionType;
  #endif
  #ifdef __Pyx_Generator_USED
  PyTypeObject *__pyx_GeneratorType;
  #endif
  #ifdef __Pyx_IterableCoroutine_USED
  PyTypeObject *__pyx_IterableCoroutineType;
  #endif
  #ifdef __Pyx_Coroutine_USED
  PyTypeObject *__pyx_CoroutineAwaitType;
  #endif
  #ifdef __Pyx_Coroutine_USED
  PyTypeObject *__pyx_CoroutineType;
  #endif
  #if CYTHON_USE_MODULE_STATE
  #endif
  PyObject *__pyx_kp_u_Accuracy;
  PyObject *__pyx_n_s_ArgumentParser;
  PyObject *__pyx_n_s_BowClassifier;
  PyObject *__pyx_n_s_BowClassifier___init;
  PyObject *__pyx_n_s_BowClassifier_calc_prob;
  PyObject *__pyx_n_s_BowClassifier_classify;
  PyObject *__pyx_n_s_BowClassifier_train;
  PyObject *__pyx_kp_u_Continued_use_of_our_platform_si;
  PyObject *__pyx_kp_u_F_score;
  PyObject *__pyx_n_s_Fscore;
  PyObject *__pyx_kp_u_Lines_flagged_suspicious;
  PyObject *__pyx_kp_u_Our_terms_of_service_and_privacy;
  PyObject *__pyx_n_s_PdfReader;
  PyObject *__pyx_kp_u_Please_select_mode;
  PyObject *__pyx_n_s_PorterStemmer;
  PyObject *__pyx_kp_u_Precision;
  PyObject *__pyx_n_s_PyPDF2;
  PyObject *__pyx_kp_u_Recall;
  PyObject *__pyx_kp_u_Results_for_Bow_classifier;
  PyObject *__pyx_kp_u_Results_for_TF_x_IDF_classifier;
  PyObject *__pyx_kp_u_Suspicious;
  PyObject *__pyx_n_s_TFIDFCLassifier;
  PyObject *__pyx_n_s_TFIDFCLassifier___init;
  PyObject *__pyx_n_s_TFIDFCLassifier_calc_TF_IDF;
  PyObject *__pyx_n_s_TFIDFCLassifier_classify;
  PyObject *__pyx_n_s_TFIDFCLassifier_train;
  PyObject *__pyx_kp_u_Testing_Continued_use_of_our_pla;
  PyObject *__pyx_kp_u_Testing_Our_terms_of_service_and;
  PyObject *__pyx_kp_u_Unnamed_2;
  PyObject *__pyx_kp_u_Unnamed_3;
  PyObject *__pyx_kp_u_Unnamed_4;
  PyObject *__pyx_n_s_WordCloud;
  PyObject *__pyx_kp_u_ZoryaTrace_Trace_AI_generated_co;
  PyObject *__pyx_kp_u__10;
  PyObject *__pyx_kp_u__13;
  PyObject *__pyx_kp_u__15;
  PyObject *__pyx_kp_u__16;
  PyObject *__pyx_n_s__17;
  PyObject *__pyx_n_s__51;
  PyObject *__pyx_n_s_accuracy;
  PyObject *__pyx_n_s_action;
  PyObject *__pyx_n_s_add_argument;
  PyObject *__pyx_n_s_argparse;
  PyObject *__pyx_n_s_args;
  PyObject *__pyx_n_s_asyncio_coroutines;
  PyObject *__pyx_n_s_axis;
  PyObject *__pyx_kp_u_c;
  PyObject *__pyx_n_s_calc_TF_IDF;
  PyObject *__pyx_n_s_calc_TF_and_IDF;
  PyObject *__pyx_n_s_calc_prob;
  PyObject *__pyx_n_s_class_getitem;
  PyObject *__pyx_kp_u_classify;
  PyObject *__pyx_n_s_classify_2;
  PyObject *__pyx_kp_u_classify_text_given_in_inverted;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_n_s_columns;
  PyObject *__pyx_n_s_count;
  PyObject *__pyx_kp_u_data_csv;
  PyObject *__pyx_n_s_description;
  PyObject *__pyx_n_s_dict;
  PyObject *__pyx_n_s_doc;
  PyObject *__pyx_n_s_download;
  PyObject *__pyx_n_s_drop;
  PyObject *__pyx_n_s_encoding;
  PyObject *__pyx_n_u_english;
  PyObject *__pyx_n_s_enter;
  PyObject *__pyx_n_s_enumerate;
  PyObject *__pyx_n_s_exit;
  PyObject *__pyx_n_s_extract_text;
  PyObject *__pyx_n_s_extract_text_from_pdf;
  PyObject *__pyx_kp_u_f;
  PyObject *__pyx_n_s_false_neg;
  PyObject *__pyx_n_s_false_pos;
  PyObject *__pyx_kp_u_file;
  PyObject *__pyx_n_s_file_2;
  PyObject *__pyx_n_s_get;
  PyObject *__pyx_n_s_gram;
  PyObject *__pyx_n_s_help;
  PyObject *__pyx_n_s_i;
  PyObject *__pyx_n_s_idf_neutral;
  PyObject *__pyx_n_s_idf_suspicious;
  PyObject *__pyx_n_s_import;
  PyObject *__pyx_n_u_index;
  PyObject *__pyx_n_s_init;
  PyObject *__pyx_n_s_init_subclass;
  PyObject *__pyx_n_s_initializing;
  PyObject *__pyx_n_s_inplace;
  PyObject *__pyx_n_s_is_coroutine;
  PyObject *__pyx_n_s_is_suspicious;
  PyObject *__pyx_n_s_keys;
  PyObject *__pyx_n_s_kwargs;
  PyObject *__pyx_n_u_label;
  PyObject *__pyx_n_s_labels;
  PyObject *__pyx_n_u_labels;
  PyObject *__pyx_n_s_line;
  PyObject *__pyx_n_s_lines;
  PyObject *__pyx_n_s_loc;
  PyObject *__pyx_n_s_log;
  PyObject *__pyx_n_s_lower;
  PyObject *__pyx_n_s_lower_case;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_n_u_main;
  PyObject *__pyx_n_s_main_2;
  PyObject *__pyx_n_s_map;
  PyObject *__pyx_n_s_math;
  PyObject *__pyx_n_s_matplotlib;
  PyObject *__pyx_n_s_matplotlib_pyplot;
  PyObject *__pyx_n_s_message;
  PyObject *__pyx_n_u_message;
  PyObject *__pyx_n_s_message_processed;
  PyObject *__pyx_n_s_metaclass;
  PyObject *__pyx_n_s_metrics;
  PyObject *__pyx_n_s_module;
  PyObject *__pyx_n_s_mro_entries;
  PyObject *__pyx_n_s_name;
  PyObject *__pyx_n_u_neutral;
  PyObject *__pyx_n_s_neutral_terms;
  PyObject *__pyx_n_s_neutral_words;
  PyObject *__pyx_n_s_nltk;
  PyObject *__pyx_n_s_nltk_corpus;
  PyObject *__pyx_n_s_nltk_stem;
  PyObject *__pyx_n_s_nltk_tokenize;
  PyObject *__pyx_n_s_np;
  PyObject *__pyx_n_s_number_of_lines;
  PyObject *__pyx_n_s_numpy;
  PyObject *__pyx_n_s_open;
  PyObject *__pyx_n_s_pHam;
  PyObject *__pyx_n_s_pSpam;
  PyObject *__pyx_n_s_page;
  PyObject *__pyx_n_s_pages;
  PyObject *__pyx_n_s_pandas;
  PyObject *__pyx_n_s_parse_args;
  PyObject *__pyx_n_s_parser;
  PyObject *__pyx_kp_u_path_to_the_pdf_file_to_be_analy;
  PyObject *__pyx_n_s_pd;
  PyObject *__pyx_n_s_pdf_file;
  PyObject *__pyx_n_s_pdf_reader;
  PyObject *__pyx_n_s_pdf_text;
  PyObject *__pyx_n_s_plt;
  PyObject *__pyx_n_s_pm;
  PyObject *__pyx_n_s_precision;
  PyObject *__pyx_n_s_predict;
  PyObject *__pyx_n_s_predictions;
  PyObject *__pyx_n_s_preds_bow;
  PyObject *__pyx_n_s_preds_tf_idf;
  PyObject *__pyx_n_s_prepare;
  PyObject *__pyx_n_s_print;
  PyObject *__pyx_n_s_print_help;
  PyObject *__pyx_n_s_prob_neutral;
  PyObject *__pyx_n_s_prob_neutral_entry;
  PyObject *__pyx_n_s_prob_suspicious;
  PyObject *__pyx_n_s_prob_suspicious_entry;
  PyObject *__pyx_n_s_process_message;
  PyObject *__pyx_n_s_processed_line;
  PyObject *__pyx_n_s_processed_message;
  PyObject *__pyx_n_u_punkt;
  PyObject *__pyx_n_s_pyplot;
  PyObject *__pyx_n_s_qualname;
  PyObject *__pyx_n_s_random;
  PyObject *__pyx_n_s_range;
  PyObject *__pyx_n_u_rb;
  PyObject *__pyx_n_s_read_csv;
  PyObject *__pyx_n_s_recall;
  PyObject *__pyx_n_s_rename;
  PyObject *__pyx_n_s_reset_index;
  PyObject *__pyx_n_s_result;
  PyObject *__pyx_n_s_sc_bow;
  PyObject *__pyx_n_s_sc_tf_idf;
  PyObject *__pyx_n_s_self;
  PyObject *__pyx_n_s_set_name;
  PyObject *__pyx_n_s_shape;
  PyObject *__pyx_n_s_spec;
  PyObject *__pyx_n_s_split;
  PyObject *__pyx_n_s_stem;
  PyObject *__pyx_n_s_stemmer;
  PyObject *__pyx_n_s_stop_words;
  PyObject *__pyx_n_s_stopwords;
  PyObject *__pyx_n_u_stopwords;
  PyObject *__pyx_n_u_store_true;
  PyObject *__pyx_n_s_sum_tf_idf_neutral;
  PyObject *__pyx_n_s_sum_tf_idf_suspicious;
  PyObject *__pyx_n_s_super;
  PyObject *__pyx_n_u_suspicious;
  PyObject *__pyx_n_s_suspicious_line;
  PyObject *__pyx_n_s_suspicious_lines;
  PyObject *__pyx_n_s_suspicious_terms;
  PyObject *__pyx_n_s_suspicious_terms_classifier;
  PyObject *__pyx_n_s_suspicious_terms_classifier___in;
  PyObject *__pyx_n_s_suspicious_terms_classifier_calc;
  PyObject *__pyx_n_s_suspicious_terms_classifier_clas;
  PyObject *__pyx_n_s_suspicious_terms_classifier_pred;
  PyObject *__pyx_n_s_suspicious_terms_classifier_trai;
  PyObject *__pyx_n_s_suspicious_words;
  PyObject *__pyx_n_s_sw;
  PyObject *__pyx_kp_u_t;
  PyObject *__pyx_n_s_terms;
  PyObject *__pyx_kp_u_test;
  PyObject *__pyx_n_s_testData;
  PyObject *__pyx_n_s_testIndex;
  PyObject *__pyx_n_s_test_2;
  PyObject *__pyx_n_s_test_3;
  PyObject *__pyx_n_s_text;
  PyObject *__pyx_n_s_tf_neutral;
  PyObject *__pyx_n_s_tf_suspicious;
  PyObject *__pyx_n_s_total_terms;
  PyObject *__pyx_n_s_train;
  PyObject *__pyx_n_s_trainData;
  PyObject *__pyx_n_s_trainIndex;
  PyObject *__pyx_kp_u_train_and_test_the_algorithm_on;
  PyObject *__pyx_n_s_true_neg;
  PyObject *__pyx_n_s_true_pos;
  PyObject *__pyx_n_s_type;
  PyObject *__pyx_n_s_uniform;
  PyObject *__pyx_kp_u_utf_8;
  PyObject *__pyx_n_u_v1;
  PyObject *__pyx_n_u_v2;
  PyObject *__pyx_n_s_value_counts;
  PyObject *__pyx_n_s_w;
  PyObject *__pyx_n_s_word;
  PyObject *__pyx_n_s_word_tokenize;
  PyObject *__pyx_n_s_wordcloud;
  PyObject *__pyx_n_s_words;
  PyObject *__pyx_n_s_zorya;
  PyObject *__pyx_kp_s_zorya_py;
  PyObject *__pyx_float_0_75;
  PyObject *__pyx_int_0;
  PyObject *__pyx_int_1;
  PyObject *__pyx_int_2;
  PyObject *__pyx_tuple_;
  PyObject *__pyx_tuple__2;
  PyObject *__pyx_tuple__3;
  PyObject *__pyx_tuple__4;
  PyObject *__pyx_tuple__5;
  PyObject *__pyx_tuple__6;
  PyObject *__pyx_tuple__7;
  PyObject *__pyx_tuple__8;
  PyObject *__pyx_tuple__9;
  PyObject *__pyx_tuple__11;
  PyObject *__pyx_tuple__12;
  PyObject *__pyx_tuple__14;
  PyObject *__pyx_tuple__18;
  PyObject *__pyx_tuple__19;
  PyObject *__pyx_tuple__20;
  PyObject *__pyx_tuple__21;
  PyObject *__pyx_tuple__23;
  PyObject *__pyx_tuple__25;
  PyObject *__pyx_tuple__27;
  PyObject *__pyx_tuple__28;
  PyObject *__pyx_tuple__30;
  PyObject *__pyx_tuple__32;
  PyObject *__pyx_tuple__34;
  PyObject *__pyx_tuple__36;
  PyObject *__pyx_tuple__38;
  PyObject *__pyx_tuple__41;
  PyObject *__pyx_tuple__43;
  PyObject *__pyx_tuple__49;
  PyObject *__pyx_codeobj__22;
  PyObject *__pyx_codeobj__24;
  PyObject *__pyx_codeobj__26;
  PyObject *__pyx_codeobj__29;
  PyObject *__pyx_codeobj__31;
  PyObject *__pyx_codeobj__33;
  PyObject *__pyx_codeobj__35;
  PyObject *__pyx_codeobj__37;
  PyObject *__pyx_codeobj__39;
  PyObject *__pyx_codeobj__40;
  PyObject *__pyx_codeobj__42;
  PyObject *__pyx_codeobj__44;
  PyObject *__pyx_codeobj__45;
  PyObject *__pyx_codeobj__46;
  PyObject *__pyx_codeobj__47;
  PyObject *__pyx_codeobj__48;
  PyObject *__pyx_codeobj__50;
} __pyx_mstate;

#if CYTHON_USE_MODULE_STATE
#ifdef __cplusplus
namespace {
  extern struct PyModuleDef __pyx_moduledef;
} /* anonymous namespace */
#else
static struct PyModuleDef __pyx_moduledef;
#endif

#define __pyx_mstate(o) ((__pyx_mstate *)__Pyx_PyModule_GetState(o))

#define __pyx_mstate_global (__pyx_mstate(PyState_FindModule(&__pyx_moduledef)))

#define __pyx_m (PyState_FindModule(&__pyx_moduledef))
#else
static __pyx_mstate __pyx_mstate_global_static =
#ifdef __cplusplus
    {};
#else
    {0};
#endif
static __pyx_mstate *__pyx_mstate_global = &__pyx_mstate_global_static;
#endif
/* #### Code section: module_state_clear ### */
#if CYTHON_USE_MODULE_STATE
static int __pyx_m_clear(PyObject *m) {
  __pyx_mstate *clear_module_state = __pyx_mstate(m);
  if (!clear_module_state) return 0;
  Py_CLEAR(clear_module_state->__pyx_d);
  Py_CLEAR(clear_module_state->__pyx_b);
  Py_CLEAR(clear_module_state->__pyx_cython_runtime);
  Py_CLEAR(clear_module_state->__pyx_empty_tuple);
  Py_CLEAR(clear_module_state->__pyx_empty_bytes);
  Py_CLEAR(clear_module_state->__pyx_empty_unicode);
  #ifdef __Pyx_CyFunction_USED
  Py_CLEAR(clear_module_state->__pyx_CyFunctionType);
  #endif
  #ifdef __Pyx_FusedFunction_USED
  Py_CLEAR(clear_module_state->__pyx_FusedFunctionType);
  #endif
  Py_CLEAR(clear_module_state->__pyx_kp_u_Accuracy);
  Py_CLEAR(clear_module_state->__pyx_n_s_ArgumentParser);
  Py_CLEAR(clear_module_state->__pyx_n_s_BowClassifier);
  Py_CLEAR(clear_module_state->__pyx_n_s_BowClassifier___init);
  Py_CLEAR(clear_module_state->__pyx_n_s_BowClassifier_calc_prob);
  Py_CLEAR(clear_module_state->__pyx_n_s_BowClassifier_classify);
  Py_CLEAR(clear_module_state->__pyx_n_s_BowClassifier_train);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Continued_use_of_our_platform_si);
  Py_CLEAR(clear_module_state->__pyx_kp_u_F_score);
  Py_CLEAR(clear_module_state->__pyx_n_s_Fscore);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Lines_flagged_suspicious);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Our_terms_of_service_and_privacy);
  Py_CLEAR(clear_module_state->__pyx_n_s_PdfReader);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Please_select_mode);
  Py_CLEAR(clear_module_state->__pyx_n_s_PorterStemmer);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Precision);
  Py_CLEAR(clear_module_state->__pyx_n_s_PyPDF2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Recall);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Results_for_Bow_classifier);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Results_for_TF_x_IDF_classifier);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_TFIDFCLassifier);
  Py_CLEAR(clear_module_state->__pyx_n_s_TFIDFCLassifier___init);
  Py_CLEAR(clear_module_state->__pyx_n_s_TFIDFCLassifier_calc_TF_IDF);
  Py_CLEAR(clear_module_state->__pyx_n_s_TFIDFCLassifier_classify);
  Py_CLEAR(clear_module_state->__pyx_n_s_TFIDFCLassifier_train);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Testing_Continued_use_of_our_pla);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Testing_Our_terms_of_service_and);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Unnamed_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Unnamed_3);
  Py_CLEAR(clear_module_state->__pyx_kp_u_Unnamed_4);
  Py_CLEAR(clear_module_state->__pyx_n_s_WordCloud);
  Py_CLEAR(clear_module_state->__pyx_kp_u_ZoryaTrace_Trace_AI_generated_co);
  Py_CLEAR(clear_module_state->__pyx_kp_u__10);
  Py_CLEAR(clear_module_state->__pyx_kp_u__13);
  Py_CLEAR(clear_module_state->__pyx_kp_u__15);
  Py_CLEAR(clear_module_state->__pyx_kp_u__16);
  Py_CLEAR(clear_module_state->__pyx_n_s__17);
  Py_CLEAR(clear_module_state->__pyx_n_s__51);
  Py_CLEAR(clear_module_state->__pyx_n_s_accuracy);
  Py_CLEAR(clear_module_state->__pyx_n_s_action);
  Py_CLEAR(clear_module_state->__pyx_n_s_add_argument);
  Py_CLEAR(clear_module_state->__pyx_n_s_argparse);
  Py_CLEAR(clear_module_state->__pyx_n_s_args);
  Py_CLEAR(clear_module_state->__pyx_n_s_asyncio_coroutines);
  Py_CLEAR(clear_module_state->__pyx_n_s_axis);
  Py_CLEAR(clear_module_state->__pyx_kp_u_c);
  Py_CLEAR(clear_module_state->__pyx_n_s_calc_TF_IDF);
  Py_CLEAR(clear_module_state->__pyx_n_s_calc_TF_and_IDF);
  Py_CLEAR(clear_module_state->__pyx_n_s_calc_prob);
  Py_CLEAR(clear_module_state->__pyx_n_s_class_getitem);
  Py_CLEAR(clear_module_state->__pyx_kp_u_classify);
  Py_CLEAR(clear_module_state->__pyx_n_s_classify_2);
  Py_CLEAR(clear_module_state->__pyx_kp_u_classify_text_given_in_inverted);
  Py_CLEAR(clear_module_state->__pyx_n_s_cline_in_traceback);
  Py_CLEAR(clear_module_state->__pyx_n_s_columns);
  Py_CLEAR(clear_module_state->__pyx_n_s_count);
  Py_CLEAR(clear_module_state->__pyx_kp_u_data_csv);
  Py_CLEAR(clear_module_state->__pyx_n_s_description);
  Py_CLEAR(clear_module_state->__pyx_n_s_dict);
  Py_CLEAR(clear_module_state->__pyx_n_s_doc);
  Py_CLEAR(clear_module_state->__pyx_n_s_download);
  Py_CLEAR(clear_module_state->__pyx_n_s_drop);
  Py_CLEAR(clear_module_state->__pyx_n_s_encoding);
  Py_CLEAR(clear_module_state->__pyx_n_u_english);
  Py_CLEAR(clear_module_state->__pyx_n_s_enter);
  Py_CLEAR(clear_module_state->__pyx_n_s_enumerate);
  Py_CLEAR(clear_module_state->__pyx_n_s_exit);
  Py_CLEAR(clear_module_state->__pyx_n_s_extract_text);
  Py_CLEAR(clear_module_state->__pyx_n_s_extract_text_from_pdf);
  Py_CLEAR(clear_module_state->__pyx_kp_u_f);
  Py_CLEAR(clear_module_state->__pyx_n_s_false_neg);
  Py_CLEAR(clear_module_state->__pyx_n_s_false_pos);
  Py_CLEAR(clear_module_state->__pyx_kp_u_file);
  Py_CLEAR(clear_module_state->__pyx_n_s_file_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_get);
  Py_CLEAR(clear_module_state->__pyx_n_s_gram);
  Py_CLEAR(clear_module_state->__pyx_n_s_help);
  Py_CLEAR(clear_module_state->__pyx_n_s_i);
  Py_CLEAR(clear_module_state->__pyx_n_s_idf_neutral);
  Py_CLEAR(clear_module_state->__pyx_n_s_idf_suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_import);
  Py_CLEAR(clear_module_state->__pyx_n_u_index);
  Py_CLEAR(clear_module_state->__pyx_n_s_init);
  Py_CLEAR(clear_module_state->__pyx_n_s_init_subclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_initializing);
  Py_CLEAR(clear_module_state->__pyx_n_s_inplace);
  Py_CLEAR(clear_module_state->__pyx_n_s_is_coroutine);
  Py_CLEAR(clear_module_state->__pyx_n_s_is_suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_keys);
  Py_CLEAR(clear_module_state->__pyx_n_s_kwargs);
  Py_CLEAR(clear_module_state->__pyx_n_u_label);
  Py_CLEAR(clear_module_state->__pyx_n_s_labels);
  Py_CLEAR(clear_module_state->__pyx_n_u_labels);
  Py_CLEAR(clear_module_state->__pyx_n_s_line);
  Py_CLEAR(clear_module_state->__pyx_n_s_lines);
  Py_CLEAR(clear_module_state->__pyx_n_s_loc);
  Py_CLEAR(clear_module_state->__pyx_n_s_log);
  Py_CLEAR(clear_module_state->__pyx_n_s_lower);
  Py_CLEAR(clear_module_state->__pyx_n_s_lower_case);
  Py_CLEAR(clear_module_state->__pyx_n_s_main);
  Py_CLEAR(clear_module_state->__pyx_n_u_main);
  Py_CLEAR(clear_module_state->__pyx_n_s_main_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_map);
  Py_CLEAR(clear_module_state->__pyx_n_s_math);
  Py_CLEAR(clear_module_state->__pyx_n_s_matplotlib);
  Py_CLEAR(clear_module_state->__pyx_n_s_matplotlib_pyplot);
  Py_CLEAR(clear_module_state->__pyx_n_s_message);
  Py_CLEAR(clear_module_state->__pyx_n_u_message);
  Py_CLEAR(clear_module_state->__pyx_n_s_message_processed);
  Py_CLEAR(clear_module_state->__pyx_n_s_metaclass);
  Py_CLEAR(clear_module_state->__pyx_n_s_metrics);
  Py_CLEAR(clear_module_state->__pyx_n_s_module);
  Py_CLEAR(clear_module_state->__pyx_n_s_mro_entries);
  Py_CLEAR(clear_module_state->__pyx_n_s_name);
  Py_CLEAR(clear_module_state->__pyx_n_u_neutral);
  Py_CLEAR(clear_module_state->__pyx_n_s_neutral_terms);
  Py_CLEAR(clear_module_state->__pyx_n_s_neutral_words);
  Py_CLEAR(clear_module_state->__pyx_n_s_nltk);
  Py_CLEAR(clear_module_state->__pyx_n_s_nltk_corpus);
  Py_CLEAR(clear_module_state->__pyx_n_s_nltk_stem);
  Py_CLEAR(clear_module_state->__pyx_n_s_nltk_tokenize);
  Py_CLEAR(clear_module_state->__pyx_n_s_np);
  Py_CLEAR(clear_module_state->__pyx_n_s_number_of_lines);
  Py_CLEAR(clear_module_state->__pyx_n_s_numpy);
  Py_CLEAR(clear_module_state->__pyx_n_s_open);
  Py_CLEAR(clear_module_state->__pyx_n_s_pHam);
  Py_CLEAR(clear_module_state->__pyx_n_s_pSpam);
  Py_CLEAR(clear_module_state->__pyx_n_s_page);
  Py_CLEAR(clear_module_state->__pyx_n_s_pages);
  Py_CLEAR(clear_module_state->__pyx_n_s_pandas);
  Py_CLEAR(clear_module_state->__pyx_n_s_parse_args);
  Py_CLEAR(clear_module_state->__pyx_n_s_parser);
  Py_CLEAR(clear_module_state->__pyx_kp_u_path_to_the_pdf_file_to_be_analy);
  Py_CLEAR(clear_module_state->__pyx_n_s_pd);
  Py_CLEAR(clear_module_state->__pyx_n_s_pdf_file);
  Py_CLEAR(clear_module_state->__pyx_n_s_pdf_reader);
  Py_CLEAR(clear_module_state->__pyx_n_s_pdf_text);
  Py_CLEAR(clear_module_state->__pyx_n_s_plt);
  Py_CLEAR(clear_module_state->__pyx_n_s_pm);
  Py_CLEAR(clear_module_state->__pyx_n_s_precision);
  Py_CLEAR(clear_module_state->__pyx_n_s_predict);
  Py_CLEAR(clear_module_state->__pyx_n_s_predictions);
  Py_CLEAR(clear_module_state->__pyx_n_s_preds_bow);
  Py_CLEAR(clear_module_state->__pyx_n_s_preds_tf_idf);
  Py_CLEAR(clear_module_state->__pyx_n_s_prepare);
  Py_CLEAR(clear_module_state->__pyx_n_s_print);
  Py_CLEAR(clear_module_state->__pyx_n_s_print_help);
  Py_CLEAR(clear_module_state->__pyx_n_s_prob_neutral);
  Py_CLEAR(clear_module_state->__pyx_n_s_prob_neutral_entry);
  Py_CLEAR(clear_module_state->__pyx_n_s_prob_suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_prob_suspicious_entry);
  Py_CLEAR(clear_module_state->__pyx_n_s_process_message);
  Py_CLEAR(clear_module_state->__pyx_n_s_processed_line);
  Py_CLEAR(clear_module_state->__pyx_n_s_processed_message);
  Py_CLEAR(clear_module_state->__pyx_n_u_punkt);
  Py_CLEAR(clear_module_state->__pyx_n_s_pyplot);
  Py_CLEAR(clear_module_state->__pyx_n_s_qualname);
  Py_CLEAR(clear_module_state->__pyx_n_s_random);
  Py_CLEAR(clear_module_state->__pyx_n_s_range);
  Py_CLEAR(clear_module_state->__pyx_n_u_rb);
  Py_CLEAR(clear_module_state->__pyx_n_s_read_csv);
  Py_CLEAR(clear_module_state->__pyx_n_s_recall);
  Py_CLEAR(clear_module_state->__pyx_n_s_rename);
  Py_CLEAR(clear_module_state->__pyx_n_s_reset_index);
  Py_CLEAR(clear_module_state->__pyx_n_s_result);
  Py_CLEAR(clear_module_state->__pyx_n_s_sc_bow);
  Py_CLEAR(clear_module_state->__pyx_n_s_sc_tf_idf);
  Py_CLEAR(clear_module_state->__pyx_n_s_self);
  Py_CLEAR(clear_module_state->__pyx_n_s_set_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_shape);
  Py_CLEAR(clear_module_state->__pyx_n_s_spec);
  Py_CLEAR(clear_module_state->__pyx_n_s_split);
  Py_CLEAR(clear_module_state->__pyx_n_s_stem);
  Py_CLEAR(clear_module_state->__pyx_n_s_stemmer);
  Py_CLEAR(clear_module_state->__pyx_n_s_stop_words);
  Py_CLEAR(clear_module_state->__pyx_n_s_stopwords);
  Py_CLEAR(clear_module_state->__pyx_n_u_stopwords);
  Py_CLEAR(clear_module_state->__pyx_n_u_store_true);
  Py_CLEAR(clear_module_state->__pyx_n_s_sum_tf_idf_neutral);
  Py_CLEAR(clear_module_state->__pyx_n_s_sum_tf_idf_suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_super);
  Py_CLEAR(clear_module_state->__pyx_n_u_suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_line);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_lines);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms_classifier);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms_classifier___in);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms_classifier_calc);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms_classifier_clas);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms_classifier_pred);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_terms_classifier_trai);
  Py_CLEAR(clear_module_state->__pyx_n_s_suspicious_words);
  Py_CLEAR(clear_module_state->__pyx_n_s_sw);
  Py_CLEAR(clear_module_state->__pyx_kp_u_t);
  Py_CLEAR(clear_module_state->__pyx_n_s_terms);
  Py_CLEAR(clear_module_state->__pyx_kp_u_test);
  Py_CLEAR(clear_module_state->__pyx_n_s_testData);
  Py_CLEAR(clear_module_state->__pyx_n_s_testIndex);
  Py_CLEAR(clear_module_state->__pyx_n_s_test_2);
  Py_CLEAR(clear_module_state->__pyx_n_s_test_3);
  Py_CLEAR(clear_module_state->__pyx_n_s_text);
  Py_CLEAR(clear_module_state->__pyx_n_s_tf_neutral);
  Py_CLEAR(clear_module_state->__pyx_n_s_tf_suspicious);
  Py_CLEAR(clear_module_state->__pyx_n_s_total_terms);
  Py_CLEAR(clear_module_state->__pyx_n_s_train);
  Py_CLEAR(clear_module_state->__pyx_n_s_trainData);
  Py_CLEAR(clear_module_state->__pyx_n_s_trainIndex);
  Py_CLEAR(clear_module_state->__pyx_kp_u_train_and_test_the_algorithm_on);
  Py_CLEAR(clear_module_state->__pyx_n_s_true_neg);
  Py_CLEAR(clear_module_state->__pyx_n_s_true_pos);
  Py_CLEAR(clear_module_state->__pyx_n_s_type);
  Py_CLEAR(clear_module_state->__pyx_n_s_uniform);
  Py_CLEAR(clear_module_state->__pyx_kp_u_utf_8);
  Py_CLEAR(clear_module_state->__pyx_n_u_v1);
  Py_CLEAR(clear_module_state->__pyx_n_u_v2);
  Py_CLEAR(clear_module_state->__pyx_n_s_value_counts);
  Py_CLEAR(clear_module_state->__pyx_n_s_w);
  Py_CLEAR(clear_module_state->__pyx_n_s_word);
  Py_CLEAR(clear_module_state->__pyx_n_s_word_tokenize);
  Py_CLEAR(clear_module_state->__pyx_n_s_wordcloud);
  Py_CLEAR(clear_module_state->__pyx_n_s_words);
  Py_CLEAR(clear_module_state->__pyx_n_s_zorya);
  Py_CLEAR(clear_module_state->__pyx_kp_s_zorya_py);
  Py_CLEAR(clear_module_state->__pyx_float_0_75);
  Py_CLEAR(clear_module_state->__pyx_int_0);
  Py_CLEAR(clear_module_state->__pyx_int_1);
  Py_CLEAR(clear_module_state->__pyx_int_2);
  Py_CLEAR(clear_module_state->__pyx_tuple_);
  Py_CLEAR(clear_module_state->__pyx_tuple__2);
  Py_CLEAR(clear_module_state->__pyx_tuple__3);
  Py_CLEAR(clear_module_state->__pyx_tuple__4);
  Py_CLEAR(clear_module_state->__pyx_tuple__5);
  Py_CLEAR(clear_module_state->__pyx_tuple__6);
  Py_CLEAR(clear_module_state->__pyx_tuple__7);
  Py_CLEAR(clear_module_state->__pyx_tuple__8);
  Py_CLEAR(clear_module_state->__pyx_tuple__9);
  Py_CLEAR(clear_module_state->__pyx_tuple__11);
  Py_CLEAR(clear_module_state->__pyx_tuple__12);
  Py_CLEAR(clear_module_state->__pyx_tuple__14);
  Py_CLEAR(clear_module_state->__pyx_tuple__18);
  Py_CLEAR(clear_module_state->__pyx_tuple__19);
  Py_CLEAR(clear_module_state->__pyx_tuple__20);
  Py_CLEAR(clear_module_state->__pyx_tuple__21);
  Py_CLEAR(clear_module_state->__pyx_tuple__23);
  Py_CLEAR(clear_module_state->__pyx_tuple__25);
  Py_CLEAR(clear_module_state->__pyx_tuple__27);
  Py_CLEAR(clear_module_state->__pyx_tuple__28);
  Py_CLEAR(clear_module_state->__pyx_tuple__30);
  Py_CLEAR(clear_module_state->__pyx_tuple__32);
  Py_CLEAR(clear_module_state->__pyx_tuple__34);
  Py_CLEAR(clear_module_state->__pyx_tuple__36);
  Py_CLEAR(clear_module_state->__pyx_tuple__38);
  Py_CLEAR(clear_module_state->__pyx_tuple__41);
  Py_CLEAR(clear_module_state->__pyx_tuple__43);
  Py_CLEAR(clear_module_state->__pyx_tuple__49);
  Py_CLEAR(clear_module_state->__pyx_codeobj__22);
  Py_CLEAR(clear_module_state->__pyx_codeobj__24);
  Py_CLEAR(clear_module_state->__pyx_codeobj__26);
  Py_CLEAR(clear_module_state->__pyx_codeobj__29);
  Py_CLEAR(clear_module_state->__pyx_codeobj__31);
  Py_CLEAR(clear_module_state->__pyx_codeobj__33);
  Py_CLEAR(clear_module_state->__pyx_codeobj__35);
  Py_CLEAR(clear_module_state->__pyx_codeobj__37);
  Py_CLEAR(clear_module_state->__pyx_codeobj__39);
  Py_CLEAR(clear_module_state->__pyx_codeobj__40);
  Py_CLEAR(clear_module_state->__pyx_codeobj__42);
  Py_CLEAR(clear_module_state->__pyx_codeobj__44);
  Py_CLEAR(clear_module_state->__pyx_codeobj__45);
  Py_CLEAR(clear_module_state->__pyx_codeobj__46);
  Py_CLEAR(clear_module_state->__pyx_codeobj__47);
  Py_CLEAR(clear_module_state->__pyx_codeobj__48);
  Py_CLEAR(clear_module_state->__pyx_codeobj__50);
  return 0;
}
#endif
/* #### Code section: module_state_traverse ### */
#if CYTHON_USE_MODULE_STATE
static int __pyx_m_traverse(PyObject *m, visitproc visit, void *arg) {
  __pyx_mstate *traverse_module_state = __pyx_mstate(m);
  if (!traverse_module_state) return 0;
  Py_VISIT(traverse_module_state->__pyx_d);
  Py_VISIT(traverse_module_state->__pyx_b);
  Py_VISIT(traverse_module_state->__pyx_cython_runtime);
  Py_VISIT(traverse_module_state->__pyx_empty_tuple);
  Py_VISIT(traverse_module_state->__pyx_empty_bytes);
  Py_VISIT(traverse_module_state->__pyx_empty_unicode);
  #ifdef __Pyx_CyFunction_USED
  Py_VISIT(traverse_module_state->__pyx_CyFunctionType);
  #endif
  #ifdef __Pyx_FusedFunction_USED
  Py_VISIT(traverse_module_state->__pyx_FusedFunctionType);
  #endif
  Py_VISIT(traverse_module_state->__pyx_kp_u_Accuracy);
  Py_VISIT(traverse_module_state->__pyx_n_s_ArgumentParser);
  Py_VISIT(traverse_module_state->__pyx_n_s_BowClassifier);
  Py_VISIT(traverse_module_state->__pyx_n_s_BowClassifier___init);
  Py_VISIT(traverse_module_state->__pyx_n_s_BowClassifier_calc_prob);
  Py_VISIT(traverse_module_state->__pyx_n_s_BowClassifier_classify);
  Py_VISIT(traverse_module_state->__pyx_n_s_BowClassifier_train);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Continued_use_of_our_platform_si);
  Py_VISIT(traverse_module_state->__pyx_kp_u_F_score);
  Py_VISIT(traverse_module_state->__pyx_n_s_Fscore);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Lines_flagged_suspicious);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Our_terms_of_service_and_privacy);
  Py_VISIT(traverse_module_state->__pyx_n_s_PdfReader);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Please_select_mode);
  Py_VISIT(traverse_module_state->__pyx_n_s_PorterStemmer);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Precision);
  Py_VISIT(traverse_module_state->__pyx_n_s_PyPDF2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Recall);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Results_for_Bow_classifier);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Results_for_TF_x_IDF_classifier);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_TFIDFCLassifier);
  Py_VISIT(traverse_module_state->__pyx_n_s_TFIDFCLassifier___init);
  Py_VISIT(traverse_module_state->__pyx_n_s_TFIDFCLassifier_calc_TF_IDF);
  Py_VISIT(traverse_module_state->__pyx_n_s_TFIDFCLassifier_classify);
  Py_VISIT(traverse_module_state->__pyx_n_s_TFIDFCLassifier_train);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Testing_Continued_use_of_our_pla);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Testing_Our_terms_of_service_and);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Unnamed_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Unnamed_3);
  Py_VISIT(traverse_module_state->__pyx_kp_u_Unnamed_4);
  Py_VISIT(traverse_module_state->__pyx_n_s_WordCloud);
  Py_VISIT(traverse_module_state->__pyx_kp_u_ZoryaTrace_Trace_AI_generated_co);
  Py_VISIT(traverse_module_state->__pyx_kp_u__10);
  Py_VISIT(traverse_module_state->__pyx_kp_u__13);
  Py_VISIT(traverse_module_state->__pyx_kp_u__15);
  Py_VISIT(traverse_module_state->__pyx_kp_u__16);
  Py_VISIT(traverse_module_state->__pyx_n_s__17);
  Py_VISIT(traverse_module_state->__pyx_n_s__51);
  Py_VISIT(traverse_module_state->__pyx_n_s_accuracy);
  Py_VISIT(traverse_module_state->__pyx_n_s_action);
  Py_VISIT(traverse_module_state->__pyx_n_s_add_argument);
  Py_VISIT(traverse_module_state->__pyx_n_s_argparse);
  Py_VISIT(traverse_module_state->__pyx_n_s_args);
  Py_VISIT(traverse_module_state->__pyx_n_s_asyncio_coroutines);
  Py_VISIT(traverse_module_state->__pyx_n_s_axis);
  Py_VISIT(traverse_module_state->__pyx_kp_u_c);
  Py_VISIT(traverse_module_state->__pyx_n_s_calc_TF_IDF);
  Py_VISIT(traverse_module_state->__pyx_n_s_calc_TF_and_IDF);
  Py_VISIT(traverse_module_state->__pyx_n_s_calc_prob);
  Py_VISIT(traverse_module_state->__pyx_n_s_class_getitem);
  Py_VISIT(traverse_module_state->__pyx_kp_u_classify);
  Py_VISIT(traverse_module_state->__pyx_n_s_classify_2);
  Py_VISIT(traverse_module_state->__pyx_kp_u_classify_text_given_in_inverted);
  Py_VISIT(traverse_module_state->__pyx_n_s_cline_in_traceback);
  Py_VISIT(traverse_module_state->__pyx_n_s_columns);
  Py_VISIT(traverse_module_state->__pyx_n_s_count);
  Py_VISIT(traverse_module_state->__pyx_kp_u_data_csv);
  Py_VISIT(traverse_module_state->__pyx_n_s_description);
  Py_VISIT(traverse_module_state->__pyx_n_s_dict);
  Py_VISIT(traverse_module_state->__pyx_n_s_doc);
  Py_VISIT(traverse_module_state->__pyx_n_s_download);
  Py_VISIT(traverse_module_state->__pyx_n_s_drop);
  Py_VISIT(traverse_module_state->__pyx_n_s_encoding);
  Py_VISIT(traverse_module_state->__pyx_n_u_english);
  Py_VISIT(traverse_module_state->__pyx_n_s_enter);
  Py_VISIT(traverse_module_state->__pyx_n_s_enumerate);
  Py_VISIT(traverse_module_state->__pyx_n_s_exit);
  Py_VISIT(traverse_module_state->__pyx_n_s_extract_text);
  Py_VISIT(traverse_module_state->__pyx_n_s_extract_text_from_pdf);
  Py_VISIT(traverse_module_state->__pyx_kp_u_f);
  Py_VISIT(traverse_module_state->__pyx_n_s_false_neg);
  Py_VISIT(traverse_module_state->__pyx_n_s_false_pos);
  Py_VISIT(traverse_module_state->__pyx_kp_u_file);
  Py_VISIT(traverse_module_state->__pyx_n_s_file_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_get);
  Py_VISIT(traverse_module_state->__pyx_n_s_gram);
  Py_VISIT(traverse_module_state->__pyx_n_s_help);
  Py_VISIT(traverse_module_state->__pyx_n_s_i);
  Py_VISIT(traverse_module_state->__pyx_n_s_idf_neutral);
  Py_VISIT(traverse_module_state->__pyx_n_s_idf_suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_import);
  Py_VISIT(traverse_module_state->__pyx_n_u_index);
  Py_VISIT(traverse_module_state->__pyx_n_s_init);
  Py_VISIT(traverse_module_state->__pyx_n_s_init_subclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_initializing);
  Py_VISIT(traverse_module_state->__pyx_n_s_inplace);
  Py_VISIT(traverse_module_state->__pyx_n_s_is_coroutine);
  Py_VISIT(traverse_module_state->__pyx_n_s_is_suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_keys);
  Py_VISIT(traverse_module_state->__pyx_n_s_kwargs);
  Py_VISIT(traverse_module_state->__pyx_n_u_label);
  Py_VISIT(traverse_module_state->__pyx_n_s_labels);
  Py_VISIT(traverse_module_state->__pyx_n_u_labels);
  Py_VISIT(traverse_module_state->__pyx_n_s_line);
  Py_VISIT(traverse_module_state->__pyx_n_s_lines);
  Py_VISIT(traverse_module_state->__pyx_n_s_loc);
  Py_VISIT(traverse_module_state->__pyx_n_s_log);
  Py_VISIT(traverse_module_state->__pyx_n_s_lower);
  Py_VISIT(traverse_module_state->__pyx_n_s_lower_case);
  Py_VISIT(traverse_module_state->__pyx_n_s_main);
  Py_VISIT(traverse_module_state->__pyx_n_u_main);
  Py_VISIT(traverse_module_state->__pyx_n_s_main_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_map);
  Py_VISIT(traverse_module_state->__pyx_n_s_math);
  Py_VISIT(traverse_module_state->__pyx_n_s_matplotlib);
  Py_VISIT(traverse_module_state->__pyx_n_s_matplotlib_pyplot);
  Py_VISIT(traverse_module_state->__pyx_n_s_message);
  Py_VISIT(traverse_module_state->__pyx_n_u_message);
  Py_VISIT(traverse_module_state->__pyx_n_s_message_processed);
  Py_VISIT(traverse_module_state->__pyx_n_s_metaclass);
  Py_VISIT(traverse_module_state->__pyx_n_s_metrics);
  Py_VISIT(traverse_module_state->__pyx_n_s_module);
  Py_VISIT(traverse_module_state->__pyx_n_s_mro_entries);
  Py_VISIT(traverse_module_state->__pyx_n_s_name);
  Py_VISIT(traverse_module_state->__pyx_n_u_neutral);
  Py_VISIT(traverse_module_state->__pyx_n_s_neutral_terms);
  Py_VISIT(traverse_module_state->__pyx_n_s_neutral_words);
  Py_VISIT(traverse_module_state->__pyx_n_s_nltk);
  Py_VISIT(traverse_module_state->__pyx_n_s_nltk_corpus);
  Py_VISIT(traverse_module_state->__pyx_n_s_nltk_stem);
  Py_VISIT(traverse_module_state->__pyx_n_s_nltk_tokenize);
  Py_VISIT(traverse_module_state->__pyx_n_s_np);
  Py_VISIT(traverse_module_state->__pyx_n_s_number_of_lines);
  Py_VISIT(traverse_module_state->__pyx_n_s_numpy);
  Py_VISIT(traverse_module_state->__pyx_n_s_open);
  Py_VISIT(traverse_module_state->__pyx_n_s_pHam);
  Py_VISIT(traverse_module_state->__pyx_n_s_pSpam);
  Py_VISIT(traverse_module_state->__pyx_n_s_page);
  Py_VISIT(traverse_module_state->__pyx_n_s_pages);
  Py_VISIT(traverse_module_state->__pyx_n_s_pandas);
  Py_VISIT(traverse_module_state->__pyx_n_s_parse_args);
  Py_VISIT(traverse_module_state->__pyx_n_s_parser);
  Py_VISIT(traverse_module_state->__pyx_kp_u_path_to_the_pdf_file_to_be_analy);
  Py_VISIT(traverse_module_state->__pyx_n_s_pd);
  Py_VISIT(traverse_module_state->__pyx_n_s_pdf_file);
  Py_VISIT(traverse_module_state->__pyx_n_s_pdf_reader);
  Py_VISIT(traverse_module_state->__pyx_n_s_pdf_text);
  Py_VISIT(traverse_module_state->__pyx_n_s_plt);
  Py_VISIT(traverse_module_state->__pyx_n_s_pm);
  Py_VISIT(traverse_module_state->__pyx_n_s_precision);
  Py_VISIT(traverse_module_state->__pyx_n_s_predict);
  Py_VISIT(traverse_module_state->__pyx_n_s_predictions);
  Py_VISIT(traverse_module_state->__pyx_n_s_preds_bow);
  Py_VISIT(traverse_module_state->__pyx_n_s_preds_tf_idf);
  Py_VISIT(traverse_module_state->__pyx_n_s_prepare);
  Py_VISIT(traverse_module_state->__pyx_n_s_print);
  Py_VISIT(traverse_module_state->__pyx_n_s_print_help);
  Py_VISIT(traverse_module_state->__pyx_n_s_prob_neutral);
  Py_VISIT(traverse_module_state->__pyx_n_s_prob_neutral_entry);
  Py_VISIT(traverse_module_state->__pyx_n_s_prob_suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_prob_suspicious_entry);
  Py_VISIT(traverse_module_state->__pyx_n_s_process_message);
  Py_VISIT(traverse_module_state->__pyx_n_s_processed_line);
  Py_VISIT(traverse_module_state->__pyx_n_s_processed_message);
  Py_VISIT(traverse_module_state->__pyx_n_u_punkt);
  Py_VISIT(traverse_module_state->__pyx_n_s_pyplot);
  Py_VISIT(traverse_module_state->__pyx_n_s_qualname);
  Py_VISIT(traverse_module_state->__pyx_n_s_random);
  Py_VISIT(traverse_module_state->__pyx_n_s_range);
  Py_VISIT(traverse_module_state->__pyx_n_u_rb);
  Py_VISIT(traverse_module_state->__pyx_n_s_read_csv);
  Py_VISIT(traverse_module_state->__pyx_n_s_recall);
  Py_VISIT(traverse_module_state->__pyx_n_s_rename);
  Py_VISIT(traverse_module_state->__pyx_n_s_reset_index);
  Py_VISIT(traverse_module_state->__pyx_n_s_result);
  Py_VISIT(traverse_module_state->__pyx_n_s_sc_bow);
  Py_VISIT(traverse_module_state->__pyx_n_s_sc_tf_idf);
  Py_VISIT(traverse_module_state->__pyx_n_s_self);
  Py_VISIT(traverse_module_state->__pyx_n_s_set_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_shape);
  Py_VISIT(traverse_module_state->__pyx_n_s_spec);
  Py_VISIT(traverse_module_state->__pyx_n_s_split);
  Py_VISIT(traverse_module_state->__pyx_n_s_stem);
  Py_VISIT(traverse_module_state->__pyx_n_s_stemmer);
  Py_VISIT(traverse_module_state->__pyx_n_s_stop_words);
  Py_VISIT(traverse_module_state->__pyx_n_s_stopwords);
  Py_VISIT(traverse_module_state->__pyx_n_u_stopwords);
  Py_VISIT(traverse_module_state->__pyx_n_u_store_true);
  Py_VISIT(traverse_module_state->__pyx_n_s_sum_tf_idf_neutral);
  Py_VISIT(traverse_module_state->__pyx_n_s_sum_tf_idf_suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_super);
  Py_VISIT(traverse_module_state->__pyx_n_u_suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_line);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_lines);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms_classifier);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms_classifier___in);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms_classifier_calc);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms_classifier_clas);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms_classifier_pred);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_terms_classifier_trai);
  Py_VISIT(traverse_module_state->__pyx_n_s_suspicious_words);
  Py_VISIT(traverse_module_state->__pyx_n_s_sw);
  Py_VISIT(traverse_module_state->__pyx_kp_u_t);
  Py_VISIT(traverse_module_state->__pyx_n_s_terms);
  Py_VISIT(traverse_module_state->__pyx_kp_u_test);
  Py_VISIT(traverse_module_state->__pyx_n_s_testData);
  Py_VISIT(traverse_module_state->__pyx_n_s_testIndex);
  Py_VISIT(traverse_module_state->__pyx_n_s_test_2);
  Py_VISIT(traverse_module_state->__pyx_n_s_test_3);
  Py_VISIT(traverse_module_state->__pyx_n_s_text);
  Py_VISIT(traverse_module_state->__pyx_n_s_tf_neutral);
  Py_VISIT(traverse_module_state->__pyx_n_s_tf_suspicious);
  Py_VISIT(traverse_module_state->__pyx_n_s_total_terms);
  Py_VISIT(traverse_module_state->__pyx_n_s_train);
  Py_VISIT(traverse_module_state->__pyx_n_s_trainData);
  Py_VISIT(traverse_module_state->__pyx_n_s_trainIndex);
  Py_VISIT(traverse_module_state->__pyx_kp_u_train_and_test_the_algorithm_on);
  Py_VISIT(traverse_module_state->__pyx_n_s_true_neg);
  Py_VISIT(traverse_module_state->__pyx_n_s_true_pos);
  Py_VISIT(traverse_module_state->__pyx_n_s_type);
  Py_VISIT(traverse_module_state->__pyx_n_s_uniform);
  Py_VISIT(traverse_module_state->__pyx_kp_u_utf_8);
  Py_VISIT(traverse_module_state->__pyx_n_u_v1);
  Py_VISIT(traverse_module_state->__pyx_n_u_v2);
  Py_VISIT(traverse_module_state->__pyx_n_s_value_counts);
  Py_VISIT(traverse_module_state->__pyx_n_s_w);
  Py_VISIT(traverse_module_state->__pyx_n_s_word);
  Py_VISIT(traverse_module_state->__pyx_n_s_word_tokenize);
  Py_VISIT(traverse_module_state->__pyx_n_s_wordcloud);
  Py_VISIT(traverse_module_state->__pyx_n_s_words);
  Py_VISIT(traverse_module_state->__pyx_n_s_zorya);
  Py_VISIT(traverse_module_state->__pyx_kp_s_zorya_py);
  Py_VISIT(traverse_module_state->__pyx_float_0_75);
  Py_VISIT(traverse_module_state->__pyx_int_0);
  Py_VISIT(traverse_module_state->__pyx_int_1);
  Py_VISIT(traverse_module_state->__pyx_int_2);
  Py_VISIT(traverse_module_state->__pyx_tuple_);
  Py_VISIT(traverse_module_state->__pyx_tuple__2);
  Py_VISIT(traverse_module_state->__pyx_tuple__3);
  Py_VISIT(traverse_module_state->__pyx_tuple__4);
  Py_VISIT(traverse_module_state->__pyx_tuple__5);
  Py_VISIT(traverse_module_state->__pyx_tuple__6);
  Py_VISIT(traverse_module_state->__pyx_tuple__7);
  Py_VISIT(traverse_module_state->__pyx_tuple__8);
  Py_VISIT(traverse_module_state->__pyx_tuple__9);
  Py_VISIT(traverse_module_state->__pyx_tuple__11);
  Py_VISIT(traverse_module_state->__pyx_tuple__12);
  Py_VISIT(traverse_module_state->__pyx_tuple__14);
  Py_VISIT(traverse_module_state->__pyx_tuple__18);
  Py_VISIT(traverse_module_state->__pyx_tuple__19);
  Py_VISIT(traverse_module_state->__pyx_tuple__20);
  Py_VISIT(traverse_module_state->__pyx_tuple__21);
  Py_VISIT(traverse_module_state->__pyx_tuple__23);
  Py_VISIT(traverse_module_state->__pyx_tuple__25);
  Py_VISIT(traverse_module_state->__pyx_tuple__27);
  Py_VISIT(traverse_module_state->__pyx_tuple__28);
  Py_VISIT(traverse_module_state->__pyx_tuple__30);
  Py_VISIT(traverse_module_state->__pyx_tuple__32);
  Py_VISIT(traverse_module_state->__pyx_tuple__34);
  Py_VISIT(traverse_module_state->__pyx_tuple__36);
  Py_VISIT(traverse_module_state->__pyx_tuple__38);
  Py_VISIT(traverse_module_state->__pyx_tuple__41);
  Py_VISIT(traverse_module_state->__pyx_tuple__43);
  Py_VISIT(traverse_module_state->__pyx_tuple__49);
  Py_VISIT(traverse_module_state->__pyx_codeobj__22);
  Py_VISIT(traverse_module_state->__pyx_codeobj__24);
  Py_VISIT(traverse_module_state->__pyx_codeobj__26);
  Py_VISIT(traverse_module_state->__pyx_codeobj__29);
  Py_VISIT(traverse_module_state->__pyx_codeobj__31);
  Py_VISIT(traverse_module_state->__pyx_codeobj__33);
  Py_VISIT(traverse_module_state->__pyx_codeobj__35);
  Py_VISIT(traverse_module_state->__pyx_codeobj__37);
  Py_VISIT(traverse_module_state->__pyx_codeobj__39);
  Py_VISIT(traverse_module_state->__pyx_codeobj__40);
  Py_VISIT(traverse_module_state->__pyx_codeobj__42);
  Py_VISIT(traverse_module_state->__pyx_codeobj__44);
  Py_VISIT(traverse_module_state->__pyx_codeobj__45);
  Py_VISIT(traverse_module_state->__pyx_codeobj__46);
  Py_VISIT(traverse_module_state->__pyx_codeobj__47);
  Py_VISIT(traverse_module_state->__pyx_codeobj__48);
  Py_VISIT(traverse_module_state->__pyx_codeobj__50);
  return 0;
}
#endif
/* #### Code section: module_state_defines ### */
#define __pyx_d __pyx_mstate_global->__pyx_d
#define __pyx_b __pyx_mstate_global->__pyx_b
#define __pyx_cython_runtime __pyx_mstate_global->__pyx_cython_runtime
#define __pyx_empty_tuple __pyx_mstate_global->__pyx_empty_tuple
#define __pyx_empty_bytes __pyx_mstate_global->__pyx_empty_bytes
#define __pyx_empty_unicode __pyx_mstate_global->__pyx_empty_unicode
#ifdef __Pyx_CyFunction_USED
#define __pyx_CyFunctionType __pyx_mstate_global->__pyx_CyFunctionType
#endif
#ifdef __Pyx_FusedFunction_USED
#define __pyx_FusedFunctionType __pyx_mstate_global->__pyx_FusedFunctionType
#endif
#ifdef __Pyx_Generator_USED
#define __pyx_GeneratorType __pyx_mstate_global->__pyx_GeneratorType
#endif
#ifdef __Pyx_IterableCoroutine_USED
#define __pyx_IterableCoroutineType __pyx_mstate_global->__pyx_IterableCoroutineType
#endif
#ifdef __Pyx_Coroutine_USED
#define __pyx_CoroutineAwaitType __pyx_mstate_global->__pyx_CoroutineAwaitType
#endif
#ifdef __Pyx_Coroutine_USED
#define __pyx_CoroutineType __pyx_mstate_global->__pyx_CoroutineType
#endif
#if CYTHON_USE_MODULE_STATE
#endif
#define __pyx_kp_u_Accuracy __pyx_mstate_global->__pyx_kp_u_Accuracy
#define __pyx_n_s_ArgumentParser __pyx_mstate_global->__pyx_n_s_ArgumentParser
#define __pyx_n_s_BowClassifier __pyx_mstate_global->__pyx_n_s_BowClassifier
#define __pyx_n_s_BowClassifier___init __pyx_mstate_global->__pyx_n_s_BowClassifier___init
#define __pyx_n_s_BowClassifier_calc_prob __pyx_mstate_global->__pyx_n_s_BowClassifier_calc_prob
#define __pyx_n_s_BowClassifier_classify __pyx_mstate_global->__pyx_n_s_BowClassifier_classify
#define __pyx_n_s_BowClassifier_train __pyx_mstate_global->__pyx_n_s_BowClassifier_train
#define __pyx_kp_u_Continued_use_of_our_platform_si __pyx_mstate_global->__pyx_kp_u_Continued_use_of_our_platform_si
#define __pyx_kp_u_F_score __pyx_mstate_global->__pyx_kp_u_F_score
#define __pyx_n_s_Fscore __pyx_mstate_global->__pyx_n_s_Fscore
#define __pyx_kp_u_Lines_flagged_suspicious __pyx_mstate_global->__pyx_kp_u_Lines_flagged_suspicious
#define __pyx_kp_u_Our_terms_of_service_and_privacy __pyx_mstate_global->__pyx_kp_u_Our_terms_of_service_and_privacy
#define __pyx_n_s_PdfReader __pyx_mstate_global->__pyx_n_s_PdfReader
#define __pyx_kp_u_Please_select_mode __pyx_mstate_global->__pyx_kp_u_Please_select_mode
#define __pyx_n_s_PorterStemmer __pyx_mstate_global->__pyx_n_s_PorterStemmer
#define __pyx_kp_u_Precision __pyx_mstate_global->__pyx_kp_u_Precision
#define __pyx_n_s_PyPDF2 __pyx_mstate_global->__pyx_n_s_PyPDF2
#define __pyx_kp_u_Recall __pyx_mstate_global->__pyx_kp_u_Recall
#define __pyx_kp_u_Results_for_Bow_classifier __pyx_mstate_global->__pyx_kp_u_Results_for_Bow_classifier
#define __pyx_kp_u_Results_for_TF_x_IDF_classifier __pyx_mstate_global->__pyx_kp_u_Results_for_TF_x_IDF_classifier
#define __pyx_kp_u_Suspicious __pyx_mstate_global->__pyx_kp_u_Suspicious
#define __pyx_n_s_TFIDFCLassifier __pyx_mstate_global->__pyx_n_s_TFIDFCLassifier
#define __pyx_n_s_TFIDFCLassifier___init __pyx_mstate_global->__pyx_n_s_TFIDFCLassifier___init
#define __pyx_n_s_TFIDFCLassifier_calc_TF_IDF __pyx_mstate_global->__pyx_n_s_TFIDFCLassifier_calc_TF_IDF
#define __pyx_n_s_TFIDFCLassifier_classify __pyx_mstate_global->__pyx_n_s_TFIDFCLassifier_classify
#define __pyx_n_s_TFIDFCLassifier_train __pyx_mstate_global->__pyx_n_s_TFIDFCLassifier_train
#define __pyx_kp_u_Testing_Continued_use_of_our_pla __pyx_mstate_global->__pyx_kp_u_Testing_Continued_use_of_our_pla
#define __pyx_kp_u_Testing_Our_terms_of_service_and __pyx_mstate_global->__pyx_kp_u_Testing_Our_terms_of_service_and
#define __pyx_kp_u_Unnamed_2 __pyx_mstate_global->__pyx_kp_u_Unnamed_2
#define __pyx_kp_u_Unnamed_3 __pyx_mstate_global->__pyx_kp_u_Unnamed_3
#define __pyx_kp_u_Unnamed_4 __pyx_mstate_global->__pyx_kp_u_Unnamed_4
#define __pyx_n_s_WordCloud __pyx_mstate_global->__pyx_n_s_WordCloud
#define __pyx_kp_u_ZoryaTrace_Trace_AI_generated_co __pyx_mstate_global->__pyx_kp_u_ZoryaTrace_Trace_AI_generated_co
#define __pyx_kp_u__10 __pyx_mstate_global->__pyx_kp_u__10
#define __pyx_kp_u__13 __pyx_mstate_global->__pyx_kp_u__13
#define __pyx_kp_u__15 __pyx_mstate_global->__pyx_kp_u__15
#define __pyx_kp_u__16 __pyx_mstate_global->__pyx_kp_u__16
#define __pyx_n_s__17 __pyx_mstate_global->__pyx_n_s__17
#define __pyx_n_s__51 __pyx_mstate_global->__pyx_n_s__51
#define __pyx_n_s_accuracy __pyx_mstate_global->__pyx_n_s_accuracy
#define __pyx_n_s_action __pyx_mstate_global->__pyx_n_s_action
#define __pyx_n_s_add_argument __pyx_mstate_global->__pyx_n_s_add_argument
#define __pyx_n_s_argparse __pyx_mstate_global->__pyx_n_s_argparse
#define __pyx_n_s_args __pyx_mstate_global->__pyx_n_s_args
#define __pyx_n_s_asyncio_coroutines __pyx_mstate_global->__pyx_n_s_asyncio_coroutines
#define __pyx_n_s_axis __pyx_mstate_global->__pyx_n_s_axis
#define __pyx_kp_u_c __pyx_mstate_global->__pyx_kp_u_c
#define __pyx_n_s_calc_TF_IDF __pyx_mstate_global->__pyx_n_s_calc_TF_IDF
#define __pyx_n_s_calc_TF_and_IDF __pyx_mstate_global->__pyx_n_s_calc_TF_and_IDF
#define __pyx_n_s_calc_prob __pyx_mstate_global->__pyx_n_s_calc_prob
#define __pyx_n_s_class_getitem __pyx_mstate_global->__pyx_n_s_class_getitem
#define __pyx_kp_u_classify __pyx_mstate_global->__pyx_kp_u_classify
#define __pyx_n_s_classify_2 __pyx_mstate_global->__pyx_n_s_classify_2
#define __pyx_kp_u_classify_text_given_in_inverted __pyx_mstate_global->__pyx_kp_u_classify_text_given_in_inverted
#define __pyx_n_s_cline_in_traceback __pyx_mstate_global->__pyx_n_s_cline_in_traceback
#define __pyx_n_s_columns __pyx_mstate_global->__pyx_n_s_columns
#define __pyx_n_s_count __pyx_mstate_global->__pyx_n_s_count
#define __pyx_kp_u_data_csv __pyx_mstate_global->__pyx_kp_u_data_csv
#define __pyx_n_s_description __pyx_mstate_global->__pyx_n_s_description
#define __pyx_n_s_dict __pyx_mstate_global->__pyx_n_s_dict
#define __pyx_n_s_doc __pyx_mstate_global->__pyx_n_s_doc
#define __pyx_n_s_download __pyx_mstate_global->__pyx_n_s_download
#define __pyx_n_s_drop __pyx_mstate_global->__pyx_n_s_drop
#define __pyx_n_s_encoding __pyx_mstate_global->__pyx_n_s_encoding
#define __pyx_n_u_english __pyx_mstate_global->__pyx_n_u_english
#define __pyx_n_s_enter __pyx_mstate_global->__pyx_n_s_enter
#define __pyx_n_s_enumerate __pyx_mstate_global->__pyx_n_s_enumerate
#define __pyx_n_s_exit __pyx_mstate_global->__pyx_n_s_exit
#define __pyx_n_s_extract_text __pyx_mstate_global->__pyx_n_s_extract_text
#define __pyx_n_s_extract_text_from_pdf __pyx_mstate_global->__pyx_n_s_extract_text_from_pdf
#define __pyx_kp_u_f __pyx_mstate_global->__pyx_kp_u_f
#define __pyx_n_s_false_neg __pyx_mstate_global->__pyx_n_s_false_neg
#define __pyx_n_s_false_pos __pyx_mstate_global->__pyx_n_s_false_pos
#define __pyx_kp_u_file __pyx_mstate_global->__pyx_kp_u_file
#define __pyx_n_s_file_2 __pyx_mstate_global->__pyx_n_s_file_2
#define __pyx_n_s_get __pyx_mstate_global->__pyx_n_s_get
#define __pyx_n_s_gram __pyx_mstate_global->__pyx_n_s_gram
#define __pyx_n_s_help __pyx_mstate_global->__pyx_n_s_help
#define __pyx_n_s_i __pyx_mstate_global->__pyx_n_s_i
#define __pyx_n_s_idf_neutral __pyx_mstate_global->__pyx_n_s_idf_neutral
#define __pyx_n_s_idf_suspicious __pyx_mstate_global->__pyx_n_s_idf_suspicious
#define __pyx_n_s_import __pyx_mstate_global->__pyx_n_s_import
#define __pyx_n_u_index __pyx_mstate_global->__pyx_n_u_index
#define __pyx_n_s_init __pyx_mstate_global->__pyx_n_s_init
#define __pyx_n_s_init_subclass __pyx_mstate_global->__pyx_n_s_init_subclass
#define __pyx_n_s_initializing __pyx_mstate_global->__pyx_n_s_initializing
#define __pyx_n_s_inplace __pyx_mstate_global->__pyx_n_s_inplace
#define __pyx_n_s_is_coroutine __pyx_mstate_global->__pyx_n_s_is_coroutine
#define __pyx_n_s_is_suspicious __pyx_mstate_global->__pyx_n_s_is_suspicious
#define __pyx_n_s_keys __pyx_mstate_global->__pyx_n_s_keys
#define __pyx_n_s_kwargs __pyx_mstate_global->__pyx_n_s_kwargs
#define __pyx_n_u_label __pyx_mstate_global->__pyx_n_u_label
#define __pyx_n_s_labels __pyx_mstate_global->__pyx_n_s_labels
#define __pyx_n_u_labels __pyx_mstate_global->__pyx_n_u_labels
#define __pyx_n_s_line __pyx_mstate_global->__pyx_n_s_line
#define __pyx_n_s_lines __pyx_mstate_global->__pyx_n_s_lines
#define __pyx_n_s_loc __pyx_mstate_global->__pyx_n_s_loc
#define __pyx_n_s_log __pyx_mstate_global->__pyx_n_s_log
#define __pyx_n_s_lower __pyx_mstate_global->__pyx_n_s_lower
#define __pyx_n_s_lower_case __pyx_mstate_global->__pyx_n_s_lower_case
#define __pyx_n_s_main __pyx_mstate_global->__pyx_n_s_main
#define __pyx_n_u_main __pyx_mstate_global->__pyx_n_u_main
#define __pyx_n_s_main_2 __pyx_mstate_global->__pyx_n_s_main_2
#define __pyx_n_s_map __pyx_mstate_global->__pyx_n_s_map
#define __pyx_n_s_math __pyx_mstate_global->__pyx_n_s_math
#define __pyx_n_s_matplotlib __pyx_mstate_global->__pyx_n_s_matplotlib
#define __pyx_n_s_matplotlib_pyplot __pyx_mstate_global->__pyx_n_s_matplotlib_pyplot
#define __pyx_n_s_message __pyx_mstate_global->__pyx_n_s_message
#define __pyx_n_u_message __pyx_mstate_global->__pyx_n_u_message
#define __pyx_n_s_message_processed __pyx_mstate_global->__pyx_n_s_message_processed
#define __pyx_n_s_metaclass __pyx_mstate_global->__pyx_n_s_metaclass
#define __pyx_n_s_metrics __pyx_mstate_global->__pyx_n_s_metrics
#define __pyx_n_s_module __pyx_mstate_global->__pyx_n_s_module
#define __pyx_n_s_mro_entries __pyx_mstate_global->__pyx_n_s_mro_entries
#define __pyx_n_s_name __pyx_mstate_global->__pyx_n_s_name
#define __pyx_n_u_neutral __pyx_mstate_global->__pyx_n_u_neutral
#define __pyx_n_s_neutral_terms __pyx_mstate_global->__pyx_n_s_neutral_terms
#define __pyx_n_s_neutral_words __pyx_mstate_global->__pyx_n_s_neutral_words
#define __pyx_n_s_nltk __pyx_mstate_global->__pyx_n_s_nltk
#define __pyx_n_s_nltk_corpus __pyx_mstate_global->__pyx_n_s_nltk_corpus
#define __pyx_n_s_nltk_stem __pyx_mstate_global->__pyx_n_s_nltk_stem
#define __pyx_n_s_nltk_tokenize __pyx_mstate_global->__pyx_n_s_nltk_tokenize
#define __pyx_n_s_np __pyx_mstate_global->__pyx_n_s_np
#define __pyx_n_s_number_of_lines __pyx_mstate_global->__pyx_n_s_number_of_lines
#define __pyx_n_s_numpy __pyx_mstate_global->__pyx_n_s_numpy
#define __pyx_n_s_open __pyx_mstate_global->__pyx_n_s_open
#define __pyx_n_s_pHam __pyx_mstate_global->__pyx_n_s_pHam
#define __pyx_n_s_pSpam __pyx_mstate_global->__pyx_n_s_pSpam
#define __pyx_n_s_page __pyx_mstate_global->__pyx_n_s_page
#define __pyx_n_s_pages __pyx_mstate_global->__pyx_n_s_pages
#define __pyx_n_s_pandas __pyx_mstate_global->__pyx_n_s_pandas
#define __pyx_n_s_parse_args __pyx_mstate_global->__pyx_n_s_parse_args
#define __pyx_n_s_parser __pyx_mstate_global->__pyx_n_s_parser
#define __pyx_kp_u_path_to_the_pdf_file_to_be_analy __pyx_mstate_global->__pyx_kp_u_path_to_the_pdf_file_to_be_analy
#define __pyx_n_s_pd __pyx_mstate_global->__pyx_n_s_pd
#define __pyx_n_s_pdf_file __pyx_mstate_global->__pyx_n_s_pdf_file
#define __pyx_n_s_pdf_reader __pyx_mstate_global->__pyx_n_s_pdf_reader
#define __pyx_n_s_pdf_text __pyx_mstate_global->__pyx_n_s_pdf_text
#define __pyx_n_s_plt __pyx_mstate_global->__pyx_n_s_plt
#define __pyx_n_s_pm __pyx_mstate_global->__pyx_n_s_pm
#define __pyx_n_s_precision __pyx_mstate_global->__pyx_n_s_precision
#define __pyx_n_s_predict __pyx_mstate_global->__pyx_n_s_predict
#define __pyx_n_s_predictions __pyx_mstate_global->__pyx_n_s_predictions
#define __pyx_n_s_preds_bow __pyx_mstate_global->__pyx_n_s_preds_bow
#define __pyx_n_s_preds_tf_idf __pyx_mstate_global->__pyx_n_s_preds_tf_idf
#define __pyx_n_s_prepare __pyx_mstate_global->__pyx_n_s_prepare
#define __pyx_n_s_print __pyx_mstate_global->__pyx_n_s_print
#define __pyx_n_s_print_help __pyx_mstate_global->__pyx_n_s_print_help
#define __pyx_n_s_prob_neutral __pyx_mstate_global->__pyx_n_s_prob_neutral
#define __pyx_n_s_prob_neutral_entry __pyx_mstate_global->__pyx_n_s_prob_neutral_entry
#define __pyx_n_s_prob_suspicious __pyx_mstate_global->__pyx_n_s_prob_suspicious
#define __pyx_n_s_prob_suspicious_entry __pyx_mstate_global->__pyx_n_s_prob_suspicious_entry
#define __pyx_n_s_process_message __pyx_mstate_global->__pyx_n_s_process_message
#define __pyx_n_s_processed_line __pyx_mstate_global->__pyx_n_s_processed_line
#define __pyx_n_s_processed_message __pyx_mstate_global->__pyx_n_s_processed_message
#define __pyx_n_u_punkt __pyx_mstate_global->__pyx_n_u_punkt
#define __pyx_n_s_pyplot __pyx_mstate_global->__pyx_n_s_pyplot
#define __pyx_n_s_qualname __pyx_mstate_global->__pyx_n_s_qualname
#define __pyx_n_s_random __pyx_mstate_global->__pyx_n_s_random
#define __pyx_n_s_range __pyx_mstate_global->__pyx_n_s_range
#define __pyx_n_u_rb __pyx_mstate_global->__pyx_n_u_rb
#define __pyx_n_s_read_csv __pyx_mstate_global->__pyx_n_s_read_csv
#define __pyx_n_s_recall __pyx_mstate_global->__pyx_n_s_recall
#define __pyx_n_s_rename __pyx_mstate_global->__pyx_n_s_rename
#define __pyx_n_s_reset_index __pyx_mstate_global->__pyx_n_s_reset_index
#define __pyx_n_s_result __pyx_mstate_global->__pyx_n_s_result
#define __pyx_n_s_sc_bow __pyx_mstate_global->__pyx_n_s_sc_bow
#define __pyx_n_s_sc_tf_idf __pyx_mstate_global->__pyx_n_s_sc_tf_idf
#define __pyx_n_s_self __pyx_mstate_global->__pyx_n_s_self
#define __pyx_n_s_set_name __pyx_mstate_global->__pyx_n_s_set_name
#define __pyx_n_s_shape __pyx_mstate_global->__pyx_n_s_shape
#define __pyx_n_s_spec __pyx_mstate_global->__pyx_n_s_spec
#define __pyx_n_s_split __pyx_mstate_global->__pyx_n_s_split
#define __pyx_n_s_stem __pyx_mstate_global->__pyx_n_s_stem
#define __pyx_n_s_stemmer __pyx_mstate_global->__pyx_n_s_stemmer
#define __pyx_n_s_stop_words __pyx_mstate_global->__pyx_n_s_stop_words
#define __pyx_n_s_stopwords __pyx_mstate_global->__pyx_n_s_stopwords
#define __pyx_n_u_stopwords __pyx_mstate_global->__pyx_n_u_stopwords
#define __pyx_n_u_store_true __pyx_mstate_global->__pyx_n_u_store_true
#define __pyx_n_s_sum_tf_idf_neutral __pyx_mstate_global->__pyx_n_s_sum_tf_idf_neutral
#define __pyx_n_s_sum_tf_idf_suspicious __pyx_mstate_global->__pyx_n_s_sum_tf_idf_suspicious
#define __pyx_n_s_super __pyx_mstate_global->__pyx_n_s_super
#define __pyx_n_u_suspicious __pyx_mstate_global->__pyx_n_u_suspicious
#define __pyx_n_s_suspicious_line __pyx_mstate_global->__pyx_n_s_suspicious_line
#define __pyx_n_s_suspicious_lines __pyx_mstate_global->__pyx_n_s_suspicious_lines
#define __pyx_n_s_suspicious_terms __pyx_mstate_global->__pyx_n_s_suspicious_terms
#define __pyx_n_s_suspicious_terms_classifier __pyx_mstate_global->__pyx_n_s_suspicious_terms_classifier
#define __pyx_n_s_suspicious_terms_classifier___in __pyx_mstate_global->__pyx_n_s_suspicious_terms_classifier___in
#define __pyx_n_s_suspicious_terms_classifier_calc __pyx_mstate_global->__pyx_n_s_suspicious_terms_classifier_calc
#define __pyx_n_s_suspicious_terms_classifier_clas __pyx_mstate_global->__pyx_n_s_suspicious_terms_classifier_clas
#define __pyx_n_s_suspicious_terms_classifier_pred __pyx_mstate_global->__pyx_n_s_suspicious_terms_classifier_pred
#define __pyx_n_s_suspicious_terms_classifier_trai __pyx_mstate_global->__pyx_n_s_suspicious_terms_classifier_trai
#define __pyx_n_s_suspicious_words __pyx_mstate_global->__pyx_n_s_suspicious_words
#define __pyx_n_s_sw __pyx_mstate_global->__pyx_n_s_sw
#define __pyx_kp_u_t __pyx_mstate_global->__pyx_kp_u_t
#define __pyx_n_s_terms __pyx_mstate_global->__pyx_n_s_terms
#define __pyx_kp_u_test __pyx_mstate_global->__pyx_kp_u_test
#define __pyx_n_s_testData __pyx_mstate_global->__pyx_n_s_testData
#define __pyx_n_s_testIndex __pyx_mstate_global->__pyx_n_s_testIndex
#define __pyx_n_s_test_2 __pyx_mstate_global->__pyx_n_s_test_2
#define __pyx_n_s_test_3 __pyx_mstate_global->__pyx_n_s_test_3
#define __pyx_n_s_text __pyx_mstate_global->__pyx_n_s_text
#define __pyx_n_s_tf_neutral __pyx_mstate_global->__pyx_n_s_tf_neutral
#define __pyx_n_s_tf_suspicious __pyx_mstate_global->__pyx_n_s_tf_suspicious
#define __pyx_n_s_total_terms __pyx_mstate_global->__pyx_n_s_total_terms
#define __pyx_n_s_train __pyx_mstate_global->__pyx_n_s_train
#define __pyx_n_s_trainData __pyx_mstate_global->__pyx_n_s_trainData
#define __pyx_n_s_trainIndex __pyx_mstate_global->__pyx_n_s_trainIndex
#define __pyx_kp_u_train_and_test_the_algorithm_on __pyx_mstate_global->__pyx_kp_u_train_and_test_the_algorithm_on
#define __pyx_n_s_true_neg __pyx_mstate_global->__pyx_n_s_true_neg
#define __pyx_n_s_true_pos __pyx_mstate_global->__pyx_n_s_true_pos
#define __pyx_n_s_type __pyx_mstate_global->__pyx_n_s_type
#define __pyx_n_s_uniform __pyx_mstate_global->__pyx_n_s_uniform
#define __pyx_kp_u_utf_8 __pyx_mstate_global->__pyx_kp_u_utf_8
#define __pyx_n_u_v1 __pyx_mstate_global->__pyx_n_u_v1
#define __pyx_n_u_v2 __pyx_mstate_global->__pyx_n_u_v2
#define __pyx_n_s_value_counts __pyx_mstate_global->__pyx_n_s_value_counts
#define __pyx_n_s_w __pyx_mstate_global->__pyx_n_s_w
#define __pyx_n_s_word __pyx_mstate_global->__pyx_n_s_word
#define __pyx_n_s_word_tokenize __pyx_mstate_global->__pyx_n_s_word_tokenize
#define __pyx_n_s_wordcloud __pyx_mstate_global->__pyx_n_s_wordcloud
#define __pyx_n_s_words __pyx_mstate_global->__pyx_n_s_words
#define __pyx_n_s_zorya __pyx_mstate_global->__pyx_n_s_zorya
#define __pyx_kp_s_zorya_py __pyx_mstate_global->__pyx_kp_s_zorya_py
#define __pyx_float_0_75 __pyx_mstate_global->__pyx_float_0_75
#define __pyx_int_0 __pyx_mstate_global->__pyx_int_0
#define __pyx_int_1 __pyx_mstate_global->__pyx_int_1
#define __pyx_int_2 __pyx_mstate_global->__pyx_int_2
#define __pyx_tuple_ __pyx_mstate_global->__pyx_tuple_
#define __pyx_tuple__2 __pyx_mstate_global->__pyx_tuple__2
#define __pyx_tuple__3 __pyx_mstate_global->__pyx_tuple__3
#define __pyx_tuple__4 __pyx_mstate_global->__pyx_tuple__4
#define __pyx_tuple__5 __pyx_mstate_global->__pyx_tuple__5
#define __pyx_tuple__6 __pyx_mstate_global->__pyx_tuple__6
#define __pyx_tuple__7 __pyx_mstate_global->__pyx_tuple__7
#define __pyx_tuple__8 __pyx_mstate_global->__pyx_tuple__8
#define __pyx_tuple__9 __pyx_mstate_global->__pyx_tuple__9
#define __pyx_tuple__11 __pyx_mstate_global->__pyx_tuple__11
#define __pyx_tuple__12 __pyx_mstate_global->__pyx_tuple__12
#define __pyx_tuple__14 __pyx_mstate_global->__pyx_tuple__14
#define __pyx_tuple__18 __pyx_mstate_global->__pyx_tuple__18
#define __pyx_tuple__19 __pyx_mstate_global->__pyx_tuple__19
#define __pyx_tuple__20 __pyx_mstate_global->__pyx_tuple__20
#define __pyx_tuple__21 __pyx_mstate_global->__pyx_tuple__21
#define __pyx_tuple__23 __pyx_mstate_global->__pyx_tuple__23
#define __pyx_tuple__25 __pyx_mstate_global->__pyx_tuple__25
#define __pyx_tuple__27 __pyx_mstate_global->__pyx_tuple__27
#define __pyx_tuple__28 __pyx_mstate_global->__pyx_tuple__28
#define __pyx_tuple__30 __pyx_mstate_global->__pyx_tuple__30
#define __pyx_tuple__32 __pyx_mstate_global->__pyx_tuple__32
#define __pyx_tuple__34 __pyx_mstate_global->__pyx_tuple__34
#define __pyx_tuple__36 __pyx_mstate_global->__pyx_tuple__36
#define __pyx_tuple__38 __pyx_mstate_global->__pyx_tuple__38
#define __pyx_tuple__41 __pyx_mstate_global->__pyx_tuple__41
#define __pyx_tuple__43 __pyx_mstate_global->__pyx_tuple__43
#define __pyx_tuple__49 __pyx_mstate_global->__pyx_tuple__49
#define __pyx_codeobj__22 __pyx_mstate_global->__pyx_codeobj__22
#define __pyx_codeobj__24 __pyx_mstate_global->__pyx_codeobj__24
#define __pyx_codeobj__26 __pyx_mstate_global->__pyx_codeobj__26
#define __pyx_codeobj__29 __pyx_mstate_global->__pyx_codeobj__29
#define __pyx_codeobj__31 __pyx_mstate_global->__pyx_codeobj__31
#define __pyx_codeobj__33 __pyx_mstate_global->__pyx_codeobj__33
#define __pyx_codeobj__35 __pyx_mstate_global->__pyx_codeobj__35
#define __pyx_codeobj__37 __pyx_mstate_global->__pyx_codeobj__37
#define __pyx_codeobj__39 __pyx_mstate_global->__pyx_codeobj__39
#define __pyx_codeobj__40 __pyx_mstate_global->__pyx_codeobj__40
#define __pyx_codeobj__42 __pyx_mstate_global->__pyx_codeobj__42
#define __pyx_codeobj__44 __pyx_mstate_global->__pyx_codeobj__44
#define __pyx_codeobj__45 __pyx_mstate_global->__pyx_codeobj__45
#define __pyx_codeobj__46 __pyx_mstate_global->__pyx_codeobj__46
#define __pyx_codeobj__47 __pyx_mstate_global->__pyx_codeobj__47
#define __pyx_codeobj__48 __pyx_mstate_global->__pyx_codeobj__48
#define __pyx_codeobj__50 __pyx_mstate_global->__pyx_codeobj__50
/* #### Code section: module_code ### */

/* "zorya.py":17
 * 
 * 
 * def main():             # <<<<<<<<<<<<<<
 *     #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
 *     suspicious_lines = []
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_1main(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_1main = {"main", (PyCFunction)__pyx_pw_5zorya_1main, METH_NOARGS, 0};
static PyObject *__pyx_pw_5zorya_1main(PyObject *__pyx_self, CYTHON_UNUSED PyObject *unused) {
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("main (wrapper)", 0);
  __pyx_kwvalues = __Pyx_KwValues_VARARGS(__pyx_args, __pyx_nargs);
  __pyx_r = __pyx_pf_5zorya_main(__pyx_self);

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_main(CYTHON_UNUSED PyObject *__pyx_self) {
  PyObject *__pyx_v_suspicious_lines = NULL;
  PyObject *__pyx_v_sc_tf_idf = NULL;
  PyObject *__pyx_v_parser = NULL;
  PyObject *__pyx_v_args = NULL;
  PyObject *__pyx_v_terms = NULL;
  PyObject *__pyx_v_trainIndex = NULL;
  PyObject *__pyx_v_testIndex = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_trainData = NULL;
  PyObject *__pyx_v_testData = NULL;
  PyObject *__pyx_v_preds_tf_idf = NULL;
  PyObject *__pyx_v_sc_bow = NULL;
  PyObject *__pyx_v_preds_bow = NULL;
  PyObject *__pyx_v_pm = NULL;
  PyObject *__pyx_v_pdf_text = NULL;
  PyObject *__pyx_v_lines = NULL;
  PyObject *__pyx_v_line = NULL;
  PyObject *__pyx_v_processed_line = NULL;
  PyObject *__pyx_v_is_suspicious = NULL;
  PyObject *__pyx_v_suspicious_line = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  unsigned int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  int __pyx_t_8;
  int __pyx_t_9;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("main", 1);

  /* "zorya.py":19
 * def main():
 *     #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
 *     suspicious_lines = []             # <<<<<<<<<<<<<<
 *     sc_tf_idf = None
 *     #Result given by using the command without arguments.
 */
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_suspicious_lines = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

  /* "zorya.py":20
 *     #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
 *     suspicious_lines = []
 *     sc_tf_idf = None             # <<<<<<<<<<<<<<
 *     #Result given by using the command without arguments.
 *     parser = argparse.ArgumentParser(description="ZoryaTrace - Trace AI generated content")
 */
  __Pyx_INCREF(Py_None);
  __pyx_v_sc_tf_idf = Py_None;

  /* "zorya.py":22
 *     sc_tf_idf = None
 *     #Result given by using the command without arguments.
 *     parser = argparse.ArgumentParser(description="ZoryaTrace - Trace AI generated content")             # <<<<<<<<<<<<<<
 *     parser.add_argument(
 *     "-f",
 */
  __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_argparse); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_ArgumentParser); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_description, __pyx_kp_u_ZoryaTrace_Trace_AI_generated_co) < 0) __PYX_ERR(0, 22, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 22, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_v_parser = __pyx_t_3;
  __pyx_t_3 = 0;

  /* "zorya.py":23
 *     #Result given by using the command without arguments.
 *     parser = argparse.ArgumentParser(description="ZoryaTrace - Trace AI generated content")
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *     "-f",
 *     "--file",
 */
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_parser, __pyx_n_s_add_argument); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);

  /* "zorya.py":26
 *     "-f",
 *     "--file",
 *     type=str,             # <<<<<<<<<<<<<<
 *     help="path to the pdf file to be analyzed with the algorithm, and then return the lines deemed suspicious to the user in terms of confidentiality.",
 *     )
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_type, ((PyObject *)(&PyUnicode_Type))) < 0) __PYX_ERR(0, 26, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_help, __pyx_kp_u_path_to_the_pdf_file_to_be_analy) < 0) __PYX_ERR(0, 26, __pyx_L1_error)

  /* "zorya.py":23
 *     #Result given by using the command without arguments.
 *     parser = argparse.ArgumentParser(description="ZoryaTrace - Trace AI generated content")
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *     "-f",
 *     "--file",
 */
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple_, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":29
 *     help="path to the pdf file to be analyzed with the algorithm, and then return the lines deemed suspicious to the user in terms of confidentiality.",
 *     )
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *         "-c",
 *         "--classify",
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_parser, __pyx_n_s_add_argument); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

  /* "zorya.py":32
 *         "-c",
 *         "--classify",
 *         type=str,             # <<<<<<<<<<<<<<
 *         help="classify text given in inverted commas as suspect or neutral using TFxIDF algorithm",
 *     )
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_type, ((PyObject *)(&PyUnicode_Type))) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_help, __pyx_kp_u_classify_text_given_in_inverted) < 0) __PYX_ERR(0, 32, __pyx_L1_error)

  /* "zorya.py":29
 *     help="path to the pdf file to be analyzed with the algorithm, and then return the lines deemed suspicious to the user in terms of confidentiality.",
 *     )
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *         "-c",
 *         "--classify",
 */
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__2, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":35
 *         help="classify text given in inverted commas as suspect or neutral using TFxIDF algorithm",
 *     )
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *         "-t",
 *         "--test",
 */
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_parser, __pyx_n_s_add_argument); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);

  /* "zorya.py":38
 *         "-t",
 *         "--test",
 *         action="store_true",             # <<<<<<<<<<<<<<
 *         help="train and test the algorithm on predefined data",
 *     )
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 38, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_action, __pyx_n_u_store_true) < 0) __PYX_ERR(0, 38, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_help, __pyx_kp_u_train_and_test_the_algorithm_on) < 0) __PYX_ERR(0, 38, __pyx_L1_error)

  /* "zorya.py":35
 *         help="classify text given in inverted commas as suspect or neutral using TFxIDF algorithm",
 *     )
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *         "-t",
 *         "--test",
 */
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__3, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":42
 *     )
 * 
 *     args = parser.parse_args()             # <<<<<<<<<<<<<<
 * 
 *     # Reads the data.csv file and transforms it into a Pandas DataFrame, sorting the columns.
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_parser, __pyx_n_s_parse_args); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 42, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_1))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_1, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }
  __pyx_v_args = __pyx_t_2;
  __pyx_t_2 = 0;

  /* "zorya.py":45
 * 
 *     # Reads the data.csv file and transforms it into a Pandas DataFrame, sorting the columns.
 *     terms = pd.read_csv("data.csv", encoding="utf-8")             # <<<<<<<<<<<<<<
 *     terms.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1, inplace=True)
 *     terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)
 */
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_pd); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_read_csv); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_encoding, __pyx_kp_u_utf_8) < 0) __PYX_ERR(0, 45, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__4, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_terms = __pyx_t_3;
  __pyx_t_3 = 0;

  /* "zorya.py":46
 *     # Reads the data.csv file and transforms it into a Pandas DataFrame, sorting the columns.
 *     terms = pd.read_csv("data.csv", encoding="utf-8")
 *     terms.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1, inplace=True)             # <<<<<<<<<<<<<<
 *     terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)
 *     print(terms["labels"].value_counts())
 */
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_terms, __pyx_n_s_drop); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = PyList_New(3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_kp_u_Unnamed_2);
  __Pyx_GIVEREF(__pyx_kp_u_Unnamed_2);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Unnamed_2)) __PYX_ERR(0, 46, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Unnamed_3);
  __Pyx_GIVEREF(__pyx_kp_u_Unnamed_3);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 1, __pyx_kp_u_Unnamed_3)) __PYX_ERR(0, 46, __pyx_L1_error);
  __Pyx_INCREF(__pyx_kp_u_Unnamed_4);
  __Pyx_GIVEREF(__pyx_kp_u_Unnamed_4);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 2, __pyx_kp_u_Unnamed_4)) __PYX_ERR(0, 46, __pyx_L1_error);
  __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_2);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2)) __PYX_ERR(0, 46, __pyx_L1_error);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_axis, __pyx_int_1) < 0) __PYX_ERR(0, 46, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 46, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 46, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /* "zorya.py":47
 *     terms = pd.read_csv("data.csv", encoding="utf-8")
 *     terms.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1, inplace=True)
 *     terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)             # <<<<<<<<<<<<<<
 *     print(terms["labels"].value_counts())
 *     terms["label"] = terms["labels"].map({"neutral": 0, "suspicious": 1})
 */
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_terms, __pyx_n_s_rename); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_v1, __pyx_n_u_labels) < 0) __PYX_ERR(0, 47, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_v2, __pyx_n_u_message) < 0) __PYX_ERR(0, 47, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_columns, __pyx_t_1) < 0) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 47, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 47, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":48
 *     terms.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1, inplace=True)
 *     terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)
 *     print(terms["labels"].value_counts())             # <<<<<<<<<<<<<<
 *     terms["label"] = terms["labels"].map({"neutral": 0, "suspicious": 1})
 *     terms.drop(["labels"], axis=1, inplace=True)
 */
  __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_terms, __pyx_n_u_labels); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_value_counts); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 48, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 48, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /* "zorya.py":49
 *     terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)
 *     print(terms["labels"].value_counts())
 *     terms["label"] = terms["labels"].map({"neutral": 0, "suspicious": 1})             # <<<<<<<<<<<<<<
 *     terms.drop(["labels"], axis=1, inplace=True)
 * 
 */
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_terms, __pyx_n_u_labels); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_map); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_neutral, __pyx_int_0) < 0) __PYX_ERR(0, 49, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_1, __pyx_n_u_suspicious, __pyx_int_1) < 0) __PYX_ERR(0, 49, __pyx_L1_error)
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_1};
    __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 49, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  if (unlikely((PyObject_SetItem(__pyx_v_terms, __pyx_n_u_label, __pyx_t_5) < 0))) __PYX_ERR(0, 49, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /* "zorya.py":50
 *     print(terms["labels"].value_counts())
 *     terms["label"] = terms["labels"].map({"neutral": 0, "suspicious": 1})
 *     terms.drop(["labels"], axis=1, inplace=True)             # <<<<<<<<<<<<<<
 * 
 *     # Creation of the training set (75% of the data) and the test set (25% of the data).
 */
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_terms, __pyx_n_s_drop); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_u_labels);
  __Pyx_GIVEREF(__pyx_n_u_labels);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_labels)) __PYX_ERR(0, 50, __pyx_L1_error);
  __pyx_t_1 = PyTuple_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_GIVEREF(__pyx_t_2);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_t_2)) __PYX_ERR(0, 50, __pyx_L1_error);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_axis, __pyx_int_1) < 0) __PYX_ERR(0, 50, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 50, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 50, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":53
 * 
 *     # Creation of the training set (75% of the data) and the test set (25% of the data).
 *     trainIndex, testIndex = list(), list()             # <<<<<<<<<<<<<<
 *     for i in range(terms.shape[0]):
 *         if np.random.uniform(0, 1) < 0.75:
 */
  __pyx_t_3 = PyList_New(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 53, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_v_trainIndex = ((PyObject*)__pyx_t_3);
  __pyx_t_3 = 0;
  __pyx_v_testIndex = ((PyObject*)__pyx_t_2);
  __pyx_t_2 = 0;

  /* "zorya.py":54
 *     # Creation of the training set (75% of the data) and the test set (25% of the data).
 *     trainIndex, testIndex = list(), list()
 *     for i in range(terms.shape[0]):             # <<<<<<<<<<<<<<
 *         if np.random.uniform(0, 1) < 0.75:
 *             trainIndex += [i]
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_terms, __pyx_n_s_shape); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
    __pyx_t_3 = __pyx_t_2; __Pyx_INCREF(__pyx_t_3);
    __pyx_t_6 = 0;
    __pyx_t_7 = NULL;
  } else {
    __pyx_t_6 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 54, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 54, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  for (;;) {
    if (likely(!__pyx_t_7)) {
      if (likely(PyList_CheckExact(__pyx_t_3))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_3);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 54, __pyx_L1_error)
          #endif
          if (__pyx_t_6 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_6); __Pyx_INCREF(__pyx_t_2); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 54, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_3, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 54, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_3);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 54, __pyx_L1_error)
          #endif
          if (__pyx_t_6 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_6); __Pyx_INCREF(__pyx_t_2); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 54, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_3, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 54, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_7(__pyx_t_3);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 54, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":55
 *     trainIndex, testIndex = list(), list()
 *     for i in range(terms.shape[0]):
 *         if np.random.uniform(0, 1) < 0.75:             # <<<<<<<<<<<<<<
 *             trainIndex += [i]
 *         else:
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_np); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 55, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_random); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 55, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_uniform); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 55, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__5, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 55, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyObject_RichCompare(__pyx_t_1, __pyx_float_0_75, Py_LT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 55, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_8 < 0))) __PYX_ERR(0, 55, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (__pyx_t_8) {

      /* "zorya.py":56
 *     for i in range(terms.shape[0]):
 *         if np.random.uniform(0, 1) < 0.75:
 *             trainIndex += [i]             # <<<<<<<<<<<<<<
 *         else:
 *             testIndex += [i]
 */
      __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 56, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_INCREF(__pyx_v_i);
      __Pyx_GIVEREF(__pyx_v_i);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_v_i)) __PYX_ERR(0, 56, __pyx_L1_error);
      __pyx_t_1 = PyNumber_InPlaceAdd(__pyx_v_trainIndex, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 56, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      __Pyx_DECREF_SET(__pyx_v_trainIndex, ((PyObject*)__pyx_t_1));
      __pyx_t_1 = 0;

      /* "zorya.py":55
 *     trainIndex, testIndex = list(), list()
 *     for i in range(terms.shape[0]):
 *         if np.random.uniform(0, 1) < 0.75:             # <<<<<<<<<<<<<<
 *             trainIndex += [i]
 *         else:
 */
      goto __pyx_L5;
    }

    /* "zorya.py":58
 *             trainIndex += [i]
 *         else:
 *             testIndex += [i]             # <<<<<<<<<<<<<<
 *     trainData = terms.loc[trainIndex]
 *     testData = terms.loc[testIndex]
 */
    /*else*/ {
      __pyx_t_1 = PyList_New(1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 58, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_INCREF(__pyx_v_i);
      __Pyx_GIVEREF(__pyx_v_i);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_1, 0, __pyx_v_i)) __PYX_ERR(0, 58, __pyx_L1_error);
      __pyx_t_2 = PyNumber_InPlaceAdd(__pyx_v_testIndex, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 58, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF_SET(__pyx_v_testIndex, ((PyObject*)__pyx_t_2));
      __pyx_t_2 = 0;
    }
    __pyx_L5:;

    /* "zorya.py":54
 *     # Creation of the training set (75% of the data) and the test set (25% of the data).
 *     trainIndex, testIndex = list(), list()
 *     for i in range(terms.shape[0]):             # <<<<<<<<<<<<<<
 *         if np.random.uniform(0, 1) < 0.75:
 *             trainIndex += [i]
 */
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":59
 *         else:
 *             testIndex += [i]
 *     trainData = terms.loc[trainIndex]             # <<<<<<<<<<<<<<
 *     testData = terms.loc[testIndex]
 * 
 */
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_terms, __pyx_n_s_loc); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_t_3, __pyx_v_trainIndex); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 59, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_trainData = __pyx_t_2;
  __pyx_t_2 = 0;

  /* "zorya.py":60
 *             testIndex += [i]
 *     trainData = terms.loc[trainIndex]
 *     testData = terms.loc[testIndex]             # <<<<<<<<<<<<<<
 * 
 *     # Reset of indexes in the training set and in the test set.
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_terms, __pyx_n_s_loc); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_v_testIndex); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 60, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_testData = __pyx_t_3;
  __pyx_t_3 = 0;

  /* "zorya.py":63
 * 
 *     # Reset of indexes in the training set and in the test set.
 *     trainData.reset_index(inplace=True)             # <<<<<<<<<<<<<<
 *     trainData.drop(["index"], axis=1, inplace=True)
 * 
 */
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_trainData, __pyx_n_s_reset_index); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 63, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 63, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":64
 *     # Reset of indexes in the training set and in the test set.
 *     trainData.reset_index(inplace=True)
 *     trainData.drop(["index"], axis=1, inplace=True)             # <<<<<<<<<<<<<<
 * 
 *     testData.reset_index(inplace=True)
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_trainData, __pyx_n_s_drop); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_u_index);
  __Pyx_GIVEREF(__pyx_n_u_index);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_index)) __PYX_ERR(0, 64, __pyx_L1_error);
  __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_2);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_axis, __pyx_int_1) < 0) __PYX_ERR(0, 64, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 64, __pyx_L1_error)
  __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_3, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 64, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /* "zorya.py":66
 *     trainData.drop(["index"], axis=1, inplace=True)
 * 
 *     testData.reset_index(inplace=True)             # <<<<<<<<<<<<<<
 *     testData.drop(["index"], axis=1, inplace=True)
 * 
 */
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_testData, __pyx_n_s_reset_index); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 66, __pyx_L1_error)
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 66, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":67
 * 
 *     testData.reset_index(inplace=True)
 *     testData.drop(["index"], axis=1, inplace=True)             # <<<<<<<<<<<<<<
 * 
 *     # Processing the argument to test the algorithm on two predefined lines.
 */
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_testData, __pyx_n_s_drop); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_u_index);
  __Pyx_GIVEREF(__pyx_n_u_index);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_u_index)) __PYX_ERR(0, 67, __pyx_L1_error);
  __pyx_t_5 = PyTuple_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_GIVEREF(__pyx_t_2);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_2)) __PYX_ERR(0, 67, __pyx_L1_error);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_axis, __pyx_int_1) < 0) __PYX_ERR(0, 67, __pyx_L1_error)
  if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_inplace, Py_True) < 0) __PYX_ERR(0, 67, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_5, __pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 67, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":70
 * 
 *     # Processing the argument to test the algorithm on two predefined lines.
 *     if args.test:             # <<<<<<<<<<<<<<
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_args, __pyx_n_s_test_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_8 < 0))) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_8) {

    /* "zorya.py":71
 *     # Processing the argument to test the algorithm on two predefined lines.
 *     if args.test:
 *         sc_tf_idf = TFIDFCLassifier(trainData)             # <<<<<<<<<<<<<<
 *         sc_tf_idf.train()
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_TFIDFCLassifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 71, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_trainData};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 71, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF_SET(__pyx_v_sc_tf_idf, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":72
 *     if args.test:
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()             # <<<<<<<<<<<<<<
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_train); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 72, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 72, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":73
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])             # <<<<<<<<<<<<<<
 *         print()
 *         print("Results for TF x IDF classifier:")
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_predict); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 73, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_message); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 73, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 73, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_preds_tf_idf = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":74
 *         sc_tf_idf.train()
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()             # <<<<<<<<<<<<<<
 *         print("Results for TF x IDF classifier:")
 *         metrics(testData["label"], preds_tf_idf)
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 74, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":75
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()
 *         print("Results for TF x IDF classifier:")             # <<<<<<<<<<<<<<
 *         metrics(testData["label"], preds_tf_idf)
 * 
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 75, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":76
 *         print()
 *         print("Results for TF x IDF classifier:")
 *         metrics(testData["label"], preds_tf_idf)             # <<<<<<<<<<<<<<
 * 
 *         sc_bow = BowClassifier(trainData)
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_metrics); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 76, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_label); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 76, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_3, __pyx_t_5, __pyx_v_preds_tf_idf};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 76, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":78
 *         metrics(testData["label"], preds_tf_idf)
 * 
 *         sc_bow = BowClassifier(trainData)             # <<<<<<<<<<<<<<
 *         sc_bow.train()
 *         preds_bow = sc_bow.predict(testData["message"])
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_BowClassifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 78, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_trainData};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 78, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_sc_bow = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":79
 * 
 *         sc_bow = BowClassifier(trainData)
 *         sc_bow.train()             # <<<<<<<<<<<<<<
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_bow, __pyx_n_s_train); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 79, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 79, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":80
 *         sc_bow = BowClassifier(trainData)
 *         sc_bow.train()
 *         preds_bow = sc_bow.predict(testData["message"])             # <<<<<<<<<<<<<<
 *         print()
 *         print("Results for Bow classifier:")
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_bow, __pyx_n_s_predict); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 80, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_message); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 80, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 80, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_preds_bow = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":81
 *         sc_bow.train()
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()             # <<<<<<<<<<<<<<
 *         print("Results for Bow classifier:")
 *         metrics(testData["label"], preds_bow)
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 81, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":82
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()
 *         print("Results for Bow classifier:")             # <<<<<<<<<<<<<<
 *         metrics(testData["label"], preds_bow)
 *         print()
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__7, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 82, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":83
 *         print()
 *         print("Results for Bow classifier:")
 *         metrics(testData["label"], preds_bow)             # <<<<<<<<<<<<<<
 *         print()
 *         # Use of two predefined messages to test the algorithm.
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_metrics); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_label); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 83, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_3, __pyx_t_5, __pyx_v_preds_bow};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 83, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":84
 *         print("Results for Bow classifier:")
 *         metrics(testData["label"], preds_bow)
 *         print()             # <<<<<<<<<<<<<<
 *         # Use of two predefined messages to test the algorithm.
 *         print("Testing:  'Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.'")
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 84, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":86
 *         print()
 *         # Use of two predefined messages to test the algorithm.
 *         print("Testing:  'Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.'")             # <<<<<<<<<<<<<<
 *         pm = process_message(
 *             "Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination."
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__8, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 86, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":87
 *         # Use of two predefined messages to test the algorithm.
 *         print("Testing:  'Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.'")
 *         pm = process_message(             # <<<<<<<<<<<<<<
 *             "Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination."
 *         )
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_process_message); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 87, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_kp_u_Continued_use_of_our_platform_si};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 87, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_pm = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":90
 *             "Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination."
 *         )
 *         print("Suspicious? :", sc_tf_idf.classify(pm))             # <<<<<<<<<<<<<<
 * 
 *         print("Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'")
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_pm};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_kp_u_Suspicious);
    __Pyx_GIVEREF(__pyx_kp_u_Suspicious);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Suspicious)) __PYX_ERR(0, 90, __pyx_L1_error);
    __Pyx_GIVEREF(__pyx_t_1);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":92
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 * 
 *         print("Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'")             # <<<<<<<<<<<<<<
 *         pm = process_message("Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards. ")
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__9, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 92, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":93
 * 
 *         print("Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'")
 *         pm = process_message("Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards. ")             # <<<<<<<<<<<<<<
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 * 
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_process_message); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 93, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_kp_u_Our_terms_of_service_and_privacy};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 93, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF_SET(__pyx_v_pm, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":94
 *         print("Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'")
 *         pm = process_message("Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards. ")
 *         print("Suspicious? :", sc_tf_idf.classify(pm))             # <<<<<<<<<<<<<<
 * 
 *     # Processing the argument to test the algorithm on a given line.
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 94, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_pm};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 94, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 94, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_kp_u_Suspicious);
    __Pyx_GIVEREF(__pyx_kp_u_Suspicious);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Suspicious)) __PYX_ERR(0, 94, __pyx_L1_error);
    __Pyx_GIVEREF(__pyx_t_1);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_1)) __PYX_ERR(0, 94, __pyx_L1_error);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 94, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":70
 * 
 *     # Processing the argument to test the algorithm on two predefined lines.
 *     if args.test:             # <<<<<<<<<<<<<<
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 */
    goto __pyx_L7;
  }

  /* "zorya.py":97
 * 
 *     # Processing the argument to test the algorithm on a given line.
 *     elif args.classify:             # <<<<<<<<<<<<<<
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_args, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_8 < 0))) __PYX_ERR(0, 97, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_8) {

    /* "zorya.py":98
 *     # Processing the argument to test the algorithm on a given line.
 *     elif args.classify:
 *         sc_tf_idf = TFIDFCLassifier(trainData)             # <<<<<<<<<<<<<<
 *         sc_tf_idf.train()
 *         pm = process_message(args.classify)
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_TFIDFCLassifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_trainData};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 98, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF_SET(__pyx_v_sc_tf_idf, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":99
 *     elif args.classify:
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()             # <<<<<<<<<<<<<<
 *         pm = process_message(args.classify)
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_train); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 99, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 99, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":100
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 *         pm = process_message(args.classify)             # <<<<<<<<<<<<<<
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 * 
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_process_message); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 100, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_args, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 100, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 100, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_pm = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":101
 *         sc_tf_idf.train()
 *         pm = process_message(args.classify)
 *         print("Suspicious? :", sc_tf_idf.classify(pm))             # <<<<<<<<<<<<<<
 * 
 *     # Processing the argument to test the algorithm on a given file.
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 101, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_pm};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 101, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 101, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_kp_u_Suspicious);
    __Pyx_GIVEREF(__pyx_kp_u_Suspicious);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_kp_u_Suspicious)) __PYX_ERR(0, 101, __pyx_L1_error);
    __Pyx_GIVEREF(__pyx_t_1);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_t_1)) __PYX_ERR(0, 101, __pyx_L1_error);
    __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 101, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":97
 * 
 *     # Processing the argument to test the algorithm on a given line.
 *     elif args.classify:             # <<<<<<<<<<<<<<
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 */
    goto __pyx_L7;
  }

  /* "zorya.py":104
 * 
 *     # Processing the argument to test the algorithm on a given file.
 *     elif args.file:             # <<<<<<<<<<<<<<
 *         # Display precise data as with the --test argument to provide the user with more details.
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_args, __pyx_n_s_file_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 104, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely((__pyx_t_8 < 0))) __PYX_ERR(0, 104, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__pyx_t_8) {

    /* "zorya.py":106
 *     elif args.file:
 *         # Display precise data as with the --test argument to provide the user with more details.
 *         sc_tf_idf = TFIDFCLassifier(trainData)             # <<<<<<<<<<<<<<
 *         sc_tf_idf.train()
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_TFIDFCLassifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_trainData};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 106, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF_SET(__pyx_v_sc_tf_idf, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":107
 *         # Display precise data as with the --test argument to provide the user with more details.
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()             # <<<<<<<<<<<<<<
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_train); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 107, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 107, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":108
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 *         sc_tf_idf.train()
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])             # <<<<<<<<<<<<<<
 *         print()
 *         print("Results for TF x IDF classifier:")
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_predict); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 108, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_message); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 108, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 108, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_preds_tf_idf = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":109
 *         sc_tf_idf.train()
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()             # <<<<<<<<<<<<<<
 *         print("Results for TF x IDF classifier:")
 *         metrics(testData["label"], preds_tf_idf)
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 109, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":110
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()
 *         print("Results for TF x IDF classifier:")             # <<<<<<<<<<<<<<
 *         metrics(testData["label"], preds_tf_idf)
 *         sc_bow = BowClassifier(trainData)
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 110, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":111
 *         print()
 *         print("Results for TF x IDF classifier:")
 *         metrics(testData["label"], preds_tf_idf)             # <<<<<<<<<<<<<<
 *         sc_bow = BowClassifier(trainData)
 *         sc_bow.train()
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_metrics); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_label); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 111, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_3, __pyx_t_5, __pyx_v_preds_tf_idf};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 111, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":112
 *         print("Results for TF x IDF classifier:")
 *         metrics(testData["label"], preds_tf_idf)
 *         sc_bow = BowClassifier(trainData)             # <<<<<<<<<<<<<<
 *         sc_bow.train()
 *         preds_bow = sc_bow.predict(testData["message"])
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_BowClassifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 112, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_v_trainData};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 112, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_sc_bow = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":113
 *         metrics(testData["label"], preds_tf_idf)
 *         sc_bow = BowClassifier(trainData)
 *         sc_bow.train()             # <<<<<<<<<<<<<<
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_bow, __pyx_n_s_train); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 113, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 113, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":114
 *         sc_bow = BowClassifier(trainData)
 *         sc_bow.train()
 *         preds_bow = sc_bow.predict(testData["message"])             # <<<<<<<<<<<<<<
 *         print()
 *         print("Results for Bow classifier:")
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_bow, __pyx_n_s_predict); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_message); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 114, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 114, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_preds_bow = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":115
 *         sc_bow.train()
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()             # <<<<<<<<<<<<<<
 *         print("Results for Bow classifier:")
 *         metrics(testData["label"], preds_bow)
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 115, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":116
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()
 *         print("Results for Bow classifier:")             # <<<<<<<<<<<<<<
 *         metrics(testData["label"], preds_bow)
 *         print()
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__7, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 116, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":117
 *         print()
 *         print("Results for Bow classifier:")
 *         metrics(testData["label"], preds_bow)             # <<<<<<<<<<<<<<
 *         print()
 *         # Processing the pdf file.
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_metrics); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 117, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_Dict_GetItem(__pyx_v_testData, __pyx_n_u_label); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 117, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_3, __pyx_t_5, __pyx_v_preds_bow};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 117, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":118
 *         print("Results for Bow classifier:")
 *         metrics(testData["label"], preds_bow)
 *         print()             # <<<<<<<<<<<<<<
 *         # Processing the pdf file.
 *         pdf_text = extract_text_from_pdf(args.file)
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 118, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":120
 *         print()
 *         # Processing the pdf file.
 *         pdf_text = extract_text_from_pdf(args.file)             # <<<<<<<<<<<<<<
 *         lines = pdf_text.split('\n')  # Separating pdf lines to process them individually.
 *         for line in lines:
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_extract_text_from_pdf); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_args, __pyx_n_s_file_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 120, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_3 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 120, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_pdf_text = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":121
 *         # Processing the pdf file.
 *         pdf_text = extract_text_from_pdf(args.file)
 *         lines = pdf_text.split('\n')  # Separating pdf lines to process them individually.             # <<<<<<<<<<<<<<
 *         for line in lines:
 *             processed_line = process_message(line)
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_pdf_text, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 121, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, __pyx_kp_u__10};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 121, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_v_lines = __pyx_t_1;
    __pyx_t_1 = 0;

    /* "zorya.py":122
 *         pdf_text = extract_text_from_pdf(args.file)
 *         lines = pdf_text.split('\n')  # Separating pdf lines to process them individually.
 *         for line in lines:             # <<<<<<<<<<<<<<
 *             processed_line = process_message(line)
 *             is_suspicious = sc_tf_idf.classify(processed_line)
 */
    if (likely(PyList_CheckExact(__pyx_v_lines)) || PyTuple_CheckExact(__pyx_v_lines)) {
      __pyx_t_1 = __pyx_v_lines; __Pyx_INCREF(__pyx_t_1);
      __pyx_t_6 = 0;
      __pyx_t_7 = NULL;
    } else {
      __pyx_t_6 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_lines); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 122, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 122, __pyx_L1_error)
    }
    for (;;) {
      if (likely(!__pyx_t_7)) {
        if (likely(PyList_CheckExact(__pyx_t_1))) {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 122, __pyx_L1_error)
            #endif
            if (__pyx_t_6 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_2); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 122, __pyx_L1_error)
          #else
          __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 122, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          #endif
        } else {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_1);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 122, __pyx_L1_error)
            #endif
            if (__pyx_t_6 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_2); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 122, __pyx_L1_error)
          #else
          __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 122, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          #endif
        }
      } else {
        __pyx_t_2 = __pyx_t_7(__pyx_t_1);
        if (unlikely(!__pyx_t_2)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 122, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_2);
      }
      __Pyx_XDECREF_SET(__pyx_v_line, __pyx_t_2);
      __pyx_t_2 = 0;

      /* "zorya.py":123
 *         lines = pdf_text.split('\n')  # Separating pdf lines to process them individually.
 *         for line in lines:
 *             processed_line = process_message(line)             # <<<<<<<<<<<<<<
 *             is_suspicious = sc_tf_idf.classify(processed_line)
 *             if is_suspicious:
 */
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_process_message); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 123, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_3 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_3)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_3);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_v_line};
        __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 123, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __Pyx_XDECREF_SET(__pyx_v_processed_line, __pyx_t_2);
      __pyx_t_2 = 0;

      /* "zorya.py":124
 *         for line in lines:
 *             processed_line = process_message(line)
 *             is_suspicious = sc_tf_idf.classify(processed_line)             # <<<<<<<<<<<<<<
 *             if is_suspicious:
 *                 suspicious_lines.append(line)
 */
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_sc_tf_idf, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 124, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_3 = NULL;
      __pyx_t_4 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_3)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
          __Pyx_INCREF(__pyx_t_3);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_5, function);
          __pyx_t_4 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_v_processed_line};
        __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 124, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __Pyx_XDECREF_SET(__pyx_v_is_suspicious, __pyx_t_2);
      __pyx_t_2 = 0;

      /* "zorya.py":125
 *             processed_line = process_message(line)
 *             is_suspicious = sc_tf_idf.classify(processed_line)
 *             if is_suspicious:             # <<<<<<<<<<<<<<
 *                 suspicious_lines.append(line)
 * 
 */
      __pyx_t_8 = __Pyx_PyObject_IsTrue(__pyx_v_is_suspicious); if (unlikely((__pyx_t_8 < 0))) __PYX_ERR(0, 125, __pyx_L1_error)
      if (__pyx_t_8) {

        /* "zorya.py":126
 *             is_suspicious = sc_tf_idf.classify(processed_line)
 *             if is_suspicious:
 *                 suspicious_lines.append(line)             # <<<<<<<<<<<<<<
 * 
 *     # Display only data deemed suspicious.
 */
        __pyx_t_9 = __Pyx_PyList_Append(__pyx_v_suspicious_lines, __pyx_v_line); if (unlikely(__pyx_t_9 == ((int)-1))) __PYX_ERR(0, 126, __pyx_L1_error)

        /* "zorya.py":125
 *             processed_line = process_message(line)
 *             is_suspicious = sc_tf_idf.classify(processed_line)
 *             if is_suspicious:             # <<<<<<<<<<<<<<
 *                 suspicious_lines.append(line)
 * 
 */
      }

      /* "zorya.py":122
 *         pdf_text = extract_text_from_pdf(args.file)
 *         lines = pdf_text.split('\n')  # Separating pdf lines to process them individually.
 *         for line in lines:             # <<<<<<<<<<<<<<
 *             processed_line = process_message(line)
 *             is_suspicious = sc_tf_idf.classify(processed_line)
 */
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":104
 * 
 *     # Processing the argument to test the algorithm on a given file.
 *     elif args.file:             # <<<<<<<<<<<<<<
 *         # Display precise data as with the --test argument to provide the user with more details.
 *         sc_tf_idf = TFIDFCLassifier(trainData)
 */
  }
  __pyx_L7:;

  /* "zorya.py":129
 * 
 *     # Display only data deemed suspicious.
 *     print("=========================================\n========Lines flagged suspicious:========\n=========================================\n")             # <<<<<<<<<<<<<<
 *     for suspicious_line in suspicious_lines:
 *         print(suspicious_line, "\n")
 */
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__11, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 129, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":130
 *     # Display only data deemed suspicious.
 *     print("=========================================\n========Lines flagged suspicious:========\n=========================================\n")
 *     for suspicious_line in suspicious_lines:             # <<<<<<<<<<<<<<
 *         print(suspicious_line, "\n")
 * 
 */
  __pyx_t_1 = __pyx_v_suspicious_lines; __Pyx_INCREF(__pyx_t_1);
  __pyx_t_6 = 0;
  for (;;) {
    {
      Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
      #if !CYTHON_ASSUME_SAFE_MACROS
      if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 130, __pyx_L1_error)
      #endif
      if (__pyx_t_6 >= __pyx_temp) break;
    }
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_6); __Pyx_INCREF(__pyx_t_2); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 130, __pyx_L1_error)
    #else
    __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 130, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    #endif
    __Pyx_XDECREF_SET(__pyx_v_suspicious_line, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":131
 *     print("=========================================\n========Lines flagged suspicious:========\n=========================================\n")
 *     for suspicious_line in suspicious_lines:
 *         print(suspicious_line, "\n")             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 131, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_INCREF(__pyx_v_suspicious_line);
    __Pyx_GIVEREF(__pyx_v_suspicious_line);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_suspicious_line)) __PYX_ERR(0, 131, __pyx_L1_error);
    __Pyx_INCREF(__pyx_kp_u__10);
    __Pyx_GIVEREF(__pyx_kp_u__10);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_kp_u__10)) __PYX_ERR(0, 131, __pyx_L1_error);
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_2, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 131, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "zorya.py":130
 *     # Display only data deemed suspicious.
 *     print("=========================================\n========Lines flagged suspicious:========\n=========================================\n")
 *     for suspicious_line in suspicious_lines:             # <<<<<<<<<<<<<<
 *         print(suspicious_line, "\n")
 * 
 */
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  /*else*/ {

    /* "zorya.py":134
 * 
 *     else:
 *         parser.print_help()             # <<<<<<<<<<<<<<
 *         print()
 *         print("Please select mode.")
 */
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_parser, __pyx_n_s_print_help); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 134, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_2 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_2)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_2);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_2, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 134, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":135
 *     else:
 *         parser.print_help()
 *         print()             # <<<<<<<<<<<<<<
 *         print("Please select mode.")
 * 
 */
    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 135, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":136
 *         parser.print_help()
 *         print()
 *         print("Please select mode.")             # <<<<<<<<<<<<<<
 * 
 * # Extraction function for the pdf file.
 */
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__12, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 136, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  }

  /* "zorya.py":17
 * 
 * 
 * def main():             # <<<<<<<<<<<<<<
 *     #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
 *     suspicious_lines = []
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("zorya.main", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_suspicious_lines);
  __Pyx_XDECREF(__pyx_v_sc_tf_idf);
  __Pyx_XDECREF(__pyx_v_parser);
  __Pyx_XDECREF(__pyx_v_args);
  __Pyx_XDECREF(__pyx_v_terms);
  __Pyx_XDECREF(__pyx_v_trainIndex);
  __Pyx_XDECREF(__pyx_v_testIndex);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_trainData);
  __Pyx_XDECREF(__pyx_v_testData);
  __Pyx_XDECREF(__pyx_v_preds_tf_idf);
  __Pyx_XDECREF(__pyx_v_sc_bow);
  __Pyx_XDECREF(__pyx_v_preds_bow);
  __Pyx_XDECREF(__pyx_v_pm);
  __Pyx_XDECREF(__pyx_v_pdf_text);
  __Pyx_XDECREF(__pyx_v_lines);
  __Pyx_XDECREF(__pyx_v_line);
  __Pyx_XDECREF(__pyx_v_processed_line);
  __Pyx_XDECREF(__pyx_v_is_suspicious);
  __Pyx_XDECREF(__pyx_v_suspicious_line);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":139
 * 
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):             # <<<<<<<<<<<<<<
 *     with open(pdf_file, 'rb') as file:
 *         pdf_reader = PdfReader(file)
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_3extract_text_from_pdf(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_3extract_text_from_pdf = {"extract_text_from_pdf", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_3extract_text_from_pdf, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_3extract_text_from_pdf(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_pdf_file = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("extract_text_from_pdf (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_pdf_file,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_pdf_file)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 139, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "extract_text_from_pdf") < 0)) __PYX_ERR(0, 139, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_pdf_file = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("extract_text_from_pdf", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 139, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.extract_text_from_pdf", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_2extract_text_from_pdf(__pyx_self, __pyx_v_pdf_file);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_2extract_text_from_pdf(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_pdf_file) {
  PyObject *__pyx_v_file = NULL;
  PyObject *__pyx_v_pdf_reader = NULL;
  PyObject *__pyx_v_text = NULL;
  PyObject *__pyx_v_page = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  unsigned int __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  Py_ssize_t __pyx_t_10;
  PyObject *(*__pyx_t_11)(PyObject *);
  PyObject *__pyx_t_12 = NULL;
  int __pyx_t_13;
  int __pyx_t_14;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("extract_text_from_pdf", 1);

  /* "zorya.py":140
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):
 *     with open(pdf_file, 'rb') as file:             # <<<<<<<<<<<<<<
 *         pdf_reader = PdfReader(file)
 *         text = ''
 */
  /*with:*/ {
    __pyx_t_1 = PyTuple_New(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 140, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_INCREF(__pyx_v_pdf_file);
    __Pyx_GIVEREF(__pyx_v_pdf_file);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_v_pdf_file)) __PYX_ERR(0, 140, __pyx_L1_error);
    __Pyx_INCREF(__pyx_n_u_rb);
    __Pyx_GIVEREF(__pyx_n_u_rb);
    if (__Pyx_PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_n_u_rb)) __PYX_ERR(0, 140, __pyx_L1_error);
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_t_1, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 140, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_3 = __Pyx_PyObject_LookupSpecial(__pyx_t_2, __pyx_n_s_exit); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 140, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_LookupSpecial(__pyx_t_2, __pyx_n_s_enter); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 140, __pyx_L3_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = NULL;
    __pyx_t_6 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_6 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_6, 0+__pyx_t_6);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 140, __pyx_L3_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_t_4 = __pyx_t_1;
    __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    /*try:*/ {
      {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_8, &__pyx_t_9);
        __Pyx_XGOTREF(__pyx_t_7);
        __Pyx_XGOTREF(__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_9);
        /*try:*/ {
          __pyx_v_file = __pyx_t_4;
          __pyx_t_4 = 0;

          /* "zorya.py":141
 * def extract_text_from_pdf(pdf_file):
 *     with open(pdf_file, 'rb') as file:
 *         pdf_reader = PdfReader(file)             # <<<<<<<<<<<<<<
 *         text = ''
 *         for page in pdf_reader.pages:
 */
          __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_PdfReader); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 141, __pyx_L7_error)
          __Pyx_GOTREF(__pyx_t_2);
          __pyx_t_1 = NULL;
          __pyx_t_6 = 0;
          #if CYTHON_UNPACK_METHODS
          if (unlikely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_1)) {
              PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
              __Pyx_INCREF(__pyx_t_1);
              __Pyx_INCREF(function);
              __Pyx_DECREF_SET(__pyx_t_2, function);
              __pyx_t_6 = 1;
            }
          }
          #endif
          {
            PyObject *__pyx_callargs[2] = {__pyx_t_1, __pyx_v_file};
            __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_6, 1+__pyx_t_6);
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 141, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
          }
          __pyx_v_pdf_reader = __pyx_t_4;
          __pyx_t_4 = 0;

          /* "zorya.py":142
 *     with open(pdf_file, 'rb') as file:
 *         pdf_reader = PdfReader(file)
 *         text = ''             # <<<<<<<<<<<<<<
 *         for page in pdf_reader.pages:
 *             text += page.extract_text()
 */
          __Pyx_INCREF(__pyx_kp_u__13);
          __pyx_v_text = __pyx_kp_u__13;

          /* "zorya.py":143
 *         pdf_reader = PdfReader(file)
 *         text = ''
 *         for page in pdf_reader.pages:             # <<<<<<<<<<<<<<
 *             text += page.extract_text()
 *         return text
 */
          __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_pdf_reader, __pyx_n_s_pages); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 143, __pyx_L7_error)
          __Pyx_GOTREF(__pyx_t_4);
          if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
            __pyx_t_2 = __pyx_t_4; __Pyx_INCREF(__pyx_t_2);
            __pyx_t_10 = 0;
            __pyx_t_11 = NULL;
          } else {
            __pyx_t_10 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 143, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_11 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 143, __pyx_L7_error)
          }
          __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
          for (;;) {
            if (likely(!__pyx_t_11)) {
              if (likely(PyList_CheckExact(__pyx_t_2))) {
                {
                  Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
                  #if !CYTHON_ASSUME_SAFE_MACROS
                  if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 143, __pyx_L7_error)
                  #endif
                  if (__pyx_t_10 >= __pyx_temp) break;
                }
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                __pyx_t_4 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_10); __Pyx_INCREF(__pyx_t_4); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 143, __pyx_L7_error)
                #else
                __pyx_t_4 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 143, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_4);
                #endif
              } else {
                {
                  Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
                  #if !CYTHON_ASSUME_SAFE_MACROS
                  if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 143, __pyx_L7_error)
                  #endif
                  if (__pyx_t_10 >= __pyx_temp) break;
                }
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_10); __Pyx_INCREF(__pyx_t_4); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 143, __pyx_L7_error)
                #else
                __pyx_t_4 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 143, __pyx_L7_error)
                __Pyx_GOTREF(__pyx_t_4);
                #endif
              }
            } else {
              __pyx_t_4 = __pyx_t_11(__pyx_t_2);
              if (unlikely(!__pyx_t_4)) {
                PyObject* exc_type = PyErr_Occurred();
                if (exc_type) {
                  if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                  else __PYX_ERR(0, 143, __pyx_L7_error)
                }
                break;
              }
              __Pyx_GOTREF(__pyx_t_4);
            }
            __Pyx_XDECREF_SET(__pyx_v_page, __pyx_t_4);
            __pyx_t_4 = 0;

            /* "zorya.py":144
 *         text = ''
 *         for page in pdf_reader.pages:
 *             text += page.extract_text()             # <<<<<<<<<<<<<<
 *         return text
 * 
 */
            __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_page, __pyx_n_s_extract_text); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 144, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_5 = NULL;
            __pyx_t_6 = 0;
            #if CYTHON_UNPACK_METHODS
            if (likely(PyMethod_Check(__pyx_t_1))) {
              __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
              if (likely(__pyx_t_5)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                __Pyx_INCREF(__pyx_t_5);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_1, function);
                __pyx_t_6 = 1;
              }
            }
            #endif
            {
              PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
              __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_6, 0+__pyx_t_6);
              __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
              if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 144, __pyx_L7_error)
              __Pyx_GOTREF(__pyx_t_4);
              __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            }
            __pyx_t_1 = PyNumber_InPlaceAdd(__pyx_v_text, __pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 144, __pyx_L7_error)
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_DECREF_SET(__pyx_v_text, __pyx_t_1);
            __pyx_t_1 = 0;

            /* "zorya.py":143
 *         pdf_reader = PdfReader(file)
 *         text = ''
 *         for page in pdf_reader.pages:             # <<<<<<<<<<<<<<
 *             text += page.extract_text()
 *         return text
 */
          }
          __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

          /* "zorya.py":145
 *         for page in pdf_reader.pages:
 *             text += page.extract_text()
 *         return text             # <<<<<<<<<<<<<<
 * 
 * 
 */
          __Pyx_XDECREF(__pyx_r);
          __Pyx_INCREF(__pyx_v_text);
          __pyx_r = __pyx_v_text;
          goto __pyx_L11_try_return;

          /* "zorya.py":140
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):
 *     with open(pdf_file, 'rb') as file:             # <<<<<<<<<<<<<<
 *         pdf_reader = PdfReader(file)
 *         text = ''
 */
        }
        __pyx_L7_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        /*except:*/ {
          __Pyx_AddTraceback("zorya.extract_text_from_pdf", __pyx_clineno, __pyx_lineno, __pyx_filename);
          if (__Pyx_GetException(&__pyx_t_2, &__pyx_t_1, &__pyx_t_4) < 0) __PYX_ERR(0, 140, __pyx_L9_except_error)
          __Pyx_XGOTREF(__pyx_t_2);
          __Pyx_XGOTREF(__pyx_t_1);
          __Pyx_XGOTREF(__pyx_t_4);
          __pyx_t_5 = PyTuple_Pack(3, __pyx_t_2, __pyx_t_1, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 140, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_5);
          __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_5, NULL);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 140, __pyx_L9_except_error)
          __Pyx_GOTREF(__pyx_t_12);
          __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_t_12);
          __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
          if (__pyx_t_13 < 0) __PYX_ERR(0, 140, __pyx_L9_except_error)
          __pyx_t_14 = (!__pyx_t_13);
          if (unlikely(__pyx_t_14)) {
            __Pyx_GIVEREF(__pyx_t_2);
            __Pyx_GIVEREF(__pyx_t_1);
            __Pyx_XGIVEREF(__pyx_t_4);
            __Pyx_ErrRestoreWithState(__pyx_t_2, __pyx_t_1, __pyx_t_4);
            __pyx_t_2 = 0; __pyx_t_1 = 0; __pyx_t_4 = 0; 
            __PYX_ERR(0, 140, __pyx_L9_except_error)
          }
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
          __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
          goto __pyx_L8_exception_handled;
        }
        __pyx_L9_except_error:;
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
        goto __pyx_L1_error;
        __pyx_L11_try_return:;
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
        goto __pyx_L4_return;
        __pyx_L8_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_9);
      }
    }
    /*finally:*/ {
      /*normal exit:*/{
        if (__pyx_t_3) {
          __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__14, NULL);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 140, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_9);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        goto __pyx_L6;
      }
      __pyx_L4_return: {
        __pyx_t_9 = __pyx_r;
        __pyx_r = 0;
        if (__pyx_t_3) {
          __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__14, NULL);
          __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
          if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 140, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        __pyx_r = __pyx_t_9;
        __pyx_t_9 = 0;
        goto __pyx_L0;
      }
      __pyx_L6:;
    }
    goto __pyx_L19;
    __pyx_L3_error:;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    goto __pyx_L1_error;
    __pyx_L19:;
  }

  /* "zorya.py":139
 * 
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):             # <<<<<<<<<<<<<<
 *     with open(pdf_file, 'rb') as file:
 *         pdf_reader = PdfReader(file)
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_AddTraceback("zorya.extract_text_from_pdf", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_file);
  __Pyx_XDECREF(__pyx_v_pdf_reader);
  __Pyx_XDECREF(__pyx_v_text);
  __Pyx_XDECREF(__pyx_v_page);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":148
 * 
 * 
 * def process_message(             # <<<<<<<<<<<<<<
 *     message, lower_case=True, stem=True, stop_words=True, gram=1
 * ):
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_5process_message(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
PyDoc_STRVAR(__pyx_doc_5zorya_4process_message, "\nThis function transforms messages into a list of \"stemmed\" keywords, \nwhich is the heart of the algorithm's operation. If the \"gram\" value \nis less than 1 (gram > 1), not keywords but pairs of keywords will \nbe taken into account. This can vary the efficiency of data processing.\n    ");
static PyMethodDef __pyx_mdef_5zorya_5process_message = {"process_message", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_5process_message, __Pyx_METH_FASTCALL|METH_KEYWORDS, __pyx_doc_5zorya_4process_message};
static PyObject *__pyx_pw_5zorya_5process_message(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_message = 0;
  PyObject *__pyx_v_lower_case = 0;
  PyObject *__pyx_v_stem = 0;
  PyObject *__pyx_v_stop_words = 0;
  PyObject *__pyx_v_gram = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[5] = {0,0,0,0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("process_message (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_message,&__pyx_n_s_lower_case,&__pyx_n_s_stem,&__pyx_n_s_stop_words,&__pyx_n_s_gram,0};

    /* "zorya.py":149
 * 
 * def process_message(
 *     message, lower_case=True, stem=True, stop_words=True, gram=1             # <<<<<<<<<<<<<<
 * ):
 *     """
 */
    values[1] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)((PyObject *)Py_True)));
    values[2] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)((PyObject *)Py_True)));
    values[3] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)((PyObject *)Py_True)));
    values[4] = __Pyx_Arg_NewRef_FASTCALL(((PyObject *)((PyObject *)__pyx_int_1)));
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_message)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 148, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_lower_case);
          if (value) { values[1] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 148, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_stem);
          if (value) { values[2] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 148, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  3:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_stop_words);
          if (value) { values[3] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 148, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  4:
        if (kw_args > 0) {
          PyObject* value = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_gram);
          if (value) { values[4] = __Pyx_Arg_NewRef_FASTCALL(value); kw_args--; }
          else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 148, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "process_message") < 0)) __PYX_ERR(0, 148, __pyx_L3_error)
      }
    } else {
      switch (__pyx_nargs) {
        case  5: values[4] = __Pyx_Arg_FASTCALL(__pyx_args, 4);
        CYTHON_FALLTHROUGH;
        case  4: values[3] = __Pyx_Arg_FASTCALL(__pyx_args, 3);
        CYTHON_FALLTHROUGH;
        case  3: values[2] = __Pyx_Arg_FASTCALL(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_message = values[0];
    __pyx_v_lower_case = values[1];
    __pyx_v_stem = values[2];
    __pyx_v_stop_words = values[3];
    __pyx_v_gram = values[4];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("process_message", 0, 1, 5, __pyx_nargs); __PYX_ERR(0, 148, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.process_message", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_4process_message(__pyx_self, __pyx_v_message, __pyx_v_lower_case, __pyx_v_stem, __pyx_v_stop_words, __pyx_v_gram);

  /* "zorya.py":148
 * 
 * 
 * def process_message(             # <<<<<<<<<<<<<<
 *     message, lower_case=True, stem=True, stop_words=True, gram=1
 * ):
 */

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_4process_message(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_message, PyObject *__pyx_v_lower_case, PyObject *__pyx_v_stem, PyObject *__pyx_v_stop_words, PyObject *__pyx_v_gram) {
  PyObject *__pyx_v_words = NULL;
  PyObject *__pyx_v_w = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_sw = NULL;
  PyObject *__pyx_v_stemmer = NULL;
  PyObject *__pyx_7genexpr__pyx_v_w = NULL;
  PyObject *__pyx_8genexpr1__pyx_v_word = NULL;
  PyObject *__pyx_8genexpr2__pyx_v_word = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  unsigned int __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  Py_ssize_t __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("process_message", 0);
  __Pyx_INCREF(__pyx_v_message);

  /* "zorya.py":157
 * be taken into account. This can vary the efficiency of data processing.
 *     """
 *     if lower_case:             # <<<<<<<<<<<<<<
 *         message = message.lower()
 *     words = word_tokenize(message)
 */
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_v_lower_case); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 157, __pyx_L1_error)
  if (__pyx_t_1) {

    /* "zorya.py":158
 *     """
 *     if lower_case:
 *         message = message.lower()             # <<<<<<<<<<<<<<
 *     words = word_tokenize(message)
 *     words = [w for w in words if len(w) > 2]
 */
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_message, __pyx_n_s_lower); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 158, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_4)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_4);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_4, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 0+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 158, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __Pyx_DECREF_SET(__pyx_v_message, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":157
 * be taken into account. This can vary the efficiency of data processing.
 *     """
 *     if lower_case:             # <<<<<<<<<<<<<<
 *         message = message.lower()
 *     words = word_tokenize(message)
 */
  }

  /* "zorya.py":159
 *     if lower_case:
 *         message = message.lower()
 *     words = word_tokenize(message)             # <<<<<<<<<<<<<<
 *     words = [w for w in words if len(w) > 2]
 *     if gram > 1:
 */
  __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_word_tokenize); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 159, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = NULL;
  __pyx_t_5 = 0;
  #if CYTHON_UNPACK_METHODS
  if (unlikely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_4)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_4);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_5 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_4, __pyx_v_message};
    __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 159, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_v_words = __pyx_t_2;
  __pyx_t_2 = 0;

  /* "zorya.py":160
 *         message = message.lower()
 *     words = word_tokenize(message)
 *     words = [w for w in words if len(w) > 2]             # <<<<<<<<<<<<<<
 *     if gram > 1:
 *         w = []
 */
  { /* enter inner scope */
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 160, __pyx_L6_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (likely(PyList_CheckExact(__pyx_v_words)) || PyTuple_CheckExact(__pyx_v_words)) {
      __pyx_t_3 = __pyx_v_words; __Pyx_INCREF(__pyx_t_3);
      __pyx_t_6 = 0;
      __pyx_t_7 = NULL;
    } else {
      __pyx_t_6 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_v_words); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 160, __pyx_L6_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 160, __pyx_L6_error)
    }
    for (;;) {
      if (likely(!__pyx_t_7)) {
        if (likely(PyList_CheckExact(__pyx_t_3))) {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_3);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 160, __pyx_L6_error)
            #endif
            if (__pyx_t_6 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_4 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_6); __Pyx_INCREF(__pyx_t_4); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 160, __pyx_L6_error)
          #else
          __pyx_t_4 = __Pyx_PySequence_ITEM(__pyx_t_3, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 160, __pyx_L6_error)
          __Pyx_GOTREF(__pyx_t_4);
          #endif
        } else {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_3);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 160, __pyx_L6_error)
            #endif
            if (__pyx_t_6 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_6); __Pyx_INCREF(__pyx_t_4); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 160, __pyx_L6_error)
          #else
          __pyx_t_4 = __Pyx_PySequence_ITEM(__pyx_t_3, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 160, __pyx_L6_error)
          __Pyx_GOTREF(__pyx_t_4);
          #endif
        }
      } else {
        __pyx_t_4 = __pyx_t_7(__pyx_t_3);
        if (unlikely(!__pyx_t_4)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 160, __pyx_L6_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_4);
      }
      __Pyx_XDECREF_SET(__pyx_7genexpr__pyx_v_w, __pyx_t_4);
      __pyx_t_4 = 0;
      __pyx_t_8 = PyObject_Length(__pyx_7genexpr__pyx_v_w); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 160, __pyx_L6_error)
      __pyx_t_1 = (__pyx_t_8 > 2);
      if (__pyx_t_1) {
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_7genexpr__pyx_v_w))) __PYX_ERR(0, 160, __pyx_L6_error)
      }
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_XDECREF(__pyx_7genexpr__pyx_v_w); __pyx_7genexpr__pyx_v_w = 0;
    goto __pyx_L11_exit_scope;
    __pyx_L6_error:;
    __Pyx_XDECREF(__pyx_7genexpr__pyx_v_w); __pyx_7genexpr__pyx_v_w = 0;
    goto __pyx_L1_error;
    __pyx_L11_exit_scope:;
  } /* exit inner scope */
  __Pyx_DECREF_SET(__pyx_v_words, __pyx_t_2);
  __pyx_t_2 = 0;

  /* "zorya.py":161
 *     words = word_tokenize(message)
 *     words = [w for w in words if len(w) > 2]
 *     if gram > 1:             # <<<<<<<<<<<<<<
 *         w = []
 *         for i in range(len(words) - gram + 1):
 */
  __pyx_t_2 = PyObject_RichCompare(__pyx_v_gram, __pyx_int_1, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 161, __pyx_L1_error)
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 161, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_1) {

    /* "zorya.py":162
 *     words = [w for w in words if len(w) > 2]
 *     if gram > 1:
 *         w = []             # <<<<<<<<<<<<<<
 *         for i in range(len(words) - gram + 1):
 *             w += [" ".join(words[i : i + gram])]
 */
    __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 162, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_v_w = ((PyObject*)__pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":163
 *     if gram > 1:
 *         w = []
 *         for i in range(len(words) - gram + 1):             # <<<<<<<<<<<<<<
 *             w += [" ".join(words[i : i + gram])]
 *         return w
 */
    __pyx_t_6 = PyObject_Length(__pyx_v_words); if (unlikely(__pyx_t_6 == ((Py_ssize_t)-1))) __PYX_ERR(0, 163, __pyx_L1_error)
    __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 163, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = PyNumber_Subtract(__pyx_t_2, __pyx_v_gram); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 163, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_3, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 163, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 163, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (likely(PyList_CheckExact(__pyx_t_3)) || PyTuple_CheckExact(__pyx_t_3)) {
      __pyx_t_2 = __pyx_t_3; __Pyx_INCREF(__pyx_t_2);
      __pyx_t_6 = 0;
      __pyx_t_7 = NULL;
    } else {
      __pyx_t_6 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 163, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 163, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    for (;;) {
      if (likely(!__pyx_t_7)) {
        if (likely(PyList_CheckExact(__pyx_t_2))) {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 163, __pyx_L1_error)
            #endif
            if (__pyx_t_6 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_3 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 163, __pyx_L1_error)
          #else
          __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 163, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_3);
          #endif
        } else {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 163, __pyx_L1_error)
            #endif
            if (__pyx_t_6 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 163, __pyx_L1_error)
          #else
          __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 163, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_3);
          #endif
        }
      } else {
        __pyx_t_3 = __pyx_t_7(__pyx_t_2);
        if (unlikely(!__pyx_t_3)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 163, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_3);
      }
      __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_3);
      __pyx_t_3 = 0;

      /* "zorya.py":164
 *         w = []
 *         for i in range(len(words) - gram + 1):
 *             w += [" ".join(words[i : i + gram])]             # <<<<<<<<<<<<<<
 *         return w
 *     if stop_words:
 */
      __pyx_t_3 = PyNumber_Add(__pyx_v_i, __pyx_v_gram); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 164, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __pyx_t_4 = __Pyx_PyObject_GetSlice(__pyx_v_words, 0, 0, &__pyx_v_i, &__pyx_t_3, NULL, 0, 0, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 164, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      __pyx_t_3 = PyUnicode_Join(__pyx_kp_u__15, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 164, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __pyx_t_4 = PyList_New(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 164, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_GIVEREF(__pyx_t_3);
      if (__Pyx_PyList_SET_ITEM(__pyx_t_4, 0, __pyx_t_3)) __PYX_ERR(0, 164, __pyx_L1_error);
      __pyx_t_3 = 0;
      __pyx_t_3 = PyNumber_InPlaceAdd(__pyx_v_w, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 164, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_DECREF_SET(__pyx_v_w, ((PyObject*)__pyx_t_3));
      __pyx_t_3 = 0;

      /* "zorya.py":163
 *     if gram > 1:
 *         w = []
 *         for i in range(len(words) - gram + 1):             # <<<<<<<<<<<<<<
 *             w += [" ".join(words[i : i + gram])]
 *         return w
 */
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

    /* "zorya.py":165
 *         for i in range(len(words) - gram + 1):
 *             w += [" ".join(words[i : i + gram])]
 *         return w             # <<<<<<<<<<<<<<
 *     if stop_words:
 *         sw = stopwords.words("english")
 */
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_w);
    __pyx_r = __pyx_v_w;
    goto __pyx_L0;

    /* "zorya.py":161
 *     words = word_tokenize(message)
 *     words = [w for w in words if len(w) > 2]
 *     if gram > 1:             # <<<<<<<<<<<<<<
 *         w = []
 *         for i in range(len(words) - gram + 1):
 */
  }

  /* "zorya.py":166
 *             w += [" ".join(words[i : i + gram])]
 *         return w
 *     if stop_words:             # <<<<<<<<<<<<<<
 *         sw = stopwords.words("english")
 *         words = [word for word in words if word not in sw]
 */
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_v_stop_words); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 166, __pyx_L1_error)
  if (__pyx_t_1) {

    /* "zorya.py":167
 *         return w
 *     if stop_words:
 *         sw = stopwords.words("english")             # <<<<<<<<<<<<<<
 *         words = [word for word in words if word not in sw]
 *     if stem:
 */
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_stopwords); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 167, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_words); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 167, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_n_u_english};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 167, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_v_sw = __pyx_t_2;
    __pyx_t_2 = 0;

    /* "zorya.py":168
 *     if stop_words:
 *         sw = stopwords.words("english")
 *         words = [word for word in words if word not in sw]             # <<<<<<<<<<<<<<
 *     if stem:
 *         stemmer = PorterStemmer()
 */
    { /* enter inner scope */
      __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 168, __pyx_L19_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (likely(PyList_CheckExact(__pyx_v_words)) || PyTuple_CheckExact(__pyx_v_words)) {
        __pyx_t_4 = __pyx_v_words; __Pyx_INCREF(__pyx_t_4);
        __pyx_t_6 = 0;
        __pyx_t_7 = NULL;
      } else {
        __pyx_t_6 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_v_words); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 168, __pyx_L19_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_4); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 168, __pyx_L19_error)
      }
      for (;;) {
        if (likely(!__pyx_t_7)) {
          if (likely(PyList_CheckExact(__pyx_t_4))) {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_4);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 168, __pyx_L19_error)
              #endif
              if (__pyx_t_6 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_3 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 168, __pyx_L19_error)
            #else
            __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_4, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 168, __pyx_L19_error)
            __Pyx_GOTREF(__pyx_t_3);
            #endif
          } else {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_4);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 168, __pyx_L19_error)
              #endif
              if (__pyx_t_6 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 168, __pyx_L19_error)
            #else
            __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_4, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 168, __pyx_L19_error)
            __Pyx_GOTREF(__pyx_t_3);
            #endif
          }
        } else {
          __pyx_t_3 = __pyx_t_7(__pyx_t_4);
          if (unlikely(!__pyx_t_3)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 168, __pyx_L19_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_3);
        }
        __Pyx_XDECREF_SET(__pyx_8genexpr1__pyx_v_word, __pyx_t_3);
        __pyx_t_3 = 0;
        __pyx_t_1 = (__Pyx_PySequence_ContainsTF(__pyx_8genexpr1__pyx_v_word, __pyx_v_sw, Py_NE)); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 168, __pyx_L19_error)
        if (__pyx_t_1) {
          if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_8genexpr1__pyx_v_word))) __PYX_ERR(0, 168, __pyx_L19_error)
        }
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_word); __pyx_8genexpr1__pyx_v_word = 0;
      goto __pyx_L24_exit_scope;
      __pyx_L19_error:;
      __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_word); __pyx_8genexpr1__pyx_v_word = 0;
      goto __pyx_L1_error;
      __pyx_L24_exit_scope:;
    } /* exit inner scope */
    __Pyx_DECREF_SET(__pyx_v_words, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":166
 *             w += [" ".join(words[i : i + gram])]
 *         return w
 *     if stop_words:             # <<<<<<<<<<<<<<
 *         sw = stopwords.words("english")
 *         words = [word for word in words if word not in sw]
 */
  }

  /* "zorya.py":169
 *         sw = stopwords.words("english")
 *         words = [word for word in words if word not in sw]
 *     if stem:             # <<<<<<<<<<<<<<
 *         stemmer = PorterStemmer()
 *         words = [stemmer.stem(word) for word in words]
 */
  __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_v_stem); if (unlikely((__pyx_t_1 < 0))) __PYX_ERR(0, 169, __pyx_L1_error)
  if (__pyx_t_1) {

    /* "zorya.py":170
 *         words = [word for word in words if word not in sw]
 *     if stem:
 *         stemmer = PorterStemmer()             # <<<<<<<<<<<<<<
 *         words = [stemmer.stem(word) for word in words]
 *     return words
 */
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_PorterStemmer); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 170, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_3 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 0+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 170, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_v_stemmer = __pyx_t_2;
    __pyx_t_2 = 0;

    /* "zorya.py":171
 *     if stem:
 *         stemmer = PorterStemmer()
 *         words = [stemmer.stem(word) for word in words]             # <<<<<<<<<<<<<<
 *     return words
 * 
 */
    { /* enter inner scope */
      __pyx_t_2 = PyList_New(0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 171, __pyx_L28_error)
      __Pyx_GOTREF(__pyx_t_2);
      if (likely(PyList_CheckExact(__pyx_v_words)) || PyTuple_CheckExact(__pyx_v_words)) {
        __pyx_t_4 = __pyx_v_words; __Pyx_INCREF(__pyx_t_4);
        __pyx_t_6 = 0;
        __pyx_t_7 = NULL;
      } else {
        __pyx_t_6 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_v_words); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 171, __pyx_L28_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_4); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 171, __pyx_L28_error)
      }
      for (;;) {
        if (likely(!__pyx_t_7)) {
          if (likely(PyList_CheckExact(__pyx_t_4))) {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_4);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 171, __pyx_L28_error)
              #endif
              if (__pyx_t_6 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_3 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 171, __pyx_L28_error)
            #else
            __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_4, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 171, __pyx_L28_error)
            __Pyx_GOTREF(__pyx_t_3);
            #endif
          } else {
            {
              Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_4);
              #if !CYTHON_ASSUME_SAFE_MACROS
              if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 171, __pyx_L28_error)
              #endif
              if (__pyx_t_6 >= __pyx_temp) break;
            }
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_6); __Pyx_INCREF(__pyx_t_3); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 171, __pyx_L28_error)
            #else
            __pyx_t_3 = __Pyx_PySequence_ITEM(__pyx_t_4, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 171, __pyx_L28_error)
            __Pyx_GOTREF(__pyx_t_3);
            #endif
          }
        } else {
          __pyx_t_3 = __pyx_t_7(__pyx_t_4);
          if (unlikely(!__pyx_t_3)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 171, __pyx_L28_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_3);
        }
        __Pyx_XDECREF_SET(__pyx_8genexpr2__pyx_v_word, __pyx_t_3);
        __pyx_t_3 = 0;
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_stemmer, __pyx_n_s_stem); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 171, __pyx_L28_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_10 = NULL;
        __pyx_t_5 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_10)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_10);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
            __pyx_t_5 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[2] = {__pyx_t_10, __pyx_8genexpr2__pyx_v_word};
          __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
          __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
          if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 171, __pyx_L28_error)
          __Pyx_GOTREF(__pyx_t_3);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_2, (PyObject*)__pyx_t_3))) __PYX_ERR(0, 171, __pyx_L28_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
      }
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      __Pyx_XDECREF(__pyx_8genexpr2__pyx_v_word); __pyx_8genexpr2__pyx_v_word = 0;
      goto __pyx_L32_exit_scope;
      __pyx_L28_error:;
      __Pyx_XDECREF(__pyx_8genexpr2__pyx_v_word); __pyx_8genexpr2__pyx_v_word = 0;
      goto __pyx_L1_error;
      __pyx_L32_exit_scope:;
    } /* exit inner scope */
    __Pyx_DECREF_SET(__pyx_v_words, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":169
 *         sw = stopwords.words("english")
 *         words = [word for word in words if word not in sw]
 *     if stem:             # <<<<<<<<<<<<<<
 *         stemmer = PorterStemmer()
 *         words = [stemmer.stem(word) for word in words]
 */
  }

  /* "zorya.py":172
 *         stemmer = PorterStemmer()
 *         words = [stemmer.stem(word) for word in words]
 *     return words             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_words);
  __pyx_r = __pyx_v_words;
  goto __pyx_L0;

  /* "zorya.py":148
 * 
 * 
 * def process_message(             # <<<<<<<<<<<<<<
 *     message, lower_case=True, stem=True, stop_words=True, gram=1
 * ):
 */

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("zorya.process_message", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_words);
  __Pyx_XDECREF(__pyx_v_w);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_sw);
  __Pyx_XDECREF(__pyx_v_stemmer);
  __Pyx_XDECREF(__pyx_7genexpr__pyx_v_w);
  __Pyx_XDECREF(__pyx_8genexpr1__pyx_v_word);
  __Pyx_XDECREF(__pyx_8genexpr2__pyx_v_word);
  __Pyx_XDECREF(__pyx_v_message);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":176
 * 
 * class suspicious_terms_classifier:
 *     def __init__(self, trainData):             # <<<<<<<<<<<<<<
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_27suspicious_terms_classifier_1__init__ = {"__init__", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_27suspicious_terms_classifier_1__init__, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_trainData = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_trainData,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 176, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_trainData)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 176, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, 1); __PYX_ERR(0, 176, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "__init__") < 0)) __PYX_ERR(0, 176, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_trainData = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 176, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_27suspicious_terms_classifier___init__(__pyx_self, __pyx_v_self, __pyx_v_trainData);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_trainData) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 1);

  /* "zorya.py":177
 * class suspicious_terms_classifier:
 *     def __init__(self, trainData):
 *         self.terms, self.labels = trainData["message"], trainData["label"]             # <<<<<<<<<<<<<<
 * 
 *     def train(self):
 */
  __pyx_t_1 = __Pyx_PyObject_Dict_GetItem(__pyx_v_trainData, __pyx_n_u_message); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_Dict_GetItem(__pyx_v_trainData, __pyx_n_u_label); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_terms, __pyx_t_1) < 0) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_labels, __pyx_t_2) < 0) __PYX_ERR(0, 177, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":176
 * 
 * class suspicious_terms_classifier:
 *     def __init__(self, trainData):             # <<<<<<<<<<<<<<
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":179
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_3train(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_27suspicious_terms_classifier_3train = {"train", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_27suspicious_terms_classifier_3train, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_3train(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("train (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 179, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "train") < 0)) __PYX_ERR(0, 179, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("train", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 179, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.train", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_27suspicious_terms_classifier_2train(__pyx_self, __pyx_v_self);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_2train(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("train", 1);

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":182
 *         pass
 * 
 *     def classify(self, message):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_5classify(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_27suspicious_terms_classifier_5classify = {"classify", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_27suspicious_terms_classifier_5classify, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_5classify(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  CYTHON_UNUSED PyObject *__pyx_v_self = 0;
  CYTHON_UNUSED PyObject *__pyx_v_message = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("classify (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_message,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 182, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_message)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 182, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("classify", 1, 2, 2, 1); __PYX_ERR(0, 182, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "classify") < 0)) __PYX_ERR(0, 182, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_message = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("classify", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 182, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.classify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_27suspicious_terms_classifier_4classify(__pyx_self, __pyx_v_self, __pyx_v_message);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_4classify(CYTHON_UNUSED PyObject *__pyx_self, CYTHON_UNUSED PyObject *__pyx_v_self, CYTHON_UNUSED PyObject *__pyx_v_message) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("classify", 1);

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":185
 *         pass
 * 
 *     def calc_TF_and_IDF(self):             # <<<<<<<<<<<<<<
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.
 *         self.suspicious_terms, self.neutral_terms = (
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_7calc_TF_and_IDF(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_27suspicious_terms_classifier_7calc_TF_and_IDF = {"calc_TF_and_IDF", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_27suspicious_terms_classifier_7calc_TF_and_IDF, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_7calc_TF_and_IDF(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("calc_TF_and_IDF (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 185, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "calc_TF_and_IDF") < 0)) __PYX_ERR(0, 185, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("calc_TF_and_IDF", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 185, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.calc_TF_and_IDF", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_27suspicious_terms_classifier_6calc_TF_and_IDF(__pyx_self, __pyx_v_self);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_6calc_TF_and_IDF(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_v_number_of_lines = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_message_processed = NULL;
  PyObject *__pyx_v_count = NULL;
  PyObject *__pyx_v_word = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  unsigned int __pyx_t_4;
  PyObject *__pyx_t_5 = NULL;
  Py_ssize_t __pyx_t_6;
  PyObject *(*__pyx_t_7)(PyObject *);
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  Py_ssize_t __pyx_t_10;
  PyObject *(*__pyx_t_11)(PyObject *);
  int __pyx_t_12;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("calc_TF_and_IDF", 1);

  /* "zorya.py":186
 * 
 *     def calc_TF_and_IDF(self):
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.             # <<<<<<<<<<<<<<
 *         self.suspicious_terms, self.neutral_terms = (
 *             self.labels.value_counts()[1],
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_terms); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_shape); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_GetItemInt(__pyx_t_2, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 186, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_v_number_of_lines = __pyx_t_1;
  __pyx_t_1 = 0;

  /* "zorya.py":188
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.
 *         self.suspicious_terms, self.neutral_terms = (
 *             self.labels.value_counts()[1],             # <<<<<<<<<<<<<<
 *             self.labels.value_counts()[0],
 *         )
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_labels); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_value_counts); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_3))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_3, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  }
  __pyx_t_3 = __Pyx_GetItemInt(__pyx_t_1, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":189
 *         self.suspicious_terms, self.neutral_terms = (
 *             self.labels.value_counts()[1],
 *             self.labels.value_counts()[0],             # <<<<<<<<<<<<<<
 *         )
 *         self.total_terms = self.suspicious_terms + self.neutral_terms
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_labels); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_value_counts); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_2)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_2);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_2, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 189, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }
  __pyx_t_5 = __Pyx_GetItemInt(__pyx_t_1, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 189, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":187
 *     def calc_TF_and_IDF(self):
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.
 *         self.suspicious_terms, self.neutral_terms = (             # <<<<<<<<<<<<<<
 *             self.labels.value_counts()[1],
 *             self.labels.value_counts()[0],
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_terms, __pyx_t_3) < 0) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_neutral_terms, __pyx_t_5) < 0) __PYX_ERR(0, 187, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /* "zorya.py":191
 *             self.labels.value_counts()[0],
 *         )
 *         self.total_terms = self.suspicious_terms + self.neutral_terms             # <<<<<<<<<<<<<<
 *         self.suspicious_words = 0
 *         # Number of words flagged as suspect.
 */
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_terms); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 191, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_terms); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 191, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_1 = PyNumber_Add(__pyx_t_5, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 191, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_total_terms, __pyx_t_1) < 0) __PYX_ERR(0, 191, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":192
 *         )
 *         self.total_terms = self.suspicious_terms + self.neutral_terms
 *         self.suspicious_words = 0             # <<<<<<<<<<<<<<
 *         # Number of words flagged as suspect.
 *         self.neutral_words = 0
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_words, __pyx_int_0) < 0) __PYX_ERR(0, 192, __pyx_L1_error)

  /* "zorya.py":194
 *         self.suspicious_words = 0
 *         # Number of words flagged as suspect.
 *         self.neutral_words = 0             # <<<<<<<<<<<<<<
 *         # Number of words flagged as neutral.
 *         self.tf_suspicious = dict()
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_neutral_words, __pyx_int_0) < 0) __PYX_ERR(0, 194, __pyx_L1_error)

  /* "zorya.py":196
 *         self.neutral_words = 0
 *         # Number of words flagged as neutral.
 *         self.tf_suspicious = dict()             # <<<<<<<<<<<<<<
 *         # Dictionary with the TF of each word in the suspect data.
 *         self.tf_neutral = dict()
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 196, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious, __pyx_t_1) < 0) __PYX_ERR(0, 196, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":198
 *         self.tf_suspicious = dict()
 *         # Dictionary with the TF of each word in the suspect data.
 *         self.tf_neutral = dict()             # <<<<<<<<<<<<<<
 *         # Dictionary with the TF of each word in the neutral data.
 *         self.idf_suspicious = dict()
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 198, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral, __pyx_t_1) < 0) __PYX_ERR(0, 198, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":200
 *         self.tf_neutral = dict()
 *         # Dictionary with the TF of each word in the neutral data.
 *         self.idf_suspicious = dict()             # <<<<<<<<<<<<<<
 *         # Dictionary with the IDF of each word in the suspect data.
 *         self.idf_neutral = dict()
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 200, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_idf_suspicious, __pyx_t_1) < 0) __PYX_ERR(0, 200, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":202
 *         self.idf_suspicious = dict()
 *         # Dictionary with the IDF of each word in the suspect data.
 *         self.idf_neutral = dict()             # <<<<<<<<<<<<<<
 * 
 *         # Dictionary with the IDF of each word in the neutral data.
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 202, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_idf_neutral, __pyx_t_1) < 0) __PYX_ERR(0, 202, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":205
 * 
 *         # Dictionary with the IDF of each word in the neutral data.
 *         for i in range(number_of_lines):             # <<<<<<<<<<<<<<
 *             # Invoking nltk libraries :)
 *             message_processed = process_message(self.terms.get(i))
 */
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_number_of_lines); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_3 = __pyx_t_1; __Pyx_INCREF(__pyx_t_3);
    __pyx_t_6 = 0;
    __pyx_t_7 = NULL;
  } else {
    __pyx_t_6 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 205, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 205, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_7)) {
      if (likely(PyList_CheckExact(__pyx_t_3))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_3);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 205, __pyx_L1_error)
          #endif
          if (__pyx_t_6 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 205, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_3, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_3);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 205, __pyx_L1_error)
          #endif
          if (__pyx_t_6 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely((0 < 0))) __PYX_ERR(0, 205, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_3, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 205, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_7(__pyx_t_3);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 205, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":207
 *         for i in range(number_of_lines):
 *             # Invoking nltk libraries :)
 *             message_processed = process_message(self.terms.get(i))             # <<<<<<<<<<<<<<
 *             count = list()
 *             # Save whether or not a word has appeared in the message.
 */
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_process_message); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_terms); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_get); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 207, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_9))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_9);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_9, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_v_i};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 207, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    }
    __pyx_t_9 = NULL;
    __pyx_t_4 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_9)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_9);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_4 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_9, __pyx_t_2};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 1+__pyx_t_4);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 207, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    __Pyx_XDECREF_SET(__pyx_v_message_processed, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":208
 *             # Invoking nltk libraries :)
 *             message_processed = process_message(self.terms.get(i))
 *             count = list()             # <<<<<<<<<<<<<<
 *             # Save whether or not a word has appeared in the message.
 *             # IDF
 */
    __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 208, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_XDECREF_SET(__pyx_v_count, ((PyObject*)__pyx_t_1));
    __pyx_t_1 = 0;

    /* "zorya.py":211
 *             # Save whether or not a word has appeared in the message.
 *             # IDF
 *             for word in message_processed:             # <<<<<<<<<<<<<<
 *                 if self.labels[i]:
 *                     self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1
 */
    if (likely(PyList_CheckExact(__pyx_v_message_processed)) || PyTuple_CheckExact(__pyx_v_message_processed)) {
      __pyx_t_1 = __pyx_v_message_processed; __Pyx_INCREF(__pyx_t_1);
      __pyx_t_10 = 0;
      __pyx_t_11 = NULL;
    } else {
      __pyx_t_10 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_v_message_processed); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 211, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_11 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 211, __pyx_L1_error)
    }
    for (;;) {
      if (likely(!__pyx_t_11)) {
        if (likely(PyList_CheckExact(__pyx_t_1))) {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 211, __pyx_L1_error)
            #endif
            if (__pyx_t_10 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_5 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_10); __Pyx_INCREF(__pyx_t_5); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 211, __pyx_L1_error)
          #else
          __pyx_t_5 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          #endif
        } else {
          {
            Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_1);
            #if !CYTHON_ASSUME_SAFE_MACROS
            if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 211, __pyx_L1_error)
            #endif
            if (__pyx_t_10 >= __pyx_temp) break;
          }
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_10); __Pyx_INCREF(__pyx_t_5); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 211, __pyx_L1_error)
          #else
          __pyx_t_5 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_5);
          #endif
        }
      } else {
        __pyx_t_5 = __pyx_t_11(__pyx_t_1);
        if (unlikely(!__pyx_t_5)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 211, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_5);
      }
      __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_5);
      __pyx_t_5 = 0;

      /* "zorya.py":212
 *             # IDF
 *             for word in message_processed:
 *                 if self.labels[i]:             # <<<<<<<<<<<<<<
 *                     self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1
 *                     self.suspicious_words += 1
 */
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_labels); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_t_5, __pyx_v_i); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 212, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_12 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_12 < 0))) __PYX_ERR(0, 212, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (__pyx_t_12) {

        /* "zorya.py":213
 *             for word in message_processed:
 *                 if self.labels[i]:
 *                     self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1             # <<<<<<<<<<<<<<
 *                     self.suspicious_words += 1
 *                     # Calculates the TF of a word in the suspect data.
 */
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 213, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 213, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_5, __pyx_v_word, __pyx_int_0};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 213, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        __pyx_t_9 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 213, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 213, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        if (unlikely((PyObject_SetItem(__pyx_t_2, __pyx_v_word, __pyx_t_9) < 0))) __PYX_ERR(0, 213, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

        /* "zorya.py":214
 *                 if self.labels[i]:
 *                     self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1
 *                     self.suspicious_words += 1             # <<<<<<<<<<<<<<
 *                     # Calculates the TF of a word in the suspect data.
 *                 else:
 */
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_words); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 214, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_9, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 214, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_words, __pyx_t_2) < 0) __PYX_ERR(0, 214, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

        /* "zorya.py":212
 *             # IDF
 *             for word in message_processed:
 *                 if self.labels[i]:             # <<<<<<<<<<<<<<
 *                     self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1
 *                     self.suspicious_words += 1
 */
        goto __pyx_L7;
      }

      /* "zorya.py":217
 *                     # Calculates the TF of a word in the suspect data.
 *                 else:
 *                     self.tf_neutral[word] = self.tf_neutral.get(word, 0) + 1             # <<<<<<<<<<<<<<
 *                     self.neutral_words += 1
 *                     # Calculates the TF of a word in the neutral data.
 */
      /*else*/ {
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 217, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 217, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_9)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_9);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_9, __pyx_v_word, __pyx_int_0};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 217, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        }
        __pyx_t_5 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 217, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 217, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        if (unlikely((PyObject_SetItem(__pyx_t_2, __pyx_v_word, __pyx_t_5) < 0))) __PYX_ERR(0, 217, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

        /* "zorya.py":218
 *                 else:
 *                     self.tf_neutral[word] = self.tf_neutral.get(word, 0) + 1
 *                     self.neutral_words += 1             # <<<<<<<<<<<<<<
 *                     # Calculates the TF of a word in the neutral data.
 *                 if word not in count:
 */
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_words); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 218, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_5, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 218, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_neutral_words, __pyx_t_2) < 0) __PYX_ERR(0, 218, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      }
      __pyx_L7:;

      /* "zorya.py":220
 *                     self.neutral_words += 1
 *                     # Calculates the TF of a word in the neutral data.
 *                 if word not in count:             # <<<<<<<<<<<<<<
 *                     count += [word]
 *             for word in count:
 */
      __pyx_t_12 = (__Pyx_PySequence_ContainsTF(__pyx_v_word, __pyx_v_count, Py_NE)); if (unlikely((__pyx_t_12 < 0))) __PYX_ERR(0, 220, __pyx_L1_error)
      if (__pyx_t_12) {

        /* "zorya.py":221
 *                     # Calculates the TF of a word in the neutral data.
 *                 if word not in count:
 *                     count += [word]             # <<<<<<<<<<<<<<
 *             for word in count:
 *                 if self.labels[i]:
 */
        __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 221, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_INCREF(__pyx_v_word);
        __Pyx_GIVEREF(__pyx_v_word);
        if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_v_word)) __PYX_ERR(0, 221, __pyx_L1_error);
        __pyx_t_5 = PyNumber_InPlaceAdd(__pyx_v_count, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 221, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF_SET(__pyx_v_count, ((PyObject*)__pyx_t_5));
        __pyx_t_5 = 0;

        /* "zorya.py":220
 *                     self.neutral_words += 1
 *                     # Calculates the TF of a word in the neutral data.
 *                 if word not in count:             # <<<<<<<<<<<<<<
 *                     count += [word]
 *             for word in count:
 */
      }

      /* "zorya.py":211
 *             # Save whether or not a word has appeared in the message.
 *             # IDF
 *             for word in message_processed:             # <<<<<<<<<<<<<<
 *                 if self.labels[i]:
 *                     self.tf_suspicious[word] = self.tf_suspicious.get(word, 0) + 1
 */
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":222
 *                 if word not in count:
 *                     count += [word]
 *             for word in count:             # <<<<<<<<<<<<<<
 *                 if self.labels[i]:
 *                     self.idf_suspicious[word] = self.idf_suspicious.get(word, 0) + 1
 */
    __pyx_t_1 = __pyx_v_count; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_10 = 0;
    for (;;) {
      {
        Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
        #if !CYTHON_ASSUME_SAFE_MACROS
        if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 222, __pyx_L1_error)
        #endif
        if (__pyx_t_10 >= __pyx_temp) break;
      }
      #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
      __pyx_t_5 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_10); __Pyx_INCREF(__pyx_t_5); __pyx_t_10++; if (unlikely((0 < 0))) __PYX_ERR(0, 222, __pyx_L1_error)
      #else
      __pyx_t_5 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_10); __pyx_t_10++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 222, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      #endif
      __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_5);
      __pyx_t_5 = 0;

      /* "zorya.py":223
 *                     count += [word]
 *             for word in count:
 *                 if self.labels[i]:             # <<<<<<<<<<<<<<
 *                     self.idf_suspicious[word] = self.idf_suspicious.get(word, 0) + 1
 *                     # Calculates the idf (the number of suspect data items containing this word).
 */
      __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_labels); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 223, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_t_5, __pyx_v_i); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 223, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_12 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_12 < 0))) __PYX_ERR(0, 223, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (__pyx_t_12) {

        /* "zorya.py":224
 *             for word in count:
 *                 if self.labels[i]:
 *                     self.idf_suspicious[word] = self.idf_suspicious.get(word, 0) + 1             # <<<<<<<<<<<<<<
 *                     # Calculates the idf (the number of suspect data items containing this word).
 *                 else:
 */
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_suspicious); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 224, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 224, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_9))) {
          __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_9);
          if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_5, __pyx_v_word, __pyx_int_0};
          __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
          if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 224, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
        __pyx_t_9 = __Pyx_PyInt_AddObjC(__pyx_t_2, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 224, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_suspicious); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 224, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        if (unlikely((PyObject_SetItem(__pyx_t_2, __pyx_v_word, __pyx_t_9) < 0))) __PYX_ERR(0, 224, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

        /* "zorya.py":223
 *                     count += [word]
 *             for word in count:
 *                 if self.labels[i]:             # <<<<<<<<<<<<<<
 *                     self.idf_suspicious[word] = self.idf_suspicious.get(word, 0) + 1
 *                     # Calculates the idf (the number of suspect data items containing this word).
 */
        goto __pyx_L12;
      }

      /* "zorya.py":227
 *                     # Calculates the idf (the number of suspect data items containing this word).
 *                 else:
 *                     self.idf_neutral[word] = self.idf_neutral.get(word, 0) + 1             # <<<<<<<<<<<<<<
 *                     # Calculates the idf (the number of neutral data items containing this word).
 * 
 */
      /*else*/ {
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_neutral); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_get); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = NULL;
        __pyx_t_4 = 0;
        #if CYTHON_UNPACK_METHODS
        if (likely(PyMethod_Check(__pyx_t_5))) {
          __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
          if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
            __pyx_t_4 = 1;
          }
        }
        #endif
        {
          PyObject *__pyx_callargs[3] = {__pyx_t_2, __pyx_v_word, __pyx_int_0};
          __pyx_t_9 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_4, 2+__pyx_t_4);
          __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
          if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 227, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_9);
          __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        }
        __pyx_t_5 = __Pyx_PyInt_AddObjC(__pyx_t_9, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_neutral); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        if (unlikely((PyObject_SetItem(__pyx_t_9, __pyx_v_word, __pyx_t_5) < 0))) __PYX_ERR(0, 227, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __pyx_L12:;

      /* "zorya.py":222
 *                 if word not in count:
 *                     count += [word]
 *             for word in count:             # <<<<<<<<<<<<<<
 *                 if self.labels[i]:
 *                     self.idf_suspicious[word] = self.idf_suspicious.get(word, 0) + 1
 */
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":205
 * 
 *         # Dictionary with the IDF of each word in the neutral data.
 *         for i in range(number_of_lines):             # <<<<<<<<<<<<<<
 *             # Invoking nltk libraries :)
 *             message_processed = process_message(self.terms.get(i))
 */
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":185
 *         pass
 * 
 *     def calc_TF_and_IDF(self):             # <<<<<<<<<<<<<<
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.
 *         self.suspicious_terms, self.neutral_terms = (
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.calc_TF_and_IDF", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_number_of_lines);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_message_processed);
  __Pyx_XDECREF(__pyx_v_count);
  __Pyx_XDECREF(__pyx_v_word);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":230
 *                     # Calculates the idf (the number of neutral data items containing this word).
 * 
 *     def predict(self, testData):             # <<<<<<<<<<<<<<
 *         # Invokes the classifier for Test Set messages
 *         result = dict()
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_9predict(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_27suspicious_terms_classifier_9predict = {"predict", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_27suspicious_terms_classifier_9predict, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_27suspicious_terms_classifier_9predict(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_testData = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("predict (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_testData,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 230, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_testData)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 230, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("predict", 1, 2, 2, 1); __PYX_ERR(0, 230, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "predict") < 0)) __PYX_ERR(0, 230, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_testData = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("predict", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 230, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.predict", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_27suspicious_terms_classifier_8predict(__pyx_self, __pyx_v_self, __pyx_v_testData);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_27suspicious_terms_classifier_8predict(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_testData) {
  PyObject *__pyx_v_result = NULL;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_message = NULL;
  PyObject *__pyx_v_processed_message = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  unsigned int __pyx_t_8;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("predict", 1);

  /* "zorya.py":232
 *     def predict(self, testData):
 *         # Invokes the classifier for Test Set messages
 *         result = dict()             # <<<<<<<<<<<<<<
 *         for (i, message) in enumerate(testData):
 *             processed_message = process_message(message)
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 232, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_result = ((PyObject*)__pyx_t_1);
  __pyx_t_1 = 0;

  /* "zorya.py":233
 *         # Invokes the classifier for Test Set messages
 *         result = dict()
 *         for (i, message) in enumerate(testData):             # <<<<<<<<<<<<<<
 *             processed_message = process_message(message)
 *             result[i] = int(self.classify(processed_message))
 */
  __Pyx_INCREF(__pyx_int_0);
  __pyx_t_1 = __pyx_int_0;
  if (likely(PyList_CheckExact(__pyx_v_testData)) || PyTuple_CheckExact(__pyx_v_testData)) {
    __pyx_t_2 = __pyx_v_testData; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_v_testData); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 233, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 233, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 233, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_5 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_5); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 233, __pyx_L1_error)
        #else
        __pyx_t_5 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 233, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 233, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_5); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 233, __pyx_L1_error)
        #else
        __pyx_t_5 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 233, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
        #endif
      }
    } else {
      __pyx_t_5 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_5)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 233, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_5);
    }
    __Pyx_XDECREF_SET(__pyx_v_message, __pyx_t_5);
    __pyx_t_5 = 0;
    __Pyx_INCREF(__pyx_t_1);
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
    __pyx_t_5 = __Pyx_PyInt_AddObjC(__pyx_t_1, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 233, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1);
    __pyx_t_1 = __pyx_t_5;
    __pyx_t_5 = 0;

    /* "zorya.py":234
 *         result = dict()
 *         for (i, message) in enumerate(testData):
 *             processed_message = process_message(message)             # <<<<<<<<<<<<<<
 *             result[i] = int(self.classify(processed_message))
 *         return result
 */
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_process_message); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 234, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_v_message};
      __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 234, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __Pyx_XDECREF_SET(__pyx_v_processed_message, __pyx_t_5);
    __pyx_t_5 = 0;

    /* "zorya.py":235
 *         for (i, message) in enumerate(testData):
 *             processed_message = process_message(message)
 *             result[i] = int(self.classify(processed_message))             # <<<<<<<<<<<<<<
 *         return result
 * 
 */
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_classify_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 235, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_v_processed_message};
      __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 235, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __pyx_t_6 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 235, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely((PyDict_SetItem(__pyx_v_result, __pyx_v_i, __pyx_t_6) < 0))) __PYX_ERR(0, 235, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

    /* "zorya.py":233
 *         # Invokes the classifier for Test Set messages
 *         result = dict()
 *         for (i, message) in enumerate(testData):             # <<<<<<<<<<<<<<
 *             processed_message = process_message(message)
 *             result[i] = int(self.classify(processed_message))
 */
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":236
 *             processed_message = process_message(message)
 *             result[i] = int(self.classify(processed_message))
 *         return result             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_result);
  __pyx_r = __pyx_v_result;
  goto __pyx_L0;

  /* "zorya.py":230
 *                     # Calculates the idf (the number of neutral data items containing this word).
 * 
 *     def predict(self, testData):             # <<<<<<<<<<<<<<
 *         # Invokes the classifier for Test Set messages
 *         result = dict()
 */

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("zorya.suspicious_terms_classifier.predict", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_result);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_message);
  __Pyx_XDECREF(__pyx_v_processed_message);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":240
 * 
 * class TFIDFCLassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_15TFIDFCLassifier_1__init__ = {"__init__", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_15TFIDFCLassifier_1__init__, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_args = 0;
  PyObject *__pyx_v_kwargs = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  __pyx_v_args = __Pyx_ArgsSlice_FASTCALL(__pyx_args, 1, __pyx_nargs);
  if (unlikely(!__pyx_v_args)) {
    __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
    __Pyx_RefNannyFinishContext();
    return NULL;
  }
  __Pyx_GOTREF(__pyx_v_args);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        default:
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 240, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        const Py_ssize_t used_pos_args = (kwd_pos_args < 1) ? kwd_pos_args : 1;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, __pyx_v_kwargs, values + 0, used_pos_args, "__init__") < 0)) __PYX_ERR(0, 240, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs < 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 0, 1, 1, __pyx_nargs); __PYX_ERR(0, 240, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_DECREF(__pyx_v_args); __pyx_v_args = 0;
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_15TFIDFCLassifier___init__(__pyx_self, __pyx_v_self, __pyx_v_args, __pyx_v_kwargs);

  /* function exit code */
  __Pyx_DECREF(__pyx_v_args);
  __Pyx_DECREF(__pyx_v_kwargs);
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_args, PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 1);

  /* "zorya.py":241
 * class TFIDFCLassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):
 *         super().__init__(*args, **kwargs)             # <<<<<<<<<<<<<<
 * 
 *     def train(self):
 */
  __pyx_t_1 = __Pyx_CyFunction_GetClassObj(__pyx_self);
  if (!__pyx_t_1) { PyErr_SetString(PyExc_SystemError, "super(): empty __class__ cell"); __PYX_ERR(0, 241, __pyx_L1_error) }
  __Pyx_INCREF(__pyx_t_1);
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 241, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_1);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1)) __PYX_ERR(0, 241, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_self);
  __Pyx_GIVEREF(__pyx_v_self);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_v_self)) __PYX_ERR(0, 241, __pyx_L1_error);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_super, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 241, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_init); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 241, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 241, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_v_args, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 241, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":240
 * 
 * class TFIDFCLassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":243
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_TF_IDF()
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_3train(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_15TFIDFCLassifier_3train = {"train", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_15TFIDFCLassifier_3train, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_3train(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("train (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 243, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "train") < 0)) __PYX_ERR(0, 243, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("train", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 243, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.train", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_15TFIDFCLassifier_2train(__pyx_self, __pyx_v_self);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier_2train(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  unsigned int __pyx_t_4;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("train", 1);

  /* "zorya.py":244
 * 
 *     def train(self):
 *         self.calc_TF_and_IDF()             # <<<<<<<<<<<<<<
 *         self.calc_TF_IDF()
 * 
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_calc_TF_and_IDF); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 244, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 244, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":245
 *     def train(self):
 *         self.calc_TF_and_IDF()
 *         self.calc_TF_IDF()             # <<<<<<<<<<<<<<
 * 
 *     def calc_TF_IDF(self):
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_calc_TF_IDF); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 245, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 245, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":243
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_TF_IDF()
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.train", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":247
 *         self.calc_TF_IDF()
 * 
 *     def calc_TF_IDF(self):             # <<<<<<<<<<<<<<
 *         # Performs the overall calculation (tf_idf).
 *         self.prob_suspicious = dict()
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_5calc_TF_IDF(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_15TFIDFCLassifier_5calc_TF_IDF = {"calc_TF_IDF", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_15TFIDFCLassifier_5calc_TF_IDF, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_5calc_TF_IDF(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("calc_TF_IDF (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 247, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "calc_TF_IDF") < 0)) __PYX_ERR(0, 247, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("calc_TF_IDF", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 247, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.calc_TF_IDF", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_15TFIDFCLassifier_4calc_TF_IDF(__pyx_self, __pyx_v_self);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier_4calc_TF_IDF(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_v_word = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  PyObject *__pyx_t_9 = NULL;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  unsigned int __pyx_t_12;
  Py_ssize_t __pyx_t_13;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("calc_TF_IDF", 1);

  /* "zorya.py":249
 *     def calc_TF_IDF(self):
 *         # Performs the overall calculation (tf_idf).
 *         self.prob_suspicious = dict()             # <<<<<<<<<<<<<<
 *         self.prob_neutral = dict()
 *         self.sum_tf_idf_suspicious = 0
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious, __pyx_t_1) < 0) __PYX_ERR(0, 249, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":250
 *         # Performs the overall calculation (tf_idf).
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()             # <<<<<<<<<<<<<<
 *         self.sum_tf_idf_suspicious = 0
 *         self.sum_tf_idf_neutral = 0
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral, __pyx_t_1) < 0) __PYX_ERR(0, 250, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":251
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 *         self.sum_tf_idf_suspicious = 0             # <<<<<<<<<<<<<<
 *         self.sum_tf_idf_neutral = 0
 *         for word in self.tf_suspicious:
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_suspicious, __pyx_int_0) < 0) __PYX_ERR(0, 251, __pyx_L1_error)

  /* "zorya.py":252
 *         self.prob_neutral = dict()
 *         self.sum_tf_idf_suspicious = 0
 *         self.sum_tf_idf_neutral = 0             # <<<<<<<<<<<<<<
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_neutral, __pyx_int_0) < 0) __PYX_ERR(0, 252, __pyx_L1_error)

  /* "zorya.py":253
 *         self.sum_tf_idf_suspicious = 0
 *         self.sum_tf_idf_neutral = 0
 *         for word in self.tf_suspicious:             # <<<<<<<<<<<<<<
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(
 *                 (self.suspicious_terms + self.neutral_terms)
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 253, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 253, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 253, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 253, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 253, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 253, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 253, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 253, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 253, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 253, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":254
 *         self.sum_tf_idf_neutral = 0
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(             # <<<<<<<<<<<<<<
 *                 (self.suspicious_terms + self.neutral_terms)
 *                 / (self.idf_suspicious[word] + self.idf_neutral.get(word, 0))
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_v_word); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);

    /* "zorya.py":255
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(
 *                 (self.suspicious_terms + self.neutral_terms)             # <<<<<<<<<<<<<<
 *                 / (self.idf_suspicious[word] + self.idf_neutral.get(word, 0))
 *             )
 */
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_terms); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 255, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_terms); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 255, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = PyNumber_Add(__pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 255, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

    /* "zorya.py":256
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(
 *                 (self.suspicious_terms + self.neutral_terms)
 *                 / (self.idf_suspicious[word] + self.idf_neutral.get(word, 0))             # <<<<<<<<<<<<<<
 *             )
 *             self.sum_tf_idf_suspicious += self.prob_suspicious[word]
 */
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_suspicious); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_7 = __Pyx_PyObject_GetItem(__pyx_t_8, __pyx_v_word); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_neutral); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_get); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
    __pyx_t_10 = NULL;
    __pyx_t_12 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_10)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_10);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
        __pyx_t_12 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_10, __pyx_v_word, __pyx_int_0};
      __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_12, 2+__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 256, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    }
    __pyx_t_11 = PyNumber_Add(__pyx_t_7, __pyx_t_8); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = __Pyx_PyNumber_Divide(__pyx_t_9, __pyx_t_11); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 256, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_t_11 = NULL;
    __pyx_t_12 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
        __pyx_t_12 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_8};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_12, 1+__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }

    /* "zorya.py":254
 *         self.sum_tf_idf_neutral = 0
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(             # <<<<<<<<<<<<<<
 *                 (self.suspicious_terms + self.neutral_terms)
 *                 / (self.idf_suspicious[word] + self.idf_neutral.get(word, 0))
 */
    __pyx_t_6 = PyNumber_Multiply(__pyx_t_5, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (unlikely((PyObject_SetItem(__pyx_t_1, __pyx_v_word, __pyx_t_6) < 0))) __PYX_ERR(0, 254, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

    /* "zorya.py":258
 *                 / (self.idf_suspicious[word] + self.idf_neutral.get(word, 0))
 *             )
 *             self.sum_tf_idf_suspicious += self.prob_suspicious[word]             # <<<<<<<<<<<<<<
 * 
 *         for word in self.tf_suspicious:
 */
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_suspicious); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 258, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 258, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_v_word); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 258, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyNumber_InPlaceAdd(__pyx_t_6, __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 258, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_suspicious, __pyx_t_1) < 0) __PYX_ERR(0, 258, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":253
 *         self.sum_tf_idf_suspicious = 0
 *         self.sum_tf_idf_neutral = 0
 *         for word in self.tf_suspicious:             # <<<<<<<<<<<<<<
 *             self.prob_suspicious[word] = self.tf_suspicious[word] * log(
 *                 (self.suspicious_terms + self.neutral_terms)
 */
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":260
 *             self.sum_tf_idf_suspicious += self.prob_suspicious[word]
 * 
 *         for word in self.tf_suspicious:             # <<<<<<<<<<<<<<
 *             self.prob_suspicious[word] = (self.prob_suspicious[word] + 1) / (
 *                 self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys())
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 260, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
    __pyx_t_1 = __pyx_t_2; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 260, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 260, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 260, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_3); __Pyx_INCREF(__pyx_t_2); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 260, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 260, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 260, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_3); __Pyx_INCREF(__pyx_t_2); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 260, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 260, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_4(__pyx_t_1);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 260, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":261
 * 
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = (self.prob_suspicious[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys())
 *             )
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 261, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_v_word); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 261, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_5, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 261, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "zorya.py":262
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = (self.prob_suspicious[word] + 1) / (
 *                 self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys())             # <<<<<<<<<<<<<<
 *             )
 * 
 */
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_suspicious); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 262, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 262, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_keys); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 262, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = NULL;
    __pyx_t_12 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_11))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_11);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_11, function);
        __pyx_t_12 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
      __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_12, 0+__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 262, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    }
    __pyx_t_13 = PyObject_Length(__pyx_t_6); if (unlikely(__pyx_t_13 == ((Py_ssize_t)-1))) __PYX_ERR(0, 262, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyInt_FromSsize_t(__pyx_t_13); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 262, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_11 = PyNumber_Add(__pyx_t_5, __pyx_t_6); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 262, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

    /* "zorya.py":261
 * 
 *         for word in self.tf_suspicious:
 *             self.prob_suspicious[word] = (self.prob_suspicious[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys())
 *             )
 */
    __pyx_t_6 = __Pyx_PyNumber_Divide(__pyx_t_2, __pyx_t_11); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 261, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 261, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    if (unlikely((PyObject_SetItem(__pyx_t_11, __pyx_v_word, __pyx_t_6) < 0))) __PYX_ERR(0, 261, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

    /* "zorya.py":260
 *             self.sum_tf_idf_suspicious += self.prob_suspicious[word]
 * 
 *         for word in self.tf_suspicious:             # <<<<<<<<<<<<<<
 *             self.prob_suspicious[word] = (self.prob_suspicious[word] + 1) / (
 *                 self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys())
 */
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":265
 *             )
 * 
 *         for word in self.tf_neutral:             # <<<<<<<<<<<<<<
 *             self.prob_neutral[word] = (self.tf_neutral[word]) * log(
 *                 (self.suspicious_terms + self.neutral_terms)
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 265, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_6 = __pyx_t_1; __Pyx_INCREF(__pyx_t_6);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_6 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 265, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 265, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_6))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_6);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 265, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_6, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 265, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 265, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_6);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 265, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_6, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 265, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 265, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_6);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 265, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":266
 * 
 *         for word in self.tf_neutral:
 *             self.prob_neutral[word] = (self.tf_neutral[word]) * log(             # <<<<<<<<<<<<<<
 *                 (self.suspicious_terms + self.neutral_terms)
 *                 / (self.idf_suspicious.get(word, 0) + self.idf_neutral[word])
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_11 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_v_word); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_log); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);

    /* "zorya.py":267
 *         for word in self.tf_neutral:
 *             self.prob_neutral[word] = (self.tf_neutral[word]) * log(
 *                 (self.suspicious_terms + self.neutral_terms)             # <<<<<<<<<<<<<<
 *                 / (self.idf_suspicious.get(word, 0) + self.idf_neutral[word])
 *             )
 */
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_terms); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 267, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_terms); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 267, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_9 = PyNumber_Add(__pyx_t_5, __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 267, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

    /* "zorya.py":268
 *             self.prob_neutral[word] = (self.tf_neutral[word]) * log(
 *                 (self.suspicious_terms + self.neutral_terms)
 *                 / (self.idf_suspicious.get(word, 0) + self.idf_neutral[word])             # <<<<<<<<<<<<<<
 *             )
 *             self.sum_tf_idf_neutral += self.prob_neutral[word]
 */
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_suspicious); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_get); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    __pyx_t_12 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
        __pyx_t_12 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_5, __pyx_v_word, __pyx_int_0};
      __pyx_t_8 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_12, 2+__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 268, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_idf_neutral); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_7, __pyx_v_word); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = PyNumber_Add(__pyx_t_8, __pyx_t_5); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyNumber_Divide(__pyx_t_9, __pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 268, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = NULL;
    __pyx_t_12 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_12 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_5};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_12, 1+__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 266, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }

    /* "zorya.py":266
 * 
 *         for word in self.tf_neutral:
 *             self.prob_neutral[word] = (self.tf_neutral[word]) * log(             # <<<<<<<<<<<<<<
 *                 (self.suspicious_terms + self.neutral_terms)
 *                 / (self.idf_suspicious.get(word, 0) + self.idf_neutral[word])
 */
    __pyx_t_2 = PyNumber_Multiply(__pyx_t_11, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (unlikely((PyObject_SetItem(__pyx_t_1, __pyx_v_word, __pyx_t_2) < 0))) __PYX_ERR(0, 266, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

    /* "zorya.py":270
 *                 / (self.idf_suspicious.get(word, 0) + self.idf_neutral[word])
 *             )
 *             self.sum_tf_idf_neutral += self.prob_neutral[word]             # <<<<<<<<<<<<<<
 * 
 *         for word in self.tf_neutral:
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_neutral); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 270, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 270, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_11 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_v_word); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 270, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyNumber_InPlaceAdd(__pyx_t_2, __pyx_t_11); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 270, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_neutral, __pyx_t_1) < 0) __PYX_ERR(0, 270, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":265
 *             )
 * 
 *         for word in self.tf_neutral:             # <<<<<<<<<<<<<<
 *             self.prob_neutral[word] = (self.tf_neutral[word]) * log(
 *                 (self.suspicious_terms + self.neutral_terms)
 */
  }
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":272
 *             self.sum_tf_idf_neutral += self.prob_neutral[word]
 * 
 *         for word in self.tf_neutral:             # <<<<<<<<<<<<<<
 *             self.prob_neutral[word] = (self.prob_neutral[word] + 1) / (
 *                 self.sum_tf_idf_neutral + len(self.prob_neutral.keys())
 */
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 272, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (likely(PyList_CheckExact(__pyx_t_6)) || PyTuple_CheckExact(__pyx_t_6)) {
    __pyx_t_1 = __pyx_t_6; __Pyx_INCREF(__pyx_t_1);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 272, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 272, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_1))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 272, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_6 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_3); __Pyx_INCREF(__pyx_t_6); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 272, __pyx_L1_error)
        #else
        __pyx_t_6 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 272, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_1);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 272, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_6 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_3); __Pyx_INCREF(__pyx_t_6); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 272, __pyx_L1_error)
        #else
        __pyx_t_6 = __Pyx_PySequence_ITEM(__pyx_t_1, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 272, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        #endif
      }
    } else {
      __pyx_t_6 = __pyx_t_4(__pyx_t_1);
      if (unlikely(!__pyx_t_6)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 272, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_6);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_6);
    __pyx_t_6 = 0;

    /* "zorya.py":273
 * 
 *         for word in self.tf_neutral:
 *             self.prob_neutral[word] = (self.prob_neutral[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.sum_tf_idf_neutral + len(self.prob_neutral.keys())
 *             )
 */
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_11 = __Pyx_PyObject_GetItem(__pyx_t_6, __pyx_v_word); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_PyInt_AddObjC(__pyx_t_11, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;

    /* "zorya.py":274
 *         for word in self.tf_neutral:
 *             self.prob_neutral[word] = (self.prob_neutral[word] + 1) / (
 *                 self.sum_tf_idf_neutral + len(self.prob_neutral.keys())             # <<<<<<<<<<<<<<
 *             )
 * 
 */
    __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_neutral); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 274, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_11);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 274, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_keys); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 274, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    __pyx_t_12 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
        __pyx_t_12 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_12, 0+__pyx_t_12);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 274, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __pyx_t_13 = PyObject_Length(__pyx_t_2); if (unlikely(__pyx_t_13 == ((Py_ssize_t)-1))) __PYX_ERR(0, 274, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = PyInt_FromSsize_t(__pyx_t_13); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 274, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = PyNumber_Add(__pyx_t_11, __pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 274, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

    /* "zorya.py":273
 * 
 *         for word in self.tf_neutral:
 *             self.prob_neutral[word] = (self.prob_neutral[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.sum_tf_idf_neutral + len(self.prob_neutral.keys())
 *             )
 */
    __pyx_t_2 = __Pyx_PyNumber_Divide(__pyx_t_6, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (unlikely((PyObject_SetItem(__pyx_t_7, __pyx_v_word, __pyx_t_2) < 0))) __PYX_ERR(0, 273, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

    /* "zorya.py":272
 *             self.sum_tf_idf_neutral += self.prob_neutral[word]
 * 
 *         for word in self.tf_neutral:             # <<<<<<<<<<<<<<
 *             self.prob_neutral[word] = (self.prob_neutral[word] + 1) / (
 *                 self.sum_tf_idf_neutral + len(self.prob_neutral.keys())
 */
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":278
 * 
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (
 *             self.suspicious_terms / self.total_terms,             # <<<<<<<<<<<<<<
 *             self.neutral_terms / self.total_terms,
 *         )
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_terms); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 278, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_total_terms); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 278, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_7 = __Pyx_PyNumber_Divide(__pyx_t_1, __pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 278, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":279
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (
 *             self.suspicious_terms / self.total_terms,
 *             self.neutral_terms / self.total_terms,             # <<<<<<<<<<<<<<
 *         )
 * 
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_terms); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 279, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_total_terms); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 279, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = __Pyx_PyNumber_Divide(__pyx_t_2, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 279, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":277
 *             )
 * 
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (             # <<<<<<<<<<<<<<
 *             self.suspicious_terms / self.total_terms,
 *             self.neutral_terms / self.total_terms,
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious_entry, __pyx_t_7) < 0) __PYX_ERR(0, 277, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral_entry, __pyx_t_6) < 0) __PYX_ERR(0, 277, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":247
 *         self.calc_TF_IDF()
 * 
 *     def calc_TF_IDF(self):             # <<<<<<<<<<<<<<
 *         # Performs the overall calculation (tf_idf).
 *         self.prob_suspicious = dict()
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.calc_TF_IDF", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_word);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":282
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_7classify(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_15TFIDFCLassifier_7classify = {"classify", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_15TFIDFCLassifier_7classify, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_15TFIDFCLassifier_7classify(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_processed_message = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("classify (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_processed_message,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 282, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_processed_message)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 282, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("classify", 1, 2, 2, 1); __PYX_ERR(0, 282, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "classify") < 0)) __PYX_ERR(0, 282, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_processed_message = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("classify", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 282, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.classify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_15TFIDFCLassifier_6classify(__pyx_self, __pyx_v_self, __pyx_v_processed_message);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_15TFIDFCLassifier_6classify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_processed_message) {
  PyObject *__pyx_v_pSpam = NULL;
  PyObject *__pyx_v_pHam = NULL;
  PyObject *__pyx_v_word = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  unsigned int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  Py_ssize_t __pyx_t_12;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("classify", 1);

  /* "zorya.py":284
 *     def classify(self, processed_message):
 *         # Data classification.
 *         pSpam, pHam = 0, 0             # <<<<<<<<<<<<<<
 *         for word in processed_message:
 *             if word in self.prob_suspicious:
 */
  __pyx_t_1 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_1);
  __pyx_t_2 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_2);
  __pyx_v_pSpam = __pyx_t_1;
  __pyx_t_1 = 0;
  __pyx_v_pHam = __pyx_t_2;
  __pyx_t_2 = 0;

  /* "zorya.py":285
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:             # <<<<<<<<<<<<<<
 *             if word in self.prob_suspicious:
 *                 pSpam += log(self.prob_suspicious[word])
 */
  if (likely(PyList_CheckExact(__pyx_v_processed_message)) || PyTuple_CheckExact(__pyx_v_processed_message)) {
    __pyx_t_2 = __pyx_v_processed_message; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_v_processed_message); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 285, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 285, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 285, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 285, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 285, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 285, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 285, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 285, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 285, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":286
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:
 *             if word in self.prob_suspicious:             # <<<<<<<<<<<<<<
 *                 pSpam += log(self.prob_suspicious[word])
 *             else:
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 286, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_v_word, __pyx_t_1, Py_EQ)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 286, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_5) {

      /* "zorya.py":287
 *         for word in processed_message:
 *             if word in self.prob_suspicious:
 *                 pSpam += log(self.prob_suspicious[word])             # <<<<<<<<<<<<<<
 *             else:
 *                 pSpam -= log(self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys()))
 */
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 287, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 287, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetItem(__pyx_t_7, __pyx_v_word); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 287, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_8};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 287, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_t_6 = PyNumber_InPlaceAdd(__pyx_v_pSpam, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 287, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF_SET(__pyx_v_pSpam, __pyx_t_6);
      __pyx_t_6 = 0;

      /* "zorya.py":286
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:
 *             if word in self.prob_suspicious:             # <<<<<<<<<<<<<<
 *                 pSpam += log(self.prob_suspicious[word])
 *             else:
 */
      goto __pyx_L5;
    }

    /* "zorya.py":289
 *                 pSpam += log(self.prob_suspicious[word])
 *             else:
 *                 pSpam -= log(self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys()))             # <<<<<<<<<<<<<<
 *             if word in self.prob_neutral:
 *                 pHam += log(self.prob_neutral[word])
 */
    /*else*/ {
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_log); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_suspicious); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_keys); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_10, NULL};
        __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_9, 0+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 289, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __pyx_t_12 = PyObject_Length(__pyx_t_7); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = PyInt_FromSsize_t(__pyx_t_12); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_11 = PyNumber_Add(__pyx_t_8, __pyx_t_7); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_11};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 289, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __pyx_t_1 = PyNumber_InPlaceSubtract(__pyx_v_pSpam, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 289, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF_SET(__pyx_v_pSpam, __pyx_t_1);
      __pyx_t_1 = 0;
    }
    __pyx_L5:;

    /* "zorya.py":290
 *             else:
 *                 pSpam -= log(self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys()))
 *             if word in self.prob_neutral:             # <<<<<<<<<<<<<<
 *                 pHam += log(self.prob_neutral[word])
 *             else:
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 290, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_v_word, __pyx_t_1, Py_EQ)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 290, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_5) {

      /* "zorya.py":291
 *                 pSpam -= log(self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys()))
 *             if word in self.prob_neutral:
 *                 pHam += log(self.prob_neutral[word])             # <<<<<<<<<<<<<<
 *             else:
 *                 pHam -= log(self.sum_tf_idf_neutral + len(self.prob_neutral.keys()))
 */
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 291, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 291, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_7 = __Pyx_PyObject_GetItem(__pyx_t_11, __pyx_v_word); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 291, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_7};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 291, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_t_6 = PyNumber_InPlaceAdd(__pyx_v_pHam, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 291, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF_SET(__pyx_v_pHam, __pyx_t_6);
      __pyx_t_6 = 0;

      /* "zorya.py":290
 *             else:
 *                 pSpam -= log(self.sum_tf_idf_suspicious + len(self.prob_suspicious.keys()))
 *             if word in self.prob_neutral:             # <<<<<<<<<<<<<<
 *                 pHam += log(self.prob_neutral[word])
 *             else:
 */
      goto __pyx_L6;
    }

    /* "zorya.py":293
 *                 pHam += log(self.prob_neutral[word])
 *             else:
 *                 pHam -= log(self.sum_tf_idf_neutral + len(self.prob_neutral.keys()))             # <<<<<<<<<<<<<<
 *             pSpam += log(self.prob_suspicious_entry)
 *             pHam += log(self.prob_neutral_entry)
 */
    /*else*/ {
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_log); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_sum_tf_idf_neutral); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_keys); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
        __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_10, __pyx_callargs+1-__pyx_t_9, 0+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 293, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      }
      __pyx_t_12 = PyObject_Length(__pyx_t_11); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = PyInt_FromSsize_t(__pyx_t_12); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_10 = PyNumber_Add(__pyx_t_7, __pyx_t_11); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_10};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 293, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __pyx_t_1 = PyNumber_InPlaceSubtract(__pyx_v_pHam, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 293, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF_SET(__pyx_v_pHam, __pyx_t_1);
      __pyx_t_1 = 0;
    }
    __pyx_L6:;

    /* "zorya.py":294
 *             else:
 *                 pHam -= log(self.sum_tf_idf_neutral + len(self.prob_neutral.keys()))
 *             pSpam += log(self.prob_suspicious_entry)             # <<<<<<<<<<<<<<
 *             pHam += log(self.prob_neutral_entry)
 *         return pSpam >= pHam
 */
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 294, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious_entry); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 294, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_11 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_10};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 294, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __pyx_t_6 = PyNumber_InPlaceAdd(__pyx_v_pSpam, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 294, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF_SET(__pyx_v_pSpam, __pyx_t_6);
    __pyx_t_6 = 0;

    /* "zorya.py":295
 *                 pHam -= log(self.sum_tf_idf_neutral + len(self.prob_neutral.keys()))
 *             pSpam += log(self.prob_suspicious_entry)
 *             pHam += log(self.prob_neutral_entry)             # <<<<<<<<<<<<<<
 *         return pSpam >= pHam
 * 
 */
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_log); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral_entry); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_11 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_10};
      __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 295, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __pyx_t_1 = PyNumber_InPlaceAdd(__pyx_v_pHam, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 295, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF_SET(__pyx_v_pHam, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":285
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:             # <<<<<<<<<<<<<<
 *             if word in self.prob_suspicious:
 *                 pSpam += log(self.prob_suspicious[word])
 */
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":296
 *             pSpam += log(self.prob_suspicious_entry)
 *             pHam += log(self.prob_neutral_entry)
 *         return pSpam >= pHam             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = PyObject_RichCompare(__pyx_v_pSpam, __pyx_v_pHam, Py_GE); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 296, __pyx_L1_error)
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

  /* "zorya.py":282
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_AddTraceback("zorya.TFIDFCLassifier.classify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_pSpam);
  __Pyx_XDECREF(__pyx_v_pHam);
  __Pyx_XDECREF(__pyx_v_word);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":300
 * 
 * class BowClassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_13BowClassifier_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_13BowClassifier_1__init__ = {"__init__", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_13BowClassifier_1__init__, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_13BowClassifier_1__init__(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_args = 0;
  PyObject *__pyx_v_kwargs = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  __pyx_v_kwargs = PyDict_New(); if (unlikely(!__pyx_v_kwargs)) return NULL;
  __Pyx_GOTREF(__pyx_v_kwargs);
  __pyx_v_args = __Pyx_ArgsSlice_FASTCALL(__pyx_args, 1, __pyx_nargs);
  if (unlikely(!__pyx_v_args)) {
    __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
    __Pyx_RefNannyFinishContext();
    return NULL;
  }
  __Pyx_GOTREF(__pyx_v_args);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        default:
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 300, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        const Py_ssize_t used_pos_args = (kwd_pos_args < 1) ? kwd_pos_args : 1;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, __pyx_v_kwargs, values + 0, used_pos_args, "__init__") < 0)) __PYX_ERR(0, 300, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs < 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("__init__", 0, 1, 1, __pyx_nargs); __PYX_ERR(0, 300, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_DECREF(__pyx_v_args); __pyx_v_args = 0;
  __Pyx_DECREF(__pyx_v_kwargs); __pyx_v_kwargs = 0;
  __Pyx_AddTraceback("zorya.BowClassifier.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_13BowClassifier___init__(__pyx_self, __pyx_v_self, __pyx_v_args, __pyx_v_kwargs);

  /* function exit code */
  __Pyx_DECREF(__pyx_v_args);
  __Pyx_DECREF(__pyx_v_kwargs);
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_13BowClassifier___init__(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_args, PyObject *__pyx_v_kwargs) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__init__", 1);

  /* "zorya.py":301
 * class BowClassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):
 *         super().__init__(*args, **kwargs)             # <<<<<<<<<<<<<<
 * 
 *     def train(self):
 */
  __pyx_t_1 = __Pyx_CyFunction_GetClassObj(__pyx_self);
  if (!__pyx_t_1) { PyErr_SetString(PyExc_SystemError, "super(): empty __class__ cell"); __PYX_ERR(0, 301, __pyx_L1_error) }
  __Pyx_INCREF(__pyx_t_1);
  __pyx_t_2 = PyTuple_New(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_GIVEREF(__pyx_t_1);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_1)) __PYX_ERR(0, 301, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_self);
  __Pyx_GIVEREF(__pyx_v_self);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_v_self)) __PYX_ERR(0, 301, __pyx_L1_error);
  __pyx_t_1 = 0;
  __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_super, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_init); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_t_1 = PyDict_Copy(__pyx_v_kwargs); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_v_args, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 301, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":300
 * 
 * class BowClassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("zorya.BowClassifier.__init__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":303
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_prob()
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_13BowClassifier_3train(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_13BowClassifier_3train = {"train", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_13BowClassifier_3train, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_13BowClassifier_3train(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("train (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 303, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "train") < 0)) __PYX_ERR(0, 303, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("train", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 303, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.BowClassifier.train", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_13BowClassifier_2train(__pyx_self, __pyx_v_self);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_13BowClassifier_2train(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  unsigned int __pyx_t_4;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("train", 1);

  /* "zorya.py":304
 * 
 *     def train(self):
 *         self.calc_TF_and_IDF()             # <<<<<<<<<<<<<<
 *         self.calc_prob()
 * 
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_calc_TF_and_IDF); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 304, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 304, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":305
 *     def train(self):
 *         self.calc_TF_and_IDF()
 *         self.calc_prob()             # <<<<<<<<<<<<<<
 * 
 *     def calc_prob(self):
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_calc_prob); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 305, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = NULL;
  __pyx_t_4 = 0;
  #if CYTHON_UNPACK_METHODS
  if (likely(PyMethod_Check(__pyx_t_2))) {
    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
    if (likely(__pyx_t_3)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
      __Pyx_INCREF(__pyx_t_3);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_2, function);
      __pyx_t_4 = 1;
    }
  }
  #endif
  {
    PyObject *__pyx_callargs[2] = {__pyx_t_3, NULL};
    __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_4, 0+__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 305, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":303
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_prob()
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_AddTraceback("zorya.BowClassifier.train", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":307
 *         self.calc_prob()
 * 
 *     def calc_prob(self):             # <<<<<<<<<<<<<<
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_13BowClassifier_5calc_prob(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_13BowClassifier_5calc_prob = {"calc_prob", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_13BowClassifier_5calc_prob, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_13BowClassifier_5calc_prob(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[1] = {0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("calc_prob (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 307, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "calc_prob") < 0)) __PYX_ERR(0, 307, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 1)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
    }
    __pyx_v_self = values[0];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("calc_prob", 1, 1, 1, __pyx_nargs); __PYX_ERR(0, 307, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.BowClassifier.calc_prob", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_13BowClassifier_4calc_prob(__pyx_self, __pyx_v_self);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_13BowClassifier_4calc_prob(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self) {
  PyObject *__pyx_v_word = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  unsigned int __pyx_t_9;
  Py_ssize_t __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("calc_prob", 1);

  /* "zorya.py":308
 * 
 *     def calc_prob(self):
 *         self.prob_suspicious = dict()             # <<<<<<<<<<<<<<
 *         self.prob_neutral = dict()
 *         for word in self.tf_suspicious:
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 308, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious, __pyx_t_1) < 0) __PYX_ERR(0, 308, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":309
 *     def calc_prob(self):
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()             # <<<<<<<<<<<<<<
 *         for word in self.tf_suspicious:
 *             # calcule la proba qu'un mot apparaisse dans les spams
 */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 309, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral, __pyx_t_1) < 0) __PYX_ERR(0, 309, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":310
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 *         for word in self.tf_suspicious:             # <<<<<<<<<<<<<<
 *             # calcule la proba qu'un mot apparaisse dans les spams
 *             self.prob_suspicious[word] = (self.tf_suspicious[word] + 1) / (
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 310, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 310, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 310, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 310, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 310, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 310, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 310, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 310, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 310, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 310, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":312
 *         for word in self.tf_suspicious:
 *             # calcule la proba qu'un mot apparaisse dans les spams
 *             self.prob_suspicious[word] = (self.tf_suspicious[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.suspicious_words + len(self.tf_suspicious.keys())
 *             )
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 312, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_1, __pyx_v_word); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 312, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyInt_AddObjC(__pyx_t_5, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 312, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "zorya.py":313
 *             # calcule la proba qu'un mot apparaisse dans les spams
 *             self.prob_suspicious[word] = (self.tf_suspicious[word] + 1) / (
 *                 self.suspicious_words + len(self.tf_suspicious.keys())             # <<<<<<<<<<<<<<
 *             )
 *         for word in self.tf_neutral:
 */
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_words); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 313, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_suspicious); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 313, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_keys); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 313, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_8))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_8);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_8, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, NULL};
      __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_8, __pyx_callargs+1-__pyx_t_9, 0+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 313, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    }
    __pyx_t_10 = PyObject_Length(__pyx_t_6); if (unlikely(__pyx_t_10 == ((Py_ssize_t)-1))) __PYX_ERR(0, 313, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyInt_FromSsize_t(__pyx_t_10); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 313, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_8 = PyNumber_Add(__pyx_t_5, __pyx_t_6); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 313, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

    /* "zorya.py":312
 *         for word in self.tf_suspicious:
 *             # calcule la proba qu'un mot apparaisse dans les spams
 *             self.prob_suspicious[word] = (self.tf_suspicious[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.suspicious_words + len(self.tf_suspicious.keys())
 *             )
 */
    __pyx_t_6 = __Pyx_PyNumber_Divide(__pyx_t_1, __pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 312, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 312, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    if (unlikely((PyObject_SetItem(__pyx_t_8, __pyx_v_word, __pyx_t_6) < 0))) __PYX_ERR(0, 312, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

    /* "zorya.py":310
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 *         for word in self.tf_suspicious:             # <<<<<<<<<<<<<<
 *             # calcule la proba qu'un mot apparaisse dans les spams
 *             self.prob_suspicious[word] = (self.tf_suspicious[word] + 1) / (
 */
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":315
 *                 self.suspicious_words + len(self.tf_suspicious.keys())
 *             )
 *         for word in self.tf_neutral:             # <<<<<<<<<<<<<<
 *             # calcule la proba qu'un mot apparaisse dans les non spams
 *             self.prob_neutral[word] = (self.tf_neutral[word] + 1) / (
 */
  __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 315, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
    __pyx_t_6 = __pyx_t_2; __Pyx_INCREF(__pyx_t_6);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_6 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 315, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 315, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_6))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_6);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 315, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyList_GET_ITEM(__pyx_t_6, __pyx_t_3); __Pyx_INCREF(__pyx_t_2); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 315, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 315, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_6);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 315, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_6, __pyx_t_3); __Pyx_INCREF(__pyx_t_2); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 315, __pyx_L1_error)
        #else
        __pyx_t_2 = __Pyx_PySequence_ITEM(__pyx_t_6, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 315, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
        #endif
      }
    } else {
      __pyx_t_2 = __pyx_t_4(__pyx_t_6);
      if (unlikely(!__pyx_t_2)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 315, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_2);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_2);
    __pyx_t_2 = 0;

    /* "zorya.py":317
 *         for word in self.tf_neutral:
 *             # calcule la proba qu'un mot apparaisse dans les non spams
 *             self.prob_neutral[word] = (self.tf_neutral[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.neutral_words + len(self.tf_neutral.keys())
 *             )
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 317, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_8 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_v_word); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 317, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_8, __pyx_int_1, 1, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 317, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;

    /* "zorya.py":318
 *             # calcule la proba qu'un mot apparaisse dans les non spams
 *             self.prob_neutral[word] = (self.tf_neutral[word] + 1) / (
 *                 self.neutral_words + len(self.tf_neutral.keys())             # <<<<<<<<<<<<<<
 *             )
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (
 */
    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_words); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 318, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_8);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_tf_neutral); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 318, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_keys); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 318, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_7))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_7, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_7, __pyx_callargs+1-__pyx_t_9, 0+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 318, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __pyx_t_10 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_10 == ((Py_ssize_t)-1))) __PYX_ERR(0, 318, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_t_10); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 318, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_7 = PyNumber_Add(__pyx_t_8, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 318, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":317
 *         for word in self.tf_neutral:
 *             # calcule la proba qu'un mot apparaisse dans les non spams
 *             self.prob_neutral[word] = (self.tf_neutral[word] + 1) / (             # <<<<<<<<<<<<<<
 *                 self.neutral_words + len(self.tf_neutral.keys())
 *             )
 */
    __pyx_t_1 = __Pyx_PyNumber_Divide(__pyx_t_2, __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 317, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 317, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    if (unlikely((PyObject_SetItem(__pyx_t_7, __pyx_v_word, __pyx_t_1) < 0))) __PYX_ERR(0, 317, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

    /* "zorya.py":315
 *                 self.suspicious_words + len(self.tf_suspicious.keys())
 *             )
 *         for word in self.tf_neutral:             # <<<<<<<<<<<<<<
 *             # calcule la proba qu'un mot apparaisse dans les non spams
 *             self.prob_neutral[word] = (self.tf_neutral[word] + 1) / (
 */
  }
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":321
 *             )
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (
 *             self.suspicious_terms / self.total_terms,             # <<<<<<<<<<<<<<
 *             self.neutral_terms / self.total_terms,
 *         )
 */
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_terms); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 321, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_total_terms); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 321, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_7 = __Pyx_PyNumber_Divide(__pyx_t_6, __pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 321, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_7);
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;

  /* "zorya.py":322
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (
 *             self.suspicious_terms / self.total_terms,
 *             self.neutral_terms / self.total_terms,             # <<<<<<<<<<<<<<
 *         )
 * 
 */
  __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_terms); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 322, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_total_terms); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 322, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_2 = __Pyx_PyNumber_Divide(__pyx_t_1, __pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 322, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":320
 *                 self.neutral_words + len(self.tf_neutral.keys())
 *             )
 *         self.prob_suspicious_entry, self.prob_neutral_entry = (             # <<<<<<<<<<<<<<
 *             self.suspicious_terms / self.total_terms,
 *             self.neutral_terms / self.total_terms,
 */
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious_entry, __pyx_t_7) < 0) __PYX_ERR(0, 320, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
  if (__Pyx_PyObject_SetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral_entry, __pyx_t_2) < 0) __PYX_ERR(0, 320, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":307
 *         self.calc_prob()
 * 
 *     def calc_prob(self):             # <<<<<<<<<<<<<<
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("zorya.BowClassifier.calc_prob", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_word);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":325
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_13BowClassifier_7classify(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_13BowClassifier_7classify = {"classify", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_13BowClassifier_7classify, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_13BowClassifier_7classify(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_self = 0;
  PyObject *__pyx_v_processed_message = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("classify (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_self,&__pyx_n_s_processed_message,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_self)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 325, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_processed_message)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 325, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("classify", 1, 2, 2, 1); __PYX_ERR(0, 325, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "classify") < 0)) __PYX_ERR(0, 325, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_self = values[0];
    __pyx_v_processed_message = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("classify", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 325, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.BowClassifier.classify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_13BowClassifier_6classify(__pyx_self, __pyx_v_self, __pyx_v_processed_message);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_13BowClassifier_6classify(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_self, PyObject *__pyx_v_processed_message) {
  PyObject *__pyx_v_pSpam = NULL;
  PyObject *__pyx_v_pHam = NULL;
  PyObject *__pyx_v_word = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  Py_ssize_t __pyx_t_3;
  PyObject *(*__pyx_t_4)(PyObject *);
  int __pyx_t_5;
  PyObject *__pyx_t_6 = NULL;
  PyObject *__pyx_t_7 = NULL;
  PyObject *__pyx_t_8 = NULL;
  unsigned int __pyx_t_9;
  PyObject *__pyx_t_10 = NULL;
  PyObject *__pyx_t_11 = NULL;
  Py_ssize_t __pyx_t_12;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("classify", 1);

  /* "zorya.py":327
 *     def classify(self, processed_message):
 *         # Data classification.
 *         pSpam, pHam = 0, 0             # <<<<<<<<<<<<<<
 *         for word in processed_message:
 *             if word in self.prob_suspicious:
 */
  __pyx_t_1 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_1);
  __pyx_t_2 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_2);
  __pyx_v_pSpam = __pyx_t_1;
  __pyx_t_1 = 0;
  __pyx_v_pHam = __pyx_t_2;
  __pyx_t_2 = 0;

  /* "zorya.py":328
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:             # <<<<<<<<<<<<<<
 *             if word in self.prob_suspicious:
 *                 pSpam += log(self.prob_suspicious[word])
 */
  if (likely(PyList_CheckExact(__pyx_v_processed_message)) || PyTuple_CheckExact(__pyx_v_processed_message)) {
    __pyx_t_2 = __pyx_v_processed_message; __Pyx_INCREF(__pyx_t_2);
    __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_v_processed_message); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 328, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetIterNextFunc(__pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 328, __pyx_L1_error)
  }
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyList_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 328, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 328, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 328, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        {
          Py_ssize_t __pyx_temp = __Pyx_PyTuple_GET_SIZE(__pyx_t_2);
          #if !CYTHON_ASSUME_SAFE_MACROS
          if (unlikely((__pyx_temp < 0))) __PYX_ERR(0, 328, __pyx_L1_error)
          #endif
          if (__pyx_t_3 >= __pyx_temp) break;
        }
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely((0 < 0))) __PYX_ERR(0, 328, __pyx_L1_error)
        #else
        __pyx_t_1 = __Pyx_PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 328, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 328, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_word, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":329
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:
 *             if word in self.prob_suspicious:             # <<<<<<<<<<<<<<
 *                 pSpam += log(self.prob_suspicious[word])
 *             else:
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 329, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_v_word, __pyx_t_1, Py_EQ)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 329, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_5) {

      /* "zorya.py":330
 *         for word in processed_message:
 *             if word in self.prob_suspicious:
 *                 pSpam += log(self.prob_suspicious[word])             # <<<<<<<<<<<<<<
 *             else:
 *                 pSpam -= log(self.suspicious_words + len(self.prob_suspicious.keys()))
 */
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 330, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 330, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetItem(__pyx_t_7, __pyx_v_word); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 330, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_8};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 330, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_t_6 = PyNumber_InPlaceAdd(__pyx_v_pSpam, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 330, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF_SET(__pyx_v_pSpam, __pyx_t_6);
      __pyx_t_6 = 0;

      /* "zorya.py":329
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:
 *             if word in self.prob_suspicious:             # <<<<<<<<<<<<<<
 *                 pSpam += log(self.prob_suspicious[word])
 *             else:
 */
      goto __pyx_L5;
    }

    /* "zorya.py":332
 *                 pSpam += log(self.prob_suspicious[word])
 *             else:
 *                 pSpam -= log(self.suspicious_words + len(self.prob_suspicious.keys()))             # <<<<<<<<<<<<<<
 *             if word in self.prob_neutral:
 *                 pHam += log(self.prob_neutral[word])
 */
    /*else*/ {
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_log); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_suspicious_words); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_10, __pyx_n_s_keys); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_11))) {
        __pyx_t_10 = PyMethod_GET_SELF(__pyx_t_11);
        if (likely(__pyx_t_10)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
          __Pyx_INCREF(__pyx_t_10);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_11, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_10, NULL};
        __pyx_t_7 = __Pyx_PyObject_FastCall(__pyx_t_11, __pyx_callargs+1-__pyx_t_9, 0+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 332, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      }
      __pyx_t_12 = PyObject_Length(__pyx_t_7); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = PyInt_FromSsize_t(__pyx_t_12); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_11 = PyNumber_Add(__pyx_t_8, __pyx_t_7); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __pyx_t_7 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_11};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 332, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __pyx_t_1 = PyNumber_InPlaceSubtract(__pyx_v_pSpam, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 332, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF_SET(__pyx_v_pSpam, __pyx_t_1);
      __pyx_t_1 = 0;
    }
    __pyx_L5:;

    /* "zorya.py":333
 *             else:
 *                 pSpam -= log(self.suspicious_words + len(self.prob_suspicious.keys()))
 *             if word in self.prob_neutral:             # <<<<<<<<<<<<<<
 *                 pHam += log(self.prob_neutral[word])
 *             else:
 */
    __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 333, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = (__Pyx_PySequence_ContainsTF(__pyx_v_word, __pyx_t_1, Py_EQ)); if (unlikely((__pyx_t_5 < 0))) __PYX_ERR(0, 333, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_5) {

      /* "zorya.py":334
 *                 pSpam -= log(self.suspicious_words + len(self.prob_suspicious.keys()))
 *             if word in self.prob_neutral:
 *                 pHam += log(self.prob_neutral[word])             # <<<<<<<<<<<<<<
 *             else:
 *                 pHam -= log(self.neutral_words + len(self.prob_neutral.keys()))
 */
      __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_7 = __Pyx_PyObject_GetItem(__pyx_t_11, __pyx_v_word); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_7};
        __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 334, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      }
      __pyx_t_6 = PyNumber_InPlaceAdd(__pyx_v_pHam, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 334, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF_SET(__pyx_v_pHam, __pyx_t_6);
      __pyx_t_6 = 0;

      /* "zorya.py":333
 *             else:
 *                 pSpam -= log(self.suspicious_words + len(self.prob_suspicious.keys()))
 *             if word in self.prob_neutral:             # <<<<<<<<<<<<<<
 *                 pHam += log(self.prob_neutral[word])
 *             else:
 */
      goto __pyx_L6;
    }

    /* "zorya.py":336
 *                 pHam += log(self.prob_neutral[word])
 *             else:
 *                 pHam -= log(self.neutral_words + len(self.prob_neutral.keys()))             # <<<<<<<<<<<<<<
 *             pSpam += log(self.prob_suspicious_entry)
 *             pHam += log(self.prob_neutral_entry)
 */
    /*else*/ {
      __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_log); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_neutral_words); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_7);
      __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_keys); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (likely(PyMethod_Check(__pyx_t_10))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_10);
        if (likely(__pyx_t_8)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
          __Pyx_INCREF(__pyx_t_8);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_10, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_8, NULL};
        __pyx_t_11 = __Pyx_PyObject_FastCall(__pyx_t_10, __pyx_callargs+1-__pyx_t_9, 0+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 336, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      }
      __pyx_t_12 = PyObject_Length(__pyx_t_11); if (unlikely(__pyx_t_12 == ((Py_ssize_t)-1))) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = PyInt_FromSsize_t(__pyx_t_12); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_11);
      __pyx_t_10 = PyNumber_Add(__pyx_t_7, __pyx_t_11); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
      __pyx_t_11 = NULL;
      __pyx_t_9 = 0;
      #if CYTHON_UNPACK_METHODS
      if (unlikely(PyMethod_Check(__pyx_t_1))) {
        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_1);
        if (likely(__pyx_t_11)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
          __Pyx_INCREF(__pyx_t_11);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_1, function);
          __pyx_t_9 = 1;
        }
      }
      #endif
      {
        PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_10};
        __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 336, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      }
      __pyx_t_1 = PyNumber_InPlaceSubtract(__pyx_v_pHam, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 336, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __Pyx_DECREF_SET(__pyx_v_pHam, __pyx_t_1);
      __pyx_t_1 = 0;
    }
    __pyx_L6:;

    /* "zorya.py":337
 *             else:
 *                 pHam -= log(self.neutral_words + len(self.prob_neutral.keys()))
 *             pSpam += log(self.prob_suspicious_entry)             # <<<<<<<<<<<<<<
 *             pHam += log(self.prob_neutral_entry)
 *         return pSpam >= pHam
 */
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_log); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 337, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_suspicious_entry); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 337, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_11 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_6))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_6);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_6, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_10};
      __pyx_t_1 = __Pyx_PyObject_FastCall(__pyx_t_6, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 337, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    }
    __pyx_t_6 = PyNumber_InPlaceAdd(__pyx_v_pSpam, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 337, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF_SET(__pyx_v_pSpam, __pyx_t_6);
    __pyx_t_6 = 0;

    /* "zorya.py":338
 *                 pHam -= log(self.neutral_words + len(self.prob_neutral.keys()))
 *             pSpam += log(self.prob_suspicious_entry)
 *             pHam += log(self.prob_neutral_entry)             # <<<<<<<<<<<<<<
 *         return pSpam >= pHam
 * 
 */
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_log); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 338, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_v_self, __pyx_n_s_prob_neutral_entry); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 338, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_10);
    __pyx_t_11 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_1))) {
      __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_1);
      if (likely(__pyx_t_11)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
        __Pyx_INCREF(__pyx_t_11);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_1, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_11, __pyx_t_10};
      __pyx_t_6 = __Pyx_PyObject_FastCall(__pyx_t_1, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 338, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
    __pyx_t_1 = PyNumber_InPlaceAdd(__pyx_v_pHam, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 338, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF_SET(__pyx_v_pHam, __pyx_t_1);
    __pyx_t_1 = 0;

    /* "zorya.py":328
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 *         for word in processed_message:             # <<<<<<<<<<<<<<
 *             if word in self.prob_suspicious:
 *                 pSpam += log(self.prob_suspicious[word])
 */
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":339
 *             pSpam += log(self.prob_suspicious_entry)
 *             pHam += log(self.prob_neutral_entry)
 *         return pSpam >= pHam             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_2 = PyObject_RichCompare(__pyx_v_pSpam, __pyx_v_pHam, Py_GE); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 339, __pyx_L1_error)
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = 0;
  goto __pyx_L0;

  /* "zorya.py":325
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_XDECREF(__pyx_t_11);
  __Pyx_AddTraceback("zorya.BowClassifier.classify", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_pSpam);
  __Pyx_XDECREF(__pyx_v_pHam);
  __Pyx_XDECREF(__pyx_v_word);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* "zorya.py":342
 * 
 * 
 * def metrics(labels, predictions):  # Calculates metrics:             # <<<<<<<<<<<<<<
 *     # True Positive, True Negative, False Positive, False Negative.
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
 */

/* Python wrapper */
static PyObject *__pyx_pw_5zorya_7metrics(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
); /*proto*/
static PyMethodDef __pyx_mdef_5zorya_7metrics = {"metrics", (PyCFunction)(void*)(__Pyx_PyCFunction_FastCallWithKeywords)__pyx_pw_5zorya_7metrics, __Pyx_METH_FASTCALL|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_5zorya_7metrics(PyObject *__pyx_self, 
#if CYTHON_METH_FASTCALL
PyObject *const *__pyx_args, Py_ssize_t __pyx_nargs, PyObject *__pyx_kwds
#else
PyObject *__pyx_args, PyObject *__pyx_kwds
#endif
) {
  PyObject *__pyx_v_labels = 0;
  PyObject *__pyx_v_predictions = 0;
  #if !CYTHON_METH_FASTCALL
  CYTHON_UNUSED Py_ssize_t __pyx_nargs;
  #endif
  CYTHON_UNUSED PyObject *const *__pyx_kwvalues;
  PyObject* values[2] = {0,0};
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("metrics (wrapper)", 0);
  #if !CYTHON_METH_FASTCALL
  #if CYTHON_ASSUME_SAFE_MACROS
  __pyx_nargs = PyTuple_GET_SIZE(__pyx_args);
  #else
  __pyx_nargs = PyTuple_Size(__pyx_args); if (unlikely(__pyx_nargs < 0)) return NULL;
  #endif
  #endif
  __pyx_kwvalues = __Pyx_KwValues_FASTCALL(__pyx_args, __pyx_nargs);
  {
    PyObject **__pyx_pyargnames[] = {&__pyx_n_s_labels,&__pyx_n_s_predictions,0};
    if (__pyx_kwds) {
      Py_ssize_t kw_args;
      switch (__pyx_nargs) {
        case  2: values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = __Pyx_NumKwargs_FASTCALL(__pyx_kwds);
      switch (__pyx_nargs) {
        case  0:
        if (likely((values[0] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_labels)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[0]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 342, __pyx_L3_error)
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_GetKwValue_FASTCALL(__pyx_kwds, __pyx_kwvalues, __pyx_n_s_predictions)) != 0)) {
          (void)__Pyx_Arg_NewRef_FASTCALL(values[1]);
          kw_args--;
        }
        else if (unlikely(PyErr_Occurred())) __PYX_ERR(0, 342, __pyx_L3_error)
        else {
          __Pyx_RaiseArgtupleInvalid("metrics", 1, 2, 2, 1); __PYX_ERR(0, 342, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        const Py_ssize_t kwd_pos_args = __pyx_nargs;
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_kwvalues, __pyx_pyargnames, 0, values + 0, kwd_pos_args, "metrics") < 0)) __PYX_ERR(0, 342, __pyx_L3_error)
      }
    } else if (unlikely(__pyx_nargs != 2)) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = __Pyx_Arg_FASTCALL(__pyx_args, 0);
      values[1] = __Pyx_Arg_FASTCALL(__pyx_args, 1);
    }
    __pyx_v_labels = values[0];
    __pyx_v_predictions = values[1];
  }
  goto __pyx_L6_skip;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("metrics", 1, 2, 2, __pyx_nargs); __PYX_ERR(0, 342, __pyx_L3_error)
  __pyx_L6_skip:;
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L3_error:;
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_AddTraceback("zorya.metrics", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_5zorya_6metrics(__pyx_self, __pyx_v_labels, __pyx_v_predictions);

  /* function exit code */
  {
    Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (Py_ssize_t)(sizeof(values)/sizeof(values[0])); ++__pyx_temp) {
      __Pyx_Arg_XDECREF_FASTCALL(values[__pyx_temp]);
    }
  }
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_5zorya_6metrics(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_labels, PyObject *__pyx_v_predictions) {
  PyObject *__pyx_v_true_pos = NULL;
  PyObject *__pyx_v_true_neg = NULL;
  PyObject *__pyx_v_false_pos = NULL;
  PyObject *__pyx_v_false_neg = NULL;
  Py_ssize_t __pyx_v_i;
  PyObject *__pyx_v_precision = NULL;
  PyObject *__pyx_v_recall = NULL;
  PyObject *__pyx_v_Fscore = NULL;
  PyObject *__pyx_v_accuracy = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  Py_ssize_t __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  Py_ssize_t __pyx_t_7;
  PyObject *__pyx_t_8 = NULL;
  unsigned int __pyx_t_9;
  int __pyx_t_10;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("metrics", 1);

  /* "zorya.py":344
 * def metrics(labels, predictions):  # Calculates metrics:
 *     # True Positive, True Negative, False Positive, False Negative.
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0             # <<<<<<<<<<<<<<
 *     for i in range(len(labels)):
 *         true_pos += int(labels.get(i) == 1 and predictions.get(i) == 1)
 */
  __pyx_t_1 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_1);
  __pyx_t_2 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_2);
  __pyx_t_3 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_3);
  __pyx_t_4 = __pyx_int_0;
  __Pyx_INCREF(__pyx_t_4);
  __pyx_v_true_pos = __pyx_t_1;
  __pyx_t_1 = 0;
  __pyx_v_true_neg = __pyx_t_2;
  __pyx_t_2 = 0;
  __pyx_v_false_pos = __pyx_t_3;
  __pyx_t_3 = 0;
  __pyx_v_false_neg = __pyx_t_4;
  __pyx_t_4 = 0;

  /* "zorya.py":345
 *     # True Positive, True Negative, False Positive, False Negative.
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
 *     for i in range(len(labels)):             # <<<<<<<<<<<<<<
 *         true_pos += int(labels.get(i) == 1 and predictions.get(i) == 1)
 *         true_neg += int(labels.get(i) == 0 and predictions.get(i) == 0)
 */
  __pyx_t_5 = PyObject_Length(__pyx_v_labels); if (unlikely(__pyx_t_5 == ((Py_ssize_t)-1))) __PYX_ERR(0, 345, __pyx_L1_error)
  __pyx_t_6 = __pyx_t_5;
  for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
    __pyx_v_i = __pyx_t_7;

    /* "zorya.py":346
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
 *     for i in range(len(labels)):
 *         true_pos += int(labels.get(i) == 1 and predictions.get(i) == 1)             # <<<<<<<<<<<<<<
 *         true_neg += int(labels.get(i) == 0 and predictions.get(i) == 0)
 *         false_pos += int(labels.get(i) == 0 and predictions.get(i) == 1)
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_labels, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 346, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = __Pyx_PyInt_EqObjC(__pyx_t_3, __pyx_int_1, 1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_10 < 0))) __PYX_ERR(0, 346, __pyx_L1_error)
    if (__pyx_t_10) {
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    } else {
      __Pyx_INCREF(__pyx_t_2);
      __pyx_t_4 = __pyx_t_2;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      goto __pyx_L5_bool_binop_done;
    }
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_predictions, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 346, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_t_3 = __Pyx_PyInt_EqObjC(__pyx_t_2, __pyx_int_1, 1, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_t_3);
    __pyx_t_4 = __pyx_t_3;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_L5_bool_binop_done:;
    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyNumber_InPlaceAdd(__pyx_v_true_pos, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 346, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF_SET(__pyx_v_true_pos, __pyx_t_4);
    __pyx_t_4 = 0;

    /* "zorya.py":347
 *     for i in range(len(labels)):
 *         true_pos += int(labels.get(i) == 1 and predictions.get(i) == 1)
 *         true_neg += int(labels.get(i) == 0 and predictions.get(i) == 0)             # <<<<<<<<<<<<<<
 *         false_pos += int(labels.get(i) == 0 and predictions.get(i) == 1)
 *         false_neg += int(labels.get(i) == 1 and predictions.get(i) == 0)
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_labels, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 347, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = __Pyx_PyInt_EqObjC(__pyx_t_3, __pyx_int_0, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_10 < 0))) __PYX_ERR(0, 347, __pyx_L1_error)
    if (__pyx_t_10) {
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    } else {
      __Pyx_INCREF(__pyx_t_2);
      __pyx_t_4 = __pyx_t_2;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      goto __pyx_L7_bool_binop_done;
    }
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_predictions, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 347, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_t_3 = __Pyx_PyInt_EqObjC(__pyx_t_2, __pyx_int_0, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_t_3);
    __pyx_t_4 = __pyx_t_3;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_L7_bool_binop_done:;
    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyNumber_InPlaceAdd(__pyx_v_true_neg, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 347, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF_SET(__pyx_v_true_neg, __pyx_t_4);
    __pyx_t_4 = 0;

    /* "zorya.py":348
 *         true_pos += int(labels.get(i) == 1 and predictions.get(i) == 1)
 *         true_neg += int(labels.get(i) == 0 and predictions.get(i) == 0)
 *         false_pos += int(labels.get(i) == 0 and predictions.get(i) == 1)             # <<<<<<<<<<<<<<
 *         false_neg += int(labels.get(i) == 1 and predictions.get(i) == 0)
 *     precision = true_pos / (true_pos + false_pos)
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_labels, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 348, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = __Pyx_PyInt_EqObjC(__pyx_t_3, __pyx_int_0, 0, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_10 < 0))) __PYX_ERR(0, 348, __pyx_L1_error)
    if (__pyx_t_10) {
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    } else {
      __Pyx_INCREF(__pyx_t_2);
      __pyx_t_4 = __pyx_t_2;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      goto __pyx_L9_bool_binop_done;
    }
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_predictions, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 348, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_t_3 = __Pyx_PyInt_EqObjC(__pyx_t_2, __pyx_int_1, 1, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_t_3);
    __pyx_t_4 = __pyx_t_3;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_L9_bool_binop_done:;
    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyNumber_InPlaceAdd(__pyx_v_false_pos, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 348, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF_SET(__pyx_v_false_pos, __pyx_t_4);
    __pyx_t_4 = 0;

    /* "zorya.py":349
 *         true_neg += int(labels.get(i) == 0 and predictions.get(i) == 0)
 *         false_pos += int(labels.get(i) == 0 and predictions.get(i) == 1)
 *         false_neg += int(labels.get(i) == 1 and predictions.get(i) == 0)             # <<<<<<<<<<<<<<
 *     precision = true_pos / (true_pos + false_pos)
 *     recall = true_pos / (true_pos + false_neg)
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_labels, __pyx_n_s_get); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_3 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 349, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_3);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __pyx_t_2 = __Pyx_PyInt_EqObjC(__pyx_t_3, __pyx_int_1, 1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_10 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely((__pyx_t_10 < 0))) __PYX_ERR(0, 349, __pyx_L1_error)
    if (__pyx_t_10) {
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    } else {
      __Pyx_INCREF(__pyx_t_2);
      __pyx_t_4 = __pyx_t_2;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      goto __pyx_L11_bool_binop_done;
    }
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_predictions, __pyx_n_s_get); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_8 = NULL;
    __pyx_t_9 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_3))) {
      __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_3);
      if (likely(__pyx_t_8)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
        __Pyx_INCREF(__pyx_t_8);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_3, function);
        __pyx_t_9 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_8, __pyx_t_1};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_3, __pyx_callargs+1-__pyx_t_9, 1+__pyx_t_9);
      __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 349, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    }
    __pyx_t_3 = __Pyx_PyInt_EqObjC(__pyx_t_2, __pyx_int_0, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_INCREF(__pyx_t_3);
    __pyx_t_4 = __pyx_t_3;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_L11_bool_binop_done:;
    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyNumber_InPlaceAdd(__pyx_v_false_neg, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 349, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF_SET(__pyx_v_false_neg, __pyx_t_4);
    __pyx_t_4 = 0;
  }

  /* "zorya.py":350
 *         false_pos += int(labels.get(i) == 0 and predictions.get(i) == 1)
 *         false_neg += int(labels.get(i) == 1 and predictions.get(i) == 0)
 *     precision = true_pos / (true_pos + false_pos)             # <<<<<<<<<<<<<<
 *     recall = true_pos / (true_pos + false_neg)
 *     Fscore = 2 * precision * recall / (precision + recall)
 */
  __pyx_t_4 = PyNumber_Add(__pyx_v_true_pos, __pyx_v_false_pos); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 350, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = __Pyx_PyNumber_Divide(__pyx_v_true_pos, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 350, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_precision = __pyx_t_3;
  __pyx_t_3 = 0;

  /* "zorya.py":351
 *         false_neg += int(labels.get(i) == 1 and predictions.get(i) == 0)
 *     precision = true_pos / (true_pos + false_pos)
 *     recall = true_pos / (true_pos + false_neg)             # <<<<<<<<<<<<<<
 *     Fscore = 2 * precision * recall / (precision + recall)
 *     accuracy = (true_pos + true_neg) / (
 */
  __pyx_t_3 = PyNumber_Add(__pyx_v_true_pos, __pyx_v_false_neg); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 351, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __pyx_t_4 = __Pyx_PyNumber_Divide(__pyx_v_true_pos, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 351, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_v_recall = __pyx_t_4;
  __pyx_t_4 = 0;

  /* "zorya.py":352
 *     precision = true_pos / (true_pos + false_pos)
 *     recall = true_pos / (true_pos + false_neg)
 *     Fscore = 2 * precision * recall / (precision + recall)             # <<<<<<<<<<<<<<
 *     accuracy = (true_pos + true_neg) / (
 *         true_pos + true_neg + false_pos + false_neg
 */
  __pyx_t_4 = __Pyx_PyInt_MultiplyCObj(__pyx_int_2, __pyx_v_precision, 2, 0, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 352, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = PyNumber_Multiply(__pyx_t_4, __pyx_v_recall); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 352, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyNumber_Add(__pyx_v_precision, __pyx_v_recall); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 352, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_2 = __Pyx_PyNumber_Divide(__pyx_t_3, __pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 352, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_Fscore = __pyx_t_2;
  __pyx_t_2 = 0;

  /* "zorya.py":353
 *     recall = true_pos / (true_pos + false_neg)
 *     Fscore = 2 * precision * recall / (precision + recall)
 *     accuracy = (true_pos + true_neg) / (             # <<<<<<<<<<<<<<
 *         true_pos + true_neg + false_pos + false_neg
 *     )
 */
  __pyx_t_2 = PyNumber_Add(__pyx_v_true_pos, __pyx_v_true_neg); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 353, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

  /* "zorya.py":354
 *     Fscore = 2 * precision * recall / (precision + recall)
 *     accuracy = (true_pos + true_neg) / (
 *         true_pos + true_neg + false_pos + false_neg             # <<<<<<<<<<<<<<
 *     )
 * 
 */
  __pyx_t_4 = PyNumber_Add(__pyx_v_true_pos, __pyx_v_true_neg); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 354, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_3 = PyNumber_Add(__pyx_t_4, __pyx_v_false_pos); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 354, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyNumber_Add(__pyx_t_3, __pyx_v_false_neg); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 354, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":353
 *     recall = true_pos / (true_pos + false_neg)
 *     Fscore = 2 * precision * recall / (precision + recall)
 *     accuracy = (true_pos + true_neg) / (             # <<<<<<<<<<<<<<
 *         true_pos + true_neg + false_pos + false_neg
 *     )
 */
  __pyx_t_3 = __Pyx_PyNumber_Divide(__pyx_t_2, __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 353, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_v_accuracy = __pyx_t_3;
  __pyx_t_3 = 0;

  /* "zorya.py":357
 *     )
 * 
 *     print("Precision: ", precision)             # <<<<<<<<<<<<<<
 *     print("Recall: ", recall)
 *     print("F-score: ", Fscore)
 */
  __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 357, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_Precision);
  __Pyx_GIVEREF(__pyx_kp_u_Precision);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_Precision)) __PYX_ERR(0, 357, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_precision);
  __Pyx_GIVEREF(__pyx_v_precision);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_v_precision)) __PYX_ERR(0, 357, __pyx_L1_error);
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 357, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  /* "zorya.py":358
 * 
 *     print("Precision: ", precision)
 *     print("Recall: ", recall)             # <<<<<<<<<<<<<<
 *     print("F-score: ", Fscore)
 *     print("Accuracy: ", accuracy)
 */
  __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_kp_u_Recall);
  __Pyx_GIVEREF(__pyx_kp_u_Recall);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Recall)) __PYX_ERR(0, 358, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_recall);
  __Pyx_GIVEREF(__pyx_v_recall);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_v_recall)) __PYX_ERR(0, 358, __pyx_L1_error);
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 358, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":359
 *     print("Precision: ", precision)
 *     print("Recall: ", recall)
 *     print("F-score: ", Fscore)             # <<<<<<<<<<<<<<
 *     print("Accuracy: ", accuracy)
 * 
 */
  __pyx_t_3 = PyTuple_New(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_kp_u_F_score);
  __Pyx_GIVEREF(__pyx_kp_u_F_score);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_kp_u_F_score)) __PYX_ERR(0, 359, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_Fscore);
  __Pyx_GIVEREF(__pyx_v_Fscore);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 1, __pyx_v_Fscore)) __PYX_ERR(0, 359, __pyx_L1_error);
  __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_3, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 359, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

  /* "zorya.py":360
 *     print("Recall: ", recall)
 *     print("F-score: ", Fscore)
 *     print("Accuracy: ", accuracy)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 360, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_INCREF(__pyx_kp_u_Accuracy);
  __Pyx_GIVEREF(__pyx_kp_u_Accuracy);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_Accuracy)) __PYX_ERR(0, 360, __pyx_L1_error);
  __Pyx_INCREF(__pyx_v_accuracy);
  __Pyx_GIVEREF(__pyx_v_accuracy);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_v_accuracy)) __PYX_ERR(0, 360, __pyx_L1_error);
  __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 360, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":342
 * 
 * 
 * def metrics(labels, predictions):  # Calculates metrics:             # <<<<<<<<<<<<<<
 *     # True Positive, True Negative, False Positive, False Negative.
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
 */

  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_AddTraceback("zorya.metrics", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_true_pos);
  __Pyx_XDECREF(__pyx_v_true_neg);
  __Pyx_XDECREF(__pyx_v_false_pos);
  __Pyx_XDECREF(__pyx_v_false_neg);
  __Pyx_XDECREF(__pyx_v_precision);
  __Pyx_XDECREF(__pyx_v_recall);
  __Pyx_XDECREF(__pyx_v_Fscore);
  __Pyx_XDECREF(__pyx_v_accuracy);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};
#ifndef CYTHON_SMALL_CODE
#if defined(__clang__)
    #define CYTHON_SMALL_CODE
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
    #define CYTHON_SMALL_CODE __attribute__((cold))
#else
    #define CYTHON_SMALL_CODE
#endif
#endif
/* #### Code section: pystring_table ### */

static int __Pyx_CreateStringTabAndInitStrings(void) {
  __Pyx_StringTabEntry __pyx_string_tab[] = {
    {&__pyx_kp_u_Accuracy, __pyx_k_Accuracy, sizeof(__pyx_k_Accuracy), 0, 1, 0, 0},
    {&__pyx_n_s_ArgumentParser, __pyx_k_ArgumentParser, sizeof(__pyx_k_ArgumentParser), 0, 0, 1, 1},
    {&__pyx_n_s_BowClassifier, __pyx_k_BowClassifier, sizeof(__pyx_k_BowClassifier), 0, 0, 1, 1},
    {&__pyx_n_s_BowClassifier___init, __pyx_k_BowClassifier___init, sizeof(__pyx_k_BowClassifier___init), 0, 0, 1, 1},
    {&__pyx_n_s_BowClassifier_calc_prob, __pyx_k_BowClassifier_calc_prob, sizeof(__pyx_k_BowClassifier_calc_prob), 0, 0, 1, 1},
    {&__pyx_n_s_BowClassifier_classify, __pyx_k_BowClassifier_classify, sizeof(__pyx_k_BowClassifier_classify), 0, 0, 1, 1},
    {&__pyx_n_s_BowClassifier_train, __pyx_k_BowClassifier_train, sizeof(__pyx_k_BowClassifier_train), 0, 0, 1, 1},
    {&__pyx_kp_u_Continued_use_of_our_platform_si, __pyx_k_Continued_use_of_our_platform_si, sizeof(__pyx_k_Continued_use_of_our_platform_si), 0, 1, 0, 0},
    {&__pyx_kp_u_F_score, __pyx_k_F_score, sizeof(__pyx_k_F_score), 0, 1, 0, 0},
    {&__pyx_n_s_Fscore, __pyx_k_Fscore, sizeof(__pyx_k_Fscore), 0, 0, 1, 1},
    {&__pyx_kp_u_Lines_flagged_suspicious, __pyx_k_Lines_flagged_suspicious, sizeof(__pyx_k_Lines_flagged_suspicious), 0, 1, 0, 0},
    {&__pyx_kp_u_Our_terms_of_service_and_privacy, __pyx_k_Our_terms_of_service_and_privacy, sizeof(__pyx_k_Our_terms_of_service_and_privacy), 0, 1, 0, 0},
    {&__pyx_n_s_PdfReader, __pyx_k_PdfReader, sizeof(__pyx_k_PdfReader), 0, 0, 1, 1},
    {&__pyx_kp_u_Please_select_mode, __pyx_k_Please_select_mode, sizeof(__pyx_k_Please_select_mode), 0, 1, 0, 0},
    {&__pyx_n_s_PorterStemmer, __pyx_k_PorterStemmer, sizeof(__pyx_k_PorterStemmer), 0, 0, 1, 1},
    {&__pyx_kp_u_Precision, __pyx_k_Precision, sizeof(__pyx_k_Precision), 0, 1, 0, 0},
    {&__pyx_n_s_PyPDF2, __pyx_k_PyPDF2, sizeof(__pyx_k_PyPDF2), 0, 0, 1, 1},
    {&__pyx_kp_u_Recall, __pyx_k_Recall, sizeof(__pyx_k_Recall), 0, 1, 0, 0},
    {&__pyx_kp_u_Results_for_Bow_classifier, __pyx_k_Results_for_Bow_classifier, sizeof(__pyx_k_Results_for_Bow_classifier), 0, 1, 0, 0},
    {&__pyx_kp_u_Results_for_TF_x_IDF_classifier, __pyx_k_Results_for_TF_x_IDF_classifier, sizeof(__pyx_k_Results_for_TF_x_IDF_classifier), 0, 1, 0, 0},
    {&__pyx_kp_u_Suspicious, __pyx_k_Suspicious, sizeof(__pyx_k_Suspicious), 0, 1, 0, 0},
    {&__pyx_n_s_TFIDFCLassifier, __pyx_k_TFIDFCLassifier, sizeof(__pyx_k_TFIDFCLassifier), 0, 0, 1, 1},
    {&__pyx_n_s_TFIDFCLassifier___init, __pyx_k_TFIDFCLassifier___init, sizeof(__pyx_k_TFIDFCLassifier___init), 0, 0, 1, 1},
    {&__pyx_n_s_TFIDFCLassifier_calc_TF_IDF, __pyx_k_TFIDFCLassifier_calc_TF_IDF, sizeof(__pyx_k_TFIDFCLassifier_calc_TF_IDF), 0, 0, 1, 1},
    {&__pyx_n_s_TFIDFCLassifier_classify, __pyx_k_TFIDFCLassifier_classify, sizeof(__pyx_k_TFIDFCLassifier_classify), 0, 0, 1, 1},
    {&__pyx_n_s_TFIDFCLassifier_train, __pyx_k_TFIDFCLassifier_train, sizeof(__pyx_k_TFIDFCLassifier_train), 0, 0, 1, 1},
    {&__pyx_kp_u_Testing_Continued_use_of_our_pla, __pyx_k_Testing_Continued_use_of_our_pla, sizeof(__pyx_k_Testing_Continued_use_of_our_pla), 0, 1, 0, 0},
    {&__pyx_kp_u_Testing_Our_terms_of_service_and, __pyx_k_Testing_Our_terms_of_service_and, sizeof(__pyx_k_Testing_Our_terms_of_service_and), 0, 1, 0, 0},
    {&__pyx_kp_u_Unnamed_2, __pyx_k_Unnamed_2, sizeof(__pyx_k_Unnamed_2), 0, 1, 0, 0},
    {&__pyx_kp_u_Unnamed_3, __pyx_k_Unnamed_3, sizeof(__pyx_k_Unnamed_3), 0, 1, 0, 0},
    {&__pyx_kp_u_Unnamed_4, __pyx_k_Unnamed_4, sizeof(__pyx_k_Unnamed_4), 0, 1, 0, 0},
    {&__pyx_n_s_WordCloud, __pyx_k_WordCloud, sizeof(__pyx_k_WordCloud), 0, 0, 1, 1},
    {&__pyx_kp_u_ZoryaTrace_Trace_AI_generated_co, __pyx_k_ZoryaTrace_Trace_AI_generated_co, sizeof(__pyx_k_ZoryaTrace_Trace_AI_generated_co), 0, 1, 0, 0},
    {&__pyx_kp_u__10, __pyx_k__10, sizeof(__pyx_k__10), 0, 1, 0, 0},
    {&__pyx_kp_u__13, __pyx_k__13, sizeof(__pyx_k__13), 0, 1, 0, 0},
    {&__pyx_kp_u__15, __pyx_k__15, sizeof(__pyx_k__15), 0, 1, 0, 0},
    {&__pyx_kp_u__16, __pyx_k__16, sizeof(__pyx_k__16), 0, 1, 0, 0},
    {&__pyx_n_s__17, __pyx_k__17, sizeof(__pyx_k__17), 0, 0, 1, 1},
    {&__pyx_n_s__51, __pyx_k__51, sizeof(__pyx_k__51), 0, 0, 1, 1},
    {&__pyx_n_s_accuracy, __pyx_k_accuracy, sizeof(__pyx_k_accuracy), 0, 0, 1, 1},
    {&__pyx_n_s_action, __pyx_k_action, sizeof(__pyx_k_action), 0, 0, 1, 1},
    {&__pyx_n_s_add_argument, __pyx_k_add_argument, sizeof(__pyx_k_add_argument), 0, 0, 1, 1},
    {&__pyx_n_s_argparse, __pyx_k_argparse, sizeof(__pyx_k_argparse), 0, 0, 1, 1},
    {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
    {&__pyx_n_s_asyncio_coroutines, __pyx_k_asyncio_coroutines, sizeof(__pyx_k_asyncio_coroutines), 0, 0, 1, 1},
    {&__pyx_n_s_axis, __pyx_k_axis, sizeof(__pyx_k_axis), 0, 0, 1, 1},
    {&__pyx_kp_u_c, __pyx_k_c, sizeof(__pyx_k_c), 0, 1, 0, 0},
    {&__pyx_n_s_calc_TF_IDF, __pyx_k_calc_TF_IDF, sizeof(__pyx_k_calc_TF_IDF), 0, 0, 1, 1},
    {&__pyx_n_s_calc_TF_and_IDF, __pyx_k_calc_TF_and_IDF, sizeof(__pyx_k_calc_TF_and_IDF), 0, 0, 1, 1},
    {&__pyx_n_s_calc_prob, __pyx_k_calc_prob, sizeof(__pyx_k_calc_prob), 0, 0, 1, 1},
    {&__pyx_n_s_class_getitem, __pyx_k_class_getitem, sizeof(__pyx_k_class_getitem), 0, 0, 1, 1},
    {&__pyx_kp_u_classify, __pyx_k_classify, sizeof(__pyx_k_classify), 0, 1, 0, 0},
    {&__pyx_n_s_classify_2, __pyx_k_classify_2, sizeof(__pyx_k_classify_2), 0, 0, 1, 1},
    {&__pyx_kp_u_classify_text_given_in_inverted, __pyx_k_classify_text_given_in_inverted, sizeof(__pyx_k_classify_text_given_in_inverted), 0, 1, 0, 0},
    {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_n_s_columns, __pyx_k_columns, sizeof(__pyx_k_columns), 0, 0, 1, 1},
    {&__pyx_n_s_count, __pyx_k_count, sizeof(__pyx_k_count), 0, 0, 1, 1},
    {&__pyx_kp_u_data_csv, __pyx_k_data_csv, sizeof(__pyx_k_data_csv), 0, 1, 0, 0},
    {&__pyx_n_s_description, __pyx_k_description, sizeof(__pyx_k_description), 0, 0, 1, 1},
    {&__pyx_n_s_dict, __pyx_k_dict, sizeof(__pyx_k_dict), 0, 0, 1, 1},
    {&__pyx_n_s_doc, __pyx_k_doc, sizeof(__pyx_k_doc), 0, 0, 1, 1},
    {&__pyx_n_s_download, __pyx_k_download, sizeof(__pyx_k_download), 0, 0, 1, 1},
    {&__pyx_n_s_drop, __pyx_k_drop, sizeof(__pyx_k_drop), 0, 0, 1, 1},
    {&__pyx_n_s_encoding, __pyx_k_encoding, sizeof(__pyx_k_encoding), 0, 0, 1, 1},
    {&__pyx_n_u_english, __pyx_k_english, sizeof(__pyx_k_english), 0, 1, 0, 1},
    {&__pyx_n_s_enter, __pyx_k_enter, sizeof(__pyx_k_enter), 0, 0, 1, 1},
    {&__pyx_n_s_enumerate, __pyx_k_enumerate, sizeof(__pyx_k_enumerate), 0, 0, 1, 1},
    {&__pyx_n_s_exit, __pyx_k_exit, sizeof(__pyx_k_exit), 0, 0, 1, 1},
    {&__pyx_n_s_extract_text, __pyx_k_extract_text, sizeof(__pyx_k_extract_text), 0, 0, 1, 1},
    {&__pyx_n_s_extract_text_from_pdf, __pyx_k_extract_text_from_pdf, sizeof(__pyx_k_extract_text_from_pdf), 0, 0, 1, 1},
    {&__pyx_kp_u_f, __pyx_k_f, sizeof(__pyx_k_f), 0, 1, 0, 0},
    {&__pyx_n_s_false_neg, __pyx_k_false_neg, sizeof(__pyx_k_false_neg), 0, 0, 1, 1},
    {&__pyx_n_s_false_pos, __pyx_k_false_pos, sizeof(__pyx_k_false_pos), 0, 0, 1, 1},
    {&__pyx_kp_u_file, __pyx_k_file, sizeof(__pyx_k_file), 0, 1, 0, 0},
    {&__pyx_n_s_file_2, __pyx_k_file_2, sizeof(__pyx_k_file_2), 0, 0, 1, 1},
    {&__pyx_n_s_get, __pyx_k_get, sizeof(__pyx_k_get), 0, 0, 1, 1},
    {&__pyx_n_s_gram, __pyx_k_gram, sizeof(__pyx_k_gram), 0, 0, 1, 1},
    {&__pyx_n_s_help, __pyx_k_help, sizeof(__pyx_k_help), 0, 0, 1, 1},
    {&__pyx_n_s_i, __pyx_k_i, sizeof(__pyx_k_i), 0, 0, 1, 1},
    {&__pyx_n_s_idf_neutral, __pyx_k_idf_neutral, sizeof(__pyx_k_idf_neutral), 0, 0, 1, 1},
    {&__pyx_n_s_idf_suspicious, __pyx_k_idf_suspicious, sizeof(__pyx_k_idf_suspicious), 0, 0, 1, 1},
    {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
    {&__pyx_n_u_index, __pyx_k_index, sizeof(__pyx_k_index), 0, 1, 0, 1},
    {&__pyx_n_s_init, __pyx_k_init, sizeof(__pyx_k_init), 0, 0, 1, 1},
    {&__pyx_n_s_init_subclass, __pyx_k_init_subclass, sizeof(__pyx_k_init_subclass), 0, 0, 1, 1},
    {&__pyx_n_s_initializing, __pyx_k_initializing, sizeof(__pyx_k_initializing), 0, 0, 1, 1},
    {&__pyx_n_s_inplace, __pyx_k_inplace, sizeof(__pyx_k_inplace), 0, 0, 1, 1},
    {&__pyx_n_s_is_coroutine, __pyx_k_is_coroutine, sizeof(__pyx_k_is_coroutine), 0, 0, 1, 1},
    {&__pyx_n_s_is_suspicious, __pyx_k_is_suspicious, sizeof(__pyx_k_is_suspicious), 0, 0, 1, 1},
    {&__pyx_n_s_keys, __pyx_k_keys, sizeof(__pyx_k_keys), 0, 0, 1, 1},
    {&__pyx_n_s_kwargs, __pyx_k_kwargs, sizeof(__pyx_k_kwargs), 0, 0, 1, 1},
    {&__pyx_n_u_label, __pyx_k_label, sizeof(__pyx_k_label), 0, 1, 0, 1},
    {&__pyx_n_s_labels, __pyx_k_labels, sizeof(__pyx_k_labels), 0, 0, 1, 1},
    {&__pyx_n_u_labels, __pyx_k_labels, sizeof(__pyx_k_labels), 0, 1, 0, 1},
    {&__pyx_n_s_line, __pyx_k_line, sizeof(__pyx_k_line), 0, 0, 1, 1},
    {&__pyx_n_s_lines, __pyx_k_lines, sizeof(__pyx_k_lines), 0, 0, 1, 1},
    {&__pyx_n_s_loc, __pyx_k_loc, sizeof(__pyx_k_loc), 0, 0, 1, 1},
    {&__pyx_n_s_log, __pyx_k_log, sizeof(__pyx_k_log), 0, 0, 1, 1},
    {&__pyx_n_s_lower, __pyx_k_lower, sizeof(__pyx_k_lower), 0, 0, 1, 1},
    {&__pyx_n_s_lower_case, __pyx_k_lower_case, sizeof(__pyx_k_lower_case), 0, 0, 1, 1},
    {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_n_u_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 1, 0, 1},
    {&__pyx_n_s_main_2, __pyx_k_main_2, sizeof(__pyx_k_main_2), 0, 0, 1, 1},
    {&__pyx_n_s_map, __pyx_k_map, sizeof(__pyx_k_map), 0, 0, 1, 1},
    {&__pyx_n_s_math, __pyx_k_math, sizeof(__pyx_k_math), 0, 0, 1, 1},
    {&__pyx_n_s_matplotlib, __pyx_k_matplotlib, sizeof(__pyx_k_matplotlib), 0, 0, 1, 1},
    {&__pyx_n_s_matplotlib_pyplot, __pyx_k_matplotlib_pyplot, sizeof(__pyx_k_matplotlib_pyplot), 0, 0, 1, 1},
    {&__pyx_n_s_message, __pyx_k_message, sizeof(__pyx_k_message), 0, 0, 1, 1},
    {&__pyx_n_u_message, __pyx_k_message, sizeof(__pyx_k_message), 0, 1, 0, 1},
    {&__pyx_n_s_message_processed, __pyx_k_message_processed, sizeof(__pyx_k_message_processed), 0, 0, 1, 1},
    {&__pyx_n_s_metaclass, __pyx_k_metaclass, sizeof(__pyx_k_metaclass), 0, 0, 1, 1},
    {&__pyx_n_s_metrics, __pyx_k_metrics, sizeof(__pyx_k_metrics), 0, 0, 1, 1},
    {&__pyx_n_s_module, __pyx_k_module, sizeof(__pyx_k_module), 0, 0, 1, 1},
    {&__pyx_n_s_mro_entries, __pyx_k_mro_entries, sizeof(__pyx_k_mro_entries), 0, 0, 1, 1},
    {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
    {&__pyx_n_u_neutral, __pyx_k_neutral, sizeof(__pyx_k_neutral), 0, 1, 0, 1},
    {&__pyx_n_s_neutral_terms, __pyx_k_neutral_terms, sizeof(__pyx_k_neutral_terms), 0, 0, 1, 1},
    {&__pyx_n_s_neutral_words, __pyx_k_neutral_words, sizeof(__pyx_k_neutral_words), 0, 0, 1, 1},
    {&__pyx_n_s_nltk, __pyx_k_nltk, sizeof(__pyx_k_nltk), 0, 0, 1, 1},
    {&__pyx_n_s_nltk_corpus, __pyx_k_nltk_corpus, sizeof(__pyx_k_nltk_corpus), 0, 0, 1, 1},
    {&__pyx_n_s_nltk_stem, __pyx_k_nltk_stem, sizeof(__pyx_k_nltk_stem), 0, 0, 1, 1},
    {&__pyx_n_s_nltk_tokenize, __pyx_k_nltk_tokenize, sizeof(__pyx_k_nltk_tokenize), 0, 0, 1, 1},
    {&__pyx_n_s_np, __pyx_k_np, sizeof(__pyx_k_np), 0, 0, 1, 1},
    {&__pyx_n_s_number_of_lines, __pyx_k_number_of_lines, sizeof(__pyx_k_number_of_lines), 0, 0, 1, 1},
    {&__pyx_n_s_numpy, __pyx_k_numpy, sizeof(__pyx_k_numpy), 0, 0, 1, 1},
    {&__pyx_n_s_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 0, 1, 1},
    {&__pyx_n_s_pHam, __pyx_k_pHam, sizeof(__pyx_k_pHam), 0, 0, 1, 1},
    {&__pyx_n_s_pSpam, __pyx_k_pSpam, sizeof(__pyx_k_pSpam), 0, 0, 1, 1},
    {&__pyx_n_s_page, __pyx_k_page, sizeof(__pyx_k_page), 0, 0, 1, 1},
    {&__pyx_n_s_pages, __pyx_k_pages, sizeof(__pyx_k_pages), 0, 0, 1, 1},
    {&__pyx_n_s_pandas, __pyx_k_pandas, sizeof(__pyx_k_pandas), 0, 0, 1, 1},
    {&__pyx_n_s_parse_args, __pyx_k_parse_args, sizeof(__pyx_k_parse_args), 0, 0, 1, 1},
    {&__pyx_n_s_parser, __pyx_k_parser, sizeof(__pyx_k_parser), 0, 0, 1, 1},
    {&__pyx_kp_u_path_to_the_pdf_file_to_be_analy, __pyx_k_path_to_the_pdf_file_to_be_analy, sizeof(__pyx_k_path_to_the_pdf_file_to_be_analy), 0, 1, 0, 0},
    {&__pyx_n_s_pd, __pyx_k_pd, sizeof(__pyx_k_pd), 0, 0, 1, 1},
    {&__pyx_n_s_pdf_file, __pyx_k_pdf_file, sizeof(__pyx_k_pdf_file), 0, 0, 1, 1},
    {&__pyx_n_s_pdf_reader, __pyx_k_pdf_reader, sizeof(__pyx_k_pdf_reader), 0, 0, 1, 1},
    {&__pyx_n_s_pdf_text, __pyx_k_pdf_text, sizeof(__pyx_k_pdf_text), 0, 0, 1, 1},
    {&__pyx_n_s_plt, __pyx_k_plt, sizeof(__pyx_k_plt), 0, 0, 1, 1},
    {&__pyx_n_s_pm, __pyx_k_pm, sizeof(__pyx_k_pm), 0, 0, 1, 1},
    {&__pyx_n_s_precision, __pyx_k_precision, sizeof(__pyx_k_precision), 0, 0, 1, 1},
    {&__pyx_n_s_predict, __pyx_k_predict, sizeof(__pyx_k_predict), 0, 0, 1, 1},
    {&__pyx_n_s_predictions, __pyx_k_predictions, sizeof(__pyx_k_predictions), 0, 0, 1, 1},
    {&__pyx_n_s_preds_bow, __pyx_k_preds_bow, sizeof(__pyx_k_preds_bow), 0, 0, 1, 1},
    {&__pyx_n_s_preds_tf_idf, __pyx_k_preds_tf_idf, sizeof(__pyx_k_preds_tf_idf), 0, 0, 1, 1},
    {&__pyx_n_s_prepare, __pyx_k_prepare, sizeof(__pyx_k_prepare), 0, 0, 1, 1},
    {&__pyx_n_s_print, __pyx_k_print, sizeof(__pyx_k_print), 0, 0, 1, 1},
    {&__pyx_n_s_print_help, __pyx_k_print_help, sizeof(__pyx_k_print_help), 0, 0, 1, 1},
    {&__pyx_n_s_prob_neutral, __pyx_k_prob_neutral, sizeof(__pyx_k_prob_neutral), 0, 0, 1, 1},
    {&__pyx_n_s_prob_neutral_entry, __pyx_k_prob_neutral_entry, sizeof(__pyx_k_prob_neutral_entry), 0, 0, 1, 1},
    {&__pyx_n_s_prob_suspicious, __pyx_k_prob_suspicious, sizeof(__pyx_k_prob_suspicious), 0, 0, 1, 1},
    {&__pyx_n_s_prob_suspicious_entry, __pyx_k_prob_suspicious_entry, sizeof(__pyx_k_prob_suspicious_entry), 0, 0, 1, 1},
    {&__pyx_n_s_process_message, __pyx_k_process_message, sizeof(__pyx_k_process_message), 0, 0, 1, 1},
    {&__pyx_n_s_processed_line, __pyx_k_processed_line, sizeof(__pyx_k_processed_line), 0, 0, 1, 1},
    {&__pyx_n_s_processed_message, __pyx_k_processed_message, sizeof(__pyx_k_processed_message), 0, 0, 1, 1},
    {&__pyx_n_u_punkt, __pyx_k_punkt, sizeof(__pyx_k_punkt), 0, 1, 0, 1},
    {&__pyx_n_s_pyplot, __pyx_k_pyplot, sizeof(__pyx_k_pyplot), 0, 0, 1, 1},
    {&__pyx_n_s_qualname, __pyx_k_qualname, sizeof(__pyx_k_qualname), 0, 0, 1, 1},
    {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
    {&__pyx_n_s_range, __pyx_k_range, sizeof(__pyx_k_range), 0, 0, 1, 1},
    {&__pyx_n_u_rb, __pyx_k_rb, sizeof(__pyx_k_rb), 0, 1, 0, 1},
    {&__pyx_n_s_read_csv, __pyx_k_read_csv, sizeof(__pyx_k_read_csv), 0, 0, 1, 1},
    {&__pyx_n_s_recall, __pyx_k_recall, sizeof(__pyx_k_recall), 0, 0, 1, 1},
    {&__pyx_n_s_rename, __pyx_k_rename, sizeof(__pyx_k_rename), 0, 0, 1, 1},
    {&__pyx_n_s_reset_index, __pyx_k_reset_index, sizeof(__pyx_k_reset_index), 0, 0, 1, 1},
    {&__pyx_n_s_result, __pyx_k_result, sizeof(__pyx_k_result), 0, 0, 1, 1},
    {&__pyx_n_s_sc_bow, __pyx_k_sc_bow, sizeof(__pyx_k_sc_bow), 0, 0, 1, 1},
    {&__pyx_n_s_sc_tf_idf, __pyx_k_sc_tf_idf, sizeof(__pyx_k_sc_tf_idf), 0, 0, 1, 1},
    {&__pyx_n_s_self, __pyx_k_self, sizeof(__pyx_k_self), 0, 0, 1, 1},
    {&__pyx_n_s_set_name, __pyx_k_set_name, sizeof(__pyx_k_set_name), 0, 0, 1, 1},
    {&__pyx_n_s_shape, __pyx_k_shape, sizeof(__pyx_k_shape), 0, 0, 1, 1},
    {&__pyx_n_s_spec, __pyx_k_spec, sizeof(__pyx_k_spec), 0, 0, 1, 1},
    {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
    {&__pyx_n_s_stem, __pyx_k_stem, sizeof(__pyx_k_stem), 0, 0, 1, 1},
    {&__pyx_n_s_stemmer, __pyx_k_stemmer, sizeof(__pyx_k_stemmer), 0, 0, 1, 1},
    {&__pyx_n_s_stop_words, __pyx_k_stop_words, sizeof(__pyx_k_stop_words), 0, 0, 1, 1},
    {&__pyx_n_s_stopwords, __pyx_k_stopwords, sizeof(__pyx_k_stopwords), 0, 0, 1, 1},
    {&__pyx_n_u_stopwords, __pyx_k_stopwords, sizeof(__pyx_k_stopwords), 0, 1, 0, 1},
    {&__pyx_n_u_store_true, __pyx_k_store_true, sizeof(__pyx_k_store_true), 0, 1, 0, 1},
    {&__pyx_n_s_sum_tf_idf_neutral, __pyx_k_sum_tf_idf_neutral, sizeof(__pyx_k_sum_tf_idf_neutral), 0, 0, 1, 1},
    {&__pyx_n_s_sum_tf_idf_suspicious, __pyx_k_sum_tf_idf_suspicious, sizeof(__pyx_k_sum_tf_idf_suspicious), 0, 0, 1, 1},
    {&__pyx_n_s_super, __pyx_k_super, sizeof(__pyx_k_super), 0, 0, 1, 1},
    {&__pyx_n_u_suspicious, __pyx_k_suspicious, sizeof(__pyx_k_suspicious), 0, 1, 0, 1},
    {&__pyx_n_s_suspicious_line, __pyx_k_suspicious_line, sizeof(__pyx_k_suspicious_line), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_lines, __pyx_k_suspicious_lines, sizeof(__pyx_k_suspicious_lines), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms, __pyx_k_suspicious_terms, sizeof(__pyx_k_suspicious_terms), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms_classifier, __pyx_k_suspicious_terms_classifier, sizeof(__pyx_k_suspicious_terms_classifier), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms_classifier___in, __pyx_k_suspicious_terms_classifier___in, sizeof(__pyx_k_suspicious_terms_classifier___in), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms_classifier_calc, __pyx_k_suspicious_terms_classifier_calc, sizeof(__pyx_k_suspicious_terms_classifier_calc), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms_classifier_clas, __pyx_k_suspicious_terms_classifier_clas, sizeof(__pyx_k_suspicious_terms_classifier_clas), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms_classifier_pred, __pyx_k_suspicious_terms_classifier_pred, sizeof(__pyx_k_suspicious_terms_classifier_pred), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_terms_classifier_trai, __pyx_k_suspicious_terms_classifier_trai, sizeof(__pyx_k_suspicious_terms_classifier_trai), 0, 0, 1, 1},
    {&__pyx_n_s_suspicious_words, __pyx_k_suspicious_words, sizeof(__pyx_k_suspicious_words), 0, 0, 1, 1},
    {&__pyx_n_s_sw, __pyx_k_sw, sizeof(__pyx_k_sw), 0, 0, 1, 1},
    {&__pyx_kp_u_t, __pyx_k_t, sizeof(__pyx_k_t), 0, 1, 0, 0},
    {&__pyx_n_s_terms, __pyx_k_terms, sizeof(__pyx_k_terms), 0, 0, 1, 1},
    {&__pyx_kp_u_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 1, 0, 0},
    {&__pyx_n_s_testData, __pyx_k_testData, sizeof(__pyx_k_testData), 0, 0, 1, 1},
    {&__pyx_n_s_testIndex, __pyx_k_testIndex, sizeof(__pyx_k_testIndex), 0, 0, 1, 1},
    {&__pyx_n_s_test_2, __pyx_k_test_2, sizeof(__pyx_k_test_2), 0, 0, 1, 1},
    {&__pyx_n_s_test_3, __pyx_k_test_3, sizeof(__pyx_k_test_3), 0, 0, 1, 1},
    {&__pyx_n_s_text, __pyx_k_text, sizeof(__pyx_k_text), 0, 0, 1, 1},
    {&__pyx_n_s_tf_neutral, __pyx_k_tf_neutral, sizeof(__pyx_k_tf_neutral), 0, 0, 1, 1},
    {&__pyx_n_s_tf_suspicious, __pyx_k_tf_suspicious, sizeof(__pyx_k_tf_suspicious), 0, 0, 1, 1},
    {&__pyx_n_s_total_terms, __pyx_k_total_terms, sizeof(__pyx_k_total_terms), 0, 0, 1, 1},
    {&__pyx_n_s_train, __pyx_k_train, sizeof(__pyx_k_train), 0, 0, 1, 1},
    {&__pyx_n_s_trainData, __pyx_k_trainData, sizeof(__pyx_k_trainData), 0, 0, 1, 1},
    {&__pyx_n_s_trainIndex, __pyx_k_trainIndex, sizeof(__pyx_k_trainIndex), 0, 0, 1, 1},
    {&__pyx_kp_u_train_and_test_the_algorithm_on, __pyx_k_train_and_test_the_algorithm_on, sizeof(__pyx_k_train_and_test_the_algorithm_on), 0, 1, 0, 0},
    {&__pyx_n_s_true_neg, __pyx_k_true_neg, sizeof(__pyx_k_true_neg), 0, 0, 1, 1},
    {&__pyx_n_s_true_pos, __pyx_k_true_pos, sizeof(__pyx_k_true_pos), 0, 0, 1, 1},
    {&__pyx_n_s_type, __pyx_k_type, sizeof(__pyx_k_type), 0, 0, 1, 1},
    {&__pyx_n_s_uniform, __pyx_k_uniform, sizeof(__pyx_k_uniform), 0, 0, 1, 1},
    {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
    {&__pyx_n_u_v1, __pyx_k_v1, sizeof(__pyx_k_v1), 0, 1, 0, 1},
    {&__pyx_n_u_v2, __pyx_k_v2, sizeof(__pyx_k_v2), 0, 1, 0, 1},
    {&__pyx_n_s_value_counts, __pyx_k_value_counts, sizeof(__pyx_k_value_counts), 0, 0, 1, 1},
    {&__pyx_n_s_w, __pyx_k_w, sizeof(__pyx_k_w), 0, 0, 1, 1},
    {&__pyx_n_s_word, __pyx_k_word, sizeof(__pyx_k_word), 0, 0, 1, 1},
    {&__pyx_n_s_word_tokenize, __pyx_k_word_tokenize, sizeof(__pyx_k_word_tokenize), 0, 0, 1, 1},
    {&__pyx_n_s_wordcloud, __pyx_k_wordcloud, sizeof(__pyx_k_wordcloud), 0, 0, 1, 1},
    {&__pyx_n_s_words, __pyx_k_words, sizeof(__pyx_k_words), 0, 0, 1, 1},
    {&__pyx_n_s_zorya, __pyx_k_zorya, sizeof(__pyx_k_zorya), 0, 0, 1, 1},
    {&__pyx_kp_s_zorya_py, __pyx_k_zorya_py, sizeof(__pyx_k_zorya_py), 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}
  };
  return __Pyx_InitStrings(__pyx_string_tab);
}
/* #### Code section: cached_builtins ### */
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_print = __Pyx_GetBuiltinName(__pyx_n_s_print); if (!__pyx_builtin_print) __PYX_ERR(0, 48, __pyx_L1_error)
  __pyx_builtin_range = __Pyx_GetBuiltinName(__pyx_n_s_range); if (!__pyx_builtin_range) __PYX_ERR(0, 54, __pyx_L1_error)
  __pyx_builtin_open = __Pyx_GetBuiltinName(__pyx_n_s_open); if (!__pyx_builtin_open) __PYX_ERR(0, 140, __pyx_L1_error)
  __pyx_builtin_enumerate = __Pyx_GetBuiltinName(__pyx_n_s_enumerate); if (!__pyx_builtin_enumerate) __PYX_ERR(0, 233, __pyx_L1_error)
  __pyx_builtin_super = __Pyx_GetBuiltinName(__pyx_n_s_super); if (!__pyx_builtin_super) __PYX_ERR(0, 241, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
/* #### Code section: cached_constants ### */

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

  /* "zorya.py":23
 *     #Result given by using the command without arguments.
 *     parser = argparse.ArgumentParser(description="ZoryaTrace - Trace AI generated content")
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *     "-f",
 *     "--file",
 */
  __pyx_tuple_ = PyTuple_Pack(2, __pyx_kp_u_f, __pyx_kp_u_file); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 23, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);

  /* "zorya.py":29
 *     help="path to the pdf file to be analyzed with the algorithm, and then return the lines deemed suspicious to the user in terms of confidentiality.",
 *     )
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *         "-c",
 *         "--classify",
 */
  __pyx_tuple__2 = PyTuple_Pack(2, __pyx_kp_u_c, __pyx_kp_u_classify); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 29, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

  /* "zorya.py":35
 *         help="classify text given in inverted commas as suspect or neutral using TFxIDF algorithm",
 *     )
 *     parser.add_argument(             # <<<<<<<<<<<<<<
 *         "-t",
 *         "--test",
 */
  __pyx_tuple__3 = PyTuple_Pack(2, __pyx_kp_u_t, __pyx_kp_u_test); if (unlikely(!__pyx_tuple__3)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__3);
  __Pyx_GIVEREF(__pyx_tuple__3);

  /* "zorya.py":45
 * 
 *     # Reads the data.csv file and transforms it into a Pandas DataFrame, sorting the columns.
 *     terms = pd.read_csv("data.csv", encoding="utf-8")             # <<<<<<<<<<<<<<
 *     terms.drop(["Unnamed: 2", "Unnamed: 3", "Unnamed: 4"], axis=1, inplace=True)
 *     terms.rename(columns={"v1": "labels", "v2": "message"}, inplace=True)
 */
  __pyx_tuple__4 = PyTuple_Pack(1, __pyx_kp_u_data_csv); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 45, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);

  /* "zorya.py":55
 *     trainIndex, testIndex = list(), list()
 *     for i in range(terms.shape[0]):
 *         if np.random.uniform(0, 1) < 0.75:             # <<<<<<<<<<<<<<
 *             trainIndex += [i]
 *         else:
 */
  __pyx_tuple__5 = PyTuple_Pack(2, __pyx_int_0, __pyx_int_1); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 55, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);

  /* "zorya.py":75
 *         preds_tf_idf = sc_tf_idf.predict(testData["message"])
 *         print()
 *         print("Results for TF x IDF classifier:")             # <<<<<<<<<<<<<<
 *         metrics(testData["label"], preds_tf_idf)
 * 
 */
  __pyx_tuple__6 = PyTuple_Pack(1, __pyx_kp_u_Results_for_TF_x_IDF_classifier); if (unlikely(!__pyx_tuple__6)) __PYX_ERR(0, 75, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__6);
  __Pyx_GIVEREF(__pyx_tuple__6);

  /* "zorya.py":82
 *         preds_bow = sc_bow.predict(testData["message"])
 *         print()
 *         print("Results for Bow classifier:")             # <<<<<<<<<<<<<<
 *         metrics(testData["label"], preds_bow)
 *         print()
 */
  __pyx_tuple__7 = PyTuple_Pack(1, __pyx_kp_u_Results_for_Bow_classifier); if (unlikely(!__pyx_tuple__7)) __PYX_ERR(0, 82, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__7);
  __Pyx_GIVEREF(__pyx_tuple__7);

  /* "zorya.py":86
 *         print()
 *         # Use of two predefined messages to test the algorithm.
 *         print("Testing:  'Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination.'")             # <<<<<<<<<<<<<<
 *         pm = process_message(
 *             "Continued use of our platform signifies acceptance of our terms and conditions, including our policies on data handling and privacy. Failure to comply may result in account termination."
 */
  __pyx_tuple__8 = PyTuple_Pack(1, __pyx_kp_u_Testing_Continued_use_of_our_pla); if (unlikely(!__pyx_tuple__8)) __PYX_ERR(0, 86, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__8);
  __Pyx_GIVEREF(__pyx_tuple__8);

  /* "zorya.py":92
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 * 
 *         print("Testing:  'Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards.'")             # <<<<<<<<<<<<<<
 *         pm = process_message("Our terms of service and privacy policy outline the rules and regulations governing the use of our platform. We prioritize user privacy and ensure data protection in compliance with legal standards. ")
 *         print("Suspicious? :", sc_tf_idf.classify(pm))
 */
  __pyx_tuple__9 = PyTuple_Pack(1, __pyx_kp_u_Testing_Our_terms_of_service_and); if (unlikely(!__pyx_tuple__9)) __PYX_ERR(0, 92, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__9);
  __Pyx_GIVEREF(__pyx_tuple__9);

  /* "zorya.py":129
 * 
 *     # Display only data deemed suspicious.
 *     print("=========================================\n========Lines flagged suspicious:========\n=========================================\n")             # <<<<<<<<<<<<<<
 *     for suspicious_line in suspicious_lines:
 *         print(suspicious_line, "\n")
 */
  __pyx_tuple__11 = PyTuple_Pack(1, __pyx_kp_u_Lines_flagged_suspicious); if (unlikely(!__pyx_tuple__11)) __PYX_ERR(0, 129, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__11);
  __Pyx_GIVEREF(__pyx_tuple__11);

  /* "zorya.py":136
 *         parser.print_help()
 *         print()
 *         print("Please select mode.")             # <<<<<<<<<<<<<<
 * 
 * # Extraction function for the pdf file.
 */
  __pyx_tuple__12 = PyTuple_Pack(1, __pyx_kp_u_Please_select_mode); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 136, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__12);
  __Pyx_GIVEREF(__pyx_tuple__12);

  /* "zorya.py":140
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):
 *     with open(pdf_file, 'rb') as file:             # <<<<<<<<<<<<<<
 *         pdf_reader = PdfReader(file)
 *         text = ''
 */
  __pyx_tuple__14 = PyTuple_Pack(3, Py_None, Py_None, Py_None); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 140, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__14);
  __Pyx_GIVEREF(__pyx_tuple__14);

  /* "zorya.py":5
 * from nltk.stem import PorterStemmer
 * import nltk
 * import matplotlib.pyplot as plt             # <<<<<<<<<<<<<<
 * from wordcloud import WordCloud
 * from math import log
 */
  __pyx_tuple__18 = PyTuple_Pack(2, __pyx_n_s_matplotlib, __pyx_n_s_pyplot); if (unlikely(!__pyx_tuple__18)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__18);
  __Pyx_GIVEREF(__pyx_tuple__18);

  /* "zorya.py":13
 * from PyPDF2 import PdfReader
 * 
 * nltk.download("punkt")             # <<<<<<<<<<<<<<
 * nltk.download("stopwords")
 * 
 */
  __pyx_tuple__19 = PyTuple_Pack(1, __pyx_n_u_punkt); if (unlikely(!__pyx_tuple__19)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__19);
  __Pyx_GIVEREF(__pyx_tuple__19);

  /* "zorya.py":14
 * 
 * nltk.download("punkt")
 * nltk.download("stopwords")             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_tuple__20 = PyTuple_Pack(1, __pyx_n_u_stopwords); if (unlikely(!__pyx_tuple__20)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__20);
  __Pyx_GIVEREF(__pyx_tuple__20);

  /* "zorya.py":17
 * 
 * 
 * def main():             # <<<<<<<<<<<<<<
 *     #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
 *     suspicious_lines = []
 */
  __pyx_tuple__21 = PyTuple_Pack(20, __pyx_n_s_suspicious_lines, __pyx_n_s_sc_tf_idf, __pyx_n_s_parser, __pyx_n_s_args, __pyx_n_s_terms, __pyx_n_s_trainIndex, __pyx_n_s_testIndex, __pyx_n_s_i, __pyx_n_s_trainData, __pyx_n_s_testData, __pyx_n_s_preds_tf_idf, __pyx_n_s_sc_bow, __pyx_n_s_preds_bow, __pyx_n_s_pm, __pyx_n_s_pdf_text, __pyx_n_s_lines, __pyx_n_s_line, __pyx_n_s_processed_line, __pyx_n_s_is_suspicious, __pyx_n_s_suspicious_line); if (unlikely(!__pyx_tuple__21)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__21);
  __Pyx_GIVEREF(__pyx_tuple__21);
  __pyx_codeobj__22 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 20, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__21, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_main_2, 17, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__22)) __PYX_ERR(0, 17, __pyx_L1_error)

  /* "zorya.py":139
 * 
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):             # <<<<<<<<<<<<<<
 *     with open(pdf_file, 'rb') as file:
 *         pdf_reader = PdfReader(file)
 */
  __pyx_tuple__23 = PyTuple_Pack(5, __pyx_n_s_pdf_file, __pyx_n_s_file_2, __pyx_n_s_pdf_reader, __pyx_n_s_text, __pyx_n_s_page); if (unlikely(!__pyx_tuple__23)) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__23);
  __Pyx_GIVEREF(__pyx_tuple__23);
  __pyx_codeobj__24 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__23, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_extract_text_from_pdf, 139, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__24)) __PYX_ERR(0, 139, __pyx_L1_error)

  /* "zorya.py":148
 * 
 * 
 * def process_message(             # <<<<<<<<<<<<<<
 *     message, lower_case=True, stem=True, stop_words=True, gram=1
 * ):
 */
  __pyx_tuple__25 = PyTuple_Pack(13, __pyx_n_s_message, __pyx_n_s_lower_case, __pyx_n_s_stem, __pyx_n_s_stop_words, __pyx_n_s_gram, __pyx_n_s_words, __pyx_n_s_w, __pyx_n_s_i, __pyx_n_s_sw, __pyx_n_s_stemmer, __pyx_n_s_w, __pyx_n_s_word, __pyx_n_s_word); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__25);
  __Pyx_GIVEREF(__pyx_tuple__25);
  __pyx_codeobj__26 = (PyObject*)__Pyx_PyCode_New(5, 0, 0, 13, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__25, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_process_message, 148, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__26)) __PYX_ERR(0, 148, __pyx_L1_error)
  __pyx_tuple__27 = PyTuple_Pack(4, ((PyObject *)Py_True), ((PyObject *)Py_True), ((PyObject *)Py_True), ((PyObject *)__pyx_int_1)); if (unlikely(!__pyx_tuple__27)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__27);
  __Pyx_GIVEREF(__pyx_tuple__27);

  /* "zorya.py":176
 * 
 * class suspicious_terms_classifier:
 *     def __init__(self, trainData):             # <<<<<<<<<<<<<<
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 */
  __pyx_tuple__28 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_trainData); if (unlikely(!__pyx_tuple__28)) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__28);
  __Pyx_GIVEREF(__pyx_tuple__28);
  __pyx_codeobj__29 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__28, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_init, 176, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__29)) __PYX_ERR(0, 176, __pyx_L1_error)

  /* "zorya.py":179
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */
  __pyx_tuple__30 = PyTuple_Pack(1, __pyx_n_s_self); if (unlikely(!__pyx_tuple__30)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__30);
  __Pyx_GIVEREF(__pyx_tuple__30);
  __pyx_codeobj__31 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__30, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_train, 179, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__31)) __PYX_ERR(0, 179, __pyx_L1_error)

  /* "zorya.py":182
 *         pass
 * 
 *     def classify(self, message):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */
  __pyx_tuple__32 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_message); if (unlikely(!__pyx_tuple__32)) __PYX_ERR(0, 182, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__32);
  __Pyx_GIVEREF(__pyx_tuple__32);
  __pyx_codeobj__33 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__32, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_classify_2, 182, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__33)) __PYX_ERR(0, 182, __pyx_L1_error)

  /* "zorya.py":185
 *         pass
 * 
 *     def calc_TF_and_IDF(self):             # <<<<<<<<<<<<<<
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.
 *         self.suspicious_terms, self.neutral_terms = (
 */
  __pyx_tuple__34 = PyTuple_Pack(6, __pyx_n_s_self, __pyx_n_s_number_of_lines, __pyx_n_s_i, __pyx_n_s_message_processed, __pyx_n_s_count, __pyx_n_s_word); if (unlikely(!__pyx_tuple__34)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__34);
  __Pyx_GIVEREF(__pyx_tuple__34);
  __pyx_codeobj__35 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 6, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__34, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_calc_TF_and_IDF, 185, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__35)) __PYX_ERR(0, 185, __pyx_L1_error)

  /* "zorya.py":230
 *                     # Calculates the idf (the number of neutral data items containing this word).
 * 
 *     def predict(self, testData):             # <<<<<<<<<<<<<<
 *         # Invokes the classifier for Test Set messages
 *         result = dict()
 */
  __pyx_tuple__36 = PyTuple_Pack(6, __pyx_n_s_self, __pyx_n_s_testData, __pyx_n_s_result, __pyx_n_s_i, __pyx_n_s_message, __pyx_n_s_processed_message); if (unlikely(!__pyx_tuple__36)) __PYX_ERR(0, 230, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__36);
  __Pyx_GIVEREF(__pyx_tuple__36);
  __pyx_codeobj__37 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 6, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__36, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_predict, 230, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__37)) __PYX_ERR(0, 230, __pyx_L1_error)

  /* "zorya.py":240
 * 
 * class TFIDFCLassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */
  __pyx_tuple__38 = PyTuple_Pack(3, __pyx_n_s_self, __pyx_n_s_args, __pyx_n_s_kwargs); if (unlikely(!__pyx_tuple__38)) __PYX_ERR(0, 240, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__38);
  __Pyx_GIVEREF(__pyx_tuple__38);
  __pyx_codeobj__39 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARARGS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__38, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_init, 240, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__39)) __PYX_ERR(0, 240, __pyx_L1_error)

  /* "zorya.py":243
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_TF_IDF()
 */
  __pyx_codeobj__40 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__30, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_train, 243, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__40)) __PYX_ERR(0, 243, __pyx_L1_error)

  /* "zorya.py":247
 *         self.calc_TF_IDF()
 * 
 *     def calc_TF_IDF(self):             # <<<<<<<<<<<<<<
 *         # Performs the overall calculation (tf_idf).
 *         self.prob_suspicious = dict()
 */
  __pyx_tuple__41 = PyTuple_Pack(2, __pyx_n_s_self, __pyx_n_s_word); if (unlikely(!__pyx_tuple__41)) __PYX_ERR(0, 247, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__41);
  __Pyx_GIVEREF(__pyx_tuple__41);
  __pyx_codeobj__42 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__41, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_calc_TF_IDF, 247, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__42)) __PYX_ERR(0, 247, __pyx_L1_error)

  /* "zorya.py":282
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */
  __pyx_tuple__43 = PyTuple_Pack(5, __pyx_n_s_self, __pyx_n_s_processed_message, __pyx_n_s_pSpam, __pyx_n_s_pHam, __pyx_n_s_word); if (unlikely(!__pyx_tuple__43)) __PYX_ERR(0, 282, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__43);
  __Pyx_GIVEREF(__pyx_tuple__43);
  __pyx_codeobj__44 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__43, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_classify_2, 282, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__44)) __PYX_ERR(0, 282, __pyx_L1_error)

  /* "zorya.py":300
 * 
 * class BowClassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */
  __pyx_codeobj__45 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 3, 0, CO_OPTIMIZED|CO_NEWLOCALS|CO_VARARGS|CO_VARKEYWORDS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__38, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_init, 300, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__45)) __PYX_ERR(0, 300, __pyx_L1_error)

  /* "zorya.py":303
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_prob()
 */
  __pyx_codeobj__46 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 1, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__30, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_train, 303, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__46)) __PYX_ERR(0, 303, __pyx_L1_error)

  /* "zorya.py":307
 *         self.calc_prob()
 * 
 *     def calc_prob(self):             # <<<<<<<<<<<<<<
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 */
  __pyx_codeobj__47 = (PyObject*)__Pyx_PyCode_New(1, 0, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__41, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_calc_prob, 307, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__47)) __PYX_ERR(0, 307, __pyx_L1_error)

  /* "zorya.py":325
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */
  __pyx_codeobj__48 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 5, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__43, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_classify_2, 325, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__48)) __PYX_ERR(0, 325, __pyx_L1_error)

  /* "zorya.py":342
 * 
 * 
 * def metrics(labels, predictions):  # Calculates metrics:             # <<<<<<<<<<<<<<
 *     # True Positive, True Negative, False Positive, False Negative.
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
 */
  __pyx_tuple__49 = PyTuple_Pack(11, __pyx_n_s_labels, __pyx_n_s_predictions, __pyx_n_s_true_pos, __pyx_n_s_true_neg, __pyx_n_s_false_pos, __pyx_n_s_false_neg, __pyx_n_s_i, __pyx_n_s_precision, __pyx_n_s_recall, __pyx_n_s_Fscore, __pyx_n_s_accuracy); if (unlikely(!__pyx_tuple__49)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__49);
  __Pyx_GIVEREF(__pyx_tuple__49);
  __pyx_codeobj__50 = (PyObject*)__Pyx_PyCode_New(2, 0, 0, 11, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__49, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_zorya_py, __pyx_n_s_metrics, 342, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__50)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}
/* #### Code section: init_constants ### */

static CYTHON_SMALL_CODE int __Pyx_InitConstants(void) {
  if (__Pyx_CreateStringTabAndInitStrings() < 0) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_float_0_75 = PyFloat_FromDouble(0.75); if (unlikely(!__pyx_float_0_75)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_int_2 = PyInt_FromLong(2); if (unlikely(!__pyx_int_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
/* #### Code section: init_globals ### */

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  return 0;
}
/* #### Code section: init_module ### */

static CYTHON_SMALL_CODE int __Pyx_modinit_global_init_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_export_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_function_export_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_type_init_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_type_import_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_import_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_function_import_code(void); /*proto*/

static int __Pyx_modinit_global_init_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_global_init_code", 0);
  /*--- Global init code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_export_code", 0);
  /*--- Variable export code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_export_code", 0);
  /*--- Function export code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_type_init_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
  /*--- Type init code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_type_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_import_code", 0);
  /*--- Type import code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_import_code", 0);
  /*--- Variable import code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_import_code", 0);
  /*--- Function import code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}


#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def); /*proto*/
static int __pyx_pymod_exec_zorya(PyObject* module); /*proto*/
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_zorya},
  {0, NULL}
};
#endif

#ifdef __cplusplus
namespace {
  struct PyModuleDef __pyx_moduledef =
  #else
  static struct PyModuleDef __pyx_moduledef =
  #endif
  {
      PyModuleDef_HEAD_INIT,
      "zorya",
      0, /* m_doc */
    #if CYTHON_PEP489_MULTI_PHASE_INIT
      0, /* m_size */
    #elif CYTHON_USE_MODULE_STATE
      sizeof(__pyx_mstate), /* m_size */
    #else
      -1, /* m_size */
    #endif
      __pyx_methods /* m_methods */,
    #if CYTHON_PEP489_MULTI_PHASE_INIT
      __pyx_moduledef_slots, /* m_slots */
    #else
      NULL, /* m_reload */
    #endif
    #if CYTHON_USE_MODULE_STATE
      __pyx_m_traverse, /* m_traverse */
      __pyx_m_clear, /* m_clear */
      NULL /* m_free */
    #else
      NULL, /* m_traverse */
      NULL, /* m_clear */
      NULL /* m_free */
    #endif
  };
  #ifdef __cplusplus
} /* anonymous namespace */
#endif
#endif

#ifndef CYTHON_NO_PYINIT_EXPORT
#define __Pyx_PyMODINIT_FUNC PyMODINIT_FUNC
#elif PY_MAJOR_VERSION < 3
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" void
#else
#define __Pyx_PyMODINIT_FUNC void
#endif
#else
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" PyObject *
#else
#define __Pyx_PyMODINIT_FUNC PyObject *
#endif
#endif


#if PY_MAJOR_VERSION < 3
__Pyx_PyMODINIT_FUNC initzorya(void) CYTHON_SMALL_CODE; /*proto*/
__Pyx_PyMODINIT_FUNC initzorya(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_zorya(void) CYTHON_SMALL_CODE; /*proto*/
__Pyx_PyMODINIT_FUNC PyInit_zorya(void)
#if CYTHON_PEP489_MULTI_PHASE_INIT
{
  return PyModuleDef_Init(&__pyx_moduledef);
}
static CYTHON_SMALL_CODE int __Pyx_check_single_interpreter(void) {
    #if PY_VERSION_HEX >= 0x030700A1
    static PY_INT64_T main_interpreter_id = -1;
    PY_INT64_T current_id = PyInterpreterState_GetID(PyThreadState_Get()->interp);
    if (main_interpreter_id == -1) {
        main_interpreter_id = current_id;
        return (unlikely(current_id == -1)) ? -1 : 0;
    } else if (unlikely(main_interpreter_id != current_id))
    #else
    static PyInterpreterState *main_interpreter = NULL;
    PyInterpreterState *current_interpreter = PyThreadState_Get()->interp;
    if (!main_interpreter) {
        main_interpreter = current_interpreter;
    } else if (unlikely(main_interpreter != current_interpreter))
    #endif
    {
        PyErr_SetString(
            PyExc_ImportError,
            "Interpreter change detected - this module can only be loaded into one interpreter per process.");
        return -1;
    }
    return 0;
}
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *module, const char* from_name, const char* to_name, int allow_none)
#else
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *moddict, const char* from_name, const char* to_name, int allow_none)
#endif
{
    PyObject *value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (likely(value)) {
        if (allow_none || value != Py_None) {
#if CYTHON_COMPILING_IN_LIMITED_API
            result = PyModule_AddObject(module, to_name, value);
#else
            result = PyDict_SetItemString(moddict, to_name, value);
#endif
        }
        Py_DECREF(value);
    } else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    } else {
        result = -1;
    }
    return result;
}
static CYTHON_SMALL_CODE PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def) {
    PyObject *module = NULL, *moddict, *modname;
    CYTHON_UNUSED_VAR(def);
    if (__Pyx_check_single_interpreter())
        return NULL;
    if (__pyx_m)
        return __Pyx_NewRef(__pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (unlikely(!modname)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(modname);
    if (unlikely(!module)) goto bad;
#if CYTHON_COMPILING_IN_LIMITED_API
    moddict = module;
#else
    moddict = PyModule_GetDict(module);
    if (unlikely(!moddict)) goto bad;
#endif
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "loader", "__loader__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "origin", "__file__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "parent", "__package__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "submodule_search_locations", "__path__", 0) < 0)) goto bad;
    return module;
bad:
    Py_XDECREF(module);
    return NULL;
}


static CYTHON_SMALL_CODE int __pyx_pymod_exec_zorya(PyObject *__pyx_pyinit_module)
#endif
#endif
{
  int stringtab_initialized = 0;
  #if CYTHON_USE_MODULE_STATE
  int pystate_addmodule_run = 0;
  #endif
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  PyObject *__pyx_t_6 = NULL;
  int __pyx_t_7;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'zorya' has already been imported. Re-initialisation is not supported.");
    return -1;
  }
  #elif PY_MAJOR_VERSION >= 3
  if (__pyx_m) return __Pyx_NewRef(__pyx_m);
  #endif
  /*--- Module creation code ---*/
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  __pyx_m = __pyx_pyinit_module;
  Py_INCREF(__pyx_m);
  #else
  #if PY_MAJOR_VERSION < 3
  __pyx_m = Py_InitModule4("zorya", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
  #elif CYTHON_USE_MODULE_STATE
  __pyx_t_1 = PyModule_Create(&__pyx_moduledef); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  {
    int add_module_result = PyState_AddModule(__pyx_t_1, &__pyx_moduledef);
    __pyx_t_1 = 0; /* transfer ownership from __pyx_t_1 to "zorya" pseudovariable */
    if (unlikely((add_module_result < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
    pystate_addmodule_run = 1;
  }
  #else
  __pyx_m = PyModule_Create(&__pyx_moduledef);
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #endif
  CYTHON_UNUSED_VAR(__pyx_t_1);
  __pyx_d = PyModule_GetDict(__pyx_m); if (unlikely(!__pyx_d)) __PYX_ERR(0, 1, __pyx_L1_error)
  Py_INCREF(__pyx_d);
  __pyx_b = __Pyx_PyImport_AddModuleRef(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_cython_runtime = __Pyx_PyImport_AddModuleRef((const char *) "cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 1, __pyx_L1_error)
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #if CYTHON_REFNANNY
__Pyx_RefNanny = __Pyx_RefNannyImportAPI("refnanny");
if (!__Pyx_RefNanny) {
  PyErr_Clear();
  __Pyx_RefNanny = __Pyx_RefNannyImportAPI("Cython.Runtime.refnanny");
  if (!__Pyx_RefNanny)
      Py_FatalError("failed to import 'refnanny' module");
}
#endif
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_zorya(void)", 0);
  if (__Pyx_check_binary_version(__PYX_LIMITED_VERSION_HEX, __Pyx_get_runtime_version(), CYTHON_COMPILING_IN_LIMITED_API) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #ifdef __Pxy_PyFrame_Initialize_Offsets
  __Pxy_PyFrame_Initialize_Offsets();
  #endif
  __pyx_empty_tuple = PyTuple_New(0); if (unlikely(!__pyx_empty_tuple)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_empty_bytes = PyBytes_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_bytes)) __PYX_ERR(0, 1, __pyx_L1_error)
  __pyx_empty_unicode = PyUnicode_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_unicode)) __PYX_ERR(0, 1, __pyx_L1_error)
  #ifdef __Pyx_CyFunction_USED
  if (__pyx_CyFunction_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_FusedFunction_USED
  if (__pyx_FusedFunction_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Coroutine_USED
  if (__pyx_Coroutine_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Generator_USED
  if (__pyx_Generator_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_AsyncGen_USED
  if (__pyx_AsyncGen_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  #ifdef __Pyx_StopAsyncIteration_USED
  if (__pyx_StopAsyncIteration_init(__pyx_m) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  /*--- Library function declarations ---*/
  /*--- Threads initialization code ---*/
  #if defined(WITH_THREAD) && PY_VERSION_HEX < 0x030700F0 && defined(__PYX_FORCE_INIT_THREADS) && __PYX_FORCE_INIT_THREADS
  PyEval_InitThreads();
  #endif
  /*--- Initialize various global constants etc. ---*/
  if (__Pyx_InitConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  stringtab_initialized = 1;
  if (__Pyx_InitGlobals() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #if PY_MAJOR_VERSION < 3 && (__PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT)
  if (__Pyx_init_sys_getdefaultencoding_params() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif
  if (__pyx_module_is_main_zorya) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "zorya")) {
      if (unlikely((PyDict_SetItemString(modules, "zorya", __pyx_m) < 0))) __PYX_ERR(0, 1, __pyx_L1_error)
    }
  }
  #endif
  /*--- Builtin init code ---*/
  if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  /*--- Constants init code ---*/
  if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  /*--- Global type/function init code ---*/
  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  (void)__Pyx_modinit_type_init_code();
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
  /*--- Execution code ---*/
  #if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
  if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  #endif

  /* "zorya.py":1
 * from nltk.tokenize import word_tokenize             # <<<<<<<<<<<<<<
 * from nltk.corpus import stopwords
 * from nltk.stem import PorterStemmer
 */
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_word_tokenize);
  __Pyx_GIVEREF(__pyx_n_s_word_tokenize);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_word_tokenize)) __PYX_ERR(0, 1, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_nltk_tokenize, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_word_tokenize); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_word_tokenize, __pyx_t_2) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":2
 * from nltk.tokenize import word_tokenize
 * from nltk.corpus import stopwords             # <<<<<<<<<<<<<<
 * from nltk.stem import PorterStemmer
 * import nltk
 */
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_stopwords);
  __Pyx_GIVEREF(__pyx_n_s_stopwords);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_stopwords)) __PYX_ERR(0, 2, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_nltk_corpus, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_stopwords); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_stopwords, __pyx_t_3) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":3
 * from nltk.tokenize import word_tokenize
 * from nltk.corpus import stopwords
 * from nltk.stem import PorterStemmer             # <<<<<<<<<<<<<<
 * import nltk
 * import matplotlib.pyplot as plt
 */
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_PorterStemmer);
  __Pyx_GIVEREF(__pyx_n_s_PorterStemmer);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_PorterStemmer)) __PYX_ERR(0, 3, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_nltk_stem, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_PorterStemmer); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_PorterStemmer, __pyx_t_2) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":4
 * from nltk.corpus import stopwords
 * from nltk.stem import PorterStemmer
 * import nltk             # <<<<<<<<<<<<<<
 * import matplotlib.pyplot as plt
 * from wordcloud import WordCloud
 */
  __pyx_t_3 = __Pyx_ImportDottedModule(__pyx_n_s_nltk, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_nltk, __pyx_t_3) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":5
 * from nltk.stem import PorterStemmer
 * import nltk
 * import matplotlib.pyplot as plt             # <<<<<<<<<<<<<<
 * from wordcloud import WordCloud
 * from math import log
 */
  __pyx_t_3 = __Pyx_ImportDottedModule(__pyx_n_s_matplotlib_pyplot, __pyx_tuple__18); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_plt, __pyx_t_3) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":6
 * import nltk
 * import matplotlib.pyplot as plt
 * from wordcloud import WordCloud             # <<<<<<<<<<<<<<
 * from math import log
 * import pandas as pd
 */
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_WordCloud);
  __Pyx_GIVEREF(__pyx_n_s_WordCloud);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_WordCloud)) __PYX_ERR(0, 6, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_wordcloud, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_WordCloud); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_WordCloud, __pyx_t_3) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":7
 * import matplotlib.pyplot as plt
 * from wordcloud import WordCloud
 * from math import log             # <<<<<<<<<<<<<<
 * import pandas as pd
 * import numpy as np
 */
  __pyx_t_2 = PyList_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_INCREF(__pyx_n_s_log);
  __Pyx_GIVEREF(__pyx_n_s_log);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_2, 0, __pyx_n_s_log)) __PYX_ERR(0, 7, __pyx_L1_error);
  __pyx_t_3 = __Pyx_Import(__pyx_n_s_math, __pyx_t_2, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_log); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_log, __pyx_t_2) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":8
 * from wordcloud import WordCloud
 * from math import log
 * import pandas as pd             # <<<<<<<<<<<<<<
 * import numpy as np
 * import argparse
 */
  __pyx_t_3 = __Pyx_ImportDottedModule(__pyx_n_s_pandas, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_pd, __pyx_t_3) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":9
 * from math import log
 * import pandas as pd
 * import numpy as np             # <<<<<<<<<<<<<<
 * import argparse
 * from PyPDF2 import PdfReader
 */
  __pyx_t_3 = __Pyx_ImportDottedModule(__pyx_n_s_numpy, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_np, __pyx_t_3) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":10
 * import pandas as pd
 * import numpy as np
 * import argparse             # <<<<<<<<<<<<<<
 * from PyPDF2 import PdfReader
 * 
 */
  __pyx_t_3 = __Pyx_ImportDottedModule(__pyx_n_s_argparse, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_argparse, __pyx_t_3) < 0) __PYX_ERR(0, 10, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":11
 * import numpy as np
 * import argparse
 * from PyPDF2 import PdfReader             # <<<<<<<<<<<<<<
 * 
 * nltk.download("punkt")
 */
  __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_n_s_PdfReader);
  __Pyx_GIVEREF(__pyx_n_s_PdfReader);
  if (__Pyx_PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_PdfReader)) __PYX_ERR(0, 11, __pyx_L1_error);
  __pyx_t_2 = __Pyx_Import(__pyx_n_s_PyPDF2, __pyx_t_3, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_2, __pyx_n_s_PdfReader); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_PdfReader, __pyx_t_3) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":13
 * from PyPDF2 import PdfReader
 * 
 * nltk.download("punkt")             # <<<<<<<<<<<<<<
 * nltk.download("stopwords")
 * 
 */
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_nltk); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_download); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__19, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":14
 * 
 * nltk.download("punkt")
 * nltk.download("stopwords")             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_nltk); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_download); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__20, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":17
 * 
 * 
 * def main():             # <<<<<<<<<<<<<<
 *     #Set variables for pdf extraction outside the conditional scope to avoid disasters :D
 *     suspicious_lines = []
 */
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_1main, 0, __pyx_n_s_main_2, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__22)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_main_2, __pyx_t_2) < 0) __PYX_ERR(0, 17, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":139
 * 
 * # Extraction function for the pdf file.
 * def extract_text_from_pdf(pdf_file):             # <<<<<<<<<<<<<<
 *     with open(pdf_file, 'rb') as file:
 *         pdf_reader = PdfReader(file)
 */
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_3extract_text_from_pdf, 0, __pyx_n_s_extract_text_from_pdf, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__24)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_extract_text_from_pdf, __pyx_t_2) < 0) __PYX_ERR(0, 139, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":148
 * 
 * 
 * def process_message(             # <<<<<<<<<<<<<<
 *     message, lower_case=True, stem=True, stop_words=True, gram=1
 * ):
 */
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_5process_message, 0, __pyx_n_s_process_message, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__26)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __Pyx_CyFunction_SetDefaultsTuple(__pyx_t_2, __pyx_tuple__27);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_process_message, __pyx_t_2) < 0) __PYX_ERR(0, 148, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":175
 * 
 * 
 * class suspicious_terms_classifier:             # <<<<<<<<<<<<<<
 *     def __init__(self, trainData):
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 */
  __pyx_t_2 = __Pyx_Py3MetaclassPrepare((PyObject *) NULL, __pyx_empty_tuple, __pyx_n_s_suspicious_terms_classifier, __pyx_n_s_suspicious_terms_classifier, (PyObject *) NULL, __pyx_n_s_zorya, (PyObject *) NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 175, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);

  /* "zorya.py":176
 * 
 * class suspicious_terms_classifier:
 *     def __init__(self, trainData):             # <<<<<<<<<<<<<<
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_27suspicious_terms_classifier_1__init__, 0, __pyx_n_s_suspicious_terms_classifier___in, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__29)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_init, __pyx_t_3) < 0) __PYX_ERR(0, 176, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":179
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_27suspicious_terms_classifier_3train, 0, __pyx_n_s_suspicious_terms_classifier_trai, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__31)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_train, __pyx_t_3) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":182
 *         pass
 * 
 *     def classify(self, message):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_27suspicious_terms_classifier_5classify, 0, __pyx_n_s_suspicious_terms_classifier_clas, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__33)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 182, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_classify_2, __pyx_t_3) < 0) __PYX_ERR(0, 182, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":185
 *         pass
 * 
 *     def calc_TF_and_IDF(self):             # <<<<<<<<<<<<<<
 *         number_of_lines = self.terms.shape[0]  # Defines the number of lines.
 *         self.suspicious_terms, self.neutral_terms = (
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_27suspicious_terms_classifier_7calc_TF_and_IDF, 0, __pyx_n_s_suspicious_terms_classifier_calc, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__35)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_calc_TF_and_IDF, __pyx_t_3) < 0) __PYX_ERR(0, 185, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":230
 *                     # Calculates the idf (the number of neutral data items containing this word).
 * 
 *     def predict(self, testData):             # <<<<<<<<<<<<<<
 *         # Invokes the classifier for Test Set messages
 *         result = dict()
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_27suspicious_terms_classifier_9predict, 0, __pyx_n_s_suspicious_terms_classifier_pred, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__37)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 230, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_2, __pyx_n_s_predict, __pyx_t_3) < 0) __PYX_ERR(0, 230, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":175
 * 
 * 
 * class suspicious_terms_classifier:             # <<<<<<<<<<<<<<
 *     def __init__(self, trainData):
 *         self.terms, self.labels = trainData["message"], trainData["label"]
 */
  __pyx_t_3 = __Pyx_Py3ClassCreate(((PyObject*)&PyType_Type), __pyx_n_s_suspicious_terms_classifier, __pyx_empty_tuple, __pyx_t_2, NULL, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 175, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_suspicious_terms_classifier, __pyx_t_3) < 0) __PYX_ERR(0, 175, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":239
 * 
 * 
 * class TFIDFCLassifier(suspicious_terms_classifier):             # <<<<<<<<<<<<<<
 *     def __init__(self, *args, **kwargs):
 *         super().__init__(*args, **kwargs)
 */
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_suspicious_terms_classifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_2);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_2)) __PYX_ERR(0, 239, __pyx_L1_error);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PEP560_update_bases(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = __Pyx_CalculateMetaclass(NULL, __pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __pyx_t_5 = __Pyx_Py3MetaclassPrepare(__pyx_t_4, __pyx_t_2, __pyx_n_s_TFIDFCLassifier, __pyx_n_s_TFIDFCLassifier, (PyObject *) NULL, __pyx_n_s_zorya, (PyObject *) NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (__pyx_t_2 != __pyx_t_3) {
    if (unlikely((PyDict_SetItemString(__pyx_t_5, "__orig_bases__", __pyx_t_3) < 0))) __PYX_ERR(0, 239, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __pyx_t_3 = PyList_New(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);

  /* "zorya.py":240
 * 
 * class TFIDFCLassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_15TFIDFCLassifier_1__init__, 0, __pyx_n_s_TFIDFCLassifier___init, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__39)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 240, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __Pyx_INCREF(__pyx_t_6);
  PyList_Append(__pyx_t_3, __pyx_t_6);
  __Pyx_GIVEREF(__pyx_t_6);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_init, __pyx_t_6) < 0) __PYX_ERR(0, 240, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":243
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_TF_IDF()
 */
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_15TFIDFCLassifier_3train, 0, __pyx_n_s_TFIDFCLassifier_train, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__40)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 243, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_train, __pyx_t_6) < 0) __PYX_ERR(0, 243, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":247
 *         self.calc_TF_IDF()
 * 
 *     def calc_TF_IDF(self):             # <<<<<<<<<<<<<<
 *         # Performs the overall calculation (tf_idf).
 *         self.prob_suspicious = dict()
 */
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_15TFIDFCLassifier_5calc_TF_IDF, 0, __pyx_n_s_TFIDFCLassifier_calc_TF_IDF, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__42)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 247, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_calc_TF_IDF, __pyx_t_6) < 0) __PYX_ERR(0, 247, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":282
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */
  __pyx_t_6 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_15TFIDFCLassifier_7classify, 0, __pyx_n_s_TFIDFCLassifier_classify, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__44)); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 282, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (__Pyx_SetNameInClass(__pyx_t_5, __pyx_n_s_classify_2, __pyx_t_6) < 0) __PYX_ERR(0, 282, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;

  /* "zorya.py":239
 * 
 * 
 * class TFIDFCLassifier(suspicious_terms_classifier):             # <<<<<<<<<<<<<<
 *     def __init__(self, *args, **kwargs):
 *         super().__init__(*args, **kwargs)
 */
  __pyx_t_6 = __Pyx_Py3ClassCreate(__pyx_t_4, __pyx_n_s_TFIDFCLassifier, __pyx_t_2, __pyx_t_5, NULL, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (__Pyx_CyFunction_InitClassCell(__pyx_t_3, __pyx_t_6) < 0) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_TFIDFCLassifier, __pyx_t_6) < 0) __PYX_ERR(0, 239, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":299
 * 
 * 
 * class BowClassifier(suspicious_terms_classifier):             # <<<<<<<<<<<<<<
 *     def __init__(self, *args, **kwargs):
 *         super().__init__(*args, **kwargs)
 */
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_suspicious_terms_classifier); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_4 = PyTuple_New(1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_GIVEREF(__pyx_t_2);
  if (__Pyx_PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2)) __PYX_ERR(0, 299, __pyx_L1_error);
  __pyx_t_2 = 0;
  __pyx_t_2 = __Pyx_PEP560_update_bases(__pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_5 = __Pyx_CalculateMetaclass(NULL, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_6 = __Pyx_Py3MetaclassPrepare(__pyx_t_5, __pyx_t_2, __pyx_n_s_BowClassifier, __pyx_n_s_BowClassifier, (PyObject *) NULL, __pyx_n_s_zorya, (PyObject *) NULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  if (__pyx_t_2 != __pyx_t_4) {
    if (unlikely((PyDict_SetItemString(__pyx_t_6, "__orig_bases__", __pyx_t_4) < 0))) __PYX_ERR(0, 299, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __pyx_t_4 = PyList_New(0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);

  /* "zorya.py":300
 * 
 * class BowClassifier(suspicious_terms_classifier):
 *     def __init__(self, *args, **kwargs):             # <<<<<<<<<<<<<<
 *         super().__init__(*args, **kwargs)
 * 
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_13BowClassifier_1__init__, 0, __pyx_n_s_BowClassifier___init, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__45)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 300, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  __Pyx_INCREF(__pyx_t_3);
  PyList_Append(__pyx_t_4, __pyx_t_3);
  __Pyx_GIVEREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_init, __pyx_t_3) < 0) __PYX_ERR(0, 300, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":303
 *         super().__init__(*args, **kwargs)
 * 
 *     def train(self):             # <<<<<<<<<<<<<<
 *         self.calc_TF_and_IDF()
 *         self.calc_prob()
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_13BowClassifier_3train, 0, __pyx_n_s_BowClassifier_train, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__46)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_train, __pyx_t_3) < 0) __PYX_ERR(0, 303, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":307
 *         self.calc_prob()
 * 
 *     def calc_prob(self):             # <<<<<<<<<<<<<<
 *         self.prob_suspicious = dict()
 *         self.prob_neutral = dict()
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_13BowClassifier_5calc_prob, 0, __pyx_n_s_BowClassifier_calc_prob, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__47)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 307, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_calc_prob, __pyx_t_3) < 0) __PYX_ERR(0, 307, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":325
 *         )
 * 
 *     def classify(self, processed_message):             # <<<<<<<<<<<<<<
 *         # Data classification.
 *         pSpam, pHam = 0, 0
 */
  __pyx_t_3 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_13BowClassifier_7classify, 0, __pyx_n_s_BowClassifier_classify, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__48)); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 325, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_SetNameInClass(__pyx_t_6, __pyx_n_s_classify_2, __pyx_t_3) < 0) __PYX_ERR(0, 325, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;

  /* "zorya.py":299
 * 
 * 
 * class BowClassifier(suspicious_terms_classifier):             # <<<<<<<<<<<<<<
 *     def __init__(self, *args, **kwargs):
 *         super().__init__(*args, **kwargs)
 */
  __pyx_t_3 = __Pyx_Py3ClassCreate(__pyx_t_5, __pyx_n_s_BowClassifier, __pyx_t_2, __pyx_t_6, NULL, 0, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_3);
  if (__Pyx_CyFunction_InitClassCell(__pyx_t_4, __pyx_t_3) < 0) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_BowClassifier, __pyx_t_3) < 0) __PYX_ERR(0, 299, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":342
 * 
 * 
 * def metrics(labels, predictions):  # Calculates metrics:             # <<<<<<<<<<<<<<
 *     # True Positive, True Negative, False Positive, False Negative.
 *     true_pos, true_neg, false_pos, false_neg = 0, 0, 0, 0
 */
  __pyx_t_2 = __Pyx_CyFunction_New(&__pyx_mdef_5zorya_7metrics, 0, __pyx_n_s_metrics, NULL, __pyx_n_s_zorya, __pyx_d, ((PyObject *)__pyx_codeobj__50)); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_metrics, __pyx_t_2) < 0) __PYX_ERR(0, 342, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "zorya.py":363
 * 
 * 
 * if __name__ == "__main__":             # <<<<<<<<<<<<<<
 *     main()
 */
  __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_name); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 363, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  __pyx_t_7 = (__Pyx_PyUnicode_Equals(__pyx_t_2, __pyx_n_u_main, Py_EQ)); if (unlikely((__pyx_t_7 < 0))) __PYX_ERR(0, 363, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
  if (__pyx_t_7) {

    /* "zorya.py":364
 * 
 * if __name__ == "__main__":
 *     main()             # <<<<<<<<<<<<<<
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_main_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 364, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_CallNoArg(__pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 364, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "zorya.py":363
 * 
 * 
 * if __name__ == "__main__":             # <<<<<<<<<<<<<<
 *     main()
 */
  }

  /* "zorya.py":1
 * from nltk.tokenize import word_tokenize             # <<<<<<<<<<<<<<
 * from nltk.corpus import stopwords
 * from nltk.stem import PorterStemmer
 */
  __pyx_t_5 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test_3, __pyx_t_5) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /*--- Wrapped vars code ---*/

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  if (__pyx_m) {
    if (__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init zorya", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    #if !CYTHON_USE_MODULE_STATE
    Py_CLEAR(__pyx_m);
    #else
    Py_DECREF(__pyx_m);
    if (pystate_addmodule_run) {
      PyObject *tp, *value, *tb;
      PyErr_Fetch(&tp, &value, &tb);
      PyState_RemoveModule(&__pyx_moduledef);
      PyErr_Restore(tp, value, tb);
    }
    #endif
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init zorya");
  }
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  return (__pyx_m != NULL) ? 0 : -1;
  #elif PY_MAJOR_VERSION >= 3
  return __pyx_m;
  #else
  return;
  #endif
}
/* #### Code section: cleanup_globals ### */
/* #### Code section: cleanup_module ### */
/* #### Code section: main_method ### */
/* #### Code section: utility_code_pragmas ### */
#ifdef _MSC_VER
#pragma warning( push )
/* Warning 4127: conditional expression is constant
 * Cython uses constant conditional expressions to allow in inline functions to be optimized at
 * compile-time, so this warning is not useful
 */
#pragma warning( disable : 4127 )
#endif



/* #### Code section: utility_code_def ### */

/* --- Runtime support code --- */
/* Refnanny */
#if CYTHON_REFNANNY
static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname) {
    PyObject *m = NULL, *p = NULL;
    void *r = NULL;
    m = PyImport_ImportModule(modname);
    if (!m) goto end;
    p = PyObject_GetAttrString(m, "RefNannyAPI");
    if (!p) goto end;
    r = PyLong_AsVoidPtr(p);
end:
    Py_XDECREF(p);
    Py_XDECREF(m);
    return (__Pyx_RefNannyAPIStruct *)r;
}
#endif

/* PyErrExceptionMatches */
#if CYTHON_FAST_THREAD_STATE
static int __Pyx_PyErr_ExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        if (__Pyx_PyErr_GivenExceptionMatches(exc_type, PyTuple_GET_ITEM(tuple, i))) return 1;
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err) {
    int result;
    PyObject *exc_type;
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject *current_exception = tstate->current_exception;
    if (unlikely(!current_exception)) return 0;
    exc_type = (PyObject*) Py_TYPE(current_exception);
    if (exc_type == err) return 1;
#else
    exc_type = tstate->curexc_type;
    if (exc_type == err) return 1;
    if (unlikely(!exc_type)) return 0;
#endif
    #if CYTHON_AVOID_BORROWED_REFS
    Py_INCREF(exc_type);
    #endif
    if (unlikely(PyTuple_Check(err))) {
        result = __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    } else {
        result = __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
    }
    #if CYTHON_AVOID_BORROWED_REFS
    Py_DECREF(exc_type);
    #endif
    return result;
}
#endif

/* PyErrFetchRestore */
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject *tmp_value;
    assert(type == NULL || (value != NULL && type == (PyObject*) Py_TYPE(value)));
    if (value) {
        #if CYTHON_COMPILING_IN_CPYTHON
        if (unlikely(((PyBaseExceptionObject*) value)->traceback != tb))
        #endif
            PyException_SetTraceback(value, tb);
    }
    tmp_value = tstate->current_exception;
    tstate->current_exception = value;
    Py_XDECREF(tmp_value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
#else
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    tmp_type = tstate->curexc_type;
    tmp_value = tstate->curexc_value;
    tmp_tb = tstate->curexc_traceback;
    tstate->curexc_type = type;
    tstate->curexc_value = value;
    tstate->curexc_traceback = tb;
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#endif
}
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject* exc_value;
    exc_value = tstate->current_exception;
    tstate->current_exception = 0;
    *value = exc_value;
    *type = NULL;
    *tb = NULL;
    if (exc_value) {
        *type = (PyObject*) Py_TYPE(exc_value);
        Py_INCREF(*type);
        #if CYTHON_COMPILING_IN_CPYTHON
        *tb = ((PyBaseExceptionObject*) exc_value)->traceback;
        Py_XINCREF(*tb);
        #else
        *tb = PyException_GetTraceback(exc_value);
        #endif
    }
#else
    *type = tstate->curexc_type;
    *value = tstate->curexc_value;
    *tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
#endif
}
#endif

/* PyObjectGetAttrStr */
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro))
        return tp->tp_getattro(obj, attr_name);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_getattr))
        return tp->tp_getattr(obj, PyString_AS_STRING(attr_name));
#endif
    return PyObject_GetAttr(obj, attr_name);
}
#endif

/* PyObjectGetAttrStrNoError */
#if __PYX_LIMITED_VERSION_HEX < 0x030d00A1
static void __Pyx_PyObject_GetAttrStr_ClearAttributeError(void) {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    if (likely(__Pyx_PyErr_ExceptionMatches(PyExc_AttributeError)))
        __Pyx_PyErr_Clear();
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name) {
    PyObject *result;
#if __PYX_LIMITED_VERSION_HEX >= 0x030d00A1
    (void) PyObject_GetOptionalAttr(obj, attr_name, &result);
    return result;
#else
#if CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_TYPE_SLOTS && PY_VERSION_HEX >= 0x030700B1
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro == PyObject_GenericGetAttr)) {
        return _PyObject_GenericGetAttrWithDict(obj, attr_name, NULL, 1);
    }
#endif
    result = __Pyx_PyObject_GetAttrStr(obj, attr_name);
    if (unlikely(!result)) {
        __Pyx_PyObject_GetAttrStr_ClearAttributeError();
    }
    return result;
#endif
}

/* GetBuiltinName */
static PyObject *__Pyx_GetBuiltinName(PyObject *name) {
    PyObject* result = __Pyx_PyObject_GetAttrStrNoError(__pyx_b, name);
    if (unlikely(!result) && !PyErr_Occurred()) {
        PyErr_Format(PyExc_NameError,
#if PY_MAJOR_VERSION >= 3
            "name '%U' is not defined", name);
#else
            "name '%.200s' is not defined", PyString_AS_STRING(name));
#endif
    }
    return result;
}

/* TupleAndListFromArray */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE void __Pyx_copy_object_array(PyObject *const *CYTHON_RESTRICT src, PyObject** CYTHON_RESTRICT dest, Py_ssize_t length) {
    PyObject *v;
    Py_ssize_t i;
    for (i = 0; i < length; i++) {
        v = dest[i] = src[i];
        Py_INCREF(v);
    }
}
static CYTHON_INLINE PyObject *
__Pyx_PyTuple_FromArray(PyObject *const *src, Py_ssize_t n)
{
    PyObject *res;
    if (n <= 0) {
        Py_INCREF(__pyx_empty_tuple);
        return __pyx_empty_tuple;
    }
    res = PyTuple_New(n);
    if (unlikely(res == NULL)) return NULL;
    __Pyx_copy_object_array(src, ((PyTupleObject*)res)->ob_item, n);
    return res;
}
static CYTHON_INLINE PyObject *
__Pyx_PyList_FromArray(PyObject *const *src, Py_ssize_t n)
{
    PyObject *res;
    if (n <= 0) {
        return PyList_New(0);
    }
    res = PyList_New(n);
    if (unlikely(res == NULL)) return NULL;
    __Pyx_copy_object_array(src, ((PyListObject*)res)->ob_item, n);
    return res;
}
#endif

/* BytesEquals */
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API
    return PyObject_RichCompareBool(s1, s2, equals);
#else
    if (s1 == s2) {
        return (equals == Py_EQ);
    } else if (PyBytes_CheckExact(s1) & PyBytes_CheckExact(s2)) {
        const char *ps1, *ps2;
        Py_ssize_t length = PyBytes_GET_SIZE(s1);
        if (length != PyBytes_GET_SIZE(s2))
            return (equals == Py_NE);
        ps1 = PyBytes_AS_STRING(s1);
        ps2 = PyBytes_AS_STRING(s2);
        if (ps1[0] != ps2[0]) {
            return (equals == Py_NE);
        } else if (length == 1) {
            return (equals == Py_EQ);
        } else {
            int result;
#if CYTHON_USE_UNICODE_INTERNALS && (PY_VERSION_HEX < 0x030B0000)
            Py_hash_t hash1, hash2;
            hash1 = ((PyBytesObject*)s1)->ob_shash;
            hash2 = ((PyBytesObject*)s2)->ob_shash;
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                return (equals == Py_NE);
            }
#endif
            result = memcmp(ps1, ps2, (size_t)length);
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == Py_None) & PyBytes_CheckExact(s2)) {
        return (equals == Py_NE);
    } else if ((s2 == Py_None) & PyBytes_CheckExact(s1)) {
        return (equals == Py_NE);
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
#endif
}

/* UnicodeEquals */
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API
    return PyObject_RichCompareBool(s1, s2, equals);
#else
#if PY_MAJOR_VERSION < 3
    PyObject* owned_ref = NULL;
#endif
    int s1_is_unicode, s2_is_unicode;
    if (s1 == s2) {
        goto return_eq;
    }
    s1_is_unicode = PyUnicode_CheckExact(s1);
    s2_is_unicode = PyUnicode_CheckExact(s2);
#if PY_MAJOR_VERSION < 3
    if ((s1_is_unicode & (!s2_is_unicode)) && PyString_CheckExact(s2)) {
        owned_ref = PyUnicode_FromObject(s2);
        if (unlikely(!owned_ref))
            return -1;
        s2 = owned_ref;
        s2_is_unicode = 1;
    } else if ((s2_is_unicode & (!s1_is_unicode)) && PyString_CheckExact(s1)) {
        owned_ref = PyUnicode_FromObject(s1);
        if (unlikely(!owned_ref))
            return -1;
        s1 = owned_ref;
        s1_is_unicode = 1;
    } else if (((!s2_is_unicode) & (!s1_is_unicode))) {
        return __Pyx_PyBytes_Equals(s1, s2, equals);
    }
#endif
    if (s1_is_unicode & s2_is_unicode) {
        Py_ssize_t length;
        int kind;
        void *data1, *data2;
        if (unlikely(__Pyx_PyUnicode_READY(s1) < 0) || unlikely(__Pyx_PyUnicode_READY(s2) < 0))
            return -1;
        length = __Pyx_PyUnicode_GET_LENGTH(s1);
        if (length != __Pyx_PyUnicode_GET_LENGTH(s2)) {
            goto return_ne;
        }
#if CYTHON_USE_UNICODE_INTERNALS
        {
            Py_hash_t hash1, hash2;
        #if CYTHON_PEP393_ENABLED
            hash1 = ((PyASCIIObject*)s1)->hash;
            hash2 = ((PyASCIIObject*)s2)->hash;
        #else
            hash1 = ((PyUnicodeObject*)s1)->hash;
            hash2 = ((PyUnicodeObject*)s2)->hash;
        #endif
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                goto return_ne;
            }
        }
#endif
        kind = __Pyx_PyUnicode_KIND(s1);
        if (kind != __Pyx_PyUnicode_KIND(s2)) {
            goto return_ne;
        }
        data1 = __Pyx_PyUnicode_DATA(s1);
        data2 = __Pyx_PyUnicode_DATA(s2);
        if (__Pyx_PyUnicode_READ(kind, data1, 0) != __Pyx_PyUnicode_READ(kind, data2, 0)) {
            goto return_ne;
        } else if (length == 1) {
            goto return_eq;
        } else {
            int result = memcmp(data1, data2, (size_t)(length * kind));
            #if PY_MAJOR_VERSION < 3
            Py_XDECREF(owned_ref);
            #endif
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    } else if ((s1 == Py_None) & s2_is_unicode) {
        goto return_ne;
    } else if ((s2 == Py_None) & s1_is_unicode) {
        goto return_ne;
    } else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        #if PY_MAJOR_VERSION < 3
        Py_XDECREF(owned_ref);
        #endif
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
return_eq:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
    #endif
    return (equals == Py_EQ);
return_ne:
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
    #endif
    return (equals == Py_NE);
#endif
}

/* fastcall */
#if CYTHON_METH_FASTCALL
static CYTHON_INLINE PyObject * __Pyx_GetKwValue_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues, PyObject *s)
{
    Py_ssize_t i, n = PyTuple_GET_SIZE(kwnames);
    for (i = 0; i < n; i++)
    {
        if (s == PyTuple_GET_ITEM(kwnames, i)) return kwvalues[i];
    }
    for (i = 0; i < n; i++)
    {
        int eq = __Pyx_PyUnicode_Equals(s, PyTuple_GET_ITEM(kwnames, i), Py_EQ);
        if (unlikely(eq != 0)) {
            if (unlikely(eq < 0)) return NULL;
            return kwvalues[i];
        }
    }
    return NULL;
}
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
CYTHON_UNUSED static PyObject *__Pyx_KwargsAsDict_FASTCALL(PyObject *kwnames, PyObject *const *kwvalues) {
    Py_ssize_t i, nkwargs = PyTuple_GET_SIZE(kwnames);
    PyObject *dict;
    dict = PyDict_New();
    if (unlikely(!dict))
        return NULL;
    for (i=0; i<nkwargs; i++) {
        PyObject *key = PyTuple_GET_ITEM(kwnames, i);
        if (unlikely(PyDict_SetItem(dict, key, kwvalues[i]) < 0))
            goto bad;
    }
    return dict;
bad:
    Py_DECREF(dict);
    return NULL;
}
#endif
#endif

/* PyDictVersioning */
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    return likely(dict) ? __PYX_GET_DICT_VERSION(dict) : 0;
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj) {
    PyObject **dictptr = NULL;
    Py_ssize_t offset = Py_TYPE(obj)->tp_dictoffset;
    if (offset) {
#if CYTHON_COMPILING_IN_CPYTHON
        dictptr = (likely(offset > 0)) ? (PyObject **) ((char *)obj + offset) : _PyObject_GetDictPtr(obj);
#else
        dictptr = _PyObject_GetDictPtr(obj);
#endif
    }
    return (dictptr && *dictptr) ? __PYX_GET_DICT_VERSION(*dictptr) : 0;
}
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    if (unlikely(!dict) || unlikely(tp_dict_version != __PYX_GET_DICT_VERSION(dict)))
        return 0;
    return obj_dict_version == __Pyx_get_object_dict_version(obj);
}
#endif

/* GetModuleGlobalName */
#if CYTHON_USE_DICT_VERSIONS
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value)
#else
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name)
#endif
{
    PyObject *result;
#if !CYTHON_AVOID_BORROWED_REFS
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && PY_VERSION_HEX < 0x030d0000
    result = _PyDict_GetItem_KnownHash(__pyx_d, name, ((PyASCIIObject *) name)->hash);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    } else if (unlikely(PyErr_Occurred())) {
        return NULL;
    }
#elif CYTHON_COMPILING_IN_LIMITED_API
    if (unlikely(!__pyx_m)) {
        return NULL;
    }
    result = PyObject_GetAttr(__pyx_m, name);
    if (likely(result)) {
        return result;
    }
#else
    result = PyDict_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
#endif
#else
    result = PyObject_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
    PyErr_Clear();
#endif
    return __Pyx_GetBuiltinName(name);
}

/* PyObjectCall */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *result;
    ternaryfunc call = Py_TYPE(func)->tp_call;
    if (unlikely(!call))
        return PyObject_Call(func, arg, kw);
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object")))
        return NULL;
    #endif
    result = (*call)(func, arg, kw);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif

/* PyFunctionFastCall */
#if CYTHON_FAST_PYCALL && !CYTHON_VECTORCALL
static PyObject* __Pyx_PyFunction_FastCallNoKw(PyCodeObject *co, PyObject **args, Py_ssize_t na,
                                               PyObject *globals) {
    PyFrameObject *f;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject **fastlocals;
    Py_ssize_t i;
    PyObject *result;
    assert(globals != NULL);
    /* XXX Perhaps we should create a specialized
       PyFrame_New() that doesn't take locals, but does
       take builtins without sanity checking them.
       */
    assert(tstate != NULL);
    f = PyFrame_New(tstate, co, globals, NULL);
    if (f == NULL) {
        return NULL;
    }
    fastlocals = __Pyx_PyFrame_GetLocalsplus(f);
    for (i = 0; i < na; i++) {
        Py_INCREF(*args);
        fastlocals[i] = *args++;
    }
    result = PyEval_EvalFrameEx(f,0);
    ++tstate->recursion_depth;
    Py_DECREF(f);
    --tstate->recursion_depth;
    return result;
}
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs) {
    PyCodeObject *co = (PyCodeObject *)PyFunction_GET_CODE(func);
    PyObject *globals = PyFunction_GET_GLOBALS(func);
    PyObject *argdefs = PyFunction_GET_DEFAULTS(func);
    PyObject *closure;
#if PY_MAJOR_VERSION >= 3
    PyObject *kwdefs;
#endif
    PyObject *kwtuple, **k;
    PyObject **d;
    Py_ssize_t nd;
    Py_ssize_t nk;
    PyObject *result;
    assert(kwargs == NULL || PyDict_Check(kwargs));
    nk = kwargs ? PyDict_Size(kwargs) : 0;
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object"))) {
        return NULL;
    }
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object"))) {
        return NULL;
    }
    #endif
    if (
#if PY_MAJOR_VERSION >= 3
            co->co_kwonlyargcount == 0 &&
#endif
            likely(kwargs == NULL || nk == 0) &&
            co->co_flags == (CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE)) {
        if (argdefs == NULL && co->co_argcount == nargs) {
            result = __Pyx_PyFunction_FastCallNoKw(co, args, nargs, globals);
            goto done;
        }
        else if (nargs == 0 && argdefs != NULL
                 && co->co_argcount == Py_SIZE(argdefs)) {
            /* function called with no arguments, but all parameters have
               a default value: use default values as arguments .*/
            args = &PyTuple_GET_ITEM(argdefs, 0);
            result =__Pyx_PyFunction_FastCallNoKw(co, args, Py_SIZE(argdefs), globals);
            goto done;
        }
    }
    if (kwargs != NULL) {
        Py_ssize_t pos, i;
        kwtuple = PyTuple_New(2 * nk);
        if (kwtuple == NULL) {
            result = NULL;
            goto done;
        }
        k = &PyTuple_GET_ITEM(kwtuple, 0);
        pos = i = 0;
        while (PyDict_Next(kwargs, &pos, &k[i], &k[i+1])) {
            Py_INCREF(k[i]);
            Py_INCREF(k[i+1]);
            i += 2;
        }
        nk = i / 2;
    }
    else {
        kwtuple = NULL;
        k = NULL;
    }
    closure = PyFunction_GET_CLOSURE(func);
#if PY_MAJOR_VERSION >= 3
    kwdefs = PyFunction_GET_KW_DEFAULTS(func);
#endif
    if (argdefs != NULL) {
        d = &PyTuple_GET_ITEM(argdefs, 0);
        nd = Py_SIZE(argdefs);
    }
    else {
        d = NULL;
        nd = 0;
    }
#if PY_MAJOR_VERSION >= 3
    result = PyEval_EvalCodeEx((PyObject*)co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, kwdefs, closure);
#else
    result = PyEval_EvalCodeEx(co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, closure);
#endif
    Py_XDECREF(kwtuple);
done:
    Py_LeaveRecursiveCall();
    return result;
}
#endif

/* PyObjectCallMethO */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg) {
    PyObject *self, *result;
    PyCFunction cfunc;
    cfunc = __Pyx_CyOrPyCFunction_GET_FUNCTION(func);
    self = __Pyx_CyOrPyCFunction_GET_SELF(func);
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object")))
        return NULL;
    #endif
    result = cfunc(self, arg);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif

/* PyObjectFastCall */
#if PY_VERSION_HEX < 0x03090000 || CYTHON_COMPILING_IN_LIMITED_API
static PyObject* __Pyx_PyObject_FastCall_fallback(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs) {
    PyObject *argstuple;
    PyObject *result = 0;
    size_t i;
    argstuple = PyTuple_New((Py_ssize_t)nargs);
    if (unlikely(!argstuple)) return NULL;
    for (i = 0; i < nargs; i++) {
        Py_INCREF(args[i]);
        if (__Pyx_PyTuple_SET_ITEM(argstuple, (Py_ssize_t)i, args[i]) < 0) goto bad;
    }
    result = __Pyx_PyObject_Call(func, argstuple, kwargs);
  bad:
    Py_DECREF(argstuple);
    return result;
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t _nargs, PyObject *kwargs) {
    Py_ssize_t nargs = __Pyx_PyVectorcall_NARGS(_nargs);
#if CYTHON_COMPILING_IN_CPYTHON
    if (nargs == 0 && kwargs == NULL) {
        if (__Pyx_CyOrPyCFunction_Check(func) && likely( __Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_NOARGS))
            return __Pyx_PyObject_CallMethO(func, NULL);
    }
    else if (nargs == 1 && kwargs == NULL) {
        if (__Pyx_CyOrPyCFunction_Check(func) && likely( __Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_O))
            return __Pyx_PyObject_CallMethO(func, args[0]);
    }
#endif
    #if PY_VERSION_HEX < 0x030800B1
    #if CYTHON_FAST_PYCCALL
    if (PyCFunction_Check(func)) {
        if (kwargs) {
            return _PyCFunction_FastCallDict(func, args, nargs, kwargs);
        } else {
            return _PyCFunction_FastCallKeywords(func, args, nargs, NULL);
        }
    }
    #if PY_VERSION_HEX >= 0x030700A1
    if (!kwargs && __Pyx_IS_TYPE(func, &PyMethodDescr_Type)) {
        return _PyMethodDescr_FastCallKeywords(func, args, nargs, NULL);
    }
    #endif
    #endif
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCallDict(func, args, nargs, kwargs);
    }
    #endif
    #endif
    if (kwargs == NULL) {
        #if CYTHON_VECTORCALL
        #if PY_VERSION_HEX < 0x03090000
        vectorcallfunc f = _PyVectorcall_Function(func);
        #else
        vectorcallfunc f = PyVectorcall_Function(func);
        #endif
        if (f) {
            return f(func, args, (size_t)nargs, NULL);
        }
        #elif defined(__Pyx_CyFunction_USED) && CYTHON_BACKPORT_VECTORCALL
        if (__Pyx_CyFunction_CheckExact(func)) {
            __pyx_vectorcallfunc f = __Pyx_CyFunction_func_vectorcall(func);
            if (f) return f(func, args, (size_t)nargs, NULL);
        }
        #endif
    }
    if (nargs == 0) {
        return __Pyx_PyObject_Call(func, __pyx_empty_tuple, kwargs);
    }
    #if PY_VERSION_HEX >= 0x03090000 && !CYTHON_COMPILING_IN_LIMITED_API
    return PyObject_VectorcallDict(func, args, (size_t)nargs, kwargs);
    #else
    return __Pyx_PyObject_FastCall_fallback(func, args, (size_t)nargs, kwargs);
    #endif
}

/* DictGetItem */
#if PY_MAJOR_VERSION >= 3 && !CYTHON_COMPILING_IN_PYPY
static PyObject *__Pyx_PyDict_GetItem(PyObject *d, PyObject* key) {
    PyObject *value;
    value = PyDict_GetItemWithError(d, key);
    if (unlikely(!value)) {
        if (!PyErr_Occurred()) {
            if (unlikely(PyTuple_Check(key))) {
                PyObject* args = PyTuple_Pack(1, key);
                if (likely(args)) {
                    PyErr_SetObject(PyExc_KeyError, args);
                    Py_DECREF(args);
                }
            } else {
                PyErr_SetObject(PyExc_KeyError, key);
            }
        }
        return NULL;
    }
    Py_INCREF(value);
    return value;
}
#endif

/* PyObjectCallOneArg */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *args[2] = {NULL, arg};
    return __Pyx_PyObject_FastCall(func, args+1, 1 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

/* GetItemInt */
static PyObject *__Pyx_GetItemInt_Generic(PyObject *o, PyObject* j) {
    PyObject *r;
    if (unlikely(!j)) return NULL;
    r = PyObject_GetItem(o, j);
    Py_DECREF(j);
    return r;
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_List_Fast(PyObject *o, Py_ssize_t i,
                                                              CYTHON_NCP_UNUSED int wraparound,
                                                              CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyList_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyList_GET_SIZE(o)))) {
        PyObject *r = PyList_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Tuple_Fast(PyObject *o, Py_ssize_t i,
                                                              CYTHON_NCP_UNUSED int wraparound,
                                                              CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyTuple_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyTuple_GET_SIZE(o)))) {
        PyObject *r = PyTuple_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject *__Pyx_GetItemInt_Fast(PyObject *o, Py_ssize_t i, int is_list,
                                                     CYTHON_NCP_UNUSED int wraparound,
                                                     CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS && CYTHON_USE_TYPE_SLOTS
    if (is_list || PyList_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyList_GET_SIZE(o);
        if ((!boundscheck) || (likely(__Pyx_is_valid_index(n, PyList_GET_SIZE(o))))) {
            PyObject *r = PyList_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    }
    else if (PyTuple_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyTuple_GET_SIZE(o);
        if ((!boundscheck) || likely(__Pyx_is_valid_index(n, PyTuple_GET_SIZE(o)))) {
            PyObject *r = PyTuple_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    } else {
        PyMappingMethods *mm = Py_TYPE(o)->tp_as_mapping;
        PySequenceMethods *sm = Py_TYPE(o)->tp_as_sequence;
        if (mm && mm->mp_subscript) {
            PyObject *r, *key = PyInt_FromSsize_t(i);
            if (unlikely(!key)) return NULL;
            r = mm->mp_subscript(o, key);
            Py_DECREF(key);
            return r;
        }
        if (likely(sm && sm->sq_item)) {
            if (wraparound && unlikely(i < 0) && likely(sm->sq_length)) {
                Py_ssize_t l = sm->sq_length(o);
                if (likely(l >= 0)) {
                    i += l;
                } else {
                    if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                        return NULL;
                    PyErr_Clear();
                }
            }
            return sm->sq_item(o, i);
        }
    }
#else
    if (is_list || !PyMapping_Check(o)) {
        return PySequence_GetItem(o, i);
    }
#endif
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}

/* ObjectGetItem */
#if CYTHON_USE_TYPE_SLOTS
static PyObject *__Pyx_PyObject_GetIndex(PyObject *obj, PyObject *index) {
    PyObject *runerr = NULL;
    Py_ssize_t key_value;
    key_value = __Pyx_PyIndex_AsSsize_t(index);
    if (likely(key_value != -1 || !(runerr = PyErr_Occurred()))) {
        return __Pyx_GetItemInt_Fast(obj, key_value, 0, 1, 1);
    }
    if (PyErr_GivenExceptionMatches(runerr, PyExc_OverflowError)) {
        __Pyx_TypeName index_type_name = __Pyx_PyType_GetName(Py_TYPE(index));
        PyErr_Clear();
        PyErr_Format(PyExc_IndexError,
            "cannot fit '" __Pyx_FMT_TYPENAME "' into an index-sized integer", index_type_name);
        __Pyx_DECREF_TypeName(index_type_name);
    }
    return NULL;
}
static PyObject *__Pyx_PyObject_GetItem_Slow(PyObject *obj, PyObject *key) {
    __Pyx_TypeName obj_type_name;
    if (likely(PyType_Check(obj))) {
        PyObject *meth = __Pyx_PyObject_GetAttrStrNoError(obj, __pyx_n_s_class_getitem);
        if (!meth) {
            PyErr_Clear();
        } else {
            PyObject *result = __Pyx_PyObject_CallOneArg(meth, key);
            Py_DECREF(meth);
            return result;
        }
    }
    obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError,
        "'" __Pyx_FMT_TYPENAME "' object is not subscriptable", obj_type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
    return NULL;
}
static PyObject *__Pyx_PyObject_GetItem(PyObject *obj, PyObject *key) {
    PyTypeObject *tp = Py_TYPE(obj);
    PyMappingMethods *mm = tp->tp_as_mapping;
    PySequenceMethods *sm = tp->tp_as_sequence;
    if (likely(mm && mm->mp_subscript)) {
        return mm->mp_subscript(obj, key);
    }
    if (likely(sm && sm->sq_item)) {
        return __Pyx_PyObject_GetIndex(obj, key);
    }
    return __Pyx_PyObject_GetItem_Slow(obj, key);
}
#endif

/* PyObjectCallNoArg */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
    PyObject *arg[2] = {NULL, NULL};
    return __Pyx_PyObject_FastCall(func, arg + 1, 0 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

/* RaiseDoubleKeywords */
static void __Pyx_RaiseDoubleKeywordsError(
    const char* func_name,
    PyObject* kw_name)
{
    PyErr_Format(PyExc_TypeError,
        #if PY_MAJOR_VERSION >= 3
        "%s() got multiple values for keyword argument '%U'", func_name, kw_name);
        #else
        "%s() got multiple values for keyword argument '%s'", func_name,
        PyString_AsString(kw_name));
        #endif
}

/* ParseKeywords */
static int __Pyx_ParseOptionalKeywords(
    PyObject *kwds,
    PyObject *const *kwvalues,
    PyObject **argnames[],
    PyObject *kwds2,
    PyObject *values[],
    Py_ssize_t num_pos_args,
    const char* function_name)
{
    PyObject *key = 0, *value = 0;
    Py_ssize_t pos = 0;
    PyObject*** name;
    PyObject*** first_kw_arg = argnames + num_pos_args;
    int kwds_is_tuple = CYTHON_METH_FASTCALL && likely(PyTuple_Check(kwds));
    while (1) {
        Py_XDECREF(key); key = NULL;
        Py_XDECREF(value); value = NULL;
        if (kwds_is_tuple) {
            Py_ssize_t size;
#if CYTHON_ASSUME_SAFE_MACROS
            size = PyTuple_GET_SIZE(kwds);
#else
            size = PyTuple_Size(kwds);
            if (size < 0) goto bad;
#endif
            if (pos >= size) break;
#if CYTHON_AVOID_BORROWED_REFS
            key = __Pyx_PySequence_ITEM(kwds, pos);
            if (!key) goto bad;
#elif CYTHON_ASSUME_SAFE_MACROS
            key = PyTuple_GET_ITEM(kwds, pos);
#else
            key = PyTuple_GetItem(kwds, pos);
            if (!key) goto bad;
#endif
            value = kwvalues[pos];
            pos++;
        }
        else
        {
            if (!PyDict_Next(kwds, &pos, &key, &value)) break;
#if CYTHON_AVOID_BORROWED_REFS
            Py_INCREF(key);
#endif
        }
        name = first_kw_arg;
        while (*name && (**name != key)) name++;
        if (*name) {
            values[name-argnames] = value;
#if CYTHON_AVOID_BORROWED_REFS
            Py_INCREF(value);
            Py_DECREF(key);
#endif
            key = NULL;
            value = NULL;
            continue;
        }
#if !CYTHON_AVOID_BORROWED_REFS
        Py_INCREF(key);
#endif
        Py_INCREF(value);
        name = first_kw_arg;
        #if PY_MAJOR_VERSION < 3
        if (likely(PyString_Check(key))) {
            while (*name) {
                if ((CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**name) == PyString_GET_SIZE(key))
                        && _PyString_Eq(**name, key)) {
                    values[name-argnames] = value;
#if CYTHON_AVOID_BORROWED_REFS
                    value = NULL;
#endif
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    if ((**argname == key) || (
                            (CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**argname) == PyString_GET_SIZE(key))
                             && _PyString_Eq(**argname, key))) {
                        goto arg_passed_twice;
                    }
                    argname++;
                }
            }
        } else
        #endif
        if (likely(PyUnicode_Check(key))) {
            while (*name) {
                int cmp = (
                #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                    (__Pyx_PyUnicode_GET_LENGTH(**name) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                #endif
                    PyUnicode_Compare(**name, key)
                );
                if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                if (cmp == 0) {
                    values[name-argnames] = value;
#if CYTHON_AVOID_BORROWED_REFS
                    value = NULL;
#endif
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    int cmp = (**argname == key) ? 0 :
                    #if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                        (__Pyx_PyUnicode_GET_LENGTH(**argname) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
                    #endif
                        PyUnicode_Compare(**argname, key);
                    if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                    if (cmp == 0) goto arg_passed_twice;
                    argname++;
                }
            }
        } else
            goto invalid_keyword_type;
        if (kwds2) {
            if (unlikely(PyDict_SetItem(kwds2, key, value))) goto bad;
        } else {
            goto invalid_keyword;
        }
    }
    Py_XDECREF(key);
    Py_XDECREF(value);
    return 0;
arg_passed_twice:
    __Pyx_RaiseDoubleKeywordsError(function_name, key);
    goto bad;
invalid_keyword_type:
    PyErr_Format(PyExc_TypeError,
        "%.200s() keywords must be strings", function_name);
    goto bad;
invalid_keyword:
    #if PY_MAJOR_VERSION < 3
    PyErr_Format(PyExc_TypeError,
        "%.200s() got an unexpected keyword argument '%.200s'",
        function_name, PyString_AsString(key));
    #else
    PyErr_Format(PyExc_TypeError,
        "%s() got an unexpected keyword argument '%U'",
        function_name, key);
    #endif
bad:
    Py_XDECREF(key);
    Py_XDECREF(value);
    return -1;
}

/* RaiseArgTupleInvalid */
static void __Pyx_RaiseArgtupleInvalid(
    const char* func_name,
    int exact,
    Py_ssize_t num_min,
    Py_ssize_t num_max,
    Py_ssize_t num_found)
{
    Py_ssize_t num_expected;
    const char *more_or_less;
    if (num_found < num_min) {
        num_expected = num_min;
        more_or_less = "at least";
    } else {
        num_expected = num_max;
        more_or_less = "at most";
    }
    if (exact) {
        more_or_less = "exactly";
    }
    PyErr_Format(PyExc_TypeError,
                 "%.200s() takes %.8s %" CYTHON_FORMAT_SSIZE_T "d positional argument%.1s (%" CYTHON_FORMAT_SSIZE_T "d given)",
                 func_name, more_or_less, num_expected,
                 (num_expected == 1) ? "" : "s", num_found);
}

/* PyObjectLookupSpecial */
#if CYTHON_USE_PYTYPE_LOOKUP && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx__PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name, int with_error) {
    PyObject *res;
    PyTypeObject *tp = Py_TYPE(obj);
#if PY_MAJOR_VERSION < 3
    if (unlikely(PyInstance_Check(obj)))
        return with_error ? __Pyx_PyObject_GetAttrStr(obj, attr_name) : __Pyx_PyObject_GetAttrStrNoError(obj, attr_name);
#endif
    res = _PyType_Lookup(tp, attr_name);
    if (likely(res)) {
        descrgetfunc f = Py_TYPE(res)->tp_descr_get;
        if (!f) {
            Py_INCREF(res);
        } else {
            res = f(res, obj, (PyObject *)tp);
        }
    } else if (with_error) {
        PyErr_SetObject(PyExc_AttributeError, attr_name);
    }
    return res;
}
#endif

/* GetTopmostException */
#if CYTHON_USE_EXC_INFO_STACK && CYTHON_FAST_THREAD_STATE
static _PyErr_StackItem *
__Pyx_PyErr_GetTopmostException(PyThreadState *tstate)
{
    _PyErr_StackItem *exc_info = tstate->exc_info;
    while ((exc_info->exc_value == NULL || exc_info->exc_value == Py_None) &&
           exc_info->previous_item != NULL)
    {
        exc_info = exc_info->previous_item;
    }
    return exc_info;
}
#endif

/* SaveResetException */
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    PyObject *exc_value = exc_info->exc_value;
    if (exc_value == NULL || exc_value == Py_None) {
        *value = NULL;
        *type = NULL;
        *tb = NULL;
    } else {
        *value = exc_value;
        Py_INCREF(*value);
        *type = (PyObject*) Py_TYPE(exc_value);
        Py_INCREF(*type);
        *tb = PyException_GetTraceback(exc_value);
    }
  #elif CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    *type = exc_info->exc_type;
    *value = exc_info->exc_value;
    *tb = exc_info->exc_traceback;
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
  #else
    *type = tstate->exc_type;
    *value = tstate->exc_value;
    *tb = tstate->exc_traceback;
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
  #endif
}
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = tstate->exc_info;
    PyObject *tmp_value = exc_info->exc_value;
    exc_info->exc_value = value;
    Py_XDECREF(tmp_value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
  #else
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = type;
    exc_info->exc_value = value;
    exc_info->exc_traceback = tb;
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = type;
    tstate->exc_value = value;
    tstate->exc_traceback = tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
  #endif
}
#endif

/* GetException */
#if CYTHON_FAST_THREAD_STATE
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb)
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb)
#endif
{
    PyObject *local_type = NULL, *local_value, *local_tb = NULL;
#if CYTHON_FAST_THREAD_STATE
    PyObject *tmp_type, *tmp_value, *tmp_tb;
  #if PY_VERSION_HEX >= 0x030C00A6
    local_value = tstate->current_exception;
    tstate->current_exception = 0;
    if (likely(local_value)) {
        local_type = (PyObject*) Py_TYPE(local_value);
        Py_INCREF(local_type);
        local_tb = PyException_GetTraceback(local_value);
    }
  #else
    local_type = tstate->curexc_type;
    local_value = tstate->curexc_value;
    local_tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
  #endif
#else
    PyErr_Fetch(&local_type, &local_value, &local_tb);
#endif
    PyErr_NormalizeException(&local_type, &local_value, &local_tb);
#if CYTHON_FAST_THREAD_STATE && PY_VERSION_HEX >= 0x030C00A6
    if (unlikely(tstate->current_exception))
#elif CYTHON_FAST_THREAD_STATE
    if (unlikely(tstate->curexc_type))
#else
    if (unlikely(PyErr_Occurred()))
#endif
        goto bad;
    #if PY_MAJOR_VERSION >= 3
    if (local_tb) {
        if (unlikely(PyException_SetTraceback(local_value, local_tb) < 0))
            goto bad;
    }
    #endif
    Py_XINCREF(local_tb);
    Py_XINCREF(local_type);
    Py_XINCREF(local_value);
    *type = local_type;
    *value = local_value;
    *tb = local_tb;
#if CYTHON_FAST_THREAD_STATE
    #if CYTHON_USE_EXC_INFO_STACK
    {
        _PyErr_StackItem *exc_info = tstate->exc_info;
      #if PY_VERSION_HEX >= 0x030B00a4
        tmp_value = exc_info->exc_value;
        exc_info->exc_value = local_value;
        tmp_type = NULL;
        tmp_tb = NULL;
        Py_XDECREF(local_type);
        Py_XDECREF(local_tb);
      #else
        tmp_type = exc_info->exc_type;
        tmp_value = exc_info->exc_value;
        tmp_tb = exc_info->exc_traceback;
        exc_info->exc_type = local_type;
        exc_info->exc_value = local_value;
        exc_info->exc_traceback = local_tb;
      #endif
    }
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = local_type;
    tstate->exc_value = local_value;
    tstate->exc_traceback = local_tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#else
    PyErr_SetExcInfo(local_type, local_value, local_tb);
#endif
    return 0;
bad:
    *type = 0;
    *value = 0;
    *tb = 0;
    Py_XDECREF(local_type);
    Py_XDECREF(local_value);
    Py_XDECREF(local_tb);
    return -1;
}

/* PyIntBinop */
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check) {
    CYTHON_MAYBE_UNUSED_VAR(intval);
    CYTHON_MAYBE_UNUSED_VAR(inplace);
    CYTHON_UNUSED_VAR(zerodivision_check);
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
        
            x = (long)((unsigned long)a + (unsigned long)b);
            if (likely((x^a) >= 0 || (x^b) >= 0))
                return PyInt_FromLong(x);
            return PyLong_Type.tp_as_number->nb_add(op1, op2);
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        const long b = intval;
        long a, x;
#ifdef HAVE_LONG_LONG
        const PY_LONG_LONG llb = intval;
        PY_LONG_LONG lla, llx;
#endif
        if (unlikely(__Pyx_PyLong_IsZero(op1))) {
            return __Pyx_NewRef(op2);
        }
        if (likely(__Pyx_PyLong_IsCompact(op1))) {
            a = __Pyx_PyLong_CompactValue(op1);
        } else {
            const digit* digits = __Pyx_PyLong_Digits(op1);
            const Py_ssize_t size = __Pyx_PyLong_SignedDigitCount(op1);
            switch (size) {
                case -2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case 2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        a = (long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case -3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case 3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        a = (long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case -4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = -(PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case 4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                        a = (long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                        lla = (PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                default: return PyLong_Type.tp_as_number->nb_add(op1, op2);
            }
        }
                x = a + b;
            return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long:
                llx = lla + llb;
            return PyLong_FromLongLong(llx);
#endif
        
        
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
#if CYTHON_COMPILING_IN_LIMITED_API
        double a = __pyx_PyFloat_AsDouble(op1);
#else
        double a = PyFloat_AS_DOUBLE(op1);
#endif
            double result;
            
            PyFPE_START_PROTECT("add", return NULL)
            result = ((double)a) + (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceAdd : PyNumber_Add)(op1, op2);
}
#endif

/* SliceObject */
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(PyObject* obj,
        Py_ssize_t cstart, Py_ssize_t cstop,
        PyObject** _py_start, PyObject** _py_stop, PyObject** _py_slice,
        int has_cstart, int has_cstop, int wraparound) {
    __Pyx_TypeName obj_type_name;
#if CYTHON_USE_TYPE_SLOTS
    PyMappingMethods* mp;
#if PY_MAJOR_VERSION < 3
    PySequenceMethods* ms = Py_TYPE(obj)->tp_as_sequence;
    if (likely(ms && ms->sq_slice)) {
        if (!has_cstart) {
            if (_py_start && (*_py_start != Py_None)) {
                cstart = __Pyx_PyIndex_AsSsize_t(*_py_start);
                if ((cstart == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            } else
                cstart = 0;
        }
        if (!has_cstop) {
            if (_py_stop && (*_py_stop != Py_None)) {
                cstop = __Pyx_PyIndex_AsSsize_t(*_py_stop);
                if ((cstop == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            } else
                cstop = PY_SSIZE_T_MAX;
        }
        if (wraparound && unlikely((cstart < 0) | (cstop < 0)) && likely(ms->sq_length)) {
            Py_ssize_t l = ms->sq_length(obj);
            if (likely(l >= 0)) {
                if (cstop < 0) {
                    cstop += l;
                    if (cstop < 0) cstop = 0;
                }
                if (cstart < 0) {
                    cstart += l;
                    if (cstart < 0) cstart = 0;
                }
            } else {
                if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                    goto bad;
                PyErr_Clear();
            }
        }
        return ms->sq_slice(obj, cstart, cstop);
    }
#else
    CYTHON_UNUSED_VAR(wraparound);
#endif
    mp = Py_TYPE(obj)->tp_as_mapping;
    if (likely(mp && mp->mp_subscript))
#else
    CYTHON_UNUSED_VAR(wraparound);
#endif
    {
        PyObject* result;
        PyObject *py_slice, *py_start, *py_stop;
        if (_py_slice) {
            py_slice = *_py_slice;
        } else {
            PyObject* owned_start = NULL;
            PyObject* owned_stop = NULL;
            if (_py_start) {
                py_start = *_py_start;
            } else {
                if (has_cstart) {
                    owned_start = py_start = PyInt_FromSsize_t(cstart);
                    if (unlikely(!py_start)) goto bad;
                } else
                    py_start = Py_None;
            }
            if (_py_stop) {
                py_stop = *_py_stop;
            } else {
                if (has_cstop) {
                    owned_stop = py_stop = PyInt_FromSsize_t(cstop);
                    if (unlikely(!py_stop)) {
                        Py_XDECREF(owned_start);
                        goto bad;
                    }
                } else
                    py_stop = Py_None;
            }
            py_slice = PySlice_New(py_start, py_stop, Py_None);
            Py_XDECREF(owned_start);
            Py_XDECREF(owned_stop);
            if (unlikely(!py_slice)) goto bad;
        }
#if CYTHON_USE_TYPE_SLOTS
        result = mp->mp_subscript(obj, py_slice);
#else
        result = PyObject_GetItem(obj, py_slice);
#endif
        if (!_py_slice) {
            Py_DECREF(py_slice);
        }
        return result;
    }
    obj_type_name = __Pyx_PyType_GetName(Py_TYPE(obj));
    PyErr_Format(PyExc_TypeError,
        "'" __Pyx_FMT_TYPENAME "' object is unsliceable", obj_type_name);
    __Pyx_DECREF_TypeName(obj_type_name);
bad:
    return NULL;
}

/* PyObjectSetAttrStr */
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_setattro))
        return tp->tp_setattro(obj, attr_name, value);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_setattr))
        return tp->tp_setattr(obj, PyString_AS_STRING(attr_name), value);
#endif
    return PyObject_SetAttr(obj, attr_name, value);
}
#endif

/* PyIntCompare */
static CYTHON_INLINE PyObject* __Pyx_PyInt_EqObjC(PyObject *op1, PyObject *op2, long intval, long inplace) {
    CYTHON_MAYBE_UNUSED_VAR(intval);
    CYTHON_UNUSED_VAR(inplace);
    if (op1 == op2) {
        Py_RETURN_TRUE;
    }
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long a = PyInt_AS_LONG(op1);
        if (a == b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        int unequal;
        unsigned long uintval;
        Py_ssize_t size = __Pyx_PyLong_DigitCount(op1);
        const digit* digits = __Pyx_PyLong_Digits(op1);
        if (intval == 0) {
            if (__Pyx_PyLong_IsZero(op1) == 1) Py_RETURN_TRUE; else Py_RETURN_FALSE;
        } else if (intval < 0) {
            if (__Pyx_PyLong_IsNonNeg(op1))
                Py_RETURN_FALSE;
            intval = -intval;
        } else {
            if (__Pyx_PyLong_IsNeg(op1))
                Py_RETURN_FALSE;
        }
        uintval = (unsigned long) intval;
#if PyLong_SHIFT * 4 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 4)) {
            unequal = (size != 5) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[4] != ((uintval >> (4 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
#if PyLong_SHIFT * 3 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 3)) {
            unequal = (size != 4) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
#if PyLong_SHIFT * 2 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 2)) {
            unequal = (size != 3) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
#if PyLong_SHIFT * 1 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 1)) {
            unequal = (size != 2) || (digits[0] != (uintval & (unsigned long) PyLong_MASK))
                 | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long) PyLong_MASK));
        } else
#endif
            unequal = (size != 1) || (((unsigned long) digits[0]) != (uintval & (unsigned long) PyLong_MASK));
        if (unequal == 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    #endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
#if CYTHON_COMPILING_IN_LIMITED_API
        double a = __pyx_PyFloat_AsDouble(op1);
#else
        double a = PyFloat_AS_DOUBLE(op1);
#endif
        if ((double)a == (double)b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    return (
        PyObject_RichCompare(op1, op2, Py_EQ));
}

/* PyIntBinop */
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_MultiplyCObj(PyObject *op1, PyObject *op2, long intval, int inplace, int zerodivision_check) {
    CYTHON_MAYBE_UNUSED_VAR(intval);
    CYTHON_MAYBE_UNUSED_VAR(inplace);
    CYTHON_UNUSED_VAR(zerodivision_check);
    #if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op2))) {
        const long a = intval;
        long b = PyInt_AS_LONG(op2);
        
#ifdef HAVE_LONG_LONG
            if (sizeof(PY_LONG_LONG) > sizeof(long)) {
                PY_LONG_LONG result = (PY_LONG_LONG)a * (PY_LONG_LONG)b;
                return (result >= LONG_MIN && result <= LONG_MAX) ?
                    PyInt_FromLong((long)result) : PyLong_FromLongLong(result);
            }
#endif
#if CYTHON_USE_TYPE_SLOTS
            return PyInt_Type.tp_as_number->nb_multiply(op1, op2);
#else
            return PyNumber_Multiply(op1, op2);
#endif
    }
    #endif
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op2))) {
        const long a = intval;
        long b, x;
#ifdef HAVE_LONG_LONG
        const PY_LONG_LONG lla = intval;
        PY_LONG_LONG llb, llx;
#endif
        if (unlikely(__Pyx_PyLong_IsZero(op2))) {
            return __Pyx_NewRef(op2);
        }
        if (likely(__Pyx_PyLong_IsCompact(op2))) {
            b = __Pyx_PyLong_CompactValue(op2);
        } else {
            const digit* digits = __Pyx_PyLong_Digits(op2);
            const Py_ssize_t size = __Pyx_PyLong_SignedDigitCount(op2);
            switch (size) {
                case -2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT+30) {
                        b = -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT+30) {
                        llb = -(PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case 2:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT+30) {
                        b = (long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT+30) {
                        llb = (PY_LONG_LONG) (((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case -3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT+30) {
                        b = -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT+30) {
                        llb = -(PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case 3:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT+30) {
                        b = (long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT+30) {
                        llb = (PY_LONG_LONG) (((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case -4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT+30) {
                        b = -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT+30) {
                        llb = -(PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                case 4:
                    if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT+30) {
                        b = (long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                        break;
                    #ifdef HAVE_LONG_LONG
                    } else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT+30) {
                        llb = (PY_LONG_LONG) (((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                        goto long_long;
                    #endif
                    }
                    CYTHON_FALLTHROUGH;
                default: return PyLong_Type.tp_as_number->nb_multiply(op1, op2);
            }
        }
                CYTHON_UNUSED_VAR(a);
                CYTHON_UNUSED_VAR(b);
                #ifdef HAVE_LONG_LONG
                llb = b;
                goto long_long;
                #else
                return PyLong_Type.tp_as_number->nb_multiply(op1, op2);
                #endif
            return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long:
                llx = lla * llb;
            return PyLong_FromLongLong(llx);
#endif
        
        
    }
    #endif
    if (PyFloat_CheckExact(op2)) {
        const long a = intval;
#if CYTHON_COMPILING_IN_LIMITED_API
        double b = __pyx_PyFloat_AsDouble(op2);
#else
        double b = PyFloat_AS_DOUBLE(op2);
#endif
            double result;
            
            PyFPE_START_PROTECT("multiply", return NULL)
            result = ((double)a) * (double)b;
            PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceMultiply : PyNumber_Multiply)(op1, op2);
}
#endif

/* Import */
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level) {
    PyObject *module = 0;
    PyObject *empty_dict = 0;
    PyObject *empty_list = 0;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_import;
    py_import = __Pyx_PyObject_GetAttrStr(__pyx_b, __pyx_n_s_import);
    if (unlikely(!py_import))
        goto bad;
    if (!from_list) {
        empty_list = PyList_New(0);
        if (unlikely(!empty_list))
            goto bad;
        from_list = empty_list;
    }
    #endif
    empty_dict = PyDict_New();
    if (unlikely(!empty_dict))
        goto bad;
    {
        #if PY_MAJOR_VERSION >= 3
        if (level == -1) {
            if (strchr(__Pyx_MODULE_NAME, '.') != NULL) {
                module = PyImport_ImportModuleLevelObject(
                    name, __pyx_d, empty_dict, from_list, 1);
                if (unlikely(!module)) {
                    if (unlikely(!PyErr_ExceptionMatches(PyExc_ImportError)))
                        goto bad;
                    PyErr_Clear();
                }
            }
            level = 0;
        }
        #endif
        if (!module) {
            #if PY_MAJOR_VERSION < 3
            PyObject *py_level = PyInt_FromLong(level);
            if (unlikely(!py_level))
                goto bad;
            module = PyObject_CallFunctionObjArgs(py_import,
                name, __pyx_d, empty_dict, from_list, py_level, (PyObject *)NULL);
            Py_DECREF(py_level);
            #else
            module = PyImport_ImportModuleLevelObject(
                name, __pyx_d, empty_dict, from_list, level);
            #endif
        }
    }
bad:
    Py_XDECREF(empty_dict);
    Py_XDECREF(empty_list);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_import);
    #endif
    return module;
}

/* ImportFrom */
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name) {
    PyObject* value = __Pyx_PyObject_GetAttrStr(module, name);
    if (unlikely(!value) && PyErr_ExceptionMatches(PyExc_AttributeError)) {
        const char* module_name_str = 0;
        PyObject* module_name = 0;
        PyObject* module_dot = 0;
        PyObject* full_name = 0;
        PyErr_Clear();
        module_name_str = PyModule_GetName(module);
        if (unlikely(!module_name_str)) { goto modbad; }
        module_name = PyUnicode_FromString(module_name_str);
        if (unlikely(!module_name)) { goto modbad; }
        module_dot = PyUnicode_Concat(module_name, __pyx_kp_u__16);
        if (unlikely(!module_dot)) { goto modbad; }
        full_name = PyUnicode_Concat(module_dot, name);
        if (unlikely(!full_name)) { goto modbad; }
        #if PY_VERSION_HEX < 0x030700A1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM  < 0x07030400)
        {
            PyObject *modules = PyImport_GetModuleDict();
            if (unlikely(!modules))
                goto modbad;
            value = PyObject_GetItem(modules, full_name);
        }
        #else
        value = PyImport_GetModule(full_name);
        #endif
      modbad:
        Py_XDECREF(full_name);
        Py_XDECREF(module_dot);
        Py_XDECREF(module_name);
    }
    if (unlikely(!value)) {
        PyErr_Format(PyExc_ImportError,
        #if PY_MAJOR_VERSION < 3
            "cannot import name %.230s", PyString_AS_STRING(name));
        #else
            "cannot import name %S", name);
        #endif
    }
    return value;
}

/* ImportDottedModule */
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx__ImportDottedModule_Error(PyObject *name, PyObject *parts_tuple, Py_ssize_t count) {
    PyObject *partial_name = NULL, *slice = NULL, *sep = NULL;
    if (unlikely(PyErr_Occurred())) {
        PyErr_Clear();
    }
    if (likely(PyTuple_GET_SIZE(parts_tuple) == count)) {
        partial_name = name;
    } else {
        slice = PySequence_GetSlice(parts_tuple, 0, count);
        if (unlikely(!slice))
            goto bad;
        sep = PyUnicode_FromStringAndSize(".", 1);
        if (unlikely(!sep))
            goto bad;
        partial_name = PyUnicode_Join(sep, slice);
    }
    PyErr_Format(
#if PY_MAJOR_VERSION < 3
        PyExc_ImportError,
        "No module named '%s'", PyString_AS_STRING(partial_name));
#else
#if PY_VERSION_HEX >= 0x030600B1
        PyExc_ModuleNotFoundError,
#else
        PyExc_ImportError,
#endif
        "No module named '%U'", partial_name);
#endif
bad:
    Py_XDECREF(sep);
    Py_XDECREF(slice);
    Py_XDECREF(partial_name);
    return NULL;
}
#endif
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx__ImportDottedModule_Lookup(PyObject *name) {
    PyObject *imported_module;
#if PY_VERSION_HEX < 0x030700A1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM  < 0x07030400)
    PyObject *modules = PyImport_GetModuleDict();
    if (unlikely(!modules))
        return NULL;
    imported_module = __Pyx_PyDict_GetItemStr(modules, name);
    Py_XINCREF(imported_module);
#else
    imported_module = PyImport_GetModule(name);
#endif
    return imported_module;
}
#endif
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple) {
    Py_ssize_t i, nparts;
    nparts = PyTuple_GET_SIZE(parts_tuple);
    for (i=1; i < nparts && module; i++) {
        PyObject *part, *submodule;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        part = PyTuple_GET_ITEM(parts_tuple, i);
#else
        part = PySequence_ITEM(parts_tuple, i);
#endif
        submodule = __Pyx_PyObject_GetAttrStrNoError(module, part);
#if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
        Py_DECREF(part);
#endif
        Py_DECREF(module);
        module = submodule;
    }
    if (unlikely(!module)) {
        return __Pyx__ImportDottedModule_Error(name, parts_tuple, i);
    }
    return module;
}
#endif
static PyObject *__Pyx__ImportDottedModule(PyObject *name, PyObject *parts_tuple) {
#if PY_MAJOR_VERSION < 3
    PyObject *module, *from_list, *star = __pyx_n_s__17;
    CYTHON_UNUSED_VAR(parts_tuple);
    from_list = PyList_New(1);
    if (unlikely(!from_list))
        return NULL;
    Py_INCREF(star);
    PyList_SET_ITEM(from_list, 0, star);
    module = __Pyx_Import(name, from_list, 0);
    Py_DECREF(from_list);
    return module;
#else
    PyObject *imported_module;
    PyObject *module = __Pyx_Import(name, NULL, 0);
    if (!parts_tuple || unlikely(!module))
        return module;
    imported_module = __Pyx__ImportDottedModule_Lookup(name);
    if (likely(imported_module)) {
        Py_DECREF(module);
        return imported_module;
    }
    PyErr_Clear();
    return __Pyx_ImportDottedModule_WalkParts(module, name, parts_tuple);
#endif
}
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple) {
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030400B1
    PyObject *module = __Pyx__ImportDottedModule_Lookup(name);
    if (likely(module)) {
        PyObject *spec = __Pyx_PyObject_GetAttrStrNoError(module, __pyx_n_s_spec);
        if (likely(spec)) {
            PyObject *unsafe = __Pyx_PyObject_GetAttrStrNoError(spec, __pyx_n_s_initializing);
            if (likely(!unsafe || !__Pyx_PyObject_IsTrue(unsafe))) {
                Py_DECREF(spec);
                spec = NULL;
            }
            Py_XDECREF(unsafe);
        }
        if (likely(!spec)) {
            PyErr_Clear();
            return module;
        }
        Py_DECREF(spec);
        Py_DECREF(module);
    } else if (PyErr_Occurred()) {
        PyErr_Clear();
    }
#endif
    return __Pyx__ImportDottedModule(name, parts_tuple);
}

/* FixUpExtensionType */
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type) {
#if PY_VERSION_HEX > 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    CYTHON_UNUSED_VAR(spec);
    CYTHON_UNUSED_VAR(type);
#else
    const PyType_Slot *slot = spec->slots;
    while (slot && slot->slot && slot->slot != Py_tp_members)
        slot++;
    if (slot && slot->slot == Py_tp_members) {
        int changed = 0;
#if !(PY_VERSION_HEX <= 0x030900b1 && CYTHON_COMPILING_IN_CPYTHON)
        const
#endif
            PyMemberDef *memb = (PyMemberDef*) slot->pfunc;
        while (memb && memb->name) {
            if (memb->name[0] == '_' && memb->name[1] == '_') {
#if PY_VERSION_HEX < 0x030900b1
                if (strcmp(memb->name, "__weaklistoffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
                    type->tp_weaklistoffset = memb->offset;
                    changed = 1;
                }
                else if (strcmp(memb->name, "__dictoffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
                    type->tp_dictoffset = memb->offset;
                    changed = 1;
                }
#if CYTHON_METH_FASTCALL
                else if (strcmp(memb->name, "__vectorcalloffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
#if PY_VERSION_HEX >= 0x030800b4
                    type->tp_vectorcall_offset = memb->offset;
#else
                    type->tp_print = (printfunc) memb->offset;
#endif
                    changed = 1;
                }
#endif
#else
                if ((0));
#endif
#if PY_VERSION_HEX <= 0x030900b1 && CYTHON_COMPILING_IN_CPYTHON
                else if (strcmp(memb->name, "__module__") == 0) {
                    PyObject *descr;
                    assert(memb->type == T_OBJECT);
                    assert(memb->flags == 0 || memb->flags == READONLY);
                    descr = PyDescr_NewMember(type, memb);
                    if (unlikely(!descr))
                        return -1;
                    if (unlikely(PyDict_SetItem(type->tp_dict, PyDescr_NAME(descr), descr) < 0)) {
                        Py_DECREF(descr);
                        return -1;
                    }
                    Py_DECREF(descr);
                    changed = 1;
                }
#endif
            }
            memb++;
        }
        if (changed)
            PyType_Modified(type);
    }
#endif
    return 0;
}
#endif

/* FetchSharedCythonModule */
static PyObject *__Pyx_FetchSharedCythonABIModule(void) {
    return __Pyx_PyImport_AddModuleRef((char*) __PYX_ABI_MODULE_NAME);
}

/* FetchCommonType */
static int __Pyx_VerifyCachedType(PyObject *cached_type,
                               const char *name,
                               Py_ssize_t basicsize,
                               Py_ssize_t expected_basicsize) {
    if (!PyType_Check(cached_type)) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s is not a type object", name);
        return -1;
    }
    if (basicsize != expected_basicsize) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s has the wrong size, try recompiling",
            name);
        return -1;
    }
    return 0;
}
#if !CYTHON_USE_TYPE_SPECS
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* abi_module;
    const char* object_name;
    PyTypeObject *cached_type = NULL;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return NULL;
    object_name = strrchr(type->tp_name, '.');
    object_name = object_name ? object_name+1 : type->tp_name;
    cached_type = (PyTypeObject*) PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        if (__Pyx_VerifyCachedType(
              (PyObject *)cached_type,
              object_name,
              cached_type->tp_basicsize,
              type->tp_basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    if (PyType_Ready(type) < 0) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, (PyObject *)type) < 0)
        goto bad;
    Py_INCREF(type);
    cached_type = type;
done:
    Py_DECREF(abi_module);
    return cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#else
static PyTypeObject *__Pyx_FetchCommonTypeFromSpec(PyObject *module, PyType_Spec *spec, PyObject *bases) {
    PyObject *abi_module, *cached_type = NULL;
    const char* object_name = strrchr(spec->name, '.');
    object_name = object_name ? object_name+1 : spec->name;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return NULL;
    cached_type = PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        Py_ssize_t basicsize;
#if CYTHON_COMPILING_IN_LIMITED_API
        PyObject *py_basicsize;
        py_basicsize = PyObject_GetAttrString(cached_type, "__basicsize__");
        if (unlikely(!py_basicsize)) goto bad;
        basicsize = PyLong_AsSsize_t(py_basicsize);
        Py_DECREF(py_basicsize);
        py_basicsize = 0;
        if (unlikely(basicsize == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
#else
        basicsize = likely(PyType_Check(cached_type)) ? ((PyTypeObject*) cached_type)->tp_basicsize : -1;
#endif
        if (__Pyx_VerifyCachedType(
              cached_type,
              object_name,
              basicsize,
              spec->basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    CYTHON_UNUSED_VAR(module);
    cached_type = __Pyx_PyType_FromModuleAndSpec(abi_module, spec, bases);
    if (unlikely(!cached_type)) goto bad;
    if (unlikely(__Pyx_fix_up_extension_type_from_spec(spec, (PyTypeObject *) cached_type) < 0)) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, cached_type) < 0) goto bad;
done:
    Py_DECREF(abi_module);
    assert(cached_type == NULL || PyType_Check(cached_type));
    return (PyTypeObject *) cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#endif

/* PyVectorcallFastCallDict */
#if CYTHON_METH_FASTCALL
static PyObject *__Pyx_PyVectorcall_FastCallDict_kw(PyObject *func, __pyx_vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw)
{
    PyObject *res = NULL;
    PyObject *kwnames;
    PyObject **newargs;
    PyObject **kwvalues;
    Py_ssize_t i, pos;
    size_t j;
    PyObject *key, *value;
    unsigned long keys_are_strings;
    Py_ssize_t nkw = PyDict_GET_SIZE(kw);
    newargs = (PyObject **)PyMem_Malloc((nargs + (size_t)nkw) * sizeof(args[0]));
    if (unlikely(newargs == NULL)) {
        PyErr_NoMemory();
        return NULL;
    }
    for (j = 0; j < nargs; j++) newargs[j] = args[j];
    kwnames = PyTuple_New(nkw);
    if (unlikely(kwnames == NULL)) {
        PyMem_Free(newargs);
        return NULL;
    }
    kwvalues = newargs + nargs;
    pos = i = 0;
    keys_are_strings = Py_TPFLAGS_UNICODE_SUBCLASS;
    while (PyDict_Next(kw, &pos, &key, &value)) {
        keys_are_strings &= Py_TYPE(key)->tp_flags;
        Py_INCREF(key);
        Py_INCREF(value);
        PyTuple_SET_ITEM(kwnames, i, key);
        kwvalues[i] = value;
        i++;
    }
    if (unlikely(!keys_are_strings)) {
        PyErr_SetString(PyExc_TypeError, "keywords must be strings");
        goto cleanup;
    }
    res = vc(func, newargs, nargs, kwnames);
cleanup:
    Py_DECREF(kwnames);
    for (i = 0; i < nkw; i++)
        Py_DECREF(kwvalues[i]);
    PyMem_Free(newargs);
    return res;
}
static CYTHON_INLINE PyObject *__Pyx_PyVectorcall_FastCallDict(PyObject *func, __pyx_vectorcallfunc vc, PyObject *const *args, size_t nargs, PyObject *kw)
{
    if (likely(kw == NULL) || PyDict_GET_SIZE(kw) == 0) {
        return vc(func, args, nargs, NULL);
    }
    return __Pyx_PyVectorcall_FastCallDict_kw(func, vc, args, nargs, kw);
}
#endif

/* CythonFunctionShared */
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_INLINE int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc) {
    if (__Pyx_CyFunction_Check(func)) {
        return PyCFunction_GetFunction(((__pyx_CyFunctionObject*)func)->func) == (PyCFunction) cfunc;
    } else if (PyCFunction_Check(func)) {
        return PyCFunction_GetFunction(func) == (PyCFunction) cfunc;
    }
    return 0;
}
#else
static CYTHON_INLINE int __Pyx__IsSameCyOrCFunction(PyObject *func, void *cfunc) {
    return __Pyx_CyOrPyCFunction_Check(func) && __Pyx_CyOrPyCFunction_GET_FUNCTION(func) == (PyCFunction) cfunc;
}
#endif
static CYTHON_INLINE void __Pyx__CyFunction_SetClassObj(__pyx_CyFunctionObject* f, PyObject* classobj) {
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    __Pyx_Py_XDECREF_SET(
        __Pyx_CyFunction_GetClassObj(f),
            ((classobj) ? __Pyx_NewRef(classobj) : NULL));
#else
    __Pyx_Py_XDECREF_SET(
        ((PyCMethodObject *) (f))->mm_class,
        (PyTypeObject*)((classobj) ? __Pyx_NewRef(classobj) : NULL));
#endif
}
static PyObject *
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject *op, void *closure)
{
    CYTHON_UNUSED_VAR(closure);
    if (unlikely(op->func_doc == NULL)) {
#if CYTHON_COMPILING_IN_LIMITED_API
        op->func_doc = PyObject_GetAttrString(op->func, "__doc__");
        if (unlikely(!op->func_doc)) return NULL;
#else
        if (((PyCFunctionObject*)op)->m_ml->ml_doc) {
#if PY_MAJOR_VERSION >= 3
            op->func_doc = PyUnicode_FromString(((PyCFunctionObject*)op)->m_ml->ml_doc);
#else
            op->func_doc = PyString_FromString(((PyCFunctionObject*)op)->m_ml->ml_doc);
#endif
            if (unlikely(op->func_doc == NULL))
                return NULL;
        } else {
            Py_INCREF(Py_None);
            return Py_None;
        }
#endif
    }
    Py_INCREF(op->func_doc);
    return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (value == NULL) {
        value = Py_None;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_doc, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (unlikely(op->func_name == NULL)) {
#if CYTHON_COMPILING_IN_LIMITED_API
        op->func_name = PyObject_GetAttrString(op->func, "__name__");
#elif PY_MAJOR_VERSION >= 3
        op->func_name = PyUnicode_InternFromString(((PyCFunctionObject*)op)->m_ml->ml_name);
#else
        op->func_name = PyString_InternFromString(((PyCFunctionObject*)op)->m_ml->ml_name);
#endif
        if (unlikely(op->func_name == NULL))
            return NULL;
    }
    Py_INCREF(op->func_name);
    return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__name__ must be set to a string object");
        return -1;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_name, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_qualname(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(op->func_qualname);
    return op->func_qualname;
}
static int
__Pyx_CyFunction_set_qualname(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__qualname__ must be set to a string object");
        return -1;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_qualname, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (unlikely(op->func_dict == NULL)) {
        op->func_dict = PyDict_New();
        if (unlikely(op->func_dict == NULL))
            return NULL;
    }
    Py_INCREF(op->func_dict);
    return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject *op, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
    if (unlikely(value == NULL)) {
        PyErr_SetString(PyExc_TypeError,
               "function's dictionary may not be deleted");
        return -1;
    }
    if (unlikely(!PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
               "setting function's dictionary to a non-dict");
        return -1;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_dict, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_globals(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(op->func_globals);
    return op->func_globals;
}
static PyObject *
__Pyx_CyFunction_get_closure(__pyx_CyFunctionObject *op, void *context)
{
    CYTHON_UNUSED_VAR(op);
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(Py_None);
    return Py_None;
}
static PyObject *
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject *op, void *context)
{
    PyObject* result = (op->func_code) ? op->func_code : Py_None;
    CYTHON_UNUSED_VAR(context);
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_init_defaults(__pyx_CyFunctionObject *op) {
    int result = 0;
    PyObject *res = op->defaults_getter((PyObject *) op);
    if (unlikely(!res))
        return -1;
    #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    op->defaults_tuple = PyTuple_GET_ITEM(res, 0);
    Py_INCREF(op->defaults_tuple);
    op->defaults_kwdict = PyTuple_GET_ITEM(res, 1);
    Py_INCREF(op->defaults_kwdict);
    #else
    op->defaults_tuple = __Pyx_PySequence_ITEM(res, 0);
    if (unlikely(!op->defaults_tuple)) result = -1;
    else {
        op->defaults_kwdict = __Pyx_PySequence_ITEM(res, 1);
        if (unlikely(!op->defaults_kwdict)) result = -1;
    }
    #endif
    Py_DECREF(res);
    return result;
}
static int
__Pyx_CyFunction_set_defaults(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value) {
        value = Py_None;
    } else if (unlikely(value != Py_None && !PyTuple_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
                        "__defaults__ must be set to a tuple object");
        return -1;
    }
    PyErr_WarnEx(PyExc_RuntimeWarning, "changes to cyfunction.__defaults__ will not "
                 "currently affect the values used in function calls", 1);
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->defaults_tuple, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->defaults_tuple;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (unlikely(__Pyx_CyFunction_init_defaults(op) < 0)) return NULL;
            result = op->defaults_tuple;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_kwdefaults(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value) {
        value = Py_None;
    } else if (unlikely(value != Py_None && !PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
                        "__kwdefaults__ must be set to a dict object");
        return -1;
    }
    PyErr_WarnEx(PyExc_RuntimeWarning, "changes to cyfunction.__kwdefaults__ will not "
                 "currently affect the values used in function calls", 1);
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(op->defaults_kwdict, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_kwdefaults(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->defaults_kwdict;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (unlikely(__Pyx_CyFunction_init_defaults(op) < 0)) return NULL;
            result = op->defaults_kwdict;
        } else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_annotations(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    if (!value || value == Py_None) {
        value = NULL;
    } else if (unlikely(!PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
                        "__annotations__ must be set to a dict object");
        return -1;
    }
    Py_XINCREF(value);
    __Pyx_Py_XDECREF_SET(op->func_annotations, value);
    return 0;
}
static PyObject *
__Pyx_CyFunction_get_annotations(__pyx_CyFunctionObject *op, void *context) {
    PyObject* result = op->func_annotations;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!result)) {
        result = PyDict_New();
        if (unlikely(!result)) return NULL;
        op->func_annotations = result;
    }
    Py_INCREF(result);
    return result;
}
static PyObject *
__Pyx_CyFunction_get_is_coroutine(__pyx_CyFunctionObject *op, void *context) {
    int is_coroutine;
    CYTHON_UNUSED_VAR(context);
    if (op->func_is_coroutine) {
        return __Pyx_NewRef(op->func_is_coroutine);
    }
    is_coroutine = op->flags & __Pyx_CYFUNCTION_COROUTINE;
#if PY_VERSION_HEX >= 0x03050000
    if (is_coroutine) {
        PyObject *module, *fromlist, *marker = __pyx_n_s_is_coroutine;
        fromlist = PyList_New(1);
        if (unlikely(!fromlist)) return NULL;
        Py_INCREF(marker);
#if CYTHON_ASSUME_SAFE_MACROS
        PyList_SET_ITEM(fromlist, 0, marker);
#else
        if (unlikely(PyList_SetItem(fromlist, 0, marker) < 0)) {
            Py_DECREF(marker);
            Py_DECREF(fromlist);
            return NULL;
        }
#endif
        module = PyImport_ImportModuleLevelObject(__pyx_n_s_asyncio_coroutines, NULL, NULL, fromlist, 0);
        Py_DECREF(fromlist);
        if (unlikely(!module)) goto ignore;
        op->func_is_coroutine = __Pyx_PyObject_GetAttrStr(module, marker);
        Py_DECREF(module);
        if (likely(op->func_is_coroutine)) {
            return __Pyx_NewRef(op->func_is_coroutine);
        }
ignore:
        PyErr_Clear();
    }
#endif
    op->func_is_coroutine = __Pyx_PyBool_FromLong(is_coroutine);
    return __Pyx_NewRef(op->func_is_coroutine);
}
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *
__Pyx_CyFunction_get_module(__pyx_CyFunctionObject *op, void *context) {
    CYTHON_UNUSED_VAR(context);
    return PyObject_GetAttrString(op->func, "__module__");
}
static int
__Pyx_CyFunction_set_module(__pyx_CyFunctionObject *op, PyObject* value, void *context) {
    CYTHON_UNUSED_VAR(context);
    return PyObject_SetAttrString(op->func, "__module__", value);
}
#endif
static PyGetSetDef __pyx_CyFunction_getsets[] = {
    {(char *) "func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "__doc__",  (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char *) "func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char *) "__qualname__", (getter)__Pyx_CyFunction_get_qualname, (setter)__Pyx_CyFunction_set_qualname, 0, 0},
    {(char *) "func_dict", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "__dict__", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char *) "func_globals", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "__globals__", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char *) "func_closure", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "__closure__", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char *) "func_code", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "__code__", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char *) "func_defaults", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__defaults__", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char *) "__kwdefaults__", (getter)__Pyx_CyFunction_get_kwdefaults, (setter)__Pyx_CyFunction_set_kwdefaults, 0, 0},
    {(char *) "__annotations__", (getter)__Pyx_CyFunction_get_annotations, (setter)__Pyx_CyFunction_set_annotations, 0, 0},
    {(char *) "_is_coroutine", (getter)__Pyx_CyFunction_get_is_coroutine, 0, 0, 0},
#if CYTHON_COMPILING_IN_LIMITED_API
    {"__module__", (getter)__Pyx_CyFunction_get_module, (setter)__Pyx_CyFunction_set_module, 0, 0},
#endif
    {0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {
#if !CYTHON_COMPILING_IN_LIMITED_API
    {(char *) "__module__", T_OBJECT, offsetof(PyCFunctionObject, m_module), 0, 0},
#endif
#if CYTHON_USE_TYPE_SPECS
    {(char *) "__dictoffset__", T_PYSSIZET, offsetof(__pyx_CyFunctionObject, func_dict), READONLY, 0},
#if CYTHON_METH_FASTCALL
#if CYTHON_BACKPORT_VECTORCALL
    {(char *) "__vectorcalloffset__", T_PYSSIZET, offsetof(__pyx_CyFunctionObject, func_vectorcall), READONLY, 0},
#else
#if !CYTHON_COMPILING_IN_LIMITED_API
    {(char *) "__vectorcalloffset__", T_PYSSIZET, offsetof(PyCFunctionObject, vectorcall), READONLY, 0},
#endif
#endif
#endif
#if PY_VERSION_HEX < 0x030500A0 || CYTHON_COMPILING_IN_LIMITED_API
    {(char *) "__weaklistoffset__", T_PYSSIZET, offsetof(__pyx_CyFunctionObject, func_weakreflist), READONLY, 0},
#else
    {(char *) "__weaklistoffset__", T_PYSSIZET, offsetof(PyCFunctionObject, m_weakreflist), READONLY, 0},
#endif
#endif
    {0, 0, 0,  0, 0}
};
static PyObject *
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject *m, PyObject *args)
{
    CYTHON_UNUSED_VAR(args);
#if PY_MAJOR_VERSION >= 3
    Py_INCREF(m->func_qualname);
    return m->func_qualname;
#else
    return PyString_FromString(((PyCFunctionObject*)m)->m_ml->ml_name);
#endif
}
static PyMethodDef __pyx_CyFunction_methods[] = {
    {"__reduce__", (PyCFunction)__Pyx_CyFunction_reduce, METH_VARARGS, 0},
    {0, 0, 0, 0}
};
#if PY_VERSION_HEX < 0x030500A0 || CYTHON_COMPILING_IN_LIMITED_API
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func_weakreflist)
#else
#define __Pyx_CyFunction_weakreflist(cyfunc) (((PyCFunctionObject*)cyfunc)->m_weakreflist)
#endif
static PyObject *__Pyx_CyFunction_Init(__pyx_CyFunctionObject *op, PyMethodDef *ml, int flags, PyObject* qualname,
                                       PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
#if !CYTHON_COMPILING_IN_LIMITED_API
    PyCFunctionObject *cf = (PyCFunctionObject*) op;
#endif
    if (unlikely(op == NULL))
        return NULL;
#if CYTHON_COMPILING_IN_LIMITED_API
    op->func = PyCFunction_NewEx(ml, (PyObject*)op, module);
    if (unlikely(!op->func)) return NULL;
#endif
    op->flags = flags;
    __Pyx_CyFunction_weakreflist(op) = NULL;
#if !CYTHON_COMPILING_IN_LIMITED_API
    cf->m_ml = ml;
    cf->m_self = (PyObject *) op;
#endif
    Py_XINCREF(closure);
    op->func_closure = closure;
#if !CYTHON_COMPILING_IN_LIMITED_API
    Py_XINCREF(module);
    cf->m_module = module;
#endif
    op->func_dict = NULL;
    op->func_name = NULL;
    Py_INCREF(qualname);
    op->func_qualname = qualname;
    op->func_doc = NULL;
#if PY_VERSION_HEX < 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    op->func_classobj = NULL;
#else
    ((PyCMethodObject*)op)->mm_class = NULL;
#endif
    op->func_globals = globals;
    Py_INCREF(op->func_globals);
    Py_XINCREF(code);
    op->func_code = code;
    op->defaults_pyobjects = 0;
    op->defaults_size = 0;
    op->defaults = NULL;
    op->defaults_tuple = NULL;
    op->defaults_kwdict = NULL;
    op->defaults_getter = NULL;
    op->func_annotations = NULL;
    op->func_is_coroutine = NULL;
#if CYTHON_METH_FASTCALL
    switch (ml->ml_flags & (METH_VARARGS | METH_FASTCALL | METH_NOARGS | METH_O | METH_KEYWORDS | METH_METHOD)) {
    case METH_NOARGS:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_NOARGS;
        break;
    case METH_O:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_O;
        break;
    case METH_METHOD | METH_FASTCALL | METH_KEYWORDS:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD;
        break;
    case METH_FASTCALL | METH_KEYWORDS:
        __Pyx_CyFunction_func_vectorcall(op) = __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS;
        break;
    case METH_VARARGS | METH_KEYWORDS:
        __Pyx_CyFunction_func_vectorcall(op) = NULL;
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags for CyFunction");
        Py_DECREF(op);
        return NULL;
    }
#endif
    return (PyObject *) op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject *m)
{
    Py_CLEAR(m->func_closure);
#if CYTHON_COMPILING_IN_LIMITED_API
    Py_CLEAR(m->func);
#else
    Py_CLEAR(((PyCFunctionObject*)m)->m_module);
#endif
    Py_CLEAR(m->func_dict);
    Py_CLEAR(m->func_name);
    Py_CLEAR(m->func_qualname);
    Py_CLEAR(m->func_doc);
    Py_CLEAR(m->func_globals);
    Py_CLEAR(m->func_code);
#if !CYTHON_COMPILING_IN_LIMITED_API
#if PY_VERSION_HEX < 0x030900B1
    Py_CLEAR(__Pyx_CyFunction_GetClassObj(m));
#else
    {
        PyObject *cls = (PyObject*) ((PyCMethodObject *) (m))->mm_class;
        ((PyCMethodObject *) (m))->mm_class = NULL;
        Py_XDECREF(cls);
    }
#endif
#endif
    Py_CLEAR(m->defaults_tuple);
    Py_CLEAR(m->defaults_kwdict);
    Py_CLEAR(m->func_annotations);
    Py_CLEAR(m->func_is_coroutine);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_XDECREF(pydefaults[i]);
        PyObject_Free(m->defaults);
        m->defaults = NULL;
    }
    return 0;
}
static void __Pyx__CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    if (__Pyx_CyFunction_weakreflist(m) != NULL)
        PyObject_ClearWeakRefs((PyObject *) m);
    __Pyx_CyFunction_clear(m);
    __Pyx_PyHeapTypeObject_GC_Del(m);
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject *m)
{
    PyObject_GC_UnTrack(m);
    __Pyx__CyFunction_dealloc(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject *m, visitproc visit, void *arg)
{
    Py_VISIT(m->func_closure);
#if CYTHON_COMPILING_IN_LIMITED_API
    Py_VISIT(m->func);
#else
    Py_VISIT(((PyCFunctionObject*)m)->m_module);
#endif
    Py_VISIT(m->func_dict);
    Py_VISIT(m->func_name);
    Py_VISIT(m->func_qualname);
    Py_VISIT(m->func_doc);
    Py_VISIT(m->func_globals);
    Py_VISIT(m->func_code);
#if !CYTHON_COMPILING_IN_LIMITED_API
    Py_VISIT(__Pyx_CyFunction_GetClassObj(m));
#endif
    Py_VISIT(m->defaults_tuple);
    Py_VISIT(m->defaults_kwdict);
    Py_VISIT(m->func_is_coroutine);
    if (m->defaults) {
        PyObject **pydefaults = __Pyx_CyFunction_Defaults(PyObject *, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_VISIT(pydefaults[i]);
    }
    return 0;
}
static PyObject*
__Pyx_CyFunction_repr(__pyx_CyFunctionObject *op)
{
#if PY_MAJOR_VERSION >= 3
    return PyUnicode_FromFormat("<cyfunction %U at %p>",
                                op->func_qualname, (void *)op);
#else
    return PyString_FromFormat("<cyfunction %s at %p>",
                               PyString_AsString(op->func_qualname), (void *)op);
#endif
}
static PyObject * __Pyx_CyFunction_CallMethod(PyObject *func, PyObject *self, PyObject *arg, PyObject *kw) {
#if CYTHON_COMPILING_IN_LIMITED_API
    PyObject *f = ((__pyx_CyFunctionObject*)func)->func;
    PyObject *py_name = NULL;
    PyCFunction meth;
    int flags;
    meth = PyCFunction_GetFunction(f);
    if (unlikely(!meth)) return NULL;
    flags = PyCFunction_GetFlags(f);
    if (unlikely(flags < 0)) return NULL;
#else
    PyCFunctionObject* f = (PyCFunctionObject*)func;
    PyCFunction meth = f->m_ml->ml_meth;
    int flags = f->m_ml->ml_flags;
#endif
    Py_ssize_t size;
    switch (flags & (METH_VARARGS | METH_KEYWORDS | METH_NOARGS | METH_O)) {
    case METH_VARARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0))
            return (*meth)(self, arg);
        break;
    case METH_VARARGS | METH_KEYWORDS:
        return (*(PyCFunctionWithKeywords)(void*)meth)(self, arg, kw);
    case METH_NOARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
#if CYTHON_ASSUME_SAFE_MACROS
            size = PyTuple_GET_SIZE(arg);
#else
            size = PyTuple_Size(arg);
            if (unlikely(size < 0)) return NULL;
#endif
            if (likely(size == 0))
                return (*meth)(self, NULL);
#if CYTHON_COMPILING_IN_LIMITED_API
            py_name = __Pyx_CyFunction_get_name((__pyx_CyFunctionObject*)func, NULL);
            if (!py_name) return NULL;
            PyErr_Format(PyExc_TypeError,
                "%.200S() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                py_name, size);
            Py_DECREF(py_name);
#else
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
#endif
            return NULL;
        }
        break;
    case METH_O:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
#if CYTHON_ASSUME_SAFE_MACROS
            size = PyTuple_GET_SIZE(arg);
#else
            size = PyTuple_Size(arg);
            if (unlikely(size < 0)) return NULL;
#endif
            if (likely(size == 1)) {
                PyObject *result, *arg0;
                #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                arg0 = PyTuple_GET_ITEM(arg, 0);
                #else
                arg0 = __Pyx_PySequence_ITEM(arg, 0); if (unlikely(!arg0)) return NULL;
                #endif
                result = (*meth)(self, arg0);
                #if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
                Py_DECREF(arg0);
                #endif
                return result;
            }
#if CYTHON_COMPILING_IN_LIMITED_API
            py_name = __Pyx_CyFunction_get_name((__pyx_CyFunctionObject*)func, NULL);
            if (!py_name) return NULL;
            PyErr_Format(PyExc_TypeError,
                "%.200S() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                py_name, size);
            Py_DECREF(py_name);
#else
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
#endif
            return NULL;
        }
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags for CyFunction");
        return NULL;
    }
#if CYTHON_COMPILING_IN_LIMITED_API
    py_name = __Pyx_CyFunction_get_name((__pyx_CyFunctionObject*)func, NULL);
    if (!py_name) return NULL;
    PyErr_Format(PyExc_TypeError, "%.200S() takes no keyword arguments",
                 py_name);
    Py_DECREF(py_name);
#else
    PyErr_Format(PyExc_TypeError, "%.200s() takes no keyword arguments",
                 f->m_ml->ml_name);
#endif
    return NULL;
}
static CYTHON_INLINE PyObject *__Pyx_CyFunction_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *self, *result;
#if CYTHON_COMPILING_IN_LIMITED_API
    self = PyCFunction_GetSelf(((__pyx_CyFunctionObject*)func)->func);
    if (unlikely(!self) && PyErr_Occurred()) return NULL;
#else
    self = ((PyCFunctionObject*)func)->m_self;
#endif
    result = __Pyx_CyFunction_CallMethod(func, self, arg, kw);
    return result;
}
static PyObject *__Pyx_CyFunction_CallAsMethod(PyObject *func, PyObject *args, PyObject *kw) {
    PyObject *result;
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *) func;
#if CYTHON_METH_FASTCALL
     __pyx_vectorcallfunc vc = __Pyx_CyFunction_func_vectorcall(cyfunc);
    if (vc) {
#if CYTHON_ASSUME_SAFE_MACROS
        return __Pyx_PyVectorcall_FastCallDict(func, vc, &PyTuple_GET_ITEM(args, 0), (size_t)PyTuple_GET_SIZE(args), kw);
#else
        (void) &__Pyx_PyVectorcall_FastCallDict;
        return PyVectorcall_Call(func, args, kw);
#endif
    }
#endif
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        Py_ssize_t argc;
        PyObject *new_args;
        PyObject *self;
#if CYTHON_ASSUME_SAFE_MACROS
        argc = PyTuple_GET_SIZE(args);
#else
        argc = PyTuple_Size(args);
        if (unlikely(!argc) < 0) return NULL;
#endif
        new_args = PyTuple_GetSlice(args, 1, argc);
        if (unlikely(!new_args))
            return NULL;
        self = PyTuple_GetItem(args, 0);
        if (unlikely(!self)) {
            Py_DECREF(new_args);
#if PY_MAJOR_VERSION > 2
            PyErr_Format(PyExc_TypeError,
                         "unbound method %.200S() needs an argument",
                         cyfunc->func_qualname);
#else
            PyErr_SetString(PyExc_TypeError,
                            "unbound method needs an argument");
#endif
            return NULL;
        }
        result = __Pyx_CyFunction_CallMethod(func, self, new_args, kw);
        Py_DECREF(new_args);
    } else {
        result = __Pyx_CyFunction_Call(func, args, kw);
    }
    return result;
}
#if CYTHON_METH_FASTCALL
static CYTHON_INLINE int __Pyx_CyFunction_Vectorcall_CheckArgs(__pyx_CyFunctionObject *cyfunc, Py_ssize_t nargs, PyObject *kwnames)
{
    int ret = 0;
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        if (unlikely(nargs < 1)) {
            PyErr_Format(PyExc_TypeError, "%.200s() needs an argument",
                         ((PyCFunctionObject*)cyfunc)->m_ml->ml_name);
            return -1;
        }
        ret = 1;
    }
    if (unlikely(kwnames) && unlikely(PyTuple_GET_SIZE(kwnames))) {
        PyErr_Format(PyExc_TypeError,
                     "%.200s() takes no keyword arguments", ((PyCFunctionObject*)cyfunc)->m_ml->ml_name);
        return -1;
    }
    return ret;
}
static PyObject * __Pyx_CyFunction_Vectorcall_NOARGS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, kwnames)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    if (unlikely(nargs != 0)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
            def->ml_name, nargs);
        return NULL;
    }
    return def->ml_meth(self, NULL);
}
static PyObject * __Pyx_CyFunction_Vectorcall_O(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, kwnames)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    if (unlikely(nargs != 1)) {
        PyErr_Format(PyExc_TypeError,
            "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
            def->ml_name, nargs);
        return NULL;
    }
    return def->ml_meth(self, args[0]);
}
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, NULL)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    return ((__Pyx_PyCFunctionFastWithKeywords)(void(*)(void))def->ml_meth)(self, args, nargs, kwnames);
}
static PyObject * __Pyx_CyFunction_Vectorcall_FASTCALL_KEYWORDS_METHOD(PyObject *func, PyObject *const *args, size_t nargsf, PyObject *kwnames)
{
    __pyx_CyFunctionObject *cyfunc = (__pyx_CyFunctionObject *)func;
    PyMethodDef* def = ((PyCFunctionObject*)cyfunc)->m_ml;
    PyTypeObject *cls = (PyTypeObject *) __Pyx_CyFunction_GetClassObj(cyfunc);
#if CYTHON_BACKPORT_VECTORCALL
    Py_ssize_t nargs = (Py_ssize_t)nargsf;
#else
    Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
#endif
    PyObject *self;
    switch (__Pyx_CyFunction_Vectorcall_CheckArgs(cyfunc, nargs, NULL)) {
    case 1:
        self = args[0];
        args += 1;
        nargs -= 1;
        break;
    case 0:
        self = ((PyCFunctionObject*)cyfunc)->m_self;
        break;
    default:
        return NULL;
    }
    return ((__Pyx_PyCMethod)(void(*)(void))def->ml_meth)(self, cls, args, (size_t)nargs, kwnames);
}
#endif
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_CyFunctionType_slots[] = {
    {Py_tp_dealloc, (void *)__Pyx_CyFunction_dealloc},
    {Py_tp_repr, (void *)__Pyx_CyFunction_repr},
    {Py_tp_call, (void *)__Pyx_CyFunction_CallAsMethod},
    {Py_tp_traverse, (void *)__Pyx_CyFunction_traverse},
    {Py_tp_clear, (void *)__Pyx_CyFunction_clear},
    {Py_tp_methods, (void *)__pyx_CyFunction_methods},
    {Py_tp_members, (void *)__pyx_CyFunction_members},
    {Py_tp_getset, (void *)__pyx_CyFunction_getsets},
    {Py_tp_descr_get, (void *)__Pyx_PyMethod_New},
    {0, 0},
};
static PyType_Spec __pyx_CyFunctionType_spec = {
    __PYX_TYPE_MODULE_PREFIX "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
#ifdef Py_TPFLAGS_METHOD_DESCRIPTOR
    Py_TPFLAGS_METHOD_DESCRIPTOR |
#endif
#if (defined(_Py_TPFLAGS_HAVE_VECTORCALL) && CYTHON_METH_FASTCALL)
    _Py_TPFLAGS_HAVE_VECTORCALL |
#endif
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_BASETYPE,
    __pyx_CyFunctionType_slots
};
#else
static PyTypeObject __pyx_CyFunctionType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    __PYX_TYPE_MODULE_PREFIX "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
    (destructor) __Pyx_CyFunction_dealloc,
#if !CYTHON_METH_FASTCALL
    0,
#elif CYTHON_BACKPORT_VECTORCALL
    (printfunc)offsetof(__pyx_CyFunctionObject, func_vectorcall),
#else
    offsetof(PyCFunctionObject, vectorcall),
#endif
    0,
    0,
#if PY_MAJOR_VERSION < 3
    0,
#else
    0,
#endif
    (reprfunc) __Pyx_CyFunction_repr,
    0,
    0,
    0,
    0,
    __Pyx_CyFunction_CallAsMethod,
    0,
    0,
    0,
    0,
#ifdef Py_TPFLAGS_METHOD_DESCRIPTOR
    Py_TPFLAGS_METHOD_DESCRIPTOR |
#endif
#if defined(_Py_TPFLAGS_HAVE_VECTORCALL) && CYTHON_METH_FASTCALL
    _Py_TPFLAGS_HAVE_VECTORCALL |
#endif
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_BASETYPE,
    0,
    (traverseproc) __Pyx_CyFunction_traverse,
    (inquiry) __Pyx_CyFunction_clear,
    0,
#if PY_VERSION_HEX < 0x030500A0
    offsetof(__pyx_CyFunctionObject, func_weakreflist),
#else
    offsetof(PyCFunctionObject, m_weakreflist),
#endif
    0,
    0,
    __pyx_CyFunction_methods,
    __pyx_CyFunction_members,
    __pyx_CyFunction_getsets,
    0,
    0,
    __Pyx_PyMethod_New,
    0,
    offsetof(__pyx_CyFunctionObject, func_dict),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
#if PY_VERSION_HEX >= 0x030400a1
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
    0,
#endif
#if __PYX_NEED_TP_PRINT_SLOT
    0,
#endif
#if PY_VERSION_HEX >= 0x030C0000
    0,
#endif
#if PY_VERSION_HEX >= 0x030d00A4
    0,
#endif
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000 && PY_VERSION_HEX < 0x030a0000
    0,
#endif
};
#endif
static int __pyx_CyFunction_init(PyObject *module) {
#if CYTHON_USE_TYPE_SPECS
    __pyx_CyFunctionType = __Pyx_FetchCommonTypeFromSpec(module, &__pyx_CyFunctionType_spec, NULL);
#else
    CYTHON_UNUSED_VAR(module);
    __pyx_CyFunctionType = __Pyx_FetchCommonType(&__pyx_CyFunctionType_type);
#endif
    if (unlikely(__pyx_CyFunctionType == NULL)) {
        return -1;
    }
    return 0;
}
static CYTHON_INLINE void *__Pyx_CyFunction_InitDefaults(PyObject *func, size_t size, int pyobjects) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults = PyObject_Malloc(size);
    if (unlikely(!m->defaults))
        return PyErr_NoMemory();
    memset(m->defaults, 0, size);
    m->defaults_pyobjects = pyobjects;
    m->defaults_size = size;
    return m->defaults;
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject *func, PyObject *tuple) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_tuple = tuple;
    Py_INCREF(tuple);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->defaults_kwdict = dict;
    Py_INCREF(dict);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject *func, PyObject *dict) {
    __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *) func;
    m->func_annotations = dict;
    Py_INCREF(dict);
}

/* CythonFunction */
static PyObject *__Pyx_CyFunction_New(PyMethodDef *ml, int flags, PyObject* qualname,
                                      PyObject *closure, PyObject *module, PyObject* globals, PyObject* code) {
    PyObject *op = __Pyx_CyFunction_Init(
        PyObject_GC_New(__pyx_CyFunctionObject, __pyx_CyFunctionType),
        ml, flags, qualname, closure, module, globals, code
    );
    if (likely(op)) {
        PyObject_GC_Track(op);
    }
    return op;
}

/* CalculateMetaclass */
static PyObject *__Pyx_CalculateMetaclass(PyTypeObject *metaclass, PyObject *bases) {
    Py_ssize_t i, nbases;
#if CYTHON_ASSUME_SAFE_MACROS
    nbases = PyTuple_GET_SIZE(bases);
#else
    nbases = PyTuple_Size(bases);
    if (nbases < 0) return NULL;
#endif
    for (i=0; i < nbases; i++) {
        PyTypeObject *tmptype;
#if CYTHON_ASSUME_SAFE_MACROS
        PyObject *tmp = PyTuple_GET_ITEM(bases, i);
#else
        PyObject *tmp = PyTuple_GetItem(bases, i);
        if (!tmp) return NULL;
#endif
        tmptype = Py_TYPE(tmp);
#if PY_MAJOR_VERSION < 3
        if (tmptype == &PyClass_Type)
            continue;
#endif
        if (!metaclass) {
            metaclass = tmptype;
            continue;
        }
        if (PyType_IsSubtype(metaclass, tmptype))
            continue;
        if (PyType_IsSubtype(tmptype, metaclass)) {
            metaclass = tmptype;
            continue;
        }
        PyErr_SetString(PyExc_TypeError,
                        "metaclass conflict: "
                        "the metaclass of a derived class "
                        "must be a (non-strict) subclass "
                        "of the metaclasses of all its bases");
        return NULL;
    }
    if (!metaclass) {
#if PY_MAJOR_VERSION < 3
        metaclass = &PyClass_Type;
#else
        metaclass = &PyType_Type;
#endif
    }
    Py_INCREF((PyObject*) metaclass);
    return (PyObject*) metaclass;
}

/* PyObjectCall2Args */
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args[3] = {NULL, arg1, arg2};
    return __Pyx_PyObject_FastCall(function, args+1, 2 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

/* Py3ClassCreate */
static PyObject *__Pyx_Py3MetaclassPrepare(PyObject *metaclass, PyObject *bases, PyObject *name,
                                           PyObject *qualname, PyObject *mkw, PyObject *modname, PyObject *doc) {
    PyObject *ns;
    if (metaclass) {
        PyObject *prep = __Pyx_PyObject_GetAttrStrNoError(metaclass, __pyx_n_s_prepare);
        if (prep) {
            PyObject *pargs[3] = {NULL, name, bases};
            ns = __Pyx_PyObject_FastCallDict(prep, pargs+1, 2 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET, mkw);
            Py_DECREF(prep);
        } else {
            if (unlikely(PyErr_Occurred()))
                return NULL;
            ns = PyDict_New();
        }
    } else {
        ns = PyDict_New();
    }
    if (unlikely(!ns))
        return NULL;
    if (unlikely(PyObject_SetItem(ns, __pyx_n_s_module, modname) < 0)) goto bad;
#if PY_VERSION_HEX >= 0x03030000
    if (unlikely(PyObject_SetItem(ns, __pyx_n_s_qualname, qualname) < 0)) goto bad;
#else
    CYTHON_MAYBE_UNUSED_VAR(qualname);
#endif
    if (unlikely(doc && PyObject_SetItem(ns, __pyx_n_s_doc, doc) < 0)) goto bad;
    return ns;
bad:
    Py_DECREF(ns);
    return NULL;
}
#if PY_VERSION_HEX < 0x030600A4 && CYTHON_PEP487_INIT_SUBCLASS
static int __Pyx_SetNamesPEP487(PyObject *type_obj) {
    PyTypeObject *type = (PyTypeObject*) type_obj;
    PyObject *names_to_set, *key, *value, *set_name, *tmp;
    Py_ssize_t i = 0;
#if CYTHON_USE_TYPE_SLOTS
    names_to_set = PyDict_Copy(type->tp_dict);
#else
    {
        PyObject *d = PyObject_GetAttr(type_obj, __pyx_n_s_dict);
        names_to_set = NULL;
        if (likely(d)) {
            PyObject *names_to_set = PyDict_New();
            int ret = likely(names_to_set) ? PyDict_Update(names_to_set, d) : -1;
            Py_DECREF(d);
            if (unlikely(ret < 0))
                Py_CLEAR(names_to_set);
        }
    }
#endif
    if (unlikely(names_to_set == NULL))
        goto bad;
    while (PyDict_Next(names_to_set, &i, &key, &value)) {
        set_name = __Pyx_PyObject_LookupSpecialNoError(value, __pyx_n_s_set_name);
        if (unlikely(set_name != NULL)) {
            tmp = __Pyx_PyObject_Call2Args(set_name, type_obj, key);
            Py_DECREF(set_name);
            if (unlikely(tmp == NULL)) {
                __Pyx_TypeName value_type_name =
                    __Pyx_PyType_GetName(Py_TYPE(value));
                __Pyx_TypeName type_name = __Pyx_PyType_GetName(type);
                PyErr_Format(PyExc_RuntimeError,
#if PY_MAJOR_VERSION >= 3
                    "Error calling __set_name__ on '" __Pyx_FMT_TYPENAME "' instance %R " "in '" __Pyx_FMT_TYPENAME "'",
                    value_type_name, key, type_name);
#else
                    "Error calling __set_name__ on '" __Pyx_FMT_TYPENAME "' instance %.100s in '" __Pyx_FMT_TYPENAME "'",
                    value_type_name,
                    PyString_Check(key) ? PyString_AS_STRING(key) : "?",
                    type_name);
#endif
                goto bad;
            } else {
                Py_DECREF(tmp);
            }
        }
        else if (unlikely(PyErr_Occurred())) {
            goto bad;
        }
    }
    Py_DECREF(names_to_set);
    return 0;
bad:
    Py_XDECREF(names_to_set);
    return -1;
}
static PyObject *__Pyx_InitSubclassPEP487(PyObject *type_obj, PyObject *mkw) {
#if CYTHON_USE_TYPE_SLOTS && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    PyTypeObject *type = (PyTypeObject*) type_obj;
    PyObject *mro = type->tp_mro;
    Py_ssize_t i, nbases;
    if (unlikely(!mro)) goto done;
    (void) &__Pyx_GetBuiltinName;
    Py_INCREF(mro);
    nbases = PyTuple_GET_SIZE(mro);
    assert(PyTuple_GET_ITEM(mro, 0) == type_obj);
    for (i = 1; i < nbases-1; i++) {
        PyObject *base, *dict, *meth;
        base = PyTuple_GET_ITEM(mro, i);
        dict = ((PyTypeObject *)base)->tp_dict;
        meth = __Pyx_PyDict_GetItemStrWithError(dict, __pyx_n_s_init_subclass);
        if (unlikely(meth)) {
            descrgetfunc f = Py_TYPE(meth)->tp_descr_get;
            PyObject *res;
            Py_INCREF(meth);
            if (likely(f)) {
                res = f(meth, NULL, type_obj);
                Py_DECREF(meth);
                if (unlikely(!res)) goto bad;
                meth = res;
            }
            res = __Pyx_PyObject_FastCallDict(meth, NULL, 0, mkw);
            Py_DECREF(meth);
            if (unlikely(!res)) goto bad;
            Py_DECREF(res);
            goto done;
        } else if (unlikely(PyErr_Occurred())) {
            goto bad;
        }
    }
done:
    Py_XDECREF(mro);
    return type_obj;
bad:
    Py_XDECREF(mro);
    Py_DECREF(type_obj);
    return NULL;
#else
    PyObject *super_type, *super, *func, *res;
#if CYTHON_COMPILING_IN_PYPY && !defined(PySuper_Type)
    super_type = __Pyx_GetBuiltinName(__pyx_n_s_super);
#else
    super_type = (PyObject*) &PySuper_Type;
    (void) &__Pyx_GetBuiltinName;
#endif
    super = likely(super_type) ? __Pyx_PyObject_Call2Args(super_type, type_obj, type_obj) : NULL;
#if CYTHON_COMPILING_IN_PYPY && !defined(PySuper_Type)
    Py_XDECREF(super_type);
#endif
    if (unlikely(!super)) {
        Py_CLEAR(type_obj);
        goto done;
    }
    func = __Pyx_PyObject_GetAttrStrNoError(super, __pyx_n_s_init_subclass);
    Py_DECREF(super);
    if (likely(!func)) {
        if (unlikely(PyErr_Occurred()))
            Py_CLEAR(type_obj);
        goto done;
    }
    res = __Pyx_PyObject_FastCallDict(func, NULL, 0, mkw);
    Py_DECREF(func);
    if (unlikely(!res))
        Py_CLEAR(type_obj);
    Py_XDECREF(res);
done:
    return type_obj;
#endif
}
#endif
static PyObject *__Pyx_Py3ClassCreate(PyObject *metaclass, PyObject *name, PyObject *bases,
                                      PyObject *dict, PyObject *mkw,
                                      int calculate_metaclass, int allow_py2_metaclass) {
    PyObject *result;
    PyObject *owned_metaclass = NULL;
    PyObject *margs[4] = {NULL, name, bases, dict};
    if (allow_py2_metaclass) {
        owned_metaclass = PyObject_GetItem(dict, __pyx_n_s_metaclass);
        if (owned_metaclass) {
            metaclass = owned_metaclass;
        } else if (likely(PyErr_ExceptionMatches(PyExc_KeyError))) {
            PyErr_Clear();
        } else {
            return NULL;
        }
    }
    if (calculate_metaclass && (!metaclass || PyType_Check(metaclass))) {
        metaclass = __Pyx_CalculateMetaclass((PyTypeObject*) metaclass, bases);
        Py_XDECREF(owned_metaclass);
        if (unlikely(!metaclass))
            return NULL;
        owned_metaclass = metaclass;
    }
    result = __Pyx_PyObject_FastCallDict(metaclass, margs+1, 3 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET,
#if PY_VERSION_HEX < 0x030600A4
        (metaclass == (PyObject*)&PyType_Type) ? NULL : mkw
#else
        mkw
#endif
    );
    Py_XDECREF(owned_metaclass);
#if PY_VERSION_HEX < 0x030600A4 && CYTHON_PEP487_INIT_SUBCLASS
    if (likely(result) && likely(PyType_Check(result))) {
        if (unlikely(__Pyx_SetNamesPEP487(result) < 0)) {
            Py_CLEAR(result);
        } else {
            result = __Pyx_InitSubclassPEP487(result, mkw);
        }
    }
#else
    (void) &__Pyx_GetBuiltinName;
#endif
    return result;
}

/* Py3UpdateBases */
static PyObject*
__Pyx_PEP560_update_bases(PyObject *bases)
{
    Py_ssize_t i, j, size_bases;
    PyObject *base, *meth, *new_base, *result, *new_bases = NULL;
    size_bases = PyTuple_GET_SIZE(bases);
    for (i = 0; i < size_bases; i++) {
        base  = PyTuple_GET_ITEM(bases, i);
        if (PyType_Check(base)) {
            if (new_bases) {
                if (PyList_Append(new_bases, base) < 0) {
                    goto error;
                }
            }
            continue;
        }
        meth = __Pyx_PyObject_GetAttrStrNoError(base, __pyx_n_s_mro_entries);
        if (!meth && PyErr_Occurred()) {
            goto error;
        }
        if (!meth) {
            if (new_bases) {
                if (PyList_Append(new_bases, base) < 0) {
                    goto error;
                }
            }
            continue;
        }
        new_base = __Pyx_PyObject_CallOneArg(meth, bases);
        Py_DECREF(meth);
        if (!new_base) {
            goto error;
        }
        if (!PyTuple_Check(new_base)) {
            PyErr_SetString(PyExc_TypeError,
                            "__mro_entries__ must return a tuple");
            Py_DECREF(new_base);
            goto error;
        }
        if (!new_bases) {
            if (!(new_bases = PyList_New(i))) {
                goto error;
            }
            for (j = 0; j < i; j++) {
                base = PyTuple_GET_ITEM(bases, j);
                PyList_SET_ITEM(new_bases, j, base);
                Py_INCREF(base);
            }
        }
        j = PyList_GET_SIZE(new_bases);
        if (PyList_SetSlice(new_bases, j, j, new_base) < 0) {
            goto error;
        }
        Py_DECREF(new_base);
    }
    if (!new_bases) {
        Py_INCREF(bases);
        return bases;
    }
    result = PyList_AsTuple(new_bases);
    Py_DECREF(new_bases);
    return result;
error:
    Py_XDECREF(new_bases);
    return NULL;
}

/* CyFunctionClassCell */
static int __Pyx_CyFunction_InitClassCell(PyObject *cyfunctions, PyObject *classobj) {
    Py_ssize_t i, count = PyList_GET_SIZE(cyfunctions);
    for (i = 0; i < count; i++) {
        __pyx_CyFunctionObject *m = (__pyx_CyFunctionObject *)
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            PyList_GET_ITEM(cyfunctions, i);
#else
            PySequence_ITEM(cyfunctions, i);
        if (unlikely(!m))
            return -1;
#endif
        __Pyx_CyFunction_SetClassObj(m, classobj);
#if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
        Py_DECREF((PyObject*)m);
#endif
    }
    return 0;
}

/* CLineInTraceback */
#ifndef CYTHON_CLINE_IN_TRACEBACK
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line) {
    PyObject *use_cline;
    PyObject *ptype, *pvalue, *ptraceback;
#if CYTHON_COMPILING_IN_CPYTHON
    PyObject **cython_runtime_dict;
#endif
    CYTHON_MAYBE_UNUSED_VAR(tstate);
    if (unlikely(!__pyx_cython_runtime)) {
        return c_line;
    }
    __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
#if CYTHON_COMPILING_IN_CPYTHON
    cython_runtime_dict = _PyObject_GetDictPtr(__pyx_cython_runtime);
    if (likely(cython_runtime_dict)) {
        __PYX_PY_DICT_LOOKUP_IF_MODIFIED(
            use_cline, *cython_runtime_dict,
            __Pyx_PyDict_GetItemStr(*cython_runtime_dict, __pyx_n_s_cline_in_traceback))
    } else
#endif
    {
      PyObject *use_cline_obj = __Pyx_PyObject_GetAttrStrNoError(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback);
      if (use_cline_obj) {
        use_cline = PyObject_Not(use_cline_obj) ? Py_False : Py_True;
        Py_DECREF(use_cline_obj);
      } else {
        PyErr_Clear();
        use_cline = NULL;
      }
    }
    if (!use_cline) {
        c_line = 0;
        (void) PyObject_SetAttr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback, Py_False);
    }
    else if (use_cline == Py_False || (use_cline != Py_True && PyObject_Not(use_cline) != 0)) {
        c_line = 0;
    }
    __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
    return c_line;
}
#endif

/* CodeObjectCache */
#if !CYTHON_COMPILING_IN_LIMITED_API
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
    int start = 0, mid = 0, end = count - 1;
    if (end >= 0 && code_line > entries[end].code_line) {
        return count;
    }
    while (start < end) {
        mid = start + (end - start) / 2;
        if (code_line < entries[mid].code_line) {
            end = mid;
        } else if (code_line > entries[mid].code_line) {
             start = mid + 1;
        } else {
            return mid;
        }
    }
    if (code_line <= entries[mid].code_line) {
        return mid;
    } else {
        return mid + 1;
    }
}
static PyCodeObject *__pyx_find_code_object(int code_line) {
    PyCodeObject* code_object;
    int pos;
    if (unlikely(!code_line) || unlikely(!__pyx_code_cache.entries)) {
        return NULL;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if (unlikely(pos >= __pyx_code_cache.count) || unlikely(__pyx_code_cache.entries[pos].code_line != code_line)) {
        return NULL;
    }
    code_object = __pyx_code_cache.entries[pos].code_object;
    Py_INCREF(code_object);
    return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
    int pos, i;
    __Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
    if (unlikely(!code_line)) {
        return;
    }
    if (unlikely(!entries)) {
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64*sizeof(__Pyx_CodeObjectCacheEntry));
        if (likely(entries)) {
            __pyx_code_cache.entries = entries;
            __pyx_code_cache.max_count = 64;
            __pyx_code_cache.count = 1;
            entries[0].code_line = code_line;
            entries[0].code_object = code_object;
            Py_INCREF(code_object);
        }
        return;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if ((pos < __pyx_code_cache.count) && unlikely(__pyx_code_cache.entries[pos].code_line == code_line)) {
        PyCodeObject* tmp = entries[pos].code_object;
        entries[pos].code_object = code_object;
        Py_DECREF(tmp);
        return;
    }
    if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
        int new_max = __pyx_code_cache.max_count + 64;
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
            __pyx_code_cache.entries, ((size_t)new_max) * sizeof(__Pyx_CodeObjectCacheEntry));
        if (unlikely(!entries)) {
            return;
        }
        __pyx_code_cache.entries = entries;
        __pyx_code_cache.max_count = new_max;
    }
    for (i=__pyx_code_cache.count; i>pos; i--) {
        entries[i] = entries[i-1];
    }
    entries[pos].code_line = code_line;
    entries[pos].code_object = code_object;
    __pyx_code_cache.count++;
    Py_INCREF(code_object);
}
#endif

/* AddTraceback */
#include "compile.h"
#include "frameobject.h"
#include "traceback.h"
#if PY_VERSION_HEX >= 0x030b00a6 && !CYTHON_COMPILING_IN_LIMITED_API && !defined(PYPY_VERSION)
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *__Pyx_PyCode_Replace_For_AddTraceback(PyObject *code, PyObject *scratch_dict,
                                                       PyObject *firstlineno, PyObject *name) {
    PyObject *replace = NULL;
    if (unlikely(PyDict_SetItemString(scratch_dict, "co_firstlineno", firstlineno))) return NULL;
    if (unlikely(PyDict_SetItemString(scratch_dict, "co_name", name))) return NULL;
    replace = PyObject_GetAttrString(code, "replace");
    if (likely(replace)) {
        PyObject *result;
        result = PyObject_Call(replace, __pyx_empty_tuple, scratch_dict);
        Py_DECREF(replace);
        return result;
    }
    PyErr_Clear();
    #if __PYX_LIMITED_VERSION_HEX < 0x030780000
    {
        PyObject *compiled = NULL, *result = NULL;
        if (unlikely(PyDict_SetItemString(scratch_dict, "code", code))) return NULL;
        if (unlikely(PyDict_SetItemString(scratch_dict, "type", (PyObject*)(&PyType_Type)))) return NULL;
        compiled = Py_CompileString(
            "out = type(code)(\n"
            "  code.co_argcount, code.co_kwonlyargcount, code.co_nlocals, code.co_stacksize,\n"
            "  code.co_flags, code.co_code, code.co_consts, code.co_names,\n"
            "  code.co_varnames, code.co_filename, co_name, co_firstlineno,\n"
            "  code.co_lnotab)\n", "<dummy>", Py_file_input);
        if (!compiled) return NULL;
        result = PyEval_EvalCode(compiled, scratch_dict, scratch_dict);
        Py_DECREF(compiled);
        if (!result) PyErr_Print();
        Py_DECREF(result);
        result = PyDict_GetItemString(scratch_dict, "out");
        if (result) Py_INCREF(result);
        return result;
    }
    #else
    return NULL;
    #endif
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyObject *code_object = NULL, *py_py_line = NULL, *py_funcname = NULL, *dict = NULL;
    PyObject *replace = NULL, *getframe = NULL, *frame = NULL;
    PyObject *exc_type, *exc_value, *exc_traceback;
    int success = 0;
    if (c_line) {
        (void) __pyx_cfilenm;
        (void) __Pyx_CLineForTraceback(__Pyx_PyThreadState_Current, c_line);
    }
    PyErr_Fetch(&exc_type, &exc_value, &exc_traceback);
    code_object = Py_CompileString("_getframe()", filename, Py_eval_input);
    if (unlikely(!code_object)) goto bad;
    py_py_line = PyLong_FromLong(py_line);
    if (unlikely(!py_py_line)) goto bad;
    py_funcname = PyUnicode_FromString(funcname);
    if (unlikely(!py_funcname)) goto bad;
    dict = PyDict_New();
    if (unlikely(!dict)) goto bad;
    {
        PyObject *old_code_object = code_object;
        code_object = __Pyx_PyCode_Replace_For_AddTraceback(code_object, dict, py_py_line, py_funcname);
        Py_DECREF(old_code_object);
    }
    if (unlikely(!code_object)) goto bad;
    getframe = PySys_GetObject("_getframe");
    if (unlikely(!getframe)) goto bad;
    if (unlikely(PyDict_SetItemString(dict, "_getframe", getframe))) goto bad;
    frame = PyEval_EvalCode(code_object, dict, dict);
    if (unlikely(!frame) || frame == Py_None) goto bad;
    success = 1;
  bad:
    PyErr_Restore(exc_type, exc_value, exc_traceback);
    Py_XDECREF(code_object);
    Py_XDECREF(py_py_line);
    Py_XDECREF(py_funcname);
    Py_XDECREF(dict);
    Py_XDECREF(replace);
    if (success) {
        PyTraceBack_Here(
            (struct _frame*)frame);
    }
    Py_XDECREF(frame);
}
#else
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
            const char *funcname, int c_line,
            int py_line, const char *filename) {
    PyCodeObject *py_code = NULL;
    PyObject *py_funcname = NULL;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_srcfile = NULL;
    py_srcfile = PyString_FromString(filename);
    if (!py_srcfile) goto bad;
    #endif
    if (c_line) {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        #else
        py_funcname = PyUnicode_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        funcname = PyUnicode_AsUTF8(py_funcname);
        if (!funcname) goto bad;
        #endif
    }
    else {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromString(funcname);
        if (!py_funcname) goto bad;
        #endif
    }
    #if PY_MAJOR_VERSION < 3
    py_code = __Pyx_PyCode_New(
        0,
        0,
        0,
        0,
        0,
        0,
        __pyx_empty_bytes, /*PyObject *code,*/
        __pyx_empty_tuple, /*PyObject *consts,*/
        __pyx_empty_tuple, /*PyObject *names,*/
        __pyx_empty_tuple, /*PyObject *varnames,*/
        __pyx_empty_tuple, /*PyObject *freevars,*/
        __pyx_empty_tuple, /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        py_line,
        __pyx_empty_bytes  /*PyObject *lnotab*/
    );
    Py_DECREF(py_srcfile);
    #else
    py_code = PyCode_NewEmpty(filename, funcname, py_line);
    #endif
    Py_XDECREF(py_funcname);
    return py_code;
bad:
    Py_XDECREF(py_funcname);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_srcfile);
    #endif
    return NULL;
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject *ptype, *pvalue, *ptraceback;
    if (c_line) {
        c_line = __Pyx_CLineForTraceback(tstate, c_line);
    }
    py_code = __pyx_find_code_object(c_line ? -c_line : py_line);
    if (!py_code) {
        __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
        py_code = __Pyx_CreateCodeObjectForTraceback(
            funcname, c_line, py_line, filename);
        if (!py_code) {
            /* If the code object creation fails, then we should clear the
               fetched exception references and propagate the new exception */
            Py_XDECREF(ptype);
            Py_XDECREF(pvalue);
            Py_XDECREF(ptraceback);
            goto bad;
        }
        __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
        __pyx_insert_code_object(c_line ? -c_line : py_line, py_code);
    }
    py_frame = PyFrame_New(
        tstate,            /*PyThreadState *tstate,*/
        py_code,           /*PyCodeObject *code,*/
        __pyx_d,    /*PyObject *globals,*/
        0                  /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    __Pyx_PyFrame_SetLineNumber(py_frame, py_line);
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
#endif

/* MainFunction */
#ifdef __FreeBSD__
#include <floatingpoint.h>
#endif
#if PY_MAJOR_VERSION < 3
int main(int argc, char** argv)
#elif defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS)
int wmain(int argc, wchar_t **argv)
#else
static int __Pyx_main(int argc, wchar_t **argv)
#endif
{
    /* 754 requires that FP exceptions run in "no stop" mode by default,
     * and until C vendors implement C99's ways to control FP exceptions,
     * Python requires non-stop mode.  Alas, some platforms enable FP
     * exceptions by default.  Here we disable them.
     */
#ifdef __FreeBSD__
    fp_except_t m;
    m = fpgetmask();
    fpsetmask(m & ~FP_X_OFL);
#endif
#if PY_VERSION_HEX < 0x03080000
    if (argc && argv)
        Py_SetProgramName(argv[0]);
#endif
    #if PY_MAJOR_VERSION < 3
    if (PyImport_AppendInittab("zorya", initzorya) < 0) return 1;
    #else
    if (PyImport_AppendInittab("zorya", PyInit_zorya) < 0) return 1;
    #endif
#if PY_VERSION_HEX < 0x03080000
    Py_Initialize();
    if (argc && argv)
        PySys_SetArgv(argc, argv);
#else
    {
        PyStatus status;
        PyConfig config;
        PyConfig_InitPythonConfig(&config);
        config.parse_argv = 0;
        if (argc && argv) {
            status = PyConfig_SetString(&config, &config.program_name, argv[0]);
            if (PyStatus_Exception(status)) {
                PyConfig_Clear(&config);
                return 1;
            }
            status = PyConfig_SetArgv(&config, argc, argv);
            if (PyStatus_Exception(status)) {
                PyConfig_Clear(&config);
                return 1;
            }
        }
        status = Py_InitializeFromConfig(&config);
        if (PyStatus_Exception(status)) {
            PyConfig_Clear(&config);
            return 1;
        }
        PyConfig_Clear(&config);
    }
#endif
    {
      PyObject* m = NULL;
      __pyx_module_is_main_zorya = 1;
      m = PyImport_ImportModule("zorya");
      if (!m && PyErr_Occurred()) {
          PyErr_Print();
          #if PY_MAJOR_VERSION < 3
          if (Py_FlushLine()) PyErr_Clear();
          #endif
          return 1;
      }
      Py_XDECREF(m);
    }
#if PY_VERSION_HEX < 0x03060000
    Py_Finalize();
#else
    if (Py_FinalizeEx() < 0)
        return 2;
#endif
    return 0;
}
#if PY_MAJOR_VERSION >= 3 && !defined(_WIN32) && !defined(WIN32) && !defined(MS_WINDOWS)
#include <locale.h>
#if PY_VERSION_HEX < 0x03050000
static wchar_t*
__Pyx_char2wchar(char* arg)
{
    wchar_t *res;
#ifdef HAVE_BROKEN_MBSTOWCS
    /* Some platforms have a broken implementation of
     * mbstowcs which does not count the characters that
     * would result from conversion.  Use an upper bound.
     */
    size_t argsize = strlen(arg);
#else
    size_t argsize = mbstowcs(NULL, arg, 0);
#endif
    size_t count;
    unsigned char *in;
    wchar_t *out;
#ifdef HAVE_MBRTOWC
    mbstate_t mbs;
#endif
    if (argsize != (size_t)-1) {
        res = (wchar_t *)malloc((argsize+1)*sizeof(wchar_t));
        if (!res)
            goto oom;
        count = mbstowcs(res, arg, argsize+1);
        if (count != (size_t)-1) {
            wchar_t *tmp;
            /* Only use the result if it contains no
               surrogate characters. */
            for (tmp = res; *tmp != 0 &&
                     (*tmp < 0xd800 || *tmp > 0xdfff); tmp++)
                ;
            if (*tmp == 0)
                return res;
        }
        free(res);
    }
#ifdef HAVE_MBRTOWC
    /* Overallocate; as multi-byte characters are in the argument, the
       actual output could use less memory. */
    argsize = strlen(arg) + 1;
    res = (wchar_t *)malloc(argsize*sizeof(wchar_t));
    if (!res) goto oom;
    in = (unsigned char*)arg;
    out = res;
    memset(&mbs, 0, sizeof mbs);
    while (argsize) {
        size_t converted = mbrtowc(out, (char*)in, argsize, &mbs);
        if (converted == 0)
            break;
        if (converted == (size_t)-2) {
            /* Incomplete character. This should never happen,
               since we provide everything that we have -
               unless there is a bug in the C library, or I
               misunderstood how mbrtowc works. */
            fprintf(stderr, "unexpected mbrtowc result -2\\n");
            free(res);
            return NULL;
        }
        if (converted == (size_t)-1) {
            /* Conversion error. Escape as UTF-8b, and start over
               in the initial shift state. */
            *out++ = 0xdc00 + *in++;
            argsize--;
            memset(&mbs, 0, sizeof mbs);
            continue;
        }
        if (*out >= 0xd800 && *out <= 0xdfff) {
            /* Surrogate character.  Escape the original
               byte sequence with surrogateescape. */
            argsize -= converted;
            while (converted--)
                *out++ = 0xdc00 + *in++;
            continue;
        }
        in += converted;
        argsize -= converted;
        out++;
    }
#else
    /* Cannot use C locale for escaping; manually escape as if charset
       is ASCII (i.e. escape all bytes > 128. This will still roundtrip
       correctly in the locale's charset, which must be an ASCII superset. */
    res = (wchar_t *)malloc((strlen(arg)+1)*sizeof(wchar_t));
    if (!res) goto oom;
    in = (unsigned char*)arg;
    out = res;
    while(*in)
        if(*in < 128)
            *out++ = *in++;
        else
            *out++ = 0xdc00 + *in++;
    *out = 0;
#endif
    return res;
oom:
    fprintf(stderr, "out of memory\\n");
    return NULL;
}
#endif
int
main(int argc, char **argv)
{
    if (!argc) {
        return __Pyx_main(0, NULL);
    }
    else {
        int i, res;
        wchar_t **argv_copy = (wchar_t **)malloc(sizeof(wchar_t*)*argc);
        wchar_t **argv_copy2 = (wchar_t **)malloc(sizeof(wchar_t*)*argc);
        char *oldloc = strdup(setlocale(LC_ALL, NULL));
        if (!argv_copy || !argv_copy2 || !oldloc) {
            fprintf(stderr, "out of memory\\n");
            free(argv_copy);
            free(argv_copy2);
            free(oldloc);
            return 1;
        }
        res = 0;
        setlocale(LC_ALL, "");
        for (i = 0; i < argc; i++) {
            argv_copy2[i] = argv_copy[i] =
#if PY_VERSION_HEX < 0x03050000
                __Pyx_char2wchar(argv[i]);
#else
                Py_DecodeLocale(argv[i], NULL);
#endif
            if (!argv_copy[i]) res = 1;
        }
        setlocale(LC_ALL, oldloc);
        free(oldloc);
        if (res == 0)
            res = __Pyx_main(argc, argv_copy);
        for (i = 0; i < argc; i++) {
#if PY_VERSION_HEX < 0x03050000
            free(argv_copy2[i]);
#else
            PyMem_RawFree(argv_copy2[i]);
#endif
        }
        free(argv_copy);
        free(argv_copy2);
        return res;
    }
}
#endif

/* CIntToPy */
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
    if (is_unsigned) {
        if (sizeof(long) < sizeof(long)) {
            return PyInt_FromLong((long) value);
        } else if (sizeof(long) <= sizeof(unsigned long)) {
            return PyLong_FromUnsignedLong((unsigned long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
            return PyLong_FromUnsignedLongLong((unsigned PY_LONG_LONG) value);
#endif
        }
    } else {
        if (sizeof(long) <= sizeof(long)) {
            return PyInt_FromLong((long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
            return PyLong_FromLongLong((PY_LONG_LONG) value);
#endif
        }
    }
    {
        unsigned char *bytes = (unsigned char *)&value;
#if !CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX >= 0x030d00A4
        if (is_unsigned) {
            return PyLong_FromUnsignedNativeBytes(bytes, sizeof(value), -1);
        } else {
            return PyLong_FromNativeBytes(bytes, sizeof(value), -1);
        }
#elif !CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030d0000
        int one = 1; int little = (int)*(unsigned char *)&one;
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
#else
        int one = 1; int little = (int)*(unsigned char *)&one;
        PyObject *from_bytes, *result = NULL;
        PyObject *py_bytes = NULL, *arg_tuple = NULL, *kwds = NULL, *order_str = NULL;
        from_bytes = PyObject_GetAttrString((PyObject*)&PyLong_Type, "from_bytes");
        if (!from_bytes) return NULL;
        py_bytes = PyBytes_FromStringAndSize((char*)bytes, sizeof(long));
        if (!py_bytes) goto limited_bad;
        order_str = PyUnicode_FromString(little ? "little" : "big");
        if (!order_str) goto limited_bad;
        arg_tuple = PyTuple_Pack(2, py_bytes, order_str);
        if (!arg_tuple) goto limited_bad;
        if (!is_unsigned) {
            kwds = PyDict_New();
            if (!kwds) goto limited_bad;
            if (PyDict_SetItemString(kwds, "signed", __Pyx_NewRef(Py_True))) goto limited_bad;
        }
        result = PyObject_Call(from_bytes, arg_tuple, kwds);
        limited_bad:
        Py_XDECREF(kwds);
        Py_XDECREF(arg_tuple);
        Py_XDECREF(order_str);
        Py_XDECREF(py_bytes);
        Py_XDECREF(from_bytes);
        return result;
#endif
    }
}

/* FormatTypeName */
#if CYTHON_COMPILING_IN_LIMITED_API
static __Pyx_TypeName
__Pyx_PyType_GetName(PyTypeObject* tp)
{
    PyObject *name = __Pyx_PyObject_GetAttrStr((PyObject *)tp,
                                               __pyx_n_s_name);
    if (unlikely(name == NULL) || unlikely(!PyUnicode_Check(name))) {
        PyErr_Clear();
        Py_XDECREF(name);
        name = __Pyx_NewRef(__pyx_n_s__51);
    }
    return name;
}
#endif

/* CIntFromPyVerify */
#define __PYX_VERIFY_RETURN_INT(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 0)
#define __PYX_VERIFY_RETURN_INT_EXC(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 1)
#define __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, exc)\
    {\
        func_type value = func_value;\
        if (sizeof(target_type) < sizeof(func_type)) {\
            if (unlikely(value != (func_type) (target_type) value)) {\
                func_type zero = 0;\
                if (exc && unlikely(value == (func_type)-1 && PyErr_Occurred()))\
                    return (target_type) -1;\
                if (is_unsigned && unlikely(value < zero))\
                    goto raise_neg_overflow;\
                else\
                    goto raise_overflow;\
            }\
        }\
        return (target_type) value;\
    }

/* CIntFromPy */
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if ((sizeof(long) < sizeof(long))) {
            __PYX_VERIFY_RETURN_INT(long, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (long) val;
        }
    }
#endif
    if (unlikely(!PyLong_Check(x))) {
        long val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (long) -1;
        val = __Pyx_PyInt_As_long(tmp);
        Py_DECREF(tmp);
        return val;
    }
    if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
        if (unlikely(__Pyx_PyLong_IsNeg(x))) {
            goto raise_neg_overflow;
        } else if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(long, __Pyx_compact_upylong, __Pyx_PyLong_CompactValueUnsigned(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_DigitCount(x)) {
                case 2:
                    if ((8 * sizeof(long) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) >= 2 * PyLong_SHIFT)) {
                            return (long) (((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(long) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) >= 3 * PyLong_SHIFT)) {
                            return (long) (((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(long) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) >= 4 * PyLong_SHIFT)) {
                            return (long) (((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
            }
        }
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A7
        if (unlikely(Py_SIZE(x) < 0)) {
            goto raise_neg_overflow;
        }
#else
        {
            int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
            if (unlikely(result < 0))
                return (long) -1;
            if (unlikely(result == 1))
                goto raise_neg_overflow;
        }
#endif
        if ((sizeof(long) <= sizeof(unsigned long))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(long) <= sizeof(unsigned PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
        }
    } else {
#if CYTHON_USE_PYLONG_INTERNALS
        if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(long, __Pyx_compact_pylong, __Pyx_PyLong_CompactValue(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_SignedDigitCount(x)) {
                case -2:
                    if ((8 * sizeof(long) - 1 > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                            return (long) (((long)-1)*(((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if ((8 * sizeof(long) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                            return (long) ((((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                            return (long) (((long)-1)*(((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(long) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                            return (long) ((((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 4 * PyLong_SHIFT)) {
                            return (long) (((long)-1)*(((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(long) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 4 * PyLong_SHIFT)) {
                            return (long) ((((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
            }
        }
#endif
        if ((sizeof(long) <= sizeof(long))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(long) <= sizeof(PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
        }
    }
    {
        long val;
        int ret = -1;
#if PY_VERSION_HEX >= 0x030d00A6 && !CYTHON_COMPILING_IN_LIMITED_API
        Py_ssize_t bytes_copied = PyLong_AsNativeBytes(
            x, &val, sizeof(val), Py_ASNATIVEBYTES_NATIVE_ENDIAN | (is_unsigned ? Py_ASNATIVEBYTES_UNSIGNED_BUFFER | Py_ASNATIVEBYTES_REJECT_NEGATIVE : 0));
        if (unlikely(bytes_copied == -1)) {
        } else if (unlikely(bytes_copied > (Py_ssize_t) sizeof(val))) {
            goto raise_overflow;
        } else {
            ret = 0;
        }
#elif PY_VERSION_HEX < 0x030d0000 && !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
        int one = 1; int is_little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&val;
        ret = _PyLong_AsByteArray((PyLongObject *)x,
                                    bytes, sizeof(val),
                                    is_little, !is_unsigned);
#else
        PyObject *v;
        PyObject *stepval = NULL, *mask = NULL, *shift = NULL;
        int bits, remaining_bits, is_negative = 0;
        int chunk_size = (sizeof(long) < 8) ? 30 : 62;
        if (likely(PyLong_CheckExact(x))) {
            v = __Pyx_NewRef(x);
        } else {
            v = PyNumber_Long(x);
            if (unlikely(!v)) return (long) -1;
            assert(PyLong_CheckExact(v));
        }
        {
            int result = PyObject_RichCompareBool(v, Py_False, Py_LT);
            if (unlikely(result < 0)) {
                Py_DECREF(v);
                return (long) -1;
            }
            is_negative = result == 1;
        }
        if (is_unsigned && unlikely(is_negative)) {
            Py_DECREF(v);
            goto raise_neg_overflow;
        } else if (is_negative) {
            stepval = PyNumber_Invert(v);
            Py_DECREF(v);
            if (unlikely(!stepval))
                return (long) -1;
        } else {
            stepval = v;
        }
        v = NULL;
        val = (long) 0;
        mask = PyLong_FromLong((1L << chunk_size) - 1); if (unlikely(!mask)) goto done;
        shift = PyLong_FromLong(chunk_size); if (unlikely(!shift)) goto done;
        for (bits = 0; bits < (int) sizeof(long) * 8 - chunk_size; bits += chunk_size) {
            PyObject *tmp, *digit;
            long idigit;
            digit = PyNumber_And(stepval, mask);
            if (unlikely(!digit)) goto done;
            idigit = PyLong_AsLong(digit);
            Py_DECREF(digit);
            if (unlikely(idigit < 0)) goto done;
            val |= ((long) idigit) << bits;
            tmp = PyNumber_Rshift(stepval, shift);
            if (unlikely(!tmp)) goto done;
            Py_DECREF(stepval); stepval = tmp;
        }
        Py_DECREF(shift); shift = NULL;
        Py_DECREF(mask); mask = NULL;
        {
            long idigit = PyLong_AsLong(stepval);
            if (unlikely(idigit < 0)) goto done;
            remaining_bits = ((int) sizeof(long) * 8) - bits - (is_unsigned ? 0 : 1);
            if (unlikely(idigit >= (1L << remaining_bits)))
                goto raise_overflow;
            val |= ((long) idigit) << bits;
        }
        if (!is_unsigned) {
            if (unlikely(val & (((long) 1) << (sizeof(long) * 8 - 1))))
                goto raise_overflow;
            if (is_negative)
                val = ~val;
        }
        ret = 0;
    done:
        Py_XDECREF(shift);
        Py_XDECREF(mask);
        Py_XDECREF(stepval);
#endif
        if (unlikely(ret))
            return (long) -1;
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to long");
    return (long) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to long");
    return (long) -1;
}

/* CIntFromPy */
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const int neg_one = (int) -1, const_zero = (int) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if ((sizeof(int) < sizeof(long))) {
            __PYX_VERIFY_RETURN_INT(int, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (int) val;
        }
    }
#endif
    if (unlikely(!PyLong_Check(x))) {
        int val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (int) -1;
        val = __Pyx_PyInt_As_int(tmp);
        Py_DECREF(tmp);
        return val;
    }
    if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
        if (unlikely(__Pyx_PyLong_IsNeg(x))) {
            goto raise_neg_overflow;
        } else if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(int, __Pyx_compact_upylong, __Pyx_PyLong_CompactValueUnsigned(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_DigitCount(x)) {
                case 2:
                    if ((8 * sizeof(int) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) >= 2 * PyLong_SHIFT)) {
                            return (int) (((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(int) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) >= 3 * PyLong_SHIFT)) {
                            return (int) (((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(int) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) >= 4 * PyLong_SHIFT)) {
                            return (int) (((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
            }
        }
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A7
        if (unlikely(Py_SIZE(x) < 0)) {
            goto raise_neg_overflow;
        }
#else
        {
            int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
            if (unlikely(result < 0))
                return (int) -1;
            if (unlikely(result == 1))
                goto raise_neg_overflow;
        }
#endif
        if ((sizeof(int) <= sizeof(unsigned long))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(int) <= sizeof(unsigned PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
        }
    } else {
#if CYTHON_USE_PYLONG_INTERNALS
        if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(int, __Pyx_compact_pylong, __Pyx_PyLong_CompactValue(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_SignedDigitCount(x)) {
                case -2:
                    if ((8 * sizeof(int) - 1 > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                            return (int) (((int)-1)*(((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if ((8 * sizeof(int) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                            return (int) ((((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                            return (int) (((int)-1)*(((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(int) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                            return (int) ((((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 4 * PyLong_SHIFT)) {
                            return (int) (((int)-1)*(((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(int) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 4 * PyLong_SHIFT)) {
                            return (int) ((((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
            }
        }
#endif
        if ((sizeof(int) <= sizeof(long))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(int) <= sizeof(PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
        }
    }
    {
        int val;
        int ret = -1;
#if PY_VERSION_HEX >= 0x030d00A6 && !CYTHON_COMPILING_IN_LIMITED_API
        Py_ssize_t bytes_copied = PyLong_AsNativeBytes(
            x, &val, sizeof(val), Py_ASNATIVEBYTES_NATIVE_ENDIAN | (is_unsigned ? Py_ASNATIVEBYTES_UNSIGNED_BUFFER | Py_ASNATIVEBYTES_REJECT_NEGATIVE : 0));
        if (unlikely(bytes_copied == -1)) {
        } else if (unlikely(bytes_copied > (Py_ssize_t) sizeof(val))) {
            goto raise_overflow;
        } else {
            ret = 0;
        }
#elif PY_VERSION_HEX < 0x030d0000 && !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
        int one = 1; int is_little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&val;
        ret = _PyLong_AsByteArray((PyLongObject *)x,
                                    bytes, sizeof(val),
                                    is_little, !is_unsigned);
#else
        PyObject *v;
        PyObject *stepval = NULL, *mask = NULL, *shift = NULL;
        int bits, remaining_bits, is_negative = 0;
        int chunk_size = (sizeof(long) < 8) ? 30 : 62;
        if (likely(PyLong_CheckExact(x))) {
            v = __Pyx_NewRef(x);
        } else {
            v = PyNumber_Long(x);
            if (unlikely(!v)) return (int) -1;
            assert(PyLong_CheckExact(v));
        }
        {
            int result = PyObject_RichCompareBool(v, Py_False, Py_LT);
            if (unlikely(result < 0)) {
                Py_DECREF(v);
                return (int) -1;
            }
            is_negative = result == 1;
        }
        if (is_unsigned && unlikely(is_negative)) {
            Py_DECREF(v);
            goto raise_neg_overflow;
        } else if (is_negative) {
            stepval = PyNumber_Invert(v);
            Py_DECREF(v);
            if (unlikely(!stepval))
                return (int) -1;
        } else {
            stepval = v;
        }
        v = NULL;
        val = (int) 0;
        mask = PyLong_FromLong((1L << chunk_size) - 1); if (unlikely(!mask)) goto done;
        shift = PyLong_FromLong(chunk_size); if (unlikely(!shift)) goto done;
        for (bits = 0; bits < (int) sizeof(int) * 8 - chunk_size; bits += chunk_size) {
            PyObject *tmp, *digit;
            long idigit;
            digit = PyNumber_And(stepval, mask);
            if (unlikely(!digit)) goto done;
            idigit = PyLong_AsLong(digit);
            Py_DECREF(digit);
            if (unlikely(idigit < 0)) goto done;
            val |= ((int) idigit) << bits;
            tmp = PyNumber_Rshift(stepval, shift);
            if (unlikely(!tmp)) goto done;
            Py_DECREF(stepval); stepval = tmp;
        }
        Py_DECREF(shift); shift = NULL;
        Py_DECREF(mask); mask = NULL;
        {
            long idigit = PyLong_AsLong(stepval);
            if (unlikely(idigit < 0)) goto done;
            remaining_bits = ((int) sizeof(int) * 8) - bits - (is_unsigned ? 0 : 1);
            if (unlikely(idigit >= (1L << remaining_bits)))
                goto raise_overflow;
            val |= ((int) idigit) << bits;
        }
        if (!is_unsigned) {
            if (unlikely(val & (((int) 1) << (sizeof(int) * 8 - 1))))
                goto raise_overflow;
            if (is_negative)
                val = ~val;
        }
        ret = 0;
    done:
        Py_XDECREF(shift);
        Py_XDECREF(mask);
        Py_XDECREF(stepval);
#endif
        if (unlikely(ret))
            return (int) -1;
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to int");
    return (int) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to int");
    return (int) -1;
}

/* FastTypeChecks */
#if CYTHON_COMPILING_IN_CPYTHON
static int __Pyx_InBases(PyTypeObject *a, PyTypeObject *b) {
    while (a) {
        a = __Pyx_PyType_GetSlot(a, tp_base, PyTypeObject*);
        if (a == b)
            return 1;
    }
    return b == &PyBaseObject_Type;
}
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (a == b) return 1;
    mro = a->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            if (PyTuple_GET_ITEM(mro, i) == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(a, b);
}
static CYTHON_INLINE int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (cls == a || cls == b) return 1;
    mro = cls->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            PyObject *base = PyTuple_GET_ITEM(mro, i);
            if (base == (PyObject *)a || base == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(cls, a) || __Pyx_InBases(cls, b);
}
#if PY_MAJOR_VERSION == 2
static int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject* exc_type2) {
    PyObject *exception, *value, *tb;
    int res;
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ErrFetch(&exception, &value, &tb);
    res = exc_type1 ? PyObject_IsSubclass(err, exc_type1) : 0;
    if (unlikely(res == -1)) {
        PyErr_WriteUnraisable(err);
        res = 0;
    }
    if (!res) {
        res = PyObject_IsSubclass(err, exc_type2);
        if (unlikely(res == -1)) {
            PyErr_WriteUnraisable(err);
            res = 0;
        }
    }
    __Pyx_ErrRestore(exception, value, tb);
    return res;
}
#else
static CYTHON_INLINE int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject *exc_type2) {
    if (exc_type1) {
        return __Pyx_IsAnySubtype2((PyTypeObject*)err, (PyTypeObject*)exc_type1, (PyTypeObject*)exc_type2);
    } else {
        return __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
}
#endif
static int __Pyx_PyErr_GivenExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    assert(PyExceptionClass_Check(exc_type));
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        PyObject *t = PyTuple_GET_ITEM(tuple, i);
        #if PY_MAJOR_VERSION < 3
        if (likely(exc_type == t)) return 1;
        #endif
        if (likely(PyExceptionClass_Check(t))) {
            if (__Pyx_inner_PyErr_GivenExceptionMatches2(exc_type, NULL, t)) return 1;
        } else {
        }
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject* exc_type) {
    if (likely(err == exc_type)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        if (likely(PyExceptionClass_Check(exc_type))) {
            return __Pyx_inner_PyErr_GivenExceptionMatches2(err, NULL, exc_type);
        } else if (likely(PyTuple_Check(exc_type))) {
            return __Pyx_PyErr_GivenExceptionMatchesTuple(err, exc_type);
        } else {
        }
    }
    return PyErr_GivenExceptionMatches(err, exc_type);
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *exc_type1, PyObject *exc_type2) {
    assert(PyExceptionClass_Check(exc_type1));
    assert(PyExceptionClass_Check(exc_type2));
    if (likely(err == exc_type1 || err == exc_type2)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        return __Pyx_inner_PyErr_GivenExceptionMatches2(err, exc_type1, exc_type2);
    }
    return (PyErr_GivenExceptionMatches(err, exc_type1) || PyErr_GivenExceptionMatches(err, exc_type2));
}
#endif

/* CheckBinaryVersion */
static unsigned long __Pyx_get_runtime_version(void) {
#if __PYX_LIMITED_VERSION_HEX >= 0x030B00A4
    return Py_Version & ~0xFFUL;
#else
    const char* rt_version = Py_GetVersion();
    unsigned long version = 0;
    unsigned long factor = 0x01000000UL;
    unsigned int digit = 0;
    int i = 0;
    while (factor) {
        while ('0' <= rt_version[i] && rt_version[i] <= '9') {
            digit = digit * 10 + (unsigned int) (rt_version[i] - '0');
            ++i;
        }
        version += factor * digit;
        if (rt_version[i] != '.')
            break;
        digit = 0;
        factor >>= 8;
        ++i;
    }
    return version;
#endif
}
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer) {
    const unsigned long MAJOR_MINOR = 0xFFFF0000UL;
    if ((rt_version & MAJOR_MINOR) == (ct_version & MAJOR_MINOR))
        return 0;
    if (likely(allow_newer && (rt_version & MAJOR_MINOR) > (ct_version & MAJOR_MINOR)))
        return 1;
    {
        char message[200];
        PyOS_snprintf(message, sizeof(message),
                      "compile time Python version %d.%d "
                      "of module '%.100s' "
                      "%s "
                      "runtime version %d.%d",
                       (int) (ct_version >> 24), (int) ((ct_version >> 16) & 0xFF),
                       __Pyx_MODULE_NAME,
                       (allow_newer) ? "was newer than" : "does not match",
                       (int) (rt_version >> 24), (int) ((rt_version >> 16) & 0xFF)
       );
        return PyErr_WarnEx(NULL, message, 1);
    }
}

/* InitStrings */
#if PY_MAJOR_VERSION >= 3
static int __Pyx_InitString(__Pyx_StringTabEntry t, PyObject **str) {
    if (t.is_unicode | t.is_str) {
        if (t.intern) {
            *str = PyUnicode_InternFromString(t.s);
        } else if (t.encoding) {
            *str = PyUnicode_Decode(t.s, t.n - 1, t.encoding, NULL);
        } else {
            *str = PyUnicode_FromStringAndSize(t.s, t.n - 1);
        }
    } else {
        *str = PyBytes_FromStringAndSize(t.s, t.n - 1);
    }
    if (!*str)
        return -1;
    if (PyObject_Hash(*str) == -1)
        return -1;
    return 0;
}
#endif
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        #if PY_MAJOR_VERSION >= 3
        __Pyx_InitString(*t, t->p);
        #else
        if (t->is_unicode) {
            *t->p = PyUnicode_DecodeUTF8(t->s, t->n - 1, NULL);
        } else if (t->intern) {
            *t->p = PyString_InternFromString(t->s);
        } else {
            *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        }
        if (!*t->p)
            return -1;
        if (PyObject_Hash(*t->p) == -1)
            return -1;
        #endif
        ++t;
    }
    return 0;
}

#include <string.h>
static CYTHON_INLINE Py_ssize_t __Pyx_ssize_strlen(const char *s) {
    size_t len = strlen(s);
    if (unlikely(len > (size_t) PY_SSIZE_T_MAX)) {
        PyErr_SetString(PyExc_OverflowError, "byte string is too long");
        return -1;
    }
    return (Py_ssize_t) len;
}
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (unlikely(len < 0)) return NULL;
    return __Pyx_PyUnicode_FromStringAndSize(c_str, len);
}
static CYTHON_INLINE PyObject* __Pyx_PyByteArray_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (unlikely(len < 0)) return NULL;
    return PyByteArray_FromStringAndSize(c_str, len);
}
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject* o) {
    Py_ssize_t ignore;
    return __Pyx_PyObject_AsStringAndSize(o, &ignore);
}
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#if !CYTHON_PEP393_ENABLED
static const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    char* defenc_c;
    PyObject* defenc = _PyUnicode_AsDefaultEncodedString(o, NULL);
    if (!defenc) return NULL;
    defenc_c = PyBytes_AS_STRING(defenc);
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    {
        char* end = defenc_c + PyBytes_GET_SIZE(defenc);
        char* c;
        for (c = defenc_c; c < end; c++) {
            if ((unsigned char) (*c) >= 128) {
                PyUnicode_AsASCIIString(o);
                return NULL;
            }
        }
    }
#endif
    *length = PyBytes_GET_SIZE(defenc);
    return defenc_c;
}
#else
static CYTHON_INLINE const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    if (unlikely(__Pyx_PyUnicode_READY(o) == -1)) return NULL;
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    if (likely(PyUnicode_IS_ASCII(o))) {
        *length = PyUnicode_GET_LENGTH(o);
        return PyUnicode_AsUTF8(o);
    } else {
        PyUnicode_AsASCIIString(o);
        return NULL;
    }
#else
    return PyUnicode_AsUTF8AndSize(o, length);
#endif
}
#endif
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
    if (
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
            __Pyx_sys_getdefaultencoding_not_ascii &&
#endif
            PyUnicode_Check(o)) {
        return __Pyx_PyUnicode_AsStringAndSize(o, length);
    } else
#endif
#if (!CYTHON_COMPILING_IN_PYPY && !CYTHON_COMPILING_IN_LIMITED_API) || (defined(PyByteArray_AS_STRING) && defined(PyByteArray_GET_SIZE))
    if (PyByteArray_Check(o)) {
        *length = PyByteArray_GET_SIZE(o);
        return PyByteArray_AS_STRING(o);
    } else
#endif
    {
        char* result;
        int r = PyBytes_AsStringAndSize(o, &result, length);
        if (unlikely(r < 0)) {
            return NULL;
        } else {
            return result;
        }
    }
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject* x) {
   int is_true = x == Py_True;
   if (is_true | (x == Py_False) | (x == Py_None)) return is_true;
   else return PyObject_IsTrue(x);
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject* x) {
    int retval;
    if (unlikely(!x)) return -1;
    retval = __Pyx_PyObject_IsTrue(x);
    Py_DECREF(x);
    return retval;
}
static PyObject* __Pyx_PyNumber_IntOrLongWrongResultType(PyObject* result, const char* type_name) {
    __Pyx_TypeName result_type_name = __Pyx_PyType_GetName(Py_TYPE(result));
#if PY_MAJOR_VERSION >= 3
    if (PyLong_Check(result)) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
                "__int__ returned non-int (type " __Pyx_FMT_TYPENAME ").  "
                "The ability to return an instance of a strict subclass of int is deprecated, "
                "and may be removed in a future version of Python.",
                result_type_name)) {
            __Pyx_DECREF_TypeName(result_type_name);
            Py_DECREF(result);
            return NULL;
        }
        __Pyx_DECREF_TypeName(result_type_name);
        return result;
    }
#endif
    PyErr_Format(PyExc_TypeError,
                 "__%.4s__ returned non-%.4s (type " __Pyx_FMT_TYPENAME ")",
                 type_name, type_name, result_type_name);
    __Pyx_DECREF_TypeName(result_type_name);
    Py_DECREF(result);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x) {
#if CYTHON_USE_TYPE_SLOTS
  PyNumberMethods *m;
#endif
  const char *name = NULL;
  PyObject *res = NULL;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_Check(x) || PyLong_Check(x)))
#else
  if (likely(PyLong_Check(x)))
#endif
    return __Pyx_NewRef(x);
#if CYTHON_USE_TYPE_SLOTS
  m = Py_TYPE(x)->tp_as_number;
  #if PY_MAJOR_VERSION < 3
  if (m && m->nb_int) {
    name = "int";
    res = m->nb_int(x);
  }
  else if (m && m->nb_long) {
    name = "long";
    res = m->nb_long(x);
  }
  #else
  if (likely(m && m->nb_int)) {
    name = "int";
    res = m->nb_int(x);
  }
  #endif
#else
  if (!PyBytes_CheckExact(x) && !PyUnicode_CheckExact(x)) {
    res = PyNumber_Int(x);
  }
#endif
  if (likely(res)) {
#if PY_MAJOR_VERSION < 3
    if (unlikely(!PyInt_Check(res) && !PyLong_Check(res))) {
#else
    if (unlikely(!PyLong_CheckExact(res))) {
#endif
        return __Pyx_PyNumber_IntOrLongWrongResultType(res, name);
    }
  }
  else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_TypeError,
                    "an integer is required");
  }
  return res;
}
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject* b) {
  Py_ssize_t ival;
  PyObject *x;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_CheckExact(b))) {
    if (sizeof(Py_ssize_t) >= sizeof(long))
        return PyInt_AS_LONG(b);
    else
        return PyInt_AsSsize_t(b);
  }
#endif
  if (likely(PyLong_CheckExact(b))) {
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(__Pyx_PyLong_IsCompact(b))) {
        return __Pyx_PyLong_CompactValue(b);
    } else {
      const digit* digits = __Pyx_PyLong_Digits(b);
      const Py_ssize_t size = __Pyx_PyLong_SignedDigitCount(b);
      switch (size) {
         case 2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
      }
    }
    #endif
    return PyLong_AsSsize_t(b);
  }
  x = PyNumber_Index(b);
  if (!x) return -1;
  ival = PyInt_AsSsize_t(x);
  Py_DECREF(x);
  return ival;
}
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject* o) {
  if (sizeof(Py_hash_t) == sizeof(Py_ssize_t)) {
    return (Py_hash_t) __Pyx_PyIndex_AsSsize_t(o);
#if PY_MAJOR_VERSION < 3
  } else if (likely(PyInt_CheckExact(o))) {
    return PyInt_AS_LONG(o);
#endif
  } else {
    Py_ssize_t ival;
    PyObject *x;
    x = PyNumber_Index(o);
    if (!x) return -1;
    ival = PyInt_AsLong(x);
    Py_DECREF(x);
    return ival;
  }
}
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b) {
  return b ? __Pyx_NewRef(Py_True) : __Pyx_NewRef(Py_False);
}
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t ival) {
    return PyInt_FromSize_t(ival);
}


/* #### Code section: utility_code_pragmas_end ### */
#ifdef _MSC_VER
#pragma warning( pop )
#endif



/* #### Code section: end ### */
#endif /* Py_PYTHON_H */
