//*CMZ :  2.00/00 03/11/97  22.36.08  by  Victor Perev
//*CMZ :  1.03/03 27/08/97  13.01.58  by  Victor Perev
//*-- Author :    Fons Rademakers   26/06/97

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
// TMutex                                                               //
//                                                                      //
// This class implements mutex locks. A mutex is a mutual exclusive     //
// lock. The actual work is done via the TMutexImp class (either        //
// TPosixMutex, TSolarisMutex or TNTMutex).                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#include "TMutex.h"
#include "TThreadFactory.h"


ClassImp(TMutex)

//______________________________________________________________________________
TMutex::TMutex()
{
   // Create mutex lock. The actual mutex implementation will be
   // provided via the TThreadFactory.


   fMutexImp = gThreadFactory->CreateMutexImp();

   if (!fMutexImp)
      Error("TMutex", "could not create MutexImp");
}
Int_t TMutex::Lock()
{
  Int_t id,iret;
  id = TThread::SelfId();
  if (id == fId) {
    fprintf(stderr,"TMutex::Lock() ***ERROR*** mutex is already locked by the same Thread %d",fId);
    return 13;}

  iret = fMutexImp->Lock(); fId = id; return iret;
}


Int_t TMutex::TryLock()
{
  Int_t id,iret;
  id = TThread::SelfId();
  if (id == fId) {
    fprintf(stderr,"TMutex::TryLock() ***ERROR*** mutex is already locked by the same Thread %d",fId);
    return 13;}

  iret = fMutexImp->TryLock(); fId = id; return iret;
}

Int_t TMutex::UnLock()
{
  Int_t id;
  id = TThread::SelfId();
  if (id != fId) {
    fprintf(stderr,"TMutex::UnLock() ***ERROR*** Thread %d tryes to unlock mutex locked by %d",id,fId);
    return 13;}

  fId = 0; return fMutexImp->UnLock();
}
Int_t TMutex::CleanUp()
{
  if ( TThread::SelfId() != fId) return 0;
  return UnLock();
}
