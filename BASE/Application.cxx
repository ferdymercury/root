//*CMZ :  2.21/06 15/02/99  01.29.37  by  Fons Rademakers
//*CMZ :  2.20/04 11/12/98  18.41.38  by  Fons Rademakers
//*CMZ :  2.20/00 26/11/98  12.45.27  by  Fons Rademakers
//*CMZ :  2.00/12 02/10/98  11.28.58  by  Fons Rademakers
//*CMZ :  2.00/11 05/08/98  15.33.51  by  Fons Rademakers
//*CMZ :  2.00/00 04/03/98  17.28.16  by  Fons Rademakers
//*CMZ :  1.03/09 10/12/97  09.00.38  by  Rene Brun
//*-- Author :    Fons Rademakers   22/12/95

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
// TApplication                                                         //
//                                                                      //
// This class creates the ROOT Application Environment that interfaces  //
// to the windowing system eventloop and eventhandlers.                 //
// This class must be instantiated exactly once in any given            //
// application. Normally the specific application class inherits from   //
// TApplication (see TRint).                                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <fstream.h>

#include "TApplication.h"
#include "TGuiFactory.h"
#include "TGXW.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TString.h"
#include "TError.h"
#include "TObjArray.h"
#include "TObjString.h"
#include "TTimer.h"
#include "TInterpreter.h"
#include "TStyle.h"
#include "TVirtualPad.h"
#include "TEnv.h"
#include "TColor.h"
#include "TGXClient.h"
#include "TSystemDirectory.h"


TApplication *gApplication = 0;

//______________________________________________________________________________
class TIdleTimer : public TTimer {
public:
   TIdleTimer(Long_t ms) : TTimer(ms, kTRUE) { }
   Bool_t Notify();
};

//______________________________________________________________________________
Bool_t TIdleTimer::Notify()
{
   gApplication->HandleIdleTimer();
   Reset();
   return kFALSE;
}


ClassImp(TApplication)

//______________________________________________________________________________
TApplication::TApplication(const char *appClassName,
                           int *argc, char **argv, void *options,
                           int numOptions)
{
   // Create an application environment. The application environment
   // provides an interface to the Window Manager functionality and eventloop
   // (be it X, Windoze, Mac or Be).

   if (gApplication) {
      Error("TApplication", "only one instance of TApplication allowed");
      return;
   }

   if (!gROOT)
      ::Fatal("TApplication::TApplication", "ROOT system not initialized");

   if (!gSystem)
      ::Fatal("TApplication::TApplication", "gSystem not initialized");

   GetOptions(argc, argv);

   if (!gGuiFactory) {
      Printf("Must initialize the GUI classes using InitGui in the TROOT ctor");
      Fatal("TApplication", "TGuiFactory not initialized");
   }

   gApplication = this;
   gROOT->SetApplication(this);

   if (argc && *argc > 0) {
      fArgc = *argc;
      fArgv = (char **)new char*[fArgc];
   } else {
      fArgc = 0;
      fArgv = 0;
   }

   for (int i = 0; i < fArgc; i++)
      fArgv[i] = StrDup(argv[i]);


   fIdleTimer     = 0;
   fIdleCommand   = 0;
   fSigHandler    = 0;
   fReturnFromRun = kFALSE;
   fAppImp        = 0;

   // Create WM dependent application environment
   fAppImp = gGuiFactory->CreateApplicationImp(appClassName, argc, argv, options, numOptions);

   // Try to load TrueType font renderer. Only try to load if not in batch
   // mode and Root.UseTTFonts is true and $ROOTSYS/ttf exists. Abort silently
   // if libttf or libGX11TTF are not found in $ROOTSYS/lib.
#if !defined(WIN32)
   if (!gROOT->IsBatch() && gEnv->GetValue("Root.UseTTFonts", 1) &&
       !gSystem->AccessPathName(Form("%s/ttf/fonts", gRootDir))) {
      char *p, *lib = Form("%s/lib/libttf", gRootDir);
      if ((p = gSystem->DynamicPathName(lib, kTRUE))) {
         delete [] p;
         if (!gSystem->Load(lib)) {
            lib = Form("%s/lib/libGX11TTF", gRootDir);
            if ((p = gSystem->DynamicPathName(lib, kTRUE))) {
               delete [] p;
               gSystem->Load(lib);
            }
         }
      }
   }
#endif

   // Create the canvas colors early so they are allocated before
   // any color table expensive bitmaps get allocated in GUI routines (like
   // creation of XPM bitmaps).
   InitializeColors();

   // Hook for further initializing the WM dependent application environment
   Init();

   if (fArgv) gSystem->SetProgname(fArgv[0]);

   // Set default screen factor (if not disabled in rc file)
   if (gEnv->GetValue("Canvas.UseScreenFactor", 1)) {
      Int_t  x, y;
      UInt_t w, h;
      if (gGXW) {
         gGXW->GetGeometry(-1, x, y, w, h);
         if (h > 0 && h < 1000) gStyle->SetScreenFactor(0.0011*h);
      }
   }

   // Make sure all registered dictionaries have been initialized
   gInterpreter->InitializeDictionaries();

   gInterpreter->SaveContext();
   gInterpreter->SaveGlobalsContext();

   gROOT->SetLineHasBeenProcessed(); // to allow user to interact with TCanvas's under WIN32
}

//______________________________________________________________________________
TApplication::~TApplication()
{
   // TApplication dtor.

   for (int i = 0; i < fArgc; i++)
      SafeDelete(fArgv[i]);
   delete [] fArgv;
   SafeDelete(fAppImp);
}

//______________________________________________________________________________
void TApplication::ClearInputFiles()
{
   // Clear list containing macro files passed as program arguments.
   // This method is called from TRint::Run() to ensure that the macro
   // files are only executed the first time Run() is called.

   if (fFiles) {
      fFiles->Delete();
      SafeDelete(fFiles);
   }
}

//______________________________________________________________________________
void TApplication::GetOptions(int *argc, char **argv)
{
   // Get and handle command line options.

   fNoLog = kFALSE;
   fQuit  = kFALSE;
   fFiles = 0;

   if (!argc)
      return;

   for (int i = 1; i < *argc; i++) {
      if (!strcmp(argv[i], "-?") || !strncmp(argv[i], "-h", 2)) {
         fprintf(stderr, "Usage: %s [-l] [-b] [-n] [-q] [file1.C ... fileN.C]\n", argv[0]);
         fprintf(stderr, "Options:\n");
         fprintf(stderr, "  -b : run in batch mode without graphics\n");
         fprintf(stderr, "  -n : do not execute logon and logoff macros as specified in .rootrc\n");
         fprintf(stderr, "  -q : exit after processing command line macro files\n");
         fprintf(stderr, "  -l : do not show splash screen\n");
         fprintf(stderr, "\n");
         Terminate(0);
      } else if (!strcmp(argv[i], "-b")) {
         gROOT->SetBatch();
         if (gGuiFactory != gBatchGuiFactory) delete gGuiFactory;
         gGuiFactory = gBatchGuiFactory;
#ifndef WIN32
         if (gGXW != gGXBatch) delete gGXW;
#endif
         gGXW = gGXBatch;
      } else if (!strcmp(argv[i], "-x")) {
         // remote ROOT display server not operational yet
#ifndef WIN32
         if (gGXW != gGXBatch) delete gGXW;
#endif
         gGXW = new TGXClient("Root_Client");
         if (gGXW->IsZombie()) {
            delete gGXW;
            gROOT->SetBatch();
            if (gGuiFactory != gBatchGuiFactory) delete gGuiFactory;
            gGuiFactory = gBatchGuiFactory;
            gGXW = gGXBatch;
         }
      } else if (!strcmp(argv[i], "-n")) {
         fNoLog = kTRUE;
      } else if (!strcmp(argv[i], "-q")) {
         fQuit = kTRUE;
      } else if (!strcmp(argv[i], "-l")) {
         // used by front-end program to not display splash screen
      } else if (!strcmp(argv[i], "-p")) {
         // used when started by front-end program to signal that
         // splash screen can be popped down (TRint::PrintLogo())
      } else if (argv[i][0] != '-' && argv[i][0] != '+') {
         Long_t id, size, flags, modtime;
         char *dir = gSystem->ExpandPathName(argv[i]);
         if (!gSystem->GetPathInfo(dir, &id, &size, &flags, &modtime) &&
             (flags & 2)) {  // if directory make it working directory
            gSystem->ChangeDirectory(dir);
            TSystemDirectory *workdir = new TSystemDirectory("workdir", gSystem->WorkingDirectory());
            TObject *w = gROOT->GetListOfBrowsables()->FindObject("workdir");
            TObjLink *lnk = gROOT->GetListOfBrowsables()->FirstLink();
            while (lnk) {
               if (lnk->GetObject() == w) {
                  lnk->SetObject(workdir);
                  lnk->SetOption(gSystem->WorkingDirectory());
                  break;
               }
               lnk = lnk->Next();
            }
            delete w;
            delete [] dir;
            continue;
         }
         delete [] dir;
         if (!fFiles) fFiles = new TObjArray;
         fFiles->Add(new TObjString(argv[i]));
      }
      // ignore unknown options
   }
}

//______________________________________________________________________________
void TApplication::HandleIdleTimer()
{
   // Handle idle timeout. When this timer expires the registered idle command
   // will be executed by this routine.

   ProcessLine((Text_t *)GetIdleCommand());
}

//______________________________________________________________________________
void TApplication::Help(const Text_t *line)
{
   // Print help on interpreter.

   gInterpreter->ProcessLine(line);

   Printf("\nROOT special commands.");
   Printf("===========================================================================");
   Printf("             pwd          : show current directory, pad and style");
   Printf("             ls           : list contents of current directory");
   Printf("             which [file] : shows path of macro file");
}

//______________________________________________________________________________
void TApplication::InitializeColors()
{
   // Initialize colors used by the TCanvas based graphics (via TColor objects).
   // This method should be called before the ApplicationImp is created (which
   // initializes the GUI colors).

   if (gROOT->GetListOfColors()->First() == 0) {
      TColor *s0;
      Float_t r, g, b, h, l, s;
      Int_t   i;

      new TColor(kWhite,1,1,1,"background");
      new TColor(kBlack,0,0,0,"black");
      new TColor(kRed,1,0,0,"red");
      new TColor(kGreen,0,1,0,"green");
      new TColor(kBlue,0,0,1,"blue");
      new TColor(kYellow,1,1,0,"yellow");
      new TColor(kMagenta,1,0,1,"magenta");
      new TColor(kCyan,0,1,1,"cyan");
      new TColor(10,0.999,0.999,0.999,"white");
      new TColor(11,0.754,0.715,0.676,"editcol");

      // The color cwhite above is defined as being nearly white.
      // Sets the associated dark color also to white.
      TColor *c110 = gROOT->GetColor(110);
      c110->SetRGB(0.999,0.999,.999);

      // Initialize Custom colors
      new TColor(20,0.8,0.78,0.67);
      new TColor(31,0.54,0.66,0.63);
      new TColor(41,0.83,0.81,0.53);
      new TColor(30,0.52,0.76,0.64);
      new TColor(32,0.51,0.62,0.55);
      new TColor(24,0.70,0.65,0.59);
      new TColor(21,0.8,0.78,0.67);
      new TColor(47,0.67,0.56,0.58);
      new TColor(35,0.46,0.54,0.57);
      new TColor(33,0.68,0.74,0.78);
      new TColor(39,0.5,0.5,0.61);
      new TColor(37,0.43,0.48,0.52);
      new TColor(38,0.49,0.6,0.82);
      new TColor(36,0.41,0.51,0.59);
      new TColor(49,0.58,0.41,0.44);
      new TColor(43,0.74,0.62,0.51);
      new TColor(22,0.76,0.75,0.66);
      new TColor(45,0.75,0.51,0.47);
      new TColor(44,0.78,0.6,0.49);
      new TColor(26,0.68,0.6,0.55);
      new TColor(28,0.53,0.4,0.34);
      new TColor(25,0.72,0.64,0.61);
      new TColor(27,0.61,0.56,0.51);
      new TColor(23,0.73,0.71,0.64);
      new TColor(42,0.87,0.73,0.53);
      new TColor(46,0.81,0.37,0.38);
      new TColor(48,0.65,0.47,0.48);
      new TColor(34,0.48,0.56,0.6);
      new TColor(40,0.67,0.65,0.75);
      new TColor(29,0.69,0.81,0.78);

      // Initialize some additional greyish non saturated colors
      new TColor(8, 0.35,0.83,0.33);
      new TColor(9, 0.35,0.33,0.85);
      new TColor(12,.3,.3,.3,"grey13");
      new TColor(13,.4,.4,.4,"grey13");
      new TColor(14,.5,.5,.5,"grey14");
      new TColor(15,.6,.6,.6,"grey15");
      new TColor(16,.7,.7,.7,"grey16");
      new TColor(17,.8,.8,.8,"grey17");
      new TColor(18,.9,.9,.9,"grey18");
      new TColor(19,.95,.95,.95,"grey19");
      new TColor(50, 0.83,0.35,0.33);

      // Initialize special colors for x3d
      for (i = 1; i < 8; i++) {
         s0 = gROOT->GetColor(i);
         s0->GetRGB(r,g,b);
         if (i == 1) { r = 0.6; g = 0.6; b = 0.6; }
         if (r == 1) r = 0.9; if (r == 0) r = 0.1;
         if (g == 1) g = 0.9; if (g == 0) g = 0.1;
         if (b == 1) b = 0.9; if (b == 0) b = 0.1;
         s0->RGBtoHLS(r,g,b,h,l,s);
         s0->HLStoRGB(h,0.6*l,s,r,g,b);
         new TColor(200+4*i-3,r,g,b);
         s0->HLStoRGB(h,0.8*l,s,r,g,b);
         new TColor(200+4*i-2,r,g,b);
         s0->HLStoRGB(h,1.2*l,s,r,g,b);
         new TColor(200+4*i-1,r,g,b);
         s0->HLStoRGB(h,1.4*l,s,r,g,b);
         new TColor(200+4*i  ,r,g,b);
      }
   }
}

//______________________________________________________________________________
void TApplication::ProcessLine(const Text_t *line)
{
   // Process a single command line, either a C++ statement or an interpreter
   // command starting with a ".".

   Int_t nch = strlen(line);
   if (!nch) return;

   if (!strncmp(line, ".exit", 4) || !strncmp(line, ".quit", 2)) {
      Terminate(0);
      return;
   }

   if (!strncmp(line, "?", 1)) {
      Help(line);
      return;
   }

   if (!strncmp(line, ".pwd", 4)) {
      if (gDirectory)
         Printf("Current directory: %s", gDirectory->GetPath());
      if (gPad)
         Printf("Current pad:       %s", gPad->GetName());
      if (gStyle)
         Printf("Current style:     %s", gStyle->GetName());
      return;
   }

   if (!strncmp(line, ".ls", 3)) {
      if (gDirectory) gDirectory->ls();
      return;
   }

   if (!strncmp(line, ".which", 6)) {
      char *fn  = Strip(line+7);
      char *mac = gSystem->Which(TROOT::GetMacroPath(), fn, kReadPermission);
      if (!mac)
         Printf("No macro %s in path %s", fn, TROOT::GetMacroPath());
      else
         Printf("%s", mac);
      delete [] fn;
      delete [] mac;
      return;
   }

   if (!strncmp(line, ".L", 2)) {
      char *fn  = Strip(line+3);
      char *mac = gSystem->Which(TROOT::GetMacroPath(), fn, kReadPermission);
      if (!mac)
         Error("ProcessLine", "macro %s not found in path %s", fn,
               TROOT::GetMacroPath());
      else
         gInterpreter->ProcessLine(Form(".L %s", mac));

      delete [] fn;
      delete [] mac;
      return;
   }

   if (!strncmp(line, ".X", 2) || !strncmp(line, ".x", 2)) {
      ProcessFile(line+3);
      return;
   }

   if (!strcmp(line, ".reset")) {
      // Do nothing, .reset disabled in CINT because too many side effects
      Printf("*** .reset not allowed, please use gROOT->Reset() ***");
      return;

#if 0
      // delete the ROOT dictionary since CINT will destroy all objects
      // referenced by the dictionary classes (TClass et. al.)
      gROOT->GetListOfClasses()->Delete();
      // fall through
#endif
   }

   gInterpreter->ProcessLine(line);
}

//______________________________________________________________________________
void TApplication::ProcessFile(const Text_t *name)
{
   // Process a file containing a C++ macro.

   const Int_t kBufSize = 1024;

   Int_t nch = strlen(name);
   if (nch == 0) return;

   char *fname = Strip(name);
   if (fname[nch-1] == ';') { nch--; fname[nch] = 0; }
   char *s = strrchr(fname, '(');
   if (s) *s = 0;

   // strip off I/O redirect tokens from filename
   char ssave = 0;
   char *s2   = 0;
   if (!s) {
      char *s3;
      s2 = strstr(fname, ">>");
      if (!s2) s2 = strstr(fname, "2>");
      if (!s2) s2 = strchr(fname, '>');
      s3 = strchr(fname, '<');
      if (s2 && s3) s2 = s2<s3 ? s2 : s3;
      if (s3 && !s2) s2 = s3;
      if (s2) {
         s2--;
         while (s2 && *s2 == ' ') s2--;
         s2++;
         ssave = *s2;
         *s2 = 0;
      }
   }

   char *exnam = gSystem->Which(TROOT::GetMacroPath(), fname, kReadPermission);
   if (!exnam) {
      Error("ProcessFile", "macro %s not found in path %s", fname,
            TROOT::GetMacroPath());
      delete [] fname;
      return;
   }

   int exlen = strlen(exnam);
   if (s)  exlen += strlen(s+1)+1;
   if (s2) exlen += strlen(s2+1)+1;
   char *exname = new char [exlen + 1];

   strcpy(exname, exnam);
   delete [] exnam;

   ifstream file(exname,ios::in);
   if (!file.good()) {
      Error("ProcessFile", "%s no such file", exname);
      delete [] exname;
      delete [] fname;
      return;
   }

   if (s)  {
      *s  = '(';
      strcat(exname, s);
   }
   if (s2) {
      *s2 = ssave;
      strcat(exname, s2);
   }

   Text_t currentline[kBufSize];
   int tempfile = 0;
   int comment  = 0;
   int ifndefc  = 0;
   int ifdef    = 0;
   s = 0;
   Bool_t execute = kFALSE;

   while (1) {
     file.getline(currentline,kBufSize);
     if (file.eof()) break;
     s = currentline;
     while (s && *s == ' ') s++;     // strip-off leading blanks

     // very simple minded pre-processor parsing, only works in case macro file
     // starts with "#ifndef __CINT__". In that case everything till next
     // "#else" or "#endif" will be skipped.
     if (*s == '#') {
        char *cs = Compress(currentline);
        if (strstr(cs, "#ifndef__CINT__") ||
            strstr(cs, "#if!defined(__CINT__)"))
           ifndefc = 1;
        else if (ifndefc && (strstr(cs, "#ifdef") || strstr(cs, "#ifndef") ||
                 strstr(cs, "#ifdefined") || strstr(cs, "#if!defined")))
           ifdef++;
        else if (ifndefc && strstr(cs, "#endif")) {
           if (ifdef)
              ifdef--;
           else
              ifndefc = 0;
        } else if (ifndefc && !ifdef && strstr(cs, "#else"))
           ifndefc = 0;
        delete [] cs;
     }
     if (!*s || *s == '#' || ifndefc || !strncmp(s, "//", 2)) continue;

     if (!strncmp(s, ".X", 2) || !strncmp(s, ".x", 2)) {
        ProcessFile(s+3);
        execute = kTRUE;
        continue;
     }

     if (!strncmp(s, "/*", 2)) comment = 1;
     if (comment && !strncmp(s+strlen(s)-2, "*/", 2)) comment = 0;
     if (!comment && *s == '{') tempfile = 1;
     if (!comment) break;
   }
   file.close();

   if (!execute) {
      if (tempfile)
         gInterpreter->ProcessLineSynch(Form(".x %s", exname));
      else
         gInterpreter->ProcessLineSynch(Form(".X %s", exname));
   }

   delete [] exname;
   delete [] fname;
}

//______________________________________________________________________________
void TApplication::Run(Bool_t retrn)
{
   // Main application eventloop. Calls system dependent eventloop via gSystem.

   SetReturnFromRun(retrn);
   gSystem->Run();
}

//______________________________________________________________________________
void TApplication::SetIdleTimer(UInt_t idleTimeInSec, const Text_t *command)
{
   // Set the command to be executed after the system has been idle for
   // idleTimeInSec seconds. Normally called via TROOT::Idle(...).

   if (fIdleTimer) RemoveIdleTimer();
   fIdleCommand = StrDup(command);
   fIdleTimer = new TIdleTimer(idleTimeInSec*1000);
   gSystem->AddTimer(fIdleTimer);
}

//______________________________________________________________________________
void TApplication::RemoveIdleTimer()
{
   // Remove idle timer. Normally called via TROOT::Idle(0).

   if (fIdleTimer) {
      // timers are removed from the gSystem timer list by their dtor
      SafeDelete(fIdleTimer);
      delete [] fIdleCommand;
   }
}

//______________________________________________________________________________
void TApplication::StartIdleing()
{
   // Call when system starts idleing.

   if (fIdleTimer) {
      fIdleTimer->Reset();
      gSystem->AddTimer(fIdleTimer);
   }
}

//______________________________________________________________________________
void TApplication::StopIdleing()
{
   // Call when system stops idleing.

   if (fIdleTimer)
      gSystem->RemoveTimer(fIdleTimer);
}

//______________________________________________________________________________
void TApplication::Terminate(int status)
{
   // Terminate the application by call TSystem::Exit() unless application has
   // been told to return from Run(), by a call to SetReturnFromRun().

   if (fReturnFromRun)
      gSystem->ExitLoop();
   else
      gSystem->Exit(status);
}

//______________________________________________________________________________
void TApplication::CreateApplication()
{
   // Static function used to create a default application environment.

   if (!gApplication) {
      new TApplication("RootApp", 0, 0, 0, 0);
      ::Warning("TApplication::CreateApplication",
                "application created with generic name \"RootApp\"");
   }
}
