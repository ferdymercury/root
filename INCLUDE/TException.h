//*CMZ :  2.24/03 20/04/2000  13.39.33  by  Fons Rademakers
//*CMZ :  1.03/09 05/12/97  14.12.07  by  Fons Rademakers
//*-- Author :    Fons Rademakers   21/09/95

#ifndef ROOT_TException
#define ROOT_TException

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Exception Handling                                                   //
//                                                                      //
// Provide some macro's to simulate the coming C++ try, catch and throw //
// exception handling functionality.                                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef __CINT__
#include <setjmp.h>
#else
struct sigjmp_buf;
struct jmp_buf;
#endif

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
