//*CMZ :  2.00/00 04/11/97  09.59.07  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/06/97

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
// TPosixMutex                                                          //
//                                                                      //
// This class provides an interface to the posix mutex routines.        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TThread.h"
#include "TPosixMutex.h"
#include "PosixThreadInc.h"

ClassImp(TPosixMutex)
//______________________________________________________________________________
TPosixMutex::TPosixMutex()
{
   int rc;
// Create a posix mutex lock.
   rc = ERRNO(pthread_mutex_init(&fMutex, 0));
   if (rc != 0)
      ::SysError("TMutex::TMutex", "pthread_mutex_init error");
   rc = ERRNO(pthread_mutex_init(&fGuard, 0));
   if (rc != 0)
      ::SysError("TMutex::TMutex", "pthread_mutex_init error");
}

//______________________________________________________________________________
TPosixMutex::~TPosixMutex()
{
   // TMutex dtor.

   int rc = ERRNO(pthread_mutex_destroy(&fMutex));
   if (rc != 0)
      ::SysError("TMutex::~TMutex", "pthread_mutex_destroy error");
   rc =     ERRNO(pthread_mutex_destroy(&fGuard));
   if (rc != 0)
      ::SysError("TMutex::~TMutex", "pthread_mutex_destroy error");
}

//______________________________________________________________________________
Int_t TPosixMutex::Lock()
{
  int rc,iqwe;
   // Lock the mutex.
   iqwe = ERRNO(pthread_mutex_lock(&fGuard));
   rc   = ERRNO(pthread_mutex_lock(&fMutex));
   iqwe = ERRNO(pthread_mutex_unlock(&fGuard));
return rc;
}

//______________________________________________________________________________
Int_t TPosixMutex::TryLock()
{
   // Lock the mutex.

   return ERRNO(pthread_mutex_trylock(&fMutex));
}

//______________________________________________________________________________
Int_t TPosixMutex::UnLock(void)
{
// Unlock the mutex.
    return ERRNO(pthread_mutex_unlock(&fMutex));
}
