//*CMZ :  2.20/00 22/11/98  19.29.37  by  Fons Rademakers
//*CMZ :  2.00/13 29/10/98  08.32.56  by  Fons Rademakers
//*CMZ :  2.00/10 10/07/98  09.59.46  by  Rene Brun
//*CMZ :  2.00/08 22/05/98  12.06.17  by  Fons Rademakers
//*CMZ :  1.03/09 16/12/97  16.26.15  by  Rene Brun
//*-- Author :    Rene Brun   17/02/95

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
// Rint                                                                 //
//                                                                      //
// Rint is the ROOT Interactive Interface. It allows interactive access //
// to the ROOT system via the CINT C/C++ interpreter.                   //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TROOT.h"
#include "TClass.h"
#include "TGXW.h"
#include "Getline.h"
#include "TStyle.h"
#include "TPostscript.h"
#include "TObjectTable.h"
#include "TClassTable.h"
#include "TStopwatch.h"
#include "TCanvas.h"
#include "TBenchmark.h"
#include "TRint.h"
#include "TSystem.h"
#include "TEnv.h"
#include "TSysEvtHandler.h"
#include "TError.h"
#include "TException.h"
#include "TInterpreter.h"
#include "TObjArray.h"
#include "TObjString.h"
#include "TProof.h"
#include "TFile.h"
#include "TMapFile.h"

#ifdef R__UNIX
#include <signal.h>
#endif



//----- Interrupt signal handler -----------------------------------------------
//______________________________________________________________________________
class TInterruptHandler : public TSignalHandler {
public:
   TInterruptHandler() : TSignalHandler(kSigInterrupt, kFALSE) { }
   Bool_t  Notify();
};

//______________________________________________________________________________
Bool_t TInterruptHandler::Notify()
{
   // TRint interrupt handler.

   if (fDelay) {
      fDelay++;
      return kTRUE;
   }

   // make sure we use the sbrk heap (in case of mapped files)
   gMmallocDesc = 0;

   Printf("\n *** Break *** keyboard interrupt");
   if (gProof) gProof->Interrupt(TProof::kHardInterrupt);
   if (TROOT::Initialized()) {
      Getlinem(kInit, "Root > ");
      Throw(GetSignal());
   }
   return kTRUE;
}

//----- Terminal Input file handler --------------------------------------------
//______________________________________________________________________________
class TTermInputHandler : public TFileHandler {
public:
   TTermInputHandler(int fd) : TFileHandler(fd, 1) { }
   Bool_t Notify();
   Bool_t ReadNotify() { return Notify(); }
};

//______________________________________________________________________________
Bool_t TTermInputHandler::Notify()
{
   gApplication->HandleTermInput();
   return kTRUE;
}


ClassImp(TRint)

//______________________________________________________________________________
TRint::TRint(char *appClassName, int *argc, char **argv, void *options, int numOptions)
       : TApplication(appClassName, argc, argv, options, numOptions)
{
   // Create an application environment. The TRint environment provides an
   // interface to the WM manager functionality and eventloop via inheritance
   // of TApplication and in addition provides interactive access to
   // the CINT C++ interpreter via the command line.

   fNcmd          = 0;
   fDefaultPrompt = "root [%d] ";
   fInterrupt     = kFALSE;

   TPostScript *ps = new TPostScript();
   ps->SetName("ps");
   ps->SetTitle("Default PostScript object");
   gROOT->GetListOfSpecials()->Add(ps);

   gBenchmark = new TBenchmark();

   PrintLogo();

   // Load user functions
   const char *logon;
   logon = gEnv->GetValue("Rint.Load", (char*)0);
   if (logon) {
      char *mac = gSystem->Which(TROOT::GetMacroPath(), logon, kReadPermission);
      if (mac)
         ProcessLine(Form(".L %s",logon));
      delete [] mac;
   }

   // Execute logon macro
   logon = gEnv->GetValue("Rint.Logon", (char*)0);
   if (logon && !NoLogOpt()) {
      char *mac = gSystem->Which(TROOT::GetMacroPath(), logon, kReadPermission);
      if (mac)
         ProcessFile(logon);
      delete [] mac;
   }

   gInterpreter->SaveContext();
   gInterpreter->SaveGlobalsContext();

   // Install interrupt and terminal input handlers
   TInterruptHandler *ih = new TInterruptHandler();
   gSystem->AddSignalHandler(ih);
   SetSignalHandler(ih);

   TTermInputHandler *th = new TTermInputHandler(0);
   gSystem->AddFileHandler(th);

   // Goto into raw terminal input mode
   char defhist[128];
#ifndef R__VMS
   sprintf(defhist, "%s/.root_hist", gSystem->Getenv("HOME"));
#else
   sprintf(defhist, "%s.root_hist", gSystem->Getenv("HOME"));
#endif
   logon = gEnv->GetValue("Rint.History", defhist);
   Gl_histinit((char *)logon);
   Gl_windowchanged();
}

//______________________________________________________________________________
TRint::~TRint()
{

}

//______________________________________________________________________________
void TRint::Run(Bool_t retrn)
{
   // Main application eventloop. First process files given on the command
   // line and then go into the main application event loop.

   Getlinem(kInit, GetPrompt());

   // Process shell command line input files
   if (InputFiles()) {
      TObjString *file;
      TIter next(InputFiles());
      RETRY {
         while ((file = (TObjString *)next())) {
            char cmd[256];
            Printf("\nProcessing %s...",(const char*)file->String());
            Getlinem(kCleanUp, 0);
            sprintf(cmd, ".x %s", (const char*)file->String());
            Gl_histadd(cmd);
            fNcmd++;
            ProcessLine(cmd);
         }
      } ENDTRY;

      if (QuitOpt())
         Terminate(0);

      ClearInputFiles();

      Getlinem(kInit, GetPrompt());
   }

   TApplication::Run(retrn);

   Getlinem(kCleanUp, 0);
}

//______________________________________________________________________________
void TRint::PrintLogo()
{
   // Print the ROOT logo on standard output.

   Int_t iday,imonth,iyear,mille;
   static const char *months[] = {"January","February","March","April","May",
                                  "June","July","August","September","October",
                                  "November","December"};
   const char *root_version = gROOT->GetVersion();
   Int_t idatqq = gROOT->GetVersionDate();
   iday   = idatqq%100;
   imonth = (idatqq/100)%100;
   iyear  = (idatqq/10000);
   if (iyear < 90) mille = 2000 + iyear;
   else            mille = 1900 + iyear;
   char *root_date = Form("%d %s %4d",iday,months[imonth-1],mille);

   Printf("  *******************************************");
   Printf("  *                                         *");
   Printf("  *        W E L C O M E  to  R O O T       *");
   Printf("  *                                         *");
   Printf("  *   Version%10s %17s   *",root_version,root_date);
// Printf("  *            Development version          *");
   Printf("  *                                         *");
   Printf("  *  You are welcome to visit our Web site  *");
   Printf("  *          http://root.cern.ch            *");
   Printf("  *                                         *");
   Printf("  *******************************************");

#ifdef R__UNIX
   if (!strcmp(gGXW->GetName(), "X11TTF"))
      Printf("\nFreeType Engine v1.1 used to render TrueType fonts.");
#endif

   gInterpreter->PrintIntro();

#ifdef R__UNIX
   // Popup down X logo, only if started with -p option
   for (int i = 0; i < Argc(); i++)
      if (!strcmp(Argv(i), "-p"))
         kill(getppid(), SIGUSR1);
#endif
}

//______________________________________________________________________________
char *TRint::GetPrompt()
{
   // Get prompt from interpreter. Either "root [n]" or "end with '}'".

   char *s = gInterpreter->GetPrompt();
   if (s[0])
      strcpy(fPrompt, s);
   else
      sprintf(fPrompt, fDefaultPrompt, fNcmd);

   return fPrompt;
}

//______________________________________________________________________________
const char *TRint::SetPrompt(const char *newPrompt)
{
   // Set a new default prompt. It returns the previous prompt.
   // The prompt may contain a %d which will be replaced by the commend
   // number. The default prompt is "root [%d] ". The maximum length of
   // the prompt is 55 characters. To set the prompt in an interactive
   // session do:
   // root [0] ((TRint*)gROOT->GetApplication())->SetPrompt("aap> ")
   // aap>

   const char *op = fDefaultPrompt;

   if (strlen(newPrompt) <= 55)
      fDefaultPrompt = newPrompt;
   else
      Error("SetPrompt", "newPrompt too long (> 55 characters)");

   return op;
}

//______________________________________________________________________________
void TRint::HandleTermInput()
{
   // Handle input coming from terminal.

   static TStopwatch timer;
   char *line;

   if ((line = Getlinem(kOneChar, 0))) {
//      if (line[0]) {
         if (gROOT->Timer()) timer.Start();

         Gl_histadd(line);

         char *s = line;
         while (s && *s == ' ') s++;     // strip-off leading blanks
         s[strlen(s)-1] = '\0';          // strip also '\n' off
         fInterrupt = kFALSE;

         if (!gInterpreter->GetMore() && strlen(s) != 0) fNcmd++;

         ProcessLine(s);

         if (strstr(s,".reset") != s)
             gInterpreter->EndOfLineAction();

         if (gROOT->Timer()) timer.Print();
//      } else {
//         printf("Funny character typed\n");
       //  Terminate(0);
//      }

      Getlinem(kInit, GetPrompt());
   }
}

//______________________________________________________________________________
void TRint::Terminate(int status)
{
   // Terminate the application. Reset the terminal to sane mode and call
   // the logoff macro defined via Rint.Logoff environment variable.

   Getlinem(kCleanUp, 0);

   if (ReturnFromRun()) {
      gSystem->ExitLoop();
   } else {
      //Execute logoff macro
      const char *logoff;
      logoff = gEnv->GetValue("Rint.Logoff", (char*)0);
      if (logoff && !NoLogOpt()) {
         char *mac = gSystem->Which(TROOT::GetMacroPath(), logoff, kReadPermission);
         if (mac)
            ProcessFile(logoff);
         delete [] mac;
      }

      gSystem->Exit(status);
   }
}
