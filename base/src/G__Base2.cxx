//*CMZ :  2.24/05 15/05/2000  08.47.06  by  Rene Brun
//*-- Author :    Rene Brun   15/05/2000
//*CMZ :  1.00/09 23/04/97  17.59.54  by  Rene Brun
//*-- Author :    Rene Brun   23/04/97
#if defined(__hpux) && !defined(__GNUG__)
#pragma OPTIMIZE OFF
#endif

#if defined(_AIX) && !defined(__GNUG__)
#endif

#if defined(__alpha) && !defined(__GNUG__)
#endif

#if defined(__sun) && !defined(__GNUG__)
#endif

#if defined(__sgi) && !defined(__GNUG__)
#endif

#if defined(_linux)
#endif

#ifdef WIN32
#pragma optimize("",off)
#endif

/********************************************************************
********************************************************************/
#ifdef __CINT__
#endif
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define G__ANSIHEADER
#include "G__ci.h"
extern "C" {
extern void G__cpp_setup_tagtableG__Base2();
extern void G__cpp_setup_inheritanceG__Base2();
extern void G__cpp_setup_typetableG__Base2();
extern void G__cpp_setup_memvarG__Base2();
extern void G__cpp_setup_globalG__Base2();
extern void G__cpp_setup_memfuncG__Base2();
extern void G__cpp_setup_funcG__Base2();
extern void G__set_cpp_environmentG__Base2();
}


#include "TROOT.h"
#include "TMemberInspector.h"
#include "TArrayC.h"
#include "TArrayD.h"
#include "TArrayF.h"
#include "TArrayI.h"
#include "TArrayL.h"
#include "TArrayS.h"
#include "TAttFill.h"
#include "TAttLine.h"
#include "TAttMarker.h"
#include "TAtt3D.h"
#include "TAttText.h"
#include "TBaseClass.h"
#include "TBuffer.h"
#include "TClass.h"
#include "TExec.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TDatime.h"
#include "TDirectory.h"
#include "TEnv.h"
#include "TFile.h"
#include "TFree.h"
#include "TFunction.h"
#include "TGlobal.h"
#include "TKey.h"
#include "TObject.h"
#include "TMemberInspector.h"
#include "TMethod.h"
#include "TMethodArg.h"
#include "TMethodCall.h"
#include "TNamed.h"
#include "TRealData.h"
#include "TMapFile.h"
#include "TMath.h"
#include "TROOT.h"
#include "TKeyMapFile.h"
#include "TApplication.h"
#include "TApplicationImp.h"
#include "TBrowserImp.h"
#include "TCanvasImp.h"
#include "TContextMenuImp.h"
#include "TControlBarImp.h"
#include "TRegexp.h"
#include "TString.h"
#include "TStringLong.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TSysEvtHandler.h"
#include "TSystemFile.h"
#include "TSystemDirectory.h"
#include "TStopwatch.h"
#include "TStorage.h"
#include "TRandom.h"
#include "TRandom2.h"
#include "TRandom3.h"
#include "TBenchmark.h"
#include "TTime.h"
#include "TTimer.h"
#include "TMessageHandler.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Base2LN_TClass;
extern G__linked_taginfo G__G__Base2LN_TBuffer;
extern G__linked_taginfo G__G__Base2LN_TMemberInspector;
extern G__linked_taginfo G__G__Base2LN_TStorage;
extern G__linked_taginfo G__G__Base2LN_TList;
extern G__linked_taginfo G__G__Base2LN_TTimer;
extern G__linked_taginfo G__G__Base2LN_TObject;
extern G__linked_taginfo G__G__Base2LN_TObjectcLcLdA;
extern G__linked_taginfo G__G__Base2LN_TMath;
extern G__linked_taginfo G__G__Base2LN_istream;
extern G__linked_taginfo G__G__Base2LN_TRegexp;
extern G__linked_taginfo G__G__Base2LN_TString;
extern G__linked_taginfo G__G__Base2LN_TStringLong;
extern G__linked_taginfo G__G__Base2LN_TSubString;
extern G__linked_taginfo G__G__Base2LN_TStringRef;
extern G__linked_taginfo G__G__Base2LN_TStringcLcLEStripType;
extern G__linked_taginfo G__G__Base2LN_TStringcLcLECaseCompare;
extern G__linked_taginfo G__G__Base2LN_TSeqCollection;
extern G__linked_taginfo G__G__Base2LN_TNamed;
extern G__linked_taginfo G__G__Base2LN_TDatime;
extern G__linked_taginfo G__G__Base2LN_TKey;
extern G__linked_taginfo G__G__Base2LN_TFile;
extern G__linked_taginfo G__G__Base2LN_TDirectory;
extern G__linked_taginfo G__G__Base2LN_TColor;
extern G__linked_taginfo G__G__Base2LN_TDataType;
extern G__linked_taginfo G__G__Base2LN_TStyle;
extern G__linked_taginfo G__G__Base2LN_TVirtualPad;
extern G__linked_taginfo G__G__Base2LN_TApplication;
extern G__linked_taginfo G__G__Base2LN_TInterpreter;
extern G__linked_taginfo G__G__Base2LN_TGlobal;
extern G__linked_taginfo G__G__Base2LN_TFunction;
extern G__linked_taginfo G__G__Base2LN_TROOT;
extern G__linked_taginfo G__G__Base2LN_TDataMember;
extern G__linked_taginfo G__G__Base2LN_TRealData;
extern G__linked_taginfo G__G__Base2LN_TExec;
extern G__linked_taginfo G__G__Base2LN_TOrdCollection;
extern G__linked_taginfo G__G__Base2LN_TFree;
extern G__linked_taginfo G__G__Base2LN_TMapFile;
extern G__linked_taginfo G__G__Base2LN_TMapRec;
extern G__linked_taginfo G__G__Base2LN_TMapFilecLcLdA;
extern G__linked_taginfo G__G__Base2LN_TKeyMapFile;
extern G__linked_taginfo G__G__Base2LN_TSignalHandler;
extern G__linked_taginfo G__G__Base2LN_TRegexpcLcLEStatVal;
extern G__linked_taginfo G__G__Base2LN_TObjString;
extern G__linked_taginfo G__G__Base2LN_TInetAddress;
extern G__linked_taginfo G__G__Base2LN_TSystem;
extern G__linked_taginfo G__G__Base2LN_TSysEvtHandler;
extern G__linked_taginfo G__G__Base2LN_TFileHandler;
extern G__linked_taginfo G__G__Base2LN_ESignals;
extern G__linked_taginfo G__G__Base2LN_TTime;
extern G__linked_taginfo G__G__Base2LN_EAccessMode;
extern G__linked_taginfo G__G__Base2LN_TProcessEventTimer;
extern G__linked_taginfo G__G__Base2LN_TFdSet;
extern G__linked_taginfo G__G__Base2LN_TSystemFile;
extern G__linked_taginfo G__G__Base2LN_TSystemDirectory;
extern G__linked_taginfo G__G__Base2LN_TStopwatch;
extern G__linked_taginfo G__G__Base2LN_TStopwatchcLcLEState;
extern G__linked_taginfo G__G__Base2LN_TRandom;
extern G__linked_taginfo G__G__Base2LN_TRandom2;
extern G__linked_taginfo G__G__Base2LN_TRandom3;
extern G__linked_taginfo G__G__Base2LN_TMessageHandler;
//
// File generated by /home/brun/root/bin/rootcint at Mon May 15 08:47:05 2000.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMemberInspector *&obj)
{
   // Read a pointer to an object of class TMemberInspector.

   ::Error("TMemberInspector::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TStorage *&obj)
{
   // Read a pointer to an object of class TStorage.

   ::Error("TStorage::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTimer *&obj)
{
   // Read a pointer to an object of class TTimer.

   obj = (TTimer *) buf.ReadObject(TTimer::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TObject *&obj)
{
   // Read a pointer to an object of class TObject.

   obj = (TObject *) buf.ReadObject(TObject::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMath *&obj)
{
   // Read a pointer to an object of class TMath.

   ::Error("TMath::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRegexp *&obj)
{
   // Read a pointer to an object of class TRegexp.

   ::Error("TRegexp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TString *&obj)
{
   // Read a pointer to an object of class TString.

   ::Error("TString::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TStringLong *&obj)
{
   // Read a pointer to an object of class TStringLong.

   ::Error("TStringLong::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TNamed *&obj)
{
   // Read a pointer to an object of class TNamed.

   obj = (TNamed *) buf.ReadObject(TNamed::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TKey *&obj)
{
   // Read a pointer to an object of class TKey.

   obj = (TKey *) buf.ReadObject(TKey::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TROOT *&obj)
{
   // Read a pointer to an object of class TROOT.

   obj = (TROOT *) buf.ReadObject(TROOT::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRealData *&obj)
{
   // Read a pointer to an object of class TRealData.

   obj = (TRealData *) buf.ReadObject(TRealData::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TExec *&obj)
{
   // Read a pointer to an object of class TExec.

   obj = (TExec *) buf.ReadObject(TExec::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFree *&obj)
{
   // Read a pointer to an object of class TFree.

   obj = (TFree *) buf.ReadObject(TFree::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMapFile *&obj)
{
   // Read a pointer to an object of class TMapFile.

   obj = (TMapFile *) buf.ReadObject(TMapFile::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TKeyMapFile *&obj)
{
   // Read a pointer to an object of class TKeyMapFile.

   obj = (TKeyMapFile *) buf.ReadObject(TKeyMapFile::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSignalHandler *&obj)
{
   // Read a pointer to an object of class TSignalHandler.

   obj = (TSignalHandler *) buf.ReadObject(TSignalHandler::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TObjString *&obj)
{
   // Read a pointer to an object of class TObjString.

   obj = (TObjString *) buf.ReadObject(TObjString::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSystem *&obj)
{
   // Read a pointer to an object of class TSystem.

   obj = (TSystem *) buf.ReadObject(TSystem::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSysEvtHandler *&obj)
{
   // Read a pointer to an object of class TSysEvtHandler.

   obj = (TSysEvtHandler *) buf.ReadObject(TSysEvtHandler::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TTime *&obj)
{
   // Read a pointer to an object of class TTime.

   ::Error("TTime::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TProcessEventTimer *&obj)
{
   // Read a pointer to an object of class TProcessEventTimer.

   obj = (TProcessEventTimer *) buf.ReadObject(TProcessEventTimer::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSystemFile *&obj)
{
   // Read a pointer to an object of class TSystemFile.

   obj = (TSystemFile *) buf.ReadObject(TSystemFile::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TSystemDirectory *&obj)
{
   // Read a pointer to an object of class TSystemDirectory.

   obj = (TSystemDirectory *) buf.ReadObject(TSystemDirectory::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TStopwatch *&obj)
{
   // Read a pointer to an object of class TStopwatch.

   obj = (TStopwatch *) buf.ReadObject(TStopwatch::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRandom *&obj)
{
   // Read a pointer to an object of class TRandom.

   obj = (TRandom *) buf.ReadObject(TRandom::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRandom2 *&obj)
{
   // Read a pointer to an object of class TRandom2.

   obj = (TRandom2 *) buf.ReadObject(TRandom2::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TRandom3 *&obj)
{
   // Read a pointer to an object of class TRandom3.

   obj = (TRandom3 *) buf.ReadObject(TRandom3::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TMessageHandler *&obj)
{
   // Read a pointer to an object of class TMessageHandler.

   obj = (TMessageHandler *) buf.ReadObject(TMessageHandler::Class());
   return buf;
}

//______________________________________________________________________________
void TExec::Streamer(TBuffer &R__b)
{
   // Stream an object of class TExec.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TExec::IsA());
   } else {
      R__c = R__b.WriteVersion(TExec::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TExec::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TExec.

   TClass *R__cl  = TExec::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TExec::Class_Name()
{
   // Return the class name for TExec.
   return "TExec";
}

// Static variable to hold initialization object
static TExec::R__Init __gR__InitTExec;

//______________________________________________________________________________
void TFree::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFree.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fFirst;
      R__b >> fLast;
   } else {
      R__b.WriteVersion(TFree::IsA());
      TObject::Streamer(R__b);
      R__b << fFirst;
      R__b << fLast;
   }
}

//______________________________________________________________________________
void TFree::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFree.

   TClass *R__cl  = TFree::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFirst", &fFirst);
   R__insp.Inspect(R__cl, R__parent, "fLast", &fLast);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TFree::Class_Name()
{
   // Return the class name for TFree.
   return "TFree";
}

// Static variable to hold initialization object
static TFree::R__Init __gR__InitTFree;

//______________________________________________________________________________
void TKey::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TKey.

   TClass *R__cl  = TKey::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fVersion", &fVersion);
   R__insp.Inspect(R__cl, R__parent, "fNbytes", &fNbytes);
   R__insp.Inspect(R__cl, R__parent, "fObjlen", &fObjlen);
   fDatime.ShowMembers(R__insp, strcat(R__parent,"fDatime.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fKeylen", &fKeylen);
   R__insp.Inspect(R__cl, R__parent, "fCycle", &fCycle);
   R__insp.Inspect(R__cl, R__parent, "fSeekKey", &fSeekKey);
   R__insp.Inspect(R__cl, R__parent, "fSeekPdir", &fSeekPdir);
   fClassName.ShowMembers(R__insp, strcat(R__parent,"fClassName.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fLeft", &fLeft);
   R__insp.Inspect(R__cl, R__parent, "*fBuffer", &fBuffer);
   R__insp.Inspect(R__cl, R__parent, "*fBufferRef", &fBufferRef);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TKey::Class_Name()
{
   // Return the class name for TKey.
   return "TKey";
}

// Static variable to hold initialization object
static TKey::R__Init __gR__InitTKey;

//______________________________________________________________________________
void TKeyMapFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TKeyMapFile.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TKeyMapFile::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TKeyMapFile.

   TClass *R__cl  = TKeyMapFile::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fMapFile", &fMapFile);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TKeyMapFile::Class_Name()
{
   // Return the class name for TKeyMapFile.
   return "TKeyMapFile";
}

// Static variable to hold initialization object
static TKeyMapFile::R__Init __gR__InitTKeyMapFile;

//______________________________________________________________________________
void TMapFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMapFile.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TMapFile::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMapFile.

   TClass *R__cl  = TMapFile::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFd", &fFd);
   R__insp.Inspect(R__cl, R__parent, "fVersion", &fVersion);
   R__insp.Inspect(R__cl, R__parent, "*fName", &fName);
   R__insp.Inspect(R__cl, R__parent, "*fTitle", &fTitle);
   R__insp.Inspect(R__cl, R__parent, "*fOption", &fOption);
   R__insp.Inspect(R__cl, R__parent, "*fMmallocDesc", &fMmallocDesc);
   R__insp.Inspect(R__cl, R__parent, "fBaseAddr", &fBaseAddr);
   R__insp.Inspect(R__cl, R__parent, "fSize", &fSize);
   R__insp.Inspect(R__cl, R__parent, "*fFirst", &fFirst);
   R__insp.Inspect(R__cl, R__parent, "*fLast", &fLast);
   R__insp.Inspect(R__cl, R__parent, "fOffset", &fOffset);
   R__insp.Inspect(R__cl, R__parent, "*fDirectory", &fDirectory);
   R__insp.Inspect(R__cl, R__parent, "*fBrowseList", &fBrowseList);
   R__insp.Inspect(R__cl, R__parent, "fWritable", &fWritable);
   R__insp.Inspect(R__cl, R__parent, "fSemaphore", &fSemaphore);
   R__insp.Inspect(R__cl, R__parent, "fhSemaphore", &fhSemaphore);
   R__insp.Inspect(R__cl, R__parent, "*fGetting", &fGetting);
   R__insp.Inspect(R__cl, R__parent, "fWritten", &fWritten);
   R__insp.Inspect(R__cl, R__parent, "fSumBuffer", &fSumBuffer);
   R__insp.Inspect(R__cl, R__parent, "fSum2Buffer", &fSum2Buffer);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TMapFile::Class_Name()
{
   // Return the class name for TMapFile.
   return "TMapFile";
}

// Static variable to hold initialization object
static TMapFile::R__Init __gR__InitTMapFile;

//______________________________________________________________________________
void TMath::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMath.

   ::Error("TMath::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TMath::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMath.

   TClass *R__cl  = TMath::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
}

//______________________________________________________________________________
const char *TMath::Class_Name()
{
   // Return the class name for TMath.
   return "TMath";
}

// Static variable to hold initialization object
static TMath::R__Init __gR__InitTMath;

//______________________________________________________________________________
void TMemberInspector::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMemberInspector.

   ::Error("TMemberInspector::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TMemberInspector::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMemberInspector.

   TClass *R__cl  = TMemberInspector::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
}

//______________________________________________________________________________
const char *TMemberInspector::Class_Name()
{
   // Return the class name for TMemberInspector.
   return "TMemberInspector";
}

// Static variable to hold initialization object
static TMemberInspector::R__Init __gR__InitTMemberInspector;

//______________________________________________________________________________
void TMessageHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TMessageHandler.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TMessageHandler::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TMessageHandler.

   TClass *R__cl  = TMessageHandler::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fClass", &fClass);
   R__insp.Inspect(R__cl, R__parent, "*fMessObj", &fMessObj);
   R__insp.Inspect(R__cl, R__parent, "fMessId", &fMessId);
   R__insp.Inspect(R__cl, R__parent, "fSize", &fSize);
   R__insp.Inspect(R__cl, R__parent, "*fCnts", &fCnts);
   R__insp.Inspect(R__cl, R__parent, "*fMessIds", &fMessIds);
   R__insp.Inspect(R__cl, R__parent, "fDerived", &fDerived);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TMessageHandler::Class_Name()
{
   // Return the class name for TMessageHandler.
   return "TMessageHandler";
}

// Static variable to hold initialization object
static TMessageHandler::R__Init __gR__InitTMessageHandler;

//______________________________________________________________________________
void TNamed::Streamer(TBuffer &R__b)
{
   // Stream an object of class TNamed.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      fName.Streamer(R__b);
      fTitle.Streamer(R__b);
   } else {
      R__b.WriteVersion(TNamed::IsA());
      TObject::Streamer(R__b);
      fName.Streamer(R__b);
      fTitle.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TNamed::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TNamed.

   TClass *R__cl  = TNamed::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   fTitle.ShowMembers(R__insp, strcat(R__parent,"fTitle.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TNamed::Class_Name()
{
   // Return the class name for TNamed.
   return "TNamed";
}

// Static variable to hold initialization object
static TNamed::R__Init __gR__InitTNamed;

//______________________________________________________________________________
void TObjString::Streamer(TBuffer &R__b)
{
   // Stream an object of class TObjString.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      fString.Streamer(R__b);
   } else {
      R__b.WriteVersion(TObjString::IsA());
      TObject::Streamer(R__b);
      fString.Streamer(R__b);
   }
}

//______________________________________________________________________________
void TObjString::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TObjString.

   TClass *R__cl  = TObjString::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fString.ShowMembers(R__insp, strcat(R__parent,"fString.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TObjString::Class_Name()
{
   // Return the class name for TObjString.
   return "TObjString";
}

// Static variable to hold initialization object
static TObjString::R__Init __gR__InitTObjString;

//______________________________________________________________________________
void TObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class TObject.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fUniqueID;
      R__b >> fBits;
   } else {
      R__b.WriteVersion(TObject::IsA());
      R__b << fUniqueID;
      R__b << fBits;
   }
}

//______________________________________________________________________________
void TObject::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TObject.

   TClass *R__cl  = TObject::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fUniqueID", &fUniqueID);
   R__insp.Inspect(R__cl, R__parent, "fBits", &fBits);
}

//______________________________________________________________________________
const char *TObject::Class_Name()
{
   // Return the class name for TObject.
   return "TObject";
}

// Static variable to hold initialization object
static TObject::R__Init __gR__InitTObject;

//______________________________________________________________________________
void TProcessEventTimer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TProcessEventTimer.

   TTimer::Streamer(R__b);
}

//______________________________________________________________________________
void TProcessEventTimer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TProcessEventTimer.

   TClass *R__cl  = TProcessEventTimer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TTimer::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TProcessEventTimer::Class_Name()
{
   // Return the class name for TProcessEventTimer.
   return "TProcessEventTimer";
}

// Static variable to hold initialization object
static TProcessEventTimer::R__Init __gR__InitTProcessEventTimer;

//______________________________________________________________________________
void TRandom::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandom.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fSeed;
      R__b.CheckByteCount(R__s, R__c, TRandom::IsA());
   } else {
      R__c = R__b.WriteVersion(TRandom::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fSeed;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TRandom::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRandom.

   TClass *R__cl  = TRandom::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSeed", &fSeed);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TRandom::Class_Name()
{
   // Return the class name for TRandom.
   return "TRandom";
}

// Static variable to hold initialization object
static TRandom::R__Init __gR__InitTRandom;

//______________________________________________________________________________
void TRandom2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandom2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TRandom::Streamer(R__b);
      R__b >> fSeed1;
      R__b >> fSeed2;
      R__b.CheckByteCount(R__s, R__c, TRandom2::IsA());
   } else {
      R__c = R__b.WriteVersion(TRandom2::IsA(), kTRUE);
      TRandom::Streamer(R__b);
      R__b << fSeed1;
      R__b << fSeed2;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TRandom2::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRandom2.

   TClass *R__cl  = TRandom2::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSeed1", &fSeed1);
   R__insp.Inspect(R__cl, R__parent, "fSeed2", &fSeed2);
   TRandom::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TRandom2::Class_Name()
{
   // Return the class name for TRandom2.
   return "TRandom2";
}

// Static variable to hold initialization object
static TRandom2::R__Init __gR__InitTRandom2;

//______________________________________________________________________________
void TRandom3::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRandom3.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TRandom::Streamer(R__b);
      R__b.ReadStaticArray(fMt);
      R__b >> fCount624;
      R__b.CheckByteCount(R__s, R__c, TRandom3::IsA());
   } else {
      R__c = R__b.WriteVersion(TRandom3::IsA(), kTRUE);
      TRandom::Streamer(R__b);
      R__b.WriteArray(fMt, 624);
      R__b << fCount624;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TRandom3::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRandom3.

   TClass *R__cl  = TRandom3::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMt[624]", fMt);
   R__insp.Inspect(R__cl, R__parent, "fCount624", &fCount624);
   TRandom::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TRandom3::Class_Name()
{
   // Return the class name for TRandom3.
   return "TRandom3";
}

// Static variable to hold initialization object
static TRandom3::R__Init __gR__InitTRandom3;

//______________________________________________________________________________
void TROOT::Streamer(TBuffer &R__b)
{
   // Stream an object of class TROOT.

   TDirectory::Streamer(R__b);
}

//______________________________________________________________________________
void TROOT::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TROOT.

   TClass *R__cl  = TROOT::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fLineIsProcessing", &fLineIsProcessing);
   fVersion.ShowMembers(R__insp, strcat(R__parent,"fVersion.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fVersionInt", &fVersionInt);
   R__insp.Inspect(R__cl, R__parent, "fVersionDate", &fVersionDate);
   R__insp.Inspect(R__cl, R__parent, "fVersionTime", &fVersionTime);
   R__insp.Inspect(R__cl, R__parent, "fTimer", &fTimer);
   R__insp.Inspect(R__cl, R__parent, "*fApplication", &fApplication);
   R__insp.Inspect(R__cl, R__parent, "*fInterpreter", &fInterpreter);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentFile", &fCurrentFile);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentDirectory", &fCurrentDirectory);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentCanvas", &fCurrentCanvas);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentPad", &fCurrentPad);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentStyle", &fCurrentStyle);
   R__insp.Inspect(R__cl, R__parent, "*fCurrentFunction", &fCurrentFunction);
   R__insp.Inspect(R__cl, R__parent, "fBatch", &fBatch);
   R__insp.Inspect(R__cl, R__parent, "fEditHistograms", &fEditHistograms);
   R__insp.Inspect(R__cl, R__parent, "fFromPopUp", &fFromPopUp);
   R__insp.Inspect(R__cl, R__parent, "fMustClean", &fMustClean);
   R__insp.Inspect(R__cl, R__parent, "fReadingBasket", &fReadingBasket);
   R__insp.Inspect(R__cl, R__parent, "fForceStyle", &fForceStyle);
   R__insp.Inspect(R__cl, R__parent, "fInterrupt", &fInterrupt);
   R__insp.Inspect(R__cl, R__parent, "fEditorMode", &fEditorMode);
   R__insp.Inspect(R__cl, R__parent, "*fPrimitive", &fPrimitive);
   R__insp.Inspect(R__cl, R__parent, "*fSelectPad", &fSelectPad);
   R__insp.Inspect(R__cl, R__parent, "*fClasses", &fClasses);
   R__insp.Inspect(R__cl, R__parent, "*fTypes", &fTypes);
   R__insp.Inspect(R__cl, R__parent, "*fGlobals", &fGlobals);
   R__insp.Inspect(R__cl, R__parent, "*fGlobalFunctions", &fGlobalFunctions);
   R__insp.Inspect(R__cl, R__parent, "*fFiles", &fFiles);
   R__insp.Inspect(R__cl, R__parent, "*fMappedFiles", &fMappedFiles);
   R__insp.Inspect(R__cl, R__parent, "*fSockets", &fSockets);
   R__insp.Inspect(R__cl, R__parent, "*fCanvases", &fCanvases);
   R__insp.Inspect(R__cl, R__parent, "*fStyles", &fStyles);
   R__insp.Inspect(R__cl, R__parent, "*fFunctions", &fFunctions);
   R__insp.Inspect(R__cl, R__parent, "*fProcesses", &fProcesses);
   R__insp.Inspect(R__cl, R__parent, "*fColors", &fColors);
   R__insp.Inspect(R__cl, R__parent, "*fGeometries", &fGeometries);
   R__insp.Inspect(R__cl, R__parent, "*fBrowsers", &fBrowsers);
   R__insp.Inspect(R__cl, R__parent, "*fSpecials", &fSpecials);
   R__insp.Inspect(R__cl, R__parent, "*fMessageHandlers", &fMessageHandlers);
   R__insp.Inspect(R__cl, R__parent, "*fBrowsables", &fBrowsables);
   fDefCanvasName.ShowMembers(R__insp, strcat(R__parent,"fDefCanvasName.")); R__parent[R__ncp] = 0;
   TDirectory::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TROOT::Class_Name()
{
   // Return the class name for TROOT.
   return "TROOT";
}

// Static variable to hold initialization object
static TROOT::R__Init __gR__InitTROOT;

//______________________________________________________________________________
void TRealData::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRealData.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TRealData::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRealData.

   TClass *R__cl  = TRealData::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fDataMember", &fDataMember);
   R__insp.Inspect(R__cl, R__parent, "fThisOffset", &fThisOffset);
   fName.ShowMembers(R__insp, strcat(R__parent,"fName.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TRealData::Class_Name()
{
   // Return the class name for TRealData.
   return "TRealData";
}

// Static variable to hold initialization object
static TRealData::R__Init __gR__InitTRealData;

//______________________________________________________________________________
void TRegexp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRegexp.

   ::Error("TRegexp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TRegexp::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TRegexp.

   TClass *R__cl  = TRegexp::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fPattern", &fPattern);
   R__insp.Inspect(R__cl, R__parent, "fStat", &fStat);
}

//______________________________________________________________________________
const char *TRegexp::Class_Name()
{
   // Return the class name for TRegexp.
   return "TRegexp";
}

// Static variable to hold initialization object
static TRegexp::R__Init __gR__InitTRegexp;

//______________________________________________________________________________
void TSignalHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSignalHandler.

   TSysEvtHandler::Streamer(R__b);
}

//______________________________________________________________________________
void TSignalHandler::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSignalHandler.

   TClass *R__cl  = TSignalHandler::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSignal", &fSignal);
   R__insp.Inspect(R__cl, R__parent, "fSync", &fSync);
   R__insp.Inspect(R__cl, R__parent, "fDelay", &fDelay);
   TSysEvtHandler::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TSignalHandler::Class_Name()
{
   // Return the class name for TSignalHandler.
   return "TSignalHandler";
}

// Static variable to hold initialization object
static TSignalHandler::R__Init __gR__InitTSignalHandler;

//______________________________________________________________________________
void TStopwatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStopwatch.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TStopwatch::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TStopwatch.

   TClass *R__cl  = TStopwatch::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fStartRealTime", &fStartRealTime);
   R__insp.Inspect(R__cl, R__parent, "fStopRealTime", &fStopRealTime);
   R__insp.Inspect(R__cl, R__parent, "fStartCpuTime", &fStartCpuTime);
   R__insp.Inspect(R__cl, R__parent, "fStopCpuTime", &fStopCpuTime);
   R__insp.Inspect(R__cl, R__parent, "fTotalCpuTime", &fTotalCpuTime);
   R__insp.Inspect(R__cl, R__parent, "fTotalRealTime", &fTotalRealTime);
   R__insp.Inspect(R__cl, R__parent, "fState", &fState);
   R__insp.Inspect(R__cl, R__parent, "fCounter", &fCounter);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TStopwatch::Class_Name()
{
   // Return the class name for TStopwatch.
   return "TStopwatch";
}

// Static variable to hold initialization object
static TStopwatch::R__Init __gR__InitTStopwatch;

//______________________________________________________________________________
void TStorage::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStorage.

   ::Error("TStorage::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TStorage::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TStorage.

   TClass *R__cl  = TStorage::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
}

//______________________________________________________________________________
const char *TStorage::Class_Name()
{
   // Return the class name for TStorage.
   return "TStorage";
}

// Static variable to hold initialization object
static TStorage::R__Init __gR__InitTStorage;

//______________________________________________________________________________
void TString::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TString.

   TClass *R__cl  = TString::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fData", &fData);
}

//______________________________________________________________________________
const char *TString::Class_Name()
{
   // Return the class name for TString.
   return "TString";
}

// Static variable to hold initialization object
static TString::R__Init __gR__InitTString;

//______________________________________________________________________________
void TStringLong::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TStringLong.

   TClass *R__cl  = TStringLong::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TString::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TStringLong::Class_Name()
{
   // Return the class name for TStringLong.
   return "TStringLong";
}

// Static variable to hold initialization object
static TStringLong::R__Init __gR__InitTStringLong;

//______________________________________________________________________________
void TSysEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSysEvtHandler.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TSysEvtHandler::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSysEvtHandler.

   TClass *R__cl  = TSysEvtHandler::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TSysEvtHandler::Class_Name()
{
   // Return the class name for TSysEvtHandler.
   return "TSysEvtHandler";
}

// Static variable to hold initialization object
static TSysEvtHandler::R__Init __gR__InitTSysEvtHandler;

//______________________________________________________________________________
void TSystem::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSystem.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TSystem::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSystem.

   TClass *R__cl  = TSystem::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNfd", &fNfd);
   R__insp.Inspect(R__cl, R__parent, "fMaxrfd", &fMaxrfd);
   R__insp.Inspect(R__cl, R__parent, "fMaxwfd", &fMaxwfd);
   R__insp.Inspect(R__cl, R__parent, "fSigcnt", &fSigcnt);
   fWdpath.ShowMembers(R__insp, strcat(R__parent,"fWdpath.")); R__parent[R__ncp] = 0;
   fHostname.ShowMembers(R__insp, strcat(R__parent,"fHostname.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fInsideNotify", &fInsideNotify);
   R__insp.Inspect(R__cl, R__parent, "fInControl", &fInControl);
   R__insp.Inspect(R__cl, R__parent, "fDone", &fDone);
   R__insp.Inspect(R__cl, R__parent, "fLevel", &fLevel);
   fLastErrorString.ShowMembers(R__insp, strcat(R__parent,"fLastErrorString.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fTimers", &fTimers);
   R__insp.Inspect(R__cl, R__parent, "*fSignalHandler", &fSignalHandler);
   R__insp.Inspect(R__cl, R__parent, "*fFileHandler", &fFileHandler);
   R__insp.Inspect(R__cl, R__parent, "*fOnExitList", &fOnExitList);
   fListLibs.ShowMembers(R__insp, strcat(R__parent,"fListLibs.")); R__parent[R__ncp] = 0;
   fListPaths.ShowMembers(R__insp, strcat(R__parent,"fListPaths.")); R__parent[R__ncp] = 0;
   fIncludePath.ShowMembers(R__insp, strcat(R__parent,"fIncludePath.")); R__parent[R__ncp] = 0;
   fLinkedLibs.ShowMembers(R__insp, strcat(R__parent,"fLinkedLibs.")); R__parent[R__ncp] = 0;
   fSoExt.ShowMembers(R__insp, strcat(R__parent,"fSoExt.")); R__parent[R__ncp] = 0;
   fObjExt.ShowMembers(R__insp, strcat(R__parent,"fObjExt.")); R__parent[R__ncp] = 0;
   fMakeSharedLib.ShowMembers(R__insp, strcat(R__parent,"fMakeSharedLib.")); R__parent[R__ncp] = 0;
   fMakeExe.ShowMembers(R__insp, strcat(R__parent,"fMakeExe.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fCompiled", &fCompiled);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TSystem::Class_Name()
{
   // Return the class name for TSystem.
   return "TSystem";
}

// Static variable to hold initialization object
static TSystem::R__Init __gR__InitTSystem;

//______________________________________________________________________________
void TSystemFile::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSystemFile.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TSystemFile::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSystemFile.

   TClass *R__cl  = TSystemFile::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TSystemFile::Class_Name()
{
   // Return the class name for TSystemFile.
   return "TSystemFile";
}

// Static variable to hold initialization object
static TSystemFile::R__Init __gR__InitTSystemFile;

//______________________________________________________________________________
void TSystemDirectory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TSystemDirectory.

   TSystemFile::Streamer(R__b);
}

//______________________________________________________________________________
void TSystemDirectory::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TSystemDirectory.

   TClass *R__cl  = TSystemDirectory::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fDirsInBrowser", &fDirsInBrowser);
   R__insp.Inspect(R__cl, R__parent, "*fFilesInBrowser", &fFilesInBrowser);
   TSystemFile::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TSystemDirectory::Class_Name()
{
   // Return the class name for TSystemDirectory.
   return "TSystemDirectory";
}

// Static variable to hold initialization object
static TSystemDirectory::R__Init __gR__InitTSystemDirectory;

//______________________________________________________________________________
void TTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTime.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fMilliSec;
   } else {
      R__b.WriteVersion(TTime::IsA());
      R__b << fMilliSec;
   }
}

//______________________________________________________________________________
void TTime::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTime.

   TClass *R__cl  = TTime::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMilliSec", &fMilliSec);
}

//______________________________________________________________________________
const char *TTime::Class_Name()
{
   // Return the class name for TTime.
   return "TTime";
}

// Static variable to hold initialization object
static TTime::R__Init __gR__InitTTime;

//______________________________________________________________________________
void TTimer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TTimer.

   TSysEvtHandler::Streamer(R__b);
}

//______________________________________________________________________________
void TTimer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TTimer.

   TClass *R__cl  = TTimer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fTime.ShowMembers(R__insp, strcat(R__parent,"fTime.")); R__parent[R__ncp] = 0;
   fAbsTime.ShowMembers(R__insp, strcat(R__parent,"fAbsTime.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fTimeout", &fTimeout);
   R__insp.Inspect(R__cl, R__parent, "fSync", &fSync);
   R__insp.Inspect(R__cl, R__parent, "fTimeID", &fTimeID);
   R__insp.Inspect(R__cl, R__parent, "*fObject", &fObject);
   fCommand.ShowMembers(R__insp, strcat(R__parent,"fCommand.")); R__parent[R__ncp] = 0;
   TSysEvtHandler::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
const char *TTimer::Class_Name()
{
   // Return the class name for TTimer.
   return "TTimer";
}

// Static variable to hold initialization object
static TTimer::R__Init __gR__InitTTimer;

/********************************************************
* G__Base2.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__Base2();

extern "C" void G__set_cpp_environmentG__Base2() {
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TArrayC.h");
  G__add_compiledheader("TArrayD.h");
  G__add_compiledheader("TArrayF.h");
  G__add_compiledheader("TArrayI.h");
  G__add_compiledheader("TArrayL.h");
  G__add_compiledheader("TArrayS.h");
  G__add_compiledheader("TAttFill.h");
  G__add_compiledheader("TAttLine.h");
  G__add_compiledheader("TAttMarker.h");
  G__add_compiledheader("TAtt3D.h");
  G__add_compiledheader("TAttText.h");
  G__add_compiledheader("TBaseClass.h");
  G__add_compiledheader("TBuffer.h");
  G__add_compiledheader("TClass.h");
  G__add_compiledheader("TExec.h");
  G__add_compiledheader("TDataMember.h");
  G__add_compiledheader("TDataType.h");
  G__add_compiledheader("TDatime.h");
  G__add_compiledheader("TDirectory.h");
  G__add_compiledheader("TEnv.h");
  G__add_compiledheader("TFile.h");
  G__add_compiledheader("TFree.h");
  G__add_compiledheader("TFunction.h");
  G__add_compiledheader("TGlobal.h");
  G__add_compiledheader("TKey.h");
  G__add_compiledheader("TObject.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TMethod.h");
  G__add_compiledheader("TMethodArg.h");
  G__add_compiledheader("TMethodCall.h");
  G__add_compiledheader("TNamed.h");
  G__add_compiledheader("TRealData.h");
  G__add_compiledheader("TMapFile.h");
  G__add_compiledheader("TMath.h");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TKeyMapFile.h");
  G__add_compiledheader("TApplication.h");
  G__add_compiledheader("TApplicationImp.h");
  G__add_compiledheader("TBrowserImp.h");
  G__add_compiledheader("TCanvasImp.h");
  G__add_compiledheader("TContextMenuImp.h");
  G__add_compiledheader("TControlBarImp.h");
  G__add_compiledheader("TRegexp.h");
  G__add_compiledheader("TString.h");
  G__add_compiledheader("TStringLong.h");
  G__add_compiledheader("TObjString.h");
  G__add_compiledheader("TSystem.h");
  G__add_compiledheader("TSysEvtHandler.h");
  G__add_compiledheader("TSystemFile.h");
  G__add_compiledheader("TSystemDirectory.h");
  G__add_compiledheader("TStopwatch.h");
  G__add_compiledheader("TStorage.h");
  G__add_compiledheader("TRandom.h");
  G__add_compiledheader("TRandom2.h");
  G__add_compiledheader("TRandom3.h");
  G__add_compiledheader("TBenchmark.h");
  G__add_compiledheader("TTime.h");
  G__add_compiledheader("TTimer.h");
  G__add_compiledheader("TMessageHandler.h");
  G__cpp_reset_tagtableG__Base2();
}
extern "C" int G__cpp_dllrevG__Base2() { return(51428); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TMemberInspector */
static int G__TMemberInspector_Inspect_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMemberInspector*)(G__getstructoffset()))->Inspect((TClass*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(void*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_Class_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMemberInspector*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_Class_Name_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMemberInspector*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_Class_Version_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMemberInspector*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_Dictionary_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMemberInspector*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_IsA_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMemberInspector*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_ShowMembers_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMemberInspector*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_Streamer_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMemberInspector*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_DeclFileName_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMemberInspector*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_DeclFileLine_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMemberInspector*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_ImplFileName_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMemberInspector*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMemberInspector_ImplFileLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMemberInspector*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMemberInspector_wATMemberInspector_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMemberInspector *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMemberInspector *)((G__getstructoffset())+sizeof(TMemberInspector)*i);
   else  delete (TMemberInspector *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TStorage */
static int G__TStorage_GetHeapBegin_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TStorage*)(G__getstructoffset()))->GetHeapBegin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_GetHeapEnd_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TStorage*)(G__getstructoffset()))->GetHeapEnd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_GetFreeHook_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TStorage*)(G__getstructoffset()))->GetFreeHook());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_GetFreeHookData_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TStorage*)(G__getstructoffset()))->GetFreeHookData());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_GetMaxBlockSize_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TStorage*)(G__getstructoffset()))->GetMaxBlockSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ReAlloc_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TStorage*)(G__getstructoffset()))->ReAlloc((void*)G__int(libp->para[0]),(size_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ReAlloc_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TStorage*)(G__getstructoffset()))->ReAlloc((void*)G__int(libp->para[0]),(size_t)G__int(libp->para[1])
,(size_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ObjectAlloc_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TStorage*)(G__getstructoffset()))->ObjectAlloc((size_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ObjectAlloc_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TStorage*)(G__getstructoffset()))->ObjectAlloc((size_t)G__int(libp->para[0]),(void*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_EnterStat_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->EnterStat((size_t)G__int(libp->para[0]),(void*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_RemoveStat_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->RemoveStat((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_PrintStatistics_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->PrintStatistics();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_SetMaxBlockSize_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->SetMaxBlockSize((size_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_SetFreeHook_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->SetFreeHook((FreeHookFun_t)G__int(libp->para[0]),(void*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_SetReAllocHooks_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->SetReAllocHooks((ReAllocFun_t)G__int(libp->para[0]),(ReAllocCFun_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_SetCustomNewDelete_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->SetCustomNewDelete();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_EnableStatistics_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->EnableStatistics((int)G__int(libp->para[0]),(int)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->EnableStatistics((int)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->EnableStatistics();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_HasCustomNewDelete_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TStorage*)(G__getstructoffset()))->HasCustomNewDelete());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_AddToHeap_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->AddToHeap((ULong_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_IsOnHeap_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TStorage*)(G__getstructoffset()))->IsOnHeap((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_Class_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TStorage*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_Class_Name_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStorage*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_Class_Version_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStorage*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_Dictionary_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_IsA_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TStorage*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ShowMembers_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_Streamer_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStorage*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_DeclFileName_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStorage*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_DeclFileLine_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStorage*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ImplFileName_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStorage*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStorage_ImplFileLine_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStorage*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic default constructor
static int G__TStorage_TStorage_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStorage *p;
   if(0!=libp->paran) ;
   if(G__getaryconstruct()) p=new TStorage[G__getaryconstruct()];
   else                    p=new TStorage;
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStorage);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TStorage_TStorage_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TStorage *p;
   p=new TStorage(*(TStorage*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStorage);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TStorage_wATStorage_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TStorage *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TStorage *)((G__getstructoffset())+sizeof(TStorage)*i);
   else  delete (TStorage *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTimer */
static int G__TTimer_TTimer_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TTimer *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TTimer((Long_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TTimer((Long_t)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTimer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_TTimer_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TTimer *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TTimer(
(TObject*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TTimer((TObject*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTimer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_TTimer_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TTimer *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TTimer(
(const char*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TTimer((const char*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTimer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_CheckTimer_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TTimer*)(G__getstructoffset()))->CheckTimer(*(TTime*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_GetCommand_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TTimer*)(G__getstructoffset()))->GetCommand());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_GetObject_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTimer*)(G__getstructoffset()))->GetObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_GetTime_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TTime *pobj,xobj=((const TTimer*)(G__getstructoffset()))->GetTime();
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_GetTimerID_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TTimer*)(G__getstructoffset()))->GetTimerID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_GetAbsTime_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TTime *pobj,xobj=((const TTimer*)(G__getstructoffset()))->GetAbsTime();
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_HasTimedOut_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TTimer*)(G__getstructoffset()))->HasTimedOut());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_IsSync_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TTimer*)(G__getstructoffset()))->IsSync());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_IsAsync_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TTimer*)(G__getstructoffset()))->IsAsync());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Notify_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TTimer*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Remove_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->Remove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Reset_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_SetCommand_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->SetCommand((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_SetObject_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->SetObject((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_SetTime_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->SetTime((Long_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_SetTimerID_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->SetTimerID((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->SetTimerID();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_TurnOn_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->TurnOn();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_TurnOff_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->TurnOff();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Class_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTimer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Class_Name_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTimer*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Class_Version_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTimer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Dictionary_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_IsA_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TTimer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_ShowMembers_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_Streamer_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTimer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_DeclFileName_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTimer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_DeclFileLine_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTimer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_ImplFileName_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTimer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTimer_ImplFileLine_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTimer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TTimer_TTimer_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TTimer *p;
   p=new TTimer(*(TTimer*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTimer);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTimer_wATTimer_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTimer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTimer *)((G__getstructoffset())+sizeof(TTimer)*i);
   else  delete (TTimer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TObject */
static int G__TObject_TObject_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TObject *p=NULL;
   if(G__getaryconstruct()) p=new TObject[G__getaryconstruct()];
   else                    p=new TObject;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TObject);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_TObject_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TObject *p=NULL;
      p = new TObject(*(TObject*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TObject);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_operatoreQ_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TObject& obj=((TObject*)(G__getstructoffset()))->operator=(*(TObject*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_AppendPad_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->AppendPad((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->AppendPad();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Browse_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ClassName_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->ClassName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Clear_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Clone_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TObject*)(G__getstructoffset()))->Clone());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Close_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Compare_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Copy_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Delete_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Delete((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Delete();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_DistancetoPrimitive_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Draw_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_DrawClass_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->DrawClass();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_DrawClone_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->DrawClone((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->DrawClone();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Dump_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Dump();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Execute_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Execute((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Execute_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Execute((TMethod*)G__int(libp->para[0]),(TObjArray*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ExecuteEvent_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetDrawOption_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->GetDrawOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetUniqueID_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((const TObject*)(G__getstructoffset()))->GetUniqueID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetName_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetIconName_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->GetIconName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetOption_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetObjectInfo_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObject*)(G__getstructoffset()))->GetObjectInfo((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetTitle_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_HandleTimer_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->HandleTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Hash_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TObject*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_InheritsFrom_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->InheritsFrom((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_InheritsFrom_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->InheritsFrom((const TClass*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Inspect_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Inspect();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsFolder_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsEqual_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->IsEqual((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsSortable_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TObject*)(G__getstructoffset()))->IsSortable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsModified_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->IsModified());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsOnHeap_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TObject*)(G__getstructoffset()))->IsOnHeap());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsZombie_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TObject*)(G__getstructoffset()))->IsZombie());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Notify_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ls_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Modified_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Modified((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Modified();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Paint_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Pop_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Pop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Print_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Read_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Read((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_RecursiveRemove_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SavePrimitive_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetDrawOption_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetDrawOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetDrawOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetUniqueID_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetUniqueID((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_StreamerInfo_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObject*)(G__getstructoffset()))->StreamerInfo());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_UseCurrentStyle_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->UseCurrentStyle();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Write_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Write();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_operatorsPnew_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TObject*)(G__getstructoffset()))->operator new((size_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_operatorsPnew_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TObject*)(G__getstructoffset()))->operator new((size_t)G__int(libp->para[0]),(void*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_operatorsPdelete_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->operator delete((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetBit_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetBit((UInt_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetBit_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetBit((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ResetBit_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->ResetBit((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_TestBit_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TObject*)(G__getstructoffset()))->TestBit((UInt_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_InvertBit_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->InvertBit((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Warning_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TObject*)(G__getstructoffset()))->Warning((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(int)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Error_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TObject*)(G__getstructoffset()))->Error((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(int)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SysError_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TObject*)(G__getstructoffset()))->SysError((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(int)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Fatal_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TObject*)(G__getstructoffset()))->Fatal((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(int)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_AbstractMethod_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TObject*)(G__getstructoffset()))->AbstractMethod((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_MayNotUse_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TObject*)(G__getstructoffset()))->MayNotUse((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_DecreaseDirLevel_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->DecreaseDirLevel());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetDtorOnly_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TObject*)(G__getstructoffset()))->GetDtorOnly());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetDtorOnly_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetDtorOnly((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetDirLevel_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->GetDirLevel());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetDirLevel_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetDirLevel((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetDirLevel();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_GetObjectStat_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObject*)(G__getstructoffset()))->GetObjectStat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_SetObjectStat_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->SetObjectStat((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IncreaseDirLevel_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->IncreaseDirLevel());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IndentLevel_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->IndentLevel();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Class_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TObject*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Class_Name_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObject*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Class_Version_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TObject*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Dictionary_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_IsA_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TObject*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ShowMembers_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_Streamer_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObject*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_DeclFileName_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObject*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_DeclFileLine_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ImplFileName_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObject*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObject_ImplFileLine_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObject*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TObject_wATObject_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TObject *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TObject *)((G__getstructoffset())+sizeof(TObject)*i);
   else  delete (TObject *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMath */
static int G__TMath_Pi_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Pi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_E_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->E());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sin_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Sin((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Cos_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Cos((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Tan_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Tan((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_SinH_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->SinH((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_CosH_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->CosH((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_TanH_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->TanH((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ASin_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ASin((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ACos_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ACos((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ATan_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ATan((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ATan2_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ATan2((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ASinH_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ASinH((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ACosH_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ACosH((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ATanH_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->ATanH((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Hypot_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Hypot((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sqrt_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Sqrt((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Ceil_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Ceil((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Floor_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Floor((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Exp_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Exp((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Power_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Power((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Log_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Log((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Log2_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Log2((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Log10_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Log10((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Nint_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Nint((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Nint_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Nint((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_NextPrime_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->NextPrime((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sqrt_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Sqrt((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Hypot_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Hypot((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Abs_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMath*)(G__getstructoffset()))->Abs((Short_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Abs_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Abs((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Abs_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Abs((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Abs_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMath*)(G__getstructoffset()))->Abs((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Abs_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Abs((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Even_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMath*)(G__getstructoffset()))->Even((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Odd_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMath*)(G__getstructoffset()))->Odd((Long_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sign_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMath*)(G__getstructoffset()))->Sign((Short_t)G__int(libp->para[0]),(Short_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sign_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Sign((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sign_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Sign((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sign_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMath*)(G__getstructoffset()))->Sign((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sign_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Sign((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMath*)(G__getstructoffset()))->Min((Short_t)G__int(libp->para[0]),(Short_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,114,(long)((TMath*)(G__getstructoffset()))->Min((UShort_t)G__int(libp->para[0]),(UShort_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Min((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TMath*)(G__getstructoffset()))->Min((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Min((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TMath*)(G__getstructoffset()))->Min((ULong_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMath*)(G__getstructoffset()))->Min((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Min_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Min((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMath*)(G__getstructoffset()))->Max((Short_t)G__int(libp->para[0]),(Short_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,114,(long)((TMath*)(G__getstructoffset()))->Max((UShort_t)G__int(libp->para[0]),(UShort_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Max((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TMath*)(G__getstructoffset()))->Max((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Max((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TMath*)(G__getstructoffset()))->Max((ULong_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMath*)(G__getstructoffset()))->Max((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Max_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Max((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMin_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMin((Int_t)G__int(libp->para[0]),(Short_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMin_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMin((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMin_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMin((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMin_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMin((Int_t)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMax_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMax((Int_t)G__int(libp->para[0]),(Short_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMax_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMax((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMax_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMax((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LocMax_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->LocMax((Int_t)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Range_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMath*)(G__getstructoffset()))->Range((Short_t)G__int(libp->para[0]),(Short_t)G__int(libp->para[1])
,(Short_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Range_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->Range((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Range_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TMath*)(G__getstructoffset()))->Range((Long_t)G__int(libp->para[0]),(Long_t)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Range_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TMath*)(G__getstructoffset()))->Range((ULong_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1])
,(ULong_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Range_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Range((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Short_t*)G__int(libp->para[1])
,(Short_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Short_t**)G__int(libp->para[1])
,(Short_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Int_t**)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Float_t**)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BinarySearch_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->BinarySearch((Int_t)G__int(libp->para[0]),(Double_t**)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Hash_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TMath*)(G__getstructoffset()))->Hash((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Hash_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TMath*)(G__getstructoffset()))->Hash((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sort_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Short_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Short_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sort_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sort_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Sort_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Sort((Int_t)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Int_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Cross_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TMath*)(G__getstructoffset()))->Cross((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Normalize_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMath*)(G__getstructoffset()))->Normalize((Float_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_NormCross_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TMath*)(G__getstructoffset()))->NormCross((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Normal2Plane_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TMath*)(G__getstructoffset()))->Normal2Plane((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Cross_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,68,(long)((TMath*)(G__getstructoffset()))->Cross((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Erf_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Erf((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Erfc_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Erfc((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Gamma_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Gamma((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Gamma_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Gamma((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Gaus_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Gaus((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Gaus((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Gaus((Double_t)G__double(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Landau_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Landau((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Landau((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Landau((Double_t)G__double(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_LnGamma_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->LnGamma((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Normalize_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Normalize((Double_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_NormCross_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->NormCross((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Normal2Plane_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,68,(long)((TMath*)(G__getstructoffset()))->Normal2Plane((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Double_t*)G__int(libp->para[2]),(Double_t*)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Prob_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->Prob((Double_t)G__double(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BesselI_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->BesselI((Int_t)G__int(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BesselK_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->BesselK((Int_t)G__int(libp->para[0]),(Double_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BesselI0_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->BesselI0((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BesselK0_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->BesselK0((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BesselI1_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->BesselI1((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_BesselK1_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TMath*)(G__getstructoffset()))->BesselK1((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Class_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMath*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Class_Name_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMath*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Class_Version_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMath*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Dictionary_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_IsA_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMath*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ShowMembers_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_Streamer_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMath*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_DeclFileName_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMath*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_DeclFileLine_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ImplFileName_7_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMath*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMath_ImplFileLine_8_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMath*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic default constructor
static int G__TMath_TMath_9_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TMath *p;
   if(0!=libp->paran) ;
   if(G__getaryconstruct()) p=new TMath[G__getaryconstruct()];
   else                    p=new TMath;
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMath);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMath_TMath_0_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TMath *p;
   p=new TMath(*(TMath*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMath);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMath_wATMath_1_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMath *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMath *)((G__getstructoffset())+sizeof(TMath)*i);
   else  delete (TMath *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TRegexp */
static int G__TRegexp_TRegexp_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRegexp *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TRegexp((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TRegexp((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRegexp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_TRegexp_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRegexp *p=NULL;
      p = new TRegexp(*(TString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRegexp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_TRegexp_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRegexp *p=NULL;
      p = new TRegexp(*(TRegexp*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRegexp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_operatoreQ_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TRegexp& obj=((TRegexp*)(G__getstructoffset()))->operator=(*(TRegexp*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_operatoreQ_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TRegexp& obj=((TRegexp*)(G__getstructoffset()))->operator=(*(TString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_operatoreQ_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TRegexp& obj=((TRegexp*)(G__getstructoffset()))->operator=((const char*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Index_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((const TRegexp*)(G__getstructoffset()))->Index(*(TString*)libp->para[0].ref,(Ssiz_t*)G__int(libp->para[1])
,(Ssiz_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((const TRegexp*)(G__getstructoffset()))->Index(*(TString*)libp->para[0].ref,(Ssiz_t*)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Status_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRegexp*)(G__getstructoffset()))->Status());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Class_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRegexp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Class_Name_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRegexp*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Class_Version_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRegexp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Dictionary_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRegexp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_IsA_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TRegexp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_ShowMembers_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRegexp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_Streamer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRegexp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_DeclFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRegexp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_DeclFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRegexp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_ImplFileName_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRegexp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRegexp_ImplFileLine_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRegexp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRegexp_wATRegexp_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRegexp *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRegexp *)((G__getstructoffset())+sizeof(TRegexp)*i);
   else  delete (TRegexp *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TString */
static int G__TString_TString_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
   if(G__getaryconstruct()) p=new TString[G__getaryconstruct()];
   else                    p=new TString;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString((Ssiz_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString(*(TString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString((char)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString((char)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_TString_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TString *p=NULL;
      p = new TString(*(TSubString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_FillBuffer_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReadBuffer_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->ReadBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Sizeof_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatorsPconstsPcharmU_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TString*)(G__getstructoffset()))->operator const char*());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoreQ_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->operator=((char)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoreQ_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->operator=((const char*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoreQ_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->operator=(*(TString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoreQ_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->operator=(*(TSubString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatorpLeQ_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->operator+=((const char*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatorpLeQ_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->operator+=(*(TString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroBcB_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        char& obj=((TString*)(G__getstructoffset()))->operator[]((Ssiz_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        char& obj=((TString*)(G__getstructoffset()))->operator()((Ssiz_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->operator()((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->operator()(*(TRegexp*)libp->para[0].ref);
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->operator()(*(TRegexp*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_SubString_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->SubString((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(TString::ECaseCompare)G__int(libp->para[2]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 2:
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->SubString((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 1:
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->SubString((const char*)G__int(libp->para[0]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroBcB_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,99,(long)((const TString*)(G__getstructoffset()))->operator[]((Ssiz_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,99,(long)((const TString*)(G__getstructoffset()))->operator()((Ssiz_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->operator()((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->operator()(*(TRegexp*)libp->para[0].ref);
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_operatoroPcP_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->operator()(*(TRegexp*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_SubString_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->SubString((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(TString::ECaseCompare)G__int(libp->para[2]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 2:
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->SubString((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 1:
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->SubString((const char*)G__int(libp->para[0]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Strip_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->Strip((TString::EStripType)G__int(libp->para[0]),(char)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 1:
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->Strip((TString::EStripType)G__int(libp->para[0]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 0:
      {
const         TSubString *pobj,xobj=((const TString*)(G__getstructoffset()))->Strip();
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Append_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Append((const char*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Append_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Append((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Append_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Append(*(TString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Append_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Append(*(TString*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Append_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      {
        TString& obj=((TString*)(G__getstructoffset()))->Append((char)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   case 1:
      {
        TString& obj=((TString*)(G__getstructoffset()))->Append((char)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_BeginsWith_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->BeginsWith((const char*)G__int(libp->para[0]),(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->BeginsWith((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_BeginsWith_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->BeginsWith(*(TString*)libp->para[0].ref,(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->BeginsWith(*(TString*)libp->para[0].ref));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Capacity_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Capacity());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Capacity_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->Capacity((Ssiz_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Chop_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Chop();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_CompareTo_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->CompareTo((const char*)G__int(libp->para[0]),(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->CompareTo((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_CompareTo_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->CompareTo(*(TString*)libp->para[0].ref,(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->CompareTo(*(TString*)libp->para[0].ref));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Contains_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->Contains((const char*)G__int(libp->para[0]),(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->Contains((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Contains_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->Contains(*(TString*)libp->para[0].ref,(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->Contains(*(TString*)libp->para[0].ref));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Copy_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TString *pobj,xobj=((const TString*)(G__getstructoffset()))->Copy();
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Data_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TString*)(G__getstructoffset()))->Data());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_EndsWith_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->EndsWith((const char*)G__int(libp->para[0]),(TString::ECaseCompare)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->EndsWith((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_First_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->First((char)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_First_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->First((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Hash_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,104,(long)((const TString*)(G__getstructoffset()))->Hash((TString::ECaseCompare)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,104,(long)((const TString*)(G__getstructoffset()))->Hash());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Index_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(TString::ECaseCompare)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Index_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TString*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1])
,(TString::ECaseCompare)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TString*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TString*)libp->para[0].ref));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Index_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(Ssiz_t)G__int(libp->para[2]),(TString::ECaseCompare)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Index_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TString*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1])
,(Ssiz_t)G__int(libp->para[2]),(TString::ECaseCompare)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Index_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TRegexp*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TRegexp*)libp->para[0].ref));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Index_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TRegexp*)libp->para[0].ref,(Ssiz_t*)G__int(libp->para[1])
,(Ssiz_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Index(*(TRegexp*)libp->para[0].ref,(Ssiz_t*)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Insert_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Insert((Ssiz_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Insert_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Insert((Ssiz_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Ssiz_t)G__int(libp->para[2]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Insert_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Insert((Ssiz_t)G__int(libp->para[0]),*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Insert_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Insert((Ssiz_t)G__int(libp->para[0]),*(TString*)libp->para[1].ref
,(Ssiz_t)G__int(libp->para[2]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_IsAscii_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->IsAscii());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_IsNull_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TString*)(G__getstructoffset()))->IsNull());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Last_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Last((char)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Length_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TString*)(G__getstructoffset()))->Length());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Prepend_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Prepend((const char*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Prepend_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Prepend((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Prepend_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Prepend(*(TString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Prepend_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Prepend(*(TString*)libp->para[0].ref,(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Prepend_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      {
        TString& obj=((TString*)(G__getstructoffset()))->Prepend((char)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   case 1:
      {
        TString& obj=((TString*)(G__getstructoffset()))->Prepend((char)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReadFile_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadFile(*(istream*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReadLine_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadLine(*(istream*)libp->para[0].ref,(Bool_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   case 1:
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadLine(*(istream*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReadString_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadString(*(istream*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReadToDelim_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadToDelim(*(istream*)libp->para[0].ref,(char)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   case 1:
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadToDelim(*(istream*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReadToken_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        istream& obj=((TString*)(G__getstructoffset()))->ReadToken(*(istream*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Remove_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Remove((Ssiz_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Remove_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Remove((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Replace_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Replace((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Replace_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Replace((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Ssiz_t)G__int(libp->para[3]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Replace_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Replace((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,*(TString*)libp->para[2].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Replace_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->Replace((Ssiz_t)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,*(TString*)libp->para[2].ref,(Ssiz_t)G__int(libp->para[3]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReplaceAll_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->ReplaceAll(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReplaceAll_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->ReplaceAll(*(TString*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReplaceAll_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->ReplaceAll((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReplaceAll_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->ReplaceAll((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ReplaceAll_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TString*)(G__getstructoffset()))->ReplaceAll((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Ssiz_t)G__int(libp->para[3]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Resize_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->Resize((Ssiz_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Strip_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->Strip((TString::EStripType)G__int(libp->para[0]),(char)G__int(libp->para[1]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 1:
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->Strip((TString::EStripType)G__int(libp->para[0]));
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   case 0:
      {
        TSubString *pobj,xobj=((TString*)(G__getstructoffset()))->Strip();
        pobj=new TSubString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ToLower_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->ToLower();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ToUpper_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->ToUpper();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_InitialCapacity_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->InitialCapacity((Ssiz_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->InitialCapacity());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_MaxWaste_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->MaxWaste((Ssiz_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->MaxWaste());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ResizeIncrement_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->ResizeIncrement((Ssiz_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->ResizeIncrement());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_GetInitialCapacity_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->GetInitialCapacity());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_GetResizeIncrement_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->GetResizeIncrement());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_GetMaxWaste_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->GetMaxWaste());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Class_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TString*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Class_Name_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TString*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Class_Version_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TString*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Dictionary_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_IsA_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TString*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ShowMembers_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_Streamer_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TString*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_DeclFileName_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TString*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_DeclFileLine_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ImplFileName_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TString*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TString_ImplFileLine_7_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TString*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TString_wATString_8_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TString *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TString *)((G__getstructoffset())+sizeof(TString)*i);
   else  delete (TString *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TStringLong */
static int G__TStringLong_TStringLong_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
   if(G__getaryconstruct()) p=new TStringLong[G__getaryconstruct()];
   else                    p=new TStringLong;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong((Ssiz_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong(*(TString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong((const char*)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong((const char*)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong((char)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong((char)G__int(libp->para[0]),(Ssiz_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_TStringLong_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStringLong *p=NULL;
      p = new TStringLong(*(TSubString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_FillBuffer_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStringLong*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_ReadBuffer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStringLong*)(G__getstructoffset()))->ReadBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_Sizeof_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TStringLong*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_Class_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TStringLong*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_Class_Name_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStringLong*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_Class_Version_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStringLong*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_Dictionary_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStringLong*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_IsA_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TStringLong*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_ShowMembers_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStringLong*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_Streamer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStringLong*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_DeclFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStringLong*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_DeclFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStringLong*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_ImplFileName_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStringLong*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStringLong_ImplFileLine_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStringLong*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TStringLong_TStringLong_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TStringLong *p;
   p=new TStringLong(*(TStringLong*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStringLong);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TStringLong_wATStringLong_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TStringLong *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TStringLong *)((G__getstructoffset())+sizeof(TStringLong)*i);
   else  delete (TStringLong *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSubString */
static int G__TSubString_TSubString_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSubString *p=NULL;
      p = new TSubString(*(TSubString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSubString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatoreQ_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TSubString& obj=((TSubString*)(G__getstructoffset()))->operator=((const char*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatoreQ_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TSubString& obj=((TSubString*)(G__getstructoffset()))->operator=(*(TString*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatoroPcP_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        char& obj=((TSubString*)(G__getstructoffset()))->operator()((Ssiz_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatoroBcB_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        char& obj=((TSubString*)(G__getstructoffset()))->operator[]((Ssiz_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatoroPcP_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,99,(long)((const TSubString*)(G__getstructoffset()))->operator()((Ssiz_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatoroBcB_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,99,(long)((const TSubString*)(G__getstructoffset()))->operator[]((Ssiz_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_Data_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TSubString*)(G__getstructoffset()))->Data());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_Length_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TSubString*)(G__getstructoffset()))->Length());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_Start_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TSubString*)(G__getstructoffset()))->Start());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_ToLower_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSubString*)(G__getstructoffset()))->ToLower();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_ToUpper_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSubString*)(G__getstructoffset()))->ToUpper();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_IsNull_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TSubString*)(G__getstructoffset()))->IsNull());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSubString_operatornO_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TSubString*)(G__getstructoffset()))->operator!());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSubString_wATSubString_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSubString *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSubString *)((G__getstructoffset())+sizeof(TSubString)*i);
   else  delete (TSubString *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TNamed */
static int G__TNamed_TNamed_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TNamed *p=NULL;
   if(G__getaryconstruct()) p=new TNamed[G__getaryconstruct()];
   else                    p=new TNamed;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TNamed);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_TNamed_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TNamed *p=NULL;
      p = new TNamed((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TNamed);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_TNamed_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TNamed *p=NULL;
      p = new TNamed(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TNamed);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_TNamed_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TNamed *p=NULL;
      p = new TNamed(*(TNamed*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TNamed);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_operatoreQ_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TNamed& obj=((TNamed*)(G__getstructoffset()))->operator=(*(TNamed*)libp->para[0].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Compare_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNamed*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Copy_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_FillBuffer_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_GetName_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TNamed*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_GetTitle_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TNamed*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Hash_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TNamed*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_IsSortable_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TNamed*)(G__getstructoffset()))->IsSortable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_SetName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->SetName((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_SetObject_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->SetObject((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_SetTitle_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->SetTitle((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->SetTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_ls_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Print_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Sizeof_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TNamed*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Class_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TNamed*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Class_Name_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNamed*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Class_Version_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TNamed*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Dictionary_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_IsA_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TNamed*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_ShowMembers_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_Streamer_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TNamed*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_DeclFileName_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNamed*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_DeclFileLine_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNamed*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_ImplFileName_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TNamed*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TNamed_ImplFileLine_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TNamed*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TNamed_wATNamed_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TNamed *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TNamed *)((G__getstructoffset())+sizeof(TNamed)*i);
   else  delete (TNamed *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TKey */
static int G__TKey_TKey_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKey *p=NULL;
   if(G__getaryconstruct()) p=new TKey[G__getaryconstruct()];
   else                    p=new TKey;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKey);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_TKey_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKey *p=NULL;
      p = new TKey(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(TClass*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKey);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_TKey_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKey *p=NULL;
      p = new TKey(
*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref
,(TClass*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKey);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_TKey_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKey *p=NULL;
      p = new TKey(
(TObject*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const Int_t)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKey);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_TKey_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKey *p=NULL;
      p = new TKey((Seek_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKey);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Browse_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Delete_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Delete((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Delete();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_DeleteBuffer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->DeleteBuffer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_FillBuffer_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetClassName_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TKey*)(G__getstructoffset()))->GetClassName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetBuffer_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKey*)(G__getstructoffset()))->GetBuffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetBufferRef_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TKey*)(G__getstructoffset()))->GetBufferRef());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetCycle_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TKey*)(G__getstructoffset()))->GetCycle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetKeep_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TKey*)(G__getstructoffset()))->GetKeep());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetKeylen_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->GetKeylen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetNbytes_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->GetNbytes());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetObjlen_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->GetObjlen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetVersion_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->GetVersion());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetSeekKey_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->GetSeekKey());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_GetSeekPdir_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->GetSeekPdir());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_IsFolder_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TKey*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Keep_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Keep();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ls_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Print_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Read_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Read((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ReadObj_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TKey*)(G__getstructoffset()))->ReadObj());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ReadBuffer_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->ReadBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ReadFile_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->ReadFile();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_SetBuffer_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->SetBuffer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Sizeof_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TKey*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_WriteFile_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->WriteFile((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->WriteFile();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Class_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TKey*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Class_Name_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKey*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Class_Version_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TKey*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Dictionary_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_IsA_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TKey*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ShowMembers_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_Streamer_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKey*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_DeclFileName_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKey*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_DeclFileLine_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ImplFileName_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKey*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKey_ImplFileLine_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKey*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TKey_TKey_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TKey *p;
   p=new TKey(*(TKey*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKey);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TKey_wATKey_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TKey *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TKey *)((G__getstructoffset())+sizeof(TKey)*i);
   else  delete (TKey *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TROOT */
static int G__TROOT_Browse_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ClassSaved_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->ClassSaved((TClass*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_FindObject_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->FindObject((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_FindObject_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->FindObject((const char*)G__int(libp->para[0]),libp->para[1].ref?*(void**)libp->para[1].ref:*(void**)(&G__Mlong(libp->para[1]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_FindObjectClassName_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TROOT*)(G__getstructoffset()))->FindObjectClassName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ForceStyle_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ForceStyle((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ForceStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_FromPopUp_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->FromPopUp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetApplication_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetApplication());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetClass_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetClass((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetClass((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetColor_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetColor((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetDefCanvasName_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TROOT*)(G__getstructoffset()))->GetDefCanvasName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetEditHistograms_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->GetEditHistograms());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetEditorMode_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->GetEditorMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetForceStyle_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->GetForceStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetMakeDefCanvas_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TROOT*)(G__getstructoffset()))->GetMakeDefCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetVersionDate_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->GetVersionDate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetVersionTime_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->GetVersionTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetVersionInt_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->GetVersionInt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetVersion_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TROOT*)(G__getstructoffset()))->GetVersion());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfClasses_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfClasses());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfColors_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfColors());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfTypes_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfTypes((Bool_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfTypes());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfGlobals_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfGlobals((Bool_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfGlobals());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfGlobalFunctions_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfGlobalFunctions((Bool_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfGlobalFunctions());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfFiles_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfFiles());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfMappedFiles_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfMappedFiles());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfSockets_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfSockets());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfCanvases_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfCanvases());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfStyles_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfStyles());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfFunctions_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfFunctions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfGeometries_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfGeometries());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfBrowsers_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfBrowsers());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfSpecials_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfSpecials());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfMessageHandlers_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfMessageHandlers());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetListOfBrowsables_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetListOfBrowsables());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetType_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetType((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetType((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetFile_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetFile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetFile_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetFile((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetStyle_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetStyle((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetFunction_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetFunction((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetGlobal_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobal((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobal((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetGlobal_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobal((TObject*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobal((TObject*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetGlobalFunction_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobalFunction((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobalFunction((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobalFunction((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetGlobalFunctionWithPrototype_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobalFunctionWithPrototype((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobalFunctionWithPrototype((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGlobalFunctionWithPrototype((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetGeometry_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetGeometry((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetSelectedPrimitive_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetSelectedPrimitive());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetSelectedPad_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetNclasses_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->GetNclasses());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetNtypes_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->GetNtypes());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Idle_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Idle((UInt_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Idle((UInt_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_IgnoreInclude_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->IgnoreInclude((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_IsBatch_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TROOT*)(G__getstructoffset()))->IsBatch());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_IsFolder_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_IsInterrupted_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TROOT*)(G__getstructoffset()))->IsInterrupted());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_IsLineProcessing_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TROOT*)(G__getstructoffset()))->IsLineProcessing());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ls_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_LoadClass_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->LoadClass((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_LoadMacro_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->LoadMacro((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Macro_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->Macro((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Message_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Message((Int_t)G__int(libp->para[0]),(TObject*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_MustClean_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->MustClean());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ProcessLine_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ProcessLine((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ProcessLineSync_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ProcessLineSync((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ProcessLineFast_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TROOT*)(G__getstructoffset()))->ProcessLineFast((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Proof_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Proof((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Proof();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ReadingBasket_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->ReadingBasket());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Reset_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SaveContext_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SaveContext();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetApplication_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetApplication((TApplication*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetBatch_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetBatch((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetBatch();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetDefCanvasName_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetDefCanvasName((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetDefCanvasName();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetEditHistograms_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetEditHistograms((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetEditHistograms();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetEditorMode_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetEditorMode((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetEditorMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetFromPopUp_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetFromPopUp((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetFromPopUp();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetInterrupt_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetInterrupt((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetInterrupt();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetLineIsProcessing_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetLineIsProcessing();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetLineHasBeenProcessed_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetLineHasBeenProcessed();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetReadingBasket_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetReadingBasket((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetReadingBasket();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetMustClean_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetMustClean((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetMustClean();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetSelectedPrimitive_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetSelectedPrimitive((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetSelectedPad_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetSelectedPad((TVirtualPad*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetStyle_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetStyle((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Time_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Time((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Time();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Timer_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->Timer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_GetMacroPath_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TROOT*)(G__getstructoffset()))->GetMacroPath());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Initialized_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TROOT*)(G__getstructoffset()))->Initialized());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_SetMakeDefCanvas_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->SetMakeDefCanvas((VoidFuncPtr_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Class_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TROOT*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Class_Name_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TROOT*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Class_Version_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TROOT*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Dictionary_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_IsA_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TROOT*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ShowMembers_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_Streamer_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TROOT*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_DeclFileName_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TROOT*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_DeclFileLine_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ImplFileName_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TROOT*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TROOT_ImplFileLine_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TROOT*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TROOT_wATROOT_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TROOT *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TROOT *)((G__getstructoffset())+sizeof(TROOT)*i);
   else  delete (TROOT *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TRealData */
static int G__TRealData_TRealData_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRealData *p=NULL;
   if(G__getaryconstruct()) p=new TRealData[G__getaryconstruct()];
   else                    p=new TRealData;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRealData);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_TRealData_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRealData *p=NULL;
      p = new TRealData(
(const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(TDataMember*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRealData);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_GetName_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TRealData*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_GetDataMember_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRealData*)(G__getstructoffset()))->GetDataMember());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_GetThisOffset_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRealData*)(G__getstructoffset()))->GetThisOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_WriteRealData_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRealData*)(G__getstructoffset()))->WriteRealData((void*)G__int(libp->para[0]),libp->para[1].ref?*(char**)libp->para[1].ref:*(char**)(&G__Mlong(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_Class_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRealData*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_Class_Name_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRealData*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_Class_Version_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRealData*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_Dictionary_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRealData*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_IsA_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TRealData*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_ShowMembers_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRealData*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_Streamer_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRealData*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_DeclFileName_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRealData*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_DeclFileLine_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRealData*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_ImplFileName_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRealData*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRealData_ImplFileLine_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRealData*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TRealData_TRealData_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TRealData *p;
   p=new TRealData(*(TRealData*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRealData);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRealData_wATRealData_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRealData *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRealData *)((G__getstructoffset())+sizeof(TRealData)*i);
   else  delete (TRealData *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TExec */
static int G__TExec_TExec_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TExec *p=NULL;
   if(G__getaryconstruct()) p=new TExec[G__getaryconstruct()];
   else                    p=new TExec;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TExec);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_TExec_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TExec *p=NULL;
      p = new TExec((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TExec);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_TExec_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TExec *p=NULL;
      p = new TExec(*(TExec*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TExec);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Exec_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->Exec((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->Exec();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Paint_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_SavePrimitive_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->SavePrimitive(*(ofstream*)libp->para[0].ref,(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Class_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TExec*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Class_Name_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TExec*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Class_Version_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TExec*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Dictionary_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_IsA_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TExec*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_ShowMembers_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_Streamer_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TExec*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_DeclFileName_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TExec*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_DeclFileLine_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TExec*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_ImplFileName_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TExec*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TExec_ImplFileLine_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TExec*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TExec_wATExec_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TExec *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TExec *)((G__getstructoffset())+sizeof(TExec)*i);
   else  delete (TExec *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFree */
static int G__TFree_TFree_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TFree *p=NULL;
   if(G__getaryconstruct()) p=new TFree[G__getaryconstruct()];
   else                    p=new TFree;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TFree);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_TFree_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TFree *p=NULL;
      p = new TFree((Seek_t)G__int(libp->para[0]),(Seek_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TFree);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_AddFree_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFree*)(G__getstructoffset()))->AddFree((Seek_t)G__int(libp->para[0]),(Seek_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_FillBuffer_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_GetBestFree_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFree*)(G__getstructoffset()))->GetBestFree((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_GetFirst_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFree*)(G__getstructoffset()))->GetFirst());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_GetLast_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFree*)(G__getstructoffset()))->GetLast());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_ReadBuffer_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->ReadBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_SetFirst_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->SetFirst((Seek_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_SetLast_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->SetLast((Seek_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_Sizeof_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TFree*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_Class_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFree*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_Class_Name_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFree*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_Class_Version_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFree*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_Dictionary_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_IsA_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TFree*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_ShowMembers_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_Streamer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFree*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_DeclFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFree*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_DeclFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFree*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_ImplFileName_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFree*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFree_ImplFileLine_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFree*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TFree_TFree_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TFree *p;
   p=new TFree(*(TFree*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TFree);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFree_wATFree_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFree *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFree *)((G__getstructoffset())+sizeof(TFree)*i);
   else  delete (TFree *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMapFile */
static int G__TMapFile_operatorsPdelete_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->operator delete((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Browse_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Close_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetBaseAddr_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((const TMapFile*)(G__getstructoffset()))->GetBaseAddr());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetBreakval_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((const TMapFile*)(G__getstructoffset()))->GetBreakval());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetDirectory_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->GetDirectory());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetFd_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TMapFile*)(G__getstructoffset()))->GetFd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetMmallocDesc_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((const TMapFile*)(G__getstructoffset()))->GetMmallocDesc());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetName_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TMapFile*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetSize_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TMapFile*)(G__getstructoffset()))->GetSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetOption_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TMapFile*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetTitle_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TMapFile*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetFirst_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMapFile*)(G__getstructoffset()))->GetFirst());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_GetLast_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMapFile*)(G__getstructoffset()))->GetLast());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_IsFolder_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMapFile*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_IsWritable_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TMapFile*)(G__getstructoffset()))->IsWritable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_OrgAddress_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((const TMapFile*)(G__getstructoffset()))->OrgAddress((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Print_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_ls_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_cd_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,98,(long)((TMapFile*)(G__getstructoffset()))->cd((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,98,(long)((TMapFile*)(G__getstructoffset()))->cd());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Add_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Add((TObject*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Add((TObject*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Update_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Update((TObject*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Update();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Remove_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Remove((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Remove_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Remove((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_RemoveAll_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->RemoveAll();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Get_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Get((const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Get((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Create_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Create((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(const char*)G__int(libp->para[3])));
      break;
   case 3:
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Create((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Create((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Create((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_WhichMapFile_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->WhichMapFile((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_SetMapAddress_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->SetMapAddress((Long_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Class_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMapFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Class_Name_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMapFile*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Class_Version_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMapFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Dictionary_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_IsA_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMapFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_ShowMembers_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_Streamer_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMapFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_DeclFileName_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMapFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_DeclFileLine_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMapFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_ImplFileName_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMapFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapFile_ImplFileLine_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMapFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMapFile_wATMapFile_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMapFile *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMapFile *)((G__getstructoffset())+sizeof(TMapFile)*i);
   else  delete (TMapFile *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMapRec */
static int G__TMapRec_TMapRec_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TMapRec *p=NULL;
      p = new TMapRec(
(const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(void*)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMapRec);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapRec_GetName_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((const TMapRec*)(G__getstructoffset()))->GetName((Long_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((const TMapRec*)(G__getstructoffset()))->GetName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapRec_GetClassName_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((const TMapRec*)(G__getstructoffset()))->GetClassName((Long_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((const TMapRec*)(G__getstructoffset()))->GetClassName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapRec_GetBuffer_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,89,(long)((const TMapRec*)(G__getstructoffset()))->GetBuffer((Long_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,89,(long)((const TMapRec*)(G__getstructoffset()))->GetBuffer());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapRec_GetBufSize_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TMapRec*)(G__getstructoffset()))->GetBufSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapRec_GetObject_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMapRec*)(G__getstructoffset()))->GetObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMapRec_GetNext_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,85,(long)((const TMapRec*)(G__getstructoffset()))->GetNext((Long_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((const TMapRec*)(G__getstructoffset()))->GetNext());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMapRec_TMapRec_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TMapRec *p;
   p=new TMapRec(*(TMapRec*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMapRec);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMapRec_wATMapRec_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMapRec *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMapRec *)((G__getstructoffset())+sizeof(TMapRec)*i);
   else  delete (TMapRec *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TKeyMapFile */
static int G__TKeyMapFile_TKeyMapFile_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKeyMapFile *p=NULL;
   if(G__getaryconstruct()) p=new TKeyMapFile[G__getaryconstruct()];
   else                    p=new TKeyMapFile;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_TKeyMapFile_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TKeyMapFile *p=NULL;
      p = new TKeyMapFile(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(TMapFile*)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_Browse_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKeyMapFile*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_Class_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TKeyMapFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_Class_Name_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKeyMapFile*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_Class_Version_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TKeyMapFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_Dictionary_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKeyMapFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_IsA_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TKeyMapFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_ShowMembers_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKeyMapFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_Streamer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TKeyMapFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_DeclFileName_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKeyMapFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_DeclFileLine_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKeyMapFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_ImplFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TKeyMapFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TKeyMapFile_ImplFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TKeyMapFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TKeyMapFile_TKeyMapFile_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TKeyMapFile *p;
   p=new TKeyMapFile(*(TKeyMapFile*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TKeyMapFile_wATKeyMapFile_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TKeyMapFile *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TKeyMapFile *)((G__getstructoffset())+sizeof(TKeyMapFile)*i);
   else  delete (TKeyMapFile *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSignalHandler */
static int G__TSignalHandler_TSignalHandler_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSignalHandler *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TSignalHandler((ESignals)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TSignalHandler((ESignals)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Delay_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->Delay();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_HandleDelayedSignal_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->HandleDelayedSignal();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_GetSignal_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TSignalHandler*)(G__getstructoffset()))->GetSignal());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_SetSignal_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->SetSignal((ESignals)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_IsSync_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TSignalHandler*)(G__getstructoffset()))->IsSync());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_IsAsync_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TSignalHandler*)(G__getstructoffset()))->IsAsync());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Notify_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSignalHandler*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Remove_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->Remove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Class_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSignalHandler*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Class_Name_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSignalHandler*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Class_Version_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSignalHandler*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Dictionary_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_IsA_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TSignalHandler*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_ShowMembers_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_Streamer_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSignalHandler*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_DeclFileName_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSignalHandler*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_DeclFileLine_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSignalHandler*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_ImplFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSignalHandler*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSignalHandler_ImplFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSignalHandler*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TSignalHandler_TSignalHandler_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TSignalHandler *p;
   p=new TSignalHandler(*(TSignalHandler*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSignalHandler_wATSignalHandler_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSignalHandler *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSignalHandler *)((G__getstructoffset())+sizeof(TSignalHandler)*i);
   else  delete (TSignalHandler *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TObjString */
static int G__TObjString_TObjString_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TObjString *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TObjString((const char*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TObjString[G__getaryconstruct()];
   else                    p=new TObjString;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TObjString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_TObjString_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TObjString *p=NULL;
      p = new TObjString(*(TObjString*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TObjString);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Compare_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObjString*)(G__getstructoffset()))->Compare((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_GetName_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TObjString*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Hash_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TObjString*)(G__getstructoffset()))->Hash());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_FillBuffer_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Print_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_IsSortable_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TObjString*)(G__getstructoffset()))->IsSortable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_IsEqual_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TObjString*)(G__getstructoffset()))->IsEqual((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_ReadBuffer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->ReadBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_SetString_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->SetString((char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_GetString_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
const         TString *pobj,xobj=((const TObjString*)(G__getstructoffset()))->GetString();
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Sizeof_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TObjString*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_String_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString& obj=((TObjString*)(G__getstructoffset()))->String();
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Class_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TObjString*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Class_Name_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObjString*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Class_Version_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TObjString*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Dictionary_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_IsA_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TObjString*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_ShowMembers_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_Streamer_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TObjString*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_DeclFileName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObjString*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_DeclFileLine_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObjString*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_ImplFileName_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TObjString*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TObjString_ImplFileLine_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TObjString*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TObjString_wATObjString_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TObjString *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TObjString *)((G__getstructoffset())+sizeof(TObjString)*i);
   else  delete (TObjString *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSystem */
static int G__TSystem_TSystem_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSystem *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TSystem((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TSystem((const char*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TSystem[G__getaryconstruct()];
   else                    p=new TSystem;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystem);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Init_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->Init());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetProgname_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetProgname((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetDisplay_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetDisplay();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetErrorStr_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetErrorStr());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetError_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetError());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_RemoveOnExit_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->RemoveOnExit((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_HostName_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->HostName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetErrno_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->GetErrno());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ResetErrno_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ResetErrno();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Run_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Run();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ProcessEvents_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->ProcessEvents());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_DispatchOneEvent_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->DispatchOneEvent((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->DispatchOneEvent();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ExitLoop_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ExitLoop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_InControl_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TSystem*)(G__getstructoffset()))->InControl());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_InnerLoop_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->InnerLoop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AddSignalHandler_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->AddSignalHandler((TSignalHandler*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_RemoveSignalHandler_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSystem*)(G__getstructoffset()))->RemoveSignalHandler((TSignalHandler*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AddFileHandler_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->AddFileHandler((TFileHandler*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_RemoveFileHandler_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSystem*)(G__getstructoffset()))->RemoveFileHandler((TFileHandler*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_IgnoreInterrupt_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->IgnoreInterrupt((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->IgnoreInterrupt();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Now_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TSystem*)(G__getstructoffset()))->Now();
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AddTimer_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->AddTimer((TTimer*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_RemoveTimer_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSystem*)(G__getstructoffset()))->RemoveTimer((TTimer*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ResetTimer_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ResetTimer((TTimer*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_NextTimeOut_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((TSystem*)(G__getstructoffset()))->NextTimeOut((Bool_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Sleep_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Sleep((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Exec_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Exec((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_OpenPipe_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,69,(long)((TSystem*)(G__getstructoffset()))->OpenPipe((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ClosePipe_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->ClosePipe((FILE*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Exit_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Exit((int)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Exit((int)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Abort_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Abort((int)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Abort();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetPid_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->GetPid());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_StackTrace_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->StackTrace();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_MakeDirectory_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->MakeDirectory((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_OpenDirectory_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TSystem*)(G__getstructoffset()))->OpenDirectory((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_FreeDirectory_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->FreeDirectory((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetDirEntry_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetDirEntry((void*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ChangeDirectory_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->ChangeDirectory((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_WorkingDirectory_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->WorkingDirectory());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_HomeDirectory_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->HomeDirectory((const Char_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->HomeDirectory());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_mkdir_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->mkdir((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_cd_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->cd((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_pwd_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->pwd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_BaseName_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->BaseName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_DirName_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->DirName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ConcatFileName_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->ConcatFileName((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_IsAbsoluteFileName_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->IsAbsoluteFileName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ExpandPathName_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->ExpandPathName(*(TString*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ExpandPathName_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->ExpandPathName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AccessPathName_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->AccessPathName((const char*)G__int(libp->para[0]),(EAccessMode)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,98,(long)((TSystem*)(G__getstructoffset()))->AccessPathName((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Rename_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Rename((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Link_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Link((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Symlink_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Symlink((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Unlink_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Unlink((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetPathInfo_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->GetPathInfo((const char*)G__int(libp->para[0]),(Long_t*)G__int(libp->para[1])
,(Long_t*)G__int(libp->para[2]),(Long_t*)G__int(libp->para[3])
,(Long_t*)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Umask_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Umask((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_UnixPathName_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->UnixPathName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Which_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->Which((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(EAccessMode)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->Which((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Setenv_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Setenv((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Unsetenv_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Unsetenv((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Getenv_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->Getenv((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Openlog_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Openlog((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(ELogFacility)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Syslog_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Syslog((ELogLevel)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Closelog_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Closelog();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_DynamicPathName_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->DynamicPathName((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->DynamicPathName((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_DynFindSymbol_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,89,(long)((TSystem*)(G__getstructoffset()))->DynFindSymbol((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Load_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Load((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Load((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->Load((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Unload_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Unload((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ListSymbols_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ListSymbols((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ListSymbols((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ListLibraries_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ListLibraries((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ListLibraries();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetLibraries_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetLibraries((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetLibraries((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetLibraries());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetHostByName_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TSystem*)(G__getstructoffset()))->GetHostByName((const char*)G__int(libp->para[0]));
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetPeerName_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TSystem*)(G__getstructoffset()))->GetPeerName((int)G__int(libp->para[0]));
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetSockName_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TInetAddress *pobj,xobj=((TSystem*)(G__getstructoffset()))->GetSockName((int)G__int(libp->para[0]));
        pobj=new TInetAddress(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetServiceByName_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->GetServiceByName((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetServiceByPort_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetServiceByPort((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_OpenConnection_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->OpenConnection((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AnnounceTcpService_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->AnnounceTcpService((int)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AnnounceUnixService_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->AnnounceUnixService((int)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_AcceptConnection_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->AcceptConnection((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_CloseConnection_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->CloseConnection((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_RecvRaw_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->RecvRaw((int)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(int)G__int(libp->para[2]),(int)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SendRaw_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->SendRaw((int)G__int(libp->para[0]),(const void*)G__int(libp->para[1])
,(int)G__int(libp->para[2]),(int)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_RecvBuf_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->RecvBuf((int)G__int(libp->para[0]),(void*)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SendBuf_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->SendBuf((int)G__int(libp->para[0]),(const void*)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetSockOpt_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->SetSockOpt((int)G__int(libp->para[0]),(int)G__int(libp->para[1])
,(int)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetSockOpt_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->GetSockOpt((int)G__int(libp->para[0]),(int)G__int(libp->para[1])
,(int*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_CompileMacro_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->CompileMacro((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->CompileMacro((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetMakeSharedLib_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TSystem*)(G__getstructoffset()))->GetMakeSharedLib());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetMakeExe_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TSystem*)(G__getstructoffset()))->GetMakeExe());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetIncludePath_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->GetIncludePath());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetLinkedLibs_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TSystem*)(G__getstructoffset()))->GetLinkedLibs());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetSoExt_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TSystem*)(G__getstructoffset()))->GetSoExt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_GetObjExt_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TSystem*)(G__getstructoffset()))->GetObjExt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetMakeSharedLib_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetMakeSharedLib((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetMakeExe_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetMakeExe((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetIncludePath_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetIncludePath((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetLinkedLibs_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetLinkedLibs((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetSoExt_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetSoExt((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_SetObjExt_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->SetObjExt((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_CleanCompiledMacros_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->CleanCompiledMacros();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Class_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSystem*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Class_Name_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Class_Version_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSystem*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Dictionary_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_IsA_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TSystem*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ShowMembers_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_Streamer_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystem*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_DeclFileName_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_DeclFileLine_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ImplFileName_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystem*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystem_ImplFileLine_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystem*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TSystem_TSystem_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TSystem *p;
   p=new TSystem(*(TSystem*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystem);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSystem_wATSystem_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSystem *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSystem *)((G__getstructoffset())+sizeof(TSystem)*i);
   else  delete (TSystem *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSysEvtHandler */
static int G__TSysEvtHandler_Notify_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSysEvtHandler*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_Remove_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSysEvtHandler*)(G__getstructoffset()))->Remove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_Class_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSysEvtHandler*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_Class_Name_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSysEvtHandler*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_Class_Version_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSysEvtHandler*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_Dictionary_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSysEvtHandler*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_IsA_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TSysEvtHandler*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_ShowMembers_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSysEvtHandler*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_Streamer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSysEvtHandler*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_DeclFileName_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSysEvtHandler*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_DeclFileLine_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSysEvtHandler*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_ImplFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSysEvtHandler*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSysEvtHandler_ImplFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSysEvtHandler*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSysEvtHandler_wATSysEvtHandler_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSysEvtHandler *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSysEvtHandler *)((G__getstructoffset())+sizeof(TSysEvtHandler)*i);
   else  delete (TSysEvtHandler *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TTime */
static int G__TTime_TTime_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TTime *p=NULL;
   if(G__getaryconstruct()) p=new TTime[G__getaryconstruct()];
   else                    p=new TTime;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_TTime_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TTime *p=NULL;
      p = new TTime((Long_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_TTime_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TTime *p=NULL;
      p = new TTime(*(TTime*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TTime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_operatoreQ_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TTime*)(G__getstructoffset()))->operator=(*(TTime*)libp->para[0].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_operatorpLeQ_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TTime*)(G__getstructoffset()))->operator+=(*(TTime*)libp->para[0].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_operatormIeQ_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TTime*)(G__getstructoffset()))->operator-=(*(TTime*)libp->para[0].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_operatormUeQ_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TTime*)(G__getstructoffset()))->operator*=(*(TTime*)libp->para[0].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_operatordIeQ_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=((TTime*)(G__getstructoffset()))->operator/=(*(TTime*)libp->para[0].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_operatorsPlong_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,108,(long)((const TTime*)(G__getstructoffset()))->operator long());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_AsString_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TTime*)(G__getstructoffset()))->AsString());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_Class_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TTime*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_Class_Name_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTime*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_Class_Version_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TTime*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_Dictionary_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTime*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_IsA_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TTime*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_ShowMembers_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTime*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_Streamer_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TTime*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_DeclFileName_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTime*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_DeclFileLine_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTime*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_ImplFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TTime*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TTime_ImplFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TTime*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TTime_wATTime_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TTime *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TTime *)((G__getstructoffset())+sizeof(TTime)*i);
   else  delete (TTime *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TProcessEventTimer */
static int G__TProcessEventTimer_TProcessEventTimer_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TProcessEventTimer *p=NULL;
      p = new TProcessEventTimer((Long_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_ProcessEvents_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TProcessEventTimer*)(G__getstructoffset()))->ProcessEvents());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_Class_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TProcessEventTimer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_Class_Name_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TProcessEventTimer*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_Class_Version_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TProcessEventTimer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_Dictionary_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TProcessEventTimer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_IsA_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TProcessEventTimer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_ShowMembers_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TProcessEventTimer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_Streamer_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TProcessEventTimer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_DeclFileName_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TProcessEventTimer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_DeclFileLine_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TProcessEventTimer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_ImplFileName_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TProcessEventTimer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TProcessEventTimer_ImplFileLine_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TProcessEventTimer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TProcessEventTimer_TProcessEventTimer_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TProcessEventTimer *p;
   p=new TProcessEventTimer(*(TProcessEventTimer*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TProcessEventTimer_wATProcessEventTimer_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TProcessEventTimer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TProcessEventTimer *)((G__getstructoffset())+sizeof(TProcessEventTimer)*i);
   else  delete (TProcessEventTimer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSystemFile */
static int G__TSystemFile_TSystemFile_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSystemFile *p=NULL;
   if(G__getaryconstruct()) p=new TSystemFile[G__getaryconstruct()];
   else                    p=new TSystemFile;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystemFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_TSystemFile_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSystemFile *p=NULL;
      p = new TSystemFile((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystemFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Browse_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemFile*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Edit_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemFile*)(G__getstructoffset()))->Edit();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Class_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSystemFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Class_Name_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystemFile*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Class_Version_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSystemFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Dictionary_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_IsA_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TSystemFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_ShowMembers_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_Streamer_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_DeclFileName_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystemFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_DeclFileLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystemFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_ImplFileName_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystemFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemFile_ImplFileLine_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystemFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TSystemFile_TSystemFile_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TSystemFile *p;
   p=new TSystemFile(*(TSystemFile*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystemFile);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSystemFile_wATSystemFile_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSystemFile *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSystemFile *)((G__getstructoffset())+sizeof(TSystemFile)*i);
   else  delete (TSystemFile *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TSystemDirectory */
static int G__TSystemDirectory_TSystemDirectory_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSystemDirectory *p=NULL;
   if(G__getaryconstruct()) p=new TSystemDirectory[G__getaryconstruct()];
   else                    p=new TSystemDirectory;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_TSystemDirectory_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TSystemDirectory *p=NULL;
      p = new TSystemDirectory((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_IsFolder_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TSystemDirectory*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Browse_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemDirectory*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Edit_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemDirectory*)(G__getstructoffset()))->Edit();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_SetDirectory_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemDirectory*)(G__getstructoffset()))->SetDirectory((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Class_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TSystemDirectory*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Class_Name_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystemDirectory*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Class_Version_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TSystemDirectory*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Dictionary_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemDirectory*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_IsA_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TSystemDirectory*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_ShowMembers_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemDirectory*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_Streamer_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TSystemDirectory*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_DeclFileName_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystemDirectory*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_DeclFileLine_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystemDirectory*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_ImplFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TSystemDirectory*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TSystemDirectory_ImplFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TSystemDirectory*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TSystemDirectory_TSystemDirectory_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TSystemDirectory *p;
   p=new TSystemDirectory(*(TSystemDirectory*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TSystemDirectory_wATSystemDirectory_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TSystemDirectory *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TSystemDirectory *)((G__getstructoffset())+sizeof(TSystemDirectory)*i);
   else  delete (TSystemDirectory *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TStopwatch */
static int G__TStopwatch_TStopwatch_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStopwatch *p=NULL;
   if(G__getaryconstruct()) p=new TStopwatch[G__getaryconstruct()];
   else                    p=new TStopwatch;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStopwatch);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Start_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Start((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Start();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Stop_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Stop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Continue_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Continue();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Counter_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TStopwatch*)(G__getstructoffset()))->Counter());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_RealTime_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TStopwatch*)(G__getstructoffset()))->RealTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Reset_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_ResetCpuTime_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->ResetCpuTime((Double_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->ResetCpuTime();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_ResetRealTime_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->ResetRealTime((Double_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->ResetRealTime();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_CpuTime_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TStopwatch*)(G__getstructoffset()))->CpuTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Print_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_GetRealTime_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TStopwatch*)(G__getstructoffset()))->GetRealTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_GetCPUTime_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TStopwatch*)(G__getstructoffset()))->GetCPUTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Class_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TStopwatch*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Class_Name_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStopwatch*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Class_Version_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStopwatch*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Dictionary_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_IsA_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TStopwatch*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_ShowMembers_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_Streamer_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStopwatch*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_DeclFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStopwatch*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_DeclFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStopwatch*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_ImplFileName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStopwatch*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStopwatch_ImplFileLine_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStopwatch*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TStopwatch_TStopwatch_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TStopwatch *p;
   p=new TStopwatch(*(TStopwatch*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TStopwatch);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TStopwatch_wATStopwatch_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TStopwatch *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TStopwatch *)((G__getstructoffset())+sizeof(TStopwatch)*i);
   else  delete (TStopwatch *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TRandom */
static int G__TRandom_TRandom_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRandom *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TRandom((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TRandom[G__getaryconstruct()];
   else                    p=new TRandom;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRandom);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Binomial_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom*)(G__getstructoffset()))->Binomial((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Exp_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Exp((Double_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Gaus_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Gaus((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Gaus((Float_t)G__double(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Gaus());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_GetSeed_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TRandom*)(G__getstructoffset()))->GetSeed());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Integer_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TRandom*)(G__getstructoffset()))->Integer((UInt_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Landau_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Landau((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Landau((Float_t)G__double(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Landau());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Poisson_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom*)(G__getstructoffset()))->Poisson((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Rannor_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom*)(G__getstructoffset()))->Rannor(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_SetSeed_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TRandom*)(G__getstructoffset()))->SetSeed((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TRandom*)(G__getstructoffset()))->SetSeed();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Rndm_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TRandom*)(G__getstructoffset()))->Rndm((Int_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TRandom*)(G__getstructoffset()))->Rndm());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Uniform_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Uniform((Double_t)G__double(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,100,(double)((TRandom*)(G__getstructoffset()))->Uniform());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Class_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRandom*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Class_Name_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Class_Version_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRandom*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Dictionary_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_IsA_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TRandom*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_ShowMembers_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_Streamer_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_DeclFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_DeclFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_ImplFileName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom_ImplFileLine_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TRandom_TRandom_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TRandom *p;
   p=new TRandom(*(TRandom*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRandom);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRandom_wATRandom_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRandom *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRandom *)((G__getstructoffset())+sizeof(TRandom)*i);
   else  delete (TRandom *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TRandom2 */
static int G__TRandom2_TRandom2_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRandom2 *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TRandom2((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TRandom2[G__getaryconstruct()];
   else                    p=new TRandom2;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRandom2);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_GetSeed2_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->GetSeed2(*(UInt_t*)G__UIntref(&libp->para[0]),*(UInt_t*)G__UIntref(&libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_Rndm_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TRandom2*)(G__getstructoffset()))->Rndm((Int_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TRandom2*)(G__getstructoffset()))->Rndm());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_SetSeed_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->SetSeed((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->SetSeed();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_SetSeed2_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->SetSeed2((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_Class_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRandom2*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_Class_Name_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom2*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_Class_Version_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRandom2*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_Dictionary_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_IsA_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TRandom2*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_ShowMembers_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_Streamer_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom2*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_DeclFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom2*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_DeclFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom2*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_ImplFileName_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom2*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom2_ImplFileLine_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom2*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TRandom2_TRandom2_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TRandom2 *p;
   p=new TRandom2(*(TRandom2*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRandom2);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRandom2_wATRandom2_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRandom2 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRandom2 *)((G__getstructoffset())+sizeof(TRandom2)*i);
   else  delete (TRandom2 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TRandom3 */
static int G__TRandom3_TRandom3_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TRandom3 *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TRandom3((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TRandom3[G__getaryconstruct()];
   else                    p=new TRandom3;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRandom3);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_Rndm_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TRandom3*)(G__getstructoffset()))->Rndm((Int_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TRandom3*)(G__getstructoffset()))->Rndm());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_SetSeed_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TRandom3*)(G__getstructoffset()))->SetSeed((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TRandom3*)(G__getstructoffset()))->SetSeed();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_Class_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TRandom3*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_Class_Name_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom3*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_Class_Version_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TRandom3*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_Dictionary_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom3*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_IsA_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TRandom3*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_ShowMembers_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom3*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_Streamer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TRandom3*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_DeclFileName_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom3*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_DeclFileLine_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom3*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_ImplFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TRandom3*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TRandom3_ImplFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TRandom3*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TRandom3_TRandom3_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TRandom3 *p;
   p=new TRandom3(*(TRandom3*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TRandom3);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TRandom3_wATRandom3_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TRandom3 *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TRandom3 *)((G__getstructoffset())+sizeof(TRandom3)*i);
   else  delete (TRandom3 *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TMessageHandler */
static int G__TMessageHandler_TMessageHandler_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TMessageHandler *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TMessageHandler((TClass*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TMessageHandler((TClass*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_TMessageHandler_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TMessageHandler *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TMessageHandler((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TMessageHandler((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Add_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->Add();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_GetSize_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TMessageHandler*)(G__getstructoffset()))->GetSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_GetMessageCount_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TMessageHandler*)(G__getstructoffset()))->GetMessageCount((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_GetTotalMessageCount_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TMessageHandler*)(G__getstructoffset()))->GetTotalMessageCount());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_HandleDerived_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TMessageHandler*)(G__getstructoffset()))->HandleDerived());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_HandleMessage_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->HandleMessage((Int_t)G__int(libp->para[0]),(TObject*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Notify_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TMessageHandler*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Print_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Remove_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->Remove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Class_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TMessageHandler*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Class_Name_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMessageHandler*)(G__getstructoffset()))->Class_Name());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Class_Version_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TMessageHandler*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Dictionary_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_IsA_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TMessageHandler*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_ShowMembers_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_Streamer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TMessageHandler*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_DeclFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMessageHandler*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_DeclFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMessageHandler*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_ImplFileName_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TMessageHandler*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TMessageHandler_ImplFileLine_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TMessageHandler*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TMessageHandler_TMessageHandler_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TMessageHandler *p;
   p=new TMessageHandler(*(TMessageHandler*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TMessageHandler_wATMessageHandler_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TMessageHandler *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TMessageHandler *)((G__getstructoffset())+sizeof(TMessageHandler)*i);
   else  delete (TMessageHandler *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */
static int G___operatorpL_7_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=operator+(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatormI_8_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=operator-(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatormU_9_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=operator*(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatordI_0_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TTime *pobj,xobj=operator/(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref);
        pobj=new TTime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_1_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatornOeQ_2_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator!=(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorlE_3_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator<(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorlEeQ_4_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator<=(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorgR_5_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator>(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorgReQ_6_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator>=(*(TTime*)libp->para[0].ref,*(TTime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/* TMemberInspector */

/* TStorage */

/* TTimer */

/* TObject */

/* TMath */

/* TRegexp */

/* TString */

/* TStringLong */

/* TSubString */

/* TNamed */

/* TKey */

/* TROOT */

/* TRealData */

/* TExec */

/* TFree */

/* TMapFile */

/* TMapRec */

/* TKeyMapFile */

/* TSignalHandler */

/* TObjString */

/* TSystem */

/* TSysEvtHandler */

/* TTime */

/* TProcessEventTimer */

/* TSystemFile */

/* TSystemDirectory */

/* TStopwatch */

/* TRandom */

/* TRandom2 */

/* TRandom3 */

/* TMessageHandler */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Base2 {
 public:
  G__Sizep2memfuncG__Base2() {p=&G__Sizep2memfuncG__Base2::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Base2::*p)();
};

size_t G__get_sizep2memfuncG__Base2()
{
  G__Sizep2memfuncG__Base2 a;
  G__setsizep2memfunc((int)a.sizep2memfunc());
  return((size_t)a.sizep2memfunc());
}


/*********************************************************
* virtual base class offset calculation interface
*********************************************************/

   /* Setting up class inheritance */

/*********************************************************
* Inheritance information setup/
*********************************************************/
extern "C" void G__cpp_setup_inheritanceG__Base2() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TTimer))) {
     TTimer *G__Lderived;
     G__Lderived=(TTimer*)0x1000;
     {
       TSysEvtHandler *G__Lpbase=(TSysEvtHandler*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TTimer),G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TTimer),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TStringLong))) {
     TStringLong *G__Lderived;
     G__Lderived=(TStringLong*)0x1000;
     {
       TString *G__Lpbase=(TString*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TStringLong),G__get_linked_tagnum(&G__G__Base2LN_TString),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TNamed))) {
     TNamed *G__Lderived;
     G__Lderived=(TNamed*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TNamed),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TKey))) {
     TKey *G__Lderived;
     G__Lderived=(TKey*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TKey),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TKey),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TROOT))) {
     TROOT *G__Lderived;
     G__Lderived=(TROOT*)0x1000;
     {
       TDirectory *G__Lpbase=(TDirectory*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TROOT),G__get_linked_tagnum(&G__G__Base2LN_TDirectory),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TROOT),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TROOT),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TRealData))) {
     TRealData *G__Lderived;
     G__Lderived=(TRealData*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRealData),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TExec))) {
     TExec *G__Lderived;
     G__Lderived=(TExec*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TExec),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TExec),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TFree))) {
     TFree *G__Lderived;
     G__Lderived=(TFree*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TFree),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TMapFile))) {
     TMapFile *G__Lderived;
     G__Lderived=(TMapFile*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapFile),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile))) {
     TKeyMapFile *G__Lderived;
     G__Lderived=(TKeyMapFile*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler))) {
     TSignalHandler *G__Lderived;
     G__Lderived=(TSignalHandler*)0x1000;
     {
       TSysEvtHandler *G__Lpbase=(TSysEvtHandler*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TObjString))) {
     TObjString *G__Lderived;
     G__Lderived=(TObjString*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TObjString),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TSystem))) {
     TSystem *G__Lderived;
     G__Lderived=(TSystem*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystem),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystem),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler))) {
     TSysEvtHandler *G__Lderived;
     G__Lderived=(TSysEvtHandler*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer))) {
     TProcessEventTimer *G__Lderived;
     G__Lderived=(TProcessEventTimer*)0x1000;
     {
       TTimer *G__Lpbase=(TTimer*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer),G__get_linked_tagnum(&G__G__Base2LN_TTimer),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TSysEvtHandler *G__Lpbase=(TSysEvtHandler*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer),G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TSystemFile))) {
     TSystemFile *G__Lderived;
     G__Lderived=(TSystemFile*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory))) {
     TSystemDirectory *G__Lderived;
     G__Lderived=(TSystemDirectory*)0x1000;
     {
       TSystemFile *G__Lpbase=(TSystemFile*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TStopwatch))) {
     TStopwatch *G__Lderived;
     G__Lderived=(TStopwatch*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TStopwatch),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TRandom))) {
     TRandom *G__Lderived;
     G__Lderived=(TRandom*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TRandom2))) {
     TRandom2 *G__Lderived;
     G__Lderived=(TRandom2*)0x1000;
     {
       TRandom *G__Lpbase=(TRandom*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom2),G__get_linked_tagnum(&G__G__Base2LN_TRandom),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom2),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom2),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TRandom3))) {
     TRandom3 *G__Lderived;
     G__Lderived=(TRandom3*)0x1000;
     {
       TRandom *G__Lpbase=(TRandom*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom3),G__get_linked_tagnum(&G__G__Base2LN_TRandom),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom3),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom3),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler))) {
     TMessageHandler *G__Lderived;
     G__Lderived=(TMessageHandler*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler),G__get_linked_tagnum(&G__G__Base2LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler),G__get_linked_tagnum(&G__G__Base2LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Base2() {

   /* Setting up typedef entry */
   G__search_typename2("size_t",104,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Char_t",99,-1,0,
-1);
   G__setnewtype(-1,"Signed Character 1 byte",0);
   G__search_typename2("UChar_t",98,-1,0,
-1);
   G__setnewtype(-1,"Unsigned Character 1 byte",0);
   G__search_typename2("Short_t",115,-1,0,
-1);
   G__setnewtype(-1,"Signed Short integer 2 bytes",0);
   G__search_typename2("UShort_t",114,-1,0,
-1);
   G__setnewtype(-1,"Unsigned Short integer 2 bytes",0);
   G__search_typename2("Int_t",105,-1,0,
-1);
   G__setnewtype(-1,"Signed integer 4 bytes",0);
   G__search_typename2("UInt_t",104,-1,0,
-1);
   G__setnewtype(-1,"Unsigned integer 4 bytes",0);
   G__search_typename2("Seek_t",105,-1,0,
-1);
   G__setnewtype(-1,"File pointer",0);
   G__search_typename2("Long_t",108,-1,0,
-1);
   G__setnewtype(-1,"Signed long integer 8 bytes",0);
   G__search_typename2("ULong_t",107,-1,0,
-1);
   G__setnewtype(-1,"Unsigned long integer 8 bytes",0);
   G__search_typename2("Float_t",102,-1,0,
-1);
   G__setnewtype(-1,"Float 4 bytes",0);
   G__search_typename2("Double_t",100,-1,0,
-1);
   G__setnewtype(-1,"Float 8 bytes",0);
   G__search_typename2("Text_t",99,-1,0,
-1);
   G__setnewtype(-1,"General string",0);
   G__search_typename2("Bool_t",98,-1,0,
-1);
   G__setnewtype(-1,"Boolean (0=false, 1=true)",0);
   G__search_typename2("Byte_t",98,-1,0,
-1);
   G__setnewtype(-1,"Byte (8 bits)",0);
   G__search_typename2("Version_t",115,-1,0,
-1);
   G__setnewtype(-1,"Class version identifier",0);
   G__search_typename2("Option_t",99,-1,0,
-1);
   G__setnewtype(-1,"Option string",0);
   G__search_typename2("Ssiz_t",105,-1,0,
-1);
   G__setnewtype(-1,"String size",0);
   G__search_typename2("Real_t",102,-1,0,
-1);
   G__setnewtype(-1,"TVector and TMatrix element type",0);
   G__search_typename2("VoidFuncPtr_t",89,-1,0,
-1);
   G__setnewtype(-1,"pointer to void function",0);
   G__search_typename2("va_list",67,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("FreeHookFun_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocFun_t",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("ReAllocCFun_t",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Axis_t",102,-1,0,
-1);
   G__setnewtype(-1,"Axis values type",0);
   G__search_typename2("Stat_t",100,-1,0,
-1);
   G__setnewtype(-1,"Statistics type",0);
   G__search_typename2("Font_t",115,-1,0,
-1);
   G__setnewtype(-1,"Font number",0);
   G__search_typename2("Style_t",115,-1,0,
-1);
   G__setnewtype(-1,"Style number",0);
   G__search_typename2("Marker_t",115,-1,0,
-1);
   G__setnewtype(-1,"Marker number",0);
   G__search_typename2("Width_t",115,-1,0,
-1);
   G__setnewtype(-1,"Line width",0);
   G__search_typename2("Color_t",115,-1,0,
-1);
   G__setnewtype(-1,"Color number",0);
   G__search_typename2("SCoord_t",115,-1,0,
-1);
   G__setnewtype(-1,"Screen coordinates",0);
   G__search_typename2("Coord_t",102,-1,0,
-1);
   G__setnewtype(-1,"Pad world coordinates",0);
   G__search_typename2("Angle_t",102,-1,0,
-1);
   G__setnewtype(-1,"Graphics angle",0);
   G__search_typename2("Size_t",102,-1,0,
-1);
   G__setnewtype(-1,"Attribute size",0);
   G__search_typename2("Pattern_t",114,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Func_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TMemberInspector */
static void G__setup_memvarTMemberInspector(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TMemberInspector));
   { TMemberInspector *p; p=(TMemberInspector*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TStorage */
static void G__setup_memvarTStorage(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TStorage));
   { TStorage *p; p=(TStorage*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,4,"fgHeapBegin=",0,"begin address of heap");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-2,4,"fgHeapEnd=",0,"end address of heap");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("size_t"),-2,4,"fgMaxBlockSize=",0,"largest block allocated");
   G__memvar_setup((void*)NULL,89,0,0,-1,G__defined_typename("FreeHookFun_t"),-2,4,"fgFreeHook=",0,"function called on free");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-2,4,"fgFreeHookData=",0,"data used by this function");
   G__memvar_setup((void*)NULL,81,0,0,-1,G__defined_typename("ReAllocFun_t"),-2,4,"fgReAllocHook=",0,"custom ReAlloc");
   G__memvar_setup((void*)NULL,81,0,0,-1,G__defined_typename("ReAllocCFun_t"),-2,4,"fgReAllocCHook=",0,"custom ReAlloc with length check");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-2,4,"fgHasCustomNewDelete=",0,"true if using ROOT's new/delete");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTimer */
static void G__setup_memvarTTimer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TTimer));
   { TTimer *p; p=(TTimer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,-1,2,"fTime=",0,"time out time in ms");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,-1,2,"fAbsTime=",0,"absolute time out time in ms");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fTimeout=",0,"true if timer has timed out");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fSync=",0,"true if synchrounous timer");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fTimeID=",0,"the system ID of this timer (for WIN32)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,-1,2,"fObject=",0,"object to be notified (if any)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fCommand=",0,"interpreter command to be executed");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TObject */
static void G__setup_memvarTObject(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TObject));
   { TObject *p; p=(TObject*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fUniqueID=",0,"object unique identifier");
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fBits=",0,"bit field status word");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-2,4,"fgDtorOnly=",0,"object for which to call dtor only (i.e. no delete)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,4,"fgDirLevel=",0,"indentation level for ls()");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-2,4,"fgObjectStat=",0,"if true keep track of objects in TObjectTable");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TObjectcLcLdA),-1,-2,1,"kIsOnHeap=16777216",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TObjectcLcLdA),-1,-2,1,"kNotDeleted=33554432",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TObjectcLcLdA),-1,-2,1,"kZombie=67108864",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TObjectcLcLdA),-1,-2,1,"kBitMask=16777215",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TObjectcLcLdA),-1,-2,1,"kSingleKey=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TObjectcLcLdA),-1,-2,1,"kOverwrite=2",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMath */
static void G__setup_memvarTMath(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TMath));
   { TMath *p; p=(TMath*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TRegexp */
static void G__setup_memvarTRegexp(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TRegexp));
   { TRegexp *p; p=(TRegexp*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TRegexpcLcLEStatVal),-1,-2,1,"kOK=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TRegexpcLcLEStatVal),-1,-2,1,"kIllegal=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TRegexpcLcLEStatVal),-1,-2,1,"kNomem=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TRegexpcLcLEStatVal),-1,-2,1,"kToolong=3",0,(char*)NULL);
   G__memvar_setup((void*)NULL,82,0,0,-1,G__defined_typename("Pattern_t"),-1,4,"fPattern=",0,"Compiled pattern");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Base2LN_TRegexpcLcLEStatVal),-1,-1,4,"fStat=",0,"Status");
   G__memvar_setup((void*)NULL,104,0,1,-1,-1,-2,4,"fgMaxpat=",0,"Max length of compiled pattern");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TString */
static void G__setup_memvarTString(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TString));
   { TString *p; p=(TString*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Ssiz_t"),-2,4,"fgInitialCapac=",0,"Initial allocation Capacity");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Ssiz_t"),-2,4,"fgResizeInc=",0,"Resizing increment");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Ssiz_t"),-2,4,"fgFreeboard=",0,"Max empty space before reclaim");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fData=",0,"ref. counted data (TStringRef is in front)");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStringcLcLEStripType),-1,-2,1,"kLeading=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStringcLcLEStripType),-1,-2,1,"kTrailing=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStringcLcLEStripType),-1,-2,1,"kBoth=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStringcLcLECaseCompare),-1,-2,1,"kExact=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStringcLcLECaseCompare),-1,-2,1,"kIgnoreCase=1",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TStringLong */
static void G__setup_memvarTStringLong(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TStringLong));
   { TStringLong *p; p=(TStringLong*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSubString */
static void G__setup_memvarTSubString(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TSubString));
   { TSubString *p; p=(TSubString*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,4,"fStr=",0,"Referenced string");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Ssiz_t"),-1,4,"fBegin=",0,"Index of starting character");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Ssiz_t"),-1,4,"fExtent=",0,"Length of TSubString");
   }
   G__tag_memvar_reset();
}


   /* TNamed */
static void G__setup_memvarTNamed(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TNamed));
   { TNamed *p; p=(TNamed*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fName=",0,"object identifier");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fTitle=",0,"object title");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TKey */
static void G__setup_memvarTKey(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TKey));
   { TKey *p; p=(TKey*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersion=",0,"Key version identifier");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNbytes=",0,"Number of bytes for the object on file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fObjlen=",0,"Length of uncompressed object in bytes");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TDatime),-1,-1,2,"fDatime=",0,"Date/Time of insertion in file");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,2,"fKeylen=",0,"Number of bytes for the key itself");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,2,"fCycle=",0,"Cycle number");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fSeekKey=",0,"Location of object on file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fSeekPdir=",0,"Location of parent directory on file");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fClassName=",0,"Object Class name");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLeft=",0,"Number of bytes left in current segment");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBuffer=",0,"Object buffer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TBuffer),-1,-1,2,"fBufferRef=",0,"Pointer to the TBuffer object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TROOT */
static void G__setup_memvarTROOT(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TROOT));
   { TROOT *p; p=(TROOT*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-2,4,"fgRootInit=",0,"Singleton initialization flag");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fLineIsProcessing=",0,"To synchronize multi-threads");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fVersion=",0,"ROOT version (from CMZ VERSQQ) ex 0.05/01");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersionInt=",0,"ROOT version in integer format (501)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersionDate=",0,"Date of ROOT version (ex 951226)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersionTime=",0,"Time of ROOT version (ex 1152)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fTimer=",0,"Timer flag");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TApplication),-1,-1,2,"fApplication=",0,"Pointer to current application");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TInterpreter),-1,-1,2,"fInterpreter=",0,"Command interpreter");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TFile),-1,-1,2,"fCurrentFile=",0,"Current file");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TDirectory),-1,-1,2,"fCurrentDirectory=",0,"Current directory");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TVirtualPad),-1,-1,2,"fCurrentCanvas=",0,"Current graphics canvas");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TVirtualPad),-1,-1,2,"fCurrentPad=",0,"Current graphics pad");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TStyle),-1,-1,2,"fCurrentStyle=",0,"Current graphics style");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,2,"fCurrentFunction=",0,"Current function");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fBatch=",0,"True if session without graphics");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fEditHistograms=",0,"True if histograms can be edited with the mouse");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fFromPopUp=",0,"True if command executed from a popup menu");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fMustClean=",0,"True if object destructor scans canvases");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fReadingBasket=",0,"True while reading a basket buffer");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fForceStyle=",0,"Force setting of current style when reading objects");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fInterrupt=",0,"True if macro should be interrupted");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fEditorMode=",0,"Current Editor mode");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,-1,2,"fPrimitive=",0,"Currently selected primitive");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TVirtualPad),-1,-1,2,"fSelectPad=",0,"Currently selected pad");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fClasses=",0,"List of classes definition");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fTypes=",0,"List of data types definition");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fGlobals=",0,"List of global variables");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fGlobalFunctions=",0,"List of global functions");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fFiles=",0,"List of files");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fMappedFiles=",0,"List of memory mapped files");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fSockets=",0,"List of network sockets");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fCanvases=",0,"List of canvases");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fStyles=",0,"List of styles");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fFunctions=",0,"List of analytic functions");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fProcesses=",0,"List of connected processes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fColors=",0,"List of colors");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fGeometries=",0,"List of geometries");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fBrowsers=",0,"List of browsers");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fSpecials=",0,"List of special objects");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fMessageHandlers=",0,"List of message handlers");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TList),-1,-1,2,"fBrowsables=",0,"List of browsables");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fDefCanvasName=",0,"Name of default canvas");
   G__memvar_setup((void*)NULL,89,0,0,-1,G__defined_typename("VoidFuncPtr_t"),-2,2,"fgMakeDefCanvas=",0,"Pointer to default canvas constructor");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TRealData */
static void G__setup_memvarTRealData(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TRealData));
   { TRealData *p; p=(TRealData*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TDataMember),-1,-1,4,"fDataMember=",0,"pointer to data member descriptor");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fThisOffset=",0,"offset with the THIS object pointer");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,4,"fName=",0,"Concatenated names of this realdata");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TExec */
static void G__setup_memvarTExec(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TExec));
   { TExec *p; p=(TExec*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFree */
static void G__setup_memvarTFree(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TFree));
   { TFree *p; p=(TFree*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fFirst=",0,"First free word of segment");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fLast=",0,"Last free word of segment");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMapFile */
static void G__setup_memvarTMapFile(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapFile));
   { TMapFile *p; p=(TMapFile*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fFd=",0,"Descriptor of mapped file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fVersion=",0,"ROOT version (or -1 for shadow map file)");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fName=",0,"Name of mapped file");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fTitle=",0,"Title of mapped file");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fOption=",0,"Directory creation options");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,4,"fMmallocDesc=",0,"Pointer to mmalloc descriptor");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,4,"fBaseAddr=",0,"Base address of mapped memory region");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fSize=",0,"Original start size of memory mapped region");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,-1,4,"fFirst=",0,"List of streamed objects is shared memory");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,-1,4,"fLast=",0,"Last object in list of shared objects");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fOffset=",0,"Offset in bytes for region mapped by reader");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TDirectory),-1,-1,4,"fDirectory=",0,"Pointer to directory associated to this mapfile");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TList),-1,-1,4,"fBrowseList=",0,"List of KeyMapFile objects");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fWritable=",0,"TRUE if mapped file opened in RDWR mode");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fSemaphore=",0,"Modification semaphore (or getpid() for WIN32)");
   G__memvar_setup((void*)NULL,107,0,0,-1,G__defined_typename("ULong_t"),-1,4,"fhSemaphore=",0,"HANDLE of WIN32 Mutex object to implement semaphore");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,-1,4,"fGetting=",0,"Don't deadlock in update mode, when from Get() Add() is called");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fWritten=",0,"Number of objects written sofar");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fSumBuffer=",0,"Sum of buffer sizes of objects written sofar");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fSum2Buffer=",0,"Sum of squares of buffer sizes of objects written so far");
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-2,4,"fgMapAddress=",0,"Map to this address, set address via SetMapAddress()");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-2,4,"fgMmallocDesc=",0,"Used in Close() and operator delete()");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TMapFilecLcLdA),-1,-2,1,"kDefaultMapSize=524288",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMapRec */
static void G__setup_memvarTMapRec(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapRec));
   { TMapRec *p; p=(TMapRec*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fName=",0,"object name");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fClassName=",0,"class name");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,-1,4,"fObject=",0,"pointer to original object");
   G__memvar_setup((void*)NULL,89,0,0,-1,-1,-1,4,"fBuffer=",0,"buffer containing object of class name");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fBufSize=",0,"buffer size");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,-1,4,"fNext=",0,"next MapRec in list");
   }
   G__tag_memvar_reset();
}


   /* TKeyMapFile */
static void G__setup_memvarTKeyMapFile(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile));
   { TKeyMapFile *p; p=(TKeyMapFile*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,-1,4,"fMapFile=",0,"pointer to map file");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSignalHandler */
static void G__setup_memvarTSignalHandler(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler));
   { TSignalHandler *p; p=(TSignalHandler*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Base2LN_ESignals),-1,-1,2,"fSignal=",0,"Signal to be handled");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fSync=",0,"Synchronous or a-synchronous signal");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fDelay=",0,"Delay handling of signal (use fDelay in Notify())");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TObjString */
static void G__setup_memvarTObjString(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TObjString));
   { TObjString *p; p=(TObjString*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,4,"fString=",0,"wrapped TString");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSystem */
static void G__setup_memvarTSystem(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystem));
   { TSystem *p; p=(TSystem*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TFdSet),-1,-1,2,"fReadmask=",0,"!Files that should be checked for read events");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TFdSet),-1,-1,2,"fWritemask=",0,"!Files that should be checked for write events");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TFdSet),-1,-1,2,"fReadready=",0,"!Files with reads waiting");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TFdSet),-1,-1,2,"fWriteready=",0,"!Files with writes waiting");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TFdSet),-1,-1,2,"fSignals=",0,"!Signals that were trapped");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNfd=",0,"Number of fd's in masks");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMaxrfd=",0,"Largest fd in read mask");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMaxwfd=",0,"Largest fd in write mask");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSigcnt=",0,"Number of pending signals");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fWdpath=",0,"Working directory");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fHostname=",0,"Hostname");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fInsideNotify=",0,"Used by DispatchTimers()");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fInControl=",0,"True if in eventloop");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDone=",0,"True if eventloop should be finished");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fLevel=",0,"Level of nested eventloops");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fLastErrorString=",0,"Last system error message");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fTimers=",0,"List of timers");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fSignalHandler=",0,"List of signal handlers");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fFileHandler=",0,"List of file handlers");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fOnExitList=",0,"List of items to be cleaned-up on exit");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fListLibs=",0,"List shared libraries. Cache used by GetLibraries");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fListPaths=",0,"List of all include (fIncludePath + interpreter include path). Cache used by GetIncludePath");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fIncludePath=",0,"Used to expand $IncludePath in the directives given to SetMakeSharedLib and SetMakeExe");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fLinkedLibs=",0,"Used to expand $LinkedLibs in the directives given to SetMakeSharedLib and SetMakeExe");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fSoExt=",0,"Extension of shared library (.so, .sl, .a, .dll, etc.)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fObjExt=",0,"Extension of object files (.o, .obj, etc.)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fMakeSharedLib=",0,"Directive used to build a shared library");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,-1,2,"fMakeExe=",0,"Directive used to build an executable");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,-1,2,"fCompiled=",0,"List of shared libs from compiled macros to be deleted");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSysEvtHandler */
static void G__setup_memvarTSysEvtHandler(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler));
   { TSysEvtHandler *p; p=(TSysEvtHandler*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TTime */
static void G__setup_memvarTTime(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TTime));
   { TTime *p; p=(TTime*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,108,0,0,-1,G__defined_typename("Long_t"),-1,4,"fMilliSec=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EAccessMode */

   /* TProcessEventTimer */
static void G__setup_memvarTProcessEventTimer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer));
   { TProcessEventTimer *p; p=(TProcessEventTimer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSystemFile */
static void G__setup_memvarTSystemFile(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemFile));
   { TSystemFile *p; p=(TSystemFile*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TSystemDirectory */
static void G__setup_memvarTSystemDirectory(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory));
   { TSystemDirectory *p; p=(TSystemDirectory*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TOrdCollection),-1,-1,4,"fDirsInBrowser=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TOrdCollection),-1,-1,4,"fFilesInBrowser=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TStopwatch */
static void G__setup_memvarTStopwatch(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TStopwatch));
   { TStopwatch *p; p=(TStopwatch*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStopwatchcLcLEState),-1,-2,1,"kUndefined=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStopwatchcLcLEState),-1,-2,1,"kStopped=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_TStopwatchcLcLEState),-1,-2,1,"kRunning=2",0,(char*)NULL);
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fStartRealTime=",0,"wall clock start time");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fStopRealTime=",0,"wall clock stop time");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fStartCpuTime=",0,"cpu start time");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fStopCpuTime=",0,"cpu stop time");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fTotalCpuTime=",0,"total cpu time");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fTotalRealTime=",0,"total real time");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Base2LN_TStopwatchcLcLEState),-1,-1,4,"fState=",0,"stopwatch state");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCounter=",0,"number of times the stopwatch was started");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TRandom */
static void G__setup_memvarTRandom(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom));
   { TRandom *p; p=(TRandom*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fSeed=",0,"Random number generator seed");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TRandom2 */
static void G__setup_memvarTRandom2(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom2));
   { TRandom2 *p; p=(TRandom2*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSeed1=",0,"Random number generator seed 1");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSeed2=",0,"Random number generator seed 2");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TRandom3 */
static void G__setup_memvarTRandom3(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom3));
   { TRandom3 *p; p=(TRandom3*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,4,"fMt[624]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCount624=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TMessageHandler */
static void G__setup_memvarTMessageHandler(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler));
   { TMessageHandler *p; p=(TMessageHandler*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-1,2,"fClass=",0,"class for which message has to be handled");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,-1,2,"fMessObj=",0,"object generating message");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMessId=",0,"message id (often matching specific enum in fClass)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSize=",0,"number of different messages handled");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCnts=",0,"count per message");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMessIds=",0,"message ids");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDerived=",0,"if true handle messages also for derived classes");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Base2() {
}
/***********************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
************************************************************
***********************************************************/

/*********************************************************
* Member function information setup for each class
*********************************************************/
static void G__setup_memfuncTMemberInspector(void) {
   /* TMemberInspector */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TMemberInspector));
   G__memfunc_setup("Inspect",726,G__TMemberInspector_Inspect_2_0,121,-1,-1,0,4,1,1,0,
"U 'TClass' - 0 - cl C - - 10 - parent "
"C - - 10 - name Y - - 0 - addr",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Class",502,G__TMemberInspector_Class_3_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TMemberInspector_Class_Name_4_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMemberInspector_Class_Version_5_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMemberInspector_Dictionary_6_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMemberInspector_IsA_7_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMemberInspector_ShowMembers_8_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMemberInspector_Streamer_9_0,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMemberInspector_DeclFileName_0_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMemberInspector_DeclFileLine_1_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMemberInspector_ImplFileName_2_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMemberInspector_ImplFileLine_3_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMemberInspector",1761,G__TMemberInspector_wATMemberInspector_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTStorage(void) {
   /* TStorage */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TStorage));
   G__memfunc_setup("GetHeapBegin",1155,G__TStorage_GetHeapBegin_0_0,107,-1,G__defined_typename("ULong_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHeapEnd",949,G__TStorage_GetHeapEnd_1_0,107,-1,G__defined_typename("ULong_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFreeHook",1075,G__TStorage_GetFreeHook_2_0,89,-1,G__defined_typename("FreeHookFun_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFreeHookData",1453,G__TStorage_GetFreeHookData_3_0,89,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaxBlockSize",1484,G__TStorage_GetMaxBlockSize_4_0,104,-1,G__defined_typename("size_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReAlloc",674,G__TStorage_ReAlloc_5_0,89,-1,-1,0,2,3,1,0,
"Y - - 0 - vp h - 'size_t' 0 - size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReAlloc",674,G__TStorage_ReAlloc_6_0,89,-1,-1,0,3,3,1,0,
"Y - - 0 - vp h - 'size_t' 0 - size "
"h - 'size_t' 0 - oldsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ObjectAlloc",1090,G__TStorage_ObjectAlloc_7_0,89,-1,-1,0,1,3,1,0,"h - 'size_t' 0 - size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ObjectAlloc",1090,G__TStorage_ObjectAlloc_8_0,89,-1,-1,0,2,3,1,0,
"h - 'size_t' 0 - size Y - - 0 - vp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EnterStat",922,G__TStorage_EnterStat_9_0,121,-1,-1,0,2,3,1,0,
"h - 'size_t' 0 - size Y - - 0 - p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RemoveStat",1034,G__TStorage_RemoveStat_0_1,121,-1,-1,0,1,3,1,0,"Y - - 0 - p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("PrintStatistics",1592,G__TStorage_PrintStatistics_1_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMaxBlockSize",1496,G__TStorage_SetMaxBlockSize_2_1,121,-1,-1,0,1,3,1,0,"h - 'size_t' 0 - size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFreeHook",1087,G__TStorage_SetFreeHook_3_1,121,-1,-1,0,2,3,1,0,
"Y - 'FreeHookFun_t' 0 - func Y - - 0 - data",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReAllocHooks",1490,G__TStorage_SetReAllocHooks_4_1,121,-1,-1,0,2,3,1,0,
"Q - 'ReAllocFun_t' 0 - func1 Q - 'ReAllocCFun_t' 0 - func2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCustomNewDelete",1828,G__TStorage_SetCustomNewDelete_5_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EnableStatistics",1650,G__TStorage_EnableStatistics_6_1,121,-1,-1,0,2,3,1,0,
"i - - 0 -1 size i - - 0 -1 ix",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HasCustomNewDelete",1812,G__TStorage_HasCustomNewDelete_7_1,98,-1,G__defined_typename("Bool_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddToHeap",842,G__TStorage_AddToHeap_8_1,121,-1,-1,0,2,3,1,0,
"k - 'ULong_t' 0 - begin k - 'ULong_t' 0 - end",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsOnHeap",759,G__TStorage_IsOnHeap_9_1,98,-1,G__defined_typename("Bool_t"),0,1,3,1,0,"Y - - 0 - p",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TStorage_Class_0_2,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TStorage_Class_Name_1_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TStorage_Class_Version_2_2,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TStorage_Dictionary_3_2,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TStorage_IsA_4_2,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TStorage_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TStorage_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TStorage_DeclFileName_7_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TStorage_DeclFileLine_8_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TStorage_ImplFileName_9_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TStorage_ImplFileLine_0_3,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic default constructor
   G__memfunc_setup("TStorage",809,G__TStorage_TStorage_1_3,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TStorage),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TStorage",809,G__TStorage_TStorage_2_3,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TStorage),-1,0,1,1,1,0,"u 'TStorage' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TStorage",935,G__TStorage_wATStorage_3_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTimer(void) {
   /* TTimer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TTimer));
   G__memfunc_setup("TTimer",597,G__TTimer_TTimer_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TTimer),-1,0,2,1,1,0,
"l - 'Long_t' 0 - milliSec b - 'Bool_t' 0 kTRUE mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTimer",597,G__TTimer_TTimer_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TTimer),-1,0,3,1,1,0,
"U 'TObject' - 0 - obj l - 'Long_t' 0 - milliSec "
"b - 'Bool_t' 0 kTRUE mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTimer",597,G__TTimer_TTimer_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TTimer),-1,0,3,1,1,0,
"C - - 10 - command l - 'Long_t' 0 - milliSec "
"b - 'Bool_t' 0 kTRUE mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckTimer",991,G__TTimer_CheckTimer_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"u 'TTime' - 11 - now",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCommand",991,G__TTimer_GetCommand_5_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObject",887,G__TTimer_GetObject_6_0,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTime",687,G__TTimer_GetTime_7_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTimerID",942,G__TTimer_GetTimerID_8_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAbsTime",965,G__TTimer_GetAbsTime_9_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HasTimedOut",1095,G__TTimer_HasTimedOut_0_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsSync",601,G__TTimer_IsSync_1_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsAsync",698,G__TTimer_IsAsync_2_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Notify",633,G__TTimer_Notify_3_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Remove",622,G__TTimer_Remove_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TTimer_Reset_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCommand",1003,G__TTimer_SetCommand_6_1,121,-1,-1,0,1,1,1,0,"C - - 10 - command",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetObject",899,G__TTimer_SetObject_7_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - object",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTime",699,G__TTimer_SetTime_8_1,121,-1,-1,0,1,1,1,0,"l - 'Long_t' 0 - milliSec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTimerID",954,G__TTimer_SetTimerID_9_1,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 0 id",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TurnOn",614,G__TTimer_TurnOn_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TurnOff",708,G__TTimer_TurnOff_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TTimer_Class_2_2,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TTimer_Class_Name_3_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTimer_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTimer_Dictionary_5_2,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTimer_IsA_6_2,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTimer_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTimer_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTimer_DeclFileName_9_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTimer_DeclFileLine_0_3,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTimer_ImplFileName_1_3,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTimer_ImplFileLine_2_3,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TTimer",597,G__TTimer_TTimer_3_3,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TTimer),-1,0,1,1,1,0,"u 'TTimer' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTimer",723,G__TTimer_wATTimer_4_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTObject(void) {
   /* TObject */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TObject));
   G__memfunc_setup("MakeZombie",996,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TObject",683,G__TObject_TObject_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TObject",683,G__TObject_TObject_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,1,1,1,0,"u 'TObject' - 11 - object",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TObject_operatoreQ_3_0,117,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,1,1,1,1,0,"u 'TObject' - 11 - rhs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AppendPad",877,G__TObject_AppendPad_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TObject_Browse_6_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClassName",887,G__TObject_ClassName_7_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Clear",487,G__TObject_Clear_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Clone",497,G__TObject_Clone_9_0,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Close",502,G__TObject_Close_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Compare",711,G__TObject_Compare_1_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TObject_Copy_2_1,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - object",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Delete",595,G__TObject_Delete_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TObject_DistancetoPrimitive_4_1,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TObject_Draw_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawClass",900,G__TObject_DrawClass_6_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DrawClone",895,G__TObject_DrawClone_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Dump",406,G__TObject_Dump_8_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TObject_Execute_9_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - method C - - 10 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TObject_Execute_0_2,121,-1,-1,0,2,1,1,0,
"U 'TMethod' - 0 - method U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TObject_ExecuteEvent_1_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDrawOption",1319,G__TObject_GetDrawOption_2_2,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetUniqueID",1060,G__TObject_GetUniqueID_3_2,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetName",673,G__TObject_GetName_4_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetIconName",1066,G__TObject_GetIconName_5_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TObject_GetOption_6_2,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetObjectInfo",1283,G__TObject_GetObjectInfo_7_2,67,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TObject_GetTitle_8_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTimer",1101,G__TObject_HandleTimer_9_2,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TTimer' - 0 - timer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TObject_Hash_0_3,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InheritsFrom",1242,G__TObject_InheritsFrom_1_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 - classname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InheritsFrom",1242,G__TObject_InheritsFrom_2_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TClass' - 10 - cl",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Inspect",726,G__TObject_Inspect_3_3,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TObject_IsFolder_4_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsEqual",692,G__TObject_IsEqual_5_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsSortable",1016,G__TObject_IsSortable_6_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsModified",989,G__TObject_IsModified_7_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsOnHeap",759,G__TObject_IsOnHeap_8_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsZombie",802,G__TObject_IsZombie_9_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Notify",633,G__TObject_Notify_0_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TObject_ls_1_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Modified",801,G__TObject_Modified_2_4,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TObject_Paint_3_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Pop",303,G__TObject_Pop_4_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TObject_Print_5_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Read",380,G__TObject_Read_6_4,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TObject_RecursiveRemove_7_4,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TObject_SavePrimitive_8_4,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDrawOption",1331,G__TObject_SetDrawOption_9_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetUniqueID",1072,G__TObject_SetUniqueID_0_5,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - uid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StreamerInfo",1231,G__TObject_StreamerInfo_1_5,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UseCurrentStyle",1569,G__TObject_UseCurrentStyle_2_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,G__TObject_Write_3_5,121,-1,-1,0,3,1,1,0,
"C - - 10 0 name i - 'Int_t' 0 0 option "
"i - 'Int_t' 0 0 bufsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("operator new",1238,G__TObject_operatorsPnew_4_5,89,-1,-1,0,1,1,1,0,"h - 'size_t' 0 - sz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator new",1238,G__TObject_operatorsPnew_5_5,89,-1,-1,0,2,1,1,0,
"h - 'size_t' 0 - sz Y - - 0 - vp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator delete",1535,G__TObject_operatorsPdelete_6_5,121,-1,-1,0,1,1,1,0,"Y - - 0 - ptr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBit",587,G__TObject_SetBit_7_5,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - f b - 'Bool_t' 0 - set",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBit",587,G__TObject_SetBit_8_5,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResetBit",802,G__TObject_ResetBit_9_5,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TestBit",703,G__TObject_TestBit_0_6,98,-1,G__defined_typename("Bool_t"),0,1,1,1,8,"h - 'UInt_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InvertBit",919,G__TObject_InvertBit_1_6,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Warning",726,G__TObject_Warning_2_6,121,-1,-1,0,3,1,1,8,
"C - - 10 - method C - - 10 - msgfmt "
"i - - 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Error",522,G__TObject_Error_3_6,121,-1,-1,0,3,1,1,8,
"C - - 10 - method C - - 10 - msgfmt "
"i - - 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SysError",841,G__TObject_SysError_4_6,121,-1,-1,0,3,1,1,8,
"C - - 10 - method C - - 10 - msgfmt "
"i - - 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Fatal",488,G__TObject_Fatal_5_6,121,-1,-1,0,3,1,1,8,
"C - - 10 - method C - - 10 - msgfmt "
"i - - 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AbstractMethod",1429,G__TObject_AbstractMethod_6_6,121,-1,-1,0,1,1,1,8,"C - - 10 - method",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MayNotUse",901,G__TObject_MayNotUse_7_6,121,-1,-1,0,1,1,1,8,"C - - 10 - method",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DecreaseDirLevel",1587,G__TObject_DecreaseDirLevel_8_6,105,-1,G__defined_typename("Int_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDtorOnly",1115,G__TObject_GetDtorOnly_9_6,108,-1,G__defined_typename("Long_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetDtorOnly",1127,G__TObject_SetDtorOnly_0_7,121,-1,-1,0,1,3,1,0,"Y - - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDirLevel",1079,G__TObject_GetDirLevel_1_7,105,-1,G__defined_typename("Int_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetDirLevel",1091,G__TObject_SetDirLevel_2_7,121,-1,-1,0,1,3,1,0,"i - 'Int_t' 0 0 level",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObjectStat",1299,G__TObject_GetObjectStat_3_7,98,-1,G__defined_typename("Bool_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetObjectStat",1311,G__TObject_SetObjectStat_4_7,121,-1,-1,0,1,3,1,0,"b - 'Bool_t' 0 - stat",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IncreaseDirLevel",1601,G__TObject_IncreaseDirLevel_5_7,105,-1,G__defined_typename("Int_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IndentLevel",1114,G__TObject_IndentLevel_6_7,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TObject_Class_7_7,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TObject_Class_Name_8_7,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TObject_Class_Version_9_7,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TObject_Dictionary_0_8,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TObject_IsA_1_8,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TObject_ShowMembers_2_8,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TObject_Streamer_3_8,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TObject_DeclFileName_4_8,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TObject_DeclFileLine_5_8,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TObject_ImplFileName_6_8,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TObject_ImplFileLine_7_8,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TObject",809,G__TObject_wATObject_8_8,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMath(void) {
   /* TMath */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TMath));
   G__memfunc_setup("GamCf",446,(G__InterfaceMethod)NULL,100,-1,G__defined_typename("Double_t"),0,2,3,4,0,
"d - 'Double_t' 0 - a d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GamSer",575,(G__InterfaceMethod)NULL,100,-1,G__defined_typename("Double_t"),0,2,3,4,0,
"d - 'Double_t' 0 - a d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pi",185,G__TMath_Pi_2_0,100,-1,G__defined_typename("Double_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("E",69,G__TMath_E_3_0,100,-1,G__defined_typename("Double_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sin",298,G__TMath_Sin_4_0,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Cos",293,G__TMath_Cos_5_0,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Tan",291,G__TMath_Tan_6_0,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SinH",370,G__TMath_SinH_7_0,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CosH",365,G__TMath_CosH_8_0,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TanH",363,G__TMath_TanH_9_0,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ASin",363,G__TMath_ASin_0_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ACos",358,G__TMath_ACos_1_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ATan",356,G__TMath_ATan_2_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ATan2",406,G__TMath_ATan2_3_1,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - y d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ASinH",435,G__TMath_ASinH_4_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ACosH",430,G__TMath_ACosH_5_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ATanH",428,G__TMath_ATanH_6_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hypot",532,G__TMath_Hypot_7_1,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sqrt",426,G__TMath_Sqrt_8_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Ceil",381,G__TMath_Ceil_9_1,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Floor",514,G__TMath_Floor_0_2,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Exp",301,G__TMath_Exp_1_2,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Power",525,G__TMath_Power_2_2,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Log",290,G__TMath_Log_3_2,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Log2",340,G__TMath_Log2_4_2,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Log10",387,G__TMath_Log10_5_2,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Nint",409,G__TMath_Nint_6_2,105,-1,G__defined_typename("Int_t"),0,1,3,1,0,"f - 'Float_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Nint",409,G__TMath_Nint_7_2,105,-1,G__defined_typename("Int_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NextPrime",924,G__TMath_NextPrime_8_2,108,-1,G__defined_typename("Long_t"),0,1,3,1,0,"l - 'Long_t' 0 - x","least prime number greater than x",(void*)NULL,0);
   G__memfunc_setup("Sqrt",426,G__TMath_Sqrt_9_2,108,-1,G__defined_typename("Long_t"),0,1,3,1,0,"l - 'Long_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hypot",532,G__TMath_Hypot_0_3,108,-1,G__defined_typename("Long_t"),0,2,3,1,0,
"l - 'Long_t' 0 - x l - 'Long_t' 0 - y","sqrt(px*px + py*py)",(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TMath_Abs_1_3,115,-1,G__defined_typename("Short_t"),0,1,3,1,0,"s - 'Short_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TMath_Abs_2_3,105,-1,G__defined_typename("Int_t"),0,1,3,1,0,"i - 'Int_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TMath_Abs_3_3,108,-1,G__defined_typename("Long_t"),0,1,3,1,0,"l - 'Long_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TMath_Abs_4_3,102,-1,G__defined_typename("Float_t"),0,1,3,1,0,"f - 'Float_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Abs",278,G__TMath_Abs_5_3,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Even",398,G__TMath_Even_6_3,98,-1,G__defined_typename("Bool_t"),0,1,3,1,0,"l - 'Long_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Odd",279,G__TMath_Odd_7_3,98,-1,G__defined_typename("Bool_t"),0,1,3,1,0,"l - 'Long_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sign",401,G__TMath_Sign_8_3,115,-1,G__defined_typename("Short_t"),0,2,3,1,0,
"s - 'Short_t' 0 - a s - 'Short_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sign",401,G__TMath_Sign_9_3,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - a i - 'Int_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sign",401,G__TMath_Sign_0_4,108,-1,G__defined_typename("Long_t"),0,2,3,1,0,
"l - 'Long_t' 0 - a l - 'Long_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sign",401,G__TMath_Sign_1_4,102,-1,G__defined_typename("Float_t"),0,2,3,1,0,
"f - 'Float_t' 0 - a f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sign",401,G__TMath_Sign_2_4,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - a d - 'Double_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_3_4,115,-1,G__defined_typename("Short_t"),0,2,3,1,0,
"s - 'Short_t' 0 - a s - 'Short_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_4_4,114,-1,G__defined_typename("UShort_t"),0,2,3,1,0,
"r - 'UShort_t' 0 - a r - 'UShort_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_5_4,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - a i - 'Int_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_6_4,104,-1,G__defined_typename("UInt_t"),0,2,3,1,0,
"h - 'UInt_t' 0 - a h - 'UInt_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_7_4,108,-1,G__defined_typename("Long_t"),0,2,3,1,0,
"l - 'Long_t' 0 - a l - 'Long_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_8_4,107,-1,G__defined_typename("ULong_t"),0,2,3,1,0,
"k - 'ULong_t' 0 - a k - 'ULong_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_9_4,102,-1,G__defined_typename("Float_t"),0,2,3,1,0,
"f - 'Float_t' 0 - a f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Min",292,G__TMath_Min_0_5,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - a d - 'Double_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_1_5,115,-1,G__defined_typename("Short_t"),0,2,3,1,0,
"s - 'Short_t' 0 - a s - 'Short_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_2_5,114,-1,G__defined_typename("UShort_t"),0,2,3,1,0,
"r - 'UShort_t' 0 - a r - 'UShort_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_3_5,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - a i - 'Int_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_4_5,104,-1,G__defined_typename("UInt_t"),0,2,3,1,0,
"h - 'UInt_t' 0 - a h - 'UInt_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_5_5,108,-1,G__defined_typename("Long_t"),0,2,3,1,0,
"l - 'Long_t' 0 - a l - 'Long_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_6_5,107,-1,G__defined_typename("ULong_t"),0,2,3,1,0,
"k - 'ULong_t' 0 - a k - 'ULong_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_7_5,102,-1,G__defined_typename("Float_t"),0,2,3,1,0,
"f - 'Float_t' 0 - a f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Max",294,G__TMath_Max_8_5,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - a d - 'Double_t' 0 - b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMin",578,G__TMath_LocMin_9_5,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n S - 'Short_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMin",578,G__TMath_LocMin_0_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMin",578,G__TMath_LocMin_1_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMin",578,G__TMath_LocMin_2_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n D - 'Double_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMax",580,G__TMath_LocMax_3_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n S - 'Short_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMax",580,G__TMath_LocMax_4_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMax",580,G__TMath_LocMax_5_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LocMax",580,G__TMath_LocMax_6_6,105,-1,G__defined_typename("Int_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n D - 'Double_t' 0 - a",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Range",493,G__TMath_Range_7_6,115,-1,G__defined_typename("Short_t"),0,3,3,1,0,
"s - 'Short_t' 0 - lb s - 'Short_t' 0 - ub "
"s - 'Short_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Range",493,G__TMath_Range_8_6,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - lb i - 'Int_t' 0 - ub "
"i - 'Int_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Range",493,G__TMath_Range_9_6,108,-1,G__defined_typename("Long_t"),0,3,3,1,0,
"l - 'Long_t' 0 - lb l - 'Long_t' 0 - ub "
"l - 'Long_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Range",493,G__TMath_Range_0_7,107,-1,G__defined_typename("ULong_t"),0,3,3,1,0,
"k - 'ULong_t' 0 - lb k - 'ULong_t' 0 - ub "
"k - 'ULong_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Range",493,G__TMath_Range_1_7,100,-1,G__defined_typename("Double_t"),0,3,3,1,0,
"d - 'Double_t' 0 - lb d - 'Double_t' 0 - ub "
"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_2_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n S - 'Short_t' 0 - array "
"s - 'Short_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_3_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n S - 'Short_t' 2 - array "
"s - 'Short_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_4_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - array "
"i - 'Int_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_5_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 2 - array "
"i - 'Int_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_6_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - array "
"f - 'Float_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_7_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 2 - array "
"f - 'Float_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_8_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n D - 'Double_t' 0 - array "
"d - 'Double_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BinarySearch",1211,G__TMath_BinarySearch_9_7,105,-1,G__defined_typename("Int_t"),0,3,3,1,0,
"i - 'Int_t' 0 - n D - 'Double_t' 2 - array "
"d - 'Double_t' 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hash",388,G__TMath_Hash_0_8,107,-1,G__defined_typename("ULong_t"),0,2,3,1,0,
"Y - - 10 - txt i - 'Int_t' 0 - ntxt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hash",388,G__TMath_Hash_1_8,107,-1,G__defined_typename("ULong_t"),0,1,3,1,0,"C - - 10 - str",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sort",424,G__TMath_Sort_2_8,121,-1,-1,0,4,3,1,0,
"i - 'Int_t' 0 - n S - 'Short_t' 0 - a "
"I - 'Int_t' 0 - index b - 'Bool_t' 0 kTRUE down",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sort",424,G__TMath_Sort_3_8,121,-1,-1,0,4,3,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - a "
"I - 'Int_t' 0 - index b - 'Bool_t' 0 kTRUE down",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sort",424,G__TMath_Sort_4_8,121,-1,-1,0,4,3,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - a "
"I - 'Int_t' 0 - index b - 'Bool_t' 0 kTRUE down",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sort",424,G__TMath_Sort_5_8,121,-1,-1,0,4,3,1,0,
"i - 'Int_t' 0 - n D - 'Double_t' 0 - a "
"I - 'Int_t' 0 - index b - 'Bool_t' 0 kTRUE down",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Cross",522,G__TMath_Cross_6_8,70,-1,G__defined_typename("Float_t"),0,3,3,1,0,
"F - 'Float_t' 0 - v1 F - 'Float_t' 0 - v2 "
"F - 'Float_t' 0 - out","Calculate the Cross Product of two vectors",(void*)NULL,0);
   G__memfunc_setup("Normalize",945,G__TMath_Normalize_7_8,102,-1,G__defined_typename("Float_t"),0,1,3,1,0,"F - 'Float_t' 0 - v","normalize a vector",(void*)NULL,0);
   G__memfunc_setup("NormCross",934,G__TMath_NormCross_8_8,102,-1,G__defined_typename("Float_t"),0,3,3,1,0,
"F - 'Float_t' 0 - v1 F - 'Float_t' 0 - v2 "
"F - 'Float_t' 0 - out","Calculate the Normalized Cross Product of two vectors",(void*)NULL,0);
   G__memfunc_setup("Normal2Plane",1163,G__TMath_Normal2Plane_9_8,70,-1,G__defined_typename("Float_t"),0,4,3,1,0,
"F - 'Float_t' 0 - v1 F - 'Float_t' 0 - v2 "
"F - 'Float_t' 0 - v3 F - 'Float_t' 0 - normal","Calcualte a normal vector of a plane",(void*)NULL,0);
   G__memfunc_setup("Cross",522,G__TMath_Cross_0_9,68,-1,G__defined_typename("Double_t"),0,3,3,1,0,
"D - 'Double_t' 0 - v1 D - 'Double_t' 0 - v2 "
"D - 'Double_t' 0 - out","Calculate the Cross Product of two vectors",(void*)NULL,0);
   G__memfunc_setup("Erf",285,G__TMath_Erf_1_9,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Erfc",384,G__TMath_Erfc_2_9,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Gamma",483,G__TMath_Gamma_3_9,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Gamma",483,G__TMath_Gamma_4_9,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - a d - 'Double_t' 0 - x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Gaus",400,G__TMath_Gaus_5_9,100,-1,G__defined_typename("Double_t"),0,3,3,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 0 mean "
"d - 'Double_t' 0 1 sigma",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Landau",597,G__TMath_Landau_6_9,100,-1,G__defined_typename("Double_t"),0,3,3,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 0 mean "
"d - 'Double_t' 0 1 sigma",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LnGamma",669,G__TMath_LnGamma_7_9,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Normalize",945,G__TMath_Normalize_8_9,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"D - 'Double_t' 0 - v","normalize a vector",(void*)NULL,0);
   G__memfunc_setup("NormCross",934,G__TMath_NormCross_9_9,100,-1,G__defined_typename("Double_t"),0,3,3,1,0,
"D - 'Double_t' 0 - v1 D - 'Double_t' 0 - v2 "
"D - 'Double_t' 0 - out","Calculate the Normalized Cross Product of two vectors",(void*)NULL,0);
   G__memfunc_setup("Normal2Plane",1163,G__TMath_Normal2Plane_0_10,68,-1,G__defined_typename("Double_t"),0,4,3,1,0,
"D - 'Double_t' 0 - v1 D - 'Double_t' 0 - v2 "
"D - 'Double_t' 0 - v3 D - 'Double_t' 0 - normal","Calcualte a normal vector of a plane",(void*)NULL,0);
   G__memfunc_setup("Prob",403,G__TMath_Prob_1_10,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"d - 'Double_t' 0 - chi2 i - 'Int_t' 0 - ndf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BesselI",679,G__TMath_BesselI_2_10,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n d - 'Double_t' 0 - x","Compute integer order modified Bessel function I_n(x)",(void*)NULL,0);
   G__memfunc_setup("BesselK",681,G__TMath_BesselK_3_10,100,-1,G__defined_typename("Double_t"),0,2,3,1,0,
"i - 'Int_t' 0 - n d - 'Double_t' 0 - x","Compute integer order modified Bessel function K_n(x)",(void*)NULL,0);
   G__memfunc_setup("BesselI0",727,G__TMath_BesselI0_4_10,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x","Compute modified Bessel function I_0(x)",(void*)NULL,0);
   G__memfunc_setup("BesselK0",729,G__TMath_BesselK0_5_10,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x","Compute modified Bessel function K_0(x)",(void*)NULL,0);
   G__memfunc_setup("BesselI1",728,G__TMath_BesselI1_6_10,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x","Compute modified Bessel function I_1(x)",(void*)NULL,0);
   G__memfunc_setup("BesselK1",730,G__TMath_BesselK1_7_10,100,-1,G__defined_typename("Double_t"),0,1,3,1,0,"d - 'Double_t' 0 - x","Compute modified Bessel function K_1(x)",(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMath_Class_8_10,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TMath_Class_Name_9_10,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMath_Class_Version_0_11,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMath_Dictionary_1_11,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMath_IsA_2_11,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMath_ShowMembers_3_11,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMath_Streamer_4_11,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMath_DeclFileName_5_11,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMath_DeclFileLine_6_11,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMath_ImplFileName_7_11,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMath_ImplFileLine_8_11,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic default constructor
   G__memfunc_setup("TMath",478,G__TMath_TMath_9_11,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TMath),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TMath",478,G__TMath_TMath_0_12,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TMath),-1,0,1,1,1,0,"u 'TMath' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMath",604,G__TMath_wATMath_1_12,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTRegexp(void) {
   /* TRegexp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TRegexp));
   G__memfunc_setup("CopyPattern",1145,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"u 'TRegexp' - 11 - re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GenPattern",1016,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"C - - 10 - re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MakeWildcard",1192,(G__InterfaceMethod)NULL,67,-1,-1,0,1,1,4,1,"C - - 10 - re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRegexp",703,G__TRegexp_TRegexp_3_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRegexp),-1,0,2,1,1,0,
"C - - 10 - re b - 'Bool_t' 0 kFALSE wildcard",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRegexp",703,G__TRegexp_TRegexp_4_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRegexp),-1,0,1,1,1,0,"u 'TString' - 11 - re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRegexp",703,G__TRegexp_TRegexp_5_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRegexp),-1,0,1,1,1,0,"u 'TRegexp' - 11 - re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TRegexp_operatoreQ_7_0,117,G__get_linked_tagnum(&G__G__Base2LN_TRegexp),-1,1,1,1,1,0,"u 'TRegexp' - 11 - re",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TRegexp_operatoreQ_8_0,117,G__get_linked_tagnum(&G__G__Base2LN_TRegexp),-1,1,1,1,1,0,"u 'TString' - 11 - re","Recompiles pattern",(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TRegexp_operatoreQ_9_0,117,G__get_linked_tagnum(&G__G__Base2LN_TRegexp),-1,1,1,1,1,0,"C - - 10 - re","Recompiles pattern",(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TRegexp_Index_0_1,105,-1,G__defined_typename("Ssiz_t"),0,3,1,1,8,
"u 'TString' - 11 - str I - 'Ssiz_t' 0 - len "
"i - 'Ssiz_t' 0 0 start",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Status",644,G__TRegexp_Status_1_1,105,G__get_linked_tagnum(&G__G__Base2LN_TRegexpcLcLEStatVal),-1,0,0,1,1,0,"","Return & clear status",(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TRegexp_Class_2_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TRegexp_Class_Name_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRegexp_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRegexp_Dictionary_5_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRegexp_IsA_6_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRegexp_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRegexp_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TRegexp_DeclFileName_9_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRegexp_DeclFileLine_0_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRegexp_ImplFileName_1_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRegexp_ImplFileLine_2_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRegexp",829,G__TRegexp_wATRegexp_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTString(void) {
   /* TString */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TString));
   G__memfunc_setup("Clone",497,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,4,0,"","Make self a distinct copy",(void*)NULL,0);
   G__memfunc_setup("Clone",497,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"i - 'Ssiz_t' 0 - nc","Make self a distinct copy w. capacity nc",(void*)NULL,0);
   G__memfunc_setup("TString",715,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,4,1,2,0,
"C - - 10 - a1 i - 'Ssiz_t' 0 - n1 "
"C - - 10 - a2 i - 'Ssiz_t' 0 - n2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Pref",397,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Base2LN_TStringRef),-1,0,0,1,2,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AssertElement",1340,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,8,"i - 'Ssiz_t' 0 - nc","Index in range",(void*)NULL,0);
   G__memfunc_setup("Clobber",697,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Ssiz_t' 0 - nc","Remove old contents",(void*)NULL,0);
   G__memfunc_setup("Cow",297,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Do copy on write as needed",(void*)NULL,0);
   G__memfunc_setup("Cow",297,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Ssiz_t' 0 - nc","Do copy on write as needed",(void*)NULL,0);
   G__memfunc_setup("AdjustCapacity",1433,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Ssiz_t"),0,1,3,2,0,"i - 'Ssiz_t' 0 - nc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitChar",786,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"c - - 0 - c","Initialize from char",(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_0_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,0,1,1,0,"","Null string",(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_1_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,1,1,1,0,"i - 'Ssiz_t' 0 - ic","Suggested capacity",(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_2_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,1,1,1,0,"u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_3_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,1,1,1,0,"C - - 10 - s","Copy to embedded null",(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_4_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,2,1,1,0,
"C - - 10 - s i - 'Ssiz_t' 0 - n","Copy past any embedded nulls",(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_5_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,1,1,1,0,"c - - 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_6_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,2,1,1,0,
"c - - 0 - c i - 'Ssiz_t' 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TString",715,G__TString_TString_7_1,105,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,1,1,1,0,"u 'TSubString' - 11 - sub",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FillBuffer",993,G__TString_FillBuffer_9_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TString_ReadBuffer_0_2,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TString_Sizeof_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("operator const char*",1947,G__TString_operatorsPconstsPcharmU_2_2,67,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TString_operatoreQ_3_2,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"c - - 0 - s","Replace string",(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TString_operatoreQ_4_2,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"C - - 10 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TString_operatoreQ_5_2,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TString_operatoreQ_6_2,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"u 'TSubString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TString_operatorpLeQ_7_2,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"C - - 10 - s","Append string",(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TString_operatorpLeQ_8_2,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator[]",1060,G__TString_operatoroBcB_9_2,99,-1,-1,1,1,1,1,0,"i - 'Ssiz_t' 0 - n","Indexing with bounds checking",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_0_3,99,-1,-1,1,1,1,1,0,"i - 'Ssiz_t' 0 - n","Indexing with optional bounds checking",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_1_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,2,1,1,0,
"i - 'Ssiz_t' 0 - start i - 'Ssiz_t' 0 - len","Sub-string operator",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_2_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,1,1,1,0,"u 'TRegexp' - 11 - re","Match the RE",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_3_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,2,1,1,0,
"u 'TRegexp' - 11 - re i - 'Ssiz_t' 0 - start",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SubString",929,G__TString_SubString_4_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,3,1,1,0,
"C - - 10 - pat i - 'Ssiz_t' 0 0 start "
"i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator[]",1060,G__TString_operatoroBcB_5_3,99,-1,-1,0,1,1,1,8,"i - 'Ssiz_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_6_3,99,-1,-1,0,1,1,1,8,"i - 'Ssiz_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_7_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,2,1,1,8,
"i - 'Ssiz_t' 0 - start i - 'Ssiz_t' 0 - len",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_8_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,1,1,1,8,"u 'TRegexp' - 11 - re","Match the RE",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TString_operatoroPcP_9_3,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,2,1,1,8,
"u 'TRegexp' - 11 - re i - 'Ssiz_t' 0 - start",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SubString",929,G__TString_SubString_0_4,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,3,1,1,8,
"C - - 10 - pat i - 'Ssiz_t' 0 0 start "
"i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Strip",530,G__TString_Strip_1_4,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,2,1,1,8,
"i 'TString::EStripType' - 0 kTrailing s c - - 0 ' ' c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TString_Append_2_4,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"C - - 10 - cs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TString_Append_3_4,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"C - - 10 - cs i - 'Ssiz_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TString_Append_4_4,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TString_Append_5_4,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"u 'TString' - 11 - s i - 'Ssiz_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TString_Append_6_4,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"c - - 0 - c i - 'Ssiz_t' 0 1 rep","Append c rep times",(void*)NULL,0);
   G__memfunc_setup("BeginsWith",1012,G__TString_BeginsWith_7_4,98,-1,G__defined_typename("Bool_t"),0,2,1,1,8,
"C - - 10 - s i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BeginsWith",1012,G__TString_BeginsWith_8_4,98,-1,G__defined_typename("Bool_t"),0,2,1,1,8,
"u 'TString' - 11 - pat i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Capacity",814,G__TString_Capacity_9_4,105,-1,G__defined_typename("Ssiz_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Capacity",814,G__TString_Capacity_0_5,105,-1,G__defined_typename("Ssiz_t"),0,1,1,1,0,"i - 'Ssiz_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Chop",394,G__TString_Chop_1_5,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CompareTo",906,G__TString_CompareTo_2_5,105,-1,-1,0,2,1,1,8,
"C - - 10 - cs i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CompareTo",906,G__TString_CompareTo_3_5,105,-1,-1,0,2,1,1,8,
"u 'TString' - 11 - st i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Contains",831,G__TString_Contains_4_5,98,-1,G__defined_typename("Bool_t"),0,2,1,1,8,
"C - - 10 - pat i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Contains",831,G__TString_Contains_5_5,98,-1,G__defined_typename("Bool_t"),0,2,1,1,8,
"u 'TString' - 11 - pat i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TString_Copy_6_5,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Data",378,G__TString_Data_7_5,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EndsWith",806,G__TString_EndsWith_8_5,98,-1,G__defined_typename("Bool_t"),0,2,1,1,8,
"C - - 10 - pat i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("First",520,G__TString_First_9_5,105,-1,G__defined_typename("Ssiz_t"),0,1,1,1,8,"c - - 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("First",520,G__TString_First_0_6,105,-1,G__defined_typename("Ssiz_t"),0,1,1,1,8,"C - - 10 - cs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Hash",388,G__TString_Hash_1_6,104,-1,-1,0,1,1,1,8,"i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TString_Index_2_6,105,-1,G__defined_typename("Ssiz_t"),0,3,1,1,8,
"C - - 10 - pat i - 'Ssiz_t' 0 0 i "
"i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TString_Index_3_6,105,-1,G__defined_typename("Ssiz_t"),0,3,1,1,8,
"u 'TString' - 11 - s i - 'Ssiz_t' 0 0 i "
"i 'TString::ECaseCompare' - 0 kExact cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TString_Index_4_6,105,-1,G__defined_typename("Ssiz_t"),0,4,1,1,8,
"C - - 10 - pat i - 'Ssiz_t' 0 - patlen "
"i - 'Ssiz_t' 0 - i i 'TString::ECaseCompare' - 0 - cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TString_Index_5_6,105,-1,G__defined_typename("Ssiz_t"),0,4,1,1,8,
"u 'TString' - 11 - s i - 'Ssiz_t' 0 - patlen "
"i - 'Ssiz_t' 0 - i i 'TString::ECaseCompare' - 0 - cmp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TString_Index_6_6,105,-1,G__defined_typename("Ssiz_t"),0,2,1,1,8,
"u 'TRegexp' - 11 - pat i - 'Ssiz_t' 0 0 i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Index",504,G__TString_Index_7_6,105,-1,G__defined_typename("Ssiz_t"),0,3,1,1,8,
"u 'TRegexp' - 11 - pat I - 'Ssiz_t' 0 - ext "
"i - 'Ssiz_t' 0 0 i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Insert",629,G__TString_Insert_8_6,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"i - 'Ssiz_t' 0 - pos C - - 10 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Insert",629,G__TString_Insert_9_6,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,3,1,1,0,
"i - 'Ssiz_t' 0 - pos C - - 10 - s "
"i - 'Ssiz_t' 0 - extent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Insert",629,G__TString_Insert_0_7,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"i - 'Ssiz_t' 0 - pos u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Insert",629,G__TString_Insert_1_7,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,3,1,1,0,
"i - 'Ssiz_t' 0 - pos u 'TString' - 11 - s "
"i - 'Ssiz_t' 0 - extent",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsAscii",677,G__TString_IsAscii_2_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsNull",599,G__TString_IsNull_3_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Last",404,G__TString_Last_4_7,105,-1,G__defined_typename("Ssiz_t"),0,1,1,1,8,"c - - 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Length",610,G__TString_Length_5_7,105,-1,G__defined_typename("Ssiz_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Prepend",718,G__TString_Prepend_6_7,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"C - - 10 - cs","Prepend a character string",(void*)NULL,0);
   G__memfunc_setup("Prepend",718,G__TString_Prepend_7_7,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"C - - 10 - cs i - 'Ssiz_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Prepend",718,G__TString_Prepend_8_7,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Prepend",718,G__TString_Prepend_9_7,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"u 'TString' - 11 - s i - 'Ssiz_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Prepend",718,G__TString_Prepend_0_8,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"c - - 0 - c i - 'Ssiz_t' 0 1 rep","Prepend c rep times",(void*)NULL,0);
   G__memfunc_setup("ReadFile",764,G__TString_ReadFile_1_8,117,G__get_linked_tagnum(&G__G__Base2LN_istream),-1,1,1,1,1,0,"u 'istream' - 1 - str","Read to EOF or null character",(void*)NULL,0);
   G__memfunc_setup("ReadLine",772,G__TString_ReadLine_2_8,117,G__get_linked_tagnum(&G__G__Base2LN_istream),-1,1,2,1,1,0,
"u 'istream' - 1 - str b - 'Bool_t' 0 kTRUE skipWhite","Read to EOF or newline",(void*)NULL,0);
   G__memfunc_setup("ReadString",1011,G__TString_ReadString_3_8,117,G__get_linked_tagnum(&G__G__Base2LN_istream),-1,1,1,1,1,0,"u 'istream' - 1 - str","Read to EOF or null character",(void*)NULL,0);
   G__memfunc_setup("ReadToDelim",1066,G__TString_ReadToDelim_4_8,117,G__get_linked_tagnum(&G__G__Base2LN_istream),-1,1,2,1,1,0,
"u 'istream' - 1 - str c - - 0 '\\n' delim","Read to EOF or delimitor",(void*)NULL,0);
   G__memfunc_setup("ReadToken",893,G__TString_ReadToken_5_8,117,G__get_linked_tagnum(&G__G__Base2LN_istream),-1,1,1,1,1,0,"u 'istream' - 1 - str","Read separated by white space",(void*)NULL,0);
   G__memfunc_setup("Remove",622,G__TString_Remove_6_8,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,1,1,1,0,"i - 'Ssiz_t' 0 - pos","Remove pos to end of string",(void*)NULL,0);
   G__memfunc_setup("Remove",622,G__TString_Remove_7_8,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"i - 'Ssiz_t' 0 - pos i - 'Ssiz_t' 0 - n","Remove n chars starting at pos",(void*)NULL,0);
   G__memfunc_setup("Replace",700,G__TString_Replace_8_8,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,3,1,1,0,
"i - 'Ssiz_t' 0 - pos i - 'Ssiz_t' 0 - n "
"C - - 10 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Replace",700,G__TString_Replace_9_8,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,4,1,1,0,
"i - 'Ssiz_t' 0 - pos i - 'Ssiz_t' 0 - n "
"C - - 10 - s i - 'Ssiz_t' 0 - ns",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Replace",700,G__TString_Replace_0_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,3,1,1,0,
"i - 'Ssiz_t' 0 - pos i - 'Ssiz_t' 0 - n "
"u 'TString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Replace",700,G__TString_Replace_1_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,4,1,1,0,
"i - 'Ssiz_t' 0 - pos i - 'Ssiz_t' 0 - n1 "
"u 'TString' - 11 - s i - 'Ssiz_t' 0 - n2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReplaceAll",981,G__TString_ReplaceAll_2_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"u 'TString' - 11 - s1 u 'TString' - 11 - s2","Find&Replace all s1 with s2 if any",(void*)NULL,0);
   G__memfunc_setup("ReplaceAll",981,G__TString_ReplaceAll_3_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"u 'TString' - 11 - s1 C - - 10 - s2","Find&Replace all s1 with s2 if any",(void*)NULL,0);
   G__memfunc_setup("ReplaceAll",981,G__TString_ReplaceAll_4_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"C - - 10 - s1 u 'TString' - 11 - s2","Find&Replace all s1 with s2 if any",(void*)NULL,0);
   G__memfunc_setup("ReplaceAll",981,G__TString_ReplaceAll_5_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,2,1,1,0,
"C - - 10 - s1 C - - 10 - s2","Find&Replace all s1 with s2 if any",(void*)NULL,0);
   G__memfunc_setup("ReplaceAll",981,G__TString_ReplaceAll_6_9,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,4,1,1,0,
"C - - 10 - s1 i - 'Ssiz_t' 0 - ls1 "
"C - - 10 - s2 i - 'Ssiz_t' 0 - ls2","Find&Replace all s1 with s2 if any",(void*)NULL,0);
   G__memfunc_setup("Resize",626,G__TString_Resize_7_9,121,-1,-1,0,1,1,1,0,"i - 'Ssiz_t' 0 - n","Truncate or add blanks as necessary",(void*)NULL,0);
   G__memfunc_setup("Strip",530,G__TString_Strip_8_9,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,2,1,1,0,
"i 'TString::EStripType' - 0 kTrailing s c - - 0 ' ' c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ToLower",716,G__TString_ToLower_9_9,121,-1,-1,0,0,1,1,0,"","Change self to lower-case",(void*)NULL,0);
   G__memfunc_setup("ToUpper",719,G__TString_ToUpper_0_10,121,-1,-1,0,0,1,1,0,"","Change self to upper-case",(void*)NULL,0);
   G__memfunc_setup("InitialCapacity",1528,G__TString_InitialCapacity_1_10,105,-1,G__defined_typename("Ssiz_t"),0,1,3,1,0,"i - 'Ssiz_t' 0 15 ic","Initial allocation capacity",(void*)NULL,0);
   G__memfunc_setup("MaxWaste",810,G__TString_MaxWaste_2_10,105,-1,G__defined_typename("Ssiz_t"),0,1,3,1,0,"i - 'Ssiz_t' 0 15 mw","Max empty space before reclaim",(void*)NULL,0);
   G__memfunc_setup("ResizeIncrement",1559,G__TString_ResizeIncrement_3_10,105,-1,G__defined_typename("Ssiz_t"),0,1,3,1,0,"i - 'Ssiz_t' 0 16 ri","Resizing increment",(void*)NULL,0);
   G__memfunc_setup("GetInitialCapacity",1816,G__TString_GetInitialCapacity_4_10,105,-1,G__defined_typename("Ssiz_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetResizeIncrement",1847,G__TString_GetResizeIncrement_5_10,105,-1,G__defined_typename("Ssiz_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMaxWaste",1098,G__TString_GetMaxWaste_6_10,105,-1,G__defined_typename("Ssiz_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TString_Class_7_10,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TString_Class_Name_8_10,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TString_Class_Version_9_10,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TString_Dictionary_0_11,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TString_IsA_1_11,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TString_ShowMembers_2_11,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TString_Streamer_3_11,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TString_DeclFileName_4_11,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TString_DeclFileLine_5_11,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TString_ImplFileName_6_11,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TString_ImplFileLine_7_11,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TString",841,G__TString_wATString_8_11,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTStringLong(void) {
   /* TStringLong */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TStringLong));
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,0,1,1,0,"","Null string",(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,1,1,1,0,"i - 'Ssiz_t' 0 - ic","Suggested capacity",(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,1,1,1,0,"u 'TString' - 11 - s","Copy constructor",(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_3_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,1,1,1,0,"C - - 10 - s","Copy to embedded null",(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_4_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,2,1,1,0,
"C - - 10 - s i - 'Ssiz_t' 0 - n","Copy past any embedded nulls",(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_5_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,1,1,1,0,"c - - 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_6_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,2,1,1,0,
"c - - 0 - c i - 'Ssiz_t' 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_7_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,1,1,1,0,"u 'TSubString' - 11 - sub",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FillBuffer",993,G__TStringLong_FillBuffer_9_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TStringLong_ReadBuffer_0_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TStringLong_Sizeof_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TStringLong_Class_2_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TStringLong_Class_Name_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TStringLong_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TStringLong_Dictionary_5_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TStringLong_IsA_6_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TStringLong_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TStringLong_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TStringLong_DeclFileName_9_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TStringLong_DeclFileLine_0_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TStringLong_ImplFileName_1_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TStringLong_ImplFileLine_2_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TStringLong",1115,G__TStringLong_TStringLong_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TStringLong),-1,0,1,1,1,0,"u 'TStringLong' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TStringLong",1241,G__TStringLong_wATStringLong_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSubString(void) {
   /* TSubString */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TSubString));
   G__memfunc_setup("TSubString",1013,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,3,1,4,0,
"u 'TString' - 11 - s i - 'Ssiz_t' 0 - start "
"i - 'Ssiz_t' 0 - len",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SubStringError",1451,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,8,
"i - 'Ssiz_t' 0 - - i - 'Ssiz_t' 0 - - "
"i - 'Ssiz_t' 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AssertElement",1340,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,8,"i - 'Ssiz_t' 0 - i","Verifies i is valid index",(void*)NULL,0);
   G__memfunc_setup("TSubString",1013,G__TSubString_TSubString_3_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,0,1,1,1,0,"u 'TSubString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TSubString_operatoreQ_4_0,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,1,1,1,1,0,"C - - 10 - s","Assignment to char*",(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TSubString_operatoreQ_5_0,117,G__get_linked_tagnum(&G__G__Base2LN_TSubString),-1,1,1,1,1,0,"u 'TString' - 11 - s","Assignment to TString",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TSubString_operatoroPcP_6_0,99,-1,-1,1,1,1,1,0,"i - 'Ssiz_t' 0 - i","Index with optional bounds checking",(void*)NULL,0);
   G__memfunc_setup("operator[]",1060,G__TSubString_operatoroBcB_7_0,99,-1,-1,1,1,1,1,0,"i - 'Ssiz_t' 0 - i","Index with bounds checking",(void*)NULL,0);
   G__memfunc_setup("operator()",957,G__TSubString_operatoroPcP_8_0,99,-1,-1,0,1,1,1,8,"i - 'Ssiz_t' 0 - i","Index with optional bounds checking",(void*)NULL,0);
   G__memfunc_setup("operator[]",1060,G__TSubString_operatoroBcB_9_0,99,-1,-1,0,1,1,1,8,"i - 'Ssiz_t' 0 - i","Index with bounds checking",(void*)NULL,0);
   G__memfunc_setup("Data",378,G__TSubString_Data_0_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Length",610,G__TSubString_Length_1_1,105,-1,G__defined_typename("Ssiz_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Start",526,G__TSubString_Start_2_1,105,-1,G__defined_typename("Ssiz_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ToLower",716,G__TSubString_ToLower_3_1,121,-1,-1,0,0,1,1,0,"","Convert self to lower-case",(void*)NULL,0);
   G__memfunc_setup("ToUpper",719,G__TSubString_ToUpper_4_1,121,-1,-1,0,0,1,1,0,"","Convert self to upper-case",(void*)NULL,0);
   G__memfunc_setup("IsNull",599,G__TSubString_IsNull_5_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator!",909,G__TSubString_operatornO_6_1,105,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSubString",1139,G__TSubString_wATSubString_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTNamed(void) {
   /* TNamed */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TNamed));
   G__memfunc_setup("TNamed",569,G__TNamed_TNamed_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TNamed),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNamed",569,G__TNamed_TNamed_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TNamed),-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNamed",569,G__TNamed_TNamed_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TNamed),-1,0,2,1,1,0,
"u 'TString' - 11 - name u 'TString' - 11 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TNamed",569,G__TNamed_TNamed_3_0,105,G__get_linked_tagnum(&G__G__Base2LN_TNamed),-1,0,1,1,1,0,"u 'TNamed' - 11 - named",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TNamed_operatoreQ_4_0,117,G__get_linked_tagnum(&G__G__Base2LN_TNamed),-1,1,1,1,1,0,"u 'TNamed' - 11 - rhs",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TNamed_Compare_6_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TNamed_Copy_7_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - named",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TNamed_FillBuffer_8_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetName",673,G__TNamed_GetName_9_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitle",802,G__TNamed_GetTitle_0_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TNamed_Hash_1_1,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsSortable",1016,G__TNamed_IsSortable_2_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetName",685,G__TNamed_SetName_3_1,121,-1,-1,0,1,1,1,0,"C - - 10 - name","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TNamed_SetObject_4_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTitle",814,G__TNamed_SetTitle_5_1,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" title","*MENU*",(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TNamed_ls_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TNamed_Print_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TNamed_Sizeof_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TNamed_Class_9_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TNamed_Class_Name_0_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TNamed_Class_Version_1_2,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TNamed_Dictionary_2_2,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TNamed_IsA_3_2,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TNamed_ShowMembers_4_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TNamed_Streamer_5_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TNamed_DeclFileName_6_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TNamed_DeclFileLine_7_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TNamed_ImplFileName_8_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TNamed_ImplFileLine_9_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TNamed",695,G__TNamed_wATNamed_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTKey(void) {
   /* TKey */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TKey));
   G__memfunc_setup("Create",596,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - nbytes",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Read",380,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TKey",381,G__TKey_TKey_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKey),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TKey",381,G__TKey_TKey_3_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKey),-1,0,4,1,1,0,
"C - - 10 - name C - - 10 - title "
"U 'TClass' - 0 - cl i - 'Int_t' 0 - nbytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TKey",381,G__TKey_TKey_4_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKey),-1,0,4,1,1,0,
"u 'TString' - 11 - name u 'TString' - 11 - title "
"U 'TClass' - 0 - cl i - 'Int_t' 0 - nbytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TKey",381,G__TKey_TKey_5_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKey),-1,0,3,1,1,0,
"U 'TObject' - 0 - obj C - - 10 - name "
"i - 'Int_t' 10 - bufsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TKey",381,G__TKey_TKey_6_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKey),-1,0,2,1,1,0,
"i - 'Seek_t' 0 - pointer i - 'Int_t' 0 - nbytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TKey_Browse_8_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Delete",595,G__TKey_Delete_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteBuffer",1197,G__TKey_DeleteBuffer_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TKey_FillBuffer_1_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetClassName",1175,G__TKey_GetClassName_2_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBuffer",890,G__TKey_GetBuffer_3_1,67,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBufferRef",1175,G__TKey_GetBufferRef_4_1,85,G__get_linked_tagnum(&G__G__Base2LN_TBuffer),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCycle",784,G__TKey_GetCycle_5_1,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetKeep",677,G__TKey_GetKeep_6_1,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetKeylen",904,G__TKey_GetKeylen_7_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNbytes",917,G__TKey_GetNbytes_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObjlen",890,G__TKey_GetObjlen_9_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersion",1030,G__TKey_GetVersion_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSeekKey",977,G__TKey_GetSeekKey_1_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekPdir",1079,G__TKey_GetSeekPdir_2_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TKey_IsFolder_3_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Keep",389,G__TKey_Keep_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TKey_ls_5_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TKey_Print_6_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Read",380,G__TKey_Read_7_2,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadObj",663,G__TKey_ReadObj_8_2,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TKey_ReadBuffer_9_2,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadFile",764,G__TKey_ReadFile_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBuffer",902,G__TKey_SetBuffer_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TKey_Sizeof_2_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteFile",907,G__TKey_WriteFile_3_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 cycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TKey_Class_4_3,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TKey_Class_Name_5_3,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TKey_Class_Version_6_3,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TKey_Dictionary_7_3,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TKey_IsA_8_3,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TKey_ShowMembers_9_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TKey_Streamer_0_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TKey_DeclFileName_1_4,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TKey_DeclFileLine_2_4,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TKey_ImplFileName_3_4,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TKey_ImplFileLine_4_4,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TKey",381,G__TKey_TKey_5_4,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TKey),-1,0,1,1,1,0,"u 'TKey' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TKey",507,G__TKey_wATKey_6_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTROOT(void) {
   /* TROOT */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TROOT));
   G__memfunc_setup("InitSystem",1049,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Operating System interface",(void*)NULL,0);
   G__memfunc_setup("InitThreads",1119,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"","Initialize threads library",(void*)NULL,0);
   G__memfunc_setup("operator new",1238,(G__InterfaceMethod)NULL,89,-1,-1,0,1,1,2,0,"h - 'size_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TROOT_Browse_6_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClassSaved",1001,G__TROOT_ClassSaved_7_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindObject",984,G__TROOT_FindObject_8_0,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindObject",984,G__TROOT_FindObject_9_0,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,2,1,1,0,
"C - - 10 - name Y - - 1 - where",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindObjectClassName",1871,G__TROOT_FindObjectClassName_0_1,67,-1,-1,0,1,1,1,9,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ForceStyle",1024,G__TROOT_ForceStyle_1_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE force",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FromPopUp",904,G__TROOT_FromPopUp_2_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetApplication",1428,G__TROOT_GetApplication_3_1,85,G__get_linked_tagnum(&G__G__Base2LN_TApplication),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClass",790,G__TROOT_GetClass_4_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,2,1,1,0,
"C - - 10 - name b - 'Bool_t' 0 kTRUE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetColor",799,G__TROOT_GetColor_5_1,85,G__get_linked_tagnum(&G__G__Base2LN_TColor),-1,0,1,1,1,0,"i - 'Int_t' 0 - color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDefCanvasName",1548,G__TROOT_GetDefCanvasName_6_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEditHistograms",1735,G__TROOT_GetEditHistograms_7_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEditorMode",1292,G__TROOT_GetEditorMode_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetForceStyle",1312,G__TROOT_GetForceStyle_9_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMakeDefCanvas",1545,G__TROOT_GetMakeDefCanvas_0_2,89,-1,G__defined_typename("VoidFuncPtr_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersionDate",1412,G__TROOT_GetVersionDate_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersionTime",1429,G__TROOT_GetVersionTime_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersionInt",1329,G__TROOT_GetVersionInt_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersion",1030,G__TROOT_GetVersion_4_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfClasses",1599,G__TROOT_GetListOfClasses_5_2,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfColors",1507,G__TROOT_GetListOfColors_6_2,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfTypes",1414,G__TROOT_GetListOfTypes_7_2,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfGlobals",1589,G__TROOT_GetListOfGlobals_8_2,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfGlobalFunctions",2427,G__TROOT_GetListOfGlobalFunctions_9_2,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfFiles",1380,G__TROOT_GetListOfFiles_0_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfMappedFiles",1979,G__TROOT_GetListOfMappedFiles_1_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfSockets",1613,G__TROOT_GetListOfSockets_2_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfCanvases",1701,G__TROOT_GetListOfCanvases_3_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfStyles",1525,G__TROOT_GetListOfStyles_4_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfFunctions",1834,G__TROOT_GetListOfFunctions_5_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfGeometries",1925,G__TROOT_GetListOfGeometries_6_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfBrowsers",1736,G__TROOT_GetListOfBrowsers_7_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfSpecials",1701,G__TROOT_GetListOfSpecials_8_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfMessageHandlers",2407,G__TROOT_GetListOfMessageHandlers_9_3,85,G__get_linked_tagnum(&G__G__Base2LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfBrowsables",1925,G__TROOT_GetListOfBrowsables_0_4,85,G__get_linked_tagnum(&G__G__Base2LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetType",706,G__TROOT_GetType_1_4,85,G__get_linked_tagnum(&G__G__Base2LN_TDataType),-1,0,2,1,1,0,
"C - - 10 - name b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFile",672,G__TROOT_GetFile_2_4,85,G__get_linked_tagnum(&G__G__Base2LN_TFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFile",672,G__TROOT_GetFile_3_4,85,G__get_linked_tagnum(&G__G__Base2LN_TFile),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStyle",817,G__TROOT_GetStyle_4_4,85,G__get_linked_tagnum(&G__G__Base2LN_TStyle),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFunction",1126,G__TROOT_GetFunction_5_4,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobal",881,G__TROOT_GetGlobal_6_4,85,G__get_linked_tagnum(&G__G__Base2LN_TGlobal),-1,0,2,1,1,0,
"C - - 10 - name b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobal",881,G__TROOT_GetGlobal_7_4,85,G__get_linked_tagnum(&G__G__Base2LN_TGlobal),-1,0,2,1,1,0,
"U 'TObject' - 0 - obj b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobalFunction",1719,G__TROOT_GetGlobalFunction_8_4,85,G__get_linked_tagnum(&G__G__Base2LN_TFunction),-1,0,3,1,1,0,
"C - - 10 - name C - - 10 0 params "
"b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobalFunctionWithPrototype",3113,G__TROOT_GetGlobalFunctionWithPrototype_9_4,85,G__get_linked_tagnum(&G__G__Base2LN_TFunction),-1,0,3,1,1,0,
"C - - 10 - name C - - 10 0 proto "
"b - 'Bool_t' 0 kFALSE load",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGeometry",1132,G__TROOT_GetGeometry_0_5,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSelectedPrimitive",2050,G__TROOT_GetSelectedPrimitive_1_5,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSelectedPad",1374,G__TROOT_GetSelectedPad_2_5,85,G__get_linked_tagnum(&G__G__Base2LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNclasses",1116,G__TROOT_GetNclasses_3_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNtypes",931,G__TROOT_GetNtypes_4_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Idle",382,G__TROOT_Idle_5_5,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - idleTimeInSec C - - 10 0 command",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IgnoreInclude",1320,G__TROOT_IgnoreInclude_6_5,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 10 - fname C - - 10 - expandedfname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsBatch",670,G__TROOT_IsBatch_7_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsFolder",792,G__TROOT_IsFolder_8_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsInterrupted",1362,G__TROOT_IsInterrupted_9_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsLineProcessing",1633,G__TROOT_IsLineProcessing_0_6,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TROOT_ls_1_6,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadClass",886,G__TROOT_LoadClass_2_6,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 10 - classname C - - 10 - libname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("LoadMacro",882,G__TROOT_LoadMacro_3_6,121,-1,-1,0,1,1,1,0,"C - - 10 - filename",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Macro",498,G__TROOT_Macro_4_6,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 10 - filename",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Message",709,G__TROOT_Message_5_6,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - id U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MustClean",908,G__TROOT_MustClean_6_6,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessLine",1127,G__TROOT_ProcessLine_7_6,121,-1,-1,0,1,1,1,0,"C - - 10 - line",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessLineSync",1540,G__TROOT_ProcessLineSync_8_6,121,-1,-1,0,1,1,1,0,"C - - 10 - line",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessLineFast",1525,G__TROOT_ProcessLineFast_9_6,108,-1,G__defined_typename("Long_t"),0,1,1,1,0,"C - - 10 - line",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Proof",518,G__TROOT_Proof_0_7,121,-1,-1,0,1,1,1,0,"C - - 10 \"proof\" cluster",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadingBasket",1300,G__TROOT_ReadingBasket_1_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TROOT_Reset_2_7,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SaveContext",1140,G__TROOT_SaveContext_3_7,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetApplication",1440,G__TROOT_SetApplication_4_7,121,-1,-1,0,1,1,1,0,"U 'TApplication' - 0 - app",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBatch",782,G__TROOT_SetBatch_5_7,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE batch",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetDefCanvasName",1560,G__TROOT_SetDefCanvasName_6_7,121,-1,-1,0,1,1,1,0,"C - - 10 \"c1\" name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetEditHistograms",1747,G__TROOT_SetEditHistograms_7_7,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetEditorMode",1304,G__TROOT_SetEditorMode_8_7,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFromPopUp",1204,G__TROOT_SetFromPopUp_9_7,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetInterrupt",1273,G__TROOT_SetInterrupt_0_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLineIsProcessing",1933,G__TROOT_SetLineIsProcessing_1_8,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLineHasBeenProcessed",2290,G__TROOT_SetLineHasBeenProcessed_2_8,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReadingBasket",1600,G__TROOT_SetReadingBasket_3_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMustClean",1208,G__TROOT_SetMustClean_4_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSelectedPrimitive",2062,G__TROOT_SetSelectedPrimitive_5_8,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSelectedPad",1386,G__TROOT_SetSelectedPad_6_8,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - pad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStyle",829,G__TROOT_SetStyle_7_8,121,-1,-1,0,1,1,1,0,"C - - 10 \"Default\" stylename",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Time",399,G__TROOT_Time_8_8,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 casetime",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Timer",513,G__TROOT_Timer_9_8,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMacroPath",1183,G__TROOT_GetMacroPath_0_9,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Initialized",1142,G__TROOT_Initialized_1_9,98,-1,G__defined_typename("Bool_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMakeDefCanvas",1557,G__TROOT_SetMakeDefCanvas_2_9,121,-1,-1,0,1,3,1,0,"Y - 'VoidFuncPtr_t' 0 - makecanvas",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TROOT_Class_3_9,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TROOT_Class_Name_4_9,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TROOT_Class_Version_5_9,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TROOT_Dictionary_6_9,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TROOT_IsA_7_9,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TROOT_ShowMembers_8_9,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TROOT_Streamer_9_9,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TROOT_DeclFileName_0_10,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TROOT_DeclFileLine_1_10,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TROOT_ImplFileName_2_10,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TROOT_ImplFileLine_3_10,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TROOT",534,G__TROOT_wATROOT_4_10,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTRealData(void) {
   /* TRealData */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TRealData));
   G__memfunc_setup("TRealData",850,G__TRealData_TRealData_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRealData),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TRealData",850,G__TRealData_TRealData_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRealData),-1,0,3,1,1,0,
"C - - 10 - name i - 'Int_t' 0 - offset "
"U 'TDataMember' - 0 - datamember",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TRealData_GetName_3_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDataMember",1266,G__TRealData_GetDataMember_4_0,85,G__get_linked_tagnum(&G__G__Base2LN_TDataMember),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetThisOffset",1311,G__TRealData_GetThisOffset_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteRealData",1289,G__TRealData_WriteRealData_6_0,121,-1,-1,0,2,1,1,0,
"Y - - 0 - pointer C - - 1 - buffer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TRealData_Class_7_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TRealData_Class_Name_8_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRealData_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRealData_Dictionary_0_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRealData_IsA_1_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRealData_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRealData_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TRealData_DeclFileName_4_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRealData_DeclFileLine_5_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRealData_ImplFileName_6_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRealData_ImplFileLine_7_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TRealData",850,G__TRealData_TRealData_8_1,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TRealData),-1,0,1,1,1,0,"u 'TRealData' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRealData",976,G__TRealData_wATRealData_9_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTExec(void) {
   /* TExec */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TExec));
   G__memfunc_setup("TExec",473,G__TExec_TExec_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TExec),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TExec",473,G__TExec_TExec_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TExec),-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - command",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TExec",473,G__TExec_TExec_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TExec),-1,0,1,1,1,0,"u 'TExec' - 11 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Exec",389,G__TExec_Exec_4_0,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" command",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TExec_Paint_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SavePrimitive",1352,G__TExec_SavePrimitive_6_0,121,-1,-1,0,2,1,1,0,
"u 'ofstream' - 1 - out C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TExec_Class_7_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TExec_Class_Name_8_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TExec_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TExec_Dictionary_0_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TExec_IsA_1_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TExec_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TExec_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TExec_DeclFileName_4_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TExec_DeclFileLine_5_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TExec_ImplFileName_6_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TExec_ImplFileLine_7_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TExec",599,G__TExec_wATExec_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFree(void) {
   /* TFree */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TFree));
   G__memfunc_setup("TFree",470,G__TFree_TFree_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TFree),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFree",470,G__TFree_TFree_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TFree),-1,0,2,1,1,0,
"i - 'Seek_t' 0 - first i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddFree",651,G__TFree_AddFree_3_0,85,G__get_linked_tagnum(&G__G__Base2LN_TFree),-1,0,2,1,1,0,
"i - 'Seek_t' 0 - first i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FillBuffer",993,G__TFree_FillBuffer_4_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBestFree",1072,G__TFree_GetBestFree_5_0,85,G__get_linked_tagnum(&G__G__Base2LN_TFree),-1,0,1,1,1,0,"i - 'Int_t' 0 - nbytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFirst",808,G__TFree_GetFirst_6_0,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLast",692,G__TFree_GetLast_7_0,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadBuffer",982,G__TFree_ReadBuffer_8_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFirst",820,G__TFree_SetFirst_9_0,121,-1,-1,0,1,1,1,0,"i - 'Seek_t' 0 - first",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLast",704,G__TFree_SetLast_0_1,121,-1,-1,0,1,1,1,0,"i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof",624,G__TFree_Sizeof_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFree_Class_2_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TFree_Class_Name_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFree_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFree_Dictionary_5_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFree_IsA_6_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFree_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFree_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFree_DeclFileName_9_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFree_DeclFileLine_0_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFree_ImplFileName_1_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFree_ImplFileLine_2_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TFree",470,G__TFree_TFree_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TFree),-1,0,1,1,1,0,"u 'TFree' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TFree",596,G__TFree_wATFree_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMapFile(void) {
   /* TMapFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapFile));
   G__memfunc_setup("TMapFile",754,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMapFile",754,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,0,5,1,2,0,
"C - - 10 - name C - - 10 - title "
"C - 'Option_t' 0 - option i - 'Int_t' 0 - size "
"U 'TMapFile' - 1 - newMapFile",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMapFile",754,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,0,2,1,2,0,
"u 'TMapFile' - 11 - f l - 'Long_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"u 'TMapFile' - 11 - rhs","not implemented",(void*)NULL,0);
   G__memfunc_setup("FindShadowMapFile",1669,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitDirectory",1353,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Remove",622,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,2,1,2,0,
"U 'TObject' - 0 - obj b - 'Bool_t' 0 - lock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Remove",622,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,2,1,2,0,
"C - - 10 - name b - 'Bool_t' 0 - lock",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SumBuffer",911,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - bufsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBestBuffer",1288,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateSemaphore",1528,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 0 pid",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AcquireSemaphore",1646,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReleaseSemaphore",1637,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeleteSemaphore",1527,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapToAddress",1191,(G__InterfaceMethod)NULL,89,-1,-1,0,0,3,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator delete",1535,G__TMapFile_operatorsPdelete_6_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - vp",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TMapFile_Browse_7_1,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Close",502,G__TMapFile_Close_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBaseAddr",1046,G__TMapFile_GetBaseAddr_9_1,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBreakval",1096,G__TMapFile_GetBreakval_0_2,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDirectory",1237,G__TMapFile_GetDirectory_1_2,85,G__get_linked_tagnum(&G__G__Base2LN_TDirectory),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFd",458,G__TMapFile_GetFd_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMmallocDesc",1380,G__TMapFile_GetMmallocDesc_3_2,89,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TMapFile_GetName_4_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSize",699,G__TMapFile_GetSize_5_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOption",921,G__TMapFile_GetOption_6_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitle",802,G__TMapFile_GetTitle_7_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFirst",808,G__TMapFile_GetFirst_8_2,85,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLast",692,G__TMapFile_GetLast_9_2,85,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsFolder",792,G__TMapFile_IsFolder_0_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsWritable",1014,G__TMapFile_IsWritable_1_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("OrgAddress",1006,G__TMapFile_OrgAddress_2_3,89,-1,-1,0,1,1,1,8,"Y - - 0 - addr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TMapFile_Print_3_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TMapFile_ls_4_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TMapFile_cd_5_3,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 0 path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TMapFile_Add_6_3,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj C - - 10 \"\" name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Update",611,G__TMapFile_Update_7_3,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 0 obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Remove",622,G__TMapFile_Remove_8_3,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Remove",622,G__TMapFile_Remove_9_3,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RemoveAll",903,G__TMapFile_RemoveAll_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TMapFile_Get_1_4,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,2,1,1,0,
"C - - 10 - name U 'TObject' - 0 0 retObj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Create",596,G__TMapFile_Create_2_4,85,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,0,4,3,1,0,
"C - - 10 - name C - 'Option_t' 0 \"READ\" option "
"i - 'Int_t' 0 kDefaultMapSize size C - - 10 \"\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WhichMapFile",1169,G__TMapFile_WhichMapFile_3_4,85,G__get_linked_tagnum(&G__G__Base2LN_TMapFile),-1,0,1,3,1,0,"Y - - 0 - addr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMapAddress",1296,G__TMapFile_SetMapAddress_4_4,121,-1,-1,0,1,3,1,0,"l - 'Long_t' 0 - addr",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TMapFile_Class_5_4,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TMapFile_Class_Name_6_4,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMapFile_Class_Version_7_4,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMapFile_Dictionary_8_4,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMapFile_IsA_9_4,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMapFile_ShowMembers_0_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMapFile_Streamer_1_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMapFile_DeclFileName_2_5,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMapFile_DeclFileLine_3_5,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMapFile_ImplFileName_4_5,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMapFile_ImplFileLine_5_5,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMapFile",880,G__TMapFile_wATMapFile_6_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMapRec(void) {
   /* TMapRec */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapRec));
   G__memfunc_setup("TMapRec",652,G__TMapRec_TMapRec_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,0,4,1,1,0,
"C - - 10 - name U 'TObject' - 0 - obj "
"i - 'Int_t' 0 - size Y - - 0 - buf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetName",673,G__TMapRec_GetName_2_0,67,-1,-1,0,1,1,1,9,"l - 'Long_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetClassName",1175,G__TMapRec_GetClassName_3_0,67,-1,-1,0,1,1,1,9,"l - 'Long_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBuffer",890,G__TMapRec_GetBuffer_4_0,89,-1,-1,0,1,1,1,8,"l - 'Long_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBufSize",984,G__TMapRec_GetBufSize_5_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetObject",887,G__TMapRec_GetObject_6_0,85,G__get_linked_tagnum(&G__G__Base2LN_TObject),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNext",703,G__TMapRec_GetNext_7_0,85,G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,0,1,1,1,8,"l - 'Long_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TMapRec",652,G__TMapRec_TMapRec_8_0,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TMapRec),-1,0,1,1,1,0,"u 'TMapRec' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMapRec",778,G__TMapRec_wATMapRec_9_0,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTKeyMapFile(void) {
   /* TKeyMapFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile));
   G__memfunc_setup("TKeyMapFile",1051,G__TKeyMapFile_TKeyMapFile_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TKeyMapFile",1051,G__TKeyMapFile_TKeyMapFile_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile),-1,0,3,1,1,0,
"C - - 10 - name C - - 10 - classname "
"U 'TMapFile' - 0 - mapfile",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TKeyMapFile_Browse_3_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TKeyMapFile_Class_4_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TKeyMapFile_Class_Name_5_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TKeyMapFile_Class_Version_6_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TKeyMapFile_Dictionary_7_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TKeyMapFile_IsA_8_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TKeyMapFile_ShowMembers_9_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TKeyMapFile_Streamer_0_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TKeyMapFile_DeclFileName_1_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TKeyMapFile_DeclFileLine_2_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TKeyMapFile_ImplFileName_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TKeyMapFile_ImplFileLine_4_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TKeyMapFile",1051,G__TKeyMapFile_TKeyMapFile_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile),-1,0,1,1,1,0,"u 'TKeyMapFile' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TKeyMapFile",1177,G__TKeyMapFile_wATKeyMapFile_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSignalHandler(void) {
   /* TSignalHandler */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler));
   G__memfunc_setup("TSignalHandler",1392,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSignalHandler",1392,G__TSignalHandler_TSignalHandler_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),-1,0,2,1,1,0,
"i 'ESignals' - 0 - sig b - 'Bool_t' 0 kTRUE sync",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Delay",495,G__TSignalHandler_Delay_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleDelayedSignal",1890,G__TSignalHandler_HandleDelayedSignal_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSignal",894,G__TSignalHandler_GetSignal_5_0,105,G__get_linked_tagnum(&G__G__Base2LN_ESignals),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSignal",906,G__TSignalHandler_SetSignal_6_0,121,-1,-1,0,1,1,1,0,"i 'ESignals' - 0 - sig",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsSync",601,G__TSignalHandler_IsSync_7_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsAsync",698,G__TSignalHandler_IsAsync_8_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Notify",633,G__TSignalHandler_Notify_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Remove",622,G__TSignalHandler_Remove_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TSignalHandler_Class_1_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TSignalHandler_Class_Name_2_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSignalHandler_Class_Version_3_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSignalHandler_Dictionary_4_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSignalHandler_IsA_5_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSignalHandler_ShowMembers_6_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSignalHandler_Streamer_7_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSignalHandler_DeclFileName_8_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSignalHandler_DeclFileLine_9_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSignalHandler_ImplFileName_0_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSignalHandler_ImplFileLine_1_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TSignalHandler",1392,G__TSignalHandler_TSignalHandler_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),-1,0,1,1,1,0,"u 'TSignalHandler' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSignalHandler",1518,G__TSignalHandler_wATSignalHandler_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTObjString(void) {
   /* TObjString */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TObjString));
   G__memfunc_setup("TObjString",998,G__TObjString_TObjString_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TObjString),-1,0,1,1,1,0,"C - - 10 \"\" s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TObjString",998,G__TObjString_TObjString_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TObjString),-1,0,1,1,1,0,"u 'TObjString' - 11 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Compare",711,G__TObjString_Compare_3_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetName",673,G__TObjString_GetName_4_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hash",388,G__TObjString_Hash_5_0,107,-1,G__defined_typename("ULong_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TObjString_FillBuffer_6_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TObjString_Print_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsSortable",1016,G__TObjString_IsSortable_8_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsEqual",692,G__TObjString_IsEqual_9_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TObjString_ReadBuffer_0_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetString",931,G__TObjString_SetString_1_1,121,-1,-1,0,1,1,1,0,"C - - 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetString",919,G__TObjString_GetString_2_1,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof",624,G__TObjString_Sizeof_3_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("String",631,G__TObjString_String_4_1,117,G__get_linked_tagnum(&G__G__Base2LN_TString),-1,1,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TObjString_Class_5_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TObjString_Class_Name_6_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TObjString_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TObjString_Dictionary_8_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TObjString_IsA_9_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TObjString_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TObjString_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TObjString_DeclFileName_2_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TObjString_DeclFileLine_3_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TObjString_ImplFileName_4_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TObjString_ImplFileLine_5_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TObjString",1124,G__TObjString_wATObjString_6_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSystem(void) {
   /* TSystem */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystem));
   G__memfunc_setup("ExpandFileName",1377,(G__InterfaceMethod)NULL,67,-1,-1,0,1,1,2,1,"C - - 10 - fname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TSystem",729,G__TSystem_TSystem_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSystem),-1,0,2,1,1,0,
"C - - 10 \"Generic\" name C - - 10 \"Generic System\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TSystem_Init_3_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetProgname",1125,G__TSystem_SetProgname_4_0,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDisplay",1026,G__TSystem_SetDisplay_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrorStr",1123,G__TSystem_GetErrorStr_6_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetError",810,G__TSystem_GetError_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveOnExit",1221,G__TSystem_RemoveOnExit_8_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HostName",799,G__TSystem_HostName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetErrno",806,G__TSystem_GetErrno_0_1,105,-1,G__defined_typename("Int_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResetErrno",1033,G__TSystem_ResetErrno_1_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Run",309,G__TSystem_Run_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessEvents",1364,G__TSystem_ProcessEvents_3_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DispatchOneEvent",1620,G__TSystem_DispatchOneEvent_4_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE pendingOnly",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExitLoop",820,G__TSystem_ExitLoop_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InControl",920,G__TSystem_InControl_6_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InnerLoop",918,G__TSystem_InnerLoop_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddSignalHandler",1573,G__TSystem_AddSignalHandler_8_1,121,-1,-1,0,1,1,1,0,"U 'TSignalHandler' - 0 - sh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveSignalHandler",1930,G__TSystem_RemoveSignalHandler_9_1,85,G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),-1,0,1,1,1,0,"U 'TSignalHandler' - 0 - sh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddFileHandler",1351,G__TSystem_AddFileHandler_0_2,121,-1,-1,0,1,1,1,0,"U 'TFileHandler' - 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveFileHandler",1708,G__TSystem_RemoveFileHandler_1_2,85,G__get_linked_tagnum(&G__G__Base2LN_TFileHandler),-1,0,1,1,1,0,"U 'TFileHandler' - 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IgnoreInterrupt",1585,G__TSystem_IgnoreInterrupt_2_2,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE ignore",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Now",308,G__TSystem_Now_3_2,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AddTimer",778,G__TSystem_AddTimer_4_2,121,-1,-1,0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveTimer",1135,G__TSystem_RemoveTimer_5_2,85,G__get_linked_tagnum(&G__G__Base2LN_TTimer),-1,0,1,1,1,0,"U 'TTimer' - 0 - t",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetTimer",1028,G__TSystem_ResetTimer_6_2,121,-1,-1,0,1,1,1,0,"U 'TTimer' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NextTimeOut",1126,G__TSystem_NextTimeOut_7_2,108,-1,G__defined_typename("Long_t"),0,1,1,1,0,"b - 'Bool_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sleep",505,G__TSystem_Sleep_8_2,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - milliSec",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Exec",389,G__TSystem_Exec_9_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 10 - shellcmd",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenPipe",800,G__TSystem_OpenPipe_0_3,69,-1,-1,0,2,1,1,0,
"C - - 10 - command C - - 10 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClosePipe",900,G__TSystem_ClosePipe_1_3,105,-1,-1,0,1,1,1,0,"E - - 0 - pipe",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Exit",410,G__TSystem_Exit_2_3,121,-1,-1,0,2,1,1,0,
"i - - 0 - code b - 'Bool_t' 0 kTRUE mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Abort",504,G__TSystem_Abort_3_3,121,-1,-1,0,1,1,1,0,"i - - 0 0 code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPid",573,G__TSystem_GetPid_4_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StackTrace",997,G__TSystem_StackTrace_5_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeDirectory",1331,G__TSystem_MakeDirectory_6_3,105,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDirectory",1351,G__TSystem_OpenDirectory_7_3,89,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FreeDirectory",1335,G__TSystem_FreeDirectory_8_3,121,-1,-1,0,1,1,1,0,"Y - - 0 - dirp",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDirEntry",1105,G__TSystem_GetDirEntry_9_3,67,-1,-1,0,1,1,1,1,"Y - - 0 - dirp",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeDirectory",1531,G__TSystem_ChangeDirectory_0_4,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 - path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WorkingDirectory",1686,G__TSystem_WorkingDirectory_1_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HomeDirectory",1342,G__TSystem_HomeDirectory_2_4,67,-1,-1,0,1,1,1,1,"C - 'Char_t' 10 0 userName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("mkdir",535,G__TSystem_mkdir_3_4,105,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("cd",199,G__TSystem_cd_4_4,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("pwd",331,G__TSystem_pwd_5_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BaseName",764,G__TSystem_BaseName_6_4,67,-1,-1,0,1,1,1,1,"C - - 10 - pathname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DirName",672,G__TSystem_DirName_7_4,67,-1,-1,0,1,1,1,1,"C - - 10 - pathname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConcatFileName",1369,G__TSystem_ConcatFileName_8_4,67,-1,-1,0,2,1,1,0,
"C - - 10 - dir C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsAbsoluteFileName",1788,G__TSystem_IsAbsoluteFileName_9_4,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 - dir",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExpandPathName",1390,G__TSystem_ExpandPathName_0_5,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"u 'TString' - 1 - path","expand the metacharacters in buf as in the shell",(void*)NULL,1);
   G__memfunc_setup("ExpandPathName",1390,G__TSystem_ExpandPathName_1_5,67,-1,-1,0,1,1,1,0,"C - - 10 - path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AccessPathName",1376,G__TSystem_AccessPathName_2_5,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 10 - path i 'EAccessMode' - 0 kFileExists mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Rename",600,G__TSystem_Rename_3_5,121,-1,-1,0,2,1,1,0,
"C - - 10 - from C - - 10 - to",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Link",398,G__TSystem_Link_4_5,105,-1,-1,0,2,1,1,0,
"C - - 10 - from C - - 10 - to",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Symlink",743,G__TSystem_Symlink_5_5,105,-1,-1,0,2,1,1,0,
"C - - 10 - from C - - 10 - to",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Unlink",625,G__TSystem_Unlink_6_5,105,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPathInfo",1081,G__TSystem_GetPathInfo_7_5,105,-1,-1,0,5,1,1,0,
"C - - 10 - path L - 'Long_t' 0 - id "
"L - 'Long_t' 0 - size L - 'Long_t' 0 - flags "
"L - 'Long_t' 0 - modtime",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Umask",513,G__TSystem_Umask_8_5,105,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnixPathName",1202,G__TSystem_UnixPathName_9_5,67,-1,-1,0,1,1,1,1,"C - - 10 - unixpathname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Which",499,G__TSystem_Which_0_6,67,-1,-1,0,3,1,1,0,
"C - - 10 - search C - - 10 - file "
"i 'EAccessMode' - 0 kFileExists mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Setenv",629,G__TSystem_Setenv_1_6,121,-1,-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - value","set environment variable name to value",(void*)NULL,1);
   G__memfunc_setup("Unsetenv",856,G__TSystem_Unsetenv_2_6,121,-1,-1,0,1,1,1,0,"C - - 10 - name","remove environment variable",(void*)NULL,1);
   G__memfunc_setup("Getenv",617,G__TSystem_Getenv_3_6,67,-1,-1,0,1,1,1,1,"C - - 10 - env",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Openlog",724,G__TSystem_Openlog_4_6,121,-1,-1,0,3,1,1,0,
"C - - 10 - name i - 'Int_t' 0 - options "
"i 'ELogFacility' - 0 - facility",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Syslog",641,G__TSystem_Syslog_5_6,121,-1,-1,0,2,1,1,0,
"i 'ELogLevel' - 0 - level C - - 10 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Closelog",824,G__TSystem_Closelog_6_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DynamicPathName",1491,G__TSystem_DynamicPathName_7_6,67,-1,-1,0,2,1,1,0,
"C - - 10 - lib b - 'Bool_t' 0 kFALSE quiet",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DynFindSymbol",1314,G__TSystem_DynFindSymbol_8_6,89,-1,G__defined_typename("Func_t"),0,2,1,1,0,
"C - - 10 - module C - - 10 - entry",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Load",384,G__TSystem_Load_9_6,105,-1,-1,0,3,1,1,0,
"C - - 10 - module C - - 10 \"\" entry "
"b - 'Bool_t' 0 kFALSE system",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Unload",611,G__TSystem_Unload_0_7,121,-1,-1,0,1,1,1,0,"C - - 10 - module",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ListSymbols",1157,G__TSystem_ListSymbols_1_7,121,-1,-1,0,2,1,1,0,
"C - - 10 - module C - - 10 \"\" re",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ListLibraries",1337,G__TSystem_ListLibraries_2_7,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" regexp",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLibraries",1213,G__TSystem_GetLibraries_3_7,67,-1,-1,0,2,1,1,1,
"C - - 10 \"\" regexp C - - 10 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHostByName",1274,G__TSystem_GetHostByName_4_7,117,G__get_linked_tagnum(&G__G__Base2LN_TInetAddress),-1,0,1,1,1,0,"C - - 10 - server",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPeerName",1069,G__TSystem_GetPeerName_5_7,117,G__get_linked_tagnum(&G__G__Base2LN_TInetAddress),-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSockName",1073,G__TSystem_GetSockName_6_7,117,G__get_linked_tagnum(&G__G__Base2LN_TInetAddress),-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetServiceByName",1581,G__TSystem_GetServiceByName_7_7,105,-1,-1,0,1,1,1,0,"C - - 10 - service",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetServiceByPort",1617,G__TSystem_GetServiceByPort_8_7,67,-1,-1,0,1,1,1,0,"i - - 0 - port",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenConnection",1442,G__TSystem_OpenConnection_9_7,105,-1,-1,0,2,1,1,0,
"C - - 10 - server i - - 0 - port",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AnnounceTcpService",1839,G__TSystem_AnnounceTcpService_0_8,105,-1,-1,0,3,1,1,0,
"i - - 0 - port b - 'Bool_t' 0 - reuse "
"i - - 0 - backlog",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AnnounceUnixService",1964,G__TSystem_AnnounceUnixService_1_8,105,-1,-1,0,2,1,1,0,
"i - - 0 - port i - - 0 - backlog",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AcceptConnection",1632,G__TSystem_AcceptConnection_2_8,105,-1,-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseConnection",1542,G__TSystem_CloseConnection_3_8,121,-1,-1,0,1,1,1,0,"i - - 0 - sock",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecvRaw",698,G__TSystem_RecvRaw_4_8,105,-1,-1,0,4,1,1,0,
"i - - 0 - sock Y - - 0 - buffer "
"i - - 0 - length i - - 0 - flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendRaw",692,G__TSystem_SendRaw_5_8,105,-1,-1,0,4,1,1,0,
"i - - 0 - sock Y - - 10 - buffer "
"i - - 0 - length i - - 0 - flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecvBuf",685,G__TSystem_RecvBuf_6_8,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock Y - - 0 - buffer "
"i - - 0 - length",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendBuf",679,G__TSystem_SendBuf_7_8,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock Y - - 10 - buffer "
"i - - 0 - length",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSockOpt",1007,G__TSystem_SetSockOpt_8_8,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock i - - 0 - kind "
"i - - 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSockOpt",995,G__TSystem_GetSockOpt_9_8,105,-1,-1,0,3,1,1,0,
"i - - 0 - sock i - - 0 - kind "
"I - - 0 - val",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CompileMacro",1211,G__TSystem_CompileMacro_0_9,105,-1,-1,0,2,1,1,0,
"C - - 10 - filename C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMakeSharedLib",1548,G__TSystem_GetMakeSharedLib_1_9,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMakeExe",960,G__TSystem_GetMakeExe_2_9,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetIncludePath",1393,G__TSystem_GetIncludePath_3_9,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLinkedLibs",1281,G__TSystem_GetLinkedLibs_4_9,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSoExt",787,G__TSystem_GetSoExt_5_9,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetObjExt",876,G__TSystem_GetObjExt_6_9,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMakeSharedLib",1560,G__TSystem_SetMakeSharedLib_7_9,121,-1,-1,0,1,1,1,0,"C - - 10 - directives",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMakeExe",972,G__TSystem_SetMakeExe_8_9,121,-1,-1,0,1,1,1,0,"C - - 10 - directives",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIncludePath",1405,G__TSystem_SetIncludePath_9_9,121,-1,-1,0,1,1,1,0,"C - - 10 - IncludePath",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLinkedLibs",1293,G__TSystem_SetLinkedLibs_0_10,121,-1,-1,0,1,1,1,0,"C - - 10 - LinkedLibs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSoExt",799,G__TSystem_SetSoExt_1_10,121,-1,-1,0,1,1,1,0,"C - - 10 - SoExt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetObjExt",888,G__TSystem_SetObjExt_2_10,121,-1,-1,0,1,1,1,0,"C - - 10 - ObjExt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CleanCompiledMacros",1909,G__TSystem_CleanCompiledMacros_3_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TSystem_Class_4_10,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TSystem_Class_Name_5_10,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSystem_Class_Version_6_10,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSystem_Dictionary_7_10,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSystem_IsA_8_10,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSystem_ShowMembers_9_10,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSystem_Streamer_0_11,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSystem_DeclFileName_1_11,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSystem_DeclFileLine_2_11,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSystem_ImplFileName_3_11,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSystem_ImplFileLine_4_11,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TSystem",729,G__TSystem_TSystem_5_11,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TSystem),-1,0,1,1,1,0,"u 'TSystem' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSystem",855,G__TSystem_wATSystem_6_11,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSysEvtHandler(void) {
   /* TSysEvtHandler */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler));
   G__memfunc_setup("Notify",633,G__TSysEvtHandler_Notify_2_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Remove",622,G__TSysEvtHandler_Remove_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Class",502,G__TSysEvtHandler_Class_4_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TSysEvtHandler_Class_Name_5_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSysEvtHandler_Class_Version_6_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSysEvtHandler_Dictionary_7_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSysEvtHandler_IsA_8_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSysEvtHandler_ShowMembers_9_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSysEvtHandler_Streamer_0_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSysEvtHandler_DeclFileName_1_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSysEvtHandler_DeclFileLine_2_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSysEvtHandler_ImplFileName_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSysEvtHandler_ImplFileLine_4_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSysEvtHandler",1534,G__TSysEvtHandler_wATSysEvtHandler_5_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTTime(void) {
   /* TTime */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TTime));
   G__memfunc_setup("TTime",483,G__TTime_TTime_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTime",483,G__TTime_TTime_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"l - 'Long_t' 0 - msec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TTime",483,G__TTime_TTime_2_0,105,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"u 'TTime' - 11 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TTime_operatoreQ_3_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"u 'TTime' - 11 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator+=",980,G__TTime_operatorpLeQ_4_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"u 'TTime' - 11 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator-=",982,G__TTime_operatormIeQ_5_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"u 'TTime' - 11 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator*=",979,G__TTime_operatormUeQ_6_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"u 'TTime' - 11 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator/=",984,G__TTime_operatordIeQ_7_0,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,1,1,1,0,"u 'TTime' - 11 - t",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator long",1340,G__TTime_operatorsPlong_8_0,108,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AsString",811,G__TTime_AsString_9_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TTime_Class_0_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TTime_Class_Name_1_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TTime_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TTime_Dictionary_3_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TTime_IsA_4_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TTime_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TTime_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TTime_DeclFileName_7_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TTime_DeclFileLine_8_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TTime_ImplFileName_9_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TTime_ImplFileLine_0_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TTime",609,G__TTime_wATTime_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTProcessEventTimer(void) {
   /* TProcessEventTimer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer));
   G__memfunc_setup("TProcessEventTimer",1846,G__TProcessEventTimer_TProcessEventTimer_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer),-1,0,1,1,1,0,"l - 'Long_t' 0 - delay",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ProcessEvents",1364,G__TProcessEventTimer_ProcessEvents_1_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TProcessEventTimer_Class_2_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TProcessEventTimer_Class_Name_3_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TProcessEventTimer_Class_Version_4_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TProcessEventTimer_Dictionary_5_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TProcessEventTimer_IsA_6_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TProcessEventTimer_ShowMembers_7_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TProcessEventTimer_Streamer_8_0,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TProcessEventTimer_DeclFileName_9_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TProcessEventTimer_DeclFileLine_0_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TProcessEventTimer_ImplFileName_1_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TProcessEventTimer_ImplFileLine_2_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TProcessEventTimer",1846,G__TProcessEventTimer_TProcessEventTimer_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer),-1,0,1,1,1,0,"u 'TProcessEventTimer' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TProcessEventTimer",1972,G__TProcessEventTimer_wATProcessEventTimer_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSystemFile(void) {
   /* TSystemFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemFile));
   G__memfunc_setup("TSystemFile",1113,G__TSystemFile_TSystemFile_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSystemFile",1113,G__TSystemFile_TSystemFile_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),-1,0,2,1,1,0,
"C - - 10 - filename C - - 10 - dirname",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TSystemFile_Browse_3_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Edit",390,G__TSystemFile_Edit_4_0,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TSystemFile_Class_5_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TSystemFile_Class_Name_6_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSystemFile_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSystemFile_Dictionary_8_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSystemFile_IsA_9_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSystemFile_ShowMembers_0_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSystemFile_Streamer_1_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSystemFile_DeclFileName_2_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSystemFile_DeclFileLine_3_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSystemFile_ImplFileName_4_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSystemFile_ImplFileLine_5_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TSystemFile",1113,G__TSystemFile_TSystemFile_6_1,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),-1,0,1,1,1,0,"u 'TSystemFile' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSystemFile",1239,G__TSystemFile_wATSystemFile_7_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTSystemDirectory(void) {
   /* TSystemDirectory */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory));
   G__memfunc_setup("IsDirectory",1137,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,4,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindDirObj",955,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),-1,0,1,1,4,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindFileObj",1052,(G__InterfaceMethod)NULL,85,G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),-1,0,2,1,4,0,
"C - - 10 - name C - - 10 - dir",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSystemDirectory",1678,G__TSystemDirectory_TSystemDirectory_3_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TSystemDirectory",1678,G__TSystemDirectory_TSystemDirectory_4_0,105,G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),-1,0,2,1,1,0,
"C - - 10 - dirname C - - 10 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsFolder",792,G__TSystemDirectory_IsFolder_6_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Browse",626,G__TSystemDirectory_Browse_7_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Edit",390,G__TSystemDirectory_Edit_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDirectory",1249,G__TSystemDirectory_SetDirectory_9_0,121,-1,-1,0,1,1,1,0,"C - - 10 - name","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TSystemDirectory_Class_0_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TSystemDirectory_Class_Name_1_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TSystemDirectory_Class_Version_2_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TSystemDirectory_Dictionary_3_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TSystemDirectory_IsA_4_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TSystemDirectory_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TSystemDirectory_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TSystemDirectory_DeclFileName_7_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TSystemDirectory_DeclFileLine_8_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TSystemDirectory_ImplFileName_9_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TSystemDirectory_ImplFileLine_0_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TSystemDirectory",1678,G__TSystemDirectory_TSystemDirectory_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),-1,0,1,1,1,0,"u 'TSystemDirectory' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TSystemDirectory",1804,G__TSystemDirectory_wATSystemDirectory_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTStopwatch(void) {
   /* TStopwatch */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TStopwatch));
   G__memfunc_setup("TStopwatch",1041,G__TStopwatch_TStopwatch_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TStopwatch),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Start",526,G__TStopwatch_Start_1_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE reset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Stop",422,G__TStopwatch_Stop_2_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Continue",837,G__TStopwatch_Continue_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Counter",736,G__TStopwatch_Counter_4_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RealTime",787,G__TStopwatch_RealTime_5_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TStopwatch_Reset_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResetCpuTime",1210,G__TStopwatch_ResetCpuTime_7_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0 time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResetRealTime",1302,G__TStopwatch_ResetRealTime_8_0,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0 time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CpuTime",695,G__TStopwatch_CpuTime_9_0,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TStopwatch_Print_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRealTime",1075,G__TStopwatch_GetRealTime_1_1,100,-1,G__defined_typename("Double_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCPUTime",919,G__TStopwatch_GetCPUTime_2_1,100,-1,G__defined_typename("Double_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TStopwatch_Class_3_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TStopwatch_Class_Name_4_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TStopwatch_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TStopwatch_Dictionary_6_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TStopwatch_IsA_7_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TStopwatch_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TStopwatch_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TStopwatch_DeclFileName_0_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TStopwatch_DeclFileLine_1_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TStopwatch_ImplFileName_2_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TStopwatch_ImplFileLine_3_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TStopwatch",1041,G__TStopwatch_TStopwatch_4_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TStopwatch),-1,0,1,1,1,0,"u 'TStopwatch' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TStopwatch",1167,G__TStopwatch_wATStopwatch_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTRandom(void) {
   /* TRandom */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom));
   G__memfunc_setup("TRandom",693,G__TRandom_TRandom_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRandom),-1,0,1,1,1,0,"h - 'UInt_t' 0 65539 seed",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Binomial",811,G__TRandom_Binomial_2_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - ntot f - 'Float_t' 0 - prob",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Exp",301,G__TRandom_Exp_3_0,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"d - 'Double_t' 0 - tau",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Gaus",400,G__TRandom_Gaus_4_0,100,-1,G__defined_typename("Double_t"),0,2,1,1,0,
"f - 'Float_t' 0 0 mean f - 'Float_t' 0 1 sigma",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeed",673,G__TRandom_GetSeed_5_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Integer",718,G__TRandom_Integer_6_0,104,-1,G__defined_typename("UInt_t"),0,1,1,1,0,"h - 'UInt_t' 0 - imax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Landau",597,G__TRandom_Landau_7_0,100,-1,G__defined_typename("Double_t"),0,2,1,1,0,
"f - 'Float_t' 0 0 mean f - 'Float_t' 0 1 sigma",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Poisson",747,G__TRandom_Poisson_8_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Float_t' 0 - mean",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Rannor",624,G__TRandom_Rannor_9_0,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - a f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSeed",685,G__TRandom_SetSeed_0_1,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 65539 seed",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Rndm",401,G__TRandom_Rndm_1_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 0 i",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Uniform",736,G__TRandom_Uniform_2_1,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"d - 'Double_t' 0 1 x1",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TRandom_Class_3_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TRandom_Class_Name_4_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRandom_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRandom_Dictionary_6_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRandom_IsA_7_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRandom_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRandom_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TRandom_DeclFileName_0_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRandom_DeclFileLine_1_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRandom_ImplFileName_2_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRandom_ImplFileLine_3_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TRandom",693,G__TRandom_TRandom_4_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TRandom),-1,0,1,1,1,0,"u 'TRandom' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRandom",819,G__TRandom_wATRandom_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTRandom2(void) {
   /* TRandom2 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom2));
   G__memfunc_setup("TRandom2",743,G__TRandom2_TRandom2_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRandom2),-1,0,1,1,1,0,"h - 'UInt_t' 0 65539 seed",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSeed2",723,G__TRandom2_GetSeed2_2_0,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 1 - seed1 h - 'UInt_t' 1 - seed2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Rndm",401,G__TRandom2_Rndm_3_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 0 i",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSeed",685,G__TRandom2_SetSeed_4_0,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 0 seed",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSeed2",735,G__TRandom2_SetSeed2_5_0,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - seed1 h - 'UInt_t' 0 - seed2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TRandom2_Class_6_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TRandom2_Class_Name_7_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRandom2_Class_Version_8_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRandom2_Dictionary_9_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRandom2_IsA_0_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRandom2_ShowMembers_1_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRandom2_Streamer_2_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TRandom2_DeclFileName_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRandom2_DeclFileLine_4_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRandom2_ImplFileName_5_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRandom2_ImplFileLine_6_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TRandom2",743,G__TRandom2_TRandom2_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TRandom2),-1,0,1,1,1,0,"u 'TRandom2' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRandom2",869,G__TRandom2_wATRandom2_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTRandom3(void) {
   /* TRandom3 */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom3));
   G__memfunc_setup("TRandom3",744,G__TRandom3_TRandom3_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TRandom3),-1,0,1,1,1,0,"h - 'UInt_t' 0 65539 seed",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Rndm",401,G__TRandom3_Rndm_2_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 0 i",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSeed",685,G__TRandom3_SetSeed_3_0,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 0 seed",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TRandom3_Class_4_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TRandom3_Class_Name_5_0,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TRandom3_Class_Version_6_0,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TRandom3_Dictionary_7_0,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TRandom3_IsA_8_0,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TRandom3_ShowMembers_9_0,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TRandom3_Streamer_0_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TRandom3_DeclFileName_1_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TRandom3_DeclFileLine_2_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TRandom3_ImplFileName_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TRandom3_ImplFileLine_4_1,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TRandom3",744,G__TRandom3_TRandom3_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TRandom3),-1,0,1,1,1,0,"u 'TRandom3' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TRandom3",870,G__TRandom3_wATRandom3_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTMessageHandler(void) {
   /* TMessageHandler */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler));
   G__memfunc_setup("TMessageHandler",1495,G__TMessageHandler_TMessageHandler_0_0,105,G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler),-1,0,2,1,1,0,
"U 'TClass' - 0 - cl b - 'Bool_t' 0 kTRUE derived",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TMessageHandler",1495,G__TMessageHandler_TMessageHandler_1_0,105,G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler),-1,0,2,1,1,0,
"C - - 10 - cl b - 'Bool_t' 0 kTRUE derived",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TMessageHandler_Add_3_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSize",699,G__TMessageHandler_GetSize_4_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMessageCount",1518,G__TMessageHandler_GetMessageCount_5_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"i - 'Int_t' 0 - messId",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTotalMessageCount",2034,G__TMessageHandler_GetTotalMessageCount_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleDerived",1295,G__TMessageHandler_HandleDerived_7_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleMessage",1297,G__TMessageHandler_HandleMessage_8_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - id U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Notify",633,G__TMessageHandler_Notify_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TMessageHandler_Print_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Remove",622,G__TMessageHandler_Remove_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Class",502,G__TMessageHandler_Class_2_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Name",982,G__TMessageHandler_Class_Name_3_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TMessageHandler_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TMessageHandler_Dictionary_5_1,121,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TMessageHandler_IsA_6_1,85,G__get_linked_tagnum(&G__G__Base2LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TMessageHandler_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TMessageHandler_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TMessageHandler_DeclFileName_9_1,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TMessageHandler_DeclFileLine_0_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TMessageHandler_ImplFileName_1_2,67,-1,-1,0,0,3,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TMessageHandler_ImplFileLine_2_2,105,-1,-1,0,0,3,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TMessageHandler",1495,G__TMessageHandler_TMessageHandler_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler),-1,0,1,1,1,0,"u 'TMessageHandler' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TMessageHandler",1621,G__TMessageHandler_wATMessageHandler_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Base2() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Base2() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_EAccessMode),-1,-1,1,"kFileExists=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_EAccessMode),-1,-1,1,"kExecutePermission=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_EAccessMode),-1,-1,1,"kWritePermission=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base2LN_EAccessMode),-1,-1,1,"kReadPermission=4",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Base2() {
   G__lastifuncposition();

   G__memfunc_setup("operator+",919,G___operatorpL_7_16,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator-",921,G___operatormI_8_16,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator*",918,G___operatormU_9_16,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator/",923,G___operatordI_0_17,117,G__get_linked_tagnum(&G__G__Base2LN_TTime),-1,0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_1_17,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G___operatornOeQ_2_17,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator<",936,G___operatorlE_3_17,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator<=",997,G___operatorlEeQ_4_17,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator>",938,G___operatorgR_5_17,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator>=",999,G___operatorgReQ_6_17,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TTime' - 1 - t1 u 'TTime' - 1 - t2",(char*)NULL
,(void*)NULL,0);

   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__Base2LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TMemberInspector = { "TMemberInspector" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStorage = { "TStorage" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TObjectcLcLdA = { "TObject::$" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TMath = { "TMath" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_istream = { "istream" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TRegexp = { "TRegexp" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStringLong = { "TStringLong" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TSubString = { "TSubString" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStringRef = { "TStringRef" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStringcLcLEStripType = { "TString::EStripType" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TStringcLcLECaseCompare = { "TString::ECaseCompare" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TSeqCollection = { "TSeqCollection" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TDatime = { "TDatime" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TKey = { "TKey" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TFile = { "TFile" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TDirectory = { "TDirectory" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TColor = { "TColor" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TDataType = { "TDataType" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStyle = { "TStyle" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TVirtualPad = { "TVirtualPad" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TApplication = { "TApplication" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TInterpreter = { "TInterpreter" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TGlobal = { "TGlobal" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TFunction = { "TFunction" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TROOT = { "TROOT" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TDataMember = { "TDataMember" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TRealData = { "TRealData" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TExec = { "TExec" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TOrdCollection = { "TOrdCollection" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TFree = { "TFree" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TMapFile = { "TMapFile" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TMapRec = { "TMapRec" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TMapFilecLcLdA = { "TMapFile::$" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TKeyMapFile = { "TKeyMapFile" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TSignalHandler = { "TSignalHandler" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TRegexpcLcLEStatVal = { "TRegexp::EStatVal" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TObjString = { "TObjString" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TInetAddress = { "TInetAddress" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TSystem = { "TSystem" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TSysEvtHandler = { "TSysEvtHandler" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TFileHandler = { "TFileHandler" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_ESignals = { "ESignals" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TTime = { "TTime" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_EAccessMode = { "EAccessMode" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TProcessEventTimer = { "TProcessEventTimer" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TFdSet = { "TFdSet" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TSystemFile = { "TSystemFile" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TSystemDirectory = { "TSystemDirectory" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStopwatch = { "TStopwatch" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TStopwatchcLcLEState = { "TStopwatch::EState" , 101 , -1 };
G__linked_taginfo G__G__Base2LN_TRandom = { "TRandom" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TRandom2 = { "TRandom2" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TRandom3 = { "TRandom3" , 99 , -1 };
G__linked_taginfo G__G__Base2LN_TMessageHandler = { "TMessageHandler" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__Base2() {
  G__G__Base2LN_TClass.tagnum = -1 ;
  G__G__Base2LN_TBuffer.tagnum = -1 ;
  G__G__Base2LN_TMemberInspector.tagnum = -1 ;
  G__G__Base2LN_TStorage.tagnum = -1 ;
  G__G__Base2LN_TList.tagnum = -1 ;
  G__G__Base2LN_TTimer.tagnum = -1 ;
  G__G__Base2LN_TObject.tagnum = -1 ;
  G__G__Base2LN_TObjectcLcLdA.tagnum = -1 ;
  G__G__Base2LN_TMath.tagnum = -1 ;
  G__G__Base2LN_istream.tagnum = -1 ;
  G__G__Base2LN_TRegexp.tagnum = -1 ;
  G__G__Base2LN_TString.tagnum = -1 ;
  G__G__Base2LN_TStringLong.tagnum = -1 ;
  G__G__Base2LN_TSubString.tagnum = -1 ;
  G__G__Base2LN_TStringRef.tagnum = -1 ;
  G__G__Base2LN_TStringcLcLEStripType.tagnum = -1 ;
  G__G__Base2LN_TStringcLcLECaseCompare.tagnum = -1 ;
  G__G__Base2LN_TSeqCollection.tagnum = -1 ;
  G__G__Base2LN_TNamed.tagnum = -1 ;
  G__G__Base2LN_TDatime.tagnum = -1 ;
  G__G__Base2LN_TKey.tagnum = -1 ;
  G__G__Base2LN_TFile.tagnum = -1 ;
  G__G__Base2LN_TDirectory.tagnum = -1 ;
  G__G__Base2LN_TColor.tagnum = -1 ;
  G__G__Base2LN_TDataType.tagnum = -1 ;
  G__G__Base2LN_TStyle.tagnum = -1 ;
  G__G__Base2LN_TVirtualPad.tagnum = -1 ;
  G__G__Base2LN_TApplication.tagnum = -1 ;
  G__G__Base2LN_TInterpreter.tagnum = -1 ;
  G__G__Base2LN_TGlobal.tagnum = -1 ;
  G__G__Base2LN_TFunction.tagnum = -1 ;
  G__G__Base2LN_TROOT.tagnum = -1 ;
  G__G__Base2LN_TDataMember.tagnum = -1 ;
  G__G__Base2LN_TRealData.tagnum = -1 ;
  G__G__Base2LN_TExec.tagnum = -1 ;
  G__G__Base2LN_TOrdCollection.tagnum = -1 ;
  G__G__Base2LN_TFree.tagnum = -1 ;
  G__G__Base2LN_TMapFile.tagnum = -1 ;
  G__G__Base2LN_TMapRec.tagnum = -1 ;
  G__G__Base2LN_TMapFilecLcLdA.tagnum = -1 ;
  G__G__Base2LN_TKeyMapFile.tagnum = -1 ;
  G__G__Base2LN_TSignalHandler.tagnum = -1 ;
  G__G__Base2LN_TRegexpcLcLEStatVal.tagnum = -1 ;
  G__G__Base2LN_TObjString.tagnum = -1 ;
  G__G__Base2LN_TInetAddress.tagnum = -1 ;
  G__G__Base2LN_TSystem.tagnum = -1 ;
  G__G__Base2LN_TSysEvtHandler.tagnum = -1 ;
  G__G__Base2LN_TFileHandler.tagnum = -1 ;
  G__G__Base2LN_ESignals.tagnum = -1 ;
  G__G__Base2LN_TTime.tagnum = -1 ;
  G__G__Base2LN_EAccessMode.tagnum = -1 ;
  G__G__Base2LN_TProcessEventTimer.tagnum = -1 ;
  G__G__Base2LN_TFdSet.tagnum = -1 ;
  G__G__Base2LN_TSystemFile.tagnum = -1 ;
  G__G__Base2LN_TSystemDirectory.tagnum = -1 ;
  G__G__Base2LN_TStopwatch.tagnum = -1 ;
  G__G__Base2LN_TStopwatchcLcLEState.tagnum = -1 ;
  G__G__Base2LN_TRandom.tagnum = -1 ;
  G__G__Base2LN_TRandom2.tagnum = -1 ;
  G__G__Base2LN_TRandom3.tagnum = -1 ;
  G__G__Base2LN_TMessageHandler.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__Base2() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TMemberInspector),sizeof(TMemberInspector),-1,1,"ABC for inspecting class data members",G__setup_memvarTMemberInspector,G__setup_memfuncTMemberInspector);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TStorage),sizeof(TStorage),-1,0,"Storage manager class",G__setup_memvarTStorage,G__setup_memfuncTStorage);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TTimer),sizeof(TTimer),-1,0,"Handle timer event",G__setup_memvarTTimer,G__setup_memfuncTTimer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TObject),sizeof(TObject),-1,0,"Basic ROOT object",G__setup_memvarTObject,G__setup_memfuncTObject);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TMath),sizeof(TMath),-1,0,"Interface to math routines",G__setup_memvarTMath,G__setup_memfuncTMath);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TRegexp),sizeof(TRegexp),-1,0,"Regular expression class",G__setup_memvarTRegexp,G__setup_memfuncTRegexp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TString),sizeof(TString),-1,0,"Basic string class",G__setup_memvarTString,G__setup_memfuncTString);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TStringLong),sizeof(TStringLong),-1,0,"Long string class (more than 255 chars)",G__setup_memvarTStringLong,G__setup_memfuncTStringLong);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TSubString),sizeof(TSubString),-1,0,(char*)NULL,G__setup_memvarTSubString,G__setup_memfuncTSubString);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TNamed),sizeof(TNamed),-1,0,"The basis for a named object (name, title)",G__setup_memvarTNamed,G__setup_memfuncTNamed);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TKey),sizeof(TKey),-1,0,"Header description of a logical record on file",G__setup_memvarTKey,G__setup_memfuncTKey);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TROOT),sizeof(TROOT),-1,0,"Top level (or root) structure for all classes",G__setup_memvarTROOT,G__setup_memfuncTROOT);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TRealData),sizeof(TRealData),-1,0,"Description of persistent data members",G__setup_memvarTRealData,G__setup_memfuncTRealData);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TExec),sizeof(TExec),-1,0,"To execute a CINT command",G__setup_memvarTExec,G__setup_memfuncTExec);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TFree),sizeof(TFree),-1,0,"Description of free segments on a file",G__setup_memvarTFree,G__setup_memfuncTFree);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapFile),sizeof(TMapFile),-1,0,"Memory mapped directory structure",G__setup_memvarTMapFile,G__setup_memfuncTMapFile);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TMapRec),sizeof(TMapRec),-1,0,(char*)NULL,G__setup_memvarTMapRec,G__setup_memfuncTMapRec);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TKeyMapFile),sizeof(TKeyMapFile),-1,0,"Utility class for browsing TMapFile objects.",G__setup_memvarTKeyMapFile,G__setup_memfuncTKeyMapFile);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TSignalHandler),sizeof(TSignalHandler),-1,0,"Signal event handler",G__setup_memvarTSignalHandler,G__setup_memfuncTSignalHandler);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TObjString),sizeof(TObjString),-1,0,"Collectable string class",G__setup_memvarTObjString,G__setup_memfuncTObjString);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystem),sizeof(TSystem),-1,0,"ABC defining a generic interface to the OS",G__setup_memvarTSystem,G__setup_memfuncTSystem);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TSysEvtHandler),sizeof(TSysEvtHandler),-1,2,"ABC for handling system events",G__setup_memvarTSysEvtHandler,G__setup_memfuncTSysEvtHandler);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TTime),sizeof(TTime),-1,0,"Basic time type with milli second precision",G__setup_memvarTTime,G__setup_memfuncTTime);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_EAccessMode),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TProcessEventTimer),sizeof(TProcessEventTimer),-1,0,"Process pending events at fixed time intervals",G__setup_memvarTProcessEventTimer,G__setup_memfuncTProcessEventTimer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemFile),sizeof(TSystemFile),-1,0,"A system file",G__setup_memvarTSystemFile,G__setup_memfuncTSystemFile);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TSystemDirectory),sizeof(TSystemDirectory),-1,0,"A system directory",G__setup_memvarTSystemDirectory,G__setup_memfuncTSystemDirectory);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TStopwatch),sizeof(TStopwatch),-1,0,"A stopwatch which times real and cpu time",G__setup_memvarTStopwatch,G__setup_memfuncTStopwatch);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom),sizeof(TRandom),-1,0,"Random number generators",G__setup_memvarTRandom,G__setup_memfuncTRandom);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom2),sizeof(TRandom2),-1,0,"Random number generators with periodicity > 10**14",G__setup_memvarTRandom2,G__setup_memfuncTRandom2);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TRandom3),sizeof(TRandom3),-1,0,"Random number generator: Mersenne Twistor",G__setup_memvarTRandom3,G__setup_memfuncTRandom3);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base2LN_TMessageHandler),sizeof(TMessageHandler),-1,0,"Generic message handler",G__setup_memvarTMessageHandler,G__setup_memfuncTMessageHandler);
}
extern "C" void G__cpp_setupG__Base2() {
  G__check_setup_version(51428,"G__cpp_setupG__Base2()");
  G__set_cpp_environmentG__Base2();
  G__cpp_setup_tagtableG__Base2();

  G__cpp_setup_inheritanceG__Base2();

  G__cpp_setup_typetableG__Base2();

  G__cpp_setup_memvarG__Base2();

  G__cpp_setup_memfuncG__Base2();
  G__cpp_setup_globalG__Base2();
  G__cpp_setup_funcG__Base2();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Base2();
  return;
}
class G__cpp_setup_initG__Base2 {
  public:
    G__cpp_setup_initG__Base2() { G__add_setup_func("G__Base2",&G__cpp_setupG__Base2); }
   ~G__cpp_setup_initG__Base2() { G__remove_setup_func("G__Base2"); }
};
G__cpp_setup_initG__Base2 G__cpp_setup_initializerG__Base2;

