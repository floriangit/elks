/***************************************************************************
 * FILE: stdint.h (Various integer type definitions)
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2024 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 *
 * Description: This header is part of the C99/C++ standard library. It
 *              describes a number of useful integer types.
 *
 * 26 Dec 24 Greg Haerr ported from OWC for C86 compiler
 ***************************************************************************/
#ifndef _STDINT_H_INCLUDED
#define _STDINT_H_INCLUDED

/* Limit macros */

/* Exact-width types. */
#define INT8_MIN   (-128)
#define INT8_MAX   127
#define INT16_MIN  (-32767-1)
#define INT16_MAX  32767
#define INT32_MIN  (-2147483647L-1)
#define INT32_MAX  2147483647L
#define INT64_MIN  (-9223372036854775807LL-1)
#define INT64_MAX  9223372036854775807LL

#define UINT8_MAX   255
 #define UINT16_MAX  65535U
#define UINT32_MAX  4294967295UL
#define UINT64_MAX  18446744073709551615ULL

/* Minimum-width types. */
#define INT_LEAST8_MIN   (-128)
#define INT_LEAST8_MAX   127
#define INT_LEAST16_MIN  (-32767-1)
#define INT_LEAST16_MAX  32767
#define INT_LEAST32_MIN  (-2147483647L-1)
#define INT_LEAST32_MAX  2147483647L
#define INT_LEAST64_MIN  (-9223372036854775807LL-1)
#define INT_LEAST64_MAX  9223372036854775807LL

#define UINT_LEAST8_MAX   255
 #define UINT_LEAST16_MAX  65535U
#define UINT_LEAST32_MAX  4294967295UL
#define UINT_LEAST64_MAX  18446744073709551615ULL

/* Fast minimum-width types. */
 #define INT_FAST8_MIN   (-32767-1)
 #define INT_FAST8_MAX   32767
 #define INT_FAST16_MIN  (-32767-1)
 #define INT_FAST16_MAX  32767
#define INT_FAST32_MIN  (-2147483647L-1)
#define INT_FAST32_MAX  2147483647L
#define INT_FAST64_MIN  (-9223372036854775807LL-1)
#define INT_FAST64_MAX  9223372036854775807LL

 #define UINT_FAST8_MAX   65535U
 #define UINT_FAST16_MAX  65535U
#define UINT_FAST32_MAX  4294967295UL
#define UINT_FAST64_MAX  18446744073709551615ULL

/* Integer types able to hold object pointers. */
  #define INTPTR_MIN   (-32767-1)
  #define INTPTR_MAX   32767
  #define UINTPTR_MAX  65535U

/* Greatest-width types. */
#define INTMAX_MIN    (-2147483647L-1)
#define INTMAX_MAX    2147483647L
#define UINTMAX_MAX   4294967295U

/* Limits of wide character types */
#define WCHAR_MIN       0
#define WCHAR_MAX       65535U
#define WINT_MIN        WCHAR_MIN
#define WINT_MAX        WCHAR_MAX

/* Limits of other integer types. */
  #define PTRDIFF_MIN    (-32767-1)
  #define PTRDIFF_MAX    32767
 #define SIG_ATOMIC_MIN  (-32767-1)
 #define SIG_ATOMIC_MAX  32767
 #define SIZE_MAX        65535U

/* Constant macros */

#define INT8_C(__x)     (__x)
#define INT16_C(__x)    (__x)
#define INT32_C(__x)    (__x + (INT32_MAX - INT32_MAX))
#define INT64_C(__x)    (__x + (INT64_MAX - INT64_MAX))

#define UINT8_C(__x)    (__x)
#define UINT16_C(__x)   (__x)
#define UINT32_C(__x)   (__x + (UINT32_MAX - UINT32_MAX))
#define UINT64_C(__x)   (__x + (UINT64_MAX - UINT64_MAX))

#define INTMAX_C(__x)   (__x + (INT64_MAX - INT64_MAX))
#define UINTMAX_C(__x)  (__x + (UINT64_MAX - UINT64_MAX))

/* Signed integer type able to hold pointers. */
 #ifndef _INTPTR_T_DEFINED
 #define _INTPTR_T_DEFINED
   typedef int intptr_t;
  typedef intptr_t  __w_intptr_t;
 #endif
/* Unsigned integer type able to hold pointers. */
 #ifndef _UINTPTR_T_DEFINED
 #define _UINTPTR_T_DEFINED
   typedef unsigned int uintptr_t;
  typedef uintptr_t   __w_uintptr_t;
 #endif

/* Exact-width types. */
#ifndef _EXACT_WIDTH_INTS
 #define _EXACT_WIDTH_INTS
 typedef signed char         int8_t;
 typedef unsigned char       uint8_t;
 typedef short               int16_t;
 typedef unsigned short      uint16_t;
 typedef long                int32_t;
 typedef unsigned long       uint32_t;
//typedef long long           int64_t;      /* defined in elks/include/arch/types.h */
 typedef unsigned long long  uint64_t;
#endif /* _EXACT_WIDTH_INTS */

/* Minimum-width types. */
typedef signed   char      int_least8_t;
typedef signed   short     int_least16_t;
typedef signed   long      int_least32_t;
typedef signed   long long int_least64_t;

typedef unsigned char      uint_least8_t;
typedef unsigned short     uint_least16_t;
typedef unsigned long      uint_least32_t;
typedef unsigned long long uint_least64_t;

/* Fastest minimum-width types. */
typedef signed   int       int_fast8_t;
typedef signed   int       int_fast16_t;
typedef signed   long      int_fast32_t;
typedef signed   long long int_fast64_t;

typedef unsigned int       uint_fast8_t;
typedef unsigned int       uint_fast16_t;
typedef unsigned long      uint_fast32_t;
typedef unsigned long long uint_fast64_t;

/* Greatest-width types. */
typedef long intmax_t;
typedef unsigned long uintmax_t;

#endif
