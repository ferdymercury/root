//*CMZ :  2.23/12 25/12/99  19.32.36  by  Fons Rademakers
//*CMZ :  2.23/10 30/11/99  20.25.50  by  Fons Rademakers
//*CMZ :  2.22/07 05/07/99  13.39.09  by  Rene Brun
//*CMZ :  2.00/00 04/11/97  10.10.32  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   01/07/97

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
// TPosixCondition                                                      //
//                                                                      //
// This class provides an interface to the posix condition variable     //
// routines.                                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TPosixCondition.h"
#include "TPosixMutex.h"
#include "PosixThreadInc.h"

#include <errno.h>


ClassImp(TPosixCondition)

//______________________________________________________________________________
TPosixCondition::TPosixCondition(TMutexImp *m)
{
   // Create Condition variable. Ctor must be given a pointer to an
   // existing mutex. The condition variable is then linked to the mutex,
   // so that there is an implicit unlock and lock around Wait() and
   // TImedWait().

   fMutex = (TPosixMutex *) m;

#if (PthreadDraftVersion == 4)

   int rc = ERRNO(pthread_cond_init(&fCond, pthread_condattr_default));

#else

   int rc = ERRNO(pthread_cond_init(&fCond, 0));

#endif

   if (rc != 0)
      SysError("TCondition", "pthread_cond_init error");
}

//______________________________________________________________________________
TPosixCondition::~TPosixCondition()
{
   // TCondition dtor.

   int rc = ERRNO(pthread_cond_destroy(&fCond));

   if (rc != 0)
      SysError("~TCondition", "pthread_cond_destroy error");
}

//______________________________________________________________________________
Int_t TPosixCondition::Wait()
{
   // Wait for the condition variable to be signalled. The mutex is
   // implicitely released before waiting and locked again after waking up.
   // If Wait() is called by multiple threads, a signal may wake up more
   // than one thread. See POSIX threads documentation for details.

   return ERRNO(pthread_cond_wait(&fCond, &fMutex->fMutex));
}

//______________________________________________________________________________
Int_t TPosixCondition::TimedWait(ULong_t secs, ULong_t nanoSecs)
{
   // TimedWait() is given an absolute time to wait until. To wait for a
   // relative time from now, use TThread::GetTime(). See POSIX threads
   // documentation for why absolute times are better than relative.
   // Returns 0 if successfully signalled, 1 if time expired.

   timespec rqts = { secs, nanoSecs };

   int rc = ERRNO(pthread_cond_timedwait(&fCond, &fMutex->fMutex, &rqts));

//#if (PthreadDraftVersion <= 6)
#if (PthreadDraftVersion == 4)
   if (rc == EAGAIN)
#else
   if (rc == ETIMEDOUT)
#endif
      rc = 1;

   return rc;
}

//______________________________________________________________________________
Int_t TPosixCondition::Signal()
{
   // If one or more threads have called Wait(), Signal() wakes up at least
   // one of them, possibly more. See POSIX threads documentation for details.

   return ERRNO(pthread_cond_signal(&fCond));
}


//______________________________________________________________________________
Int_t TPosixCondition::Broadcast()
{
   // Broadcast is like signal but wakes all threads which have called Wait().

   return ERRNO(pthread_cond_broadcast(&fCond));
}
