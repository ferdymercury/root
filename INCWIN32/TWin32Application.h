//*CMZ :  1.01/00 29/04/97  18.40.29  by  Valery Fine(fine@vxcern.cern.ch)
//*-- Author :    Valery Fine(fine@vxcern.cern.ch)   16/08/96
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

#ifndef ROOT_TWin32Application
#define ROOT_TWin32Application

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TGWin32                                                              //
//                                                                      //
// Interface to low level Windows32. This class gives access to basic   //
// Win32 graphics, pixmap, text and font handling routines.             //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TApplicationImp
#include "TAPPLICATIONIMP.h"
#endif

#include "WINDOWS4ROOT.h"
#include <commctrl.h>

class TGWin32Command;

#ifdef _SC_
LPTHREAD_START_ROUTINE ROOT_CmdLoop(HANDLE ThrSem);
#else
unsigned int _stdcall ROOT_CmdLoop(HANDLE ThrSem);
#endif

class TWin32Application : public TApplicationImp  {

private:

  DWORD  fIDCmdThread;
  HANDLE fhdCmdThread;

  DWORD  fIDDlgThread;
  HANDLE fhdDlgThread;


  Int_t   CreateCmdThread();
  Int_t   CreateDlgThread();


public:

   TWin32Application() {};
   TWin32Application(const char *appClassName, int *argc, char **argv,
                   void *options, int numOptions);
   virtual ~TWin32Application();

   char   *ApplicationName() const;

   BOOL    ExecCommand(TGWin32Command *command, Bool_t synch=kFALSE);   // To exec a command coming from the other threads
   DWORD   GetCmdThreadID(){return fIDCmdThread;}
   DWORD   GetDlgThreadID(){return fIDDlgThread;}
   void    Show();
   void    Hide();
   void    Iconify();
   Bool_t  IsCmdThread();
   void    Init();
   void    Open();
   void    Raise();
   void    Lower();

   ClassDef(TWin32Application,0)

};

#endif
