//*CMZ :  2.23/12 31/01/2000  18.35.20  by  Fons Rademakers
//*CMZ :  2.23/10 16/12/99  08.34.26  by  Fons Rademakers
//*CMZ :  2.20/00 08/11/98  12.25.38  by  Rene Brun
//*CMZ :  2.00/05 20/04/98  15.19.13  by  Fons Rademakers
//*CMZ :  1.03/09 07/12/97  00.26.00  by  Fons Rademakers
//*-- Author :    Fons Rademakers   13/02/97

#ifndef ROOT_TProof
#define ROOT_TProof

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
// TProof                                                               //
//                                                                      //
// This class controls a Parallel ROOT Facility, PROOF, cluster.        //
// It fires the slave servers, it keeps track of how many slaves are    //
// running, it keeps track of the slaves running status, it broadcasts  //
// messages to all slaves, it collects results, etc.                    //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#ifndef ROOT_TObject
#include "TObject.h"
#endif
#ifndef ROOT_TString
#include "TString.h"
#endif
#ifndef ROOT_MessageTypes
#include "MessageTypes.h"
#endif

class TList;
class TMessage;
class TSocket;
class TMonitor;
class TFile;
class TTree;

const char* const kPROOF_Version  = "970213";
const Int_t       kPROOF_Protocol = 1;


class TProof : public TObject {

friend class TSlave;

private:
   TString   fCluster;       //name of cluster, name will be used to find config file
   TString   fService;       //service we are connected to, either "proofserv" or "proofslave"
   TString   fMaster;        //name of master server (in case of "proofserv")
   TString   fVersion;       //proof server major version
   TString   fConfDir;       //directory containing cluster config information
   TString   fConfFile;      //file containing config information
   TString   fUser;          //user under which to run
   TString   fPasswd;        //user password
   Int_t     fProtocol;      //protocol level
   Int_t     fLogLevel;      //server debug logging level
   Bool_t    fMasterServ;    //true if we are a master server
   TList    *fSlaves;        //list of all slave servers as in config file
   TList    *fActiveSlaves;  //list of active slaves (subset of all slaves)
   TList    *fBadSlaves;     //dead slaves (subset of all slaves)
   TMonitor *fAllMonitor;    //monitor activity on all valid slave sockets
   TMonitor *fActiveMonitor; //monitor activity on all active slave sockets
   Double_t  fBytesRead;     //bytes read by all slaves during the session
   Float_t   fRealTime;      //realtime spent by all slaves during the session
   Float_t   fCpuTime;       //CPU time spent by all slaves during the session
   TTree    *fTree;          //Object being PROOFed
   Int_t     fLimits;        //Used by Limits()

   Int_t     Init(const char *cluster, const char *service, const char *master,
                  const char *vers, Int_t loglevel, const char *confdir);
   Int_t     Collect(TMonitor *mon);
   void      ConnectFiles();
   void      GetUserInfo();
   void      GetStatus();
   void      Limits(TSocket *s, TMessage &mess);
   void      MarkBad(TSlave *sl);
   void      MarkBad(TSocket *s);
   Int_t     SendGroupView();
   Int_t     SendInitialState();

   TProof() { fSlaves = fActiveSlaves = fBadSlaves = 0; }
   TProof(const TProof &);           // not implemented
   void operator=(const TProof &);   // idem

public:
   enum ESlaves { kAll, kActive };
   enum EUrgent { kHardInterrupt = 1, kSoftInterrupt, kShutdownInterrupt };

   TProof(const char *cluster, const char *master = "pcna49a.cern.ch",
          const char *vers = kPROOF_Version, const char *service = "proofslave",
          Int_t loglevel = 1, const char *confdir = "/usr/proof");
   virtual ~TProof();

   void    Close(Option_t *option="");

   const char *GetClusterName() const { return fCluster.Data(); }
   const char *GetService() const { return fService.Data(); }
   const char *GetMaster() const { return fMaster.Data(); }
   const char *GetConfDir() const { return fConfDir.Data(); }
   const char *GetConfFile() const { return fConfFile.Data(); }
   const char *GetUser() const { return fUser.Data(); }
   const char *GetVersion() const { return fVersion.Data(); }
   Int_t       GetProtocol() const { return fProtocol; }
   Int_t       GetLogLevel() const { return fLogLevel; }
   void        SetLogLevel(Int_t level);

   TSlave  *FindSlave(TSocket *s) const;
   TList   *GetListOfActiveSlaves() const { return fActiveSlaves; }
   TList   *GetListOfSlaves() const { return fSlaves; }
   TList   *GetListOfBadSlaves() const { return fBadSlaves; }
   Int_t    GetNumberOfActiveSlaves() const;
   Int_t    GetNumberOfSlaves() const;
   Int_t    GetNumberOfBadSlaves() const;
   Double_t GetBytesRead() const { return fBytesRead; }
   Float_t  GetRealTime() const { return fRealTime; }
   Float_t  GetCpuTime() const { return fCpuTime; }

   void     Interrupt(EUrgent type, ESlaves list = kActive);
   Bool_t   IsMaster() const { return fMasterServ; }
   Bool_t   IsValid() const { return GetNumberOfActiveSlaves() ? kTRUE : kFALSE; }

   Int_t    Broadcast(const TMessage &mess, ESlaves list = kActive);
   Int_t    Broadcast(const char *mess, Int_t kind = kMESS_STRING, ESlaves list = kActive);
   Int_t    Broadcast(Int_t kind, ESlaves list = kActive) { return Broadcast(0, kind, list); }
   Int_t    Collect(ESlaves list = kActive);
   Int_t    Collect(const TSlave *sl);

   void     Loop(TTree *tree);
   void     RecvLogFile(TSocket *s);

   Int_t    DisConnectFile(const TFile *file);
   Int_t    ConnectFile(const TFile *file);
   Int_t    Ping(ESlaves list = kActive);
   Int_t    SendCommand(const char *cmd, ESlaves list = kActive);
   Int_t    SendCurrentState(ESlaves list = kActive);
   Int_t    SendObject(const TObject *obj, ESlaves list = kActive);

   Int_t    SetParallel(Int_t nodes = 9999);

   void     Print(Option_t *option="");

   static Bool_t  IsActive();
   static TProof *This();

   ClassDef(TProof,0)  //PROOF control class
};

R__EXTERN TProof *gProof;

#endif
