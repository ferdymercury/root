//*CMZ :  2.20/00 25/11/98  18.27.02  by  Fons Rademakers
//*CMZ :  2.00/13 12/10/98  08.50.57  by  Rene Brun
//*CMZ :  2.00/12 08/10/98  15.54.29  by  Fons Rademakers
//*CMZ :  2.00/11 24/08/98  23.06.07  by  Fons Rademakers
//*CMZ :  2.00/10 28/07/98  15.59.58  by  Fons Rademakers
//*CMZ :  2.00/00 01/01/98  14.49.57  by  Fons Rademakers
//*CMZ :  1.03/09 14/12/97  12.46.49  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/09/95

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
// TSystem                                                              //
//                                                                      //
// Abstract base class defining a generic interface to the underlying   //
// Operating System.                                                    //
// This is not an ABC in the strict sense of the (C++) word. For        //
// every member function their is an implementation (often not more     //
// than a call to AbstractMethod() which prints a warning saying        //
// that the method should be overridden in a derived class), which      //
// allows a simple partial implementation for new OS'es.                //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include <stdlib.h>
#include <errno.h>


#include "TSystem.h"
#include "TApplication.h"
#include "TException.h"
#include "TSysEvtHandler.h"
#include "TROOT.h"
#include "TBrowser.h"
#include "TString.h"
#include "TOrdCollection.h"
#include "TTimer.h"

const char *gSystemName;
const char *gRootDir;
const char *gProgName;
const char *gRootName;
const char *gProgPath;

TSystem  *gSystem;
TSysEvtHandler *gXDisplay = 0;  // Display server event handler, set in TGClient


ClassImp(TProcessEventTimer)

//______________________________________________________________________________
TProcessEventTimer::TProcessEventTimer(Long_t delay) : TTimer(delay, kFALSE)
{
   // Create async event processor timer.

   gROOT->SetInterrupt(kFALSE);
   gSystem->AddTimer(this);
}

//______________________________________________________________________________
Bool_t TProcessEventTimer::ProcessEvents()
{
   // Process events if timer did time out. Returns kTRUE if intterrupt
   // flag is set (by hitting a key in the canvas or selecting the
   // Interrupt menu item in canvas or some other action).

   if (fTimeout) {
      if (gSystem->ProcessEvents()) {
         Remove();
         return kTRUE;
      } else {
         Reset();
         return kFALSE;
      }
   }
   return kFALSE;
}



ClassImp(TSystem)

//______________________________________________________________________________
TSystem::TSystem(const char *name, const char *title) : TNamed(name, title)
{
   // Create a new OS interface.

   fOnExitList    = 0;
   fSignalHandler = 0;
   fFileHandler   = 0;
   fTimers        = 0;
}

//______________________________________________________________________________
TSystem::~TSystem()
{
   // Delete the OS interface.

   if (fOnExitList) {
      fOnExitList->Delete();
      SafeDelete(fOnExitList);
   }

   if (fSignalHandler) {
      fSignalHandler->Delete();
      SafeDelete(fSignalHandler);
   }

   if (fFileHandler) {
      fFileHandler->Delete();
      SafeDelete(fFileHandler);
   }

   if (fTimers) {
      fTimers->Delete();
      SafeDelete(fTimers);
   }

   if (gSystem == this)
      gSystem = 0;
}

//______________________________________________________________________________
Bool_t TSystem::Init()
{
   // Initialize the OS interface. Copy the OS name (i.e. Unix) and the
   // ROOT name to gSystemName and gRootName, respectively.

   fNfd    = 0;
   fMaxrfd = 0;
   fMaxwfd = 0;
   fReadmask.Zero();
   fWritemask.Zero();

   fSigcnt = 0;
   fLevel  = 0;

   fSignalHandler = new TOrdCollection;
   fFileHandler   = new TOrdCollection;
   fTimers        = new TOrdCollection;

   gSystemName = StrDup(fName.Data());
   gRootName   = StrDup(gROOT->GetName());

   if (!fName.CompareTo("Generic")) return kTRUE;
   return kFALSE;
}

//______________________________________________________________________________
void TSystem::SetProgname(const char *name)
{
   // Set the application name (from command line, argv[0]) and copy it in
   // gProgName.

   gProgName = StrDup(name);
}

//______________________________________________________________________________
void TSystem::SetDisplay()
{
   // Set DISPLAY environment variable based on utmp entry. Only for UNIX.
}

//______________________________________________________________________________
void  TSystem::CreateInspectView(TObject *)
{
  // Create an inspect view of the obj to perform TObject::Inspect
}

//______________________________________________________________________________
const char *TSystem::GetError()
{
   // Return system error string.

   return Form("errno: %d", errno);
}

//______________________________________________________________________________
void TSystem::RemoveOnExit(TObject *obj)
{
   // Objects that should be deleted on exit of the OS interface.

   if (fOnExitList == 0)
      fOnExitList = new TOrdCollection;
   if (fOnExitList->FindObject(obj) == 0)
      fOnExitList->Add(obj);
}

//______________________________________________________________________________
const char *TSystem::HostName()
{
   // Return the system's host name.

   return "Local host";
}

//---- EventLoop ---------------------------------------------------------------

//______________________________________________________________________________
void TSystem::Run()
{
   // System event loop.

   fInControl = kTRUE;
   fDone      = kFALSE;

   RETRY {
      while (!fDone) {
         gApplication->StartIdleing();
         InnerLoop();
         gApplication->StopIdleing();
      }
   } ENDTRY;

   fInControl = kFALSE;
}

//______________________________________________________________________________
void TSystem::ExitLoop()
{
   // Exit from event loop.

   fDone = kTRUE;
}

//______________________________________________________________________________
void TSystem::InnerLoop()
{
   // Inner event loop.

   fLevel++;
   DispatchOneEvent();
   fLevel--;
}

//______________________________________________________________________________
Bool_t TSystem::ProcessEvents()
{
   // Process pending events (GUI, timers). Returns the result of
   // TROOT::IsInterrupted(). The interrupt flag (TROOT::SetInterrupt())
   // can be set during the handling of the events. This mechanism allows
   // macros running in tight calculating loops to be interrupted by some
   // GUI event (depending on the interval with which this method is
   // called). For example hitting ctrl-c in a canvas will set the
   // interrupt flag.

   gROOT->SetInterrupt(kFALSE);

   if (!gROOT->IsBatch())
      DispatchOneEvent(kTRUE);

   return gROOT->IsInterrupted();
}

//______________________________________________________________________________
void TSystem::DispatchOneEvent(Bool_t)
{
   // Dispatch a single event.

   AbstractMethod("DispatchOneEvent");
}

//______________________________________________________________________________
void TSystem::Sleep(UInt_t)
{
   // Sleep milliSec milli seconds.

   AbstractMethod("Sleep");
}


//---- handling of system events -----------------------------------------------
//______________________________________________________________________________
TTime TSystem::Now()
{
   // Return current time.

   return TTime(0);
}

//______________________________________________________________________________
void TSystem::AddTimer(TTimer *ti)
{
   // Add timer to list of system timers.

   if (ti && fTimers && (fTimers->FindObject(ti) == 0))
      fTimers->Add(ti);
}

//______________________________________________________________________________
TTimer *TSystem::RemoveTimer(TTimer *ti)
{
   // Remove timer from list of system timers.

   if (fTimers) {
      fTimers->Remove(ti);
      return ti;
   }
   return 0;
}

//______________________________________________________________________________
Long_t TSystem::NextTimeOut(Bool_t mode)
{
   // Time when next timer of mode (synchronous=kTRUE or
   // asynchronous=kFALSE) will time-out (in ms).

   if (!fTimers) return -1;

   TIter next(fTimers);
   TTimer *t;
   Long_t  tt, timeout = -1, tnow = Now();

   while ((t = (TTimer *)next())) {
      if (t->IsSync() == mode) {
         tt = (long)t->GetAbsTime() - tnow;
         if (tt < 0) tt = 0;
         if (timeout == -1) timeout = tt;
         if (tt < timeout) timeout = tt;
      }
   }
   return timeout;
}

//______________________________________________________________________________
void TSystem::AddSignalHandler(TSignalHandler *h)
{
   // Add a signal handler to list of system signal handlers.

   if (h && fSignalHandler && (fSignalHandler->FindObject(h) == 0))
      fSignalHandler->Add(h);
}

//______________________________________________________________________________
TSignalHandler *TSystem::RemoveSignalHandler(TSignalHandler *h)
{
   // Remove a signal handler from list of signal handlers.

   if (fSignalHandler) {
      fSignalHandler->Remove(h);
      return h;
   }
   return 0;
}

//______________________________________________________________________________
void TSystem::AddFileHandler(TFileHandler *h)
{
   // Add a file handler to the list of system file handlers.

   if (h && fFileHandler && (fFileHandler->FindObject(h) == 0))
      fFileHandler->Add(h);
}

//______________________________________________________________________________
TFileHandler *TSystem::RemoveFileHandler(TFileHandler *h)
{
   // Remove a file handler from the list of file handlers.

   if (fFileHandler) {
      fFileHandler->Remove(h);
      return h;
   }
   return 0;
}

//______________________________________________________________________________
void TSystem::IgnoreInterrupt(Bool_t)
{
   // Ignore the interrupt signal if ignore == kTRUE else restore previous
   // behaviour. Typically call ignore interrupt before writing to disk.

   AbstractMethod("IgnoreInterrupt");
}

//---- Processes ---------------------------------------------------------------

//______________________________________________________________________________
int TSystem::Exec(const char*)
{
   // Execute a command.

   AbstractMethod("Exec");
   return -1;
}

//______________________________________________________________________________
FILE *TSystem::OpenPipe(const char*, const char*)
{
   // Open a pipe.

   AbstractMethod("OpenPipe");
   return 0;
}

//______________________________________________________________________________
int TSystem::ClosePipe(FILE*)
{
   // Close the pipe.

   AbstractMethod("ClosePipe");
   return -1;
}

//______________________________________________________________________________
int TSystem::GetPid()
{
   // Get process id.

   AbstractMethod("GetPid");
   return -1;
}

//______________________________________________________________________________
void TSystem::Exit(int, Bool_t)
{
   // Exit the application.

   AbstractMethod("Exit");
}

//______________________________________________________________________________
void TSystem::Abort(int)
{
   // Abort the application.

   AbstractMethod("Abort");
}

//______________________________________________________________________________
void TSystem::StackTrace()
{
   // Print a stack trace.

   AbstractMethod("StackTrace");
}


//---- Directories -------------------------------------------------------------

//______________________________________________________________________________
int TSystem::MakeDirectory(const char*)
{
   // Make a directory. Returns 0 in case of success and
   // -1 if the directory could not be created.

   AbstractMethod("MakeDirectory");
   return 0;
}

//______________________________________________________________________________
void *TSystem::OpenDirectory(const char*)
{
   // Open a directory. Returns 0 if directory does not exist.

   AbstractMethod("OpenDirectory");
   return 0;
}

//______________________________________________________________________________
void TSystem::FreeDirectory(void*)
{
   // Free a directory.

   AbstractMethod("FreeDirectory");
}

//______________________________________________________________________________
const char *TSystem::GetDirEntry(void*)
{
   // Get a directory entry. Returns 0 if no more entries.

   AbstractMethod("GetDirEntry");
   return 0;
}

//______________________________________________________________________________
Bool_t TSystem::ChangeDirectory(const char*)
{
   // Change directory.

   AbstractMethod("ChangeDirectory");
   return kFALSE;
}

//______________________________________________________________________________
const char *TSystem::WorkingDirectory()
{
   // Return working directory.

   return 0;
}

//______________________________________________________________________________
const char *TSystem::HomeDirectory()
{
   // Return the user's home directory.

   return 0;
}


//---- Paths & Files -----------------------------------------------------------

//______________________________________________________________________________
const char *TSystem::BaseName(const char *name)
{
   // Base name of a file name. Base name of /user/root is root.

   if (name) {
      if (name[0] == '/' && name[1] == '\0')
         return name;
      char *cp;
      if ((cp = (char*)strrchr(name, '/')))
         return ++cp;
      return name;
   }
   Error("BaseName", "name = 0");
   return 0;
}

//______________________________________________________________________________
Bool_t TSystem::IsAbsoluteFileName(const char *dir)
{
   // Return true if dir is an absolute pathname.

   if (dir)
      return dir[0] == '/';
   return kFALSE;
}

//______________________________________________________________________________
const char *TSystem::DirName(const char *pathname)
{
   // Return the directory name in pathname. DirName of /user/root is /user.

   if (pathname && strchr(pathname, '/')) {
      static char buf[1000];
      strcpy(buf, pathname);
      char *r = strrchr(buf, '/');
      if (r != buf)
         *r = '\0';
      return buf;
   }
   return WorkingDirectory();
}

//______________________________________________________________________________
const char *TSystem::UnixPathName(const char *name)
{
   // Convert from a Unix pathname to a local pathname. E.g. from /user/root to \user\root.

   return name;
}

//______________________________________________________________________________
char *TSystem::ConcatFileName(const char *, const char *)
{
   // Concatenate a directory and a file name.

   AbstractMethod("ConcatFileName");
   return 0;
}


//---- Paths & Files -----------------------------------------------------------

//______________________________________________________________________________
Bool_t TSystem::ExpandPathName(TString&)
{
   // Expand a pathname getting rid of special shell characaters like ~.$, etc.
   // For Unix/Win32 compatibility use $(XXX) instead of $XXX when using
   // environment variables in a pathname. If compatibility is not an issue
   // you can use on Unix directly $XXX.

   return kFALSE;
}

//______________________________________________________________________________
char *TSystem::ExpandPathName(const char *)
{
   // Expand a pathname getting rid of special shell characaters like ~.$, etc.
   // For Unix/Win32 compatibility use $(XXX) instead of $XXX when using
   // environment variables in a pathname. If compatibility is not an issue
   // you can use on Unix directly $XXX. The user must delete returned string.

   return 0;
}

//______________________________________________________________________________
Bool_t TSystem::AccessPathName(const char*, EAccessMode)
{
   // Returns FALSE if one can access a file using the specified access mode.

   return kFALSE;
}

//______________________________________________________________________________
void TSystem::Rename(const char *, const char *)
{
   // Rename a file.

   AbstractMethod("Rename");
}

//______________________________________________________________________________
int TSystem::Link(const char *, const char *)
{
   // Create a link from file1 to file2.

   AbstractMethod("Link");
   return -1;
}

//______________________________________________________________________________
int TSystem::Symlink(const char *, const char *)
{
   // Create a symbolic link from file1 to file2.

   AbstractMethod("Symlink");
   return -1;
}

//______________________________________________________________________________
int TSystem::Unlink(const char *)
{
   // Unlink, i.e. remove, a file.

   AbstractMethod("Unlink");
   return -1;
}

//______________________________________________________________________________
int TSystem::GetPathInfo(const char*, Long_t*, Long_t*, Long_t*, Long_t*)
{
   // Get info about a file: id, size, flags, modification time.

   AbstractMethod("GetPathInfo");
   return -1;
}

//______________________________________________________________________________
int TSystem::Umask(Int_t)
{
   // Set the process file creation mode mask.

   AbstractMethod("Umask");
   return -1;
}

//______________________________________________________________________________
char *TSystem::Which(const char *, const char *, EAccessMode)
{
   // Find location of file in a search path.

   AbstractMethod("Which");
   return 0;
}

//---- environment manipulation ------------------------------------------------

//______________________________________________________________________________
void TSystem::Setenv(const char*, const char*)
{
   // Set environment variable.

   AbstractMethod("Setenv");
}

//______________________________________________________________________________
void TSystem::Unsetenv(const char *name)
{
   // Unset environment variable.
   Setenv(name, 0);
}

//______________________________________________________________________________
const char *TSystem::Getenv(const char*)
{
   // Get environment variable.

   AbstractMethod("Getenv");
   return 0;
}

//---- System Logging ----------------------------------------------------------

//______________________________________________________________________________
void TSystem::Openlog(const char *, Int_t, ELogFacility)
{
   // Open connection to system log daemon. For the use of the options and
   // facility see the Unix openlog man page.

   AbstractMethod("Openlog");
}

//______________________________________________________________________________
void TSystem::Syslog(ELogLevel, const char *)
{
   // Send mess to syslog daemon. Level is the logging level and mess the
   // message that will be written on the log.

   AbstractMethod("Syslog");
}

//______________________________________________________________________________
void TSystem::Closelog()
{
   // Close connection to system log daemon.

   AbstractMethod("Closelog");
}

//---- Dynamic Loading ---------------------------------------------------------

//______________________________________________________________________________
int TSystem::Load(const char *module, const char *entry)
{
   // Load a shared library. Returns 0 on successful loading, 1 in
   // case lib was already loaded and -1 in case lib does not exist
   // or in case of error.

#ifdef NOCINT
   AbstractMethod("Load");
   return 0;
#else
   char *path;
   int i = -1;
   if (IsAbsoluteFileName(module))
      i = G__loadfile((char *)module);
   else if ((path = DynamicPathName(module))) {
      char *s = path;
      i = G__loadfile(s);
      delete [] path;
   }

   if (!entry || !strlen(entry)) return i;

   Func_t f = DynFindSymbol(module, entry);
   if (f) return 0;
   return 1;
#endif

}
//______________________________________________________________________________
char *TSystem::DynamicPathName(const char *, Bool_t)
{
   AbstractMethod("DynamicPathName");
   return 0;
}
//______________________________________________________________________________
Func_t TSystem::DynFindSymbol(const char *, const char *)
{
   AbstractMethod("DynFindSymbol");
   return 0;
}

//______________________________________________________________________________
void TSystem::Unload(const char *)
{
   // Unload a shared library.

   AbstractMethod("UnLoad");
}

//______________________________________________________________________________
void TSystem::ListSymbols(const char *, const char *)
{
   // List symbols in a shared library.

   AbstractMethod("ListSymbols");
}

//______________________________________________________________________________
void TSystem::ListLibraries(const char *)
{
   // List all loaded shared libraries.

   AbstractMethod("ListLibraries");
}


//---- RPC ---------------------------------------------------------------------

//______________________________________________________________________________
TInetAddress TSystem::GetHostByName(const char *)
{
   // Get Internet Protocol (IP) address of host.

   AbstractMethod("GetHostByName");
   return TInetAddress();
}

//______________________________________________________________________________
TInetAddress TSystem::GetPeerName(int)
{
   // Get Internet Protocol (IP) address of remote host and port #.

   AbstractMethod("GetPeerName");
   return TInetAddress();
}

//______________________________________________________________________________
TInetAddress TSystem::GetSockName(int)
{
   // Get Internet Protocol (IP) address of host and port #.

   AbstractMethod("GetSockName");
   return TInetAddress();
}

//______________________________________________________________________________
int TSystem::GetServiceByName(const char *)
{
   // Get port # of internet service.

   AbstractMethod("GetServiceByName");
   return -1;
}

//______________________________________________________________________________
char *TSystem::GetServiceByPort(int)
{
   // Get name of internet service.
   AbstractMethod("GetServiceByPort");
   return 0;
}

//______________________________________________________________________________
int TSystem::OpenConnection(const char*, int)
{
   // Open a connection to another host.

   AbstractMethod("OpenConnection");
   return -1;
}

//______________________________________________________________________________
int TSystem::AnnounceTcpService(int, Bool_t, int)
{
   // Announce TCP/IP service.

   AbstractMethod("AnnounceTcpService");
   return -1;
}

//______________________________________________________________________________
int TSystem::AnnounceUnixService(int, int)
{
   // Announce unix domain service.

   AbstractMethod("AnnounceUnixService");
   return -1;
}

//______________________________________________________________________________
int TSystem::AcceptConnection(int)
{
   // Accept a connection.

   AbstractMethod("AcceptConnection");
   return -1;
}

//______________________________________________________________________________
void TSystem::CloseConnection(int)
{
   // Close socket connection.

   AbstractMethod("CloseConnection");
}

//______________________________________________________________________________
int TSystem::RecvRaw(int, void *, int, int)
{
   // Receive exactly length bytes into buffer. Use opt to receive out-of-band
   // data or to have a peek at what is in the buffer (see TSocket).

   AbstractMethod("RecvRaw");
   return -1;
}

//______________________________________________________________________________
int TSystem::SendRaw(int, const void *, int, int)
{
   // Send exactly length bytes from buffer. Use opt to send out-of-band
   // data (see TSocket).

   AbstractMethod("SendRaw");
   return -1;
}

//______________________________________________________________________________
int TSystem::RecvBuf(int, void *, int)
{
   // Receive a buffer headed by a length indicator.

   AbstractMethod("RecvBuf");
   return -1;
}

//______________________________________________________________________________
int TSystem::SendBuf(int, const void *, int)
{
   // Send a buffer headed by a length indicator.

   AbstractMethod("SendBuf");
   return -1;
}

//______________________________________________________________________________
int TSystem::SetSockOpt(int, int, int)
{
   // Set socket option.

   AbstractMethod("SetSockOpt");
   return -1;
}

//______________________________________________________________________________
int TSystem::GetSockOpt(int, int, int*)
{
   // Get socket option.

   AbstractMethod("GetSockOpt");
   return -1;
}
