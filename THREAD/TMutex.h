//*CMZ :  2.24/01 02/02/2000  12.46.09  by  Fons Rademakers
//*CMZ :  2.00/00 03/11/97  22.38.18  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TMutex
#define ROOT_TMutex

/*CMZ :  2.24/01 24/02/2000  11.49.40  by  Fons Rademakers*/
/*CMZ :  2.23/03 27/09/99  02.25.01  by  Fons Rademakers*/
/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright (C) 1995-2000, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
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


//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TLockGuard                                                           //
//                                                                      //
// This class provides mutex resource management in a guaranteed and    //
// exception safe way. Use like this:                                   //
// {                                                                    //
//    TLockGuard guard(mutex);                                          //
//    ... // do something                                               //
// }                                                                    //
// when guard goes out of scope the mutex is unlocked in the TLockGuard //
// destructor. The exception mechanism takes care of calling the dtors  //
// of local objects so it is exception safe.                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TLockGuard {

private:
   TMutex *fMutex;

public:
   TLockGuard(TMutex *mutex) { fMutex = mutex; fMutex->Lock(); }
   virtual ~TLockGuard() { fMutex->UnLock(); }

   ClassDef(TLockGuard,0)  // Exception safe locking/unlocking of TMutex
};


#endif
