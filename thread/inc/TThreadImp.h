//*CMZ :  2.00/00 04/11/97  11.11.44  by  Victor Perev
//*CMZ :  1.03/03 25/08/97  16.25.33  by  Victor Perev
//*-- Author :    Victor Perev   27/07/97

#ifndef ROOT_TThreadImp
#define ROOT_TThreadImp

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
// TThreadImp                                                           //
//                                                                      //
// This class implements threads. A thread is an execution environment  //
// much lighter than a process. A single process can have multiple      //
// threads. The actual work is done via the TThreadImp class (either    //
// TThreadPosix, TThreadSolaris or TThreadNT).                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TThread
#include "TThread.h"
#endif
class TThreadImp : public TObject {
public:

        TThreadImp();
       ~TThreadImp();

virtual Int_t Join(Int_t jid, void **ret)=0;
virtual Int_t SelfId()=0;
virtual Int_t Run(TThread *th)=0;

virtual Int_t Kill(TThread *th)=0;
virtual Int_t SetCancelOff()=0;
virtual Int_t SetCancelOn()=0; 		
virtual Int_t SetCancelAsynchronous()=0;
virtual Int_t SetCancelDeferred()=0; 	
virtual Int_t CancelPoint()=0;
virtual Int_t CleanUpPush(void **main, void *free,void *arg)=0;
virtual Int_t CleanUpPop(void **main, Int_t exe)=0;
virtual Int_t CleanUp(void **main)=0;

virtual Int_t Exit(void *ret)=0;

virtual Int_t Sleep  (ULong_t secs, ULong_t nanos = 0)=0;
virtual Int_t GetTime(ULong_t *absSec, ULong_t *absNanoSec)=0;

ClassDef(TThreadImp,0)  // ThreadImp class

};
#endif



