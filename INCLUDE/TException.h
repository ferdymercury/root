//*CMZ :  1.03/09 05/12/97  14.12.07  by  Fons Rademakers
//*-- Author :    Fons Rademakers   21/09/95

#ifndef ROOT_TException
#define ROOT_TException

/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1998, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Nenad Buncic, Valery Fine, Fons Rademakers.       *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose.                         *
 * It is provided "as is" without express or implied warranty.           *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Exception Handling                                                   //
//                                                                      //
// Provide some macro's to simulate the coming C++ try, catch and throw //
// exception handling functionality.                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <setjmp.h>

#include "Rconfig.h"
#include "DllImport.h"

struct ExceptionContext_t {
#ifdef NEED_SIGJMP
   sigjmp_buf buf;
#else
   jmp_buf buf;
#endif
};

#ifdef NEED_SIGJMP
#define SETJMP(buf) sigsetjmp(buf,1)
#else
#define SETJMP(buf) setjmp(buf)
#endif

#define RETRY \
   { \
      ExceptionContext_t __curr, *__old = gException; \
      int __code; \
      gException = &__curr; \
      __code = SETJMP(gException->buf); {

#define TRY \
   { \
      ExceptionContext_t __curr, *__old = gException; \
      int __code; \
      gException = &__curr; \
      if ((__code = SETJMP(gException->buf)) == 0) {

#define CATCH(n) \
         gException = __old; \
      } else { \
         int n = __code; \
         gException = __old;

#define ENDTRY \
      } \
      gException = __old; \
   }

R__EXTERN ExceptionContext_t *gException;

extern void Throw(int code);

#endif
