//*CMZ :  2.23/12 31/01/2000  18.51.17  by  Rene Brun
//*-- Author :    Rene Brun   31/01/2000
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
extern void G__cpp_setup_tagtableG__Base1();
extern void G__cpp_setup_inheritanceG__Base1();
extern void G__cpp_setup_typetableG__Base1();
extern void G__cpp_setup_memvarG__Base1();
extern void G__cpp_setup_globalG__Base1();
extern void G__cpp_setup_memfuncG__Base1();
extern void G__cpp_setup_funcG__Base1();
extern void G__set_cpp_environmentG__Base1();
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
#include "TAttPad.h"
#include "TStyle.h"
#include "TBrowser.h"
#include "TAttText.h"
#include "TBaseClass.h"
#include "TBuffer.h"
#include "TClass.h"
#include "TColor.h"
#include "TContextMenu.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TDatime.h"
#include "TDirectory.h"
#include "TEnv.h"
#include "TAtt3D.h"
#include "TFile.h"
#include "TFree.h"
#include "TFunction.h"
#include "TGlobal.h"
#include "TKey.h"
#include "TGuiFactory.h"
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
#include "TError.h"
#include "TVirtualFitter.h"
#include "TString.h"
#include "TStringLong.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TSysEvtHandler.h"
#include "TSystemFile.h"
#include "TStopwatch.h"
#include "TRandom.h"
#include "TBenchmark.h"
#include "TTime.h"
#include "TTimer.h"
#include "TView.h"
#include "TVirtualPad.h"
#include "TVirtualX.h"
#include "TVirtualGL.h"
#include "TVirtualPS.h"
#include "TAttAxis.h"

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Base1LN_TClass;
extern G__linked_taginfo G__G__Base1LN_TBuffer;
extern G__linked_taginfo G__G__Base1LN_TList;
extern G__linked_taginfo G__G__Base1LN_TBrowser;
extern G__linked_taginfo G__G__Base1LN_TObjArray;
extern G__linked_taginfo G__G__Base1LN_TMethod;
extern G__linked_taginfo G__G__Base1LN_TTimer;
extern G__linked_taginfo G__G__Base1LN_EObjBits;
extern G__linked_taginfo G__G__Base1LN_TObject;
extern G__linked_taginfo G__G__Base1LN_TExMap;
extern G__linked_taginfo G__G__Base1LN_TBuffercLcLEMode;
extern G__linked_taginfo G__G__Base1LN_TBuffercLcLdA;
extern G__linked_taginfo G__G__Base1LN_istream;
extern G__linked_taginfo G__G__Base1LN_ostream;
extern G__linked_taginfo G__G__Base1LN_TString;
extern G__linked_taginfo G__G__Base1LN_TSeqCollection;
extern G__linked_taginfo G__G__Base1LN_TNamed;
extern G__linked_taginfo G__G__Base1LN_TDatime;
extern G__linked_taginfo G__G__Base1LN_TKey;
extern G__linked_taginfo G__G__Base1LN_TFile;
extern G__linked_taginfo G__G__Base1LN_TDirectory;
extern G__linked_taginfo G__G__Base1LN_TDirectorycLcLdA;
extern G__linked_taginfo G__G__Base1LN_TColor;
extern G__linked_taginfo G__G__Base1LN_TStyle;
extern G__linked_taginfo G__G__Base1LN_TVirtualPad;
extern G__linked_taginfo G__G__Base1LN_TApplication;
extern G__linked_taginfo G__G__Base1LN_TROOT;
extern G__linked_taginfo G__G__Base1LN_TArrayI;
extern G__linked_taginfo G__G__Base1LN_TAttFill;
extern G__linked_taginfo G__G__Base1LN_TAttLine;
extern G__linked_taginfo G__G__Base1LN_TAttMarker;
extern G__linked_taginfo G__G__Base1LN_TAttPad;
extern G__linked_taginfo G__G__Base1LN_TAttAxis;
extern G__linked_taginfo G__G__Base1LN_TAttText;
extern G__linked_taginfo G__G__Base1LN_TStylecLcLEPaperSize;
extern G__linked_taginfo G__G__Base1LN_TBrowserImp;
extern G__linked_taginfo G__G__Base1LN_TContextMenu;
extern G__linked_taginfo G__G__Base1LN_TBrowserTimer;
extern G__linked_taginfo G__G__Base1LN_TContextMenuImp;
extern G__linked_taginfo G__G__Base1LN_TOrdCollection;
extern G__linked_taginfo G__G__Base1LN_TEnv;
extern G__linked_taginfo G__G__Base1LN_TEnvRec;
extern G__linked_taginfo G__G__Base1LN_TAtt3D;
extern G__linked_taginfo G__G__Base1LN_TFilecLcLERelativeTo;
extern G__linked_taginfo G__G__Base1LN_TApplicationImp;
extern G__linked_taginfo G__G__Base1LN_TCanvasImp;
extern G__linked_taginfo G__G__Base1LN_TCanvas;
extern G__linked_taginfo G__G__Base1LN_TControlBarImp;
extern G__linked_taginfo G__G__Base1LN_TControlBar;
extern G__linked_taginfo G__G__Base1LN_TGLViewerImp;
extern G__linked_taginfo G__G__Base1LN_TGuiFactory;
extern G__linked_taginfo G__G__Base1LN_TSignalHandler;
extern G__linked_taginfo G__G__Base1LN_TVirtualFitter;
extern G__linked_taginfo G__G__Base1LN_TSystem;
extern G__linked_taginfo G__G__Base1LN_TSysEvtHandler;
extern G__linked_taginfo G__G__Base1LN_TFileHandler;
extern G__linked_taginfo G__G__Base1LN_TStopwatch;
extern G__linked_taginfo G__G__Base1LN_TRandom;
extern G__linked_taginfo G__G__Base1LN_TBenchmark;
extern G__linked_taginfo G__G__Base1LN_TView;
extern G__linked_taginfo G__G__Base1LN_TVirtualX;
extern G__linked_taginfo G__G__Base1LN_TVirtualXcLcLEDrawMode;
extern G__linked_taginfo G__G__Base1LN_TVirtualXcLcLEBoxMode;
extern G__linked_taginfo G__G__Base1LN_TVirtualXcLcLETextMode;
extern G__linked_taginfo G__G__Base1LN_TVirtualXcLcLETextSetMode;
extern G__linked_taginfo G__G__Base1LN_TPadView3D;
extern G__linked_taginfo G__G__Base1LN_TH1F;
extern G__linked_taginfo G__G__Base1LN_TFrame;
extern G__linked_taginfo G__G__Base1LN_TVirtualGL;
extern G__linked_taginfo G__G__Base1LN_EG3D2GLmode;
extern G__linked_taginfo G__G__Base1LN_TVirtualPS;
//
// File generated by /user/brun/root/bin/rootcint at Mon Jan 31 18:51:16 2000.
// Do NOT change. Changes will be lost next time file is generated
//

#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TError.h"

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBuffer *&obj)
{
   // Read a pointer to an object of class TBuffer.

   obj = (TBuffer *) buf.ReadObject(TBuffer::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBrowser *&obj)
{
   // Read a pointer to an object of class TBrowser.

   obj = (TBrowser *) buf.ReadObject(TBrowser::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDatime *&obj)
{
   // Read a pointer to an object of class TDatime.

   ::Error("TDatime::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFile *&obj)
{
   // Read a pointer to an object of class TFile.

   obj = (TFile *) buf.ReadObject(TFile::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDirectory *&obj)
{
   // Read a pointer to an object of class TDirectory.

   obj = (TDirectory *) buf.ReadObject(TDirectory::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TColor *&obj)
{
   // Read a pointer to an object of class TColor.

   obj = (TColor *) buf.ReadObject(TColor::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TStyle *&obj)
{
   // Read a pointer to an object of class TStyle.

   obj = (TStyle *) buf.ReadObject(TStyle::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVirtualPad *&obj)
{
   // Read a pointer to an object of class TVirtualPad.

   obj = (TVirtualPad *) buf.ReadObject(TVirtualPad::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TApplication *&obj)
{
   // Read a pointer to an object of class TApplication.

   obj = (TApplication *) buf.ReadObject(TApplication::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttFill *&obj)
{
   // Read a pointer to an object of class TAttFill.

   ::Error("TAttFill::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttLine *&obj)
{
   // Read a pointer to an object of class TAttLine.

   ::Error("TAttLine::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttMarker *&obj)
{
   // Read a pointer to an object of class TAttMarker.

   ::Error("TAttMarker::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttPad *&obj)
{
   // Read a pointer to an object of class TAttPad.

   ::Error("TAttPad::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttAxis *&obj)
{
   // Read a pointer to an object of class TAttAxis.

   ::Error("TAttAxis::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttText *&obj)
{
   // Read a pointer to an object of class TAttText.

   ::Error("TAttText::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBrowserImp *&obj)
{
   // Read a pointer to an object of class TBrowserImp.

   ::Error("TBrowserImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TContextMenu *&obj)
{
   // Read a pointer to an object of class TContextMenu.

   obj = (TContextMenu *) buf.ReadObject(TContextMenu::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TContextMenuImp *&obj)
{
   // Read a pointer to an object of class TContextMenuImp.

   ::Error("TContextMenuImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TEnv *&obj)
{
   // Read a pointer to an object of class TEnv.

   obj = (TEnv *) buf.ReadObject(TEnv::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAtt3D *&obj)
{
   // Read a pointer to an object of class TAtt3D.

   ::Error("TAtt3D::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TApplicationImp *&obj)
{
   // Read a pointer to an object of class TApplicationImp.

   ::Error("TApplicationImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TCanvasImp *&obj)
{
   // Read a pointer to an object of class TCanvasImp.

   ::Error("TCanvasImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TControlBarImp *&obj)
{
   // Read a pointer to an object of class TControlBarImp.

   ::Error("TControlBarImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TGuiFactory *&obj)
{
   // Read a pointer to an object of class TGuiFactory.

   obj = (TGuiFactory *) buf.ReadObject(TGuiFactory::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVirtualFitter *&obj)
{
   // Read a pointer to an object of class TVirtualFitter.

   obj = (TVirtualFitter *) buf.ReadObject(TVirtualFitter::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TFileHandler *&obj)
{
   // Read a pointer to an object of class TFileHandler.

   obj = (TFileHandler *) buf.ReadObject(TFileHandler::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TBenchmark *&obj)
{
   // Read a pointer to an object of class TBenchmark.

   obj = (TBenchmark *) buf.ReadObject(TBenchmark::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TView *&obj)
{
   // Read a pointer to an object of class TView.

   obj = (TView *) buf.ReadObject(TView::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVirtualX *&obj)
{
   // Read a pointer to an object of class TVirtualX.

   obj = (TVirtualX *) buf.ReadObject(TVirtualX::Class());
   return buf;
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TVirtualPS *&obj)
{
   // Read a pointer to an object of class TVirtualPS.

   obj = (TVirtualPS *) buf.ReadObject(TVirtualPS::Class());
   return buf;
}

//______________________________________________________________________________
void TApplication::Streamer(TBuffer &R__b)
{
   // Stream an object of class TApplication.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TApplication::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TApplication.

   TClass *R__cl  = TApplication::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fReturnFromRun", &fReturnFromRun);
   R__insp.Inspect(R__cl, R__parent, "fArgc", &fArgc);
   R__insp.Inspect(R__cl, R__parent, "*fArgv", &fArgv);
   R__insp.Inspect(R__cl, R__parent, "*fAppImp", &fAppImp);
   R__insp.Inspect(R__cl, R__parent, "fNoLog", &fNoLog);
   R__insp.Inspect(R__cl, R__parent, "fQuit", &fQuit);
   R__insp.Inspect(R__cl, R__parent, "*fFiles", &fFiles);
   R__insp.Inspect(R__cl, R__parent, "*fIdleCommand", &fIdleCommand);
   R__insp.Inspect(R__cl, R__parent, "*fIdleTimer", &fIdleTimer);
   R__insp.Inspect(R__cl, R__parent, "*fSigHandler", &fSigHandler);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TApplicationImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TApplicationImp.

   ::Error("TApplicationImp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TApplicationImp::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TApplicationImp.

   TClass *R__cl  = TApplicationImp::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
}

//______________________________________________________________________________
void TAttFill::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttFill.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fFillColor;
      R__b >> fFillStyle;
   } else {
      R__b.WriteVersion(TAttFill::IsA());
      R__b << fFillColor;
      R__b << fFillStyle;
   }
}

//______________________________________________________________________________
void TAttFill::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttFill.

   TClass *R__cl  = TAttFill::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFillColor", &fFillColor);
   R__insp.Inspect(R__cl, R__parent, "fFillStyle", &fFillStyle);
}

//______________________________________________________________________________
void TAttLine::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttLine.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fLineColor;
      R__b >> fLineStyle;
      R__b >> fLineWidth;
   } else {
      R__b.WriteVersion(TAttLine::IsA());
      R__b << fLineColor;
      R__b << fLineStyle;
      R__b << fLineWidth;
   }
}

//______________________________________________________________________________
void TAttLine::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttLine.

   TClass *R__cl  = TAttLine::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fLineColor", &fLineColor);
   R__insp.Inspect(R__cl, R__parent, "fLineStyle", &fLineStyle);
   R__insp.Inspect(R__cl, R__parent, "fLineWidth", &fLineWidth);
}

//______________________________________________________________________________
void TAttMarker::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttMarker.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fMarkerColor;
      R__b >> fMarkerStyle;
      R__b >> fMarkerSize;
   } else {
      R__b.WriteVersion(TAttMarker::IsA());
      R__b << fMarkerColor;
      R__b << fMarkerStyle;
      R__b << fMarkerSize;
   }
}

//______________________________________________________________________________
void TAttMarker::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttMarker.

   TClass *R__cl  = TAttMarker::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMarkerColor", &fMarkerColor);
   R__insp.Inspect(R__cl, R__parent, "fMarkerStyle", &fMarkerStyle);
   R__insp.Inspect(R__cl, R__parent, "fMarkerSize", &fMarkerSize);
}

//______________________________________________________________________________
void TAttPad::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttPad.

   TClass *R__cl  = TAttPad::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fLeftMargin", &fLeftMargin);
   R__insp.Inspect(R__cl, R__parent, "fRightMargin", &fRightMargin);
   R__insp.Inspect(R__cl, R__parent, "fBottomMargin", &fBottomMargin);
   R__insp.Inspect(R__cl, R__parent, "fTopMargin", &fTopMargin);
   R__insp.Inspect(R__cl, R__parent, "fXfile", &fXfile);
   R__insp.Inspect(R__cl, R__parent, "fYfile", &fYfile);
   R__insp.Inspect(R__cl, R__parent, "fAfile", &fAfile);
   R__insp.Inspect(R__cl, R__parent, "fXstat", &fXstat);
   R__insp.Inspect(R__cl, R__parent, "fYstat", &fYstat);
   R__insp.Inspect(R__cl, R__parent, "fAstat", &fAstat);
   R__insp.Inspect(R__cl, R__parent, "fFrameFillColor", &fFrameFillColor);
   R__insp.Inspect(R__cl, R__parent, "fFrameLineColor", &fFrameLineColor);
   R__insp.Inspect(R__cl, R__parent, "fFrameFillStyle", &fFrameFillStyle);
   R__insp.Inspect(R__cl, R__parent, "fFrameLineStyle", &fFrameLineStyle);
   R__insp.Inspect(R__cl, R__parent, "fFrameLineWidth", &fFrameLineWidth);
   R__insp.Inspect(R__cl, R__parent, "fFrameBorderSize", &fFrameBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fFrameBorderMode", &fFrameBorderMode);
}

//______________________________________________________________________________
void TAttAxis::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttAxis.

   TClass *R__cl  = TAttAxis::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNdivisions", &fNdivisions);
   R__insp.Inspect(R__cl, R__parent, "fAxisColor", &fAxisColor);
   R__insp.Inspect(R__cl, R__parent, "fLabelColor", &fLabelColor);
   R__insp.Inspect(R__cl, R__parent, "fLabelFont", &fLabelFont);
   R__insp.Inspect(R__cl, R__parent, "fLabelOffset", &fLabelOffset);
   R__insp.Inspect(R__cl, R__parent, "fLabelSize", &fLabelSize);
   R__insp.Inspect(R__cl, R__parent, "fTickLength", &fTickLength);
   R__insp.Inspect(R__cl, R__parent, "fTitleOffset", &fTitleOffset);
   R__insp.Inspect(R__cl, R__parent, "fTitleSize", &fTitleSize);
}

//______________________________________________________________________________
void TAttText::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttText.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      R__b >> fTextAngle;
      R__b >> fTextSize;
      R__b >> fTextAlign;
      R__b >> fTextColor;
      R__b >> fTextFont;
   } else {
      R__b.WriteVersion(TAttText::IsA());
      R__b << fTextAngle;
      R__b << fTextSize;
      R__b << fTextAlign;
      R__b << fTextColor;
      R__b << fTextFont;
   }
}

//______________________________________________________________________________
void TAttText::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttText.

   TClass *R__cl  = TAttText::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fTextAngle", &fTextAngle);
   R__insp.Inspect(R__cl, R__parent, "fTextSize", &fTextSize);
   R__insp.Inspect(R__cl, R__parent, "fTextAlign", &fTextAlign);
   R__insp.Inspect(R__cl, R__parent, "fTextColor", &fTextColor);
   R__insp.Inspect(R__cl, R__parent, "fTextFont", &fTextFont);
}

//______________________________________________________________________________
void TAtt3D::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAtt3D.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
   } else {
      R__b.WriteVersion(TAtt3D::IsA());
   }
}

//______________________________________________________________________________
void TAtt3D::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAtt3D.

   TClass *R__cl  = TAtt3D::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
}

//______________________________________________________________________________
void TBenchmark::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBenchmark.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TBenchmark::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBenchmark.

   TClass *R__cl  = TBenchmark::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNbench", &fNbench);
   R__insp.Inspect(R__cl, R__parent, "fNmax", &fNmax);
   R__insp.Inspect(R__cl, R__parent, "*fNames", &fNames);
   R__insp.Inspect(R__cl, R__parent, "*fRealTime", &fRealTime);
   R__insp.Inspect(R__cl, R__parent, "*fCpuTime", &fCpuTime);
   R__insp.Inspect(R__cl, R__parent, "*fTimer", &fTimer);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TBrowser::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBrowser.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TBrowser::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBrowser.

   TClass *R__cl  = TBrowser::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fImp", &fImp);
   R__insp.Inspect(R__cl, R__parent, "*fTimer", &fTimer);
   R__insp.Inspect(R__cl, R__parent, "*fLastSelectedObject", &fLastSelectedObject);
   R__insp.Inspect(R__cl, R__parent, "*fContextMenu", &fContextMenu);
   R__insp.Inspect(R__cl, R__parent, "fNeedRefresh", &fNeedRefresh);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TBrowserImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBrowserImp.

   ::Error("TBrowserImp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TBrowserImp::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBrowserImp.

   TClass *R__cl  = TBrowserImp::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fBrowser", &fBrowser);
   R__insp.Inspect(R__cl, R__parent, "fShowCycles", &fShowCycles);
}

//______________________________________________________________________________
void TBuffer::Streamer(TBuffer &R__b)
{
   // Stream an object of class TBuffer.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TBuffer::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TBuffer.

   TClass *R__cl  = TBuffer::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fMode", &fMode);
   R__insp.Inspect(R__cl, R__parent, "fVersion", &fVersion);
   R__insp.Inspect(R__cl, R__parent, "fBufSize", &fBufSize);
   R__insp.Inspect(R__cl, R__parent, "*fBuffer", &fBuffer);
   R__insp.Inspect(R__cl, R__parent, "*fBufCur", &fBufCur);
   R__insp.Inspect(R__cl, R__parent, "*fBufMax", &fBufMax);
   R__insp.Inspect(R__cl, R__parent, "fMapCount", &fMapCount);
   R__insp.Inspect(R__cl, R__parent, "fMapSize", &fMapSize);
   R__insp.Inspect(R__cl, R__parent, "*fReadMap", &fReadMap);
   R__insp.Inspect(R__cl, R__parent, "*fWriteMap", &fWriteMap);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TCanvasImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCanvasImp.

   ::Error("TCanvasImp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TCanvasImp::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TCanvasImp.

   TClass *R__cl  = TCanvasImp::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fCanvas", &fCanvas);
}

//______________________________________________________________________________
void TColor::Streamer(TBuffer &R__b)
{
   // Stream an object of class TColor.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fNumber;
      R__b >> fRed;
      R__b >> fGreen;
      R__b >> fBlue;
      R__b >> fHue;
      R__b >> fLight;
      R__b >> fSaturation;
      R__b.CheckByteCount(R__s, R__c, TColor::IsA());
   } else {
      R__c = R__b.WriteVersion(TColor::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fNumber;
      R__b << fRed;
      R__b << fGreen;
      R__b << fBlue;
      R__b << fHue;
      R__b << fLight;
      R__b << fSaturation;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TColor::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TColor.

   TClass *R__cl  = TColor::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNumber", &fNumber);
   R__insp.Inspect(R__cl, R__parent, "fRed", &fRed);
   R__insp.Inspect(R__cl, R__parent, "fGreen", &fGreen);
   R__insp.Inspect(R__cl, R__parent, "fBlue", &fBlue);
   R__insp.Inspect(R__cl, R__parent, "fHue", &fHue);
   R__insp.Inspect(R__cl, R__parent, "fLight", &fLight);
   R__insp.Inspect(R__cl, R__parent, "fSaturation", &fSaturation);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TContextMenu::Streamer(TBuffer &R__b)
{
   // Stream an object of class TContextMenu.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TContextMenu::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TContextMenu.

   TClass *R__cl  = TContextMenu::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fContextMenuImp", &fContextMenuImp);
   R__insp.Inspect(R__cl, R__parent, "*fSelectedMethod", &fSelectedMethod);
   R__insp.Inspect(R__cl, R__parent, "*fSelectedObject", &fSelectedObject);
   R__insp.Inspect(R__cl, R__parent, "*fSelectedCanvas", &fSelectedCanvas);
   R__insp.Inspect(R__cl, R__parent, "*fSelectedPad", &fSelectedPad);
   R__insp.Inspect(R__cl, R__parent, "*fBrowser", &fBrowser);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TContextMenuImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TContextMenuImp.

   ::Error("TContextMenuImp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TContextMenuImp::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TContextMenuImp.

   TClass *R__cl  = TContextMenuImp::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fContextMenu", &fContextMenu);
}

//______________________________________________________________________________
void TControlBarImp::Streamer(TBuffer &R__b)
{
   // Stream an object of class TControlBarImp.

   ::Error("TControlBarImp::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TControlBarImp::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TControlBarImp.

   TClass *R__cl  = TControlBarImp::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fControlBar", &fControlBar);
   R__insp.Inspect(R__cl, R__parent, "fXpos", &fXpos);
   R__insp.Inspect(R__cl, R__parent, "fYpos", &fYpos);
}

//______________________________________________________________________________
void TDatime::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDatime.

   TClass *R__cl  = TDatime::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fDatime", &fDatime);
}

//______________________________________________________________________________
void TDirectory::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TDirectory.

   TClass *R__cl  = TDirectory::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fModified", &fModified);
   R__insp.Inspect(R__cl, R__parent, "fWritable", &fWritable);
   fDatimeC.ShowMembers(R__insp, strcat(R__parent,"fDatimeC.")); R__parent[R__ncp] = 0;
   fDatimeM.ShowMembers(R__insp, strcat(R__parent,"fDatimeM.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fNbytesKeys", &fNbytesKeys);
   R__insp.Inspect(R__cl, R__parent, "fNbytesName", &fNbytesName);
   R__insp.Inspect(R__cl, R__parent, "fSeekDir", &fSeekDir);
   R__insp.Inspect(R__cl, R__parent, "fSeekParent", &fSeekParent);
   R__insp.Inspect(R__cl, R__parent, "fSeekKeys", &fSeekKeys);
   R__insp.Inspect(R__cl, R__parent, "*fFile", &fFile);
   R__insp.Inspect(R__cl, R__parent, "*fMother", &fMother);
   R__insp.Inspect(R__cl, R__parent, "*fList", &fList);
   R__insp.Inspect(R__cl, R__parent, "*fKeys", &fKeys);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TEnv::Streamer(TBuffer &R__b)
{
   // Stream an object of class TEnv.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TEnv::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TEnv.

   TClass *R__cl  = TEnv::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "*fTable", &fTable);
   fRcName.ShowMembers(R__insp, strcat(R__parent,"fRcName.")); R__parent[R__ncp] = 0;
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TFile::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFile.

   TClass *R__cl  = TFile::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fD", &fD);
   R__insp.Inspect(R__cl, R__parent, "fBEGIN", &fBEGIN);
   R__insp.Inspect(R__cl, R__parent, "fEND", &fEND);
   R__insp.Inspect(R__cl, R__parent, "fVersion", &fVersion);
   R__insp.Inspect(R__cl, R__parent, "fCompress", &fCompress);
   fOption.ShowMembers(R__insp, strcat(R__parent,"fOption.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fUnits", &fUnits);
   R__insp.Inspect(R__cl, R__parent, "fSeekFree", &fSeekFree);
   R__insp.Inspect(R__cl, R__parent, "fNbytesFree", &fNbytesFree);
   R__insp.Inspect(R__cl, R__parent, "fWritten", &fWritten);
   R__insp.Inspect(R__cl, R__parent, "fSumBuffer", &fSumBuffer);
   R__insp.Inspect(R__cl, R__parent, "fSum2Buffer", &fSum2Buffer);
   R__insp.Inspect(R__cl, R__parent, "*fFree", &fFree);
   R__insp.Inspect(R__cl, R__parent, "fBytesWrite", &fBytesWrite);
   R__insp.Inspect(R__cl, R__parent, "fBytesRead", &fBytesRead);
   TDirectory::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TFileHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class TFileHandler.

   TSysEvtHandler::Streamer(R__b);
}

//______________________________________________________________________________
void TFileHandler::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFileHandler.

   TClass *R__cl  = TFileHandler::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFileNum", &fFileNum);
   R__insp.Inspect(R__cl, R__parent, "fMask", &fMask);
   TSysEvtHandler::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TGuiFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGuiFactory.

   TNamed::Streamer(R__b);
}

//______________________________________________________________________________
void TGuiFactory::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TGuiFactory.

   TClass *R__cl  = TGuiFactory::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TStyle::Streamer(TBuffer &R__b)
{
   // Stream an object of class TStyle.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      TAttMarker::Streamer(R__b);
      TAttText::Streamer(R__b);
      fXaxis.Streamer(R__b);
      fYaxis.Streamer(R__b);
      fZaxis.Streamer(R__b);
      R__b >> fBarWidth;
      R__b >> fBarOffset;
      R__b >> fDrawBorder;
      R__b >> fOptLogx;
      R__b >> fOptLogy;
      R__b >> fOptLogz;
      R__b >> fOptDate;
      R__b >> fOptStat;
      R__b >> fOptTitle;
      R__b >> fOptFile;
      R__b >> fOptFit;
      R__b >> fErrorMarker;
      R__b >> fShowEventStatus;
      R__b >> fErrorMsize;
      R__b >> fErrorX;
      R__b >> fFuncColor;
      R__b >> fFuncStyle;
      R__b >> fFuncWidth;
      R__b >> fFrameFillColor;
      R__b >> fFrameLineColor;
      R__b >> fFrameFillStyle;
      R__b >> fFrameLineStyle;
      R__b >> fFrameLineWidth;
      R__b >> fFrameBorderSize;
      R__b >> fFrameBorderMode;
      R__b >> fHistFillColor;
      R__b >> fHistLineColor;
      R__b >> fHistFillStyle;
      R__b >> fHistLineStyle;
      R__b >> fHistLineWidth;
      R__b >> fCanvasColor;
      R__b >> fCanvasBorderSize;
      R__b >> fCanvasBorderMode;
      R__b >> fCanvasDefH;
      R__b >> fCanvasDefW;
      R__b >> fCanvasDefX;
      R__b >> fCanvasDefY;
      R__b >> fPadColor;
      R__b >> fPadBorderSize;
      R__b >> fPadBorderMode;
      R__b >> fPadBottomMargin;
      R__b >> fPadTopMargin;
      R__b >> fPadLeftMargin;
      R__b >> fPadRightMargin;
      R__b >> fPadGridX;
      R__b >> fPadGridY;
      R__b >> fPadTickX;
      R__b >> fPadTickY;
      R__b >> fPaperSizeX;
      R__b >> fPaperSizeY;
      R__b >> fScreenFactor;
      R__b >> fStatColor;
      R__b >> fStatTextColor;
      R__b >> fStatBorderSize;
      R__b >> fStatFont;
      R__b >> fStatStyle;
      R__b >> fStatX;
      R__b >> fStatY;
      R__b >> fStatW;
      R__b >> fStatH;
      R__b >> fTitleColor;
      R__b >> fTitleTextColor;
      R__b >> fTitleBorderSize;
      R__b >> fTitleFont;
      R__b >> fTitleStyle;
      R__b >> fTitleX;
      R__b >> fTitleY;
      R__b >> fTitleW;
      R__b >> fTitleH;
      R__b >> fLegoInnerR;
      fPalette.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 30; R__i++)
         fLineStyle[R__i].Streamer(R__b);
      fHeaderPS.Streamer(R__b);
      R__b >> fLineScalePS;
      R__b >> fTimeOffset;
      R__b.CheckByteCount(R__s, R__c, TStyle::IsA());
   } else {
      R__c = R__b.WriteVersion(TStyle::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      TAttMarker::Streamer(R__b);
      TAttText::Streamer(R__b);
      fXaxis.Streamer(R__b);
      fYaxis.Streamer(R__b);
      fZaxis.Streamer(R__b);
      R__b << fBarWidth;
      R__b << fBarOffset;
      R__b << fDrawBorder;
      R__b << fOptLogx;
      R__b << fOptLogy;
      R__b << fOptLogz;
      R__b << fOptDate;
      R__b << fOptStat;
      R__b << fOptTitle;
      R__b << fOptFile;
      R__b << fOptFit;
      R__b << fErrorMarker;
      R__b << fShowEventStatus;
      R__b << fErrorMsize;
      R__b << fErrorX;
      R__b << fFuncColor;
      R__b << fFuncStyle;
      R__b << fFuncWidth;
      R__b << fFrameFillColor;
      R__b << fFrameLineColor;
      R__b << fFrameFillStyle;
      R__b << fFrameLineStyle;
      R__b << fFrameLineWidth;
      R__b << fFrameBorderSize;
      R__b << fFrameBorderMode;
      R__b << fHistFillColor;
      R__b << fHistLineColor;
      R__b << fHistFillStyle;
      R__b << fHistLineStyle;
      R__b << fHistLineWidth;
      R__b << fCanvasColor;
      R__b << fCanvasBorderSize;
      R__b << fCanvasBorderMode;
      R__b << fCanvasDefH;
      R__b << fCanvasDefW;
      R__b << fCanvasDefX;
      R__b << fCanvasDefY;
      R__b << fPadColor;
      R__b << fPadBorderSize;
      R__b << fPadBorderMode;
      R__b << fPadBottomMargin;
      R__b << fPadTopMargin;
      R__b << fPadLeftMargin;
      R__b << fPadRightMargin;
      R__b << fPadGridX;
      R__b << fPadGridY;
      R__b << fPadTickX;
      R__b << fPadTickY;
      R__b << fPaperSizeX;
      R__b << fPaperSizeY;
      R__b << fScreenFactor;
      R__b << fStatColor;
      R__b << fStatTextColor;
      R__b << fStatBorderSize;
      R__b << fStatFont;
      R__b << fStatStyle;
      R__b << fStatX;
      R__b << fStatY;
      R__b << fStatW;
      R__b << fStatH;
      R__b << fTitleColor;
      R__b << fTitleTextColor;
      R__b << fTitleBorderSize;
      R__b << fTitleFont;
      R__b << fTitleStyle;
      R__b << fTitleX;
      R__b << fTitleY;
      R__b << fTitleW;
      R__b << fTitleH;
      R__b << fLegoInnerR;
      fPalette.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 30; R__i++)
         fLineStyle[R__i].Streamer(R__b);
      fHeaderPS.Streamer(R__b);
      R__b << fLineScalePS;
      R__b << fTimeOffset;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

//______________________________________________________________________________
void TStyle::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TStyle.

   TClass *R__cl  = TStyle::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   fXaxis.ShowMembers(R__insp, strcat(R__parent,"fXaxis.")); R__parent[R__ncp] = 0;
   fYaxis.ShowMembers(R__insp, strcat(R__parent,"fYaxis.")); R__parent[R__ncp] = 0;
   fZaxis.ShowMembers(R__insp, strcat(R__parent,"fZaxis.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fBarWidth", &fBarWidth);
   R__insp.Inspect(R__cl, R__parent, "fBarOffset", &fBarOffset);
   R__insp.Inspect(R__cl, R__parent, "fDrawBorder", &fDrawBorder);
   R__insp.Inspect(R__cl, R__parent, "fOptLogx", &fOptLogx);
   R__insp.Inspect(R__cl, R__parent, "fOptLogy", &fOptLogy);
   R__insp.Inspect(R__cl, R__parent, "fOptLogz", &fOptLogz);
   R__insp.Inspect(R__cl, R__parent, "fOptDate", &fOptDate);
   R__insp.Inspect(R__cl, R__parent, "fOptStat", &fOptStat);
   R__insp.Inspect(R__cl, R__parent, "fOptTitle", &fOptTitle);
   R__insp.Inspect(R__cl, R__parent, "fOptFile", &fOptFile);
   R__insp.Inspect(R__cl, R__parent, "fOptFit", &fOptFit);
   R__insp.Inspect(R__cl, R__parent, "fErrorMarker", &fErrorMarker);
   R__insp.Inspect(R__cl, R__parent, "fShowEventStatus", &fShowEventStatus);
   R__insp.Inspect(R__cl, R__parent, "fErrorMsize", &fErrorMsize);
   R__insp.Inspect(R__cl, R__parent, "fErrorX", &fErrorX);
   R__insp.Inspect(R__cl, R__parent, "fFuncColor", &fFuncColor);
   R__insp.Inspect(R__cl, R__parent, "fFuncStyle", &fFuncStyle);
   R__insp.Inspect(R__cl, R__parent, "fFuncWidth", &fFuncWidth);
   R__insp.Inspect(R__cl, R__parent, "fFrameFillColor", &fFrameFillColor);
   R__insp.Inspect(R__cl, R__parent, "fFrameLineColor", &fFrameLineColor);
   R__insp.Inspect(R__cl, R__parent, "fFrameFillStyle", &fFrameFillStyle);
   R__insp.Inspect(R__cl, R__parent, "fFrameLineStyle", &fFrameLineStyle);
   R__insp.Inspect(R__cl, R__parent, "fFrameLineWidth", &fFrameLineWidth);
   R__insp.Inspect(R__cl, R__parent, "fFrameBorderSize", &fFrameBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fFrameBorderMode", &fFrameBorderMode);
   R__insp.Inspect(R__cl, R__parent, "fHistFillColor", &fHistFillColor);
   R__insp.Inspect(R__cl, R__parent, "fHistLineColor", &fHistLineColor);
   R__insp.Inspect(R__cl, R__parent, "fHistFillStyle", &fHistFillStyle);
   R__insp.Inspect(R__cl, R__parent, "fHistLineStyle", &fHistLineStyle);
   R__insp.Inspect(R__cl, R__parent, "fHistLineWidth", &fHistLineWidth);
   R__insp.Inspect(R__cl, R__parent, "fCanvasColor", &fCanvasColor);
   R__insp.Inspect(R__cl, R__parent, "fCanvasBorderSize", &fCanvasBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fCanvasBorderMode", &fCanvasBorderMode);
   R__insp.Inspect(R__cl, R__parent, "fCanvasDefH", &fCanvasDefH);
   R__insp.Inspect(R__cl, R__parent, "fCanvasDefW", &fCanvasDefW);
   R__insp.Inspect(R__cl, R__parent, "fCanvasDefX", &fCanvasDefX);
   R__insp.Inspect(R__cl, R__parent, "fCanvasDefY", &fCanvasDefY);
   R__insp.Inspect(R__cl, R__parent, "fPadColor", &fPadColor);
   R__insp.Inspect(R__cl, R__parent, "fPadBorderSize", &fPadBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fPadBorderMode", &fPadBorderMode);
   R__insp.Inspect(R__cl, R__parent, "fPadBottomMargin", &fPadBottomMargin);
   R__insp.Inspect(R__cl, R__parent, "fPadTopMargin", &fPadTopMargin);
   R__insp.Inspect(R__cl, R__parent, "fPadLeftMargin", &fPadLeftMargin);
   R__insp.Inspect(R__cl, R__parent, "fPadRightMargin", &fPadRightMargin);
   R__insp.Inspect(R__cl, R__parent, "fPadGridX", &fPadGridX);
   R__insp.Inspect(R__cl, R__parent, "fPadGridY", &fPadGridY);
   R__insp.Inspect(R__cl, R__parent, "fPadTickX", &fPadTickX);
   R__insp.Inspect(R__cl, R__parent, "fPadTickY", &fPadTickY);
   R__insp.Inspect(R__cl, R__parent, "fPaperSizeX", &fPaperSizeX);
   R__insp.Inspect(R__cl, R__parent, "fPaperSizeY", &fPaperSizeY);
   R__insp.Inspect(R__cl, R__parent, "fScreenFactor", &fScreenFactor);
   R__insp.Inspect(R__cl, R__parent, "fStatColor", &fStatColor);
   R__insp.Inspect(R__cl, R__parent, "fStatTextColor", &fStatTextColor);
   R__insp.Inspect(R__cl, R__parent, "fStatBorderSize", &fStatBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fStatFont", &fStatFont);
   R__insp.Inspect(R__cl, R__parent, "fStatStyle", &fStatStyle);
   R__insp.Inspect(R__cl, R__parent, "fStatX", &fStatX);
   R__insp.Inspect(R__cl, R__parent, "fStatY", &fStatY);
   R__insp.Inspect(R__cl, R__parent, "fStatW", &fStatW);
   R__insp.Inspect(R__cl, R__parent, "fStatH", &fStatH);
   R__insp.Inspect(R__cl, R__parent, "fTitleColor", &fTitleColor);
   R__insp.Inspect(R__cl, R__parent, "fTitleTextColor", &fTitleTextColor);
   R__insp.Inspect(R__cl, R__parent, "fTitleBorderSize", &fTitleBorderSize);
   R__insp.Inspect(R__cl, R__parent, "fTitleFont", &fTitleFont);
   R__insp.Inspect(R__cl, R__parent, "fTitleStyle", &fTitleStyle);
   R__insp.Inspect(R__cl, R__parent, "fTitleX", &fTitleX);
   R__insp.Inspect(R__cl, R__parent, "fTitleY", &fTitleY);
   R__insp.Inspect(R__cl, R__parent, "fTitleW", &fTitleW);
   R__insp.Inspect(R__cl, R__parent, "fTitleH", &fTitleH);
   R__insp.Inspect(R__cl, R__parent, "fLegoInnerR", &fLegoInnerR);
   fPalette.ShowMembers(R__insp, strcat(R__parent,"fPalette.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fLineStyle[30]", fLineStyle);
   fHeaderPS.ShowMembers(R__insp, strcat(R__parent,"fHeaderPS.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "fLineScalePS", &fLineScalePS);
   R__insp.Inspect(R__cl, R__parent, "fTimeOffset", &fTimeOffset);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TView::Streamer(TBuffer &R__b)
{
   // Stream an object of class TView.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b >> fSystem;
      R__b >> fLatitude;
      R__b >> fLongitude;
      R__b >> fPsi;
      R__b.ReadStaticArray(fTN);
      R__b.ReadStaticArray(fTB);
      R__b.ReadStaticArray(fRmax);
      R__b.ReadStaticArray(fRmin);
      R__b.ReadStaticArray(fTnorm);
      R__b.ReadStaticArray(fTback);
      R__b.ReadStaticArray(fX1);
      R__b.ReadStaticArray(fX2);
      R__b.ReadStaticArray(fY1);
      R__b.ReadStaticArray(fY2);
      R__b.ReadStaticArray(fZ1);
      R__b.ReadStaticArray(fZ2);
      R__b >> fOutline;
      R__b >> fDefaultOutline;
      R__b >> fAutoRange;
   } else {
      R__b.WriteVersion(TView::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      R__b << fSystem;
      R__b << fLatitude;
      R__b << fLongitude;
      R__b << fPsi;
      R__b.WriteArray(fTN, 12);
      R__b.WriteArray(fTB, 12);
      R__b.WriteArray(fRmax, 3);
      R__b.WriteArray(fRmin, 3);
      R__b.WriteArray(fTnorm, 12);
      R__b.WriteArray(fTback, 12);
      R__b.WriteArray(fX1, 3);
      R__b.WriteArray(fX2, 3);
      R__b.WriteArray(fY1, 3);
      R__b.WriteArray(fY2, 3);
      R__b.WriteArray(fZ1, 3);
      R__b.WriteArray(fZ2, 3);
      R__b << fOutline;
      R__b << fDefaultOutline;
      R__b << fAutoRange;
   }
}

//______________________________________________________________________________
void TView::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TView.

   TClass *R__cl  = TView::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fSystem", &fSystem);
   R__insp.Inspect(R__cl, R__parent, "fLatitude", &fLatitude);
   R__insp.Inspect(R__cl, R__parent, "fLongitude", &fLongitude);
   R__insp.Inspect(R__cl, R__parent, "fPsi", &fPsi);
   R__insp.Inspect(R__cl, R__parent, "fTN[12]", fTN);
   R__insp.Inspect(R__cl, R__parent, "fTB[12]", fTB);
   R__insp.Inspect(R__cl, R__parent, "fRmax[3]", fRmax);
   R__insp.Inspect(R__cl, R__parent, "fRmin[3]", fRmin);
   R__insp.Inspect(R__cl, R__parent, "fTnorm[12]", fTnorm);
   R__insp.Inspect(R__cl, R__parent, "fTback[12]", fTback);
   R__insp.Inspect(R__cl, R__parent, "fX1[3]", fX1);
   R__insp.Inspect(R__cl, R__parent, "fX2[3]", fX2);
   R__insp.Inspect(R__cl, R__parent, "fY1[3]", fY1);
   R__insp.Inspect(R__cl, R__parent, "fY2[3]", fY2);
   R__insp.Inspect(R__cl, R__parent, "fZ1[3]", fZ1);
   R__insp.Inspect(R__cl, R__parent, "fZ2[3]", fZ2);
   R__insp.Inspect(R__cl, R__parent, "*fOutline", &fOutline);
   R__insp.Inspect(R__cl, R__parent, "fDefaultOutline", &fDefaultOutline);
   R__insp.Inspect(R__cl, R__parent, "fAutoRange", &fAutoRange);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TVirtualX::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualX.

   TNamed::Streamer(R__b);
   TAttLine::Streamer(R__b);
   TAttFill::Streamer(R__b);
   TAttText::Streamer(R__b);
   TAttMarker::Streamer(R__b);
}

//______________________________________________________________________________
void TVirtualX::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVirtualX.

   TClass *R__cl  = TVirtualX::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fDrawMode", &fDrawMode);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TVirtualFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualFitter.

   TObject::Streamer(R__b);
}

//______________________________________________________________________________
void TVirtualFitter::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVirtualFitter.

   TClass *R__cl  = TVirtualFitter::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TVirtualPad::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualPad.

   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(); if (R__v) { }
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      TAttPad::Streamer(R__b);
   } else {
      R__b.WriteVersion(TVirtualPad::IsA());
      TObject::Streamer(R__b);
      TAttLine::Streamer(R__b);
      TAttFill::Streamer(R__b);
      TAttPad::Streamer(R__b);
   }
}

//______________________________________________________________________________
void TVirtualPad::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVirtualPad.

   TClass *R__cl  = TVirtualPad::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fResizing", &fResizing);
   TObject::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttPad::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
void TVirtualPS::Streamer(TBuffer &R__b)
{
   // Stream an object of class TVirtualPS.

   TNamed::Streamer(R__b);
   TAttLine::Streamer(R__b);
   TAttFill::Streamer(R__b);
   TAttMarker::Streamer(R__b);
   TAttText::Streamer(R__b);
}

//______________________________________________________________________________
void TVirtualPS::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TVirtualPS.

   TClass *R__cl  = TVirtualPS::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   TNamed::ShowMembers(R__insp, R__parent);
   TAttLine::ShowMembers(R__insp, R__parent);
   TAttFill::ShowMembers(R__insp, R__parent);
   TAttMarker::ShowMembers(R__insp, R__parent);
   TAttText::ShowMembers(R__insp, R__parent);
}

/********************************************************
* G__Base1.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif

extern "C" void G__cpp_reset_tagtableG__Base1();

extern "C" void G__set_cpp_environmentG__Base1() {
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
  G__add_compiledheader("TAttPad.h");
  G__add_compiledheader("TStyle.h");
  G__add_compiledheader("TBrowser.h");
  G__add_compiledheader("TAttText.h");
  G__add_compiledheader("TBaseClass.h");
  G__add_compiledheader("TBuffer.h");
  G__add_compiledheader("TClass.h");
  G__add_compiledheader("TColor.h");
  G__add_compiledheader("TContextMenu.h");
  G__add_compiledheader("TDataMember.h");
  G__add_compiledheader("TDataType.h");
  G__add_compiledheader("TDatime.h");
  G__add_compiledheader("TDirectory.h");
  G__add_compiledheader("TEnv.h");
  G__add_compiledheader("TAtt3D.h");
  G__add_compiledheader("TFile.h");
  G__add_compiledheader("TFree.h");
  G__add_compiledheader("TFunction.h");
  G__add_compiledheader("TGlobal.h");
  G__add_compiledheader("TKey.h");
  G__add_compiledheader("TGuiFactory.h");
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
  G__add_compiledheader("TError.h");
  G__add_compiledheader("TVirtualFitter.h");
  G__add_compiledheader("TString.h");
  G__add_compiledheader("TStringLong.h");
  G__add_compiledheader("TObjString.h");
  G__add_compiledheader("TSystem.h");
  G__add_compiledheader("TSysEvtHandler.h");
  G__add_compiledheader("TSystemFile.h");
  G__add_compiledheader("TStopwatch.h");
  G__add_compiledheader("TRandom.h");
  G__add_compiledheader("TBenchmark.h");
  G__add_compiledheader("TTime.h");
  G__add_compiledheader("TTimer.h");
  G__add_compiledheader("TView.h");
  G__add_compiledheader("TVirtualPad.h");
  G__add_compiledheader("TVirtualX.h");
  G__add_compiledheader("TVirtualGL.h");
  G__add_compiledheader("TVirtualPS.h");
  G__add_compiledheader("TAttAxis.h");
  G__cpp_reset_tagtableG__Base1();
}
extern "C" int G__cpp_dllrevG__Base1() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TBuffer */
static int G__TBuffer_TBuffer_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBuffer *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TBuffer(
(TBuffer::EMode)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(void*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TBuffer((TBuffer::EMode)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      p = new TBuffer((TBuffer::EMode)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBuffer);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_MapObject_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->MapObject((const TObject*)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->MapObject((const TObject*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Reset_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_InitMap_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->InitMap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ResetMap_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ResetMap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetReadMode_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetReadMode();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetReadParam_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetReadParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetWriteMode_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetWriteMode();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetWriteParam_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetWriteParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetBuffer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetBuffer((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetBufferOffset_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetBufferOffset((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetBufferOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Buffer_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TBuffer*)(G__getstructoffset()))->Buffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_BufferSize_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TBuffer*)(G__getstructoffset()))->BufferSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_DetachBuffer_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->DetachBuffer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Length_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TBuffer*)(G__getstructoffset()))->Length());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_CheckByteCount_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->CheckByteCount((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(const TClass*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetByteCount_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetByteCount((UInt_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetByteCount((UInt_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_IsReading_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TBuffer*)(G__getstructoffset()))->IsReading());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_IsWriting_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TBuffer*)(G__getstructoffset()))->IsWriting());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadBuf_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadBuf((void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteBuf_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteBuf((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadString_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->ReadString((char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteString_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteString((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadVersion_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,115,(long)((TBuffer*)(G__getstructoffset()))->ReadVersion((UInt_t*)G__int(libp->para[0]),(UInt_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,115,(long)((TBuffer*)(G__getstructoffset()))->ReadVersion((UInt_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,115,(long)((TBuffer*)(G__getstructoffset()))->ReadVersion());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteVersion_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,104,(long)((TBuffer*)(G__getstructoffset()))->WriteVersion((const TClass*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,104,(long)((TBuffer*)(G__getstructoffset()))->WriteVersion((const TClass*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadClass_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->ReadClass((const TClass*)G__int(libp->para[0]),(UInt_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->ReadClass((const TClass*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->ReadClass());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteClass_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteClass((const TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadObject_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->ReadObject((const TClass*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteObject_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteObject((const TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(Char_t**)libp->para[0].ref:*(Char_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(UChar_t**)libp->para[0].ref:*(UChar_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(Short_t**)libp->para[0].ref:*(Short_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(UShort_t**)libp->para[0].ref:*(UShort_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(Int_t**)libp->para[0].ref:*(Int_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(UInt_t**)libp->para[0].ref:*(UInt_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(Long_t**)libp->para[0].ref:*(Long_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(ULong_t**)libp->para[0].ref:*(ULong_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(Float_t**)libp->para[0].ref:*(Float_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(libp->para[0].ref?*(Double_t**)libp->para[0].ref:*(Double_t**)(&G__Mlong(libp->para[0]))));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Char_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((UChar_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Short_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((UShort_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Int_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((UInt_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Long_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((ULong_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Float_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Double_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const UChar_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Short_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const UShort_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const UInt_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Long_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const ULong_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Double_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((UChar_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Short_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((UShort_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((UInt_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Long_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((ULong_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Double_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const UChar_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Short_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const UShort_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const UInt_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Long_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const ULong_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Double_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(Char_t*)G__Charref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(UChar_t*)G__UCharref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(Short_t*)G__Shortref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(UShort_t*)G__UShortref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(Int_t*)G__Intref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(UInt_t*)G__UIntref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(Long_t*)G__Longref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(ULong_t*)G__ULongref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(Float_t*)G__Floatref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(*(Double_t*)G__Doubleref(&libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>((Char_t*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Char_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((UChar_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Short_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((UShort_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((UInt_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Long_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((ULong_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Float_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((const Char_t*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetGlobalReadParam_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetGlobalReadParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetGlobalWriteParam_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetGlobalWriteParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_GetGlobalReadParam_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->GetGlobalReadParam());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_GetGlobalWriteParam_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->GetGlobalWriteParam());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_DeclFileName_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_DeclFileLine_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ImplFileName_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ImplFileLine_7_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Class_Version_8_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBuffer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Class_9_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_IsA_0_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TBuffer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ShowMembers_1_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Streamer_2_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Dictionary_3_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBuffer_wATBuffer_4_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBuffer *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBuffer *)((G__getstructoffset())+sizeof(TBuffer)*i);
   else  delete (TBuffer *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TBrowser */
static int G__TBrowser_TBrowser_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TBrowser((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TBrowser((const char*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TBrowser[G__getaryconstruct()];
   else                    p=new TBrowser;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TBrowser((const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_TBrowser_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowser *p=NULL;
      p = new TBrowser(
(const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Add_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Add((TObject*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Add((TObject*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Create_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Create((TObject*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Create();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ExecuteDefaultAction_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->ExecuteDefaultAction((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetBrowserImp_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TBrowser*)(G__getstructoffset()))->GetBrowserImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetContextMenu_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->GetContextMenu());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetRefreshFlag_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TBrowser*)(G__getstructoffset()))->GetRefreshFlag());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_GetSelected_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_SetRefreshFlag_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->SetRefreshFlag((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Iconify_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_RecursiveRemove_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Refresh_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Refresh();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_SetSelected_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->SetSelected((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Show_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_DeclFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowser*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_DeclFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowser*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ImplFileName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowser*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ImplFileLine_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowser*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Class_Version_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBrowser*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Class_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowser*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_IsA_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TBrowser*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_ShowMembers_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Streamer_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowser_Dictionary_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowser*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBrowser_TBrowser_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TBrowser *p;
   p=new TBrowser(*(TBrowser*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowser);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBrowser_wATBrowser_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBrowser *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBrowser *)((G__getstructoffset())+sizeof(TBrowser)*i);
   else  delete (TBrowser *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDatime */
static int G__TDatime_TDatime_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDatime *p=NULL;
   if(G__getaryconstruct()) p=new TDatime[G__getaryconstruct()];
   else                    p=new TDatime;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_TDatime_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDatime *p=NULL;
      p = new TDatime(*(TDatime*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_TDatime_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDatime *p=NULL;
      p = new TDatime((UInt_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_TDatime_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDatime *p=NULL;
      p = new TDatime((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_TDatime_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDatime *p=NULL;
      p = new TDatime(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_operatoreQ_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TDatime *pobj,xobj=((TDatime*)(G__getstructoffset()))->operator=(*(TDatime*)libp->para[0].ref);
        pobj=new TDatime(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_AsString_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TDatime*)(G__getstructoffset()))->AsString());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Convert_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((const TDatime*)(G__getstructoffset()))->Convert());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Copy_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Copy(*(TDatime*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Get_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((const TDatime*)(G__getstructoffset()))->Get());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_GetDate_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->GetDate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_GetTime_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->GetTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_FillBuffer_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Print_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ReadBuffer_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->ReadBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Set_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Set();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Set_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Set((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Set_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Set((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Sizeof_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TDatime*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_GetDateTime_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->GetDateTime((UInt_t)G__int(libp->para[0]),*(Int_t*)G__Intref(&libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_DeclFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDatime*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_DeclFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ImplFileName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDatime*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ImplFileLine_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Class_Version_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDatime*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Class_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDatime*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_IsA_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TDatime*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ShowMembers_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Streamer_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Dictionary_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDatime_wATDatime_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDatime *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDatime *)((G__getstructoffset())+sizeof(TDatime)*i);
   else  delete (TDatime *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFile */
static int G__TFile_TFile_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TFile *p=NULL;
   if(G__getaryconstruct()) p=new TFile[G__getaryconstruct()];
   else                    p=new TFile;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_TFile_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TFile *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TFile(
(const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TFile(
(const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TFile((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TFile((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Close_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Copy_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Delete_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Delete((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Delete();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Draw_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_FillBuffer_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Flush_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Flush();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetBestBuffer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetBestBuffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetCompressionLevel_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetCompressionLevel());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetCompressionFactor_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TFile*)(G__getstructoffset()))->GetCompressionFactor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetEND_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetEND());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetFd_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TFile*)(G__getstructoffset()))->GetFd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetListOfFree_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->GetListOfFree());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetNfree_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetNfree());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetOption_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TFile*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetBytesRead_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((const TFile*)(G__getstructoffset()))->GetBytesRead());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetBytesWritten_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((const TFile*)(G__getstructoffset()))->GetBytesWritten());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetVersion_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TFile*)(G__getstructoffset()))->GetVersion());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetRecordHeader_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetRecordHeader((char*)G__int(libp->para[0]),(Seek_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),*(Int_t*)G__Intref(&libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4]),*(Int_t*)G__Intref(&libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_IsOpen_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TFile*)(G__getstructoffset()))->IsOpen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ls_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_MakeFree_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->MakeFree((Seek_t)G__int(libp->para[0]),(Seek_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Map_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Map();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Paint_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Print_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ReadBuffer_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFile*)(G__getstructoffset()))->ReadBuffer((char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ReadFree_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->ReadFree();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Recover_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Recover();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Seek_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Seek((Seek_t)G__int(libp->para[0]),(TFile::ERelativeTo)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Seek((Seek_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetCompressionLevel_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetCompressionLevel((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetCompressionLevel();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetEND_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetEND((Seek_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetOption_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetOption((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetOption();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Sizeof_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TFile*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SumBuffer_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SumBuffer((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_WriteBuffer_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFile*)(G__getstructoffset()))->WriteBuffer((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Write_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_WriteFree_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->WriteFree();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_WriteHeader_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->WriteHeader();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Open_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])));
      break;
   case 3:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetFileBytesRead_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFile*)(G__getstructoffset()))->GetFileBytesRead());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetFileBytesWritten_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFile*)(G__getstructoffset()))->GetFileBytesWritten());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetFileBytesRead_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetFileBytesRead((Double_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetFileBytesRead();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetFileBytesWritten_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetFileBytesWritten((Double_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetFileBytesWritten();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_DeclFileName_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_DeclFileLine_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ImplFileName_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ImplFileLine_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Class_Version_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Class_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_IsA_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ShowMembers_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Streamer_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Dictionary_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFile_wATFile_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFile *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFile *)((G__getstructoffset())+sizeof(TFile)*i);
   else  delete (TFile *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TDirectory */
static int G__TDirectory_TDirectory_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDirectory *p=NULL;
   if(G__getaryconstruct()) p=new TDirectory[G__getaryconstruct()];
   else                    p=new TDirectory;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_TDirectory_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TDirectory *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TDirectory(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TDirectory((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Append_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Append((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_AppendKey_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->AppendKey((TKey*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Browse_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Build_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Build();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Clear_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Close_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Copy_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_cd_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->cd((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->cd());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DeleteAll_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->DeleteAll((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->DeleteAll();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Delete_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Delete((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Delete();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Draw_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_FillBuffer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->FillBuffer(libp->para[0].ref?*(char**)libp->para[0].ref:*(char**)(&G__Mlong(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Get_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->Get((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetFile_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetFile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetKey_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetKey((const char*)G__int(libp->para[0]),(const Short_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetKey((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetList_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TDirectory*)(G__getstructoffset()))->GetList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetListOfKeys_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TDirectory*)(G__getstructoffset()))->GetListOfKeys());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetMother_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TDirectory*)(G__getstructoffset()))->GetMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetNkeys_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetNkeys());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetSeekDir_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetSeekDir());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetSeekParent_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetSeekParent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetSeekKeys_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetSeekKeys());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetPath_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TDirectory*)(G__getstructoffset()))->GetPath());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsFolder_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsModified_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->IsModified());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsWritable_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->IsWritable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ls_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_mkdir_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->mkdir((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->mkdir((const char*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Paint_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Print_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Purge_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Purge((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Purge();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_pwd_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TDirectory*)(G__getstructoffset()))->pwd();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ReadAll_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ReadAll((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ReadAll();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ReadKeys_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ReadKeys();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_RecursiveRemove_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Save_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Save();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_SaveSelf_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->SaveSelf((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->SaveSelf();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_SetModified_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->SetModified();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_SetMother_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->SetMother((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Sizeof_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TDirectory*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Write_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_WriteDirHeader_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->WriteDirHeader();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_WriteKeys_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->WriteKeys();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Cd_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->Cd((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DecodeNameCycle_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->DecodeNameCycle((const char*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,*(Short_t*)G__Shortref(&libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_EncodeNameCycle_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->EncodeNameCycle((char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Short_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DeclFileName_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDirectory*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DeclFileLine_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ImplFileName_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDirectory*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ImplFileLine_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Class_Version_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDirectory*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Class_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsA_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TDirectory*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ShowMembers_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Streamer_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Dictionary_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDirectory_wATDirectory_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TDirectory *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TDirectory *)((G__getstructoffset())+sizeof(TDirectory)*i);
   else  delete (TDirectory *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TColor */
static int G__TColor_TColor_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TColor *p=NULL;
   if(G__getaryconstruct()) p=new TColor[G__getaryconstruct()];
   else                    p=new TColor;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TColor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_TColor_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TColor *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TColor(
(Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(const char*)G__int(libp->para[4]));
      break;
   case 4:
      p = new TColor(
(Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TColor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_TColor_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TColor *p=NULL;
      p = new TColor(*(TColor*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TColor);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Copy_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetRGB_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->GetRGB(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1])
,*(Float_t*)G__Floatref(&libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetHLS_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->GetHLS(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1])
,*(Float_t*)G__Floatref(&libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetNumber_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TColor*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetRed_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetRed());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetGreen_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetGreen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetBlue_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetBlue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetHue_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetHue());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetLight_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetLight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_GetSaturation_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->GetSaturation());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_HLStoRGB_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->HLStoRGB((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3])
,*(Float_t*)G__Floatref(&libp->para[4]),*(Float_t*)G__Floatref(&libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_HLStoRGB1_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TColor*)(G__getstructoffset()))->HLStoRGB1((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ls_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Print_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_RGBtoHLS_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->RGBtoHLS((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3])
,*(Float_t*)G__Floatref(&libp->para[4]),*(Float_t*)G__Floatref(&libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_SetNumber_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->SetNumber((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_SetRGB_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->SetRGB((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_DeclFileName_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TColor*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_DeclFileLine_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TColor*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ImplFileName_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TColor*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ImplFileLine_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TColor*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Class_Version_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TColor*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Class_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TColor*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_IsA_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TColor*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_ShowMembers_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Streamer_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TColor_Dictionary_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TColor*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TColor_wATColor_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TColor *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TColor *)((G__getstructoffset())+sizeof(TColor)*i);
   else  delete (TColor *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TStyle */
static int G__TStyle_TStyle_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStyle *p=NULL;
   if(G__getaryconstruct()) p=new TStyle[G__getaryconstruct()];
   else                    p=new TStyle;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TStyle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_TStyle_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStyle *p=NULL;
      p = new TStyle((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TStyle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_TStyle_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TStyle *p=NULL;
      p = new TStyle(*(TStyle*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TStyle);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_AxisChoice_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->AxisChoice((Option_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Browse_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_BuildStyles_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->BuildStyles();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Copy_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_cd_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->cd();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetNdivisions_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetNdivisions((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetNdivisions());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetAxisColor_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetAxisColor((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetAxisColor());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLabelColor_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetLabelColor((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetLabelColor());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLabelFont_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetLabelFont((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetLabelFont());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLabelOffset_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLabelOffset((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLabelOffset());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLabelSize_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLabelSize((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLabelSize());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleOffset_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleOffset((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleOffset());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleSize_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleSize((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleSize());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTickLength_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTickLength((Option_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTickLength());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetBarOffset_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetBarOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetBarWidth_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetBarWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetDrawBorder_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetDrawBorder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetErrorMarker_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetErrorMarker());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetErrorMsize_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetErrorMsize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetErrorX_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetErrorX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasColor_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetCanvasColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasBorderSize_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetCanvasBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasBorderMode_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefH_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefW_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefX_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetCanvasDefY_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetCanvasDefY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetColorPalette_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetColorPalette((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetNumberOfColors_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetNumberOfColors());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadColor_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetPadColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadBorderSize_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetPadBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadBorderMode_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetPadBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadBottomMargin_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadBottomMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadTopMargin_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadTopMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadLeftMargin_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadLeftMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadRightMargin_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetPadRightMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadGridX_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TStyle*)(G__getstructoffset()))->GetPadGridX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadGridY_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TStyle*)(G__getstructoffset()))->GetPadGridY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadTickX_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetPadTickX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPadTickY_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetPadTickY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFuncColor_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFuncColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFuncStyle_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFuncStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFuncWidth_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFuncWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameFillColor_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameLineColor_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameFillStyle_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameLineStyle_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameLineWidth_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameBorderSize_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetFrameBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetFrameBorderMode_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetFrameBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistFillColor_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistLineColor_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistFillStyle_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistLineStyle_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHistLineWidth_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetHistLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLegoInnerR_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLegoInnerR());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptDate_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptDate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptFile_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptFile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptFit_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptFit());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptStat_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptStat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptTitle_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptLogx_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptLogx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptLogy_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptLogy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetOptLogz_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetOptLogz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetPaperSize_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->GetPaperSize(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetShowEventStatus_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->GetShowEventStatus());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetScreenFactor_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetScreenFactor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatColor_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatTextColor_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatTextColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatBorderSize_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatFont_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatStyle_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetStatStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatX_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatY_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatW_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetStatH_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetStatH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTimeOffset_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TStyle*)(G__getstructoffset()))->GetTimeOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleColor_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleTextColor_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleTextColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleStyle_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleFont_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleBorderSize_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->GetTitleBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleXOffset_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleXOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleXSize_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleXSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleYOffset_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleYOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleYSize_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleYSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleX_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleY_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleW_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetTitleH_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetTitleH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetHeaderPS_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TStyle*)(G__getstructoffset()))->GetHeaderPS());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLineStyleString_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((const TStyle*)(G__getstructoffset()))->GetLineStyleString((Int_t)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((const TStyle*)(G__getstructoffset()))->GetLineStyleString());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_GetLineScalePS_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TStyle*)(G__getstructoffset()))->GetLineScalePS());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Reset_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetHeaderPS_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHeaderPS((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLineScalePS_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLineScalePS((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLineScalePS();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLineStyleString_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLineStyleString((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetNdivisions_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetNdivisions((Int_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetNdivisions((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetNdivisions();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetAxisColor_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetAxisColor((Color_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetAxisColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetAxisColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLabelColor_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelColor((Color_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLabelFont_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelFont((Style_t)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelFont((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelFont();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLabelOffset_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelOffset((Float_t)G__double(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLabelSize_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelSize((Float_t)G__double(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLabelSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetLegoInnerR_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLegoInnerR((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetLegoInnerR();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetScreenFactor_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetScreenFactor((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetScreenFactor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTickLength_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTickLength((Float_t)G__double(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTickLength((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTickLength();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleOffset_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleOffset((Float_t)G__double(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleSize_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleSize((Float_t)G__double(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptDate_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptDate((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptDate();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptFile_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptFile((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptFile();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptFit_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptFit((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptFit();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptLogx_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptLogy_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptLogz_7_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptLogz((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptLogz();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptStat_8_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptStat((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptStat();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetOptTitle_9_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptTitle((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetOptTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetBarOffset_0_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetBarOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetBarOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetBarWidth_1_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetBarWidth((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetBarWidth();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetErrorMarker_2_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetErrorMarker((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetErrorMarker();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetErrorMsize_3_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetErrorMsize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetErrorMsize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetErrorX_4_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetErrorX((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetErrorX();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetDrawBorder_5_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetDrawBorder((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetDrawBorder();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasColor_6_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasBorderSize_7_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasBorderSize((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasBorderMode_8_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasBorderMode((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasBorderMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasDefH_9_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefH((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefH();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasDefW_0_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefW((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefW();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasDefX_1_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefX((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefX();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetCanvasDefY_2_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefY((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetCanvasDefY();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadColor_3_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadBorderSize_4_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadBorderSize((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadBorderMode_5_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadBorderMode((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadBorderMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadBottomMargin_6_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadBottomMargin((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadBottomMargin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadTopMargin_7_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadTopMargin((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadTopMargin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadLeftMargin_8_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadLeftMargin((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadLeftMargin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadRightMargin_9_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadRightMargin((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadRightMargin();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadGridX_0_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadGridX((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadGridY_1_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadGridY((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadTickX_2_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadTickX((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPadTickY_3_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPadTickY((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFuncStyle_4_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFuncStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFuncStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFuncColor_5_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFuncColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFuncColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFuncWidth_6_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFuncWidth((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFuncWidth();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameFillColor_7_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameFillColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameFillColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameLineColor_8_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameLineColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameLineColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameFillStyle_9_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameFillStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameFillStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameLineStyle_0_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameLineStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameLineStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameLineWidth_1_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameLineWidth((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameLineWidth();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameBorderSize_2_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameBorderSize((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetFrameBorderMode_3_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameBorderMode((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetFrameBorderMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetHistFillColor_4_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistFillColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistFillColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetHistLineColor_5_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistLineColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistLineColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetHistFillStyle_6_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistFillStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistFillStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetHistLineStyle_7_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistLineStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistLineStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetHistLineWidth_8_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistLineWidth((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetHistLineWidth();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPaperSize_9_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPaperSize((TStyle::EPaperSize)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPaperSize_0_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPaperSize((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPaperSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPaperSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatColor_1_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatColor((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatTextColor_2_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatTextColor((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatTextColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatStyle_3_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatBorderSize_4_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatBorderSize((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatFont_5_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatFont((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatFont();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatX_6_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatX((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatX();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatY_7_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatY((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatY();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatW_8_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatW((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatW();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetStatH_9_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatH((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetStatH();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTimeOffset_0_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTimeOffset((Double_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleColor_1_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleColor((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleTextColor_2_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleTextColor((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleTextColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleStyle_3_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleFont_4_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleFont((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleFont();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleBorderSize_5_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleBorderSize((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleXOffset_6_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleXOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleXOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleXSize_7_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleXSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleXSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleYOffset_8_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleYOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleYOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleYSize_9_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleYSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleYSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleX_0_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleX((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleX();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleY_1_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleY((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleY();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleW_2_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleW((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleW();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetTitleH_3_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleH((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetTitleH();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ToggleEventStatus_4_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->ToggleEventStatus();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_SetPalette_5_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPalette((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPalette((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->SetPalette();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_DeclFileName_6_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_DeclFileLine_7_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ImplFileName_8_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TStyle*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ImplFileLine_9_18(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TStyle*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Class_Version_0_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TStyle*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Class_1_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TStyle*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_IsA_2_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TStyle*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_ShowMembers_3_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Streamer_4_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TStyle_Dictionary_5_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TStyle*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TStyle_wATStyle_6_19(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TStyle *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TStyle *)((G__getstructoffset())+sizeof(TStyle)*i);
   else  delete (TStyle *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVirtualPad */
static int G__TVirtualPad_AbsCoordinates_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->AbsCoordinates((Bool_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_AbsPixeltoX_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->AbsPixeltoX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_AbsPixeltoY_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->AbsPixeltoY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_AddExec_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->AddExec((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_cd_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->cd((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->cd();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Clear_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Close_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CopyPixmap_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->CopyPixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CopyPixmaps_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->CopyPixmaps();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DeleteExec_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DeleteExec((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Divide_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Divide((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Divide();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Draw_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawClassObject_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawClassObject((TObject*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawClassObject((TObject*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawFrame_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->DrawFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(const char*)G__int(libp->para[4])));
      break;
   case 4:
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->DrawFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawLine_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawLineNDC_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawLineNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawText_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DrawTextNDC_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DrawTextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetBorderMode_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualPad*)(G__getstructoffset()))->GetBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetBorderSize_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualPad*)(G__getstructoffset()))->GetBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetCanvasID_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->GetCanvasID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetCanvas_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetVirtCanvas_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetVirtCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetEvent_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->GetEvent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetEventX_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->GetEventX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetEventY_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->GetEventY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetFrame_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetFrame());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetHighLightColor_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((const TVirtualPad*)(G__getstructoffset()))->GetHighLightColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetRange_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->GetRange(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1])
,*(Float_t*)G__Floatref(&libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetRangeAxis_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->GetRangeAxis(*(Axis_t*)G__Floatref(&libp->para[0]),*(Axis_t*)G__Floatref(&libp->para[1])
,*(Axis_t*)G__Floatref(&libp->para[2]),*(Axis_t*)G__Floatref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadPar_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->GetPadPar(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1])
,*(Float_t*)G__Floatref(&libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetXlowNDC_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetXlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetYlowNDC_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetYlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetWNDC_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetWNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetHNDC_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetHNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetWw_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TVirtualPad*)(G__getstructoffset()))->GetWw());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetWh_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TVirtualPad*)(G__getstructoffset()))->GetWh());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsXlowNDC_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsXlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsYlowNDC_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsYlowNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsWNDC_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsWNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetAbsHNDC_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetAbsHNDC());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPhi_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetPhi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTheta_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetTheta());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUxmin_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUxmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUymin_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUymin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUxmax_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUxmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetUymax_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->GetUymax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetGridx_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->GetGridx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetGridy_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->GetGridy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTickx_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetTickx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTicky_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetTicky());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetX1_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->GetX1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetX2_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->GetX2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetY1_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->GetY1());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetY2_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->GetY2());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetListOfPrimitives_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetListOfPrimitives());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetListOfExecs_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetListOfExecs());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPrimitive_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetPrimitive((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetSelected_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetSelected());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadPointer_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetPadPointer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadSave_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TVirtualPad*)(G__getstructoffset()))->GetPadSave());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetSelectedPad_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TVirtualPad*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetView_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetView());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetLogx_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetLogx());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetLogy_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetLogy());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetLogz_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetLogz());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetMother_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetName_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TVirtualPad*)(G__getstructoffset()))->GetName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetTitle_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TVirtualPad*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPadPaint_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetPadPaint());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetPixmapID_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->GetPixmapID());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_GetView3D_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->GetView3D());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_HighLight_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->HighLight((Color_t)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->HighLight((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->HighLight();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsBatch_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsBatch());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsBeingResized_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TVirtualPad*)(G__getstructoffset()))->IsBeingResized());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsEditable_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsEditable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsModified_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsModified());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsRetained_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualPad*)(G__getstructoffset()))->IsRetained());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ls_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Modified_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Modified((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Modified();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_OpaqueMoving_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TVirtualPad*)(G__getstructoffset()))->OpaqueMoving());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_OpaqueResizing_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TVirtualPad*)(G__getstructoffset()))->OpaqueResizing());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PadtoX_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->PadtoX((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PadtoY_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->PadtoY((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Paint_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintBorderPS_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintBorderPS(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintBox_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintBox((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Option_t*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintBox((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintFillArea_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintFillArea((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintFillArea((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPadFrame_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPadFrame((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintLine_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintLine((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintLineNDC_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintLineNDC((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintLine3D_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintLine3D((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPolyLine_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPolyLine3D_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyLine3D((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPolyLineNDC_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyLineNDC((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyLineNDC((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintPolyMarker_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Option_t*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintModified_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintModified();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintText_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintText((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PaintTextNDC_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->PaintTextNDC((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PixeltoX_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->PixeltoX((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_PixeltoY_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualPad*)(G__getstructoffset()))->PixeltoY((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Pop_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Pop();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Print_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Print((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Print_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Print((const char*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Range_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Range((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_RangeAxis_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RangeAxis((Axis_t)G__double(libp->para[0]),(Axis_t)G__double(libp->para[1])
,(Axis_t)G__double(libp->para[2]),(Axis_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_RecursiveRemove_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_RedrawAxis_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RedrawAxis((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->RedrawAxis();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ResetView3D_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ResetView3D((TPadView3D*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ResetView3D();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ResizePad_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ResizePad((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ResizePad();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SaveAs_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SaveAs((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SaveAs();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetBatch_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetBatch((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetBatch();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetBorderMode_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetBorderMode((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetBorderSize_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetBorderSize((Short_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetCanvasSize_7_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetCanvasSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetCursor_8_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetCursor((ECursor)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetDoubleBuffer_9_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetDoubleBuffer((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetDoubleBuffer();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetEditable_0_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetEditable((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetEditable();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetGrid_1_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGrid((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGrid();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetGridx_2_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGridx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGridx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetGridy_3_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGridy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetGridy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetLogx_4_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetLogx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetLogx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetLogy_5_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetLogy((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetLogy();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetLogz_6_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetLogz((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetLogz();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetPad_7_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 9:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7])
,(Short_t)G__int(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]),(Short_t)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Color_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetPad_8_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPad((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetAttFillPS_9_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetAttFillPS((Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetAttLinePS_0_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetAttLinePS((Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Width_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetAttMarkerPS_1_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetAttMarkerPS((Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Size_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetAttTextPS_2_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetAttTextPS((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Color_t)G__int(libp->para[2]),(Style_t)G__int(libp->para[3])
,(Float_t)G__double(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetName_3_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetName((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetSelected_4_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetSelected((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTicks_5_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTicks((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTicks((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTicks();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTickx_6_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTickx((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTickx();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTicky_7_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTicky((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTicky();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTitle_8_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTitle((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTitle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetTheta_9_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTheta((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetTheta();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetPhi_0_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPhi((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetPhi();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetToolTipText_1_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetToolTipText((const char*)G__int(libp->para[0]),(Long_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetToolTipText((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_SetView_2_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->SetView((TView*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_WaitPrimitive_3_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->WaitPrimitive((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->WaitPrimitive((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->WaitPrimitive());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Update_4_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Update();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_UtoAbsPixel_5_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->UtoAbsPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_VtoAbsPixel_6_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->VtoAbsPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_UtoPixel_7_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->UtoPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_VtoPixel_8_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->VtoPixel((Float_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_XtoAbsPixel_9_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->XtoAbsPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_YtoAbsPixel_0_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->YtoAbsPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_XtoPad_1_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->XtoPad((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_YtoPad_2_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((const TVirtualPad*)(G__getstructoffset()))->YtoPad((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_XtoPixel_3_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->XtoPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_YtoPixel_4_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TVirtualPad*)(G__getstructoffset()))->YtoPixel((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CreateToolTip_5_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->CreateToolTip((const TBox*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Long_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DeleteToolTip_6_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->DeleteToolTip((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ResetToolTip_7_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ResetToolTip((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_CloseToolTip_8_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->CloseToolTip((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_x3d_9_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->x3d((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->x3d();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DeclFileName_0_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPad*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_DeclFileLine_1_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ImplFileName_2_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPad*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ImplFileLine_3_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPad*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Class_Version_4_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualPad*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Class_5_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPad*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_IsA_6_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TVirtualPad*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_ShowMembers_7_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Streamer_8_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPad_Dictionary_9_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPad*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVirtualPad_wATVirtualPad_0_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVirtualPad *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVirtualPad *)((G__getstructoffset())+sizeof(TVirtualPad)*i);
   else  delete (TVirtualPad *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TApplication */
static int G__TApplication_TApplication_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TApplication *p=NULL;
   switch(libp->paran) {
   case 5:
      p = new TApplication(
(const char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3])
,(int)G__int(libp->para[4]));
      break;
   case 4:
      p = new TApplication(
(const char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3]));
      break;
   case 3:
      p = new TApplication(
(const char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplication);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetOptions_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->GetOptions((int*)G__int(libp->para[0]),(char**)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetSignalHandler_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TApplication*)(G__getstructoffset()))->GetSignalHandler());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_HandleIdleTimer_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->HandleIdleTimer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_HandleTermInput_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->HandleTermInput();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Init_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Init();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ProcessLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ProcessLine((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ProcessLine((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ProcessFile_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ProcessFile((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Run_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Run((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Run();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_SetIdleTimer_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->SetIdleTimer((UInt_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_RemoveIdleTimer_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->RemoveIdleTimer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetIdleCommand_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TApplication*)(G__getstructoffset()))->GetIdleCommand());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_StartIdleing_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->StartIdleing();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_StopIdleing_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->StopIdleing();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Terminate_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Terminate((int)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Terminate();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ApplicationName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TApplication*)(G__getstructoffset()))->ApplicationName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Show_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Hide_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetApplicationImp_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->GetApplicationImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Iconify_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_IsCmdThread_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplication*)(G__getstructoffset()))->IsCmdThread());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Open_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Open();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Raise_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Raise();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Lower_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Lower();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Argc_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TApplication*)(G__getstructoffset()))->Argc());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Argv_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TApplication*)(G__getstructoffset()))->Argv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Argv_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TApplication*)(G__getstructoffset()))->Argv((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_NoLogOpt_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TApplication*)(G__getstructoffset()))->NoLogOpt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_QuitOpt_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TApplication*)(G__getstructoffset()))->QuitOpt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_InputFiles_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TApplication*)(G__getstructoffset()))->InputFiles());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ClearInputFiles_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ClearInputFiles();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ReturnFromRun_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TApplication*)(G__getstructoffset()))->ReturnFromRun());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_CreateApplication_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->CreateApplication();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_DeclFileName_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_DeclFileLine_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplication*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ImplFileName_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ImplFileLine_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplication*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Class_Version_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TApplication*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Class_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_IsA_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TApplication*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ShowMembers_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Streamer_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Dictionary_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TApplication_TApplication_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TApplication *p;
   p=new TApplication(*(TApplication*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplication);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TApplication_wATApplication_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TApplication *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TApplication *)((G__getstructoffset())+sizeof(TApplication)*i);
   else  delete (TApplication *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttFill */
static int G__TAttFill_TAttFill_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttFill *p=NULL;
   if(G__getaryconstruct()) p=new TAttFill[G__getaryconstruct()];
   else                    p=new TAttFill;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFill);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_TAttFill_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttFill *p=NULL;
      p = new TAttFill((Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFill);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Copy_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Copy(*(TAttFill*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_GetFillColor_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFill*)(G__getstructoffset()))->GetFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_GetFillStyle_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFill*)(G__getstructoffset()))->GetFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_IsTransparent_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TAttFill*)(G__getstructoffset()))->IsTransparent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Modify_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ResetAttFill_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->ResetAttFill((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->ResetAttFill();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SaveFillAttributes_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SaveFillAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SaveFillAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SaveFillAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SetFillAttributes_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SetFillAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SetFillColor_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SetFillStyle_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_DeclFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFill*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_DeclFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFill*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ImplFileName_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFill*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ImplFileLine_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFill*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Class_Version_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFill*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Class_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFill*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_IsA_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAttFill*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ShowMembers_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Streamer_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Dictionary_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttFill_TAttFill_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAttFill *p;
   p=new TAttFill(*(TAttFill*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFill);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttFill_wATAttFill_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttFill *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttFill *)((G__getstructoffset())+sizeof(TAttFill)*i);
   else  delete (TAttFill *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttLine */
static int G__TAttLine_TAttLine_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttLine *p=NULL;
   if(G__getaryconstruct()) p=new TAttLine[G__getaryconstruct()];
   else                    p=new TAttLine;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_TAttLine_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttLine *p=NULL;
      p = new TAttLine(
(Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Width_t)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Copy_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Copy(*(TAttLine*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_DistancetoLine_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLine*)(G__getstructoffset()))->DistancetoLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_GetLineColor_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->GetLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_GetLineStyle_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->GetLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_GetLineWidth_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->GetLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Modify_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ResetAttLine_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->ResetAttLine((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->ResetAttLine();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SaveLineAttributes_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineAttributes_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineColor_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineStyle_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineWidth_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_DeclFileName_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttLine*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_DeclFileLine_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLine*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ImplFileName_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttLine*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ImplFileLine_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLine*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Class_Version_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Class_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttLine*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_IsA_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAttLine*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ShowMembers_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Streamer_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Dictionary_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttLine_TAttLine_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAttLine *p;
   p=new TAttLine(*(TAttLine*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttLine);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttLine_wATAttLine_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttLine *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttLine *)((G__getstructoffset())+sizeof(TAttLine)*i);
   else  delete (TAttLine *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttMarker */
static int G__TAttMarker_TAttMarker_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttMarker *p=NULL;
   if(G__getaryconstruct()) p=new TAttMarker[G__getaryconstruct()];
   else                    p=new TAttMarker;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_TAttMarker_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttMarker *p=NULL;
      p = new TAttMarker(
(Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Size_t)G__double(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Copy_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Copy(*(TAttMarker*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_GetMarkerColor_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarker*)(G__getstructoffset()))->GetMarkerColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_GetMarkerStyle_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarker*)(G__getstructoffset()))->GetMarkerStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_GetMarkerSize_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttMarker*)(G__getstructoffset()))->GetMarkerSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Modify_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ResetAttMarker_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->ResetAttMarker((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->ResetAttMarker();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SaveMarkerAttributes_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SetMarkerAttributes_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SetMarkerColor_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SetMarkerStyle_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SetMarkerSize_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerSize((Size_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_DeclFileName_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttMarker*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_DeclFileLine_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttMarker*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ImplFileName_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttMarker*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ImplFileLine_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttMarker*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Class_Version_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarker*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Class_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttMarker*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_IsA_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAttMarker*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ShowMembers_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Streamer_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Dictionary_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttMarker_TAttMarker_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAttMarker *p;
   p=new TAttMarker(*(TAttMarker*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttMarker_wATAttMarker_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttMarker *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttMarker *)((G__getstructoffset())+sizeof(TAttMarker)*i);
   else  delete (TAttMarker *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttPad */
static int G__TAttPad_TAttPad_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttPad *p=NULL;
   if(G__getaryconstruct()) p=new TAttPad[G__getaryconstruct()];
   else                    p=new TAttPad;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttPad);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Copy_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Copy(*(TAttPad*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetBottomMargin_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetBottomMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetLeftMargin_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetLeftMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetRightMargin_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetRightMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetTopMargin_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetTopMargin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetAfile_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetAfile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetXfile_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetXfile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetYfile_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetYfile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetAstat_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetAstat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetXstat_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetXstat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetYstat_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttPad*)(G__getstructoffset()))->GetYstat());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameFillColor_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameLineColor_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameFillStyle_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameLineStyle_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameLineWidth_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameBorderSize_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->GetFrameBorderSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_GetFrameBorderMode_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttPad*)(G__getstructoffset()))->GetFrameBorderMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Print_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ResetAttPad_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->ResetAttPad((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->ResetAttPad();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetBottomMargin_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetBottomMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetLeftMargin_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetLeftMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetRightMargin_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetRightMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetTopMargin_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetTopMargin((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetAfile_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetAfile((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetXfile_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetXfile((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetYfile_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetYfile((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetAstat_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetAstat((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetXstat_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetXstat((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetYstat_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetYstat((Coord_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameFillColor_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameFillColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameFillColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameLineColor_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameLineColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameLineColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameFillStyle_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameFillStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameFillStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameLineStyle_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameLineStyle((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameLineStyle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameLineWidth_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameLineWidth((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameLineWidth();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameBorderSize_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameBorderSize((Width_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameBorderSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_SetFrameBorderMode_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameBorderMode((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->SetFrameBorderMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_DeclFileName_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttPad*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_DeclFileLine_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttPad*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ImplFileName_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttPad*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ImplFileLine_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttPad*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Class_Version_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttPad*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Class_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttPad*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_IsA_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAttPad*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_ShowMembers_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Streamer_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttPad_Dictionary_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttPad*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttPad_TAttPad_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAttPad *p;
   p=new TAttPad(*(TAttPad*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttPad);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttPad_wATAttPad_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttPad *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttPad *)((G__getstructoffset())+sizeof(TAttPad)*i);
   else  delete (TAttPad *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttAxis */
static int G__TAttAxis_TAttAxis_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttAxis *p=NULL;
   if(G__getaryconstruct()) p=new TAttAxis[G__getaryconstruct()];
   else                    p=new TAttAxis;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Copy_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Copy(*(TAttAxis*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetNdivisions_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttAxis*)(G__getstructoffset()))->GetNdivisions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetAxisColor_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->GetAxisColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelColor_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->GetLabelColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelFont_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->GetLabelFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelOffset_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetLabelOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelSize_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetLabelSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetTitleOffset_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetTitleOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetTitleSize_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetTitleSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetTickLength_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetTickLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ResetAttAxis_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->ResetAttAxis((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->ResetAttAxis();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SaveAttributes_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SaveAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetNdivisions_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetNdivisions((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetNdivisions();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetAxisColor_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetAxisColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetAxisColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetLabelColor_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetLabelFont_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelFont((Style_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelFont();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetLabelOffset_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetLabelSize_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetLabelSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetTickLength_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetTickLength((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetTickLength();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetTitleOffset_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetTitleOffset((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetTitleOffset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetTitleSize_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetTitleSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SetTitleSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_DeclFileName_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttAxis*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_DeclFileLine_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttAxis*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ImplFileName_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttAxis*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ImplFileLine_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttAxis*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Class_Version_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Class_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttAxis*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_IsA_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAttAxis*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ShowMembers_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Streamer_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Dictionary_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttAxis_TAttAxis_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAttAxis *p;
   p=new TAttAxis(*(TAttAxis*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttAxis_wATAttAxis_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttAxis *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttAxis *)((G__getstructoffset())+sizeof(TAttAxis)*i);
   else  delete (TAttAxis *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttText */
static int G__TAttText_TAttText_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttText *p=NULL;
   if(G__getaryconstruct()) p=new TAttText[G__getaryconstruct()];
   else                    p=new TAttText;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_TAttText_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAttText *p=NULL;
      p = new TAttText(
(Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Color_t)G__int(libp->para[2]),(Style_t)G__int(libp->para[3])
,(Float_t)G__double(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Copy_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Copy(*(TAttText*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextAlign_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->GetTextAlign());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextAngle_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttText*)(G__getstructoffset()))->GetTextAngle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextColor_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->GetTextColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextFont_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->GetTextFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextSize_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttText*)(G__getstructoffset()))->GetTextSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Modify_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ResetAttText_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->ResetAttText((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->ResetAttText();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SaveTextAttributes_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(
*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextAttributes_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextAlign_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextAlign((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextAlign();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextAngle_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextAngle((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextAngle();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextColor_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextColor((Color_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextColor();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextFont_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextFont((Font_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextFont();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextSize_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextSize((Float_t)G__double(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextSize();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_DeclFileName_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttText*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_DeclFileLine_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttText*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ImplFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttText*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ImplFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttText*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Class_Version_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Class_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttText*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_IsA_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAttText*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ShowMembers_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Streamer_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Dictionary_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttText_TAttText_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAttText *p;
   p=new TAttText(*(TAttText*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttText);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttText_wATAttText_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttText *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttText *)((G__getstructoffset())+sizeof(TAttText)*i);
   else  delete (TAttText *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TBrowserImp */
static int G__TBrowserImp_TBrowserImp_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowserImp *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TBrowserImp((TBrowser*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TBrowserImp[G__getaryconstruct()];
   else                    p=new TBrowserImp;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_TBrowserImp_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowserImp *p=NULL;
      p = new TBrowserImp(
(TBrowser*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_TBrowserImp_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBrowserImp *p=NULL;
      p = new TBrowserImp(
(TBrowser*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Add_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Add((TObject*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_BrowseObj_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->BrowseObj((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Browser_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TBrowserImp*)(G__getstructoffset()))->Browser());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ExecuteDefaultAction_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->ExecuteDefaultAction((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Iconify_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_RecursiveRemove_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Refresh_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Refresh((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Refresh();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Show_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_DeclFileName_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowserImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_DeclFileLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowserImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ImplFileName_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowserImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ImplFileLine_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowserImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Class_Version_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBrowserImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Class_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowserImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_IsA_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TBrowserImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ShowMembers_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Streamer_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Dictionary_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBrowserImp_TBrowserImp_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TBrowserImp *p;
   p=new TBrowserImp(*(TBrowserImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBrowserImp_wATBrowserImp_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBrowserImp *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBrowserImp *)((G__getstructoffset())+sizeof(TBrowserImp)*i);
   else  delete (TBrowserImp *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TContextMenu */
static int G__TContextMenu_TContextMenu_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TContextMenu *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TContextMenu((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TContextMenu((const char*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TContextMenu);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Action_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Action((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Action_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Action((TObject*)G__int(libp->para[0]),(TToggle*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Action_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Action((TMethod*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Action_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Action((TToggle*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_CreateArgumentTitle_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->CreateArgumentTitle((TMethodArg*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_CreateDialogTitle_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->CreateDialogTitle((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_CreatePopupTitle_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->CreatePopupTitle((TObject*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TMethod*)G__int(libp->para[0]),(TObjArray*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1])
,(const Char_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1])
,(TObjArray*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((const Char_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Execute_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Execute((TObjArray*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetBrowser_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetBrowser());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetContextMenuImp_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetContextMenuImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedCanvas_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedCanvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedMethod_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedMethod());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedObject_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedObject());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_GetSelectedPad_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->GetSelectedPad());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Popup_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Popup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(TObject*)G__int(libp->para[2]),(TVirtualPad*)G__int(libp->para[3])
,(TVirtualPad*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Popup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(TObject*)G__int(libp->para[2]),(TVirtualPad*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Popup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(TObject*)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Popup_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Popup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(TObject*)G__int(libp->para[2]),(TBrowser*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetCanvas_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetCanvas((TVirtualPad*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetBrowser_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetBrowser((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetMethod_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetMethod((TMethod*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetObject_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetObject((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetObject_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetObject((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_SetPad_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->SetPad((TVirtualPad*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_DeclFileName_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_DeclFileLine_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenu*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_ImplFileName_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenu*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_ImplFileLine_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenu*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Class_Version_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TContextMenu*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Class_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenu*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_IsA_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TContextMenu*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_ShowMembers_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Streamer_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenu_Dictionary_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenu*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TContextMenu_TContextMenu_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TContextMenu *p;
   p=new TContextMenu(*(TContextMenu*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TContextMenu);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TContextMenu_wATContextMenu_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TContextMenu *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TContextMenu *)((G__getstructoffset())+sizeof(TContextMenu)*i);
   else  delete (TContextMenu *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TContextMenuImp */
static int G__TContextMenuImp_TContextMenuImp_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TContextMenuImp *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TContextMenuImp((TContextMenu*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TContextMenuImp[G__getaryconstruct()];
   else                    p=new TContextMenuImp;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_GetContextMenu_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TContextMenuImp*)(G__getstructoffset()))->GetContextMenu());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Dialog_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->Dialog((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_DisplayPopup_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->DisplayPopup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_DeclFileName_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenuImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_DeclFileLine_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenuImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_ImplFileName_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenuImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_ImplFileLine_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenuImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Class_Version_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TContextMenuImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Class_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenuImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_IsA_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TContextMenuImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_ShowMembers_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Streamer_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Dictionary_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TContextMenuImp_TContextMenuImp_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TContextMenuImp *p;
   p=new TContextMenuImp(*(TContextMenuImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TContextMenuImp_wATContextMenuImp_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TContextMenuImp *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TContextMenuImp *)((G__getstructoffset())+sizeof(TContextMenuImp)*i);
   else  delete (TContextMenuImp *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TEnv */
static int G__TEnv_TEnv_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TEnv *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TEnv((const char*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TEnv[G__getaryconstruct()];
   else                    p=new TEnv;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TEnv);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetTable_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->GetTable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Defined_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TEnv*)(G__getstructoffset()))->Defined((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetValue_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEnv*)(G__getstructoffset()))->GetValue((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetValue_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEnv*)(G__getstructoffset()))->GetValue((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetValue_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->GetValue((const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(EEnvLevel)G__int(libp->para[2]),(const char*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(EEnvLevel)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref
,(EEnvLevel)G__int(libp->para[2]),(const char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(EEnvLevel)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(double)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Lookup_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->Lookup((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ReadFile_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->ReadFile((const char*)G__int(libp->para[0]),(EEnvLevel)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Save_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Save();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SaveLevel_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SaveLevel((EEnvLevel)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Print_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_PrintEnv_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->PrintEnv((EEnvLevel)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->PrintEnv();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_DeclFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEnv*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_DeclFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEnv*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ImplFileName_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEnv*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ImplFileLine_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEnv*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Class_Version_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TEnv*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Class_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_IsA_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TEnv*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ShowMembers_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Streamer_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Dictionary_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TEnv_TEnv_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TEnv *p;
   p=new TEnv(*(TEnv*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TEnv);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TEnv_wATEnv_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TEnv *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TEnv *)((G__getstructoffset())+sizeof(TEnv)*i);
   else  delete (TEnv *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAtt3D */
static int G__TAtt3D_TAtt3D_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TAtt3D *p=NULL;
   if(G__getaryconstruct()) p=new TAtt3D[G__getaryconstruct()];
   else                    p=new TAtt3D;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAtt3D);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_Sizeof3D_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((const TAtt3D*)(G__getstructoffset()))->Sizeof3D();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_DeclFileName_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAtt3D*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_DeclFileLine_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAtt3D*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_ImplFileName_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAtt3D*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_ImplFileLine_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAtt3D*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_Class_Version_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAtt3D*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_Class_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAtt3D*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_IsA_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TAtt3D*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_ShowMembers_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAtt3D*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_Streamer_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAtt3D*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAtt3D_Dictionary_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAtt3D*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAtt3D_TAtt3D_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TAtt3D *p;
   p=new TAtt3D(*(TAtt3D*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAtt3D);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAtt3D_wATAtt3D_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAtt3D *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAtt3D *)((G__getstructoffset())+sizeof(TAtt3D)*i);
   else  delete (TAtt3D *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TApplicationImp */
static int G__TApplicationImp_TApplicationImp_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TApplicationImp *p=NULL;
   if(G__getaryconstruct()) p=new TApplicationImp[G__getaryconstruct()];
   else                    p=new TApplicationImp;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_TApplicationImp_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TApplicationImp *p=NULL;
      p = new TApplicationImp(
(const char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3])
,(int)G__int(libp->para[4]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ApplicationName_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((const TApplicationImp*)(G__getstructoffset()))->ApplicationName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Show_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Hide_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Iconify_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_IsCmdThread_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplicationImp*)(G__getstructoffset()))->IsCmdThread());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Init_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Init();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Open_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Open();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Raise_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Raise();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Lower_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Lower();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ExecCommand_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplicationImp*)(G__getstructoffset()))->ExecCommand((TGWin32Command*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_DeclFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplicationImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_DeclFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplicationImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ImplFileName_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplicationImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ImplFileLine_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplicationImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Class_Version_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TApplicationImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Class_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplicationImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_IsA_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TApplicationImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ShowMembers_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Streamer_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Dictionary_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TApplicationImp_TApplicationImp_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TApplicationImp *p;
   p=new TApplicationImp(*(TApplicationImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TApplicationImp_wATApplicationImp_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TApplicationImp *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TApplicationImp *)((G__getstructoffset())+sizeof(TApplicationImp)*i);
   else  delete (TApplicationImp *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TCanvasImp */
static int G__TCanvasImp_TCanvasImp_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TCanvasImp *p=NULL;
   switch(libp->paran) {
   case 1:
      p = new TCanvasImp((TCanvas*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TCanvasImp[G__getaryconstruct()];
   else                    p=new TCanvasImp;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_TCanvasImp_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TCanvasImp *p=NULL;
      p = new TCanvasImp(
(TCanvas*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_TCanvasImp_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TCanvasImp *p=NULL;
      p = new TCanvasImp(
(TCanvas*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Canvas_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TCanvasImp*)(G__getstructoffset()))->Canvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ForceUpdate_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ForceUpdate();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_GetWindowGeometry_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->GetWindowGeometry(*(Int_t*)G__Intref(&libp->para[0]),*(Int_t*)G__Intref(&libp->para[1])
,*(UInt_t*)G__UIntref(&libp->para[2]),*(UInt_t*)G__UIntref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Iconify_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_InitWindow_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvasImp*)(G__getstructoffset()))->InitWindow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetStatusText_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetStatusText((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetStatusText((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetStatusText();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetWindowPosition_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetWindowPosition((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetWindowSize_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetWindowSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetWindowTitle_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetWindowTitle((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetCanvasSize_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetCanvasSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ShowMenuBar_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ShowMenuBar((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ShowMenuBar();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ShowStatusBar_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ShowStatusBar((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ShowStatusBar();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Show_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_DeclFileName_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvasImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_DeclFileLine_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvasImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ImplFileName_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvasImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ImplFileLine_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvasImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Class_Version_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCanvasImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Class_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvasImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_IsA_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TCanvasImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ShowMembers_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Streamer_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Dictionary_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TCanvasImp_TCanvasImp_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TCanvasImp *p;
   p=new TCanvasImp(*(TCanvasImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCanvasImp_wATCanvasImp_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TCanvasImp *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TCanvasImp *)((G__getstructoffset())+sizeof(TCanvasImp)*i);
   else  delete (TCanvasImp *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TControlBarImp */
static int G__TControlBarImp_TControlBarImp_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TControlBarImp *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TControlBarImp((TControlBar*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TControlBarImp((TControlBar*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_TControlBarImp_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TControlBarImp *p=NULL;
      p = new TControlBarImp(
(TControlBar*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_GetControlBar_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarImp*)(G__getstructoffset()))->GetControlBar());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Create_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Create();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Hide_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Show_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_DeclFileName_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_DeclFileLine_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_ImplFileName_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_ImplFileLine_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Class_Version_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TControlBarImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Class_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_IsA_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TControlBarImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_ShowMembers_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Streamer_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Dictionary_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TControlBarImp_TControlBarImp_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TControlBarImp *p;
   p=new TControlBarImp(*(TControlBarImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TControlBarImp_wATControlBarImp_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TControlBarImp *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TControlBarImp *)((G__getstructoffset())+sizeof(TControlBarImp)*i);
   else  delete (TControlBarImp *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TGuiFactory */
static int G__TGuiFactory_TGuiFactory_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TGuiFactory *p=NULL;
   switch(libp->paran) {
   case 2:
      p = new TGuiFactory((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TGuiFactory((const char*)G__int(libp->para[0]));
      break;
   case 0:
   if(G__getaryconstruct()) p=new TGuiFactory[G__getaryconstruct()];
   else                    p=new TGuiFactory;
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateApplicationImp_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateApplicationImp((const char*)G__int(libp->para[0]),(int*)G__int(libp->para[1])
,(char**)G__int(libp->para[2]),(void*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateCanvasImp_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateCanvasImp((TCanvas*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateCanvasImp_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateCanvasImp((TCanvas*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateBrowserImp_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateBrowserImp((TBrowser*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateBrowserImp_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateBrowserImp((TBrowser*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateContextMenuImp_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateContextMenuImp((TContextMenu*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateControlBarImp_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateControlBarImp((TControlBar*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_CreateControlBarImp_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->CreateControlBarImp((TControlBar*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_DeclFileName_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGuiFactory*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_DeclFileLine_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGuiFactory*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_ImplFileName_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TGuiFactory*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_ImplFileLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TGuiFactory*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Class_Version_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TGuiFactory*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Class_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TGuiFactory*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_IsA_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TGuiFactory*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_ShowMembers_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGuiFactory*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Streamer_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGuiFactory*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TGuiFactory_Dictionary_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TGuiFactory*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TGuiFactory_TGuiFactory_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TGuiFactory *p;
   p=new TGuiFactory(*(TGuiFactory*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TGuiFactory_wATGuiFactory_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TGuiFactory *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TGuiFactory *)((G__getstructoffset())+sizeof(TGuiFactory)*i);
   else  delete (TGuiFactory *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVirtualFitter */
static int G__TVirtualFitter_Clear_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->Clear((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->Clear();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_ExecuteCommand_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->ExecuteCommand((const char*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_FixParameter_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->FixParameter((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_GetErrors_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->GetErrors((Int_t)G__int(libp->para[0]),*(Double_t*)G__Doubleref(&libp->para[1])
,*(Double_t*)G__Doubleref(&libp->para[2]),*(Double_t*)G__Doubleref(&libp->para[3])
,*(Double_t*)G__Doubleref(&libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_GetMaxIterations_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->GetMaxIterations());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_GetObjectFit_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualFitter*)(G__getstructoffset()))->GetObjectFit());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_GetParameter_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->GetParameter((Int_t)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,*(Double_t*)G__Doubleref(&libp->para[2]),*(Double_t*)G__Doubleref(&libp->para[3])
,*(Double_t*)G__Doubleref(&libp->para[4]),*(Double_t*)G__Doubleref(&libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_GetStats_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->GetStats(*(Double_t*)G__Doubleref(&libp->para[0]),*(Double_t*)G__Doubleref(&libp->para[1])
,*(Double_t*)G__Doubleref(&libp->para[2]),*(Int_t*)G__Intref(&libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_GetSumLog_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TVirtualFitter*)(G__getstructoffset()))->GetSumLog((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_PrintResults_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->PrintResults((Int_t)G__int(libp->para[0]),(Double_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_ReleaseParameter_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->ReleaseParameter((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_SetFCN_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->SetFCN((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_SetFCN_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->SetFCN((void (*)(Int_t&, Double_t*, Double_t&f, Double_t*, Int_t))G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_SetObjectFit_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->SetObjectFit((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_SetMaxIterations_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->SetMaxIterations((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_SetParameter_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->SetParameter((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_Fitter_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TVirtualFitter*)(G__getstructoffset()))->Fitter((TObject*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TVirtualFitter*)(G__getstructoffset()))->Fitter((TObject*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_SetFitter_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->SetFitter((TVirtualFitter*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->SetFitter((TVirtualFitter*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_DeclFileName_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualFitter*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_DeclFileLine_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_ImplFileName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualFitter*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_ImplFileLine_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualFitter*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_Class_Version_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualFitter*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_Class_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualFitter*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_IsA_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TVirtualFitter*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_ShowMembers_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_Streamer_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualFitter_Dictionary_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualFitter*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVirtualFitter_wATVirtualFitter_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVirtualFitter *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVirtualFitter *)((G__getstructoffset())+sizeof(TVirtualFitter)*i);
   else  delete (TVirtualFitter *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TFileHandler */
static int G__TFileHandler_TFileHandler_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TFileHandler *p=NULL;
      p = new TFileHandler((int)G__int(libp->para[0]),(int)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFileHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_GetFd_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((const TFileHandler*)(G__getstructoffset()))->GetFd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_SetFd_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->SetFd((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Notify_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ReadNotify_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->ReadNotify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_WriteNotify_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->WriteNotify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_HasReadInterest_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->HasReadInterest());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_HasWriteInterest_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->HasWriteInterest());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Remove_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->Remove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_DeclFileName_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFileHandler*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_DeclFileLine_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFileHandler*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ImplFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFileHandler*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ImplFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFileHandler*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Class_Version_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFileHandler*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Class_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFileHandler*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_IsA_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TFileHandler*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ShowMembers_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Streamer_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Dictionary_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TFileHandler_TFileHandler_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TFileHandler *p;
   p=new TFileHandler(*(TFileHandler*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFileHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFileHandler_wATFileHandler_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFileHandler *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFileHandler *)((G__getstructoffset())+sizeof(TFileHandler)*i);
   else  delete (TFileHandler *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TBenchmark */
static int G__TBenchmark_TBenchmark_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TBenchmark *p=NULL;
   if(G__getaryconstruct()) p=new TBenchmark[G__getaryconstruct()];
   else                    p=new TBenchmark;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBenchmark);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_GetBench_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBenchmark*)(G__getstructoffset()))->GetBench((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_GetCpuTime_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBenchmark*)(G__getstructoffset()))->GetCpuTime((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_GetRealTime_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBenchmark*)(G__getstructoffset()))->GetRealTime((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Print_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Reset_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Show_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Show((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Start_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Start((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Stop_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Stop((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Summary_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Summary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_DeclFileName_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBenchmark*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_DeclFileLine_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBenchmark*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_ImplFileName_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBenchmark*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_ImplFileLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBenchmark*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Class_Version_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBenchmark*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Class_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBenchmark*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_IsA_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TBenchmark*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_ShowMembers_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Streamer_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Dictionary_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBenchmark_TBenchmark_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TBenchmark *p;
   p=new TBenchmark(*(TBenchmark*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBenchmark);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBenchmark_wATBenchmark_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TBenchmark *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TBenchmark *)((G__getstructoffset())+sizeof(TBenchmark)*i);
   else  delete (TBenchmark *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TView */
static int G__TView_TView_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TView *p=NULL;
   if(G__getaryconstruct()) p=new TView[G__getaryconstruct()];
   else                    p=new TView;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_TView_2_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TView *p=NULL;
      p = new TView((Int_t)G__int(libp->para[0]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_TView_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TView *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TView(
(Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      p = new TView((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_AxisVertex_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->AxisVertex(
(Float_t)G__double(libp->para[0]),(Float_t*)G__int(libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]),*(Int_t*)G__Intref(&libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4]),*(Int_t*)G__Intref(&libp->para[5])
,*(Int_t*)G__Intref(&libp->para[6]),*(Int_t*)G__Intref(&libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_DefineViewDirection_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->DefineViewDirection(
(Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7])
,(Float_t*)G__int(libp->para[8]),(Float_t*)G__int(libp->para[9]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ExecuteEvent_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ExecuteRotateView_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ExecuteRotateView((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindScope_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindScope((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetDistancetoAxis_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->GetDistancetoAxis((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetAutoRange_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TView*)(G__getstructoffset()))->GetAutoRange());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetLatitude_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TView*)(G__getstructoffset()))->GetLatitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetLongitude_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TView*)(G__getstructoffset()))->GetLongitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetPsi_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TView*)(G__getstructoffset()))->GetPsi());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetRange_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->GetRange((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetRmax_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetRmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetRmin_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetRmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetOutline_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TView*)(G__getstructoffset()))->GetOutline());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetTN_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetTN());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetTnorm_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,70,(long)((TView*)(G__getstructoffset()))->GetTnorm());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_GetSystem_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->GetSystem());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindNormal_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindNormal((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindPhiSectors_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindPhiSectors((Int_t)G__int(libp->para[0]),*(Int_t*)G__Intref(&libp->para[1])
,(Float_t*)G__int(libp->para[2]),*(Int_t*)G__Intref(&libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FindThetaSectors_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FindThetaSectors((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]),(Float_t*)G__int(libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4]),*(Int_t*)G__Intref(&libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_NDCtoWC_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->NDCtoWC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_NormalWCtoNDC_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->NormalWCtoNDC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_PadRange_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->PadRange((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetAutoRange_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetAutoRange((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetAutoRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetAxisNDC_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetAxisNDC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]),(Float_t*)G__int(libp->para[3])
,(Float_t*)G__int(libp->para[4]),(Float_t*)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetLatitude_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetLatitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetLongitude_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetLongitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetPsi_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetPsi((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetOutlineToCube_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetOutlineToCube();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetRange_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetRange((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetRange_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetRange(
(Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])
,(Int_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetRange((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetSystem_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetSystem((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SetView_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SetView((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),*(Int_t*)G__Intref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_WCtoNDC_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->WCtoNDC((Float_t*)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_MoveViewCommand_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->MoveViewCommand((Char_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->MoveViewCommand((Char_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_AdjustPad_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->AdjustPad((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->AdjustPad();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_AdjustScales_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->AdjustScales((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->AdjustScales();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Centered3DImages_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Centered3DImages((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Centered3DImages();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Centered_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Centered();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_FrontView_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FrontView((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->FrontView();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Front_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Front();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ZoomView_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ZoomView((TVirtualPad*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ZoomView((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ZoomView();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_UnzoomView_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->UnzoomView((TVirtualPad*)G__int(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->UnzoomView((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->UnzoomView();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_RotateView_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->RotateView((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(TVirtualPad*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->RotateView((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_SideView_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SideView((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->SideView();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Side_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Side();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_TopView_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->TopView((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->TopView();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Top_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Top();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ToggleRulers_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ToggleRulers((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ToggleRulers();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ShowAxis_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ShowAxis();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ToggleZoom_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ToggleZoom((TVirtualPad*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ToggleZoom();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ZoomMove_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ZoomMove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_DeclFileName_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TView*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_DeclFileLine_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ImplFileName_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TView*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ImplFileLine_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TView*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Class_Version_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TView*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Class_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TView*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_IsA_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TView*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_ShowMembers_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Streamer_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TView_Dictionary_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TView*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TView_TView_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TView *p;
   p=new TView(*(TView*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TView);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TView_wATView_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TView *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TView *)((G__getstructoffset())+sizeof(TView)*i);
   else  delete (TView *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVirtualX */
static int G__TVirtualX_TVirtualX_0_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TVirtualX *p=NULL;
   if(G__getaryconstruct()) p=new TVirtualX[G__getaryconstruct()];
   else                    p=new TVirtualX;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TVirtualX);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_TVirtualX_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TVirtualX *p=NULL;
      p = new TVirtualX((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TVirtualX);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Init_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->Init((void*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->Init());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ClearWindow_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ClearWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ClosePixmap_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ClosePixmap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CloseWindow_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CloseWindow();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CopyPixmap_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CopyPixmap((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreateOpenGLContext_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CreateOpenGLContext((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CreateOpenGLContext();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeleteOpenGLContext_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DeleteOpenGLContext((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DeleteOpenGLContext();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawBox_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawBox((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(TVirtualX::EBoxMode)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawCellArray_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawCellArray(
(Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t*)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawFillArea_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawFillArea((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawPolyLine_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawPolyLine((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawPolyMarker_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(TPoint*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawText_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawText((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(const char*)G__int(libp->para[4]),(TVirtualX::ETextMode)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ExecCommand_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TVirtualX*)(G__getstructoffset()))->ExecCommand((TGWin32Command*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetCharacterUp_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetCharacterUp(*(Float_t*)G__Floatref(&libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetDrawMode_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->GetDrawMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetDoubleBuffer_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->GetDoubleBuffer((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetGeometry_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetGeometry((Int_t)G__int(libp->para[0]),*(Int_t*)G__Intref(&libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]),*(UInt_t*)G__UIntref(&libp->para[3])
,*(UInt_t*)G__UIntref(&libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DisplayName_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,67,(long)((TVirtualX*)(G__getstructoffset()))->DisplayName((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,67,(long)((TVirtualX*)(G__getstructoffset()))->DisplayName());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetPlanes_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetPlanes(*(Int_t*)G__Intref(&libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetRGB_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetRGB((Int_t)G__int(libp->para[0]),*(Float_t*)G__Floatref(&libp->para[1])
,*(Float_t*)G__Floatref(&libp->para[2]),*(Float_t*)G__Floatref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetTextExtent_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetTextExtent(*(UInt_t*)G__UIntref(&libp->para[0]),*(UInt_t*)G__UIntref(&libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetTextMagnitude_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TVirtualX*)(G__getstructoffset()))->GetTextMagnitude());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetWindowID_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetWindowID((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_HasTTFonts_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((const TVirtualX*)(G__getstructoffset()))->HasTTFonts());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_InitWindow_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->InitWindow((ULong_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_MoveWindow_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->MoveWindow((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_OpenPixmap_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->OpenPixmap((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_QueryPointer_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->QueryPointer(*(Int_t*)G__Intref(&libp->para[0]),*(Int_t*)G__Intref(&libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ReadGIF_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ReadGIF((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_RequestLocator_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->RequestLocator((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]),*(Int_t*)G__Intref(&libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_RequestString_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->RequestString((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(char*)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_RescaleWindow_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->RescaleWindow((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ResizePixmap_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->ResizePixmap((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ResizeWindow_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ResizeWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SelectWindow_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SelectWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetCharacterUp_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetCharacterUp((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetClipOFF_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetClipOFF((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetClipRegion_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetClipRegion((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetCursor_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetCursor((Int_t)G__int(libp->para[0]),(ECursor)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetDoubleBuffer_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetDoubleBuffer((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetDoubleBufferOFF_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetDoubleBufferOFF();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetDoubleBufferON_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetDoubleBufferON();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetDrawMode_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetDrawMode((TVirtualX::EDrawMode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetFillColor_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetFillStyle_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetLineColor_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetLineType_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetLineType((Int_t)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetLineStyle_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetLineWidth_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetMarkerColor_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetMarkerColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetMarkerSize_5_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetMarkerSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetMarkerStyle_6_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetMarkerStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetOpacity_7_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetOpacity((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetRGB_8_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetRGB((Int_t)G__int(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetTextAlign_9_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetTextAlign((Short_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetTextAlign();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetTextColor_0_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetTextColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetTextFont_1_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->SetTextFont((char*)G__int(libp->para[0]),(TVirtualX::ETextSetMode)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetTextFont_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetTextFont((Font_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetTextMagnitude_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetTextMagnitude((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetTextSize_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetTextSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_UpdateWindow_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->UpdateWindow((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Warp_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->Warp((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_WriteGIF_7_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->WriteGIF((char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_WritePixmap_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->WritePixmap((Int_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetWindowAttributes_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetWindowAttributes((Window_t)G__int(libp->para[0]),*(WindowAttributes_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_MapWindow_0_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->MapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_MapSubwindows_1_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->MapSubwindows((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_MapRaised_2_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->MapRaised((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_UnmapWindow_3_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->UnmapWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DestroyWindow_4_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DestroyWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_RaiseWindow_5_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->RaiseWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_LowerWindow_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->LowerWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_MoveWindow_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->MoveWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_MoveResizeWindow_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->MoveResizeWindow((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ResizeWindow_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ResizeWindow((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_IconifyWindow_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->IconifyWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWindowBackground_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWindowBackground((Window_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWindowBackgroundPixmap_2_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWindowBackgroundPixmap((Window_t)G__int(libp->para[0]),(Pixmap_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreateWindow_3_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->CreateWindow(
(Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(UInt_t)G__int(libp->para[7])
,(void*)G__int(libp->para[8]),(SetWindowAttributes_t*)G__int(libp->para[9])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_OpenDisplay_4_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->OpenDisplay((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CloseDisplay_5_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CloseDisplay();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetDisplay_6_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetDisplay());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_InternAtom_7_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->InternAtom((const char*)G__int(libp->para[0]),(Bool_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetDefaultRootWindow_8_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetDefaultRootWindow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetParent_9_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetParent((Window_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_LoadQueryFont_0_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->LoadQueryFont((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetFontHandle_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetFontHandle((FontStruct_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeleteFont_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DeleteFont((FontStruct_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreateGC_3_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->CreateGC((Drawable_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ChangeGC_4_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ChangeGC((GContext_t)G__int(libp->para[0]),(GCValues_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CopyGC_5_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CopyGC((GContext_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Mask_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeleteGC_6_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DeleteGC((GContext_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreateCursor_7_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->CreateCursor((ECursor)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetCursor_8_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetCursor((Window_t)G__int(libp->para[0]),(Cursor_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreatePixmap_9_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->CreatePixmap((Drawable_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreatePixmap_0_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->CreatePixmap(
(Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(ULong_t)G__int(libp->para[4]),(ULong_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreateBitmap_1_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->CreateBitmap((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeletePixmap_2_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DeletePixmap((Pixmap_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreatePictureFromFile_3_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->CreatePictureFromFile((Drawable_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,*(Pixmap_t*)G__ULongref(&libp->para[2]),*(Pixmap_t*)G__ULongref(&libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CreatePictureFromData_4_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->CreatePictureFromData((Drawable_t)G__int(libp->para[0]),(char**)G__int(libp->para[1])
,*(Pixmap_t*)G__ULongref(&libp->para[2]),*(Pixmap_t*)G__ULongref(&libp->para[3])
,*(PictureAttributes_t*)libp->para[4].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ReadPictureDataFromFile_5_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->ReadPictureDataFromFile((const char*)G__int(libp->para[0]),(char***)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeletePictureData_6_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DeletePictureData((void*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetDashes_7_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetDashes((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ParseColor_8_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->ParseColor((Colormap_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,*(ColorStruct_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_AllocColor_9_10(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->AllocColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_QueryColor_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->QueryColor((Colormap_t)G__int(libp->para[0]),*(ColorStruct_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_EventsPending_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->EventsPending());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_NextEvent_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->NextEvent(*(Event_t*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Bell_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->Bell((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CopyArea_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->CopyArea(
(Drawable_t)G__int(libp->para[0]),(Drawable_t)G__int(libp->para[1])
,(GContext_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7])
,(Int_t)G__int(libp->para[8]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ChangeWindowAttributes_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ChangeWindowAttributes((Window_t)G__int(libp->para[0]),(SetWindowAttributes_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawLine_6_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawLine((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ClearArea_7_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ClearArea((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_CheckEvent_8_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualX*)(G__getstructoffset()))->CheckEvent((Window_t)G__int(libp->para[0]),(EGEventType)G__int(libp->para[1])
,*(Event_t*)libp->para[2].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SendEvent_9_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SendEvent((Window_t)G__int(libp->para[0]),(Event_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_WMDeleteNotify_0_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->WMDeleteNotify((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetKeyAutoRepeat_1_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetKeyAutoRepeat((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetKeyAutoRepeat();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GrabKey_2_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(Bool_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GrabKey((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GrabButton_3_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GrabButton(
(Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5])
,(Bool_t)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GrabButton((Window_t)G__int(libp->para[0]),(EMouseButton)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(Window_t)G__int(libp->para[4]),(Cursor_t)G__int(libp->para[5]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GrabPointer_4_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3])
,(Bool_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GrabPointer((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(Window_t)G__int(libp->para[2]),(Cursor_t)G__int(libp->para[3]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWindowName_5_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWindowName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetIconName_6_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetIconName((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetIconPixmap_7_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetIconPixmap((Window_t)G__int(libp->para[0]),(Pixmap_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetClassHints_8_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetClassHints((Window_t)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetMWMHints_9_12(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetMWMHints((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWMPosition_0_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWMPosition((Window_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWMSize_1_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWMSize((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWMSizeHints_2_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWMSizeHints(
(Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5])
,(UInt_t)G__int(libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWMState_3_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWMState((Window_t)G__int(libp->para[0]),(EInitialState)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetWMTransientHint_4_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetWMTransientHint((Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawString_5_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawString((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_TextWidth_6_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->TextWidth((FontStruct_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetFontProperties_7_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetFontProperties((FontStruct_t)G__int(libp->para[0]),*(Int_t*)G__Intref(&libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetGCValues_8_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetGCValues((GContext_t)G__int(libp->para[0]),*(GCValues_t*)libp->para[1].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetFontStruct_9_13(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetFontStruct((FontH_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_FreeFontStruct_0_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->FreeFontStruct((FontStruct_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ClearWindow_1_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ClearWindow((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_KeysymToKeycode_2_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->KeysymToKeycode((UInt_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_FillRectangle_3_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->FillRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawRectangle_4_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawRectangle((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(UInt_t)G__int(libp->para[4]),(UInt_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DrawSegments_5_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->DrawSegments((Drawable_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Segment_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SelectInput_6_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SelectInput((Window_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetInputFocus_7_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetInputFocus((Window_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetPrimarySelectionOwner_8_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,107,(long)((TVirtualX*)(G__getstructoffset()))->GetPrimarySelectionOwner());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ConvertPrimarySelection_9_14(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ConvertPrimarySelection((Window_t)G__int(libp->para[0]),(Time_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_LookupString_0_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->LookupString((Event_t*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),*(UInt_t*)G__UIntref(&libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetPasteBuffer_1_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetPasteBuffer((Window_t)G__int(libp->para[0]),(Atom_t)G__int(libp->para[1])
,*(TString*)libp->para[2].ref,*(Int_t*)G__Intref(&libp->para[3])
,(Bool_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_TranslateCoordinates_2_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->TranslateCoordinates(
(Window_t)G__int(libp->para[0]),(Window_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4]),*(Int_t*)G__Intref(&libp->para[5])
,*(Window_t*)G__ULongref(&libp->para[6]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_GetWindowSize_3_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->GetWindowSize((Drawable_t)G__int(libp->para[0]),*(Int_t*)G__Intref(&libp->para[1])
,*(Int_t*)G__Intref(&libp->para[2]),*(UInt_t*)G__UIntref(&libp->para[3])
,*(UInt_t*)G__UIntref(&libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_FillPolygon_4_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->FillPolygon((Window_t)G__int(libp->para[0]),(GContext_t)G__int(libp->para[1])
,(Point_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_QueryPointer_5_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->QueryPointer(
(Window_t)G__int(libp->para[0]),*(Window_t*)G__ULongref(&libp->para[1])
,*(Window_t*)G__ULongref(&libp->para[2]),*(Int_t*)G__Intref(&libp->para[3])
,*(Int_t*)G__Intref(&libp->para[4]),*(Int_t*)G__Intref(&libp->para[5])
,*(Int_t*)G__Intref(&libp->para[6]),*(UInt_t*)G__UIntref(&libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetForeground_6_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetForeground((GContext_t)G__int(libp->para[0]),(ULong_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_SetClipRectangles_7_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->SetClipRectangles((GContext_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Rectangle_t*)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Update_8_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->Update((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->Update();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeclFileName_9_15(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualX*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_DeclFileLine_0_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ImplFileName_1_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualX*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ImplFileLine_2_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualX*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Class_Version_3_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualX*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Class_4_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualX*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_IsA_5_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TVirtualX*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_ShowMembers_6_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Streamer_7_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualX_Dictionary_8_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualX*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TVirtualX_TVirtualX_9_16(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TVirtualX *p;
   p=new TVirtualX(*(TVirtualX*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TVirtualX);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVirtualX_wATVirtualX_0_17(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVirtualX *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVirtualX *)((G__getstructoffset())+sizeof(TVirtualX)*i);
   else  delete (TVirtualX *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVirtualGL */
static int G__TVirtualGL_TVirtualGL_1_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   TVirtualGL *p=NULL;
   if(G__getaryconstruct()) p=new TVirtualGL[G__getaryconstruct()];
   else                    p=new TVirtualGL;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_AddRotation_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->AddRotation((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_BeginGLCmd_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->BeginGLCmd((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_ClearColor_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->ClearColor((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_ClearGLColor_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->ClearGLColor((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_ClearGL_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->ClearGL((UInt_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_CreateGLLists_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualGL*)(G__getstructoffset()))->CreateGLLists((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_CreateGLViewerImp_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualGL*)(G__getstructoffset()))->CreateGLViewerImp((TPadOpenGLView*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(UInt_t)G__int(libp->para[2]),(UInt_t)G__int(libp->para[3])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_CreatePadGLView_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualGL*)(G__getstructoffset()))->CreatePadGLView((TVirtualPad*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_DeleteGLLists_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->DeleteGLLists((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_DisableGL_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->DisableGL((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_EnableGL_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->EnableGL((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_EndGLList_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->EndGLList();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_EndGLCmd_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->EndGLCmd();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_FlushGL_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->FlushGL();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_FrontGLFace_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->FrontGLFace((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetGL_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Bool_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetGL_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetGL_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetGL_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->GetGL((EG3D2GLmode)G__int(libp->para[0]),(Int_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetGLError_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualGL*)(G__getstructoffset()))->GetGLError());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetRootLight_3_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualGL*)(G__getstructoffset()))->GetRootLight());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_GetTrueColorMode_4_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TVirtualGL*)(G__getstructoffset()))->GetTrueColorMode());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_MultGLMatrix_5_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->MultGLMatrix((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_NewGLList_6_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewGLList((UInt_t)G__int(libp->para[0]),(EG3D2GLmode)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewGLList((UInt_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewGLList();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_NewGLModelView_7_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewGLModelView((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PaintGLPoints_8_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PaintGLPoints((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PolygonGLMode_9_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PolygonGLMode((EG3D2GLmode)G__int(libp->para[0]),(EG3D2GLmode)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PushGLMatrix_0_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PushGLMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PopGLMatrix_1_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PopGLMatrix();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_RotateGL_2_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->RotateGL((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_RotateGL_3_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->RotateGL((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetGLVertex_4_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetGLVertex((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetGLColor_5_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetGLColor((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetGLColorIndex_6_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetGLColorIndex((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetGLLineWidth_7_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetGLLineWidth((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetGLPointSize_8_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetGLPointSize((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetStack_9_3(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetStack((Double_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetStack();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_ShadeGLModel_0_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->ShadeGLModel((EG3D2GLmode)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_TranslateGL_1_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->TranslateGL((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_RunGLList_2_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->RunGLList((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_NewProjectionView_3_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewProjectionView((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewProjectionView((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_NewModelView_4_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->NewModelView((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PaintCone_5_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PaintCone((Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PaintPolyLine_6_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PaintPolyLine((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PaintGLPointsObject_7_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PaintGLPointsObject((const TPoints3DABC*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PaintGLPointsObject((const TPoints3DABC*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_PaintBrik_8_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->PaintBrik((Float_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetRootLight_9_4(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetRootLight((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetRootLight();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetLineAttr_0_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetLineAttr((Color_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetLineAttr((Color_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_UpdateMatrix_1_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->UpdateMatrix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])
,(Bool_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->UpdateMatrix((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->UpdateMatrix((Double_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->UpdateMatrix();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualGL_SetTrueColorMode_2_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetTrueColorMode((Bool_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualGL*)(G__getstructoffset()))->SetTrueColorMode();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TVirtualGL_TVirtualGL_3_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash)
{
   TVirtualGL *p;
   p=new TVirtualGL(*(TVirtualGL*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVirtualGL_wATVirtualGL_4_5(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVirtualGL *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVirtualGL *)((G__getstructoffset())+sizeof(TVirtualGL)*i);
   else  delete (TVirtualGL *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TVirtualPS */
static int G__TVirtualPS_Close_3_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Close((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Close();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_DrawBox_4_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->DrawBox((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_DrawFrame_5_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->DrawFrame(
(Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Int_t)G__int(libp->para[6]),(Int_t)G__int(libp->para[7]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_DrawPolyMarker_6_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->DrawPolyMarker((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_DrawPS_7_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->DrawPS((Int_t)G__int(libp->para[0]),(Float_t*)G__int(libp->para[1])
,(Float_t*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_NewPage_8_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->NewPage();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_Open_9_0(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Open((const char*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Open((const char*)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_PrintFast_0_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->PrintFast((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->PrintFast((Int_t)G__int(libp->para[0]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_Text_1_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Text((Float_t)G__double(libp->para[0]),(Float_t)G__double(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_DeclFileName_2_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPS*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_DeclFileLine_3_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPS*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_ImplFileName_4_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TVirtualPS*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_ImplFileLine_5_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TVirtualPS*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_Class_Version_6_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TVirtualPS*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_Class_7_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TVirtualPS*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_IsA_8_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((const TVirtualPS*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_ShowMembers_9_1(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_Streamer_0_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TVirtualPS_Dictionary_1_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TVirtualPS*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TVirtualPS_wATVirtualPS_2_2(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TVirtualPS *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TVirtualPS *)((G__getstructoffset())+sizeof(TVirtualPS)*i);
   else  delete (TVirtualPS *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* Setting up global function */
static int G___operatorpL_2_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString *pobj,xobj=operator+(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref);
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorpL_3_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString *pobj,xobj=operator+(*(TString*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorpL_4_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TString *pobj,xobj=operator+((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref);
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_5_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_6_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TString*)libp->para[0].ref,(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorgRgR_8_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        istream& obj=operator>>(*(istream*)libp->para[0].ref,*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorlElE_9_6(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        ostream& obj=operator<<(*(ostream*)libp->para[0].ref,*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Strip_6_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)Strip((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___StrDup_7_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)StrDup((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Compress_8_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)Compress((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___EscChar_9_7(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)EscChar((const char*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(int)G__int(libp->para[2]),(char*)G__int(libp->para[3])
,(char)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___UnEscChar_0_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)UnEscChar((const char*)G__int(libp->para[0]),(char*)G__int(libp->para[1])
,(int)G__int(libp->para[2]),(char*)G__int(libp->para[3])
,(char)G__int(libp->para[4])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatornOeQ_1_8(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator!=(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_1_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatornOeQ_2_9(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator!=((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_0_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TDatime*)libp->para[0].ref,*(TDatime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatornOeQ_1_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator!=(*(TDatime*)libp->para[0].ref,*(TDatime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorlE_2_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator<(*(TDatime*)libp->para[0].ref,*(TDatime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorlEeQ_3_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator<=(*(TDatime*)libp->para[0].ref,*(TDatime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorgR_4_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator>(*(TDatime*)libp->para[0].ref,*(TDatime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorgReQ_5_11(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator>=(*(TDatime*)libp->para[0].ref,*(TDatime*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Pad_1_20(G__value *result7,G__CONST char *funcname,struct G__param *libp,int hash) {
      {
        TVirtualPad*& obj=Pad();
         result7->ref=(long)(&obj); result7->obj.i=(long)(obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/* TBuffer */

/* TBrowser */

/* TDatime */

/* TFile */

/* TDirectory */

/* TColor */

/* TStyle */

/* TVirtualPad */

/* TApplication */

/* TAttFill */

/* TAttLine */

/* TAttMarker */

/* TAttPad */

/* TAttAxis */

/* TAttText */

/* TBrowserImp */

/* TContextMenu */

/* TContextMenuImp */

/* TEnv */

/* TAtt3D */

/* TApplicationImp */

/* TCanvasImp */

/* TControlBarImp */

/* TGuiFactory */

/* TVirtualFitter */

/* TFileHandler */

/* TBenchmark */

/* TView */

/* TVirtualX */

/* TVirtualGL */

/* TVirtualPS */

/*********************************************************
* Global function Stub
*********************************************************/

/*********************************************************
* Get size of pointer to member function
*********************************************************/
class G__Sizep2memfuncG__Base1 {
 public:
  G__Sizep2memfuncG__Base1() {p=&G__Sizep2memfuncG__Base1::sizep2memfunc;}
    size_t sizep2memfunc() { return(sizeof(p)); }
  private:
    size_t (G__Sizep2memfuncG__Base1::*p)();
};

size_t G__get_sizep2memfuncG__Base1()
{
  G__Sizep2memfuncG__Base1 a;
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
extern "C" void G__cpp_setup_inheritanceG__Base1() {

   /* Setting up class inheritance */
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TBuffer))) {
     TBuffer *G__Lderived;
     G__Lderived=(TBuffer*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TBuffer),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TBrowser))) {
     TBrowser *G__Lderived;
     G__Lderived=(TBrowser*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowser),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowser),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TNamed))) {
     TNamed *G__Lderived;
     G__Lderived=(TNamed*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TNamed),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TFile))) {
     TFile *G__Lderived;
     G__Lderived=(TFile*)0x1000;
     {
       TDirectory *G__Lpbase=(TDirectory*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile),G__get_linked_tagnum(&G__G__Base1LN_TDirectory),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TDirectory))) {
     TDirectory *G__Lderived;
     G__Lderived=(TDirectory*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TColor))) {
     TColor *G__Lderived;
     G__Lderived=(TColor*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TColor),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TColor),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TStyle))) {
     TStyle *G__Lderived;
     G__Lderived=(TStyle*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),G__get_linked_tagnum(&G__G__Base1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),G__get_linked_tagnum(&G__G__Base1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),G__get_linked_tagnum(&G__G__Base1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad))) {
     TVirtualPad *G__Lderived;
     G__Lderived=(TVirtualPad*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),G__get_linked_tagnum(&G__G__Base1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),G__get_linked_tagnum(&G__G__Base1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttPad *G__Lpbase=(TAttPad*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),G__get_linked_tagnum(&G__G__Base1LN_TAttPad),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TApplication))) {
     TApplication *G__Lderived;
     G__Lderived=(TApplication*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TContextMenu))) {
     TContextMenu *G__Lderived;
     G__Lderived=(TContextMenu*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TEnv))) {
     TEnv *G__Lderived;
     G__Lderived=(TEnv*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TEnv),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory))) {
     TGuiFactory *G__Lderived;
     G__Lderived=(TGuiFactory*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter))) {
     TVirtualFitter *G__Lderived;
     G__Lderived=(TVirtualFitter*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler))) {
     TFileHandler *G__Lderived;
     G__Lderived=(TFileHandler*)0x1000;
     {
       TSysEvtHandler *G__Lpbase=(TSysEvtHandler*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),G__get_linked_tagnum(&G__G__Base1LN_TSysEvtHandler),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark))) {
     TBenchmark *G__Lderived;
     G__Lderived=(TBenchmark*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TView))) {
     TView *G__Lderived;
     G__Lderived=(TView*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TView),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TView),G__get_linked_tagnum(&G__G__Base1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX))) {
     TVirtualX *G__Lderived;
     G__Lderived=(TVirtualX*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),G__get_linked_tagnum(&G__G__Base1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),G__get_linked_tagnum(&G__G__Base1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),G__get_linked_tagnum(&G__G__Base1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS))) {
     TVirtualPS *G__Lderived;
     G__Lderived=(TVirtualPS*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttLine *G__Lpbase=(TAttLine*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),G__get_linked_tagnum(&G__G__Base1LN_TAttLine),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttFill *G__Lpbase=(TAttFill*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),G__get_linked_tagnum(&G__G__Base1LN_TAttFill),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttMarker *G__Lpbase=(TAttMarker*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TAttText *G__Lpbase=(TAttText*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),G__get_linked_tagnum(&G__G__Base1LN_TAttText),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
}

/*********************************************************
* typedef information setup/
*********************************************************/
extern "C" void G__cpp_setup_typetableG__Base1() {

   /* Setting up typedef entry */
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
   G__search_typename2("ErrorHandlerFunc_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("void (*)(Int_t&, Double_t*, Double_t&f, Double_t*, Int_t)",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Func_t",89,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("Handle_t",107,-1,0,
-1);
   G__setnewtype(-1,"Generic resource handle",0);
   G__search_typename2("Display_t",107,-1,0,
-1);
   G__setnewtype(-1,"Display handle",0);
   G__search_typename2("Window_t",107,-1,0,
-1);
   G__setnewtype(-1,"Window handle",0);
   G__search_typename2("Pixmap_t",107,-1,0,
-1);
   G__setnewtype(-1,"Pixmap handle",0);
   G__search_typename2("Drawable_t",107,-1,0,
-1);
   G__setnewtype(-1,"Drawable handle",0);
   G__search_typename2("Colormap_t",107,-1,0,
-1);
   G__setnewtype(-1,"Colormap handle",0);
   G__search_typename2("Cursor_t",107,-1,0,
-1);
   G__setnewtype(-1,"Cursor handle",0);
   G__search_typename2("FontH_t",107,-1,0,
-1);
   G__setnewtype(-1,"Font handle (as opposed to Font_t which is an index)",0);
   G__search_typename2("KeySym_t",107,-1,0,
-1);
   G__setnewtype(-1,"Key symbol handle",0);
   G__search_typename2("Atom_t",107,-1,0,
-1);
   G__setnewtype(-1,"WM token",0);
   G__search_typename2("GContext_t",107,-1,0,
-1);
   G__setnewtype(-1,"Graphics context handle (or pointer, needs to be long)",0);
   G__search_typename2("FontStruct_t",107,-1,0,
-1);
   G__setnewtype(-1,"Pointer to font structure",0);
   G__search_typename2("Mask_t",104,-1,0,
-1);
   G__setnewtype(-1,"Structure mask type",0);
   G__search_typename2("Time_t",107,-1,0,
-1);
   G__setnewtype(-1,"Event time",0);
   G__search_typename2("Int_t (*)(const char*xact, Int_t nb, void**ar, Int_t*iret)",81,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
}

/*********************************************************
* Data Member information setup/
*********************************************************/

   /* Setting up class,struct,union tag member variable */

   /* TBuffer */
static void G__setup_memvarTBuffer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TBuffer));
   { TBuffer *p; p=(TBuffer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fMode=",0,"Read or write mode");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersion=",0,"Buffer format version");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fBufSize=",0,"Size of buffer");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBuffer=",0,"Buffer used to store objects");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBufCur=",0,"Current position in buffer");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBufMax=",0,"End of buffer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMapCount=",0,"Number of objects or classes in map");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMapSize=",0,"Default size of map");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TExMap),-1,-1,2,"fReadMap=",0,"Map containing id,object references during reading");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TExMap),-1,-1,2,"fWriteMap=",0,"Map containing object,id pairs during writing");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,2,"fgMapSize=",0,"Default map size for all TBuffer objects");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLEMode),-1,-2,1,"kRead=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLEMode),-1,-2,1,"kWrite=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLdA),-1,-2,1,"kInitialSize=1024",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLdA),-1,-2,1,"kMinimalSize=128",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLdA),-1,-2,1,"kMapSize=503",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TBrowser */
static void G__setup_memvarTBrowser(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowser));
   { TBrowser *p; p=(TBrowser*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,-1,4,"fImp=",0,"Window system specific browser implementation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TBrowserTimer),-1,-1,4,"fTimer=",0,"Browser's timer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,-1,4,"fLastSelectedObject=",0,"The last TObject selected by user");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,-1,2,"fContextMenu=",0,"Context menu pointer");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fNeedRefresh=",0,"True if the browser needs refresh");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* EObjBits */

   /* TDatime */
static void G__setup_memvarTDatime(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TDatime));
   { TDatime *p; p=(TDatime*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fDatime=",0,"Date (relative to 1995) + time");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFile */
static void G__setup_memvarTFile(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile));
   { TFile *p; p=(TFile*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fD=",0,"File descriptor");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fBEGIN=",0,"First used byte in file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fEND=",0,"Last used byte in file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fVersion=",0,"File format version");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fCompress=",0,"(=1 file is compressed, 0 otherwise)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,2,"fOption=",0,"File options");
   G__memvar_setup((void*)NULL,99,0,0,-1,G__defined_typename("Char_t"),-1,2,"fUnits=",0,"Number of bytes for file pointers");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fSeekFree=",0,"Location on disk of free segments structure");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNbytesFree=",0,"Number of bytes for free segments structure");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fWritten=",0,"Number of objects written so far");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSumBuffer=",0,"Sum of buffer sizes of objects written so far");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fSum2Buffer=",0,"Sum of squares of buffer sizes of objects written so far");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,-1,2,"fFree=",0,"Free segments linked list table");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fBytesWrite=",0,"Number of bytes written to this file");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,2,"fBytesRead=",0,"Number of bytes read from this file");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-2,2,"fgBytesWrite=",0,"Number of bytes written by all TFile objects");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-2,2,"fgBytesRead=",0,"Number of bytes read by all TFile objects");
   G__memvar_setup((void*)NULL,105,0,1,-1,G__defined_typename("Int_t"),-2,2,"kBegin=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,99,0,1,-1,G__defined_typename("Char_t"),-2,2,"kUnits=",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TFilecLcLERelativeTo),-1,-2,1,"kBeg=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TFilecLcLERelativeTo),-1,-2,1,"kCur=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TFilecLcLERelativeTo),-1,-2,1,"kEnd=2",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDirectory */
static void G__setup_memvarTDirectory(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory));
   { TDirectory *p; p=(TDirectory*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fModified=",0,"true if directory has been modified");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fWritable=",0,"true if directory is writable");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,-1,2,"fDatimeC=",0,"Date and time when directory is created");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,-1,2,"fDatimeM=",0,"Date and time of last modification");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNbytesKeys=",0,"Number of bytes for the keys");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNbytesName=",0,"Number of bytes in TNamed at creation time");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fSeekDir=",0,"Location of directory on file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fSeekParent=",0,"Location of parent directory on file");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Seek_t"),-1,2,"fSeekKeys=",0,"Location of Keys record on file");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,-1,2,"fFile=",0,"pointer to current file in memory");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,-1,2,"fMother=",0,"pointer to mother of the directory");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,-1,2,"fList=",0,"Pointer to objects list in memory");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,-1,2,"fKeys=",0,"Pointer to keys list in memory");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TDirectorycLcLdA),-1,-2,1,"kCloseDirectory=128",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TColor */
static void G__setup_memvarTColor(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TColor));
   { TColor *p; p=(TColor*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNumber=",0,"color number identifier");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fRed=",0,"Fraction of Red");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fGreen=",0,"Fraction of Green");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fBlue=",0,"Fraction of Blue");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fHue=",0,"Hue");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLight=",0,"Light");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fSaturation=",0,"Saturation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TStyle */
static void G__setup_memvarTStyle(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle));
   { TStyle *p; p=(TStyle*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),-1,-1,4,"fXaxis=",0,"X axis attributes");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),-1,-1,4,"fYaxis=",0,"Y axis attributes");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),-1,-1,4,"fZaxis=",0,"Z axis attributes");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fBarWidth=",0,"width of bar for graphs");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fBarOffset=",0,"offset of bar for graphs");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fDrawBorder=",0,"flag to draw border(=1) or not (0)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptLogx=",0,"=1 if log scale in X");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptLogy=",0,"=1 if log scale in y");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptLogz=",0,"=1 if log scale in z");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptDate=",0,"=1 if date option is selected");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptStat=",0,"=1 if option Stat is selected");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptTitle=",0,"=1 if option Title is selected");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptFile=",0,"=1 if option File is selected");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fOptFit=",0,"=1 if option Fit is selected");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fErrorMarker=",0,"marker for error bars");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fShowEventStatus=",0,"Show event status panel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fErrorMsize=",0,"marker size for error bars");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fErrorX=",0,"per cent of bin width for errors along X");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fFuncColor=",0,"function color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fFuncStyle=",0,"function style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fFuncWidth=",0,"function line width");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fFrameFillColor=",0,"pad frame fill color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fFrameLineColor=",0,"pad frame line color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fFrameFillStyle=",0,"pad frame fill style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fFrameLineStyle=",0,"pad frame line style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fFrameLineWidth=",0,"pad frame line width");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fFrameBorderSize=",0,"pad frame border size");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fFrameBorderMode=",0,"pad frame border mode");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fHistFillColor=",0,"histogram fill color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fHistLineColor=",0,"histogram line color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fHistFillStyle=",0,"histogram fill style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fHistLineStyle=",0,"histogram line style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fHistLineWidth=",0,"histogram line width");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fCanvasColor=",0,"canvas color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fCanvasBorderSize=",0,"canvas border size");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCanvasBorderMode=",0,"canvas border mode");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCanvasDefH=",0,"default canvas height");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCanvasDefW=",0,"default canvas width");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCanvasDefX=",0,"default canvas top X position");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fCanvasDefY=",0,"default canvas top Y position");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fPadColor=",0,"pad color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fPadBorderSize=",0,"pad border size");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fPadBorderMode=",0,"pad border mode");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPadBottomMargin=",0,"pad bottom margin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPadTopMargin=",0,"pad top margin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPadLeftMargin=",0,"pad left margin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPadRightMargin=",0,"pad right margin");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fPadGridX=",0,"true to get the grid along X");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fPadGridY=",0,"true to get the grid along Y");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fPadTickX=",0,"=1 to set special pad ticks along X");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fPadTickY=",0,"=1 to set special pad ticks along Y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPaperSizeX=",0,"PostScript paper size along X");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fPaperSizeY=",0,"PostScript paper size along Y");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fScreenFactor=",0,"Multiplication factor for canvas size and position");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fStatColor=",0,"stat fill area color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fStatTextColor=",0,"stat text color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fStatBorderSize=",0,"border size of Stats PaveLabel");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fStatFont=",0,"font style of Stats PaveLabel");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fStatStyle=",0,"fill area style of Stats PaveLabel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatX=",0,"X position of top right corner of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatY=",0,"Y position of top right corner of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatW=",0,"width of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fStatH=",0,"height of stat box");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fTitleColor=",0,"title fill area color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,4,"fTitleTextColor=",0,"title text color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,4,"fTitleBorderSize=",0,"border size of Title PavelLabel");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fTitleFont=",0,"font style of Title PaveLabel");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,4,"fTitleStyle=",0,"fill area style of title PaveLabel");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleX=",0,"X position of top left corner of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleY=",0,"Y position of top left corner of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleW=",0,"width of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fTitleH=",0,"height of title box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLegoInnerR=",0,"Inner radius for cylindrical legos");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TArrayI),-1,-1,4,"fPalette=",0,"Color palette");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,4,"fLineStyle[30]=",0,"String describing line style i (for postScript)");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,4,"fHeaderPS=",0,"User defined additional Postscript header");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,4,"fLineScalePS=",0,"Line scale factor when drawing lines on Postscript");
   G__memvar_setup((void*)NULL,100,0,0,-1,G__defined_typename("Double_t"),-1,4,"fTimeOffset=",0,"Time offset (UTC) to the beginning of an axis");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TStylecLcLEPaperSize),-1,-2,1,"kA4=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TStylecLcLEPaperSize),-1,-2,1,"kUSLetter=1",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVirtualPad */
static void G__setup_memvarTVirtualPad(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad));
   { TVirtualPad *p; p=(TVirtualPad*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fResizing=",0,"!true when resizing the pad");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TApplication */
static void G__setup_memvarTApplication(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication));
   { TApplication *p; p=(TApplication*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fReturnFromRun=",0,"When true return from Run()");
   G__memvar_setup((void*)NULL,105,0,0,-1,-1,-1,4,"fArgc=",0,"Number of command line arguments");
   G__memvar_setup((void*)NULL,67,2,0,-1,-1,-1,4,"fArgv=",0,"Command line arguments");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,-1,4,"fAppImp=",0,"Window system specific application implementation");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fNoLog=",0,"Do not process logon and logoff macros");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,4,"fQuit=",0,"Exit after having processed input files");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TObjArray),-1,-1,4,"fFiles=",0,"Array of input files (TObjString's)");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,4,"fIdleCommand=",0,"Command to execute while application is idle");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TTimer),-1,-1,4,"fIdleTimer=",0,"Idle timer");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TSignalHandler),-1,-1,4,"fSigHandler=",0,"Interrupt handler");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttFill */
static void G__setup_memvarTAttFill(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFill));
   { TAttFill *p; p=(TAttFill*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fFillColor=",0,"fill area color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fFillStyle=",0,"fill area style");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttLine */
static void G__setup_memvarTAttLine(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttLine));
   { TAttLine *p; p=(TAttLine*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fLineColor=",0,"line color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fLineStyle=",0,"line style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,2,"fLineWidth=",0,"line width");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttMarker */
static void G__setup_memvarTAttMarker(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttMarker));
   { TAttMarker *p; p=(TAttMarker*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fMarkerColor=",0,"Marker color index");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fMarkerStyle=",0,"Marker style");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Size_t"),-1,2,"fMarkerSize=",0,"Marker size");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttPad */
static void G__setup_memvarTAttPad(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttPad));
   { TAttPad *p; p=(TAttPad*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fLeftMargin=",0,"LeftMargin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fRightMargin=",0,"RightMargin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fBottomMargin=",0,"BottomMargin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fTopMargin=",0,"TopMargin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fXfile=",0,"X position where to draw the file name");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fYfile=",0,"X position where to draw the file name");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fAfile=",0,"Alignment for the file name");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fXstat=",0,"X position where to draw the statistics");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fYstat=",0,"X position where to draw the statistics");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Coord_t"),-1,2,"fAstat=",0,"Alignment for the statistics");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fFrameFillColor=",0,"pad frame fill color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fFrameLineColor=",0,"pad frame line color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fFrameFillStyle=",0,"pad frame fill style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fFrameLineStyle=",0,"pad frame line style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,2,"fFrameLineWidth=",0,"pad frame line width");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,2,"fFrameBorderSize=",0,"pad frame border size");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fFrameBorderMode=",0,"pad frame border mode");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttAxis */
static void G__setup_memvarTAttAxis(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttAxis));
   { TAttAxis *p; p=(TAttAxis*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNdivisions=",0,"Number of divisions(10000*n3 + 100*n2 + n1)");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fAxisColor=",0,"color of the line axis");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fLabelColor=",0,"color of labels");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fLabelFont=",0,"font for labels");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fLabelOffset=",0,"offset of labels");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fLabelSize=",0,"size of labels");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTickLength=",0,"length of tick marks");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTitleOffset=",0,"offset of axis title");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTitleSize=",0,"size of axis title");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttText */
static void G__setup_memvarTAttText(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttText));
   { TAttText *p; p=(TAttText*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTextAngle=",0,"Text angle");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTextSize=",0,"Text size");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Short_t"),-1,2,"fTextAlign=",0,"Text alignment");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fTextColor=",0,"Text color index");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Font_t"),-1,2,"fTextFont=",0,"Text font number");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TBrowserImp */
static void G__setup_memvarTBrowserImp(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp));
   { TBrowserImp *p; p=(TBrowserImp*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,-1,2,"fBrowser=",0,"TBrowser associated with this implementation");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fShowCycles=",0,"Show object cycle numbers in browser");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TContextMenu */
static void G__setup_memvarTContextMenu(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenu));
   { TContextMenu *p; p=(TContextMenu*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),-1,-1,2,"fContextMenuImp=",0,"Context menu system specific implementation");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TMethod),-1,-1,2,"fSelectedMethod=",0,"selected method");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,-1,2,"fSelectedObject=",0,"selected object");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,-1,2,"fSelectedCanvas=",0,"selected canvas (if exist)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,-1,2,"fSelectedPad=",0,"selected pad (if exist)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,-1,2,"fBrowser=",0,"selected browser (if exist)");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TContextMenuImp */
static void G__setup_memvarTContextMenuImp(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp));
   { TContextMenuImp *p; p=(TContextMenuImp*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,-1,2,"fContextMenu=",0,"TContextMenu associated with this implementation");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TEnv */
static void G__setup_memvarTEnv(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TEnv));
   { TEnv *p; p=(TEnv*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TOrdCollection),-1,-1,4,"fTable=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,4,"fRcName=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAtt3D */
static void G__setup_memvarTAtt3D(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAtt3D));
   { TAtt3D *p; p=(TAtt3D*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TApplicationImp */
static void G__setup_memvarTApplicationImp(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp));
   { TApplicationImp *p; p=(TApplicationImp*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TCanvasImp */
static void G__setup_memvarTCanvasImp(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp));
   { TCanvasImp *p; p=(TCanvasImp*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TCanvas),-1,-1,2,"fCanvas=",0,"TCanvas associated with this implementation");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TControlBarImp */
static void G__setup_memvarTControlBarImp(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp));
   { TControlBarImp *p; p=(TControlBarImp*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TControlBar),-1,-1,2,"fControlBar=",0,"TControlBar associated with this implementation");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fXpos=",0,"Initial x position");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fYpos=",0,"Initial y position");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TGuiFactory */
static void G__setup_memvarTGuiFactory(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory));
   { TGuiFactory *p; p=(TGuiFactory*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVirtualFitter */
static void G__setup_memvarTVirtualFitter(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter));
   { TVirtualFitter *p; p=(TVirtualFitter*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter),-1,-2,4,"fgFitter=",0,"Current fitter (default TFitter)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,4,"fgMaxpar=",0,"Maximum number of fit parameters for current fitter");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TFileHandler */
static void G__setup_memvarTFileHandler(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler));
   { TFileHandler *p; p=(TFileHandler*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,-1,-1,2,"fFileNum=",0,"File descriptor");
   G__memvar_setup((void*)NULL,105,0,0,-1,-1,-1,2,"fMask=",0,"Event mask");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TBenchmark */
static void G__setup_memvarTBenchmark(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark));
   { TBenchmark *p; p=(TBenchmark*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNbench=",0,"Number of active benchmarks");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNmax=",0,"Maximum number of benchmarks initialized");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,2,"fNames=",0,"Names of benchmarks");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRealTime=",0,"Real Time");
   G__memvar_setup((void*)NULL,70,0,0,-1,G__defined_typename("Float_t"),-1,2,"fCpuTime=",0,"Cpu Time");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TStopwatch),-1,-1,2,"fTimer=",0,"Timers");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TView */
static void G__setup_memvarTView(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TView));
   { TView *p; p=(TView*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fSystem=",0,"Coordinate system");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fLatitude=",0,"View angle latitude");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fLongitude=",0,"View angle longitude");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fPsi=",0,"View angle psi");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTN[12]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTB[12]=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmax[3]=",0,"Upper limits of object");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fRmin[3]=",0,"Lower limits of object");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTnorm[12]=",0,"Transformation matrix");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fTback[12]=",0,"Back transformation matrix");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX1[3]=",0,"First coordinate of X axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fX2[3]=",0,"Second coordinate of X axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY1[3]=",0,"First coordinate of Y axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fY2[3]=",0,"Second coordinate of Y axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZ1[3]=",0,"First coordinate of Z axis");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fZ2[3]=",0,"Second coordinate of Z axis");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TSeqCollection),-1,-1,2,"fOutline=",0,"Collection of outline's objects");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fDefaultOutline=",0,"Set to TRUE if outline is default cube");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fAutoRange=",0,"Set to TRUE if range computed automatically");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVirtualX */
static void G__setup_memvarTVirtualX(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX));
   { TVirtualX *p; p=(TVirtualX*)0x1000; if (p) { }
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEDrawMode),-1,-2,1,"kCopy=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEDrawMode),-1,-2,1,"kXor=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEDrawMode),-1,-2,1,"kInvert=3",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEBoxMode),-1,-2,1,"kHollow=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEBoxMode),-1,-2,1,"kFilled=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLETextMode),-1,-2,1,"kClear=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLETextMode),-1,-2,1,"kOpaque=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLETextSetMode),-1,-2,1,"kCheck=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLETextSetMode),-1,-2,1,"kLoad=1",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEDrawMode),-1,-1,2,"fDrawMode=",0,"Drawing mode");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVirtualGL */
static void G__setup_memvarTVirtualGL(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL));
   { TVirtualGL *p; p=(TVirtualGL*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fColorIndx=",0,"Current color index;");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fRootLight=",0,"Whether the \"ROOT\" light will be used (otherwise OpenGL)");
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fTrueColorMode=",0,"Defines the whether the current hardware layer supports the true colors");
   G__memvar_setup((void*)NULL,105,0,0,G__get_linked_tagnum(&G__G__Base1LN_EG3D2GLmode),-1,-1,2,"fFaceFlag=",0,"The current \"face\" definiton - clockwise/counterclockwise");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TVirtualPS */
static void G__setup_memvarTVirtualPS(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS));
   { TVirtualPS *p; p=(TVirtualPS*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}

extern "C" void G__cpp_setup_memvarG__Base1() {
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
static void G__setup_memfuncTBuffer(void) {
   /* TBuffer */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TBuffer));
   G__memfunc_setup("TBuffer",686,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBuffer",686,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,0,1,1,2,0,"u 'TBuffer' - 11 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"u 'TBuffer' - 11 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckCount",999,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"h - 'UInt_t' 0 - offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckObject",1077,(G__InterfaceMethod)NULL,104,-1,G__defined_typename("UInt_t"),0,3,1,2,0,
"h - 'UInt_t' 0 - offset U 'TClass' - 10 - cl "
"b - 'Bool_t' 0 kFALSE readClass",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Expand",608,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - newsize","Expand buffer to newsize",(void*)NULL,0);
   G__memfunc_setup("Read",380,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"C - - 10 - name i - 'Int_t' 0 - opt "
"i - 'Int_t' 0 - bufs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TBuffer",686,G__TBuffer_TBuffer_8_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,0,3,1,1,0,
"i 'TBuffer::EMode' - 0 - mode i - 'Int_t' 0 kInitialSize bufsiz "
"Y - - 0 0 buf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapObject",885,G__TBuffer_MapObject_0_1,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 10 - obj h - 'UInt_t' 0 1 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TBuffer_Reset_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitMap",690,G__TBuffer_InitMap_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ResetMap",801,G__TBuffer_ResetMap_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReadMode",1069,G__TBuffer_SetReadMode_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReadParam",1177,G__TBuffer_SetReadParam_5_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mapsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWriteMode",1212,G__TBuffer_SetWriteMode_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWriteParam",1320,G__TBuffer_SetWriteParam_7_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mapsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBuffer",902,G__TBuffer_SetBuffer_8_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - buf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBufferOffset",1517,G__TBuffer_SetBufferOffset_9_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Buffer",602,G__TBuffer_Buffer_0_2,67,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BufferSize",1013,G__TBuffer_BufferSize_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DetachBuffer",1187,G__TBuffer_DetachBuffer_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Length",610,G__TBuffer_Length_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckByteCount",1403,G__TBuffer_CheckByteCount_4_2,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"h - 'UInt_t' 0 - startpos h - 'UInt_t' 0 - bcnt "
"U 'TClass' - 10 - clss",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetByteCount",1225,G__TBuffer_SetByteCount_5_2,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - cntpos b - 'Bool_t' 0 kFALSE packInVersion",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsReading",886,G__TBuffer_IsReading_6_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsWriting",928,G__TBuffer_IsWriting_7_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadBuf",665,G__TBuffer_ReadBuf_8_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"Y - - 0 - buf i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteBuf",808,G__TBuffer_WriteBuf_9_2,121,-1,-1,0,2,1,1,0,
"Y - - 10 - buf i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadString",1011,G__TBuffer_ReadString_0_3,67,-1,-1,0,2,1,1,0,
"C - - 0 - s i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteString",1154,G__TBuffer_WriteString_1_3,121,-1,-1,0,1,1,1,0,"C - - 10 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadVersion",1122,G__TBuffer_ReadVersion_2_3,115,-1,G__defined_typename("Version_t"),0,2,1,1,0,
"H - 'UInt_t' 0 0 start H - 'UInt_t' 0 0 bcnt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteVersion",1265,G__TBuffer_WriteVersion_3_3,104,-1,G__defined_typename("UInt_t"),0,2,1,1,0,
"U 'TClass' - 10 - cl b - 'Bool_t' 0 kFALSE useBcnt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadClass",882,G__TBuffer_ReadClass_4_3,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,2,1,1,0,
"U 'TClass' - 10 0 cl H - 'UInt_t' 0 0 objTag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteClass",1025,G__TBuffer_WriteClass_5_3,121,-1,-1,0,1,1,1,0,"U 'TClass' - 10 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadObject",979,G__TBuffer_ReadObject_6_3,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,1,1,1,0,"U 'TClass' - 10 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteObject",1122,G__TBuffer_WriteObject_7_3,121,-1,-1,0,1,1,1,0,"U 'TObject' - 10 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_8_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Char_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_9_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"B - 'UChar_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_0_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"S - 'Short_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_1_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"R - 'UShort_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_2_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"I - 'Int_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_3_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"H - 'UInt_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_4_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"L - 'Long_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_5_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"K - 'ULong_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_6_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"F - 'Float_t' 1 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_7_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"D - 'Double_t' 1 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_8_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_9_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"B - 'UChar_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_0_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"S - 'Short_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_1_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"R - 'UShort_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_2_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"I - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_3_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"H - 'UInt_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_4_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"L - 'Long_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_5_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"K - 'ULong_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_6_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"F - 'Float_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_7_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"D - 'Double_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_8_5,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 10 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_9_5,121,-1,-1,0,2,1,1,0,
"B - 'UChar_t' 10 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_0_6,121,-1,-1,0,2,1,1,0,
"S - 'Short_t' 10 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_1_6,121,-1,-1,0,2,1,1,0,
"R - 'UShort_t' 10 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_2_6,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 10 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_3_6,121,-1,-1,0,2,1,1,0,
"H - 'UInt_t' 10 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_4_6,121,-1,-1,0,2,1,1,0,
"L - 'Long_t' 10 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_5_6,121,-1,-1,0,2,1,1,0,
"K - 'ULong_t' 10 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_6_6,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 10 - f i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_7_6,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 10 - d i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_8_6,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_9_6,121,-1,-1,0,2,1,1,0,
"B - 'UChar_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_0_7,121,-1,-1,0,2,1,1,0,
"S - 'Short_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_1_7,121,-1,-1,0,2,1,1,0,
"R - 'UShort_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_2_7,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_3_7,121,-1,-1,0,2,1,1,0,
"H - 'UInt_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_4_7,121,-1,-1,0,2,1,1,0,
"L - 'Long_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_5_7,121,-1,-1,0,2,1,1,0,
"K - 'ULong_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_6_7,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - f i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_7_7,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - d i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_8_7,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 10 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_9_7,121,-1,-1,0,2,1,1,0,
"B - 'UChar_t' 10 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_0_8,121,-1,-1,0,2,1,1,0,
"S - 'Short_t' 10 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_1_8,121,-1,-1,0,2,1,1,0,
"R - 'UShort_t' 10 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_2_8,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 10 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_3_8,121,-1,-1,0,2,1,1,0,
"H - 'UInt_t' 10 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_4_8,121,-1,-1,0,2,1,1,0,
"L - 'Long_t' 10 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_5_8,121,-1,-1,0,2,1,1,0,
"K - 'ULong_t' 10 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_6_8,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 10 - f i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_7_8,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 10 - d i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_8_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"c - 'Char_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_9_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"b - 'UChar_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_0_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"s - 'Short_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_1_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"r - 'UShort_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_2_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"i - 'Int_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_3_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"h - 'UInt_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_4_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"l - 'Long_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_5_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"k - 'ULong_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_6_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"f - 'Float_t' 1 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_7_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"d - 'Double_t' 1 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_8_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"C - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_9_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"c - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_0_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"b - 'UChar_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_1_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"s - 'Short_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_2_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"r - 'UShort_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_3_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_4_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"h - 'UInt_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_5_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"l - 'Long_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_6_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"k - 'ULong_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_7_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"f - 'Float_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_8_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"d - 'Double_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_9_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"C - 'Char_t' 10 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetGlobalReadParam",1770,G__TBuffer_SetGlobalReadParam_0_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mapsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetGlobalWriteParam",1913,G__TBuffer_SetGlobalWriteParam_1_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mapsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobalReadParam",1758,G__TBuffer_GetGlobalReadParam_2_11,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobalWriteParam",1901,G__TBuffer_GetGlobalWriteParam_3_11,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TBuffer_DeclFileName_4_11,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBuffer_DeclFileLine_5_11,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBuffer_ImplFileName_6_11,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBuffer_ImplFileLine_7_11,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBuffer_Class_Version_8_11,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBuffer_Class_9_11,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBuffer_IsA_0_12,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBuffer_ShowMembers_1_12,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBuffer_Streamer_2_12,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TBuffer_Dictionary_3_12,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBuffer",812,G__TBuffer_wATBuffer_4_12,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBrowser(void) {
   /* TBrowser */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowser));
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,2,1,1,0,
"C - - 10 \"Browser\" name C - - 10 \"ROOT Object Browser\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,4,1,1,0,
"C - - 10 - name C - - 10 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,6,1,1,0,
"C - - 10 - name C - - 10 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_3_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,3,1,1,0,
"C - - 10 - name U 'TObject' - 0 - obj "
"C - - 10 \"ROOT Object Browser\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_4_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,5,1,1,0,
"C - - 10 - name U 'TObject' - 0 - obj "
"C - - 10 - title h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_5_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,7,1,1,0,
"C - - 10 - name U 'TObject' - 0 - obj "
"C - - 10 - title i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TBrowser_Add_7_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj C - - 10 0 name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Create",596,G__TBrowser_Create_8_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 0 obj","Create this Browser",(void*)NULL,0);
   G__memfunc_setup("ExecuteDefaultAction",2038,G__TBrowser_ExecuteDefaultAction_9_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBrowserImp",1322,G__TBrowser_GetBrowserImp_0_1,85,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetContextMenu",1434,G__TBrowser_GetContextMenu_1_1,85,G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRefreshFlag",1385,G__TBrowser_GetRefreshFlag_2_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSelected",1097,G__TBrowser_GetSelected_3_1,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetRefreshFlag",1397,G__TBrowser_SetRefreshFlag_4_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - flag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Iconify",721,G__TBrowser_Iconify_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("RecursiveRemove",1574,G__TBrowser_RecursiveRemove_6_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Refresh",719,G__TBrowser_Refresh_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSelected",1109,G__TBrowser_SetSelected_8_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - clickedObject",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Show",417,G__TBrowser_Show_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TBrowser_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBrowser_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBrowser_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBrowser_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBrowser_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBrowser_Class_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBrowser_IsA_6_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBrowser_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBrowser_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TBrowser_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TBrowser",824,G__TBrowser_TBrowser_0_3,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,1,1,1,0,"u 'TBrowser' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBrowser",950,G__TBrowser_wATBrowser_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDatime(void) {
   /* TDatime */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TDatime));
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,1,1,1,0,"u 'TDatime' - 11 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,1,1,1,0,"h - 'UInt_t' 0 - time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_3_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,2,1,1,0,
"i - 'Int_t' 0 - date i - 'Int_t' 0 - time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_4_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,6,1,1,0,
"i - 'Int_t' 0 - year i - 'Int_t' 0 - month "
"i - 'Int_t' 0 - day i - 'Int_t' 0 - hour "
"i - 'Int_t' 0 - min i - 'Int_t' 0 - sec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,G__TDatime_operatoreQ_5_0,117,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,1,1,1,0,"u 'TDatime' - 11 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AsString",811,G__TDatime_AsString_6_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Convert",737,G__TDatime_Convert_7_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TDatime_Copy_8_0,121,-1,-1,0,1,1,1,0,"u 'TDatime' - 1 - datime",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Get",288,G__TDatime_Get_9_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDate",670,G__TDatime_GetDate_0_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTime",687,G__TDatime_GetTime_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FillBuffer",993,G__TDatime_FillBuffer_2_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TDatime_Print_3_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadBuffer",982,G__TDatime_ReadBuffer_4_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TDatime_Set_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TDatime_Set_6_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - date i - 'Int_t' 0 - time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Set",300,G__TDatime_Set_7_1,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - year i - 'Int_t' 0 - month "
"i - 'Int_t' 0 - day i - 'Int_t' 0 - hour "
"i - 'Int_t' 0 - min i - 'Int_t' 0 - sec",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof",624,G__TDatime_Sizeof_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDateTime",1069,G__TDatime_GetDateTime_9_1,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 0 - datetime i - 'Int_t' 1 - date "
"i - 'Int_t' 1 - time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TDatime_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDatime_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDatime_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDatime_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDatime_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDatime_Class_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDatime_IsA_6_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDatime_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDatime_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TDatime_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TDatime",806,G__TDatime_wATDatime_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFile(void) {
   /* TFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile));
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"b - 'Bool_t' 0 - create",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SysOpen",721,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,3,1,2,0,
"C - - 10 - pathname i - 'Int_t' 0 - flags "
"h - 'UInt_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SysClose",821,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,1,1,2,0,"i - 'Int_t' 0 - fd",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SysRead",699,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,3,1,2,0,
"i - 'Int_t' 0 - fd Y - - 0 - buf "
"i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SysWrite",842,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,3,1,2,0,
"i - 'Int_t' 0 - fd Y - - 10 - buf "
"i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SysSeek",711,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Seek_t"),0,3,1,2,0,
"i - 'Int_t' 0 - fd i - 'Seek_t' 0 - offset "
"i - 'Int_t' 0 - whence",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SysSync",732,(G__InterfaceMethod)NULL,105,-1,G__defined_typename("Int_t"),0,1,1,2,0,"i - 'Int_t' 0 - fd",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TFile",468,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,1,1,4,0,"u 'TFile' - 11 - -","Files cannot be copied",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"u 'TFile' - 11 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFile",468,G__TFile_TFile_9_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFile",468,G__TFile_TFile_0_1,105,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,4,1,1,0,
"C - - 10 - fname C - 'Option_t' 0 \"\" option "
"C - - 10 \"\" ftitle i - 'Int_t' 0 1 compress",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Close",502,G__TFile_Close_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TFile_Copy_3_1,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Delete",595,G__TFile_Delete_4_1,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" namecycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TFile_Draw_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TFile_FillBuffer_6_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Flush",514,G__TFile_Flush_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBestBuffer",1288,G__TFile_GetBestBuffer_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCompressionLevel",1962,G__TFile_GetCompressionLevel_9_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCompressionFactor",2065,G__TFile_GetCompressionFactor_0_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEND",503,G__TFile_GetEND_1_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFd",458,G__TFile_GetFd_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfFree",1267,G__TFile_GetListOfFree_3_2,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNfree",784,G__TFile_GetNfree_4_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TFile_GetOption_5_2,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBytesRead",1187,G__TFile_GetBytesRead_6_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBytesWritten",1556,G__TFile_GetBytesWritten_7_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersion",1030,G__TFile_GetVersion_8_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRecordHeader",1480,G__TFile_GetRecordHeader_9_2,105,-1,G__defined_typename("Int_t"),0,6,1,1,0,
"C - - 0 - buf i - 'Seek_t' 0 - first "
"i - 'Int_t' 0 - maxbytes i - 'Int_t' 1 - nbytes "
"i - 'Int_t' 1 - objlen i - 'Int_t' 1 - keylen",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsOpen",590,G__TFile_IsOpen_0_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TFile_ls_1_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeFree",768,G__TFile_MakeFree_2_3,121,-1,-1,0,2,1,1,0,
"i - 'Seek_t' 0 - first i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Map",286,G__TFile_Map_3_3,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TFile_Paint_4_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TFile_Print_5_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TFile_ReadBuffer_6_3,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadFree",766,G__TFile_ReadFree_7_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recover",726,G__TFile_Recover_8_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Seek",392,G__TFile_Seek_9_3,121,-1,-1,0,2,1,1,0,
"i - 'Seek_t' 0 - offset i 'TFile::ERelativeTo' - 0 kBeg pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCompressionLevel",1974,G__TFile_SetCompressionLevel_0_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 level",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetEND",515,G__TFile_SetEND_1_4,121,-1,-1,0,1,1,1,0,"i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TFile_SetOption_2_4,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \">\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TFile_Sizeof_3_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SumBuffer",911,G__TFile_SumBuffer_4_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - bufsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteBuffer",1125,G__TFile_WriteBuffer_5_4,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 10 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,G__TFile_Write_6_4,121,-1,-1,0,3,1,1,0,
"C - - 10 0 name i - 'Int_t' 0 0 opt "
"i - 'Int_t' 0 0 bufsiz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteFree",909,G__TFile_WriteFree_7_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteHeader",1108,G__TFile_WriteHeader_8_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Open",402,G__TFile_Open_9_4,85,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,4,1,1,0,
"C - - 10 - name C - 'Option_t' 0 \"\" option "
"C - - 10 \"\" ftitle i - 'Int_t' 0 1 compress",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFileBytesRead",1571,G__TFile_GetFileBytesRead_0_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFileBytesWritten",1940,G__TFile_GetFileBytesWritten_1_5,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFileBytesRead",1583,G__TFile_SetFileBytesRead_2_5,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0 bytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFileBytesWritten",1952,G__TFile_SetFileBytesWritten_3_5,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0 bytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TFile_DeclFileName_4_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFile_DeclFileLine_5_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFile_ImplFileName_6_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFile_ImplFileLine_7_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFile_Class_Version_8_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFile_Class_9_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFile_IsA_0_6,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFile_ShowMembers_1_6,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFile_Streamer_2_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TFile_Dictionary_3_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TFile",594,G__TFile_wATFile_4_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDirectory(void) {
   /* TDirectory */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory));
   G__memfunc_setup("cd1",248,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,2,0,"C - - 10 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Cd1",216,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,2,0,"C - - 10 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDirectory",1033,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,1,1,4,0,"u 'TDirectory' - 11 - directory","Directories cannot be copied",(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,4,0,"u 'TDirectory' - 11 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDirectory",1033,G__TDirectory_TDirectory_4_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDirectory",1033,G__TDirectory_TDirectory_5_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,3,1,1,0,
"C - - 10 - name C - - 10 - title "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TDirectory_Append_7_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AppendKey",897,G__TDirectory_AppendKey_8_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TKey' - 0 - key",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TDirectory_Browse_9_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Build",496,G__TDirectory_Build_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clear",487,G__TDirectory_Clear_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Close",502,G__TDirectory_Close_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TDirectory_Copy_3_1,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TDirectory_cd_4_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 0 path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteAll",876,G__TDirectory_DeleteAll_5_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Delete",595,G__TDirectory_Delete_6_1,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" namecycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TDirectory_Draw_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TDirectory_FillBuffer_8_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Get",288,G__TDirectory_Get_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,1,1,1,0,"C - - 10 - namecycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFile",672,G__TDirectory_GetFile_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetKey",585,G__TDirectory_GetKey_1_2,85,G__get_linked_tagnum(&G__G__Base1LN_TKey),-1,0,2,1,1,0,
"C - - 10 - name s - 'Short_t' 10 9999 cycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetList",700,G__TDirectory_GetList_2_2,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfKeys",1293,G__TDirectory_GetListOfKeys_3_2,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMother",911,G__TDirectory_GetMother_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNkeys",810,G__TDirectory_GetNkeys_5_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekDir",967,G__TDirectory_GetSeekDir_6_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekParent",1298,G__TDirectory_GetSeekParent_7_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekKeys",1092,G__TDirectory_GetSeekKeys_8_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPath",685,G__TDirectory_GetPath_9_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TDirectory_IsFolder_0_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsModified",989,G__TDirectory_IsModified_1_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsWritable",1014,G__TDirectory_IsWritable_2_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TDirectory_ls_3_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("mkdir",535,G__TDirectory_mkdir_4_3,85,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,2,1,1,0,
"C - - 10 - name C - - 10 \"\" title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TDirectory_Paint_5_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TDirectory_Print_6_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Purge",515,G__TDirectory_Purge_7_3,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 1 nkeep",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("pwd",331,G__TDirectory_pwd_8_3,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadAll",661,G__TDirectory_ReadAll_9_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadKeys",792,G__TDirectory_ReadKeys_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TDirectory_RecursiveRemove_1_4,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Save",399,G__TDirectory_Save_2_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveSelf",793,G__TDirectory_SaveSelf_3_4,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE force",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetModified",1101,G__TDirectory_SetModified_4_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMother",923,G__TDirectory_SetMother_5_4,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - mother",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof",624,G__TDirectory_Sizeof_6_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,G__TDirectory_Write_7_4,121,-1,-1,0,3,1,1,0,
"C - - 10 0 name i - 'Int_t' 0 0 opt "
"i - 'Int_t' 0 0 bufsiz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteDirHeader",1395,G__TDirectory_WriteDirHeader_8_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteKeys",935,G__TDirectory_WriteKeys_9_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Cd",167,G__TDirectory_Cd_0_5,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DecodeNameCycle",1461,G__TDirectory_DecodeNameCycle_1_5,121,-1,-1,0,3,1,1,0,
"C - - 10 - namecycle C - - 0 - name "
"s - 'Short_t' 1 - cycle",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EncodeNameCycle",1471,G__TDirectory_EncodeNameCycle_2_5,121,-1,-1,0,3,1,1,0,
"C - - 0 - buffer C - - 10 - name "
"s - 'Short_t' 0 - cycle",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TDirectory_DeclFileName_3_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDirectory_DeclFileLine_4_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDirectory_ImplFileName_5_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDirectory_ImplFileLine_6_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDirectory_Class_Version_7_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDirectory_Class_8_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDirectory_IsA_9_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDirectory_ShowMembers_0_6,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDirectory_Streamer_1_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TDirectory_Dictionary_2_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TDirectory",1159,G__TDirectory_wATDirectory_3_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTColor(void) {
   /* TColor */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TColor));
   G__memfunc_setup("TColor",595,G__TColor_TColor_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TColor),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TColor",595,G__TColor_TColor_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TColor),-1,0,5,1,1,0,
"i - 'Int_t' 0 - color f - 'Float_t' 0 - r "
"f - 'Float_t' 0 - g f - 'Float_t' 0 - b "
"C - - 10 \"\" name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TColor",595,G__TColor_TColor_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TColor),-1,0,1,1,1,0,"u 'TColor' - 11 - color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TColor_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRGB",507,G__TColor_GetRGB_5_0,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 1 - r f - 'Float_t' 1 - g "
"f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetHLS",519,G__TColor_GetHLS_6_0,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 1 - h f - 'Float_t' 1 - l "
"f - 'Float_t' 1 - s",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNumber",905,G__TColor_GetNumber_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRed",571,G__TColor_GetRed_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGreen",785,G__TColor_GetGreen_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBlue",680,G__TColor_GetBlue_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHue",578,G__TColor_GetHue_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLight",792,G__TColor_GetLight_2_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSaturation",1354,G__TColor_GetSaturation_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HLStoRGB",677,G__TColor_HLStoRGB_4_1,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - h f - 'Float_t' 0 - l "
"f - 'Float_t' 0 - s f - 'Float_t' 1 - r "
"f - 'Float_t' 1 - g f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HLStoRGB1",726,G__TColor_HLStoRGB1_5_1,102,-1,G__defined_typename("Float_t"),0,3,1,1,0,
"f - 'Float_t' 0 - rn1 f - 'Float_t' 0 - rn2 "
"f - 'Float_t' 0 - huei",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TColor_ls_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TColor_Print_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RGBtoHLS",677,G__TColor_RGBtoHLS_8_1,121,-1,-1,0,6,1,1,0,
"f - 'Float_t' 0 - r f - 'Float_t' 0 - g "
"f - 'Float_t' 0 - b f - 'Float_t' 1 - h "
"f - 'Float_t' 1 - l f - 'Float_t' 1 - s",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNumber",917,G__TColor_SetNumber_9_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRGB",519,G__TColor_SetRGB_0_2,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - r f - 'Float_t' 0 - g "
"f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TColor_DeclFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TColor_DeclFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TColor_ImplFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TColor_ImplFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TColor_Class_Version_5_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TColor_Class_6_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TColor_IsA_7_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TColor_ShowMembers_8_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TColor_Streamer_9_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TColor_Dictionary_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TColor",721,G__TColor_wATColor_1_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTStyle(void) {
   /* TStyle */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle));
   G__memfunc_setup("TStyle",613,G__TStyle_TStyle_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TStyle),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TStyle",613,G__TStyle_TStyle_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TStyle),-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TStyle",613,G__TStyle_TStyle_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TStyle),-1,0,1,1,1,0,"u 'TStyle' - 11 - style",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AxisChoice",992,G__TStyle_AxisChoice_4_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Option_t' 0 - axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TStyle_Browse_5_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BuildStyles",1140,G__TStyle_BuildStyles_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TStyle_Copy_7_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TStyle_cd_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNdivisions",1350,G__TStyle_GetNdivisions_9_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAxisColor",1204,G__TStyle_GetAxisColor_0_1,115,-1,G__defined_typename("Color_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelColor",1279,G__TStyle_GetLabelColor_1_1,115,-1,G__defined_typename("Color_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelFont",1175,G__TStyle_GetLabelFont_2_1,115,-1,G__defined_typename("Style_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelOffset",1383,G__TStyle_GetLabelOffset_3_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLabelSize",1179,G__TStyle_GetLabelSize_4_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleOffset",1417,G__TStyle_GetTitleOffset_5_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis","return axis title offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleSize",1213,G__TStyle_GetTitleSize_6_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis","return axis title size",(void*)NULL,0);
   G__memfunc_setup("GetTickLength",1293,G__TStyle_GetTickLength_7_1,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBarOffset",1180,G__TStyle_GetBarOffset_8_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBarWidth",1077,G__TStyle_GetBarWidth_9_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDrawBorder",1292,G__TStyle_GetDrawBorder_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorMarker",1420,G__TStyle_GetErrorMarker_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorMsize",1330,G__TStyle_GetErrorMsize_2_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetErrorX",898,G__TStyle_GetErrorX_3_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasColor",1403,G__TStyle_GetCanvasColor_4_2,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasBorderSize",1909,G__TStyle_GetCanvasBorderSize_5_2,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasBorderMode",1887,G__TStyle_GetCanvasBorderMode_6_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefH",1235,G__TStyle_GetCanvasDefH_7_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefW",1250,G__TStyle_GetCanvasDefW_8_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefX",1251,G__TStyle_GetCanvasDefX_9_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCanvasDefY",1252,G__TStyle_GetCanvasDefY_0_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetColorPalette",1518,G__TStyle_GetColorPalette_1_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumberOfColors",1712,G__TStyle_GetNumberOfColors_2_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadColor",1076,G__TStyle_GetPadColor_3_3,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBorderSize",1582,G__TStyle_GetPadBorderSize_4_3,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBorderMode",1560,G__TStyle_GetPadBorderMode_5_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadBottomMargin",1800,G__TStyle_GetPadBottomMargin_6_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTopMargin",1478,G__TStyle_GetPadTopMargin_7_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadLeftMargin",1566,G__TStyle_GetPadLeftMargin_8_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadRightMargin",1681,G__TStyle_GetPadRightMargin_9_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadGridX",1043,G__TStyle_GetPadGridX_0_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadGridY",1044,G__TStyle_GetPadGridY_1_4,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTickX",1048,G__TStyle_GetPadTickX_2_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPadTickY",1049,G__TStyle_GetPadTickY_3_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncColor",1195,G__TStyle_GetFuncColor_4_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncStyle",1213,G__TStyle_GetFuncStyle_5_4,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncWidth",1196,G__TStyle_GetFuncWidth_6_4,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameFillColor",1681,G__TStyle_GetFrameFillColor_7_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineColor",1682,G__TStyle_GetFrameLineColor_8_4,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameFillStyle",1699,G__TStyle_GetFrameFillStyle_9_4,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineStyle",1700,G__TStyle_GetFrameLineStyle_0_5,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineWidth",1683,G__TStyle_GetFrameLineWidth_1_5,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameBorderSize",1796,G__TStyle_GetFrameBorderSize_2_5,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameBorderMode",1774,G__TStyle_GetFrameBorderMode_3_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistFillColor",1598,G__TStyle_GetHistFillColor_4_5,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistLineColor",1599,G__TStyle_GetHistLineColor_5_5,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistFillStyle",1616,G__TStyle_GetHistFillStyle_6_5,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistLineStyle",1617,G__TStyle_GetHistLineStyle_7_5,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistLineWidth",1600,G__TStyle_GetHistLineWidth_8_5,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLegoInnerR",1269,G__TStyle_GetLegoInnerR_9_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptDate",977,G__TStyle_GetOptDate_0_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptFile",979,G__TStyle_GetOptFile_1_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptFit",886,G__TStyle_GetOptFit_2_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptStat",1007,G__TStyle_GetOptStat_3_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptTitle",1109,G__TStyle_GetOptTitle_4_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptLogx",1005,G__TStyle_GetOptLogx_5_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptLogy",1006,G__TStyle_GetOptLogy_6_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptLogz",1007,G__TStyle_GetOptLogz_7_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPaperSize",1203,G__TStyle_GetPaperSize_8_6,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - xsize f - 'Float_t' 1 - ysize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetShowEventStatus",1863,G__TStyle_GetShowEventStatus_9_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetScreenFactor",1503,G__TStyle_GetScreenFactor_0_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatColor",1211,G__TStyle_GetStatColor_1_7,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatTextColor",1632,G__TStyle_GetStatTextColor_2_7,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatBorderSize",1717,G__TStyle_GetStatBorderSize_3_7,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatFont",1107,G__TStyle_GetStatFont_4_7,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatStyle",1229,G__TStyle_GetStatStyle_5_7,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatX",788,G__TStyle_GetStatX_6_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatY",789,G__TStyle_GetStatY_7_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatW",787,G__TStyle_GetStatW_8_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatH",772,G__TStyle_GetStatH_9_7,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTimeOffset",1302,G__TStyle_GetTimeOffset_0_8,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"","return axis time offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleColor",1313,G__TStyle_GetTitleColor_1_8,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"","return histogram title fill area color",(void*)NULL,0);
   G__memfunc_setup("GetTitleTextColor",1734,G__TStyle_GetTitleTextColor_2_8,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"","return histogram title text color",(void*)NULL,0);
   G__memfunc_setup("GetTitleStyle",1331,G__TStyle_GetTitleStyle_3_8,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitleFont",1209,G__TStyle_GetTitleFont_4_8,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"","return histogram title font",(void*)NULL,0);
   G__memfunc_setup("GetTitleBorderSize",1819,G__TStyle_GetTitleBorderSize_5_8,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"","return border size of histogram title TPaveLabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleXOffset",1505,G__TStyle_GetTitleXOffset_6_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return X axis title offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleXSize",1301,G__TStyle_GetTitleXSize_7_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return X axis title size",(void*)NULL,0);
   G__memfunc_setup("GetTitleYOffset",1506,G__TStyle_GetTitleYOffset_8_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return Y axis title offset",(void*)NULL,0);
   G__memfunc_setup("GetTitleYSize",1302,G__TStyle_GetTitleYSize_9_8,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return Y axis title size",(void*)NULL,0);
   G__memfunc_setup("GetTitleX",890,G__TStyle_GetTitleX_0_9,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return left X position of histogram title TPavelabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleY",891,G__TStyle_GetTitleY_1_9,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return left bottom position of histogram title TPavelabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleW",889,G__TStyle_GetTitleW_2_9,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return width of histogram title TPaveLabel",(void*)NULL,0);
   G__memfunc_setup("GetTitleH",874,G__TStyle_GetTitleH_3_9,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"","return height of histogram title TPavelabel",(void*)NULL,0);
   G__memfunc_setup("GetHeaderPS",1036,G__TStyle_GetHeaderPS_4_9,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineStyleString",1840,G__TStyle_GetLineStyleString_5_9,67,-1,-1,0,1,1,1,9,"i - 'Int_t' 0 1 i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineScalePS",1331,G__TStyle_GetLineScalePS_6_9,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TStyle_Reset_7_9,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHeaderPS",1048,G__TStyle_SetHeaderPS_8_9,121,-1,-1,0,1,1,1,0,"C - - 10 - header",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLineScalePS",1343,G__TStyle_SetLineScalePS_9_9,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 3 scale",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLineStyleString",1852,G__TStyle_SetLineStyleString_0_10,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - i C - - 10 - text",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetNdivisions",1362,G__TStyle_SetNdivisions_1_10,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 510 n C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetAxisColor",1216,G__TStyle_SetAxisColor_2_10,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 1 color C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelColor",1291,G__TStyle_SetLabelColor_3_10,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 1 color C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelFont",1187,G__TStyle_SetLabelFont_4_10,121,-1,-1,0,2,1,1,0,
"s - 'Style_t' 0 62 font C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelOffset",1395,G__TStyle_SetLabelOffset_5_10,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.005 offset C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLabelSize",1191,G__TStyle_SetLabelSize_6_10,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.04 size C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLegoInnerR",1281,G__TStyle_SetLegoInnerR_7_10,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 rad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetScreenFactor",1515,G__TStyle_SetScreenFactor_8_10,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 factor",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTickLength",1305,G__TStyle_SetTickLength_9_10,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.03 length C - 'Option_t' 0 \"X\" axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleOffset",1429,G__TStyle_SetTitleOffset_0_11,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 1 offset C - 'Option_t' 0 \"X\" axis","set axis title offset",(void*)NULL,0);
   G__memfunc_setup("SetTitleSize",1225,G__TStyle_SetTitleSize_1_11,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 0.02 size C - 'Option_t' 0 \"X\" axis","set axis title size",(void*)NULL,0);
   G__memfunc_setup("SetOptDate",989,G__TStyle_SetOptDate_2_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 datefl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptFile",991,G__TStyle_SetOptFile_3_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 file",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptFit",898,G__TStyle_SetOptFit_4_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 fit",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptLogx",1017,G__TStyle_SetOptLogx_5_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 logx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptLogy",1018,G__TStyle_SetOptLogy_6_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 logy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptLogz",1019,G__TStyle_SetOptLogz_7_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 logz",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptStat",1019,G__TStyle_SetOptStat_8_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 stat",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOptTitle",1121,G__TStyle_SetOptTitle_9_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 tit",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBarOffset",1192,G__TStyle_SetBarOffset_0_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 baroff",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBarWidth",1089,G__TStyle_SetBarWidth_1_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 barwidth",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetErrorMarker",1432,G__TStyle_SetErrorMarker_2_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 21 marker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetErrorMsize",1342,G__TStyle_SetErrorMsize_3_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.05 msize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetErrorX",910,G__TStyle_SetErrorX_4_12,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.5 errorx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetDrawBorder",1304,G__TStyle_SetDrawBorder_5_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 drawborder",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasColor",1415,G__TStyle_SetCanvasColor_6_12,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasBorderSize",1921,G__TStyle_SetCanvasBorderSize_7_12,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasBorderMode",1899,G__TStyle_SetCanvasBorderMode_8_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefH",1247,G__TStyle_SetCanvasDefH_9_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 500 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefW",1262,G__TStyle_SetCanvasDefW_0_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 700 w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefX",1263,G__TStyle_SetCanvasDefX_1_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 10 topx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetCanvasDefY",1264,G__TStyle_SetCanvasDefY_2_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 10 topy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadColor",1088,G__TStyle_SetPadColor_3_13,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadBorderSize",1594,G__TStyle_SetPadBorderSize_4_13,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadBorderMode",1572,G__TStyle_SetPadBorderMode_5_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadBottomMargin",1812,G__TStyle_SetPadBottomMargin_6_13,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadTopMargin",1490,G__TStyle_SetPadTopMargin_7_13,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadLeftMargin",1578,G__TStyle_SetPadLeftMargin_8_13,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadRightMargin",1693,G__TStyle_SetPadRightMargin_9_13,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 margin",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadGridX",1055,G__TStyle_SetPadGridX_0_14,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - gridx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadGridY",1056,G__TStyle_SetPadGridY_1_14,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - gridy",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadTickX",1060,G__TStyle_SetPadTickX_2_14,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - tickx",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPadTickY",1061,G__TStyle_SetPadTickY_3_14,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ticky",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFuncStyle",1225,G__TStyle_SetFuncStyle_4_14,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 1 style",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFuncColor",1207,G__TStyle_SetFuncColor_5_14,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFuncWidth",1208,G__TStyle_SetFuncWidth_6_14,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 4 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameFillColor",1693,G__TStyle_SetFrameFillColor_7_14,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineColor",1694,G__TStyle_SetFrameLineColor_8_14,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameFillStyle",1711,G__TStyle_SetFrameFillStyle_9_14,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineStyle",1712,G__TStyle_SetFrameLineStyle_0_15,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineWidth",1695,G__TStyle_SetFrameLineWidth_1_15,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameBorderSize",1808,G__TStyle_SetFrameBorderSize_2_15,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameBorderMode",1786,G__TStyle_SetFrameBorderMode_3_15,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistFillColor",1610,G__TStyle_SetHistFillColor_4_15,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistLineColor",1611,G__TStyle_SetHistLineColor_5_15,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistFillStyle",1628,G__TStyle_SetHistFillStyle_6_15,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistLineStyle",1629,G__TStyle_SetHistLineStyle_7_15,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetHistLineWidth",1612,G__TStyle_SetHistLineWidth_8_15,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPaperSize",1215,G__TStyle_SetPaperSize_9_15,121,-1,-1,0,1,1,1,0,"i 'TStyle::EPaperSize' - 0 - size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPaperSize",1215,G__TStyle_SetPaperSize_0_16,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 20 xsize f - 'Float_t' 0 26 ysize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatColor",1223,G__TStyle_SetStatColor_1_16,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatTextColor",1644,G__TStyle_SetStatTextColor_2_16,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatStyle",1241,G__TStyle_SetStatStyle_3_16,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 1001 style",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatBorderSize",1729,G__TStyle_SetStatBorderSize_4_16,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 2 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatFont",1119,G__TStyle_SetStatFont_5_16,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 62 font",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatX",800,G__TStyle_SetStatX_6_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatY",801,G__TStyle_SetStatY_7_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatW",799,G__TStyle_SetStatW_8_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.19 w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetStatH",784,G__TStyle_SetStatH_9_16,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.1 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTimeOffset",1314,G__TStyle_SetTimeOffset_0_17,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 - toffset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleColor",1325,G__TStyle_SetTitleColor_1_17,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 19 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleTextColor",1746,G__TStyle_SetTitleTextColor_2_17,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleStyle",1343,G__TStyle_SetTitleStyle_3_17,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 1001 style",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleFont",1221,G__TStyle_SetTitleFont_4_17,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 62 font",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleBorderSize",1831,G__TStyle_SetTitleBorderSize_5_17,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 2 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleXOffset",1517,G__TStyle_SetTitleXOffset_6_17,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleXSize",1313,G__TStyle_SetTitleXSize_7_17,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.02 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleYOffset",1518,G__TStyle_SetTitleYOffset_8_17,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleYSize",1314,G__TStyle_SetTitleYSize_9_17,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.02 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleX",902,G__TStyle_SetTitleX_0_18,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 x",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleY",903,G__TStyle_SetTitleY_1_18,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleW",901,G__TStyle_SetTitleW_2_18,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 w",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetTitleH",886,G__TStyle_SetTitleH_3_18,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ToggleEventStatus",1768,G__TStyle_ToggleEventStatus_4_18,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPalette",1019,G__TStyle_SetPalette_5_18,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 0 ncolors I - 'Int_t' 0 0 colors",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TStyle_DeclFileName_6_18,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TStyle_DeclFileLine_7_18,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TStyle_ImplFileName_8_18,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TStyle_ImplFileLine_9_18,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TStyle_Class_Version_0_19,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TStyle_Class_1_19,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TStyle_IsA_2_19,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TStyle_ShowMembers_3_19,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TStyle_Streamer_4_19,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TStyle_Dictionary_5_19,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TStyle",739,G__TStyle_wATStyle_6_19,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVirtualPad(void) {
   /* TVirtualPad */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad));
   G__memfunc_setup("AbsCoordinates",1425,G__TVirtualPad_AbsCoordinates_3_0,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 - set",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("AbsPixeltoX",1107,G__TVirtualPad_AbsPixeltoX_4_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - px",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("AbsPixeltoY",1108,G__TVirtualPad_AbsPixeltoY_5_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("AddExec",654,G__TVirtualPad_AddExec_6_0,121,-1,-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - command",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("cd",199,G__TVirtualPad_cd_7_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 subpadnumber",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Clear",487,G__TVirtualPad_Clear_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Close",502,G__TVirtualPad_Close_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CopyPixmap",1034,G__TVirtualPad_CopyPixmap_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CopyPixmaps",1149,G__TVirtualPad_CopyPixmaps_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeleteExec",984,G__TVirtualPad_DeleteExec_2_1,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Divide",597,G__TVirtualPad_Divide_3_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 1 nx i - 'Int_t' 0 1 ny "
"f - 'Float_t' 0 0.01 xmargin f - 'Float_t' 0 0.01 ymargin "
"i - 'Int_t' 0 0 color",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Draw",398,G__TVirtualPad_Draw_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawClassObject",1499,G__TVirtualPad_DrawClassObject_5_1,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - obj C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawFrame",889,G__TVirtualPad_DrawFrame_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TH1F),-1,0,5,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax "
"C - - 10 \"\" title",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawLine",790,G__TVirtualPad_DrawLine_7_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawLineNDC",1003,G__TVirtualPad_DrawLineNDC_8_1,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - u1 f - 'Float_t' 0 - v1 "
"f - 'Float_t' 0 - u2 f - 'Float_t' 0 - v2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawText",819,G__TVirtualPad_DrawText_9_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - - 10 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawTextNDC",1032,G__TVirtualPad_DrawTextNDC_0_2,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - - 10 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetBorderMode",1283,G__TVirtualPad_GetBorderMode_1_2,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetBorderSize",1305,G__TVirtualPad_GetBorderSize_2_2,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetCanvasID",1033,G__TVirtualPad_GetCanvasID_3_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetCanvas",892,G__TVirtualPad_GetCanvas_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TCanvas),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetVirtCanvas",1313,G__TVirtualPad_GetVirtCanvas_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetEvent",802,G__TVirtualPad_GetEvent_6_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetEventX",890,G__TVirtualPad_GetEventX_7_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetEventY",891,G__TVirtualPad_GetEventY_8_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetFrame",779,G__TVirtualPad_GetFrame_9_2,85,G__get_linked_tagnum(&G__G__Base1LN_TFrame),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetHighLightColor",1687,G__TVirtualPad_GetHighLightColor_0_3,115,-1,G__defined_typename("Color_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetRange",781,G__TVirtualPad_GetRange_1_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - x1 f - 'Float_t' 1 - y1 "
"f - 'Float_t' 1 - x2 f - 'Float_t' 1 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetRangeAxis",1186,G__TVirtualPad_GetRangeAxis_2_3,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 1 - xmin f - 'Axis_t' 1 - ymin "
"f - 'Axis_t' 1 - xmax f - 'Axis_t' 1 - ymax",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadPar",856,G__TVirtualPad_GetPadPar_3_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 1 - xlow f - 'Float_t' 1 - ylow "
"f - 'Float_t' 1 - xup f - 'Float_t' 1 - yup",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetXlowNDC",927,G__TVirtualPad_GetXlowNDC_4_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetYlowNDC",928,G__TVirtualPad_GetYlowNDC_5_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetWNDC",588,G__TVirtualPad_GetWNDC_6_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetHNDC",573,G__TVirtualPad_GetHNDC_7_3,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetWw",494,G__TVirtualPad_GetWw_8_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetWh",479,G__TVirtualPad_GetWh_9_3,104,-1,G__defined_typename("UInt_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsXlowNDC",1205,G__TVirtualPad_GetAbsXlowNDC_0_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsYlowNDC",1206,G__TVirtualPad_GetAbsYlowNDC_1_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsWNDC",866,G__TVirtualPad_GetAbsWNDC_2_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetAbsHNDC",851,G__TVirtualPad_GetAbsHNDC_3_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPhi",577,G__TVirtualPad_GetPhi_4_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTheta",790,G__TVirtualPad_GetTheta_5_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUxmin",817,G__TVirtualPad_GetUxmin_6_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUymin",818,G__TVirtualPad_GetUymin_7_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUxmax",819,G__TVirtualPad_GetUxmax_8_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetUymax",820,G__TVirtualPad_GetUymax_9_4,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetGridx",798,G__TVirtualPad_GetGridx_0_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetGridy",799,G__TVirtualPad_GetGridy_1_5,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTickx",803,G__TVirtualPad_GetTickx_2_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTicky",804,G__TVirtualPad_GetTicky_3_5,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetX1",425,G__TVirtualPad_GetX1_4_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetX2",426,G__TVirtualPad_GetX2_5_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetY1",426,G__TVirtualPad_GetY1_6_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetY2",427,G__TVirtualPad_GetY2_7_5,102,-1,G__defined_typename("Float_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetListOfPrimitives",1949,G__TVirtualPad_GetListOfPrimitives_8_5,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetListOfExecs",1385,G__TVirtualPad_GetListOfExecs_9_5,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPrimitive",1241,G__TVirtualPad_GetPrimitive_0_6,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetSelected",1097,G__TVirtualPad_GetSelected_1_6,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadPointer",1302,G__TVirtualPad_GetPadPointer_2_6,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadSave",964,G__TVirtualPad_GetPadSave_3_6,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetSelectedPad",1374,G__TVirtualPad_GetSelectedPad_4_6,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetView",699,G__TVirtualPad_GetView_5_6,85,G__get_linked_tagnum(&G__G__Base1LN_TView),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetLogx",698,G__TVirtualPad_GetLogx_6_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetLogy",699,G__TVirtualPad_GetLogy_7_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetLogz",700,G__TVirtualPad_GetLogz_8_6,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetMother",911,G__TVirtualPad_GetMother_9_6,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetName",673,G__TVirtualPad_GetName_0_7,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetTitle",802,G__TVirtualPad_GetTitle_1_7,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPadPaint",1073,G__TVirtualPad_GetPadPaint_2_7,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetPixmapID",1052,G__TVirtualPad_GetPixmapID_3_7,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetView3D",818,G__TVirtualPad_GetView3D_4_7,85,G__get_linked_tagnum(&G__G__Base1LN_TPadView3D),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("HighLight",888,G__TVirtualPad_HighLight_5_7,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 kRed col b - 'Bool_t' 0 kTRUE set",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsBatch",670,G__TVirtualPad_IsBatch_6_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsBeingResized",1399,G__TVirtualPad_IsBeingResized_7_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsEditable",982,G__TVirtualPad_IsEditable_8_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsModified",989,G__TVirtualPad_IsModified_9_7,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("IsRetained",1000,G__TVirtualPad_IsRetained_0_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ls",223,G__TVirtualPad_ls_1_8,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Modified",801,G__TVirtualPad_Modified_2_8,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 1 flag",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("OpaqueMoving",1243,G__TVirtualPad_OpaqueMoving_3_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("OpaqueResizing",1462,G__TVirtualPad_OpaqueResizing_4_8,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PadtoX",592,G__TVirtualPad_PadtoX_5_8,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PadtoY",593,G__TVirtualPad_PadtoY_6_8,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Paint",508,G__TVirtualPad_Paint_7_8,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintBorderPS",1277,G__TVirtualPad_PaintBorderPS_8_8,121,-1,-1,0,8,1,1,0,
"f - 'Float_t' 0 - xl f - 'Float_t' 0 - yl "
"f - 'Float_t' 0 - xt f - 'Float_t' 0 - yt "
"i - 'Int_t' 0 - bmode i - 'Int_t' 0 - bsize "
"i - 'Int_t' 0 - dark i - 'Int_t' 0 - light",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintBox",805,G__TVirtualPad_PaintBox_9_8,121,-1,-1,0,5,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2 "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintFillArea",1276,G__TVirtualPad_PaintFillArea_0_9,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPadFrame",1276,G__TVirtualPad_PaintPadFrame_1_9,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xmin f - 'Float_t' 0 - ymin "
"f - 'Float_t' 0 - xmax f - 'Float_t' 0 - ymax",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintLine",900,G__TVirtualPad_PaintLine_2_9,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintLineNDC",1113,G__TVirtualPad_PaintLineNDC_3_9,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - u1 f - 'Coord_t' 0 - v1 "
"f - 'Coord_t' 0 - u2 f - 'Coord_t' 0 - v2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintLine3D",1019,G__TVirtualPad_PaintLine3D_4_9,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - p1 F - 'Float_t' 0 - p2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyLine",1320,G__TVirtualPad_PaintPolyLine_5_9,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyLine3D",1439,G__TVirtualPad_PaintPolyLine3D_6_9,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyLineNDC",1533,G__TVirtualPad_PaintPolyLineNDC_7_9,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintPolyMarker",1538,G__TVirtualPad_PaintPolyMarker_8_9,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintModified",1309,G__TVirtualPad_PaintModified_9_9,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintText",929,G__TVirtualPad_PaintText_0_10,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - - 10 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PaintTextNDC",1142,G__TVirtualPad_PaintTextNDC_1_10,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - u f - 'Float_t' 0 - v "
"C - - 10 - text",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PixeltoX",829,G__TVirtualPad_PixeltoX_2_10,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - px",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PixeltoY",830,G__TVirtualPad_PixeltoY_3_10,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Pop",303,G__TVirtualPad_Pop_4_10,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Print",525,G__TVirtualPad_Print_5_10,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" filename",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Print",525,G__TVirtualPad_Print_6_10,121,-1,-1,0,2,1,1,0,
"C - - 10 - filename C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Range",493,G__TVirtualPad_Range_7_10,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x1 f - 'Float_t' 0 - y1 "
"f - 'Float_t' 0 - x2 f - 'Float_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("RangeAxis",898,G__TVirtualPad_RangeAxis_8_10,121,-1,-1,0,4,1,1,0,
"f - 'Axis_t' 0 - xmin f - 'Axis_t' 0 - ymin "
"f - 'Axis_t' 0 - xmax f - 'Axis_t' 0 - ymax",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("RecursiveRemove",1574,G__TVirtualPad_RecursiveRemove_9_10,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("RedrawAxis",1018,G__TVirtualPad_RedrawAxis_0_11,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResetView3D",1045,G__TVirtualPad_ResetView3D_1_11,121,-1,-1,0,1,1,1,0,"U 'TPadView3D' - 0 0 view",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResizePad",903,G__TVirtualPad_ResizePad_2_11,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SaveAs",579,G__TVirtualPad_SaveAs_3_11,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" filename",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetBatch",782,G__TVirtualPad_SetBatch_4_11,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE batch",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetBorderMode",1295,G__TVirtualPad_SetBorderMode_5_11,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordermode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetBorderSize",1317,G__TVirtualPad_SetBorderSize_6_11,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 - bordersize",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetCanvasSize",1315,G__TVirtualPad_SetCanvasSize_7_11,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - ww h - 'UInt_t' 0 - wh",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetCursor",938,G__TVirtualPad_SetCursor_8_11,121,-1,-1,0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TVirtualPad_SetDoubleBuffer_9_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetEditable",1094,G__TVirtualPad_SetEditable_0_12,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE mode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetGrid",690,G__TVirtualPad_SetGrid_1_12,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetGridx",810,G__TVirtualPad_SetGridx_2_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetGridy",811,G__TVirtualPad_SetGridy_3_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetLogx",710,G__TVirtualPad_SetLogx_4_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetLogy",711,G__TVirtualPad_SetLogy_5_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetLogz",712,G__TVirtualPad_SetLogz_6_12,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPad",577,G__TVirtualPad_SetPad_7_12,121,-1,-1,0,9,1,1,0,
"C - - 10 - name C - - 10 - title "
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup "
"s - 'Color_t' 0 35 color s - 'Short_t' 0 5 bordersize "
"s - 'Short_t' 0 -1 bordermode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPad",577,G__TVirtualPad_SetPad_8_12,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - xlow f - 'Float_t' 0 - ylow "
"f - 'Float_t' 0 - xup f - 'Float_t' 0 - yup",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetAttFillPS",1151,G__TVirtualPad_SetAttFillPS_9_12,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 - color s - 'Style_t' 0 - style",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetAttLinePS",1152,G__TVirtualPad_SetAttLinePS_0_13,121,-1,-1,0,3,1,1,0,
"s - 'Color_t' 0 - color s - 'Style_t' 0 - style "
"s - 'Width_t' 0 - lwidth",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetAttMarkerPS",1370,G__TVirtualPad_SetAttMarkerPS_1_13,121,-1,-1,0,3,1,1,0,
"s - 'Color_t' 0 - color s - 'Style_t' 0 - style "
"f - 'Size_t' 0 - msize",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetAttTextPS",1181,G__TVirtualPad_SetAttTextPS_2_13,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - align f - 'Float_t' 0 - angle "
"s - 'Color_t' 0 - color s - 'Style_t' 0 - font "
"f - 'Float_t' 0 - tsize",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetName",685,G__TVirtualPad_SetName_3_13,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetSelected",1109,G__TVirtualPad_SetSelected_4_13,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTicks",810,G__TVirtualPad_SetTicks_5_13,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 1 valuex i - 'Int_t' 0 1 valuey",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTickx",815,G__TVirtualPad_SetTickx_6_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTicky",816,G__TVirtualPad_SetTicky_7_13,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 value",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTitle",814,G__TVirtualPad_SetTitle_8_13,121,-1,-1,0,1,1,1,0,"C - - 10 \"\" title",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetTheta",802,G__TVirtualPad_SetTheta_9_13,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 30 theta",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetPhi",589,G__TVirtualPad_SetPhi_0_14,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 30 phi",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetToolTipText",1436,G__TVirtualPad_SetToolTipText_1_14,121,-1,-1,0,2,1,1,0,
"C - - 10 - text l - 'Long_t' 0 1000 delayms",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetView",711,G__TVirtualPad_SetView_2_14,121,-1,-1,0,1,1,1,0,"U 'TView' - 0 - view",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("WaitPrimitive",1358,G__TVirtualPad_WaitPrimitive_3_14,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,2,1,1,0,
"C - - 10 \"\" pname C - - 10 \"\" emode",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Update",611,G__TVirtualPad_Update_4_14,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("UtoAbsPixel",1104,G__TVirtualPad_UtoAbsPixel_5_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("VtoAbsPixel",1105,G__TVirtualPad_VtoAbsPixel_6_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("UtoPixel",826,G__TVirtualPad_UtoPixel_7_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - u",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("VtoPixel",827,G__TVirtualPad_VtoPixel_8_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Float_t' 0 - v",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("XtoAbsPixel",1107,G__TVirtualPad_XtoAbsPixel_9_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("YtoAbsPixel",1108,G__TVirtualPad_YtoAbsPixel_0_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("XtoPad",592,G__TVirtualPad_XtoPad_1_15,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("YtoPad",593,G__TVirtualPad_YtoPad_2_15,102,-1,G__defined_typename("Float_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("XtoPixel",829,G__TVirtualPad_XtoPixel_3_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("YtoPixel",830,G__TVirtualPad_YtoPixel_4_15,105,-1,G__defined_typename("Int_t"),0,1,1,1,8,"f - 'Axis_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CreateToolTip",1311,G__TVirtualPad_CreateToolTip_5_15,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,3,1,1,0,
"U 'TBox' - 10 - b C - - 10 - text "
"l - 'Long_t' 0 - delayms",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeleteToolTip",1310,G__TVirtualPad_DeleteToolTip_6_15,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - tip",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ResetToolTip",1230,G__TVirtualPad_ResetToolTip_7_15,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - tip",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("CloseToolTip",1217,G__TVirtualPad_CloseToolTip_8_15,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - tip",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("x3d",271,G__TVirtualPad_x3d_9_15,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeclFileName",1145,G__TVirtualPad_DeclFileName_0_16,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVirtualPad_DeclFileLine_1_16,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVirtualPad_ImplFileName_2_16,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVirtualPad_ImplFileLine_3_16,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVirtualPad_Class_Version_4_16,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVirtualPad_Class_5_16,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVirtualPad_IsA_6_16,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVirtualPad_ShowMembers_7_16,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVirtualPad_Streamer_8_16,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TVirtualPad_Dictionary_9_16,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVirtualPad",1230,G__TVirtualPad_wATVirtualPad_0_17,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTApplication(void) {
   /* TApplication */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication));
   G__memfunc_setup("TApplication",1224,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TApplication),-1,0,0,1,2,0,"","used by Dictionary()",(void*)NULL,0);
   G__memfunc_setup("Help",393,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - - 10 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitializeColors",1668,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadGraphicsLibs",1595,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetReturnFromRun",1653,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"b - 'Bool_t' 0 - ret",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSignalHandler",1608,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TSignalHandler' - 0 - sh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TApplication",1224,G__TApplication_TApplication_6_0,105,G__get_linked_tagnum(&G__G__Base1LN_TApplication),-1,0,5,1,1,0,
"C - - 10 - appClassName I - - 0 - argc "
"C - - 2 - argv Y - - 0 0 options "
"i - - 0 0 numOptions",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptions",1036,G__TApplication_GetOptions_8_0,121,-1,-1,0,2,1,1,0,
"I - - 0 - argc C - - 2 - argv",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSignalHandler",1596,G__TApplication_GetSignalHandler_9_0,85,G__get_linked_tagnum(&G__G__Base1LN_TSignalHandler),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleIdleTimer",1483,G__TApplication_HandleIdleTimer_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTermInput",1524,G__TApplication_HandleTermInput_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Init",404,G__TApplication_Init_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessLine",1127,G__TApplication_ProcessLine_3_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - line b - 'Bool_t' 0 kFALSE sync",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessFile",1119,G__TApplication_ProcessFile_4_1,121,-1,-1,0,1,1,1,0,"C - - 10 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Run",309,G__TApplication_Run_5_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE retrn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIdleTimer",1195,G__TApplication_SetIdleTimer_6_1,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - idleTimeInSec C - - 10 - command",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveIdleTimer",1517,G__TApplication_RemoveIdleTimer_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetIdleCommand",1373,G__TApplication_GetIdleCommand_8_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("StartIdleing",1226,G__TApplication_StartIdleing_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StopIdleing",1122,G__TApplication_StopIdleing_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Terminate",937,G__TApplication_Terminate_1_2,121,-1,-1,0,1,1,1,0,"i - - 0 0 status",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ApplicationName",1525,G__TApplication_ApplicationName_2_2,67,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TApplication_Show_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hide",378,G__TApplication_Hide_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetApplicationImp",1722,G__TApplication_GetApplicationImp_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Iconify",721,G__TApplication_Iconify_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsCmdThread",1064,G__TApplication_IsCmdThread_7_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Open",402,G__TApplication_Open_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Raise",500,G__TApplication_Raise_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Lower",521,G__TApplication_Lower_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Argc",381,G__TApplication_Argc_1_3,105,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Argv",400,G__TApplication_Argv_2_3,67,-1,-1,2,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Argv",400,G__TApplication_Argv_3_3,67,-1,-1,0,1,1,1,8,"i - - 0 - index",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NoLogOpt",786,G__TApplication_NoLogOpt_4_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("QuitOpt",726,G__TApplication_QuitOpt_5_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InputFiles",1027,G__TApplication_InputFiles_6_3,85,G__get_linked_tagnum(&G__G__Base1LN_TObjArray),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ClearInputFiles",1514,G__TApplication_ClearInputFiles_7_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReturnFromRun",1353,G__TApplication_ReturnFromRun_8_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateApplication",1736,G__TApplication_CreateApplication_9_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TApplication_DeclFileName_0_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TApplication_DeclFileLine_1_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TApplication_ImplFileName_2_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TApplication_ImplFileLine_3_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TApplication_Class_Version_4_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TApplication_Class_5_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TApplication_IsA_6_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TApplication_ShowMembers_7_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TApplication_Streamer_8_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TApplication_Dictionary_9_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TApplication",1224,G__TApplication_TApplication_0_5,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TApplication),-1,0,1,1,1,0,"u 'TApplication' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TApplication",1350,G__TApplication_wATApplication_1_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttFill(void) {
   /* TAttFill */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFill));
   G__memfunc_setup("TAttFill",772,G__TAttFill_TAttFill_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttFill),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttFill",772,G__TAttFill_TAttFill_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttFill),-1,0,2,1,1,0,
"s - 'Color_t' 0 - fcolor s - 'Style_t' 0 - fstyle",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttFill_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttFill' - 1 - attfill",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFillColor",1190,G__TAttFill_GetFillColor_4_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFillStyle",1208,G__TAttFill_GetFillStyle_5_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsTransparent",1358,G__TAttFill_IsTransparent_6_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Modify",616,G__TAttFill_Modify_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAttFill",1203,G__TAttFill_ResetAttFill_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveFillAttributes",1853,G__TAttFill_SaveFillAttributes_9_0,121,-1,-1,0,4,1,1,0,
"u 'ofstream' - 1 - out C - - 10 - name "
"i - 'Int_t' 0 1 coldef i - 'Int_t' 0 1001 stydef",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillAttributes",1754,G__TAttFill_SetFillAttributes_0_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetFillColor",1202,G__TAttFill_SetFillColor_1_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - fcolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TAttFill_SetFillStyle_2_1,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - fstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttFill_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttFill_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttFill_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttFill_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttFill_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttFill_Class_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttFill_IsA_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttFill_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttFill_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAttFill_Dictionary_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAttFill",772,G__TAttFill_TAttFill_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttFill),-1,0,1,1,1,0,"u 'TAttFill' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttFill",898,G__TAttFill_wATAttFill_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttLine(void) {
   /* TAttLine */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttLine));
   G__memfunc_setup("TAttLine",773,G__TAttLine_TAttLine_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttLine),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttLine",773,G__TAttLine_TAttLine_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttLine),-1,0,3,1,1,0,
"s - 'Color_t' 0 - lcolor s - 'Style_t' 0 - lstyle "
"s - 'Width_t' 0 - lwidth",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttLine_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttLine' - 1 - attline",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DistancetoLine",1430,G__TAttLine_DistancetoLine_4_0,105,-1,G__defined_typename("Int_t"),0,6,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py "
"f - 'Float_t' 0 - xp1 f - 'Float_t' 0 - yp1 "
"f - 'Float_t' 0 - xp2 f - 'Float_t' 0 - yp2",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineColor",1191,G__TAttLine_GetLineColor_5_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineStyle",1209,G__TAttLine_GetLineStyle_6_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLineWidth",1192,G__TAttLine_GetLineWidth_7_0,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Modify",616,G__TAttLine_Modify_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAttLine",1204,G__TAttLine_ResetAttLine_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveLineAttributes",1854,G__TAttLine_SaveLineAttributes_0_1,121,-1,-1,0,5,1,1,0,
"u 'ofstream' - 1 - out C - - 10 - name "
"i - 'Int_t' 0 1 coldef i - 'Int_t' 0 1 stydef "
"i - 'Int_t' 0 1 widdef",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineAttributes",1755,G__TAttLine_SetLineAttributes_1_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetLineColor",1203,G__TAttLine_SetLineColor_2_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - lcolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineStyle",1221,G__TAttLine_SetLineStyle_3_1,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - lstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineWidth",1204,G__TAttLine_SetLineWidth_4_1,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - lwidth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttLine_DeclFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttLine_DeclFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttLine_ImplFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttLine_ImplFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttLine_Class_Version_9_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttLine_Class_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttLine_IsA_1_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttLine_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttLine_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAttLine_Dictionary_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAttLine",773,G__TAttLine_TAttLine_5_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttLine),-1,0,1,1,1,0,"u 'TAttLine' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttLine",899,G__TAttLine_wATAttLine_6_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttMarker(void) {
   /* TAttMarker */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttMarker));
   G__memfunc_setup("TAttMarker",991,G__TAttMarker_TAttMarker_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttMarker",991,G__TAttMarker_TAttMarker_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),-1,0,3,1,1,0,
"s - 'Color_t' 0 - color s - 'Style_t' 0 - style "
"f - 'Size_t' 0 - msize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttMarker_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttMarker' - 1 - attmarker",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMarkerColor",1409,G__TAttMarker_GetMarkerColor_4_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMarkerStyle",1427,G__TAttMarker_GetMarkerStyle_5_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetMarkerSize",1309,G__TAttMarker_GetMarkerSize_6_0,102,-1,G__defined_typename("Size_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Modify",616,G__TAttMarker_Modify_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAttMarker",1422,G__TAttMarker_ResetAttMarker_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" toption",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveMarkerAttributes",2072,G__TAttMarker_SaveMarkerAttributes_9_0,121,-1,-1,0,5,1,1,0,
"u 'ofstream' - 1 - out C - - 10 - name "
"i - 'Int_t' 0 1 coldef i - 'Int_t' 0 1 stydef "
"i - 'Int_t' 0 1 sizdef",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerAttributes",1973,G__TAttMarker_SetMarkerAttributes_0_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetMarkerColor",1421,G__TAttMarker_SetMarkerColor_1_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 tcolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerStyle",1439,G__TAttMarker_SetMarkerStyle_2_1,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 1 mstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerSize",1321,G__TAttMarker_SetMarkerSize_3_1,121,-1,-1,0,1,1,1,0,"f - 'Size_t' 0 1 msize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttMarker_DeclFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttMarker_DeclFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttMarker_ImplFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttMarker_ImplFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttMarker_Class_Version_8_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttMarker_Class_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttMarker_IsA_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttMarker_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttMarker_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAttMarker_Dictionary_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAttMarker",991,G__TAttMarker_TAttMarker_4_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),-1,0,1,1,1,0,"u 'TAttMarker' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttMarker",1117,G__TAttMarker_wATAttMarker_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttPad(void) {
   /* TAttPad */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttPad));
   G__memfunc_setup("TAttPad",658,G__TAttPad_TAttPad_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttPad_Copy_2_0,121,-1,-1,0,1,1,1,0,"u 'TAttPad' - 1 - attpad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBottomMargin",1523,G__TAttPad_GetBottomMargin_3_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLeftMargin",1289,G__TAttPad_GetLeftMargin_4_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRightMargin",1404,G__TAttPad_GetRightMargin_5_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTopMargin",1201,G__TAttPad_GetTopMargin_6_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAfile",769,G__TAttPad_GetAfile_7_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXfile",792,G__TAttPad_GetXfile_8_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYfile",793,G__TAttPad_GetYfile_9_0,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetAstat",797,G__TAttPad_GetAstat_0_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXstat",820,G__TAttPad_GetXstat_1_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetYstat",821,G__TAttPad_GetYstat_2_1,102,-1,G__defined_typename("Coord_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameFillColor",1681,G__TAttPad_GetFrameFillColor_3_1,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineColor",1682,G__TAttPad_GetFrameLineColor_4_1,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameFillStyle",1699,G__TAttPad_GetFrameFillStyle_5_1,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineStyle",1700,G__TAttPad_GetFrameLineStyle_6_1,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameLineWidth",1683,G__TAttPad_GetFrameLineWidth_7_1,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameBorderSize",1796,G__TAttPad_GetFrameBorderSize_8_1,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFrameBorderMode",1774,G__TAttPad_GetFrameBorderMode_9_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TAttPad_Print_0_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAttPad",1089,G__TAttPad_ResetAttPad_1_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBottomMargin",1535,G__TAttPad_SetBottomMargin_2_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - bottommargin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLeftMargin",1301,G__TAttPad_SetLeftMargin_3_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - leftmargin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRightMargin",1416,G__TAttPad_SetRightMargin_4_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - rightmargin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTopMargin",1213,G__TAttPad_SetTopMargin_5_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - topmargin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAfile",781,G__TAttPad_SetAfile_6_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - afile",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetXfile",804,G__TAttPad_SetXfile_7_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - xfile",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetYfile",805,G__TAttPad_SetYfile_8_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - yfile",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAstat",809,G__TAttPad_SetAstat_9_2,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - astat",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetXstat",832,G__TAttPad_SetXstat_0_3,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - xstat",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetYstat",833,G__TAttPad_SetYstat_1_3,121,-1,-1,0,1,1,1,0,"f - 'Coord_t' 0 - ystat",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFrameFillColor",1693,G__TAttPad_SetFrameFillColor_2_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineColor",1694,G__TAttPad_SetFrameLineColor_3_3,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameFillStyle",1711,G__TAttPad_SetFrameFillStyle_4_3,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineStyle",1712,G__TAttPad_SetFrameLineStyle_5_3,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 0 styl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameLineWidth",1695,G__TAttPad_SetFrameLineWidth_6_3,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 width",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameBorderSize",1808,G__TAttPad_SetFrameBorderSize_7_3,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 1 size",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFrameBorderMode",1786,G__TAttPad_SetFrameBorderMode_8_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 mode",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TAttPad_DeclFileName_9_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttPad_DeclFileLine_0_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttPad_ImplFileName_1_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttPad_ImplFileLine_2_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttPad_Class_Version_3_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttPad_Class_4_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttPad_IsA_5_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttPad_ShowMembers_6_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttPad_Streamer_7_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAttPad_Dictionary_8_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAttPad",658,G__TAttPad_TAttPad_9_4,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttPad),-1,0,1,1,1,0,"u 'TAttPad' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttPad",784,G__TAttPad_wATAttPad_0_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttAxis(void) {
   /* TAttAxis */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttAxis));
   G__memfunc_setup("TAttAxis",786,G__TAttAxis_TAttAxis_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttAxis_Copy_2_0,121,-1,-1,0,1,1,1,0,"u 'TAttAxis' - 1 - attaxis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNdivisions",1350,G__TAttAxis_GetNdivisions_3_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAxisColor",1204,G__TAttAxis_GetAxisColor_4_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLabelColor",1279,G__TAttAxis_GetLabelColor_5_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLabelFont",1175,G__TAttAxis_GetLabelFont_6_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLabelOffset",1383,G__TAttAxis_GetLabelOffset_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLabelSize",1179,G__TAttAxis_GetLabelSize_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitleOffset",1417,G__TAttAxis_GetTitleOffset_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTitleSize",1213,G__TAttAxis_GetTitleSize_0_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTickLength",1293,G__TAttAxis_GetTickLength_1_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAttAxis",1217,G__TAttAxis_ResetAttAxis_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveAttributes",1462,G__TAttAxis_SaveAttributes_3_1,121,-1,-1,0,3,1,1,0,
"u 'ofstream' - 1 - out C - - 10 - name "
"C - - 10 - subname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetNdivisions",1362,G__TAttAxis_SetNdivisions_4_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 510 n","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetAxisColor",1216,G__TAttAxis_SetAxisColor_5_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetLabelColor",1291,G__TAttAxis_SetLabelColor_6_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 color","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetLabelFont",1187,G__TAttAxis_SetLabelFont_7_1,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 62 font","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetLabelOffset",1395,G__TAttAxis_SetLabelOffset_8_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.005 offset","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetLabelSize",1191,G__TAttAxis_SetLabelSize_9_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.04 size","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTickLength",1305,G__TAttAxis_SetTickLength_0_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0.03 length","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTitleOffset",1429,G__TAttAxis_SetTitleOffset_1_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 offset","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTitleSize",1225,G__TAttAxis_SetTitleSize_2_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 .005 size","*MENU*",(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttAxis_DeclFileName_3_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttAxis_DeclFileLine_4_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttAxis_ImplFileName_5_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttAxis_ImplFileLine_6_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttAxis_Class_Version_7_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttAxis_Class_8_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttAxis_IsA_9_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttAxis_ShowMembers_0_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttAxis_Streamer_1_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAttAxis_Dictionary_2_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAttAxis",786,G__TAttAxis_TAttAxis_3_3,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),-1,0,1,1,1,0,"u 'TAttAxis' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttAxis",912,G__TAttAxis_wATAttAxis_4_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttText(void) {
   /* TAttText */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttText));
   G__memfunc_setup("TAttText",802,G__TAttText_TAttText_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttText),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttText",802,G__TAttText_TAttText_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttText),-1,0,5,1,1,0,
"i - 'Int_t' 0 - align f - 'Float_t' 0 - angle "
"s - 'Color_t' 0 - color s - 'Style_t' 0 - font "
"f - 'Float_t' 0 - tsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttText_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttText' - 1 - atttext",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextAlign",1200,G__TAttText_GetTextAlign_4_0,115,-1,G__defined_typename("Short_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextAngle",1196,G__TAttText_GetTextAngle_5_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextColor",1220,G__TAttText_GetTextColor_6_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextFont",1116,G__TAttText_GetTextFont_7_0,115,-1,G__defined_typename("Font_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTextSize",1120,G__TAttText_GetTextSize_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Modify",616,G__TAttText_Modify_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetAttText",1233,G__TAttText_ResetAttText_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" toption",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveTextAttributes",1883,G__TAttText_SaveTextAttributes_1_1,121,-1,-1,0,7,1,1,0,
"u 'ofstream' - 1 - out C - - 10 - name "
"i - 'Int_t' 0 12 alidef f - 'Float_t' 0 0 angdef "
"i - 'Int_t' 0 1 coldef i - 'Int_t' 0 61 fondef "
"f - 'Float_t' 0 1 sizdef",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAttributes",1784,G__TAttText_SetTextAttributes_2_1,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetTextAlign",1212,G__TAttText_SetTextAlign_3_1,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 11 align",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAngle",1208,G__TAttText_SetTextAngle_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 0 tangle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextColor",1232,G__TAttText_SetTextColor_5_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 1 tcolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TAttText_SetTextFont_6_1,121,-1,-1,0,1,1,1,0,"s - 'Font_t' 0 62 tfont",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextSize",1132,G__TAttText_SetTextSize_7_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 1 tsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttText_DeclFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttText_DeclFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttText_ImplFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttText_ImplFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttText_Class_Version_2_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttText_Class_3_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttText_IsA_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttText_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttText_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAttText_Dictionary_7_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAttText",802,G__TAttText_TAttText_8_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttText),-1,0,1,1,1,0,"u 'TAttText' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttText",928,G__TAttText_wATAttText_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBrowserImp(void) {
   /* TBrowserImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp));
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,1,1,1,0,"U 'TBrowser' - 0 0 b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,4,1,1,0,
"U 'TBrowser' - 0 - b C - - 10 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,6,1,1,0,
"U 'TBrowser' - 0 - b C - - 10 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TBrowserImp_Add_4_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - - C - - 10 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BrowseObj",909,G__TBrowserImp_BrowseObj_5_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Browser",740,G__TBrowserImp_Browser_6_0,85,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ExecuteDefaultAction",2038,G__TBrowserImp_ExecuteDefaultAction_7_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Iconify",721,G__TBrowserImp_Iconify_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TBrowserImp_RecursiveRemove_9_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Refresh",719,G__TBrowserImp_Refresh_0_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TBrowserImp_Show_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TBrowserImp_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBrowserImp_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBrowserImp_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBrowserImp_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBrowserImp_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBrowserImp_Class_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBrowserImp_IsA_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBrowserImp_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBrowserImp_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TBrowserImp_Dictionary_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,1,1,1,0,"u 'TBrowserImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBrowserImp",1244,G__TBrowserImp_wATBrowserImp_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTContextMenu(void) {
   /* TContextMenu */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenu));
   G__memfunc_setup("DisplayPopUp",1226,(G__InterfaceMethod)NULL,121,-1,-1,0,2,1,2,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TContextMenu",1230,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,0,0,1,4,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TContextMenu",1230,G__TContextMenu_TContextMenu_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,0,2,1,1,0,
"C - - 10 - name C - - 10 \"Context sensitive popup menu\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Action",606,G__TContextMenu_Action_4_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Action",606,G__TContextMenu_Action_5_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - object U 'TToggle' - 0 - toggle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Action",606,G__TContextMenu_Action_6_0,121,-1,-1,0,1,1,1,0,"U 'TMethod' - 0 - method",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Action",606,G__TContextMenu_Action_7_0,121,-1,-1,0,1,1,1,0,"U 'TToggle' - 0 - toggle",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateArgumentTitle",1945,G__TContextMenu_CreateArgumentTitle_8_0,67,-1,G__defined_typename("Char_t"),0,1,1,1,0,"U 'TMethodArg' - 0 - argument",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateDialogTitle",1702,G__TContextMenu_CreateDialogTitle_9_0,67,-1,G__defined_typename("Char_t"),0,2,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePopupTitle",1642,G__TContextMenu_CreatePopupTitle_0_1,67,-1,G__defined_typename("Char_t"),0,1,1,1,0,"U 'TObject' - 0 - object",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_1_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - method C - - 10 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_2_1,121,-1,-1,0,2,1,1,0,
"U 'TMethod' - 0 - method U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_3_1,121,-1,-1,0,3,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method "
"C - 'Char_t' 10 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_4_1,121,-1,-1,0,3,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method "
"U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_5_1,121,-1,-1,0,1,1,1,0,"C - 'Char_t' 10 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Execute",723,G__TContextMenu_Execute_6_1,121,-1,-1,0,1,1,1,0,"U 'TObjArray' - 0 - params",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBrowser",1028,G__TContextMenu_GetBrowser_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TBrowser),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetContextMenuImp",1728,G__TContextMenu_GetContextMenuImp_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedCanvas",1701,G__TContextMenu_GetSelectedCanvas_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedMethod",1706,G__TContextMenu_GetSelectedMethod_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TMethod),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedObject",1696,G__TContextMenu_GetSelectedObject_1_2,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSelectedPad",1374,G__TContextMenu_GetSelectedPad_2_2,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Popup",532,G__TContextMenu_Popup_3_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"U 'TObject' - 0 - obj U 'TVirtualPad' - 0 0 c "
"U 'TVirtualPad' - 0 0 p","Create menu from canvas",(void*)NULL,1);
   G__memfunc_setup("Popup",532,G__TContextMenu_Popup_4_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"U 'TObject' - 0 - obj U 'TBrowser' - 0 - b","Create menu from Browser",(void*)NULL,1);
   G__memfunc_setup("SetCanvas",904,G__TContextMenu_SetCanvas_5_2,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - c",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBrowser",1040,G__TContextMenu_SetBrowser_6_2,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMethod",909,G__TContextMenu_SetMethod_7_2,121,-1,-1,0,1,1,1,0,"U 'TMethod' - 0 - m",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TContextMenu_SetObject_8_2,121,-1,-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetObject",899,G__TContextMenu_SetObject_9_2,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - o",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetPad",577,G__TContextMenu_SetPad_0_3,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - p",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TContextMenu_DeclFileName_1_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TContextMenu_DeclFileLine_2_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TContextMenu_ImplFileName_3_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TContextMenu_ImplFileLine_4_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TContextMenu_Class_Version_5_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TContextMenu_Class_6_3,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TContextMenu_IsA_7_3,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TContextMenu_ShowMembers_8_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TContextMenu_Streamer_9_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TContextMenu_Dictionary_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TContextMenu",1230,G__TContextMenu_TContextMenu_1_4,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,0,1,1,1,0,"u 'TContextMenu' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TContextMenu",1356,G__TContextMenu_wATContextMenu_2_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTContextMenuImp(void) {
   /* TContextMenuImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp));
   G__memfunc_setup("TContextMenuImp",1524,G__TContextMenuImp_TContextMenuImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),-1,0,1,1,1,0,"U 'TContextMenu' - 0 0 c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetContextMenu",1434,G__TContextMenuImp_GetContextMenu_2_0,85,G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dialog",592,G__TContextMenuImp_Dialog_3_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - object U 'TMethod' - 0 - method",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisplayPopup",1258,G__TContextMenuImp_DisplayPopup_4_0,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TContextMenuImp_DeclFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TContextMenuImp_DeclFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TContextMenuImp_ImplFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TContextMenuImp_ImplFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TContextMenuImp_Class_Version_9_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TContextMenuImp_Class_0_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TContextMenuImp_IsA_1_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TContextMenuImp_ShowMembers_2_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TContextMenuImp_Streamer_3_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TContextMenuImp_Dictionary_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TContextMenuImp",1524,G__TContextMenuImp_TContextMenuImp_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),-1,0,1,1,1,0,"u 'TContextMenuImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TContextMenuImp",1650,G__TContextMenuImp_wATContextMenuImp_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTEnv(void) {
   /* TEnv */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TEnv));
   G__memfunc_setup("Getvalue",829,(G__InterfaceMethod)NULL,67,-1,-1,0,1,1,4,1,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TEnv",381,G__TEnv_TEnv_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TEnv),-1,0,1,1,1,0,"C - - 10 \"\" name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTable",776,G__TEnv_GetTable_3_0,85,G__get_linked_tagnum(&G__G__Base1LN_TOrdCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Defined",687,G__TEnv_Defined_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetValue",797,G__TEnv_GetValue_5_0,105,-1,-1,0,2,1,1,0,
"C - - 10 - name i - - 0 - dflt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetValue",797,G__TEnv_GetValue_6_0,67,-1,-1,0,2,1,1,1,
"C - - 10 - name C - - 10 - dflt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetValue",797,G__TEnv_GetValue_7_0,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,2,1,1,0,
"C - - 10 - name U 'TObject' - 0 - dflt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_8_0,121,-1,-1,0,4,1,1,0,
"C - - 10 - name C - - 10 - value "
"i 'EEnvLevel' - 0 kEnvChange level C - - 10 0 type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_9_0,121,-1,-1,0,4,1,1,0,
"C - - 10 - name u 'TString' - 11 - value "
"i 'EEnvLevel' - 0 - level C - - 10 - type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_0_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - name i 'EEnvLevel' - 0 kEnvChange level",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_1_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - name i - - 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_2_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - name d - - 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Lookup",634,G__TEnv_Lookup_3_1,85,G__get_linked_tagnum(&G__G__Base1LN_TEnvRec),-1,0,1,1,1,0,"C - - 10 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFile",764,G__TEnv_ReadFile_4_1,121,-1,-1,0,2,1,1,0,
"C - - 10 - fname i 'EEnvLevel' - 0 - level",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Save",399,G__TEnv_Save_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SaveLevel",903,G__TEnv_SaveLevel_6_1,121,-1,-1,0,1,1,1,0,"i 'EEnvLevel' - 0 - level",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TEnv_Print_7_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PrintEnv",822,G__TEnv_PrintEnv_8_1,121,-1,-1,0,1,1,1,0,"i 'EEnvLevel' - 0 kEnvAll level",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TEnv_DeclFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TEnv_DeclFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TEnv_ImplFileName_1_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TEnv_ImplFileLine_2_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TEnv_Class_Version_3_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TEnv_Class_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TEnv_IsA_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TEnv_ShowMembers_6_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TEnv_Streamer_7_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TEnv_Dictionary_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TEnv",381,G__TEnv_TEnv_9_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TEnv),-1,0,1,1,1,0,"u 'TEnv' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TEnv",507,G__TEnv_wATEnv_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAtt3D(void) {
   /* TAtt3D */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAtt3D));
   G__memfunc_setup("TAtt3D",500,G__TAtt3D_TAtt3D_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAtt3D),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof3D",743,G__TAtt3D_Sizeof3D_2_0,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAtt3D_DeclFileName_3_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAtt3D_DeclFileLine_4_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAtt3D_ImplFileName_5_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAtt3D_ImplFileLine_6_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAtt3D_Class_Version_7_0,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAtt3D_Class_8_0,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAtt3D_IsA_9_0,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAtt3D_ShowMembers_0_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAtt3D_Streamer_1_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TAtt3D_Dictionary_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TAtt3D",500,G__TAtt3D_TAtt3D_3_1,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAtt3D),-1,0,1,1,1,0,"u 'TAtt3D' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAtt3D",626,G__TAtt3D_wATAtt3D_4_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTApplicationImp(void) {
   /* TApplicationImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp));
   G__memfunc_setup("TApplicationImp",1518,G__TApplicationImp_TApplicationImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TApplicationImp",1518,G__TApplicationImp_TApplicationImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,5,1,1,0,
"C - - 10 - appClassName I - - 0 - argc "
"C - - 2 - argv Y - - 0 - options "
"i - - 0 - numOptions",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ApplicationName",1525,G__TApplicationImp_ApplicationName_3_0,67,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TApplicationImp_Show_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hide",378,G__TApplicationImp_Hide_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Iconify",721,G__TApplicationImp_Iconify_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsCmdThread",1064,G__TApplicationImp_IsCmdThread_7_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"","by default (for UNIX) ROOT is a single thread application",(void*)NULL,1);
   G__memfunc_setup("Init",404,G__TApplicationImp_Init_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Open",402,G__TApplicationImp_Open_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Raise",500,G__TApplicationImp_Raise_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Lower",521,G__TApplicationImp_Lower_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecCommand",1092,G__TApplicationImp_ExecCommand_2_1,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"U 'TGWin32Command' - 0 - code b - 'Bool_t' 0 - synch",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TApplicationImp_DeclFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TApplicationImp_DeclFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TApplicationImp_ImplFileName_5_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TApplicationImp_ImplFileLine_6_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TApplicationImp_Class_Version_7_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TApplicationImp_Class_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TApplicationImp_IsA_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TApplicationImp_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TApplicationImp_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TApplicationImp_Dictionary_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TApplicationImp",1518,G__TApplicationImp_TApplicationImp_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,1,1,1,0,"u 'TApplicationImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TApplicationImp",1644,G__TApplicationImp_wATApplicationImp_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTCanvasImp(void) {
   /* TCanvasImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp));
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,1,1,1,0,"U 'TCanvas' - 0 0 c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,4,1,1,0,
"U 'TCanvas' - 0 - c C - - 10 - name "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,6,1,1,0,
"U 'TCanvas' - 0 - c C - - 10 - name "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Canvas",604,G__TCanvasImp_Canvas_4_0,85,G__get_linked_tagnum(&G__G__Base1LN_TCanvas),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ForceUpdate",1106,G__TCanvasImp_ForceUpdate_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowGeometry",1764,G__TCanvasImp_GetWindowGeometry_6_0,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 1 - x i - 'Int_t' 1 - y "
"h - 'UInt_t' 1 - w h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Iconify",721,G__TCanvasImp_Iconify_7_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitWindow",1036,G__TCanvasImp_InitWindow_8_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatusText",1365,G__TCanvasImp_SetStatusText_9_0,121,-1,-1,0,2,1,1,0,
"C - - 10 0 text i - 'Int_t' 0 0 partidx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowPosition",1785,G__TCanvasImp_SetWindowPosition_0_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowSize",1343,G__TCanvasImp_SetWindowSize_1_1,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowTitle",1446,G__TCanvasImp_SetWindowTitle_2_1,121,-1,-1,0,1,1,1,0,"C - - 10 - newTitle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCanvasSize",1315,G__TCanvasImp_SetCanvasSize_3_1,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMenuBar",1099,G__TCanvasImp_ShowMenuBar_4_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE show",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowStatusBar",1338,G__TCanvasImp_ShowStatusBar_5_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE show",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TCanvasImp_Show_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TCanvasImp_DeclFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TCanvasImp_DeclFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TCanvasImp_ImplFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TCanvasImp_ImplFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TCanvasImp_Class_Version_1_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TCanvasImp_Class_2_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCanvasImp_IsA_3_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCanvasImp_ShowMembers_4_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCanvasImp_Streamer_5_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TCanvasImp_Dictionary_6_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_7_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,1,1,1,0,"u 'TCanvasImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TCanvasImp",1108,G__TCanvasImp_wATCanvasImp_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTControlBarImp(void) {
   /* TControlBarImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp));
   G__memfunc_setup("TControlBarImp",1392,G__TControlBarImp_TControlBarImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,2,1,1,0,
"U 'TControlBar' - 0 - c C - - 10 \"\" -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TControlBarImp",1392,G__TControlBarImp_TControlBarImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,4,1,1,0,
"U 'TControlBar' - 0 - c C - - 10 - - "
"i - 'Int_t' 0 - - i - 'Int_t' 0 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetControlBar",1302,G__TControlBarImp_GetControlBar_3_0,85,G__get_linked_tagnum(&G__G__Base1LN_TControlBar),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Create",596,G__TControlBarImp_Create_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hide",378,G__TControlBarImp_Hide_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TControlBarImp_Show_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TControlBarImp_DeclFileName_7_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TControlBarImp_DeclFileLine_8_0,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TControlBarImp_ImplFileName_9_0,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TControlBarImp_ImplFileLine_0_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TControlBarImp_Class_Version_1_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TControlBarImp_Class_2_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TControlBarImp_IsA_3_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TControlBarImp_ShowMembers_4_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TControlBarImp_Streamer_5_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TControlBarImp_Dictionary_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TControlBarImp",1392,G__TControlBarImp_TControlBarImp_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,1,1,1,0,"u 'TControlBarImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TControlBarImp",1518,G__TControlBarImp_wATControlBarImp_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTGuiFactory(void) {
   /* TGuiFactory */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory));
   G__memfunc_setup("TGuiFactory",1105,G__TGuiFactory_TGuiFactory_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory),-1,0,2,1,1,0,
"C - - 10 \"Batch\" name C - - 10 \"Batch GUI Factory\" title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateApplicationImp",2030,G__TGuiFactory_CreateApplicationImp_2_0,85,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,5,1,1,0,
"C - - 10 - classname I - - 0 - argc "
"C - - 2 - argv Y - - 0 - option "
"i - 'Int_t' 0 - numOptions",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCanvasImp",1494,G__TGuiFactory_CreateCanvasImp_3_0,85,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,4,1,1,0,
"U 'TCanvas' - 0 - c C - - 10 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCanvasImp",1494,G__TGuiFactory_CreateCanvasImp_4_0,85,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,6,1,1,0,
"U 'TCanvas' - 0 - c C - - 10 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBrowserImp",1630,G__TGuiFactory_CreateBrowserImp_5_0,85,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,4,1,1,0,
"U 'TBrowser' - 0 - b C - - 10 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBrowserImp",1630,G__TGuiFactory_CreateBrowserImp_6_0,85,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,6,1,1,0,
"U 'TBrowser' - 0 - b C - - 10 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateContextMenuImp",2036,G__TGuiFactory_CreateContextMenuImp_7_0,85,G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),-1,0,3,1,1,0,
"U 'TContextMenu' - 0 - c C - - 10 - name "
"C - - 10 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateControlBarImp",1904,G__TGuiFactory_CreateControlBarImp_8_0,85,G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,2,1,1,0,
"U 'TControlBar' - 0 - c C - - 10 - title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateControlBarImp",1904,G__TGuiFactory_CreateControlBarImp_9_0,85,G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,4,1,1,0,
"U 'TControlBar' - 0 - c C - - 10 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TGuiFactory_DeclFileName_0_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TGuiFactory_DeclFileLine_1_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TGuiFactory_ImplFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TGuiFactory_ImplFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TGuiFactory_Class_Version_4_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TGuiFactory_Class_5_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TGuiFactory_IsA_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TGuiFactory_ShowMembers_7_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TGuiFactory_Streamer_8_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TGuiFactory_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TGuiFactory",1105,G__TGuiFactory_TGuiFactory_0_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory),-1,0,1,1,1,0,"u 'TGuiFactory' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TGuiFactory",1231,G__TGuiFactory_wATGuiFactory_1_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVirtualFitter(void) {
   /* TVirtualFitter */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter));
   G__memfunc_setup("Clear",487,G__TVirtualFitter_Clear_2_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ExecuteCommand",1426,G__TVirtualFitter_ExecuteCommand_3_0,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"C - - 10 - command D - 'Double_t' 0 - args "
"i - 'Int_t' 0 - nargs",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("FixParameter",1224,G__TVirtualFitter_FixParameter_4_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ipar",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetErrors",925,G__TVirtualFitter_GetErrors_5_0,105,-1,G__defined_typename("Int_t"),0,5,1,1,0,
"i - 'Int_t' 0 - ipar d - 'Double_t' 1 - eplus "
"d - 'Double_t' 1 - eminus d - 'Double_t' 1 - eparab "
"d - 'Double_t' 1 - globcc",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetMaxIterations",1640,G__TVirtualFitter_GetMaxIterations_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetObjectFit",1178,G__TVirtualFitter_GetObjectFit_7_0,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetParameter",1217,G__TVirtualFitter_GetParameter_8_0,105,-1,G__defined_typename("Int_t"),0,6,1,1,0,
"i - 'Int_t' 0 - ipar C - - 0 - name "
"d - 'Double_t' 1 - value d - 'Double_t' 1 - verr "
"d - 'Double_t' 1 - vlow d - 'Double_t' 1 - vhigh",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetStats",815,G__TVirtualFitter_GetStats_9_0,105,-1,G__defined_typename("Int_t"),0,5,1,1,0,
"d - 'Double_t' 1 - amin d - 'Double_t' 1 - edm "
"d - 'Double_t' 1 - errdef i - 'Int_t' 1 - nvpar "
"i - 'Int_t' 1 - nparx",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("GetSumLog",887,G__TVirtualFitter_GetSumLog_0_1,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PrintResults",1279,G__TVirtualFitter_PrintResults_1_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - level d - 'Double_t' 0 - amin",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("ReleaseParameter",1634,G__TVirtualFitter_ReleaseParameter_2_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ipar",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetFCN",515,G__TVirtualFitter_SetFCN_3_1,121,-1,-1,0,1,1,1,0,"Y - - 0 - fcn",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetFCN",515,G__TVirtualFitter_SetFCN_4_1,121,-1,-1,0,1,1,1,0,"Q - 'void (*)(Int_t&, Double_t*, Double_t&f, Double_t*, Int_t)' 0 - fcn",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetObjectFit",1190,G__TVirtualFitter_SetObjectFit_5_1,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetMaxIterations",1652,G__TVirtualFitter_SetMaxIterations_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - niter",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("SetParameter",1229,G__TVirtualFitter_SetParameter_7_1,105,-1,G__defined_typename("Int_t"),0,6,1,1,0,
"i - 'Int_t' 0 - ipar C - - 10 - parname "
"d - 'Double_t' 0 - value d - 'Double_t' 0 - verr "
"d - 'Double_t' 0 - vlow d - 'Double_t' 0 - vhigh",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Fitter",622,G__TVirtualFitter_Fitter_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter),-1,0,2,1,1,0,
"U 'TObject' - 0 - obj i - 'Int_t' 0 25 maxpar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFitter",922,G__TVirtualFitter_SetFitter_9_1,121,-1,-1,0,2,1,1,0,
"U 'TVirtualFitter' - 0 - fitter i - 'Int_t' 0 25 maxpar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TVirtualFitter_DeclFileName_0_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVirtualFitter_DeclFileLine_1_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVirtualFitter_ImplFileName_2_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVirtualFitter_ImplFileLine_3_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVirtualFitter_Class_Version_4_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVirtualFitter_Class_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVirtualFitter_IsA_6_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVirtualFitter_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVirtualFitter_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TVirtualFitter_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVirtualFitter",1575,G__TVirtualFitter_wATVirtualFitter_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFileHandler(void) {
   /* TFileHandler */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler));
   G__memfunc_setup("TFileHandler",1170,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),-1,0,0,1,2,0,"","For Dictionary()",(void*)NULL,0);
   G__memfunc_setup("TFileHandler",1170,G__TFileHandler_TFileHandler_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),-1,0,2,1,1,0,
"i - - 0 - fd i - - 0 - mask",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFd",458,G__TFileHandler_GetFd_3_0,105,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFd",470,G__TFileHandler_SetFd_4_0,121,-1,-1,0,1,1,1,0,"i - - 0 - fd",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Notify",633,G__TFileHandler_Notify_5_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadNotify",1013,G__TFileHandler_ReadNotify_6_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteNotify",1156,G__TFileHandler_WriteNotify_7_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HasReadInterest",1510,G__TFileHandler_HasReadInterest_8_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HasWriteInterest",1653,G__TFileHandler_HasWriteInterest_9_0,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Remove",622,G__TFileHandler_Remove_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFileHandler_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFileHandler_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFileHandler_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFileHandler_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFileHandler_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFileHandler_Class_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFileHandler_IsA_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFileHandler_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFileHandler_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TFileHandler_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TFileHandler",1170,G__TFileHandler_TFileHandler_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),-1,0,1,1,1,0,"u 'TFileHandler' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TFileHandler",1296,G__TFileHandler_wATFileHandler_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBenchmark(void) {
   /* TBenchmark */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark));
   G__memfunc_setup("TBenchmark",991,G__TBenchmark_TBenchmark_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBench",768,G__TBenchmark_GetBench_2_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCpuTime",983,G__TBenchmark_GetCpuTime_3_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRealTime",1075,G__TBenchmark_GetRealTime_4_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TBenchmark_Print_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TBenchmark_Reset_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TBenchmark_Show_7_0,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Start",526,G__TBenchmark_Start_8_0,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Stop",422,G__TBenchmark_Stop_9_0,121,-1,-1,0,1,1,1,0,"C - - 10 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Summary",750,G__TBenchmark_Summary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TBenchmark_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBenchmark_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBenchmark_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBenchmark_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBenchmark_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBenchmark_Class_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBenchmark_IsA_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBenchmark_ShowMembers_8_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBenchmark_Streamer_9_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TBenchmark_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TBenchmark",991,G__TBenchmark_TBenchmark_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),-1,0,1,1,1,0,"u 'TBenchmark' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBenchmark",1117,G__TBenchmark_wATBenchmark_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTView(void) {
   /* TView */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TView));
   G__memfunc_setup("ResetView",926,(G__InterfaceMethod)NULL,121,-1,-1,0,4,1,2,0,
"f - 'Float_t' 0 - longitude f - 'Float_t' 0 - latitude "
"f - 'Float_t' 0 - psi i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TView",495,G__TView_TView_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TView),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TView",495,G__TView_TView_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TView),-1,0,1,1,1,0,"i - 'Int_t' 0 - system",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TView",495,G__TView_TView_3_0,105,G__get_linked_tagnum(&G__G__Base1LN_TView),-1,0,3,1,1,0,
"F - 'Float_t' 0 - rmin F - 'Float_t' 0 - rmax "
"i - 'Int_t' 0 1 system",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AxisVertex",1043,G__TView_AxisVertex_5_0,121,-1,-1,0,8,1,1,0,
"f - 'Float_t' 0 - ang F - 'Float_t' 0 - av "
"i - 'Int_t' 1 - ix1 i - 'Int_t' 1 - ix2 "
"i - 'Int_t' 1 - iy1 i - 'Int_t' 1 - iy2 "
"i - 'Int_t' 1 - iz1 i - 'Int_t' 1 - iz2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DefineViewDirection",1927,G__TView_DefineViewDirection_6_0,121,-1,-1,0,10,1,1,0,
"F - 'Float_t' 0 - s F - 'Float_t' 0 - c "
"d - 'Double_t' 0 - cosphi d - 'Double_t' 0 - sinphi "
"d - 'Double_t' 0 - costhe d - 'Double_t' 0 - sinthe "
"d - 'Double_t' 0 - cospsi d - 'Double_t' 0 - sinpsi "
"F - 'Float_t' 0 - tnorm F - 'Float_t' 0 - tback",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TView_ExecuteEvent_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteRotateView",1757,G__TView_ExecuteRotateView_8_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FindScope",891,G__TView_FindScope_9_0,121,-1,-1,0,3,1,1,0,
"F - 'Float_t' 0 - scale F - 'Float_t' 0 - center "
"i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDistancetoAxis",1731,G__TView_GetDistancetoAxis_0_1,105,-1,G__defined_typename("Int_t"),0,4,1,1,0,
"i - 'Int_t' 0 - axis i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py f - 'Float_t' 1 - ratio",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetAutoRange",1190,G__TView_GetAutoRange_1_1,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLatitude",1116,G__TView_GetLatitude_2_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLongitude",1227,G__TView_GetLongitude_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetPsi",588,G__TView_GetPsi_4_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRange",781,G__TView_GetRange_5_1,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - min F - 'Float_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRmax",696,G__TView_GetRmax_6_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRmin",694,G__TView_GetRmin_7_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOutline",1024,G__TView_GetOutline_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TSeqCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTN",450,G__TView_GetTN_9_1,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTnorm",816,G__TView_GetTnorm_0_2,70,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetSystem",933,G__TView_GetSystem_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("FindNormal",1002,G__TView_FindNormal_2_2,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"f - 'Float_t' 0 - z f - 'Float_t' 1 - zn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FindPhiSectors",1413,G__TView_FindPhiSectors_3_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - iopt i - 'Int_t' 1 - kphi "
"F - 'Float_t' 0 - aphi i - 'Int_t' 1 - iphi1 "
"i - 'Int_t' 1 - iphi2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FindThetaSectors",1626,G__TView_FindThetaSectors_4_2,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - iopt f - 'Float_t' 0 - phi "
"i - 'Int_t' 1 - kth F - 'Float_t' 0 - ath "
"i - 'Int_t' 1 - ith1 i - 'Int_t' 1 - ith2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NDCtoWC",594,G__TView_NDCtoWC_5_2,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - pn F - 'Float_t' 0 - pw",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NormalWCtoNDC",1211,G__TView_NormalWCtoNDC_6_2,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - pw F - 'Float_t' 0 - pn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PadRange",770,G__TView_PadRange_7_2,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - rback",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAutoRange",1202,G__TView_SetAutoRange_8_2,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE autorange",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetAxisNDC",918,G__TView_SetAxisNDC_9_2,121,-1,-1,0,6,1,1,0,
"F - 'Float_t' 0 - x1 F - 'Float_t' 0 - x2 "
"F - 'Float_t' 0 - y1 F - 'Float_t' 0 - y2 "
"F - 'Float_t' 0 - z1 F - 'Float_t' 0 - z2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLatitude",1128,G__TView_SetLatitude_0_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - latitude",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetLongitude",1239,G__TView_SetLongitude_1_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - longitude",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetPsi",600,G__TView_SetPsi_2_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - psi",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetOutlineToCube",1614,G__TView_SetOutlineToCube_3_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TView_SetRange_4_3,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - min F - 'Float_t' 0 - max",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TView_SetRange_5_3,121,-1,-1,0,7,1,1,0,
"f - 'Float_t' 0 - x0 f - 'Float_t' 0 - y0 "
"f - 'Float_t' 0 - z0 f - 'Float_t' 0 - x1 "
"f - 'Float_t' 0 - y1 f - 'Float_t' 0 - z1 "
"i - 'Int_t' 0 0 flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetSystem",945,G__TView_SetSystem_6_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - system",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetView",711,G__TView_SetView_7_3,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - longitude f - 'Float_t' 0 - latitude "
"f - 'Float_t' 0 - psi i - 'Int_t' 1 - irep",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WCtoNDC",594,G__TView_WCtoNDC_8_3,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - pw F - 'Float_t' 0 - pn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveViewCommand",1521,G__TView_MoveViewCommand_9_3,121,-1,-1,0,2,1,1,0,
"c - 'Char_t' 0 - chCode i - 'Int_t' 0 1 count",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AdjustPad",896,G__TView_AdjustPad_0_4,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AdjustScales",1222,G__TView_AdjustScales_1_4,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Centered3DImages",1527,G__TView_Centered3DImages_2_4,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Centered",810,G__TView_Centered_3_4,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,0);
   G__memfunc_setup("FrontView",932,G__TView_FrontView_4_4,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Front",521,G__TView_Front_5_4,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,0);
   G__memfunc_setup("ZoomView",832,G__TView_ZoomView_6_4,121,-1,-1,0,2,1,1,0,
"U 'TVirtualPad' - 0 0 pad f - 'Float_t' 0 1.25 zoomFactor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnzoomView",1059,G__TView_UnzoomView_7_4,121,-1,-1,0,2,1,1,0,
"U 'TVirtualPad' - 0 0 pad f - 'Float_t' 0 1.25 unZoomFactor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RotateView",1034,G__TView_RotateView_8_4,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - phi f - 'Float_t' 0 - theta "
"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SideView",800,G__TView_SideView_9_4,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Side",389,G__TView_Side_0_5,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,0);
   G__memfunc_setup("TopView",718,G__TView_TopView_1_5,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Top",307,G__TView_Top_2_5,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,0);
   G__memfunc_setup("ToggleRulers",1247,G__TView_ToggleRulers_3_5,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowAxis",822,G__TView_ShowAxis_4_5,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,0);
   G__memfunc_setup("ToggleZoom",1031,G__TView_ToggleZoom_5_5,121,-1,-1,0,1,1,1,0,"U 'TVirtualPad' - 0 0 pad",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ZoomMove",828,G__TView_ZoomMove_6_5,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TView_DeclFileName_7_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TView_DeclFileLine_8_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TView_ImplFileName_9_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TView_ImplFileLine_0_6,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TView_Class_Version_1_6,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TView_Class_2_6,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TView_IsA_3_6,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TView_ShowMembers_4_6,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TView_Streamer_5_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TView_Dictionary_6_6,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TView",495,G__TView_TView_7_6,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TView),-1,0,1,1,1,0,"u 'TView' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TView",621,G__TView_wATView_8_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVirtualX(void) {
   /* TVirtualX */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX));
   G__memfunc_setup("TVirtualX",915,G__TVirtualX_TVirtualX_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVirtualX",915,G__TVirtualX_TVirtualX_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),-1,0,2,1,1,0,
"C - - 10 - name C - - 10 - title",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Init",404,G__TVirtualX_Init_3_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"Y - - 0 0 display",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TVirtualX_ClearWindow_4_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClosePixmap",1125,G__TVirtualX_ClosePixmap_5_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseWindow",1134,G__TVirtualX_CloseWindow_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyPixmap",1034,G__TVirtualX_CopyPixmap_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - xpos "
"i - 'Int_t' 0 - ypos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateOpenGLContext",1886,G__TVirtualX_CreateOpenGLContext_8_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteOpenGLContext",1885,G__TVirtualX_DeleteOpenGLContext_9_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawBox",695,G__TVirtualX_DrawBox_0_1,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i 'TVirtualX::EBoxMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawCellArray",1293,G__TVirtualX_DrawCellArray_1_1,121,-1,-1,0,7,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2 "
"i - 'Int_t' 0 - nx i - 'Int_t' 0 - ny "
"I - 'Int_t' 0 - ic",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawFillArea",1166,G__TVirtualX_DrawFillArea_2_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TVirtualX_DrawLine_3_1,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyLine",1210,G__TVirtualX_DrawPolyLine_4_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawPolyMarker",1428,G__TVirtualX_DrawPolyMarker_5_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n U 'TPoint' - 0 - xy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawText",819,G__TVirtualX_DrawText_6_1,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"f - 'Float_t' 0 - angle f - 'Float_t' 0 - mgn "
"C - - 10 - text i 'TVirtualX::ETextMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecCommand",1092,G__TVirtualX_ExecCommand_7_1,104,-1,G__defined_typename("UInt_t"),0,1,1,1,0,"U 'TGWin32Command' - 0 - code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCharacterUp",1394,G__TVirtualX_GetCharacterUp_8_1,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 1 - chupx f - 'Float_t' 1 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDrawMode",1075,G__TVirtualX_GetDrawMode_9_1,105,G__get_linked_tagnum(&G__G__Base1LN_TVirtualXcLcLEDrawMode),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDoubleBuffer",1493,G__TVirtualX_GetDoubleBuffer_0_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGeometry",1132,G__TVirtualX_GetGeometry_1_2,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisplayName",1111,G__TVirtualX_DisplayName_2_2,67,-1,-1,0,1,1,1,1,"C - - 10 0 -",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPlanes",899,G__TVirtualX_GetPlanes_3_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 1 - nplanes",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRGB",507,G__TVirtualX_GetRGB_4_2,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - index f - 'Float_t' 1 - r "
"f - 'Float_t' 1 - g f - 'Float_t' 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextExtent",1341,G__TVirtualX_GetTextExtent_5_2,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 1 - w h - 'UInt_t' 1 - h "
"C - - 0 - mess",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTextMagnitude",1635,G__TVirtualX_GetTextMagnitude_6_2,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowID",1061,G__TVirtualX_GetWindowID_7_2,107,-1,G__defined_typename("Window_t"),0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HasTTFonts",974,G__TVirtualX_HasTTFonts_8_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InitWindow",1036,G__TVirtualX_InitWindow_9_2,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"k - 'ULong_t' 0 - window",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TVirtualX_MoveWindow_0_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenPixmap",1025,G__TVirtualX_OpenPixmap_1_3,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TVirtualX_QueryPointer_2_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 1 - ix i - 'Int_t' 1 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadGIF",594,G__TVirtualX_ReadGIF_3_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - x0 i - 'Int_t' 0 - y0 "
"C - - 10 - file",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RequestLocator",1469,G__TVirtualX_RequestLocator_4_3,105,-1,G__defined_typename("Int_t"),0,4,1,1,0,
"i - 'Int_t' 0 - mode i - 'Int_t' 0 - ctyp "
"i - 'Int_t' 1 - x i - 'Int_t' 1 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RequestString",1376,G__TVirtualX_RequestString_5_3,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 0 - text",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RescaleWindow",1335,G__TVirtualX_RescaleWindow_6_3,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizePixmap",1249,G__TVirtualX_ResizePixmap_7_3,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TVirtualX_ResizeWindow_8_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectWindow",1240,G__TVirtualX_SelectWindow_9_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCharacterUp",1406,G__TVirtualX_SetCharacterUp_0_4,121,-1,-1,0,2,1,1,0,
"f - 'Float_t' 0 - chupx f - 'Float_t' 0 - chupy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipOFF",911,G__TVirtualX_SetClipOFF_1_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - wid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRegion",1304,G__TVirtualX_SetClipRegion_2_4,121,-1,-1,0,5,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TVirtualX_SetCursor_3_4,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - win i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBuffer",1505,G__TVirtualX_SetDoubleBuffer_4_4,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - wid i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBufferOFF",1724,G__TVirtualX_SetDoubleBufferOFF_5_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDoubleBufferON",1662,G__TVirtualX_SetDoubleBufferON_6_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDrawMode",1087,G__TVirtualX_SetDrawMode_7_4,121,-1,-1,0,1,1,1,0,"i 'TVirtualX::EDrawMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillColor",1202,G__TVirtualX_SetFillColor_8_4,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFillStyle",1220,G__TVirtualX_SetFillStyle_9_4,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - style",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineColor",1203,G__TVirtualX_SetLineColor_0_5,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineType",1110,G__TVirtualX_SetLineType_1_5,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - n I - 'Int_t' 0 - dash",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineStyle",1221,G__TVirtualX_SetLineStyle_2_5,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - linestyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineWidth",1204,G__TVirtualX_SetLineWidth_3_5,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerColor",1421,G__TVirtualX_SetMarkerColor_4_5,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerSize",1321,G__TVirtualX_SetMarkerSize_5_5,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - markersize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMarkerStyle",1439,G__TVirtualX_SetMarkerStyle_6_5,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - markerstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOpacity",1029,G__TVirtualX_SetOpacity_7_5,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRGB",519,G__TVirtualX_SetRGB_8_5,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - cindex f - 'Float_t' 0 - r "
"f - 'Float_t' 0 - g f - 'Float_t' 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextAlign",1212,G__TVirtualX_SetTextAlign_9_5,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 11 talign",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextColor",1232,G__TVirtualX_SetTextColor_0_6,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - cindex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TVirtualX_SetTextFont_1_6,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"C - - 0 - fontname i 'TVirtualX::ETextSetMode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextFont",1128,G__TVirtualX_SetTextFont_2_6,121,-1,-1,0,1,1,1,0,"s - 'Font_t' 0 - fontnumber",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextMagnitude",1647,G__TVirtualX_SetTextMagnitude_3_6,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - mgn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTextSize",1132,G__TVirtualX_SetTextSize_4_6,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - textsize",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateWindow",1243,G__TVirtualX_UpdateWindow_5_6,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Warp",410,G__TVirtualX_Warp_6_6,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ix i - 'Int_t' 0 - iy",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteGIF",737,G__TVirtualX_WriteGIF_7_6,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WritePixmap",1146,G__TVirtualX_WritePixmap_8_6,121,-1,-1,0,4,1,1,0,
"i - 'Int_t' 0 - wid h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h C - - 0 - pxname",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowAttributes",1983,G__TVirtualX_GetWindowAttributes_9_6,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id u 'WindowAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapWindow",918,G__TVirtualX_MapWindow_0_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapSubwindows",1363,G__TVirtualX_MapSubwindows_1_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MapRaised",886,G__TVirtualX_MapRaised_2_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UnmapWindow",1145,G__TVirtualX_UnmapWindow_3_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DestroyWindow",1378,G__TVirtualX_DestroyWindow_4_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RaiseWindow",1132,G__TVirtualX_RaiseWindow_5_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LowerWindow",1153,G__TVirtualX_LowerWindow_6_7,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveWindow",1039,G__TVirtualX_MoveWindow_7_7,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MoveResizeWindow",1665,G__TVirtualX_MoveResizeWindow_8_7,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResizeWindow",1258,G__TVirtualX_ResizeWindow_9_7,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IconifyWindow",1353,G__TVirtualX_IconifyWindow_0_8,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackground",1956,G__TVirtualX_SetWindowBackground_1_8,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'ULong_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowBackgroundPixmap",2579,G__TVirtualX_SetWindowBackgroundPixmap_2_8,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Pixmap_t' 0 - pxm",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateWindow",1228,G__TVirtualX_CreateWindow_3_8,107,-1,G__defined_typename("Window_t"),0,10,1,1,0,
"k - 'Window_t' 0 - parent i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h h - 'UInt_t' 0 - border "
"i - 'Int_t' 0 - depth h - 'UInt_t' 0 - clss "
"Y - - 0 - visual U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("OpenDisplay",1128,G__TVirtualX_OpenDisplay_4_8,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 10 - dpyName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CloseDisplay",1228,G__TVirtualX_CloseDisplay_5_8,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDisplay",1014,G__TVirtualX_GetDisplay_6_8,107,-1,G__defined_typename("Display_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("InternAtom",1025,G__TVirtualX_InternAtom_7_8,107,-1,G__defined_typename("Atom_t"),0,2,1,1,0,
"C - - 10 - atom_name b - 'Bool_t' 0 - only_if_exist",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDefaultRootWindow",2049,G__TVirtualX_GetDefaultRootWindow_8_8,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParent",906,G__TVirtualX_GetParent_9_8,107,-1,G__defined_typename("Window_t"),0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LoadQueryFont",1325,G__TVirtualX_LoadQueryFont_0_9,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"C - - 10 - font_name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontHandle",1283,G__TVirtualX_GetFontHandle_1_9,107,-1,G__defined_typename("FontH_t"),0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteFont",1002,G__TVirtualX_DeleteFont_2_9,121,-1,-1,0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGC",734,G__TVirtualX_CreateGC_3_9,107,-1,G__defined_typename("GContext_t"),0,2,1,1,0,
"k - 'Drawable_t' 0 - id U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeGC",720,G__TVirtualX_ChangeGC_4_9,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc U 'GCValues_t' - 0 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyGC",549,G__TVirtualX_CopyGC_5_9,121,-1,-1,0,3,1,1,0,
"k - 'GContext_t' 0 - org k - 'GContext_t' 0 - dest "
"h - 'Mask_t' 0 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGC",733,G__TVirtualX_DeleteGC_6_9,121,-1,-1,0,1,1,1,0,"k - 'GContext_t' 0 - gc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateCursor",1234,G__TVirtualX_CreateCursor_7_9,107,-1,G__defined_typename("Cursor_t"),0,1,1,1,0,"i 'ECursor' - 0 - cursor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCursor",938,G__TVirtualX_SetCursor_8_9,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Cursor_t' 0 - curid",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TVirtualX_CreatePixmap_9_9,107,-1,G__defined_typename("Pixmap_t"),0,3,1,1,0,
"k - 'Drawable_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePixmap",1219,G__TVirtualX_CreatePixmap_0_10,107,-1,G__defined_typename("Pixmap_t"),0,7,1,1,0,
"k - 'Drawable_t' 0 - id C - - 10 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height "
"k - 'ULong_t' 0 - forecolor k - 'ULong_t' 0 - backcolor "
"i - 'Int_t' 0 - depth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateBitmap",1201,G__TVirtualX_CreateBitmap_1_10,107,-1,G__defined_typename("Pixmap_t"),0,4,1,1,0,
"k - 'Drawable_t' 0 - id C - - 10 - bitmap "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePixmap",1218,G__TVirtualX_DeletePixmap_2_10,121,-1,-1,0,1,1,1,0,"k - 'Pixmap_t' 0 - pmap",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromFile",2116,G__TVirtualX_CreatePictureFromFile_3_10,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 10 - filename "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePictureFromData",2110,G__TVirtualX_CreatePictureFromData_4_10,98,-1,G__defined_typename("Bool_t"),0,5,1,1,0,
"k - 'Drawable_t' 0 - id C - - 2 - data "
"k - 'Pixmap_t' 1 - pict k - 'Pixmap_t' 1 - pict_mask "
"u 'PictureAttributes_t' - 1 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadPictureDataFromFile",2278,G__TVirtualX_ReadPictureDataFromFile_5_10,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 10 - filename C - - 3 - ret_data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeletePictureData",1705,G__TVirtualX_DeletePictureData_6_10,121,-1,-1,0,1,1,1,0,"Y - - 0 - data",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetDashes",900,G__TVirtualX_SetDashes_7_10,121,-1,-1,0,4,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - offset "
"C - - 10 - dash_list i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ParseColor",1018,G__TVirtualX_ParseColor_8_10,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Colormap_t' 0 - cmap C - - 10 - cname "
"u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AllocColor",1002,G__TVirtualX_AllocColor_9_10,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryColor",1045,G__TVirtualX_QueryColor_0_11,121,-1,-1,0,2,1,1,0,
"k - 'Colormap_t' 0 - cmap u 'ColorStruct_t' - 1 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EventsPending",1338,G__TVirtualX_EventsPending_1_11,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NextEvent",929,G__TVirtualX_NextEvent_2_11,121,-1,-1,0,1,1,1,0,"u 'Event_t' - 1 - event",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Bell",383,G__TVirtualX_Bell_3_11,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - percent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CopyArea",788,G__TVirtualX_CopyArea_4_11,121,-1,-1,0,9,1,1,0,
"k - 'Drawable_t' 0 - src k - 'Drawable_t' 0 - dest "
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - src_x "
"i - 'Int_t' 0 - src_y h - 'UInt_t' 0 - width "
"h - 'UInt_t' 0 - height i - 'Int_t' 0 - dest_x "
"i - 'Int_t' 0 - dest_y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ChangeWindowAttributes",2277,G__TVirtualX_ChangeWindowAttributes_5_11,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'SetWindowAttributes_t' - 0 - attr",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawLine",790,G__TVirtualX_DrawLine_6_11,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x1 i - 'Int_t' 0 - y1 "
"i - 'Int_t' 0 - x2 i - 'Int_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearArea",864,G__TVirtualX_ClearArea_7_11,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CheckEvent",992,G__TVirtualX_CheckEvent_8_11,98,-1,G__defined_typename("Bool_t"),0,3,1,1,0,
"k - 'Window_t' 0 - id i 'EGEventType' - 0 - type "
"u 'Event_t' - 1 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SendEvent",908,G__TVirtualX_SendEvent_9_11,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id U 'Event_t' - 0 - ev",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WMDeleteNotify",1392,G__TVirtualX_WMDeleteNotify_0_12,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetKeyAutoRepeat",1615,G__TVirtualX_SetKeyAutoRepeat_1_12,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE on",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabKey",677,G__TVirtualX_GrabKey_2_12,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - keycode "
"h - 'UInt_t' 0 - modifier b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabButton",1016,G__TVirtualX_GrabButton_3_12,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id i 'EMouseButton' - 0 - button "
"h - 'UInt_t' 0 - modifier h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GrabPointer",1117,G__TVirtualX_GrabPointer_4_12,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask "
"k - 'Window_t' 0 - confine k - 'Cursor_t' 0 - cursor "
"b - 'Bool_t' 0 kTRUE grab",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowName",1317,G__TVirtualX_SetWindowName_5_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIconName",1078,G__TVirtualX_SetIconName_6_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIconPixmap",1316,G__TVirtualX_SetIconPixmap_7_12,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Pixmap_t' 0 - pix",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClassHints",1320,G__TVirtualX_SetClassHints_8_12,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id C - - 0 - className "
"C - - 0 - resourceName",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetMWMHints",1059,G__TVirtualX_SetMWMHints_9_12,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - value "
"h - 'UInt_t' 0 - funcs h - 'UInt_t' 0 - input",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMPosition",1317,G__TVirtualX_SetWMPosition_0_13,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSize",875,G__TVirtualX_SetWMSize_1_13,121,-1,-1,0,3,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - w "
"h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMSizeHints",1393,G__TVirtualX_SetWMSizeHints_2_13,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - wmin "
"h - 'UInt_t' 0 - hmin h - 'UInt_t' 0 - wmax "
"h - 'UInt_t' 0 - hmax h - 'UInt_t' 0 - winc "
"h - 'UInt_t' 0 - hinc",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMState",977,G__TVirtualX_SetWMState_3_13,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id i 'EInitialState' - 0 - state",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWMTransientHint",1819,G__TVirtualX_SetWMTransientHint_4_13,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 0 - main_id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawString",1029,G__TVirtualX_DrawString_5_13,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"C - - 10 - s i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TextWidth",933,G__TVirtualX_TextWidth_6_13,105,-1,G__defined_typename("Int_t"),0,3,1,1,0,
"k - 'FontStruct_t' 0 - font C - - 10 - s "
"i - 'Int_t' 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontProperties",1764,G__TVirtualX_GetFontProperties_7_13,121,-1,-1,0,3,1,1,0,
"k - 'FontStruct_t' 0 - font i - 'Int_t' 1 - max_ascent "
"i - 'Int_t' 1 - max_descent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGCValues",1050,G__TVirtualX_GetGCValues_8_13,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc u 'GCValues_t' - 1 - gval",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFontStruct",1340,G__TVirtualX_GetFontStruct_9_13,107,-1,G__defined_typename("FontStruct_t"),0,1,1,1,0,"k - 'FontH_t' 0 - fh",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FreeFontStruct",1438,G__TVirtualX_FreeFontStruct_0_14,121,-1,-1,0,1,1,1,0,"k - 'FontStruct_t' 0 - fs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearWindow",1119,G__TVirtualX_ClearWindow_1_14,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("KeysymToKeycode",1545,G__TVirtualX_KeysymToKeycode_2_14,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"h - 'UInt_t' 0 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillRectangle",1308,G__TVirtualX_FillRectangle_3_14,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawRectangle",1315,G__TVirtualX_DrawRectangle_4_14,121,-1,-1,0,6,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawSegments",1236,G__TVirtualX_DrawSegments_5_14,121,-1,-1,0,4,1,1,0,
"k - 'Drawable_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Segment_t' - 0 - seg i - 'Int_t' 0 - nseg",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SelectInput",1136,G__TVirtualX_SelectInput_6_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id h - 'UInt_t' 0 - evmask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetInputFocus",1340,G__TVirtualX_SetInputFocus_7_14,121,-1,-1,0,1,1,1,0,"k - 'Window_t' 0 - id",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPrimarySelectionOwner",2485,G__TVirtualX_GetPrimarySelectionOwner_8_14,107,-1,G__defined_typename("Window_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ConvertPrimarySelection",2411,G__TVirtualX_ConvertPrimarySelection_9_14,121,-1,-1,0,2,1,1,0,
"k - 'Window_t' 0 - id k - 'Time_t' 0 - when",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("LookupString",1265,G__TVirtualX_LookupString_0_15,121,-1,-1,0,4,1,1,0,
"U 'Event_t' - 0 - event C - - 0 - buf "
"i - 'Int_t' 0 - buflen h - 'UInt_t' 1 - keysym",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPasteBuffer",1399,G__TVirtualX_GetPasteBuffer_1_15,121,-1,-1,0,5,1,1,0,
"k - 'Window_t' 0 - id k - 'Atom_t' 0 - atom "
"u 'TString' - 1 - text i - 'Int_t' 1 - nchar "
"b - 'Bool_t' 0 - del",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TranslateCoordinates",2089,G__TVirtualX_TranslateCoordinates_2_15,121,-1,-1,0,7,1,1,0,
"k - 'Window_t' 0 - src k - 'Window_t' 0 - dest "
"i - 'Int_t' 0 - src_x i - 'Int_t' 0 - src_y "
"i - 'Int_t' 1 - dest_x i - 'Int_t' 1 - dest_y "
"k - 'Window_t' 1 - child",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetWindowSize",1331,G__TVirtualX_GetWindowSize_3_15,121,-1,-1,0,5,1,1,0,
"k - 'Drawable_t' 0 - id i - 'Int_t' 1 - x "
"i - 'Int_t' 1 - y h - 'UInt_t' 1 - w "
"h - 'UInt_t' 1 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillPolygon",1135,G__TVirtualX_FillPolygon_4_15,121,-1,-1,0,4,1,1,0,
"k - 'Window_t' 0 - id k - 'GContext_t' 0 - gc "
"U 'Point_t' - 0 - points i - 'Int_t' 0 - npnt",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("QueryPointer",1271,G__TVirtualX_QueryPointer_5_15,121,-1,-1,0,8,1,1,0,
"k - 'Window_t' 0 - id k - 'Window_t' 1 - rootw "
"k - 'Window_t' 1 - childw i - 'Int_t' 1 - root_x "
"i - 'Int_t' 1 - root_y i - 'Int_t' 1 - win_x "
"i - 'Int_t' 1 - win_y h - 'UInt_t' 1 - mask",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetForeground",1351,G__TVirtualX_SetForeground_6_15,121,-1,-1,0,2,1,1,0,
"k - 'GContext_t' 0 - gc k - 'ULong_t' 0 - foreground",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetClipRectangles",1724,G__TVirtualX_SetClipRectangles_7_15,121,-1,-1,0,5,1,1,0,
"k - 'GContext_t' 0 - gc i - 'Int_t' 0 - x "
"i - 'Int_t' 0 - y U 'Rectangle_t' - 0 - recs "
"i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TVirtualX_Update_8_15,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TVirtualX_DeclFileName_9_15,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVirtualX_DeclFileLine_0_16,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVirtualX_ImplFileName_1_16,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVirtualX_ImplFileLine_2_16,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVirtualX_Class_Version_3_16,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVirtualX_Class_4_16,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVirtualX_IsA_5_16,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVirtualX_ShowMembers_6_16,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVirtualX_Streamer_7_16,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TVirtualX_Dictionary_8_16,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TVirtualX",915,G__TVirtualX_TVirtualX_9_16,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),-1,0,1,1,1,0,"u 'TVirtualX' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVirtualX",1041,G__TVirtualX_wATVirtualX_0_17,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVirtualGL(void) {
   /* TVirtualGL */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL));
   G__memfunc_setup("Invert",632,(G__InterfaceMethod)NULL,70,-1,G__defined_typename("Float_t"),0,1,1,2,0,"F - 'Float_t' 0 - vector",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TVirtualGL",974,G__TVirtualGL_TVirtualGL_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AddRotation",1113,G__TVirtualGL_AddRotation_3_0,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - rotmatrix D - 'Double_t' 0 - extraangles",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("BeginGLCmd",908,G__TVirtualGL_BeginGLCmd_4_0,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode","Begins the vertices of a primitive or a group of like primitives.",(void*)NULL,1);
   G__memfunc_setup("ClearColor",998,G__TVirtualGL_ClearColor_5_0,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearGLColor",1145,G__TVirtualGL_ClearGLColor_6_0,121,-1,-1,0,4,1,1,0,
"f - 'Float_t' 0 - red f - 'Float_t' 0 - green "
"f - 'Float_t' 0 - blue f - 'Float_t' 0 - alpha",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ClearGL",634,G__TVirtualGL_ClearGL_7_0,121,-1,-1,0,1,1,1,0,"h - 'UInt_t' 0 - bufbits",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGLLists",1270,G__TVirtualGL_CreateGLLists_8_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"i - 'Int_t' 0 - range",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreateGLViewerImp",1663,G__TVirtualGL_CreateGLViewerImp_9_0,85,G__get_linked_tagnum(&G__G__Base1LN_TGLViewerImp),-1,0,4,1,1,0,
"U 'TPadOpenGLView' - 0 - c C - - 10 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("CreatePadGLView",1431,G__TVirtualGL_CreatePadGLView_0_1,85,G__get_linked_tagnum(&G__G__Base1LN_TPadView3D),-1,0,1,1,1,0,"U 'TVirtualPad' - 0 - c",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteGLLists",1269,G__TVirtualGL_DeleteGLLists_1_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ilist i - 'Int_t' 0 - range",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DisableGL",839,G__TVirtualGL_DisableGL_2_1,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EnableGL",730,G__TVirtualGL_EnableGL_3_1,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EndGLList",838,G__TVirtualGL_EndGLList_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EndGLCmd",702,G__TVirtualGL_EndGLCmd_5_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FlushGL",661,G__TVirtualGL_FlushGL_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FrontGLFace",1035,G__TVirtualGL_FrontGLFace_7_1,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - faceflag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TVirtualGL_GetGL_8_1,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode B - 'Bool_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TVirtualGL_GetGL_9_1,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode D - 'Double_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TVirtualGL_GetGL_0_2,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode F - 'Float_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGL",435,G__TVirtualGL_GetGL_1_2,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - mode I - 'Int_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetGLError",957,G__TVirtualGL_GetGLError_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetRootLight",1212,G__TVirtualGL_GetRootLight_3_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTrueColorMode",1604,G__TVirtualGL_GetTrueColorMode_4_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MultGLMatrix",1194,G__TVirtualGL_MultGLMatrix_5_2,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - mat",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewGLList",857,G__TVirtualGL_NewGLList_6_2,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 1 ilist i 'EG3D2GLmode' - 0 kCOMPILE mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewGLModelView",1353,G__TVirtualGL_NewGLModelView_7_2,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - ilist",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGLPoints",1292,G__TVirtualGL_PaintGLPoints_8_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PolygonGLMode",1280,G__TVirtualGL_PolygonGLMode_9_2,121,-1,-1,0,2,1,1,0,
"i 'EG3D2GLmode' - 0 - face i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PushGLMatrix",1192,G__TVirtualGL_PushGLMatrix_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PopGLMatrix",1079,G__TVirtualGL_PopGLMatrix_1_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RotateGL",770,G__TVirtualGL_RotateGL_2_3,121,-1,-1,0,4,1,1,0,
"d - 'Double_t' 0 - angle d - 'Double_t' 0 - x "
"d - 'Double_t' 0 - y d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RotateGL",770,G__TVirtualGL_RotateGL_3_3,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - Theta d - 'Double_t' 0 - Phi "
"d - 'Double_t' 0 - Psi",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLVertex",1085,G__TVirtualGL_SetGLVertex_4_3,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLColor",958,G__TVirtualGL_SetGLColor_5_3,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - rgb",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLColorIndex",1462,G__TVirtualGL_SetGLColorIndex_6_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - color",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLLineWidth",1351,G__TVirtualGL_SetGLLineWidth_7_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetGLPointSize",1380,G__TVirtualGL_SetGLPointSize_8_3,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - size",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStack",802,G__TVirtualGL_SetStack_9_3,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 0 matrix",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShadeGLModel",1129,G__TVirtualGL_ShadeGLModel_0_4,121,-1,-1,0,1,1,1,0,"i 'EG3D2GLmode' - 0 - mode",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TranslateGL",1089,G__TVirtualGL_TranslateGL_1_4,121,-1,-1,0,3,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 - y "
"d - 'Double_t' 0 - z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RunGLList",868,G__TVirtualGL_RunGLList_2_4,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - list",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewProjectionView",1762,G__TVirtualGL_NewProjectionView_3_4,121,-1,-1,0,3,1,1,0,
"D - 'Double_t' 0 - viewboxmin D - 'Double_t' 0 - viewboxmax "
"b - 'Bool_t' 0 kTRUE perspective",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("NewModelView",1206,G__TVirtualGL_NewModelView_4_4,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - angles D - 'Double_t' 0 - delta",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintCone",897,G__TVirtualGL_PaintCone_5_4,121,-1,-1,0,3,1,1,0,
"F - 'Float_t' 0 - vertex i - 'Int_t' 0 - ndiv "
"i - 'Int_t' 0 - nstacks",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintPolyLine",1320,G__TVirtualGL_PaintPolyLine_6_4,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - p "
"C - 'Option_t' 0 - option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintGLPointsObject",1891,G__TVirtualGL_PaintGLPointsObject_7_4,121,-1,-1,0,2,1,1,0,
"U 'TPoints3DABC' - 10 - points C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintBrik",900,G__TVirtualGL_PaintBrik_8_4,121,-1,-1,0,1,1,1,0,"F - 'Float_t' 0 - vertex",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRootLight",1224,G__TVirtualGL_SetRootLight_9_4,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLineAttr",1103,G__TVirtualGL_SetLineAttr_0_5,121,-1,-1,0,2,1,1,0,
"s - 'Color_t' 0 - color i - 'Int_t' 0 1 width",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("UpdateMatrix",1240,G__TVirtualGL_UpdateMatrix_1_5,121,-1,-1,0,3,1,1,0,
"D - 'Double_t' 0 0 translate D - 'Double_t' 0 0 rotate "
"b - 'Bool_t' 0 kFALSE isreflection",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetTrueColorMode",1616,G__TVirtualGL_SetTrueColorMode_2_5,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kTRUE flag",(char*)NULL,(void*)NULL,0);
   // automatic copy constructor
   G__memfunc_setup("TVirtualGL",974,G__TVirtualGL_TVirtualGL_3_5,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL),-1,0,1,1,1,0,"u 'TVirtualGL' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVirtualGL",1100,G__TVirtualGL_wATVirtualGL_4_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTVirtualPS(void) {
   /* TVirtualPS */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS));
   G__memfunc_setup("Close",502,G__TVirtualPS_Close_3_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" opt",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawBox",695,G__TVirtualPS_DrawBox_4_0,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawFrame",889,G__TVirtualPS_DrawFrame_5_0,121,-1,-1,0,8,1,1,0,
"f - 'Coord_t' 0 - xl f - 'Coord_t' 0 - yl "
"f - 'Coord_t' 0 - xt f - 'Coord_t' 0 - yt "
"i - 'Int_t' 0 - mode i - 'Int_t' 0 - border "
"i - 'Int_t' 0 - dark i - 'Int_t' 0 - light",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawPolyMarker",1428,G__TVirtualPS_DrawPolyMarker_6_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - x "
"F - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DrawPS",561,G__TVirtualPS_DrawPS_7_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - n F - 'Float_t' 0 - xw "
"F - 'Float_t' 0 - yw",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("NewPage",679,G__TVirtualPS_NewPage_8_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Open",402,G__TVirtualPS_Open_9_0,121,-1,-1,0,2,1,1,0,
"C - - 10 - filename i - 'Int_t' 0 -111 type",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("PrintFast",923,G__TVirtualPS_PrintFast_0_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - nch C - - 10 \"\" string",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("Text",421,G__TVirtualPS_Text_1_1,121,-1,-1,0,3,1,1,0,
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y "
"C - - 10 - string",(char*)NULL,(void*)NULL,3);
   G__memfunc_setup("DeclFileName",1145,G__TVirtualPS_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TVirtualPS_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TVirtualPS_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TVirtualPS_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TVirtualPS_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TVirtualPS_Class_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TVirtualPS_IsA_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TVirtualPS_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TVirtualPS_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Dictionary",1046,G__TVirtualPS_Dictionary_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TVirtualPS",1116,G__TVirtualPS_wATVirtualPS_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}


/*********************************************************
* Member function information setup
*********************************************************/
extern "C" void G__cpp_setup_memfuncG__Base1() {
}

/*********************************************************
* Global variable information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_globalG__Base1() {

   /* Setting up global variables */
   G__resetplocal();

   G__memvar_setup((void*)(&kTRUE),98,0,1,-1,G__defined_typename("Bool_t"),-1,1,"kTRUE=",0,(char*)NULL);
   G__memvar_setup((void*)(&kFALSE),98,0,1,-1,G__defined_typename("Bool_t"),-1,1,"kFALSE=",0,(char*)NULL);
   G__memvar_setup((void*)(&kNPOS),105,0,1,-1,G__defined_typename("Ssiz_t"),-1,1,"kNPOS=",0,(char*)NULL);
   G__memvar_setup((void*)(&gDebug),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"gDebug=",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kCanDelete=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kObjIsParent=2",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kObjIsPersistent=4",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kObjInCanvas=8",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kModified=16",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kDoneByView=32",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kCannotPick=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_EObjBits),-1,-1,1,"kInvalidObject=8192",0,(char*)NULL);
   G__memvar_setup((void*)(&gDirectory),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,-1,1,"gDirectory=",0,(char*)NULL);
   G__memvar_setup((void*)(&gROOT),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TROOT),-1,-1,1,"gROOT=",0,(char*)NULL);
   G__memvar_setup((void*)(&gStyle),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TStyle),-1,-1,1,"gStyle=",0,(char*)NULL);
   G__memvar_setup((void*)(&gEnv),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TEnv),-1,-1,1,"gEnv=",0,(char*)NULL);
   G__memvar_setup((void*)(&gFile),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,-1,1,"gFile=",0,(char*)NULL);
   G__memvar_setup((void*)(&kWarning),105,0,1,-1,-1,-1,1,"kWarning=",0,(char*)NULL);
   G__memvar_setup((void*)(&kError),105,0,1,-1,-1,-1,1,"kError=",0,(char*)NULL);
   G__memvar_setup((void*)(&kSysError),105,0,1,-1,-1,-1,1,"kSysError=",0,(char*)NULL);
   G__memvar_setup((void*)(&kFatal),105,0,1,-1,-1,-1,1,"kFatal=",0,(char*)NULL);
   G__memvar_setup((void*)(&gErrorIgnoreLevel),105,0,0,-1,-1,-1,1,"gErrorIgnoreLevel=",0,(char*)NULL);
   G__memvar_setup((void*)(&gSystem),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TSystem),-1,-1,1,"gSystem=",0,(char*)NULL);
   G__memvar_setup((void*)(&gRandom),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TRandom),-1,-1,1,"gRandom=",0,(char*)NULL);
   G__memvar_setup((void*)(&gBenchmark),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),-1,-1,1,"gBenchmark=",0,(char*)NULL);
   G__memvar_setup((void*)(&gVirtualX),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),-1,-1,1,"gVirtualX=",0,(char*)NULL);
   G__memvar_setup((void*)(&gVirtualGL),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL),-1,-1,1,"gVirtualGL=",0,(char*)NULL);
   G__memvar_setup((void*)(&gVirtualPS),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),-1,-1,1,"gVirtualPS=",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Base1() {
   G__lastifuncposition();

   G__memfunc_setup("operator+",919,G___operatorpL_2_6,117,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,0,2,1,1,0,
"u 'TString' - 1 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator+",919,G___operatorpL_3_6,117,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,0,2,1,1,0,
"u 'TString' - 1 - s C - - 0 - cs",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator+",919,G___operatorpL_4_6,117,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,0,2,1,1,0,
"C - - 0 - cs u 'TString' - 1 - s",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_5_6,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TString' - 1 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_6_6,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TString' - 1 - s1 C - - 0 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G___operatorgRgR_8_6,117,G__get_linked_tagnum(&G__G__Base1LN_istream),-1,1,2,1,1,0,
"u 'istream' - 1 - str u 'TString' - 1 - s",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G___operatorlElE_9_6,117,G__get_linked_tagnum(&G__G__Base1LN_ostream),-1,1,2,1,1,0,
"u 'ostream' - 1 - str u 'TString' - 1 - s",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Strip",530,G___Strip_6_7,67,-1,-1,0,1,1,1,0,"C - - 0 - str",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("StrDup",610,G___StrDup_7_7,67,-1,-1,0,1,1,1,0,"C - - 0 - str",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Compress",844,G___Compress_8_7,67,-1,-1,0,1,1,1,0,"C - - 0 - str",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("EscChar",665,G___EscChar_9_7,105,-1,-1,0,5,1,1,0,
"C - - 0 - src C - - 0 - dst "
"i - - 0 - dstlen C - - 0 - specchars "
"c - - 0 - escchar",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("UnEscChar",860,G___UnEscChar_0_8,105,-1,-1,0,5,1,1,0,
"C - - 0 - src C - - 0 - dst "
"i - - 0 - dstlen C - - 0 - specchars "
"c - - 0 - escchar",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G___operatornOeQ_1_8,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TString' - 1 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_1_9,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G___operatornOeQ_2_9,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_0_11,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TDatime' - 1 - d1 u 'TDatime' - 1 - d2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G___operatornOeQ_1_11,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TDatime' - 1 - d1 u 'TDatime' - 1 - d2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator<",936,G___operatorlE_2_11,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TDatime' - 1 - d1 u 'TDatime' - 1 - d2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator<=",997,G___operatorlEeQ_3_11,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TDatime' - 1 - d1 u 'TDatime' - 1 - d2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator>",938,G___operatorgR_4_11,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TDatime' - 1 - d1 u 'TDatime' - 1 - d2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator>=",999,G___operatorgReQ_5_11,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TDatime' - 1 - d1 u 'TDatime' - 1 - d2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Pad",277,G___Pad_1_20,85,G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),-1,1,0,1,1,0,"",(char*)NULL
,(void*)NULL,0);

   G__resetifuncposition();
}

/*********************************************************
* Class,struct,union,enum tag information setup
*********************************************************/
/* Setup class/struct taginfo */
G__linked_taginfo G__G__Base1LN_TClass = { "TClass" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBuffer = { "TBuffer" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TList = { "TList" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBrowser = { "TBrowser" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TObjArray = { "TObjArray" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TMethod = { "TMethod" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_EObjBits = { "EObjBits" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TExMap = { "TExMap" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBuffercLcLEMode = { "TBuffer::EMode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TBuffercLcLdA = { "TBuffer::$" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_istream = { "istream" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_ostream = { "ostream" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSeqCollection = { "TSeqCollection" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TDatime = { "TDatime" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TKey = { "TKey" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFile = { "TFile" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TDirectory = { "TDirectory" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TDirectorycLcLdA = { "TDirectory::$" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TColor = { "TColor" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TStyle = { "TStyle" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualPad = { "TVirtualPad" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TApplication = { "TApplication" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TROOT = { "TROOT" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TArrayI = { "TArrayI" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttMarker = { "TAttMarker" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttPad = { "TAttPad" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttAxis = { "TAttAxis" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttText = { "TAttText" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TStylecLcLEPaperSize = { "TStyle::EPaperSize" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TBrowserImp = { "TBrowserImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TContextMenu = { "TContextMenu" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBrowserTimer = { "TBrowserTimer" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TContextMenuImp = { "TContextMenuImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TOrdCollection = { "TOrdCollection" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TEnv = { "TEnv" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TEnvRec = { "TEnvRec" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAtt3D = { "TAtt3D" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFilecLcLERelativeTo = { "TFile::ERelativeTo" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TApplicationImp = { "TApplicationImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TCanvasImp = { "TCanvasImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TCanvas = { "TCanvas" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TControlBarImp = { "TControlBarImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TControlBar = { "TControlBar" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TGLViewerImp = { "TGLViewerImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TGuiFactory = { "TGuiFactory" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSignalHandler = { "TSignalHandler" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualFitter = { "TVirtualFitter" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSystem = { "TSystem" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSysEvtHandler = { "TSysEvtHandler" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFileHandler = { "TFileHandler" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TStopwatch = { "TStopwatch" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TRandom = { "TRandom" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBenchmark = { "TBenchmark" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TView = { "TView" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualX = { "TVirtualX" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualXcLcLEDrawMode = { "TVirtualX::EDrawMode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualXcLcLEBoxMode = { "TVirtualX::EBoxMode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualXcLcLETextMode = { "TVirtualX::ETextMode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualXcLcLETextSetMode = { "TVirtualX::ETextSetMode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TPadView3D = { "TPadView3D" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TH1F = { "TH1F" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFrame = { "TFrame" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualGL = { "TVirtualGL" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_EG3D2GLmode = { "EG3D2GLmode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TVirtualPS = { "TVirtualPS" , 99 , -1 };

/* Reset class/struct taginfo */
extern "C" void G__cpp_reset_tagtableG__Base1() {
  G__G__Base1LN_TClass.tagnum = -1 ;
  G__G__Base1LN_TBuffer.tagnum = -1 ;
  G__G__Base1LN_TList.tagnum = -1 ;
  G__G__Base1LN_TBrowser.tagnum = -1 ;
  G__G__Base1LN_TObjArray.tagnum = -1 ;
  G__G__Base1LN_TMethod.tagnum = -1 ;
  G__G__Base1LN_TTimer.tagnum = -1 ;
  G__G__Base1LN_EObjBits.tagnum = -1 ;
  G__G__Base1LN_TObject.tagnum = -1 ;
  G__G__Base1LN_TExMap.tagnum = -1 ;
  G__G__Base1LN_TBuffercLcLEMode.tagnum = -1 ;
  G__G__Base1LN_TBuffercLcLdA.tagnum = -1 ;
  G__G__Base1LN_istream.tagnum = -1 ;
  G__G__Base1LN_ostream.tagnum = -1 ;
  G__G__Base1LN_TString.tagnum = -1 ;
  G__G__Base1LN_TSeqCollection.tagnum = -1 ;
  G__G__Base1LN_TNamed.tagnum = -1 ;
  G__G__Base1LN_TDatime.tagnum = -1 ;
  G__G__Base1LN_TKey.tagnum = -1 ;
  G__G__Base1LN_TFile.tagnum = -1 ;
  G__G__Base1LN_TDirectory.tagnum = -1 ;
  G__G__Base1LN_TDirectorycLcLdA.tagnum = -1 ;
  G__G__Base1LN_TColor.tagnum = -1 ;
  G__G__Base1LN_TStyle.tagnum = -1 ;
  G__G__Base1LN_TVirtualPad.tagnum = -1 ;
  G__G__Base1LN_TApplication.tagnum = -1 ;
  G__G__Base1LN_TROOT.tagnum = -1 ;
  G__G__Base1LN_TArrayI.tagnum = -1 ;
  G__G__Base1LN_TAttFill.tagnum = -1 ;
  G__G__Base1LN_TAttLine.tagnum = -1 ;
  G__G__Base1LN_TAttMarker.tagnum = -1 ;
  G__G__Base1LN_TAttPad.tagnum = -1 ;
  G__G__Base1LN_TAttAxis.tagnum = -1 ;
  G__G__Base1LN_TAttText.tagnum = -1 ;
  G__G__Base1LN_TStylecLcLEPaperSize.tagnum = -1 ;
  G__G__Base1LN_TBrowserImp.tagnum = -1 ;
  G__G__Base1LN_TContextMenu.tagnum = -1 ;
  G__G__Base1LN_TBrowserTimer.tagnum = -1 ;
  G__G__Base1LN_TContextMenuImp.tagnum = -1 ;
  G__G__Base1LN_TOrdCollection.tagnum = -1 ;
  G__G__Base1LN_TEnv.tagnum = -1 ;
  G__G__Base1LN_TEnvRec.tagnum = -1 ;
  G__G__Base1LN_TAtt3D.tagnum = -1 ;
  G__G__Base1LN_TFilecLcLERelativeTo.tagnum = -1 ;
  G__G__Base1LN_TApplicationImp.tagnum = -1 ;
  G__G__Base1LN_TCanvasImp.tagnum = -1 ;
  G__G__Base1LN_TCanvas.tagnum = -1 ;
  G__G__Base1LN_TControlBarImp.tagnum = -1 ;
  G__G__Base1LN_TControlBar.tagnum = -1 ;
  G__G__Base1LN_TGLViewerImp.tagnum = -1 ;
  G__G__Base1LN_TGuiFactory.tagnum = -1 ;
  G__G__Base1LN_TSignalHandler.tagnum = -1 ;
  G__G__Base1LN_TVirtualFitter.tagnum = -1 ;
  G__G__Base1LN_TSystem.tagnum = -1 ;
  G__G__Base1LN_TSysEvtHandler.tagnum = -1 ;
  G__G__Base1LN_TFileHandler.tagnum = -1 ;
  G__G__Base1LN_TStopwatch.tagnum = -1 ;
  G__G__Base1LN_TRandom.tagnum = -1 ;
  G__G__Base1LN_TBenchmark.tagnum = -1 ;
  G__G__Base1LN_TView.tagnum = -1 ;
  G__G__Base1LN_TVirtualX.tagnum = -1 ;
  G__G__Base1LN_TVirtualXcLcLEDrawMode.tagnum = -1 ;
  G__G__Base1LN_TVirtualXcLcLEBoxMode.tagnum = -1 ;
  G__G__Base1LN_TVirtualXcLcLETextMode.tagnum = -1 ;
  G__G__Base1LN_TVirtualXcLcLETextSetMode.tagnum = -1 ;
  G__G__Base1LN_TPadView3D.tagnum = -1 ;
  G__G__Base1LN_TH1F.tagnum = -1 ;
  G__G__Base1LN_TFrame.tagnum = -1 ;
  G__G__Base1LN_TVirtualGL.tagnum = -1 ;
  G__G__Base1LN_EG3D2GLmode.tagnum = -1 ;
  G__G__Base1LN_TVirtualPS.tagnum = -1 ;
}

extern "C" void G__cpp_setup_tagtableG__Base1() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBuffer),sizeof(TBuffer),-1,0,"Buffer base class used for serializing objects",G__setup_memvarTBuffer,G__setup_memfuncTBuffer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowser),sizeof(TBrowser),-1,0,"ROOT Object Browser",G__setup_memvarTBrowser,G__setup_memfuncTBrowser);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_EObjBits),sizeof(int),-1,0,(char*)NULL,NULL,NULL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TDatime),sizeof(TDatime),-1,0,"Date and time 950130 124559",G__setup_memvarTDatime,G__setup_memfuncTDatime);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile),sizeof(TFile),-1,0,"ROOT file",G__setup_memvarTFile,G__setup_memfuncTFile);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory),sizeof(TDirectory),-1,0,"Describe directory structure in memory",G__setup_memvarTDirectory,G__setup_memfuncTDirectory);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TColor),sizeof(TColor),-1,0,"Color defined by RGB or HLS",G__setup_memvarTColor,G__setup_memfuncTColor);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TStyle),sizeof(TStyle),-1,0,"A collection of all graphics attributes",G__setup_memvarTStyle,G__setup_memfuncTStyle);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPad),sizeof(TVirtualPad),-1,-100,"Abstract base class for Pads and Canvases",G__setup_memvarTVirtualPad,G__setup_memfuncTVirtualPad);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication),sizeof(TApplication),-1,0,"GUI application singleton",G__setup_memvarTApplication,G__setup_memfuncTApplication);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFill),sizeof(TAttFill),-1,0,"Fill area attributes",G__setup_memvarTAttFill,G__setup_memfuncTAttFill);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttLine),sizeof(TAttLine),-1,0,"Line attributes",G__setup_memvarTAttLine,G__setup_memfuncTAttLine);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),sizeof(TAttMarker),-1,0,"Marker attributes",G__setup_memvarTAttMarker,G__setup_memfuncTAttMarker);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttPad),sizeof(TAttPad),-1,0,"Pad attributes",G__setup_memvarTAttPad,G__setup_memfuncTAttPad);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),sizeof(TAttAxis),-1,0,"Axis attributes",G__setup_memvarTAttAxis,G__setup_memfuncTAttAxis);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttText),sizeof(TAttText),-1,0,"Text attributes",G__setup_memvarTAttText,G__setup_memfuncTAttText);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),sizeof(TBrowserImp),-1,0,"ABC describing browser implementation protocol",G__setup_memvarTBrowserImp,G__setup_memfuncTBrowserImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenu),sizeof(TContextMenu),-1,0,"Context sensitive popup menu",G__setup_memvarTContextMenu,G__setup_memfuncTContextMenu);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),sizeof(TContextMenuImp),-1,0,"Context sensitive popup menu implementation",G__setup_memvarTContextMenuImp,G__setup_memfuncTContextMenuImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TEnv),sizeof(TEnv),-1,0,"Handle ROOT configuration resources",G__setup_memvarTEnv,G__setup_memfuncTEnv);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAtt3D),sizeof(TAtt3D),-1,0,"3D attributes",G__setup_memvarTAtt3D,G__setup_memfuncTAtt3D);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),sizeof(TApplicationImp),-1,0,"ABC describing application implementation protocol",G__setup_memvarTApplicationImp,G__setup_memfuncTApplicationImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),sizeof(TCanvasImp),-1,0,"ABC describing main window protocol",G__setup_memvarTCanvasImp,G__setup_memfuncTCanvasImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),sizeof(TControlBarImp),-1,0,"GUI independent controlbar abc",G__setup_memvarTControlBarImp,G__setup_memfuncTControlBarImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TGuiFactory),sizeof(TGuiFactory),-1,0,"Abstract factory for GUI components",G__setup_memvarTGuiFactory,G__setup_memfuncTGuiFactory);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualFitter),sizeof(TVirtualFitter),-1,16,"Abstract interface for fitting",G__setup_memvarTVirtualFitter,G__setup_memfuncTVirtualFitter);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),sizeof(TFileHandler),-1,0,"Handles events on file descriptors",G__setup_memvarTFileHandler,G__setup_memfuncTFileHandler);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),sizeof(TBenchmark),-1,0,"ROOT utility to help benchmarking applications",G__setup_memvarTBenchmark,G__setup_memfuncTBenchmark);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TView),sizeof(TView),-1,0,"3-D View",G__setup_memvarTView,G__setup_memfuncTView);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualX),sizeof(TVirtualX),-1,0,"ABC defining a generic interface to graphics system",G__setup_memvarTVirtualX,G__setup_memfuncTVirtualX);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualGL),sizeof(TVirtualGL),-1,0,(char*)NULL,G__setup_memvarTVirtualGL,G__setup_memfuncTVirtualGL);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TVirtualPS),sizeof(TVirtualPS),-1,9,"Abstract interface to a PostScript driver",G__setup_memvarTVirtualPS,G__setup_memfuncTVirtualPS);
}
extern "C" void G__cpp_setupG__Base1() {
  G__check_setup_version(51111,"G__cpp_setupG__Base1()");
  G__set_cpp_environmentG__Base1();
  G__cpp_setup_tagtableG__Base1();

  G__cpp_setup_inheritanceG__Base1();

  G__cpp_setup_typetableG__Base1();

  G__cpp_setup_memvarG__Base1();

  G__cpp_setup_memfuncG__Base1();
  G__cpp_setup_globalG__Base1();
  G__cpp_setup_funcG__Base1();

   if(0==G__getsizep2memfunc()) G__get_sizep2memfuncG__Base1();
  return;
}
class G__cpp_setup_initG__Base1 {
  public:
    G__cpp_setup_initG__Base1() { G__add_setup_func("G__Base1",&G__cpp_setupG__Base1); }
   ~G__cpp_setup_initG__Base1() { G__remove_setup_func("G__Base1"); }
};
G__cpp_setup_initG__Base1 G__cpp_setup_initializerG__Base1;

