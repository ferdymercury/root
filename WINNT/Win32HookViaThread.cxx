//*CMZ :  2.23/04 12/10/99  11.09.35  by  Fons Rademakers
//*CMZ :  2.23/02 02/09/99  15.54.29  by  Rene Brun
//*CMZ :  2.21/06 10/02/99  18.39.13  by  Valery Fine(fine@vxcern.cern.ch)
//*CMZ :  2.00/00 10/02/99  11.58.47  by  Valery Fine(fine@mail.cern.ch)
//*CMZ :  1.01/04 26/05/97  14.30.07  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   31/07/96

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

#ifndef ROOT_Win32Constants
#include "Win32Constants.h"
#endif

#ifndef ROOT_TWin32HookViaThread
#include "TWin32HookViaThread.h"
#endif

#ifndef ROOT_TGWin32Command
#include "TGWin32Command.h"
#endif

#ifndef ROOT_TROOT
#include "TROOT.h"
#endif

#ifndef ROOT_TApplication
#include "TApplication.h"
#endif

//______________________________________________________________________________
void TWin32HookViaThread::ExecCommandThread(TGWin32Command *command,Bool_t synch)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
//*-*  Execute command via "Command" thread (main thread)
//*-*  This allows to synchronize with the CINT commands
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
// Some extra flag is needed to mark the command = 0 turn !!!

   TGWin32Command *code = command;
   if (!code) code = new TWin32SendClass(this);
   fSendFlag = 1;
   TApplication *appl = gROOT->GetApplication();
   if (appl) {
      TApplicationImp *winapp = appl->GetApplicationImp();
      if (winapp) winapp->ExecCommand(code,synch);
   }
}

//______________________________________________________________________________
void TWin32HookViaThread::ExecWindowThread(TGWin32Command *command)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*
//*-*  Execute command via "Window"  thread
//*-*  This allows to synchronize with the user "window" actions, like
//*-*  moving mouse pointing device , resize windows, involke pop-menus
//*-*  rotate OpenGL 3D view, etc.
//*-*
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
// Some extra flag is needed to mark the command = 0 turn !!!

   TGWin32Command *code = command;
   if (!code) code = new TWin32SendClass(this);
   fSendFlag = 1;
   gVirtualX->ExecCommand(code);
}

//______________________________________________________________________________
Bool_t TWin32HookViaThread::ExecuteEvent(void *message,Bool_t synch, UInt_t type)
{
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
//*-*  TWin32HookViaThread::ExecuteEvent()
//*-*               static function must be called from the Event Loop
//*-*               to call TWin32HookViaThread::ExecThreadCB method via the
//*-*               another thread.
//*-*
//*-*  Input:
//*-*      void *message   - a pointer to the current messaged retrieved
//*-*      Bool_t synch    - kTRUE = - synchronize this command with the
//*-*                        "console" command (those came from the
//*-*                        keyboard/stdin)
//*-*
//*-*  Return:
//*-*
//*-*      kTRUE   - message was processed
//*-*      kFALSE  - message was refused
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
    if (!message) return kFALSE;
    if (type == UInt_t(-1)) type = ROOT_CMD;

    MSG *msg = (MSG *)message;
    Bool_t  res = kFALSE;

//    if (msg->hwnd == NULL &  == type)
    {
         LPARAM lParam = msg->lParam;

         int ireply = IDRETRY;
         if (synch)
             while (gROOT->IsLineProcessing() && ireply == IDRETRY)
             {
               MessageBeep(MB_ICONEXCLAMATION);
               ireply = MessageBox(NULL,
                                   "ROOT is busy. Sorry. Try later","ROOT is busy",
                                    MB_ICONEXCLAMATION | MB_RETRYCANCEL | MB_TASKMODAL);
             };

         if (!synch || (ireply == IDRETRY && !gROOT->IsLineProcessing()) )
         {
             if (synch) gROOT->SetLineIsProcessing();
              // printf(" Code op is %d \n", (ESendClassCOPs)msg->wParam);
             switch ((ESendClassCOPs)msg->wParam)
             {
                 case kSendClass:
                     ((TWin32HookViaThread *)(((TWin32SendClass *)lParam)->GetPointer()))->
                                              ExecThreadCB((TWin32SendClass *)lParam);
                     res = kTRUE;
                     break;
                 case kSendWaitClass:
                     {
                         TWin32SendWaitClass *org    = (TWin32SendWaitClass *)lParam;
                         TWin32SendClass     *orgbas = (TWin32SendClass *)org;
                         TWin32HookViaThread *hook   = (TWin32HookViaThread *)(org->GetPointer());
                         hook->ExecThreadCB(orgbas);
       //                org->Release();
                         res = kTRUE;
                         break;
                     }
                 default:
                     break;
             }
             if (synch) gROOT->SetLineHasBeenProcessed();
         }
    }
    return res;
}
