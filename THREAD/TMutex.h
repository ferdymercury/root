//*CMZ :  2.00/00 03/11/97  22.38.18  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TMutex
#define ROOT_TMutex

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
   UInt_t fId;              // Thread ID who locked mutex
public:
   TMutex();
   virtual ~TMutex() { delete fMutexImp; }

   Int_t  Lock() ;
   Int_t  TryLock() ;
   Int_t  UnLock() ;
   Int_t  Acquire() { return Lock(); }
   Int_t  Release() { return UnLock(); }
   Int_t  CleanUp(); // CleanUp of mutex if it belong to thread

   ClassDef(TMutex,0)  // Mutex class
};

#endif

