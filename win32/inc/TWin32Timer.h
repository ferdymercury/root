//*CMZ :  2.00/12 29/09/98  19.28.22  by  Valery Fine(fine@mail.cern.ch)
//*-- Author :    Valery Fine(fine@mail.cern.ch)   29/09/98
#ifndef ROOT_TWin32Timer
#define ROOT_TWin32Timer

#include "TWin32HookViaThread.h"

class TTimer;

class TWin32Timer : protected TWin32HookViaThread
{

  private:
    ULong_t *fhdTimerThread;
    HWND     fhdTimerWindow;
    DWORD    fhdTimerThreadId;

  protected:
    virtual void ExecThreadCB(TWin32SendClass *command);
    void    SetTimerThread(ULong_t *handle){fhdTimerThread = handle;}
    Int_t   CreateTimerThread();
    void    CreateTimerCB(TTimer *timer);
    void    KillTimerCB(TTimer *timer);
    void    ExecTimerThread(TGWin32Command *command);

 public:
   TWin32Timer();
   virtual ~TWin32Timer();
   UInt_t  CreateTimer(TTimer *timer);
   void    SetHWND(HWND hwnd){fhdTimerWindow = hwnd;}
   HWND    GetHwnd(){ return  fhdTimerWindow;}
   void    Reset(ULong_t newtime=0);
   void    Delete(){;}
   void    Create(){;}
   Bool_t  ExecCommand(TGWin32Command *command,Bool_t synch=kTRUE);
   Bool_t  IsTimeThread();
   void    KillTimer(TTimer *timer);
};

#endif
