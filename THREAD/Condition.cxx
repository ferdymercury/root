//*CMZ :  2.23/12 30/12/99  01.19.11  by  Fons Rademakers
//*CMZ :  2.00/00 04/11/97  16.50.02  by  Victor Perev
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
// TCondition                                                           //
//                                                                      //
// This class implements a condition variable. Use a condition variable //
// to signal threads. The actual work is done via the TConditionImp     //
// class (either TPosixCondition, TSolarisCondition or TNTCondition).   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TCondition.h"
#include "TMutex.h"
#include "TThreadFactory.h"


ClassImp(TCondition)

//______________________________________________________________________________
TCondition::TCondition(TMutex *m)
{
   // Create a condition variable. The actual condition implementation
   // will be provided via the TThreadFactory. If no external mutex is
   // provided one will be created. Use GetMutex() to get this mutex
   // and use it before calling Signal() or Broadcast().

   TMutex *mm = m;

   fMutex = 0;
   if (!mm) { fMutex = new TMutex(); mm = fMutex; }

   fConditionImp = gThreadFactory->CreateConditionImp(mm->fMutexImp);

   if (!fConditionImp)
      Error("TCondition", "could not create TConditionImp");
}

//______________________________________________________________________________
TCondition::~TCondition()
{
   // Clean up condition variable.

   delete fConditionImp;
   delete fMutex;
}

//______________________________________________________________________________
TMutex *TCondition::GetMutex() const
{
   // Get internally created mutex. Use it to lock resources
   // before calling Signal() or Broadcast(). Returns 0 if
   // external mutex was provided in TCondition ctor.

   return fMutex;
}

//______________________________________________________________________________
Int_t TCondition::Wait()
{
   // Wait for to be signaled.

   if (!fConditionImp) return -1;

   Int_t iret;
   if (fMutex) fMutex->Lock();
   iret = fConditionImp->Wait();
   if (fMutex) fMutex->UnLock();
   return iret;
}

//______________________________________________________________________________
Int_t TCondition::TimedWait(ULong_t secs, ULong_t nanoSec)
{
   // Wait not more than secs+nanoSecs to be signaled.

   if (!fConditionImp) return -1;

   Int_t iret;
   if (fMutex) fMutex->Lock();
   iret = fConditionImp->TimedWait(secs, nanoSec);
   if (fMutex) fMutex->UnLock();
   return iret;
}
