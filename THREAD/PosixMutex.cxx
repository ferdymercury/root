//*CMZ :  2.23/12 30/12/99  01.01.59  by  Fons Rademakers
//*CMZ :  2.00/00 04/11/97  09.59.07  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   25/06/97

/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun and Fons Rademakers.                               *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/AA_LICENSE.                      *
 * For the list of contributors see $ROOTSYS/AA_CREDITS.                 *
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
   // Create a posix mutex lock.

#if (PthreadDraftVersion == 4)
   int rc = ERRNO(pthread_mutex_init(&fMutex, pthread_mutexattr_default));
#else
   int rc = ERRNO(pthread_mutex_init(&fMutex, 0));
#endif
   if (rc != 0)
      SysError("TMutex", "pthread_mutex_init error");
}

//______________________________________________________________________________
TPosixMutex::~TPosixMutex()
{
   // TMutex dtor.

   int rc = ERRNO(pthread_mutex_destroy(&fMutex));
   if (rc != 0)
      SysError("~TMutex", "pthread_mutex_destroy error");
}

//______________________________________________________________________________
Int_t TPosixMutex::Lock()
{
   // Lock the mutex.

   return ERRNO(pthread_mutex_lock(&fMutex));
}

//______________________________________________________________________________
Int_t TPosixMutex::TryLock()
{
   // Try locking the mutex. Returns 0 if mutex can be locked.

   return ERRNO(pthread_mutex_trylock(&fMutex));
}

//______________________________________________________________________________
Int_t TPosixMutex::UnLock(void)
{
   // Unlock the mutex.

   return ERRNO(pthread_mutex_unlock(&fMutex));
}
