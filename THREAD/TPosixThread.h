//*CMZ :  2.22/06 17/06/99  14.56.50  by  Rene Brun
//*CMZ :  2.00/00 19/11/97  01.10.20  by  Victor Perev
//*CMZ :  1.03/03 08/09/97  16.25.47  by  Rene Brun
//*-- Author :    Fons Rademakers   02/07/97

#ifndef ROOT_TPosixThread
#define ROOT_TPosixThread

/*CMZ :  2.22/05 11/06/99  10.59.09  by  Fons Rademakers*/
/*CMZ :  2.00/00 01/01/98  14.57.05  by  Fons Rademakers*/
/*CMZ :  1.03/09 03/12/97  01.52.20  by  Fons Rademakers*/
/*-- Author :    Rene Brun   23/03/97*/
/*************************************************************************
 * Copyright(c) 1995-1999, The ROOT System, All rights reserved.         *
 * Authors: Rene Brun, Fons Rademakers.                                  *
 * For list of contributors see $ROOTSYS/AA_CREDITS.                     *
 *                                                                       *
 * Permission to use, copy, modify and distribute this software and its  *
 * documentation for non-commercial purposes is hereby granted without   *
 * fee, provided that the above copyright notice appears in all copies   *
 * and that both the copyright notice and this permission notice appear  *
 * in the supporting documentation. The authors make no claims about the *
 * suitability of this software for any purpose. It is provided "as is"  *
 * without express or implied warranty.                                  *
 *************************************************************************/

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPosixThread                                                         //
//                                                                      //
// This class provides an interface to the posix thread routines.       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TThreadImp
#include "TThreadImp.h"
#endif

#ifndef __CINT__
#include <pthread.h>
#else
#include "R__pthread.h"
#endif

R__EXTERN "C" unsigned int sleep(unsigned int seconds);
class TPosixThreadCleanUp ;


class TPosixThread : public TThreadImp {
//friend class TPosixThreadFactory ;

public:
TPosixThread();
TPosixThreadCleanUp *fCleanUp;

virtual Int_t Join(Int_t jid, void **ret);
virtual Int_t SelfId();
virtual Int_t Run(TThread *th);

virtual Int_t Kill(TThread *th);
virtual Int_t SetCancelOff();
virtual Int_t SetCancelOn(); 		
virtual Int_t SetCancelAsynchronous();
virtual Int_t SetCancelDeferred(); 	
virtual Int_t CancelPoint();
virtual Int_t CleanUpPush(void **main, void *free,void *arg);
virtual Int_t CleanUpPop(void **main, Int_t exe );
virtual Int_t CleanUp(void **main);

virtual Int_t Exit(void *ret);


virtual Int_t Sleep  (ULong_t secs, ULong_t nanos = 0);
virtual Int_t GetTime(ULong_t *absSec, ULong_t *absNanoSec);


ClassDef(TPosixThread,0)  // TPosixThread class
};

class  TPosixThreadCleanUp {
friend class TPosixThread ;

void *fRoutine;
void *fArgument;
TPosixThreadCleanUp *fNext;

public:
 TPosixThreadCleanUp(void **main,void *routine,void *arg);
~TPosixThreadCleanUp();

};





#endif
