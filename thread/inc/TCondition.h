//*CMZ :  2.23/12 30/12/99  01.19.11  by  Fons Rademakers
//*CMZ :  2.22/06 17/06/99  14.51.23  by  Rene Brun
//*CMZ :  2.00/00 10/10/97  10.53.51  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Fons Rademakers
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TCondition
#define ROOT_TCondition

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
   TConditionImp  *fConditionImp;  // pointer to condition variable implementation
   TMutex         *fMutex;         // mutex used around Wait() and TimedWait()

public:
   TCondition(TMutex *m = 0);
   virtual ~TCondition();

   TMutex *GetMutex() const;

   Int_t   Wait();
   Int_t   TimedWait(ULong_t secs, ULong_t nanoSecs = 0);
   Int_t   Signal() { if (fConditionImp) return fConditionImp->Signal(); return -1; }
   Int_t   Broadcast() { if (fConditionImp) return fConditionImp->Broadcast(); return -1; }

   ClassDef(TCondition,0)  // Condition variable class
};

#endif
