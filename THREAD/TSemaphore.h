//*CMZ :  2.23/12 26/12/99  01.58.52  by  Fons Rademakers
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TSemaphore
#define ROOT_TSemaphore

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

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TMutex
#include "TMutex.h"
#endif
#ifndef ROOT_TCondition
#include "TCondition.h"
#endif


class TSemaphore : public TObject {

private:
   TMutex       fMutex;
   TCondition   fCond;
   Int_t        fValue;

public:
   TSemaphore(UInt_t initial = 1);
   virtual ~TSemaphore() { }

   Int_t  Wait();
   Int_t  TryWait();
   Int_t  Post();

   ClassDef(TSemaphore,0)  // Counting semaphore class
};

#endif
