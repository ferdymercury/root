//*CMZ :  2.00/00 04/11/97  16.50.02  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   01/07/97

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
   // Create condition variable. The actual condition implementation
   // will be provided via the TThreadFactory.
   TMutex *mm = m;

   fMutex = NULL;
   if (! mm) { fMutex = new TMutex(); mm = fMutex;}

   fConditionImp = gThreadFactory->CreateConditionImp(mm->fMutexImp);

   if (!fConditionImp)
      Error("TCondition", "could not create ConditionImp");
}


Int_t  TCondition::Wait()
{
  Int_t iret;
  if (fMutex) fMutex->Lock();
  iret = fConditionImp->Wait();
  if (fMutex) {fMutex->UnLock(); delete fMutex; fMutex = NULL;}
  return iret;
}

Int_t  TCondition::TimedWait(ULong_t secs, ULong_t nanoSec)
{
  Int_t iret;
  if (fMutex) fMutex->Lock();
  iret = fConditionImp->TimedWait(secs, nanoSec);
  if (fMutex) {fMutex->UnLock(); delete fMutex; fMutex = NULL;}
  return iret;
}
