//*CMZ :  2.00/06 21/04/98  12.48.53  by  Kaori Wada
//*CMZ :  2.00/00 01/01/98  14.48.00  by  Fons Rademakers
//*CMZ :  1.03/09 14/12/97  13.34.57  by  Fons Rademakers
//*-- Author :    Fons Rademakers   15/09/95

#ifndef ROOT_TVmsSystem
#define ROOT_TVmsSystem

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
// TVmsSystem                                                          //
//                                                                      //
// Class providing an interface to the UNIX Operating System.           //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TSystem
#include "TSystem.h"
#endif
#ifndef ROOT_TSysEvtHandler
#include "TSysEvtHandler.h"
#endif
#ifndef ROOT_TTimer
#include "TTimer.h"
#endif

typedef void (*SigHandler_t)(ESignals);


class TVmsSystem : public TSystem {

protected:
   // static functions providing semi-low level interface to raw Vms
   static int          VmsMakedir(const char *name);
   static void        *VmsOpendir(const char *name);
   static const char  *VmsGetdirentry(void *dir);
   static const char  *VmsHomedirectory(const char *user = 0);
   static Long_t       VmsNow();
   static int          VmsWaitchild();
   static int          VmsSetitimer(Long_t ms);
   static int          VmsSelect(UInt_t nfds, TFdSet *readready, TFdSet *writeready,
                                  Long_t timeout);
   static void         VmsSignal(ESignals sig, SigHandler_t h);
   static const char  *VmsSigname(ESignals sig);
   static int          VmsFilestat(const char *path, unsigned short *id, Long_t *size,
                                    Long_t *flags, Long_t *modtime);
   static int          VmsTcpConnect(const char *hostname, int port);
   static int          VmsVmsConnect(int port);
   static int          VmsTcpService(int port, Bool_t reuse, int backlog);
   static int          VmsVmsService(int port, int backlog);
   static int          VmsRecv(int sock, void *buf, int len, int flag);
   static int          VmsSend(int sock, const void *buf, int len, int flag);

   static const char  *GetDynamicPath();
          char        *DynamicPathName(const char *lib);
   static void        *FindDynLib(const char *lib);
   static int          VmsDynLoad(const char *lib);
   static Func_t       VmsDynFindSymbol(const char *lib, const char *entry);
   static void         VmsDynUnload(const char *lib);
   static void         VmsDynListSymbols(const char *lib, const char *re = "");
   static void         VmsDynListLibs(const char *lib = "");

   static void        *SearchUtmpEntry(int nentries, const char *tty);
   static int          ReadUtmpFile();

public:
   TVmsSystem();
   ~TVmsSystem();
   static int          Kbhit();

   //---- Misc -------------------------------------------------
   Bool_t            Init();
   void              SetProgname(const char *name);
   void              SetDisplay();
   const char       *GetError();
   const char       *HostName();

   //---- EventLoop --------------------------------------------
   void              DispatchOneEvent();

   //---- Handling of system events ----------------------------
   void              CheckChilds();
   Bool_t            CheckSignals(Bool_t sync);
   void              DispatchSignals(ESignals sig);
   void              AddSignalHandler(TSignalHandler *sh);
   TSignalHandler   *RemoveSignalHandler(TSignalHandler *sh);
   void              AddFileHandler(TFileHandler *fh);
   TFileHandler     *RemoveFileHandler(TFileHandler *fh);
   void              IgnoreInterrupt(Bool_t ignore = kTRUE);

   //---- Time & Date ------------------------------------------
   TTime             Now();
   void              AddTimer(TTimer *ti);
   TTimer           *RemoveTimer(TTimer *ti);
   Bool_t            DispatchTimers(Bool_t mode);
   void              Sleep(UInt_t milliSec);

   //---- Processes --------------------------------------------
   int               Exec(const char *shellcmd);
   FILE             *OpenPipe(const char *shellcmd, const char *mode);
   int               ClosePipe(FILE *pipe);
   void              Exit(int code, Bool_t mode = kTRUE);
   void              Abort(int code = 0);
   int               GetPid();
   void              StackTrace();

   //---- Environment Manipulation -----------------------------
   const char       *Getenv(const char *name);
   void              Setenv(const char *name, const char *value);

   //---- Directories ------------------------------------------
   int               MakeDirectory(const char *name);
   void             *OpenDirectory(const char *name);
   void              FreeDirectory(void *dirp);
   const char       *GetDirEntry(void *dirp);
   Bool_t            ChangeDirectory(const char *path);
   const char       *WorkingDirectory();
   const char       *HomeDirectory();

   //---- Paths & Files ----------------------------------------
   char             *ConcatFileName(const char *dir, const char *name);
   Bool_t            ExpandPathName(TString &patbuf);
   char             *ExpandPathName(const char *path);
   Bool_t            AccessPathName(const char *path, EAccessMode mode = kFileExists);
   void              Rename(const char *from, const char *to);
   int               Link(const char *from, const char *to);
   int               Symlink(const char *from, const char *to);
   int               Unlink(const char *name);
   int               GetPathInfo(const char *path, unsigned short *id,Long_t *size,
                                 Long_t *flags, Long_t *modtime);
   int               Umask(Int_t mask);
   char             *Which(const char *search, const char *file, EAccessMode mode = kFileExists);

   //---- System Logging ---------------------------------------
   void              Openlog(const char *name, Int_t options, ELogFacility facility);
   void              Syslog(ELogLevel level, const char *mess);
   void              Closelog();

   //---- Dynamic Loading --------------------------------------
   Func_t            DynFindSymbol(const char *module, const char *entry);
   int               Load(const char *module, const char *entry = "");
   void              Unload(const char *module);
   void              ListSymbols(const char *module, const char *re = "");
   void              ListLibraries(const char *regexp = "");

   //---- RPC --------------------------------------------------
   TInetAddress      GetHostByName(const char *server);
   TInetAddress      GetPeerName(int sock);
   TInetAddress      GetSockName(int sock);
   int               GetServiceByName(const char *service);
   char             *GetServiceByPort(int port);
   int               ConnectService(const char *server, int port);
   int               OpenConnection(const char *server, int port);
   int               AnnounceTcpService(int port, Bool_t reuse, int backlog);
   int               AnnounceVmsService(int port, int backlog);
   int               AcceptConnection(int sock);
   void              CloseConnection(int sock);
   int               RecvRaw(int sock, void *buffer, int length, int flag);
   int               SendRaw(int sock, const void *buffer, int length, int flag);
   int               RecvBuf(int sock, void *buffer, int length);
   int               SendBuf(int sock, const void *buffer, int length);
   int               SetSockOpt(int sock, int option, int val);
   int               GetSockOpt(int sock, int option, int *val);

   ClassDef(TVmsSystem,0)  //Interface to Vmsy OS services
};

#endif
