//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   02/07/97

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
