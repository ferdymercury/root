//*CMZ :  2.23/12 02/01/2000  02.04.23  by  Fons Rademakers
//*CMZ :  2.00/00 03/11/97  22.38.18  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TMutex
#define ROOT_TMutex

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
// TMutex                                                               //
//                                                                      //
// This class implements mutex locks. A mutex is a mutual exclusive     //
// lock. The actual work is done via the TMutexImp class (either        //
// TPosixMutex, TSolarisMutex or TNTMutex).                             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TThread
#include "TThread.h"
#endif
#ifndef ROOT_TMutexImp
#include "TMutexImp.h"
#endif


class TMutex : public TObject {

friend class TCondition;

private:
   TMutexImp  *fMutexImp;   // pointer to mutex implementation
   UInt_t      fId;         // id of thread which locked mutex
   Int_t       fRef;        // reference count in case of recursive locking by same thread

public:
   TMutex(Bool_t recursive = kFALSE);
   virtual ~TMutex() { delete fMutexImp; }

   Int_t  Lock() ;
   Int_t  TryLock() ;
   Int_t  UnLock() ;
   Int_t  Acquire() { return Lock(); }
   Int_t  Release() { return UnLock(); }
   Int_t  CleanUp();

   ClassDef(TMutex,0)  // Mutex lock class
};

#endif
