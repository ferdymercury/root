//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   02/07/97

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
// TSemaphore                                                           //
//                                                                      //
// This class implements a counting semaphore. Use a semaphore          //
// to synchronize threads.                                              //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TSemaphore.h"

ClassImp(TSemaphore)

//______________________________________________________________________________
TSemaphore::TSemaphore(UInt_t initial) : fCond(&fMutex)
{
   // Create counting semaphore.

   fValue = initial;
}

//______________________________________________________________________________
Int_t TSemaphore::Wait()
{
   // If semaphore value is > 0 then decrement it and carry on. If it's
   // already 0 then block.

   fMutex.Lock();

   while (fValue == 0) {
      int rc = fCond.Wait();

      if (rc != 0) {
         fMutex.UnLock();
         return rc;
      }
   }

   fValue--;

   fMutex.UnLock();

   return 0;
}

//______________________________________________________________________________
Int_t TSemaphore::TryWait()
{
   // If semaphore value is > 0 then decrement it and return 0. If it's
   // already 0 then return 1.

   fMutex.Lock();

   if (fValue == 0) {
      fMutex.UnLock();
      return 1;
   }

   fValue--;

   fMutex.UnLock();

   return 0;
}

//______________________________________________________________________________
Int_t TSemaphore::Post()
{
   // If any threads are blocked in Wait(), wake one of them up. Otherwise
   // increment the value of the semaphore.

   fMutex.Lock();

   if (fValue == 0)
      fCond.Signal();

   fValue++;

   fMutex.UnLock();

   return 0;
}
