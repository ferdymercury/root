//*CMZ :  2.00/00 10/10/97  10.53.51  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TCondition
#define ROOT_TCondition

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
// TCondition                                                           //
//                                                                      //
// This class implements a condition variable. Use a condition variable //
// to signal threads. The actual work is done via the TConditionImp     //
// class (either TPosixCondition, TSolarisCondition or TNTCondition).   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TConditionImp
#include "TConditionImp.h"
#endif

class TMutex;


class TCondition : public TObject {

private:
   TConditionImp  *fConditionImp;  // pointer to condition implementation
   TMutex *fMutex;
public:
   TCondition(TMutex *m = NULL);
   virtual ~TCondition() { delete fConditionImp; }

   Int_t  Wait() ;
   Int_t  TimedWait(ULong_t secs, ULong_t nanoSecs = 0) ;
   Int_t  Signal() { if (fConditionImp) return fConditionImp->Signal(); }
   Int_t  Broadcast() { if (fConditionImp) return fConditionImp->Broadcast(); }

   ClassDef(TCondition,0)  // Condition variable class
};

#endif
