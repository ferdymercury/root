//*CMZ :  2.23/12 06/01/2000  11.16.15  by  Fons Rademakers
//*-- Author :    Fons Rademakers   04/01/2000

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
// TRWLock                                                              //
//                                                                      //
// This class implements a reader/writer lock. A rwlock allows          //
// a resource to be accessed by multiple reader threads but only        //
// one writer thread.                                                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TRWLock.h"

ClassImp(TRWLock)

//______________________________________________________________________________
TRWLock::TRWLock() : fLockFree(&fMutex)
{
   // Create reader/write lock.

   fReaders = 0;
   fWriters = 0;
}

//______________________________________________________________________________
Int_t TRWLock::ReadLock()
{
   // Obtain a reader lock. Returns always 0.

   fMutex.Lock();

   while (fWriters)
      fLockFree.Wait();

   fReaders++;

   fMutex.UnLock();

   return 0;
}

//______________________________________________________________________________
Int_t TRWLock::ReadUnLock()
{
   // Unlock reader lock. Returns -1 if thread was not locked,
   // 0 if everything ok.

   fMutex.Lock();

   if (fReaders == 0) {
      fMutex.UnLock();
      return -1;
   } else {
      fReaders--;
      if (fReaders == 0)
         fLockFree.Signal();
      fMutex.UnLock();
      return 0;
   }
}

//______________________________________________________________________________
Int_t TRWLock::WriteLock()
{
   // Obtain a writer lock. Returns always 0.

   fMutex.Lock();

   while (fWriters || fReaders)
      fLockFree.Wait();

   fWriters++;

   fMutex.UnLock();

   return 0;
}

//______________________________________________________________________________
Int_t TRWLock::WriteUnLock()
{
   // Unlock writer lock. Returns -1 if thread was not locked,
   // 0 if everything ok.

   fMutex.Lock();

   if (fWriters == 0) {
      fMutex.UnLock();
      return -1;
   } else {
      fWriters = 0;
      fLockFree.Broadcast();
      fMutex.UnLock();
      return 0;
   }
