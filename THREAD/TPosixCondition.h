//*CMZ :  2.23/12 26/12/99  01.28.18  by  Fons Rademakers
//*CMZ :  2.23/09 05/11/99  15.30.25  by  Rene Brun
//*CMZ :  2.22/06 17/06/99  14.53.03  by  Rene Brun
//*CMZ :  2.00/00 04/11/97  10.09.22  by  Victor Perev
//*CMZ :  1.03/03 08/09/97  16.25.47  by  Rene Brun
//*-- Author :    Fons Rademakers   01/07/97

#ifndef ROOT_TPosixCondition
#define ROOT_TPosixCondition

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
// TPosixCondition                                                      //
//                                                                      //
// This class provides an interface to the posix condition variable     //
// routines.                                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TConditionImp
#include "TConditionImp.h"
#endif

#ifndef __CINT__
#include <pthread.h>
#else
struct pthread_cond_t;
#endif

class TMutexImp;
class TPosixMutex;


class TPosixCondition : public TConditionImp {

private:
   pthread_cond_t  fCond;    // the pthread condition variable
   TPosixMutex    *fMutex;   // mutex used around Wait() and TimedWait()

public:
   TPosixCondition(TMutexImp *m);
   virtual ~TPosixCondition();

   Int_t  Wait();
   Int_t  TimedWait(ULong_t secs, ULong_t nanoSecs = 0);
   Int_t  Signal();
   Int_t  Broadcast();

   ClassDef(TPosixCondition,0)   // Posix condition variable
};

#endif
