//*CMZ :  2.00/00 04/11/97  10.09.22  by  Victor Perev
//*CMZ :  1.03/03 08/09/97  16.25.47  by  Rene Brun
//*-- Author :    Fons Rademakers   01/07/97

#ifndef ROOT_TPosixCondition
#define ROOT_TPosixCondition

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
// TPosixCondition                                                      //
//                                                                      //
// This class provides an interface to the posix condition variable     //
// routines.                                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TConditionImp
#include "TConditionImp.h"
#endif

#include <pthread.h>

class TMutexImp;
class TPosixMutex;


class TPosixCondition : public TConditionImp {

private:
   TPosixMutex    *fMutex;   // mutex used around Wait() and TimedWait()
   pthread_cond_t  fCond;    // the pthread condition variable

public:
   TPosixCondition(TMutexImp *m);
   virtual ~TPosixCondition();

   Int_t  Wait();
   Int_t  TimedWait(ULong_t secs, ULong_t nanoSecs = 0);
   Int_t  Signal();
   Int_t  Broadcast();

ClassDef(TPosixCondition,0)
};

#endif
