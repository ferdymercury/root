//*CMZ :  2.23/12 31/12/99  13.51.58  by  Fons Rademakers
//*CMZ :  2.23/10 09/12/99  12.09.23  by  Fons Rademakers
//*CMZ :  2.23/07 27/10/99  15.46.32  by  Rene Brun
//*CMZ :  2.23/00 02/08/99  09.51.41  by  Rene Brun
//*CMZ :  2.22/09 12/07/99  18.13.43  by  Rene Brun
//*CMZ :  2.22/06 21/06/99  17.47.54  by  Rene Brun
//*CMZ :  2.00/00 19/11/97  22.50.48  by  Victor Perev
//*-- Author :    Fons Rademakers   18/06/97

#ifndef ROOT_TThread
#define ROOT_TThread

#include <iostream.h>
#include "Api.h"   // -I$CINTSYSDIR/src -I$CINTSYSDIR
#include "CallFunc.h"


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
// TThread                                                              //
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
#ifndef ROOT_TMutex
#include "TMutex.h"
#endif
#ifndef ROOT_TCondition
#include "TCondition.h"
#endif
#ifndef ROOT_TSystem
#include "TSystem.h"
#endif
#ifndef ROOT_TTimer
#include "TTimer.h"
#endif


enum EPriority {
   kLowPriority,
   kNormalPriority,
   kHighPriority
};

enum EState {
   kInvalidState,      	// object was not created properly
   kNewState,          	// thread object exists but hasn't started
   kRunningState,      	// thread is running
   kTerminatedState,   	// thread has terminated but storage has not
                       	// yet been reclaimed (i.e. waiting to be joined)
   kFinishedState,   	// thread has finished
   kCancelingState, 	// thread in process of canceling
   kCanceledState, 	// thread has been canceled
   kDeletingState 	// thread in process of deleting
};

class TThread : public TNamed {

friend class TThreadImp;
friend class TPosixThreadInit;
friend class TPosixThread;
friend class TThreadTimer;
friend class TThreadCleaner;

private:
//		Data members
   TThread      *fNext;            	// pointer to next thread
   TThread      *fPrev;            	// pointer to prev thread
   TThread      **fHolder;            	// pointer to holder of this (delete only)
   EPriority    fPriority;         	// thread priority
   EState       fState;            	// thread state
   EState       fStateComing;      	// coming thread state
   Int_t        fId;               	// thread id
   Bool_t       fDetached;         	// kTRUE if thread is Detached
   Bool_t       fNamed;         	// kTRUE if thread is Named
   Int_t        fJoinId;           	// thread id to whom can join
   void       *(*fFcnRetn)(void *);	// void* start function of thread
   void        (*fFcnVoid)(void *);     // void  start function of thread
   void        *fThreadArg;             // thread start function arguments
   void        *fClean;                 // support of cleanup structure

   static      TThreadImp  *fgThreadImp;// static pointer to thread implementation
   static char  * volatile fgXAct;      // Action name to do by main thread
   static void ** volatile fgXArr;      // pointer to control array of void pointers for action
   static volatile Int_t  fgXAnb;       // size of array above
   static volatile Int_t  fgXArt;       // return XA flag
   static TThread       *fgMain;        // pointer to chain of TThread's
   static TMutex        *fgMainMutex;   // mutex to protect chain of threads
   static TMutex        *fgXActMutex;   // mutex to protect XAction
   static TCondition    *fgXActCondi;   // Condition for  XAction

   void *fTsd[20];

   char  fComm[100];

//		Private Member functions
   void         Constructor();
   static void *Fun(void *ptr);
   static Int_t XARequest(const char *xact, Int_t nb, void **ar, Int_t *iret);
   static unsigned long Call(void  *p2f, void *arg);
   static void  AfterCancel(TThread *th);
   void PutComm(const char *txt = NULL){fComm[0]='\0'; if (txt) strcpy(fComm,txt);};
   char *GetComm(){ return fComm;};


//		Public Member functions

public:
   ~TThread(); // delete is forbidden for user
   static void   Debu(const char *txt);
   static Int_t  Delete(TThread* &th);
   static void **Tsd(void *dflt, Int_t k);

   TThread(void  *(*fn)(void*), void *arg = 0,  EPriority pri = kNormalPriority);
   TThread(void   (*fn)(void*), void *arg = 0,  EPriority pri = kNormalPriority);
   ////////// begin changes (J.A.):
   // additional constructors with own threadname thname
   // as useful for invoking thread from compiled program:
   TThread(const Text_t *thname, void  *(*fn)(void*), void *arg = 0,  EPriority pri = kNormalPriority);
   TThread(const Text_t *thname, void   (*fn)(void*), void *arg = 0,  EPriority pri = kNormalPriority);
   /////////////// end changes (J.A.)
   Int_t               Run(void *arg = 0);
   static    Int_t     Join(Int_t id,void **ret=0);
   static    Int_t     Join(         void **ret=0);
   Int_t               SetPriority(EPriority pri);
   EPriority           GetPriority() ;
   EState              GetState() const;
   Int_t               GetId()  ;
   Int_t               SetJoinId(TThread *tj);  //Set JoinId
   Int_t               SetJoinId(Int_t jid);  	//Set JoinId
   static    Int_t     Exit(void *ret = 0);	//exit from thread
   static TThread     *GetThread(Int_t id);     //Find TThread by Id
   static TThread     *GetThread(const Text_t *name); //Find TThread by name

   static Int_t        Lock();			//User's lock of main mutex
   static Int_t        TryLock();		//User's try lock of main mutex
   static Int_t        UnLock();		//User's unlock of main mutex
   static TThread      *Self();			//return self TThread
   static Int_t        SelfId();		//return self id
   static Int_t        Sleep(ULong_t secs, ULong_t nanos = 0);
   static Int_t        GetTime(ULong_t *absSec, ULong_t *absNanoSec);

//	Cancelation
//	There are two types of TThread cancellation :
//      DEFERRED     - Cancelation only in user provided cancel-points
//	ASYNCHRONOUS - In any point
//	DEFERRED is more safe, it is DEFAULT.

   Int_t               Kill();			 //kill the thread
   static    Int_t     Kill(Int_t id);		 //kill the thread by Id
   static    Int_t     Kill(const Text_t *name); //kill the thread by name
   static    Int_t     SetCancelOff(); 		 // Cancellation OFF
   static    Int_t     SetCancelOn(); 		 // Cancellation ON
   static    Int_t     SetCancelAsynchronous();  // Cancellation type Asynchronous
   static    Int_t     SetCancelDeferred(); 	 // Cancellation type
   static    Int_t     CancelPoint();            // Setcancel point
   static    Int_t     CleanUpPush(void *free,void *arg=0); // Push user function "free" to be called in cancel case
   static    Int_t     CleanUpPop(Int_t exe=0); // Pop user function
   static    Int_t     CleanUp(); // Pop user function
                             	
//      Info
   void                Ps();			// Analog unix ps
   void                ps(){Ps();};		// Analog unix ps

//
//	XActions
   static void Printf(const char *txt);
   static void Printf(const char *txt,Int_t i);
   static void Printf(const char *txt,void* i){Printf(txt,(int)i);}


//	Compilation and dynamic link
   static Int_t MakeFun(char *funname);

   static void XAction();

  ClassDef(TThread,0)  // Thread class


};

//	Compilation and dynamic link
//static Int_t MakeFun(char *funname);

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TThreadCleaner                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TThreadCleaner {
public:

  TThreadCleaner(){};
 ~TThreadCleaner();
};




//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TThreadTimer                                                        //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

class TThreadTimer : public TTimer {
  public:
    TThreadTimer(  Long_t ms=100 ) ;
    Bool_t Notify();
};

#endif

