//*CMZ :  2.23/10 03/12/99  00.19.08  by  Rene Brun
//*CMZ :  2.22/06 21/06/99  17.46.09  by  Rene Brun
//*CMZ :  2.00/00 03/11/97  21.09.10  by  Victor Perev
//*CMZ :  1.03/03 04/09/97  15.52.33  by  Victor Perev
//*-- Author :    Fons Rademakers   02/07/97

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
// TPosixThread                                                         //
//                                                                      //
// This class provides an interface to the posix thread routines.       //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TPosixThread.h"


ClassImp(TPosixThread)
TPosixThread::TPosixThread(){}

Int_t TPosixThread::Run(TThread *th)
{
  int det;
  pthread_t id;
  pthread_attr_t *attr = new pthread_attr_t;



  pthread_attr_init(attr);


//	Set detach state
  det = (th->fDetached) ? PTHREAD_CREATE_DETACHED:PTHREAD_CREATE_JOINABLE;

  pthread_attr_setdetachstate(attr, det);
  int ierr = pthread_create(&id, attr, &TThread::Fun,th);
  th->fId = id; SetUniqueID(th->fId);
  if (attr)  pthread_attr_destroy(attr);
  return ierr;
}


Int_t TPosixThread::Join(Int_t jid, void **ret)
{
  return pthread_join((pthread_t) jid, ret);
}

Int_t TPosixThread::Exit(void *ret)
{
  pthread_exit(ret); return 0;
}


Int_t TPosixThread::Kill(TThread *th)
{
  return pthread_cancel(th->fId);
}
Int_t TPosixThread::SetCancelOff()
      {return pthread_setcancelstate(PTHREAD_CANCEL_DISABLE,     NULL);}
Int_t TPosixThread::SetCancelOn()
      {return pthread_setcancelstate(PTHREAD_CANCEL_ENABLE,      NULL);} 		
Int_t TPosixThread::SetCancelAsynchronous()
      {return pthread_setcanceltype (PTHREAD_CANCEL_ASYNCHRONOUS,NULL);}
Int_t TPosixThread::SetCancelDeferred()
      {return pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,    NULL);} 	
Int_t TPosixThread::CancelPoint()
{
  int istate;
  pthread_setcancelstate(PTHREAD_CANCEL_ENABLE ,&istate );
  pthread_testcancel();
  pthread_setcancelstate(istate ,NULL );

  return 0;
}

Int_t TPosixThread::CleanUpPush(void **main, void *free,void *arg)
{
// pthread_cleanup_push(free, arg);
  if (!free) fprintf(stderr,"CleanUpPush ***ERROR*** Routine=NULL\n");
  new TPosixThreadCleanUp(main,free,arg);
  return 0;
}

Int_t TPosixThread::CleanUpPop(void **main,Int_t exe)
{
//  pthread_cleanup_pop(exe); // happy pthread future

  if (! *main) return 1;
  TPosixThreadCleanUp *l = (TPosixThreadCleanUp*)(*main);
  if (!l->fRoutine) fprintf(stderr,"CleanUpPop ***ERROR*** Routine=NULL\n");
  if (exe && l->fRoutine) ((void (*)(void*))(l->fRoutine))(l->fArgument);
  *main = l->fNext;  delete l;
  return 0;
}
Int_t TPosixThread::CleanUp(void **main)
{
fprintf(stderr," CleanUp %lx\n",(Long_t)*main);
while( !CleanUpPop(main,1)) {};
return 0;
}




Int_t TPosixThread::SelfId()
{
  return pthread_self();
}
Int_t TPosixThread::Sleep  (ULong_t secs, ULong_t nanos){return sleep(secs);}

Int_t TPosixThread::GetTime(ULong_t *absSec, ULong_t *absNanoSec){return 0;}


//   Clean Up section. PTHREAD implementations of cleanup after cancel are
//   too different and often too bad. Temporary I invent my own bycicle.
//                                                              V.Perev.


TPosixThreadCleanUp::TPosixThreadCleanUp(void **main, void *routine, void *arg)
{
  fNext = (TPosixThreadCleanUp*)*main;
  fRoutine = routine; fArgument = arg;
  *main  = this;
}


TPosixThreadCleanUp::~TPosixThreadCleanUp(){}
