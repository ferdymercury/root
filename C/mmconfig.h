/*CMZ :  2.00/11 07/08/98  15.07.37  by  Fons Rademakers*/
/*CMZ :  2.00/06 12/05/98  15.44.14  by  Rene Brun*/
/*CMZ :  2.00/00 22/01/98  14.51.30  by  Fons Rademakers*/
/*CMZ :  1.03/09 16/12/97  16.42.21  by  Rene Brun*/
/*-- Author :    Fons Rademakers   08/07/97*/

#ifndef MMCONFIG_H
#define MMCONFIG_H

#ifndef ROOT_RConfig
#include "RConfig.h"
#endif

#ifndef WIN32
#  ifndef INVALID_HANDLE_VALUE
#    define INVALID_HANDLE_VALUE -1
#  endif
#endif

#if defined (R__MAC)
#   define HAVE_STDDEF_H
#   define HAVE_LIMITS_H
#   define NO_SBRK_MALLOC
#elif defined(R__UNIX)
#   define HAVE_UNISTD_H
#   define HAVE_STDLIB_H
#   define HAVE_STDDEF_H
#   define HAVE_LIMITS_H
#   define HAVE_MMAP
#   define NO_SBRK_MALLOC
#elif defined (R__VMS)
#   define HAVE_UNISTD_H
#   define HAVE_STDLIB_H
#   define HAVE_STDDEF_H
#   define NO_SBRK_MALLOC
#else
#   define HAVE_STDDEF_H
#   define HAVE_LIMITS_H
#   define HAVE_MMAP
#   define NO_SBRK_MALLOC
#endif

#endif
