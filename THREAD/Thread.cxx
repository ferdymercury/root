//*CMZ :  2.00/00 20/11/97  02.39.25  by  Victor Perev
//*CMZ :  1.03/03 08/09/97  16.27.45  by  Rene Brun
//*-- Author :    Fons Rademakers   02/07/97

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
// TThread                                                              //
//                                                                      //
// This class implements threads. A thread is an execution environment  //
// much lighter than a process. A single process can have multiple      //
// threads. The actual work is done via the TThreadImp class (either    //
// TThreadPosix, TThreadSolaris or TThreadNT).                          //
//                                                                      //
//////////////////////////////////////////////////////////////////////////
#include "TThread.h"
#include "TThreadImp.h"
#include "TThreadFactory.h"


TThreadImp     *TThread::fgThreadImp = 0;
TThread        *TThread::fgMain = 0;
TMutex         *TThread::fgMainMutex;
char  *volatile TThread::fgXAct = NULL;	
TMutex         *TThread::fgXActMutex;
TCondition     *TThread::fgXActCondi;
void **volatile TThread::fgXArr = NULL;
volatile Int_t  TThread::fgXAnb = 0;
volatile Int_t  TThread::fgXArt = 0;
ClassImp(TThread)

//______________________________________________________________________________
void      TThread::Debu(char *txt)
{
  fprintf(stderr,"TThread::Debu %s %d \n",txt,fgMain->fId);
}

Int_t     TThread::GetId()  { return fId; }


Int_t     TThread::SetPriority(EPriority pri){ fPriority=pri;return 0;}
EPriority TThread::GetPriority() {return fPriority;}

EState    TThread::GetState  () const {return fState;};
Int_t     TThread::SetJoinId (Int_t jid)    {fJoinId = jid;   return 0;}
Int_t     TThread::SetJoinId (TThread *tj)  {return SetJoinId(tj->fId);}

 TThread  *TThread::GetThread(UInt_t id)
{
  TThread *myth;

  for (myth = fgMain; myth && (myth->fId!= id); myth=myth->fNext){};
  return myth;
}

 TThread  *TThread::GetThread(Text_t *name)
{
  TThread *myth;

  for (myth = fgMain; myth && (strcmp(name,myth->GetName())); myth=myth->fNext){};
  return myth;
}
 TThread  *TThread::Self()
{
  return GetThread(SelfId());
}

 Int_t TThread::Join(void **ret){ return TThread::Join(0,ret);}


//
// Constructors for TThread - set up the thread object but don't
// start it running.
//

// construct a Detached thread running a given function.

TThread::TThread(void *(*fn)(void*), void* arg, EPriority pri)
{
    fDetached = kFALSE;
    fFcnVoid = NULL;
    fFcnRetn = fn;
    fPriority = pri;
    fThreadArg = arg;
    Constructor();
}

TThread::TThread(void  (*fn)(void*), void* arg, EPriority pri)
{
    fDetached = kTRUE;
    fFcnRetn = NULL;
    fFcnVoid = fn;
    fPriority = pri;
    fThreadArg = arg;
    Constructor();
}

void TThread::Constructor() {
    fState = kNewState;

    fId = 0;
    if (!fgThreadImp) { // *** Only once ***
      fgThreadImp = gThreadFactory->CreateThreadImp();
      fgMainMutex = new TMutex;
      fgXActMutex = new TMutex;
      TThreadTimer *iTimer = new TThreadTimer;
      fgXActCondi = new TCondition;
      gThreadTsd = &(TThread::Tsd);
      gThreadXAR  = &(TThread::XARequest);
    }

    PutComm("Constructor: MainMutex Locking");
    Lock();
    PutComm("Constructor: MainMutex Locked");
    fTsd[0] = gPadMain;

    if (fgMain) fgMain->fPrev = this;
    fNext = fgMain; fPrev=NULL; fgMain = this;

    UnLock();
    PutComm();

    // thread is set up in initialisation routine or start().
}

TThread::~TThread()
{
 char cbuf[100];
 sprintf(cbuf,"*** Thread %s.%d is DELETED ***",GetName(),fId);
 TThread::Printf("\n %s\n\n",cbuf);

//  	Disconnect thread instance

 PutComm("Destructor: MainMutex Locking");
 Lock();
 PutComm("Destructor: MainMutex Locked");
  if (fPrev) fPrev->fNext = fNext;
  if (fNext) fNext->fPrev = fPrev;
  if (fgMain == this) fgMain = fNext;
 UnLock();
 PutComm();
  if (fHolder) *(fHolder) = NULL;
 }


Int_t TThread::Delete(TThread* &th)
{
  char cbuf[100];

  if (! th) return 0;
  th->fHolder = &(th);

  if (th->fState == kRunningState) {// Cancel if running
    th->fState = kDeletingState;
    sprintf(cbuf,"*** Thread %s.%d Deleting ***",th->GetName(),th->fId);
    TThread::Printf("\n %s\n\n",cbuf);
    th->Kill(); return -1;}

  th->CleanUp();

}



// Implementation dependent part of member function

 Int_t     TThread::Join(Int_t jid, void **ret)
{
  Int_t jd = jid;
  if (! jd) {// jd is not known
    TThread *myth = TThread::Self();
    if (! myth) return -1;
    jd = myth->fJoinId;
    if (! jd  ) return -1;
  }
  return fgThreadImp->Join(jd,ret);
}

 Int_t TThread::SelfId()
 {Int_t id = fgThreadImp->SelfId();
  if (! id) id = -1; // in some implementations 0 is main thread
  return id;
 }



Int_t TThread::Run(void *arg)
{
char *fname;

if (arg) fThreadArg = arg;
  PutComm("Run: MainMutex locking");
  Lock();
  PutComm("Run: MainMutex locked");
  if (fFcnVoid) fname=G__p2f2funcname(fFcnVoid);
  if (fFcnRetn) fname=G__p2f2funcname(fFcnRetn);
  if (fname) SetName(fname);

  int iret = fgThreadImp->Run (this);

  fState =  (iret) ? kInvalidState : kRunningState;
  fprintf(stderr,"\nThread %s ID=%d requested\n\n",GetName(),fId);
  UnLock();
  PutComm();
  return iret;
}

Int_t TThread::Kill()
{
  if (fState != kRunningState && fState != kDeletingState)
  {  fprintf(stderr,"TThread::Kill. thread %d is not running\n",fId);
     return 13;
  } else {
     if (fState == kRunningState ) fState = kCancelingState;
     return fgThreadImp->Kill(this);
  }
}
Int_t TThread::Kill(UInt_t id)
{
  TThread *th = GetThread(id);
  if (th) {return fgThreadImp->Kill(th);
  } else  {fprintf(stderr,"TThread::Kill thread %d not found ***\n",id);
           return 13;}
}

Int_t TThread::Kill(Text_t *name)
{
  TThread *th = GetThread(name);
  if (th) {return fgThreadImp->Kill(th);
  } else  {fprintf(stderr,"TThread::Kill thread %s not found ***\n",name);
           return 13;}
}

Int_t     TThread::SetCancelOff(){return fgThreadImp-> SetCancelOff();} 		
Int_t     TThread::SetCancelOn() {return fgThreadImp->SetCancelOn();}
Int_t     TThread::SetCancelAsynchronous(){return fgThreadImp->SetCancelAsynchronous();}
Int_t     TThread::SetCancelDeferred()    {return fgThreadImp->SetCancelDeferred();}
Int_t     TThread::CancelPoint(){return fgThreadImp->CancelPoint();}

Int_t TThread::CleanUpPush(void *free,void *arg)
{
  return fgThreadImp->CleanUpPush(&(Self()->fClean),free,arg);
}

Int_t TThread::CleanUpPop(Int_t exe)
{
  return fgThreadImp->CleanUpPop(&(Self()->fClean),exe);
}

Int_t TThread::CleanUp()
{
  TThread *th = Self();
  if (! th) return 13;

  fgThreadImp->CleanUp(&(Self()->fClean));
  th->fgMainMutex->CleanUp();
  th->fgXActMutex->CleanUp();
  if(th->fHolder) { // It was kill from delete
    delete th;
  };
  return 0;
}



void TThread::AfterCancel(TThread *th)
{
  th->fState = kCanceledState;
  char cbuf[100];
  sprintf(cbuf,"*** Thread %s.%d is KILLED ***",th->GetName(),th->fId);
  TThread::Printf("\n %s\n\n",cbuf);
}


 Int_t TThread::Exit(void *ret){return fgThreadImp->Exit(ret);};

 Int_t TThread::Sleep(ULong_t secs, ULong_t nanos )
{ return fgThreadImp->Sleep(        secs,         nanos);}

 Int_t TThread::GetTime(ULong_t *absSec, ULong_t *absNanoSec)
{ return fgThreadImp->GetTime(         absSec,          absNanoSec);}

Int_t TThread::Lock()   {return fgMainMutex->Lock();  }    // lock main mutex
Int_t TThread::TryLock(){return fgMainMutex->TryLock();}   // lock main mutex
Int_t TThread::UnLock() {return fgMainMutex->UnLock();}    // unlock main mutex


unsigned long TThread::Call(void *p2f,void *arg) {

 char *fname;
   void *iPointer2Function;
   G__CallFunc fFunc;
   int iPointerType = G__UNKNOWNFUNC;

// reconstruct function name
  fname=G__p2f2funcname(p2f);
  if(fname) {
    G__ClassInfo globalscope;
    G__MethodInfo method;
    long dummy;
// resolve function overloading
    method=globalscope.GetMethod(fname,"void*",&dummy);
    if(method.IsValid()) {
// get pointer to function again after overloading resolution
      iPointer2Function=method.PointerToFunc();
// check what kind of pointer is it
      iPointerType = G__isinterpretedp2f(iPointer2Function);

      switch(iPointerType) {

        case G__COMPILEDINTERFACEMETHOD: // using interface method
        fFunc.SetFunc((G__InterfaceMethod)iPointer2Function);
        break;

        case G__BYTECODEFUNC: // bytecode version of interpreted func
        fFunc.SetBytecode((struct G__bytecodefunc*)iPointer2Function);
      }
    }
    else {
      cerr << "no overloading parameter matches" << endl;
    }
  }

// check what kind of pointer is it
  switch(iPointerType) {

    case G__INTERPRETEDFUNC: // reconstruct function call as string
      char temp[20],para[200];
      strcpy(para,(char*)iPointer2Function);
      strcat(para,"(");

      sprintf(temp,"(void*)%#lx,",(unsigned long)arg);
      strcat(para,temp); strcat(para,")");
      return G__int(G__calc(para));

    case G__COMPILEDINTERFACEMETHOD: // using interface method
    case G__BYTECODEFUNC:            // bytecode version of interpreted func
      fFunc.SetArg((long)arg);
      return fFunc.ExecInt((void*)NULL);

    case G__COMPILEDTRUEFUNC: // using true pointer to function
    case G__UNKNOWNFUNC: // this case will never happen
      return (*(int (*)(void*))iPointer2Function)(arg);
  }

  cerr << "TThread::Call. *** Something very WRONG ****" << endl;

  return 0xffffffff;
}

void *TThread::Fun(void *ptr) {
  TThread *th;
  void *ret,*arg;
  char cbuf[100];

  TThreadCleaner dummy;

  th = (TThread *)ptr;

//  Default cancel state is OFF
//  Default cancel type  is DEFERRED
//  User can change it by call SetCancelON & SetCancelAsynchronous()
  SetCancelOff();
  SetCancelDeferred();
  CleanUpPush(&AfterCancel,th);  // Enable standard cancelling function

  th = (TThread *)ptr;
  th->fId = SelfId(); th->SetUniqueID(th->fId);

  sprintf(cbuf,"Thread %s.%d is running",th->GetName(),th->fId);
  TThread::Printf("\n %s\n\n",cbuf);

  arg = th->fThreadArg;
  th->fState = kRunningState;

  if (th->fDetached) { //Detached, non joinable thread

    TThread::Call((void*)th->fFcnVoid,arg);
    ret = NULL;
    th->fState = kFinishedState;
  } else             { //UnDetached, joinable thread
    ret = (void*)TThread::Call((void*)th->fFcnRetn,arg);
    th->fState = kTerminatedState;
  }

  CleanUpPop(0);// Disable standard cancelling function

  sprintf(cbuf,"Thread %s.%d finished",th->GetName(),th->fId);
  TThread::Printf("\n %s\n\n",cbuf);

  TThread::Exit(ret);


  return ret;
}

void TThread::Ps() { // List existing threads
  TThread *l;
  int i;

  if (! fgMain) { //no threads
    printf("*** No threads, ***\n"); return;}

  Lock();

  int num=0; for(l=fgMain; l ; l = l->fNext) {num++;};

  char cbuf[100];
  printf("     Thread         State\n");
  for (l = fgMain; l; l = l->fNext) { // loop over threads
    memset(cbuf,' ',100);
    sprintf(cbuf, "%3d  %s.%d",num--,l->GetName(),l->fId);
    i = strlen(cbuf); if (i<20) cbuf[i]=' '; cbuf[20]=0;
    printf("%20s",cbuf);

    switch (l->fState) {// print states

      case kNewState:        printf("Idle       "); break;
      case kRunningState:    printf("Running    "); break;
      case kTerminatedState: printf("Terminated "); break;
      case kFinishedState:   printf("Finished   "); break;
      case kCancelingState:  printf("Canceling  "); break;
      case kCanceledState:   printf("Canceled   "); break;
      case kDeletingState:   printf("Deleting   "); break;
      default:               printf("Invalid    ");
    };
    if (l->fComm[0]) printf("  // %s\n",l->fComm);
    printf("\n");
  }// end of loop

  UnLock();
}


void **TThread::Tsd(void *dflt,Int_t k) {
  TThread *th = TThread::Self();

  if (!th) {//Main thread
     return (void**)dflt;
  } else {
     return &(th->fTsd[k]);
  }
}

void TThread::Printf(char *txt) {
  Printf(txt,0);
}
void TThread::Printf(char *txt,Int_t in) {
  void *arr[3];

  arr[1] = txt; arr[2] = &in;
  if (XARequest("PRTF", 3, arr, NULL)) return;

  fprintf(stderr,txt,in);
}


Int_t TThread::XARequest(char *xact, Int_t nb, void **ar, Int_t *iret) {
   TThread *th;
   if ((th=Self())) { // we are in the thread

     th->PutComm("XARequest: XActMutex Locking");
     fgXActMutex ->Lock();
     th->PutComm("XARequest: XActMutex Locked");
     fgXAnb = nb;
     fgXArr = ar;
     fgXArt = 0;
     fgXAct = xact;
//     while(fgXAct) {gSystem->Sleep(10);};
//     th->PutComm("XARequest: Condition Wait");
     th->PutComm(fgXAct);

//	THis nasty tric for Linux only
//     fgXActCondi->Wait();
     while (fgXAct) {fgXActCondi->TimedWait(1);}

     th->PutComm();
     if (iret) *iret = fgXArt;
     fgXActMutex ->UnLock();
     th->PutComm();
     return 1997;
   } else {            //we are in the main thread

     return 0;
   }
}


void TThread::XAction()
{
  char const acts[] = "PRTF CUPD CANV CDEL";
  enum {kPRTF=0,kCUPD=5,kCANV=10,kCDEL=15};
  int iact = strstr(acts,fgXAct) - acts;

  switch(iact) {


    case kPRTF:
    fprintf(stderr,(char*)fgXArr[1],*((Int_t*)(fgXArr[2])));
    break;

    case kCUPD:
    ((TCanvas *)fgXArr[1])->Update();
    break;

    case kCANV:

    switch(fgXAnb) { //	Over TCanvas constructors

      case 2:
      ((TCanvas*)fgXArr[1])->Constructor();
      break;

      case 6:
      ((TCanvas*)fgXArr[1])->Constructor(
                              (Text_t*)fgXArr[2],
                              (Text_t*)fgXArr[3],
                            *((Int_t*)(fgXArr[4])),
                            *((Int_t*)(fgXArr[5])));
      break;

      case 8:
      ((TCanvas*)fgXArr[1])->Constructor(
                              (Text_t*)fgXArr[2],
                              (Text_t*)fgXArr[3],
                            *((Int_t*)(fgXArr[4])),
                            *((Int_t*)(fgXArr[5])),
                            *((Int_t*)(fgXArr[6])),
                            *((Int_t*)(fgXArr[7])));
      break;

    }
    gSystem->Sleep(10000);
    break;

    case kCDEL:
    ((TCanvas*)fgXArr[1])->Destructor();
    break;


    default: fprintf(stderr,"TThread::XARequest. Wrong case\n");

  }

  fgXAct = NULL;
  fgXActCondi->Signal();

}

Int_t TThread::MakeFun(char *funname)
{ int iret;
  char cbuf[100];
  sprintf(cbuf,"make -f $ROOTSYS/thread/MakeFun.mk fun=%s",funname);
  if (iret = gSystem->Exec(cbuf)) return iret;
  sprintf(cbuf,"%s.so",funname);
  return gSystem->Load(cbuf);
}




//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  TThreadTimer                                                       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////


//______________________________________________________________________________
    TThreadTimer::TThreadTimer(  Long_t ms) : TTimer( ms, kTRUE )
{
    gSystem->AddTimer(this);
}

Bool_t TThreadTimer::Notify()
{

    if( TThread::fgXAct ) { TThread::XAction();}
    Reset();

    return( kFALSE );
}

//////////////////////////////////////////////////////////////////////////
//                                                                      //
//  TThreadCleaner                                                      //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

TThreadCleaner::~TThreadCleaner()
{

  TThread::CleanUp(); // Call user clean up routines
}


