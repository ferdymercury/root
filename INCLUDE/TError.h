//*CMZ :  1.03/09 05/12/97  16.32.09  by  Fons Rademakers
//*-- Author :    Fons Rademakers   29/07/95

#ifndef ROOT_TError
#define ROOT_TError

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Error handling routines.                                             //
//                                                                      //
// This file defines a number of global error handling routines:        //
// Warning(), Error(), SysError() and Fatal(). They all take a          //
// location string (where the error happened) and a printf style format //
// string plus vararg's. In the end these functions call an             //
// errorhanlder function. By default DefaultErrorHandler() is used.     //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


#ifndef ROOT_Rtypes
#include "Rtypes.h"
#endif
#ifndef ROOT_Varargs
#include "Varargs.h"
#endif

const int kWarning  =   0;
const int kError    =   1000;
const int kSysError =   2000;
const int kFatal    =   3000;


typedef void (*ErrorHandlerFunc_t)(int level, Bool_t abort, const char *location,
              const char *msg);

extern "C" void ErrorHandler(int level, const char *location, const char *fmt,
                             va_list va);

extern void DefaultErrorHandler(int level, Bool_t abort, const char *location,
                                const char *msg);

extern ErrorHandlerFunc_t SetErrorHandler(ErrorHandlerFunc_t newhandler);
extern ErrorHandlerFunc_t GetErrorHandler();

extern void Error(const char *location, const char *msgfmt, ...);
extern void SysError(const char *location, const char *msgfmt, ...);
extern void Warning(const char *location, const char *msgfmt, ...);
extern void Fatal(const char *location, const char *msgfmt, ...);

extern void AbstractMethod(const char *method);
extern void MayNotUse(const char *method);

R__EXTERN const char *kAssertMsg;
R__EXTERN const char *kCheckMsg;
#define Assert(e) \
        if (!(e)) Fatal("", kAssertMsg, _QUOTE_(e), __LINE__, __FILE__)
#define Check(e) \
        if (!(e)) Warning("", kCheckMsg, _QUOTE_(e), __LINE__, __FILE__)

R__EXTERN int gErrorIgnoreLevel;
R__EXTERN int gErrorAbortLevel;

#endif
