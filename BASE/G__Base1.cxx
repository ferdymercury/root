//*CMZ :  2.20/05 13/12/98  10.55.18  by  Rene Brun
//*-- Author :    Rene Brun   13/12/98
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
extern "C" {
#define G__ANSIHEADER
#include "G__ci.h"
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
#include "TAttAxis.h"
#include "TAttFunc.h"
#include "TAttHist.h"
#include "TAttLine.h"
#include "TAttMarker.h"
#include "TAttStat.h"
#include "TAttText.h"
#include "TAxis.h"
#include "TBaseClass.h"
#include "TBuffer.h"
#include "TClass.h"
#include "TDataMember.h"
#include "TDataType.h"
#include "TDatime.h"
#include "TDirectory.h"
#include "TEnv.h"
#include "TFile.h"
#include "TFormula.h"
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

#ifndef G__MEMFUNCBODY
#endif

extern G__linked_taginfo G__G__Base1LN_TClass;
extern G__linked_taginfo G__G__Base1LN_TBuffer;
extern G__linked_taginfo G__G__Base1LN_TList;
extern G__linked_taginfo G__G__Base1LN_TBrowser;
extern G__linked_taginfo G__G__Base1LN_TObjArray;
extern G__linked_taginfo G__G__Base1LN_TTimer;
extern G__linked_taginfo G__G__Base1LN_TObject;
extern G__linked_taginfo G__G__Base1LN_TObjectcLcLdA;
extern G__linked_taginfo G__G__Base1LN_TMap;
extern G__linked_taginfo G__G__Base1LN_TBuffercLcLEMode;
extern G__linked_taginfo G__G__Base1LN_istream;
extern G__linked_taginfo G__G__Base1LN_ostream;
extern G__linked_taginfo G__G__Base1LN_TString;
extern G__linked_taginfo G__G__Base1LN_TNamed;
extern G__linked_taginfo G__G__Base1LN_TDatime;
extern G__linked_taginfo G__G__Base1LN_TKey;
extern G__linked_taginfo G__G__Base1LN_TFile;
extern G__linked_taginfo G__G__Base1LN_TDirectory;
extern G__linked_taginfo G__G__Base1LN_TApplication;
extern G__linked_taginfo G__G__Base1LN_TROOT;
extern G__linked_taginfo G__G__Base1LN_TArrayF;
extern G__linked_taginfo G__G__Base1LN_TAttFill;
extern G__linked_taginfo G__G__Base1LN_TAttAxis;
extern G__linked_taginfo G__G__Base1LN_TAttFunc;
extern G__linked_taginfo G__G__Base1LN_TAttHist;
extern G__linked_taginfo G__G__Base1LN_TAttLine;
extern G__linked_taginfo G__G__Base1LN_TAttMarker;
extern G__linked_taginfo G__G__Base1LN_TAttStat;
extern G__linked_taginfo G__G__Base1LN_TAttText;
extern G__linked_taginfo G__G__Base1LN_TAxis;
extern G__linked_taginfo G__G__Base1LN_TOrdCollection;
extern G__linked_taginfo G__G__Base1LN_TEnv;
extern G__linked_taginfo G__G__Base1LN_TEnvRec;
extern G__linked_taginfo G__G__Base1LN_TFilecLcLERelativeTo;
extern G__linked_taginfo G__G__Base1LN_TFormula;
extern G__linked_taginfo G__G__Base1LN_TApplicationImp;
extern G__linked_taginfo G__G__Base1LN_TSignalHandler;
extern G__linked_taginfo G__G__Base1LN_TBrowserImp;
extern G__linked_taginfo G__G__Base1LN_TCanvas;
extern G__linked_taginfo G__G__Base1LN_TCanvasImp;
extern G__linked_taginfo G__G__Base1LN_TContextMenu;
extern G__linked_taginfo G__G__Base1LN_TContextMenuImp;
extern G__linked_taginfo G__G__Base1LN_TControlBar;
extern G__linked_taginfo G__G__Base1LN_TControlBarImp;
extern G__linked_taginfo G__G__Base1LN_TSystem;
extern G__linked_taginfo G__G__Base1LN_TSysEvtHandler;
extern G__linked_taginfo G__G__Base1LN_TFileHandler;
extern G__linked_taginfo G__G__Base1LN_TStopwatch;
extern G__linked_taginfo G__G__Base1LN_TRandom;
extern G__linked_taginfo G__G__Base1LN_TBenchmark;
/********************************************************
* G__Base1.cxx
********************************************************/

#ifdef G__MEMTEST
#undef malloc
#endif


extern "C" void G__set_cpp_environmentG__Base1() {
  G__add_macro("__MAKECINT__");
  G__add_compiledheader("TROOT.h");
  G__add_compiledheader("TMemberInspector.h");
  G__add_compiledheader("TArrayC.h");
  G__add_compiledheader("TArrayD.h");
  G__add_compiledheader("TArrayF.h");
  G__add_compiledheader("TArrayI.h");
  G__add_compiledheader("TArrayL.h");
  G__add_compiledheader("TArrayS.h");
  G__add_compiledheader("TAttFill.h");
  G__add_compiledheader("TAttAxis.h");
  G__add_compiledheader("TAttFunc.h");
  G__add_compiledheader("TAttHist.h");
  G__add_compiledheader("TAttLine.h");
  G__add_compiledheader("TAttMarker.h");
  G__add_compiledheader("TAttStat.h");
  G__add_compiledheader("TAttText.h");
  G__add_compiledheader("TAxis.h");
  G__add_compiledheader("TBaseClass.h");
  G__add_compiledheader("TBuffer.h");
  G__add_compiledheader("TClass.h");
  G__add_compiledheader("TDataMember.h");
  G__add_compiledheader("TDataType.h");
  G__add_compiledheader("TDatime.h");
  G__add_compiledheader("TDirectory.h");
  G__add_compiledheader("TEnv.h");
  G__add_compiledheader("TFile.h");
  G__add_compiledheader("TFormula.h");
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
}
extern "C" int G__cpp_dllrevG__Base1() { return(51111); }

/*********************************************************
* Member function Interface Method
*********************************************************/

/* TBuffer */
static int G__TBuffer_TBuffer_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBuffer_MapObject_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->MapObject((const TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Reset_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ResetMap_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ResetMap();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetReadMode_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetReadMode();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetReadParam_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetReadParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetWriteMode_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetWriteMode();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetWriteParam_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetWriteParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetBufferOffset_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBuffer_Buffer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->Buffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_BufferSize_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->BufferSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_DetachBuffer_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->DetachBuffer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Length_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->Length());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_IsReading_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TBuffer*)(G__getstructoffset()))->IsReading());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_IsWriting_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TBuffer*)(G__getstructoffset()))->IsWriting());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadBuf_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadBuf((void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteBuf_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteBuf((const void*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadString_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->ReadString((Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteString_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteString((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadVersion_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBuffer*)(G__getstructoffset()))->ReadVersion());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteVersion_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteVersion((const TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadClass_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBuffer_WriteClass_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteClass((const TClass*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadObject_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->ReadObject((const TClass*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteObject_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteObject((const TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(Char_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(UChar_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(Short_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(UShort_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(Int_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(UInt_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(Long_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(ULong_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(Float_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadArray_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadArray(*(Double_t**)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Char_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((UChar_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Short_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((UShort_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Int_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((UInt_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Long_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((ULong_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Float_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadStaticArray_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ReadStaticArray((Double_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const UChar_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Short_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const UShort_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const UInt_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Long_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const ULong_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteArray_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteArray((const Double_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_3_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_4_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((UChar_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Short_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((UShort_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((UInt_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Long_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_0_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((ULong_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ReadFastArray_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ReadFastArray((Double_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_3_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Char_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_4_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const UChar_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_5_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Short_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_6_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const UShort_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_7_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Int_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_8_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const UInt_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Long_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const ULong_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_1_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Float_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_WriteFastArray_2_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->WriteFastArray((const Double_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_3_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(Char_t*)libp->para[0].ref:G__Mchar(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(UChar_t*)libp->para[0].ref:G__Muchar(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_5_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(Short_t*)libp->para[0].ref:G__Mshort(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_6_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(UShort_t*)libp->para[0].ref:G__Mushort(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_7_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_8_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(UInt_t*)libp->para[0].ref:G__Muint(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_9_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(Long_t*)libp->para[0].ref:G__Mlong(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_0_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(ULong_t*)libp->para[0].ref:G__Mulong(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_1_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(Float_t*)libp->para[0].ref:G__Mfloat(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_2_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>(libp->para[0].ref?*(Double_t*)libp->para[0].ref:G__Mdouble(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorgRgR_3_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator>>((Char_t*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Char_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((UChar_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_6_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Short_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_7_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((UShort_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_8_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Int_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_9_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((UInt_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_0_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Long_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_1_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((ULong_t)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_2_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Float_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_3_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((Double_t)G__double(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_operatorlElE_4_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TBuffer& obj=((TBuffer*)(G__getstructoffset()))->operator<<((const Char_t*)G__int(libp->para[0]));
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetGlobalReadParam_5_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetGlobalReadParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_SetGlobalWriteParam_6_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->SetGlobalWriteParam((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_GetGlobalReadParam_7_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->GetGlobalReadParam());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_GetGlobalWriteParam_8_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->GetGlobalWriteParam());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_DeclFileName_9_10(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_DeclFileLine_0_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ImplFileName_1_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBuffer*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ImplFileLine_2_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBuffer*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Class_Version_3_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBuffer*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Class_4_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Dictionary_5_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_IsA_6_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBuffer*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_ShowMembers_7_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBuffer_Streamer_8_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBuffer*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBuffer_wATBuffer_9_11(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TDatime */
static int G__TDatime_TDatime_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDatime *p=NULL;
   if(G__getaryconstruct()) p=new TDatime[G__getaryconstruct()];
   else                    p=new TDatime;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_AsString_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDatime*)(G__getstructoffset()))->AsString());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Convert_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TDatime*)(G__getstructoffset()))->Convert());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Copy_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Copy(*(TDatime*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Get_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,104,(long)((TDatime*)(G__getstructoffset()))->Get());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_GetDate_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->GetDate());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_GetTime_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->GetTime());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_FillBuffer_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->FillBuffer(*(char**)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Print_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDatime_ReadBuffer_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->ReadBuffer(*(char**)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Set_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Set();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Set_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Set((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Set_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Set((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Sizeof_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_GetDateTime_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->GetDateTime((UInt_t)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(Int_t*)libp->para[2].ref:G__Mint(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_DeclFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDatime*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_DeclFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ImplFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDatime*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ImplFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDatime*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Class_Version_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDatime*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Class_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDatime*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Dictionary_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_IsA_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDatime*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_ShowMembers_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDatime_Streamer_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDatime*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TDatime_TDatime_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TDatime *p;
   if(1!=libp->paran) ;
   p=new TDatime(*(TDatime*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDatime);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDatime_wATDatime_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
static int G__TFile_TFile_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFile *p=NULL;
   if(G__getaryconstruct()) p=new TFile[G__getaryconstruct()];
   else                    p=new TFile;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_TFile_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFile *p=NULL;
   switch(libp->paran) {
   case 4:
      p = new TFile(
(const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      p = new TFile(
(const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TFile((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1]));
      break;
   case 1:
      p = new TFile((const Text_t*)G__int(libp->para[0]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_TFile_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFile *p=NULL;
      p = new TFile(*(TFile*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFile);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Close_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Delete_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Delete((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Delete();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Draw_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_FillBuffer_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->FillBuffer(*(char**)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Flush_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Flush();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetBestBuffer_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetBestBuffer());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetCompressionLevel_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetCompressionLevel());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetCompressionFactor_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TFile*)(G__getstructoffset()))->GetCompressionFactor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetEND_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetEND());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetFd_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetFd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetListOfFree_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->GetListOfFree());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetNfree_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetNfree());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetOption_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFile*)(G__getstructoffset()))->GetOption());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetBytesRead_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFile*)(G__getstructoffset()))->GetBytesRead());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetBytesWritten_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFile*)(G__getstructoffset()))->GetBytesWritten());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetVersion_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->GetVersion());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_IsOpen_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFile*)(G__getstructoffset()))->IsOpen());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ls_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_MakeFree_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->MakeFree((Seek_t)G__int(libp->para[0]),(Seek_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Map_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Map();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Paint_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_Print_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_ReadBuffer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFile*)(G__getstructoffset()))->ReadBuffer((char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ReadFree_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->ReadFree();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Recover_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Recover();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Seek_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_SetCompressionLevel_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_SetEND_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SetEND((Seek_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetOption_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_Sizeof_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SumBuffer_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->SumBuffer((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_WriteBuffer_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFile*)(G__getstructoffset()))->WriteBuffer((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Write_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write((const Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write((const Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Write();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_WriteFree_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->WriteFree();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_WriteHeader_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->WriteHeader();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Open_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])));
      break;
   case 3:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])
,(const Text_t*)G__int(libp->para[2])));
      break;
   case 2:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const Text_t*)G__int(libp->para[0]),(Option_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Open((const Text_t*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetFileBytesRead_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFile*)(G__getstructoffset()))->GetFileBytesRead());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_GetFileBytesWritten_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFile*)(G__getstructoffset()))->GetFileBytesWritten());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_SetFileBytesRead_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_SetFileBytesWritten_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TFile_DeclFileName_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFile*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_DeclFileLine_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ImplFileName_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFile*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ImplFileLine_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFile*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Class_Version_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFile*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Class_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Dictionary_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_IsA_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFile*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_ShowMembers_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFile_Streamer_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFile*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFile_wATFile_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
static int G__TDirectory_TDirectory_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDirectory *p=NULL;
   if(G__getaryconstruct()) p=new TDirectory[G__getaryconstruct()];
   else                    p=new TDirectory;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_TDirectory_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDirectory *p=NULL;
   switch(libp->paran) {
   case 3:
      p = new TDirectory(
(const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Option_t*)G__int(libp->para[2]));
      break;
   case 2:
      p = new TDirectory((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
      break;
   }
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_TDirectory_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TDirectory *p=NULL;
      p = new TDirectory(*(TDirectory*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TDirectory);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Append_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Append((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_AppendKey_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->AppendKey((TKey*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Browse_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Browse((TBrowser*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Build_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Build();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Clear_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_Close_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_Copy_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_cd_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->cd((const Text_t*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->cd());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DeleteAll_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_Delete_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Delete((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Delete();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Draw_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_FillBuffer_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->FillBuffer(*(char**)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Get_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->Get((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetFile_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetFile());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetKey_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetKey((const Text_t*)G__int(libp->para[0]),(const Short_t)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetKey((const Text_t*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetList_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetList());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetListOfKeys_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetListOfKeys());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetMother_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->GetMother());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetNkeys_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetNkeys());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetSeekDir_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetSeekDir());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetSeekParent_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetSeekParent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetSeekKeys_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->GetSeekKeys());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_GetPath_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDirectory*)(G__getstructoffset()))->GetPath());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsFolder_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->IsFolder());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsModified_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->IsModified());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsWritable_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->IsWritable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ls_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_mkdir_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->mkdir((const Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->mkdir((const Text_t*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Paint_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_Print_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_Purge_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_pwd_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->pwd();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ReadAll_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_ReadKeys_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ReadKeys();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_RecursiveRemove_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Save_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Save();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_SaveSelf_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TDirectory_SetModified_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->SetModified();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_SetMother_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->SetMother((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Sizeof_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->Sizeof());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Write_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write((const Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write((const Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write((const Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Write();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_WriteDirHeader_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->WriteDirHeader();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_WriteKeys_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->WriteKeys();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Cd_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TDirectory*)(G__getstructoffset()))->Cd((const Text_t*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DecodeNameCycle_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->DecodeNameCycle((const Text_t*)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1])
,libp->para[2].ref?*(Short_t*)libp->para[2].ref:G__Mshort(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_EncodeNameCycle_1_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->EncodeNameCycle((Text_t*)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1])
,(Short_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DeclFileName_2_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDirectory*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_DeclFileLine_3_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ImplFileName_4_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TDirectory*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ImplFileLine_5_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TDirectory*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Class_Version_6_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TDirectory*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Class_7_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Dictionary_8_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_IsA_9_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TDirectory*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_ShowMembers_0_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TDirectory_Streamer_1_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TDirectory*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TDirectory_wATDirectory_2_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TApplication */
static int G__TApplication_TApplication_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TApplication_GetOptions_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->GetOptions((int*)G__int(libp->para[0]),(char**)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetSignalHandler_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->GetSignalHandler());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_HandleIdleTimer_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->HandleIdleTimer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_HandleTermInput_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->HandleTermInput();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Init_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Init();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ProcessLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ProcessLine((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ProcessFile_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ProcessFile((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Run_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TApplication_SetIdleTimer_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->SetIdleTimer((UInt_t)G__int(libp->para[0]),(const Text_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_RemoveIdleTimer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->RemoveIdleTimer();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetIdleCommand_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->GetIdleCommand());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_StartIdleing_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->StartIdleing();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_StopIdleing_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->StopIdleing();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Terminate_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TApplication_ApplicationName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->ApplicationName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Show_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Hide_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_GetApplicationImp_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->GetApplicationImp());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Iconify_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_IsCmdThread_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplication*)(G__getstructoffset()))->IsCmdThread());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Open_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Open();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Raise_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Raise();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Lower_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Lower();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Argc_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplication*)(G__getstructoffset()))->Argc());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Argv_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->Argv());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Argv_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->Argv((int)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_NoLogOpt_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplication*)(G__getstructoffset()))->NoLogOpt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_QuitOpt_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplication*)(G__getstructoffset()))->QuitOpt());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_InputFiles_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->InputFiles());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ClearInputFiles_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ClearInputFiles();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ReturnFromRun_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplication*)(G__getstructoffset()))->ReturnFromRun());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_CreateApplication_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->CreateApplication();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_DeclFileName_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_DeclFileLine_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplication*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ImplFileName_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplication*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ImplFileLine_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplication*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Class_Version_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TApplication*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Class_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Dictionary_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_IsA_6_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplication*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_ShowMembers_7_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplication_Streamer_8_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplication*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TApplication_TApplication_9_4(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TApplication *p;
   if(1!=libp->paran) ;
   p=new TApplication(*(TApplication*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplication);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TApplication_wATApplication_0_5(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
static int G__TAttFill_TAttFill_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttFill *p=NULL;
   if(G__getaryconstruct()) p=new TAttFill[G__getaryconstruct()];
   else                    p=new TAttFill;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFill);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_TAttFill_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttFill *p=NULL;
      p = new TAttFill((Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFill);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Copy(*(TAttFill*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_GetFillColor_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFill*)(G__getstructoffset()))->GetFillColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_GetFillStyle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFill*)(G__getstructoffset()))->GetFillStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_IsTransparent_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TAttFill*)(G__getstructoffset()))->IsTransparent());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Modify_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Reset_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SaveFillAttributes_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 4:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SaveFillAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SaveFillAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SaveFillAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SetFillAttributes_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SetFillAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SetFillColor_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SetFillColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_SetFillStyle_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->SetFillStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_DeclFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFill*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_DeclFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFill*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ImplFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFill*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ImplFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFill*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Class_Version_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFill*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Class_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFill*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Dictionary_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_IsA_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFill*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_ShowMembers_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFill_Streamer_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFill*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttFill_TAttFill_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttFill *p;
   if(1!=libp->paran) ;
   p=new TAttFill(*(TAttFill*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFill);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttFill_wATAttFill_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TAttAxis */
static int G__TAttAxis_TAttAxis_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttAxis *p=NULL;
   if(G__getaryconstruct()) p=new TAttAxis[G__getaryconstruct()];
   else                    p=new TAttAxis;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Copy_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Copy(*(TAttAxis*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetNdivisions_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttAxis*)(G__getstructoffset()))->GetNdivisions());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetAxisColor_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->GetAxisColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelColor_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->GetLabelColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelFont_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->GetLabelFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelOffset_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetLabelOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetLabelSize_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetLabelSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetTitleOffset_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetTitleOffset());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetTitleSize_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetTitleSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_GetTickLength_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttAxis*)(G__getstructoffset()))->GetTickLength());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Reset_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SaveAttributes_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->SaveAttributes(*(ofstream*)libp->para[0].ref,(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_SetNdivisions_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetAxisColor_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetLabelColor_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetLabelFont_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetLabelOffset_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetLabelSize_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetTickLength_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetTitleOffset_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_SetTitleSize_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttAxis_DeclFileName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttAxis*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_DeclFileLine_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttAxis*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ImplFileName_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttAxis*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ImplFileLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttAxis*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Class_Version_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttAxis*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Class_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttAxis*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Dictionary_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_IsA_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttAxis*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_ShowMembers_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttAxis_Streamer_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttAxis*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttAxis_TAttAxis_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttAxis *p;
   if(1!=libp->paran) ;
   p=new TAttAxis(*(TAttAxis*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttAxis_wATAttAxis_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TAttFunc */
static int G__TAttFunc_TAttFunc_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttFunc *p=NULL;
   if(G__getaryconstruct()) p=new TAttFunc[G__getaryconstruct()];
   else                    p=new TAttFunc;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFunc);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_TAttFunc_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttFunc *p=NULL;
      p = new TAttFunc(
(Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Width_t)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFunc);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->Copy(*(TAttFunc*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_GetFuncColor_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFunc*)(G__getstructoffset()))->GetFuncColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_GetFuncStyle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFunc*)(G__getstructoffset()))->GetFuncStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_GetFuncWidth_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFunc*)(G__getstructoffset()))->GetFuncWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_Reset_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_SetFuncColor_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->SetFuncColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_SetFuncStyle_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->SetFuncStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_SetFuncWidth_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->SetFuncWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFunc*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFunc*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttFunc*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttFunc*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttFunc*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFunc*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttFunc*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttFunc_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttFunc*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttFunc_TAttFunc_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttFunc *p;
   if(1!=libp->paran) ;
   p=new TAttFunc(*(TAttFunc*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttFunc);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttFunc_wATAttFunc_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttFunc *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttFunc *)((G__getstructoffset())+sizeof(TAttFunc)*i);
   else  delete (TAttFunc *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttHist */
static int G__TAttHist_TAttHist_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttHist *p=NULL;
   if(G__getaryconstruct()) p=new TAttHist[G__getaryconstruct()];
   else                    p=new TAttHist;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttHist);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_TAttHist_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttHist *p=NULL;
      p = new TAttHist(
(Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Width_t)G__int(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttHist);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Copy(*(TAttHist*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_GetHistColor_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttHist*)(G__getstructoffset()))->GetHistColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_GetHistStyle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttHist*)(G__getstructoffset()))->GetHistStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_GetHistWidth_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttHist*)(G__getstructoffset()))->GetHistWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Print_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Reset_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_SetHistColor_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->SetHistColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_SetHistStyle_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->SetHistStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_SetHistWidth_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->SetHistWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttHist*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttHist*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttHist*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttHist*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttHist*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttHist*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttHist*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttHist_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttHist*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttHist_TAttHist_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttHist *p;
   if(1!=libp->paran) ;
   p=new TAttHist(*(TAttHist*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttHist);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttHist_wATAttHist_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttHist *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttHist *)((G__getstructoffset())+sizeof(TAttHist)*i);
   else  delete (TAttHist *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttLine */
static int G__TAttLine_TAttLine_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttLine *p=NULL;
   if(G__getaryconstruct()) p=new TAttLine[G__getaryconstruct()];
   else                    p=new TAttLine;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttLine);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_TAttLine_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttLine_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Copy(*(TAttLine*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_DistancetoLine_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLine*)(G__getstructoffset()))->DistancetoLine((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_GetLineColor_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->GetLineColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_GetLineStyle_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->GetLineStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_GetLineWidth_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->GetLineWidth());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Modify_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Reset_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SaveLineAttributes_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SaveLineAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineAttributes_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineColor_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineStyle_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_SetLineWidth_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->SetLineWidth((Width_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_DeclFileName_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttLine*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_DeclFileLine_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLine*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ImplFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttLine*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ImplFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttLine*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Class_Version_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttLine*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Class_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttLine*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Dictionary_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_IsA_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttLine*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_ShowMembers_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttLine_Streamer_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttLine*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttLine_TAttLine_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttLine *p;
   if(1!=libp->paran) ;
   p=new TAttLine(*(TAttLine*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttLine);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttLine_wATAttLine_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
static int G__TAttMarker_TAttMarker_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttMarker *p=NULL;
   if(G__getaryconstruct()) p=new TAttMarker[G__getaryconstruct()];
   else                    p=new TAttMarker;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_TAttMarker_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttMarker_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Copy(*(TAttMarker*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_GetMarkerColor_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarker*)(G__getstructoffset()))->GetMarkerColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_GetMarkerStyle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarker*)(G__getstructoffset()))->GetMarkerStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_GetMarkerSize_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttMarker*)(G__getstructoffset()))->GetMarkerSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Modify_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Reset_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SaveMarkerAttributes_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 5:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Int_t)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SaveMarkerAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SetMarkerAttributes_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->SetMarkerAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_SetMarkerColor_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttMarker_SetMarkerStyle_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttMarker_SetMarkerSize_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttMarker_DeclFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttMarker*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_DeclFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttMarker*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ImplFileName_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttMarker*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ImplFileLine_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttMarker*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Class_Version_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttMarker*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Class_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttMarker*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Dictionary_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_IsA_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttMarker*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_ShowMembers_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttMarker_Streamer_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttMarker*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttMarker_TAttMarker_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttMarker *p;
   if(1!=libp->paran) ;
   p=new TAttMarker(*(TAttMarker*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttMarker);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttMarker_wATAttMarker_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TAttStat */
static int G__TAttStat_TAttStat_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttStat *p=NULL;
   if(G__getaryconstruct()) p=new TAttStat[G__getaryconstruct()];
   else                    p=new TAttStat;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttStat);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_TAttStat_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttStat *p=NULL;
      p = new TAttStat(
(Color_t)G__int(libp->para[0]),(Style_t)G__int(libp->para[1])
,(Float_t)G__double(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Float_t)G__double(libp->para[4]),(Float_t)G__double(libp->para[5]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttStat);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->Copy(*(TAttStat*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_GetStatColor_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttStat*)(G__getstructoffset()))->GetStatColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_GetStatStyle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttStat*)(G__getstructoffset()))->GetStatStyle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_GetStatX_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttStat*)(G__getstructoffset()))->GetStatX());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_GetStatY_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttStat*)(G__getstructoffset()))->GetStatY());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_GetStatW_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttStat*)(G__getstructoffset()))->GetStatW());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_GetStatH_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttStat*)(G__getstructoffset()))->GetStatH());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_Reset_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_SetStatColor_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->SetStatColor((Color_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_SetStatStyle_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->SetStatStyle((Style_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_SetStatX_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->SetStatX((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_SetStatY_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->SetStatY((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_SetStatW_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->SetStatW((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_SetStatH_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->SetStatH((Float_t)G__double(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_DeclFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttStat*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_DeclFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttStat*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_ImplFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttStat*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_ImplFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttStat*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_Class_Version_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttStat*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_Class_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttStat*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_Dictionary_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_IsA_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttStat*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_ShowMembers_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttStat_Streamer_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttStat*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttStat_TAttStat_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttStat *p;
   if(1!=libp->paran) ;
   p=new TAttStat(*(TAttStat*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttStat);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttStat_wATAttStat_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAttStat *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAttStat *)((G__getstructoffset())+sizeof(TAttStat)*i);
   else  delete (TAttStat *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TAttText */
static int G__TAttText_TAttText_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAttText *p=NULL;
   if(G__getaryconstruct()) p=new TAttText[G__getaryconstruct()];
   else                    p=new TAttText;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttText);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_TAttText_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttText_Copy_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Copy(*(TAttText*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextAlign_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->GetTextAlign());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextAngle_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttText*)(G__getstructoffset()))->GetTextAngle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextColor_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->GetTextColor());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextFont_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->GetTextFont());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_GetTextSize_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAttText*)(G__getstructoffset()))->GetTextSize());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Modify_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Modify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Reset_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Reset((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Reset();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SaveTextAttributes_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 7:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(
*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5])
,(Float_t)G__double(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]),(Int_t)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3])
,(Int_t)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]),(Float_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SaveTextAttributes(*(ofstream*)libp->para[0].ref,(const Text_t*)G__int(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextAttributes_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->SetTextAttributes();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_SetTextAlign_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttText_SetTextAngle_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttText_SetTextColor_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttText_SetTextFont_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttText_SetTextSize_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TAttText_DeclFileName_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttText*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_DeclFileLine_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttText*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ImplFileName_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAttText*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ImplFileLine_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAttText*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Class_Version_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAttText*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Class_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttText*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Dictionary_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_IsA_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAttText*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_ShowMembers_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAttText_Streamer_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAttText*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TAttText_TAttText_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TAttText *p;
   if(1!=libp->paran) ;
   p=new TAttText(*(TAttText*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAttText);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAttText_wATAttText_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TAxis */
static int G__TAxis_TAxis_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAxis *p=NULL;
   if(G__getaryconstruct()) p=new TAxis[G__getaryconstruct()];
   else                    p=new TAxis;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_TAxis_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAxis *p=NULL;
      p = new TAxis(
(Int_t)G__int(libp->para[0]),(Axis_t)G__double(libp->para[1])
,(Axis_t)G__double(libp->para[2]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_TAxis_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAxis *p=NULL;
      p = new TAxis((Int_t)G__int(libp->para[0]),(Axis_t*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_TAxis_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TAxis *p=NULL;
      p = new TAxis(*(TAxis*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TAxis);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Copy_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_DistancetoPrimitive_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->DistancetoPrimitive((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Draw_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Draw((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Draw();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_DrawAxis_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->DrawAxis((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_ExecuteEvent_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->ExecuteEvent((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1])
,(Int_t)G__int(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_FindBin_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->FindBin((Axis_t)G__double(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetBinCenter_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAxis*)(G__getstructoffset()))->GetBinCenter((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetBinLabel_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAxis*)(G__getstructoffset()))->GetBinLabel((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetBinLowEdge_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAxis*)(G__getstructoffset()))->GetBinLowEdge((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetBinWidth_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAxis*)(G__getstructoffset()))->GetBinWidth((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetCenter_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->GetCenter((Axis_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetLabel_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->GetLabel((Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetLowEdge_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->GetLowEdge((Axis_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetNbins_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->GetNbins());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetTitle_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAxis*)(G__getstructoffset()))->GetTitle());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetXbins_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAxis*)(G__getstructoffset()))->GetXbins());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetFirst_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->GetFirst());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetLast_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->GetLast());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetXmin_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAxis*)(G__getstructoffset()))->GetXmin());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_GetXmax_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TAxis*)(G__getstructoffset()))->GetXmax());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_ls_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->ls((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->ls();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Paint_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Paint((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Paint();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_PaintAxis_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->PaintAxis((Coord_t)G__double(libp->para[0]),(Coord_t)G__double(libp->para[1])
,(Coord_t)G__double(libp->para[2]),(Coord_t)G__double(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Print_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Set_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Set((Int_t)G__int(libp->para[0]),(Axis_t)G__double(libp->para[1])
,(Axis_t)G__double(libp->para[2]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Set_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Set((Int_t)G__int(libp->para[0]),(Axis_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_SetBinLabel_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->SetBinLabel((Int_t)G__int(libp->para[0]),(Text_t*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_SetLabel_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->SetLabel((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_SetLimits_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->SetLimits((Axis_t)G__double(libp->para[0]),(Axis_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_SetRange_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->SetRange((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->SetRange((Int_t)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->SetRange();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_DeclFileName_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAxis*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_DeclFileLine_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_ImplFileName_7_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TAxis*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_ImplFileLine_8_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TAxis*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Class_Version_9_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TAxis*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Class_0_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAxis*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Dictionary_1_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_IsA_2_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TAxis*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_ShowMembers_3_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TAxis_Streamer_4_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TAxis*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TAxis_wATAxis_5_4(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TAxis *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TAxis *)((G__getstructoffset())+sizeof(TAxis)*i);
   else  delete (TAxis *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TEnv */
static int G__TEnv_TEnv_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TEnv_GetTable_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->GetTable());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Defined_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TEnv*)(G__getstructoffset()))->Defined((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetValue_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEnv*)(G__getstructoffset()))->GetValue((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetValue_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEnv*)(G__getstructoffset()))->GetValue((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_GetValue_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->GetValue((const char*)G__int(libp->para[0]),(TObject*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TEnv_SetValue_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref
,(EEnvLevel)G__int(libp->para[2]),(const char*)G__int(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TEnv_SetValue_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(int)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SetValue_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SetValue((const char*)G__int(libp->para[0]),(double)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Lookup_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->Lookup((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ReadFile_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->ReadFile((const char*)G__int(libp->para[0]),(EEnvLevel)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Save_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Save();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_SaveLevel_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->SaveLevel((EEnvLevel)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Print_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TEnv_PrintEnv_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TEnv_DeclFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEnv*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_DeclFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEnv*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ImplFileName_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TEnv*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ImplFileLine_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TEnv*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Class_Version_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TEnv*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Class_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Dictionary_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_IsA_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TEnv*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_ShowMembers_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TEnv_Streamer_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TEnv*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TEnv_TEnv_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TEnv *p;
   if(1!=libp->paran) ;
   p=new TEnv(*(TEnv*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TEnv);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TEnv_wATEnv_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TFormula */
static int G__TFormula_TFormula_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFormula *p=NULL;
   if(G__getaryconstruct()) p=new TFormula[G__getaryconstruct()];
   else                    p=new TFormula;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFormula);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_TFormula_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFormula *p=NULL;
      p = new TFormula((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFormula);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_TFormula_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFormula *p=NULL;
      p = new TFormula(*(TFormula*)libp->para[0].ref);
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFormula);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Analyze_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Analyze((const char*)G__int(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Compile_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->Compile((const char*)G__int(libp->para[0])));
      break;
   case 0:
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->Compile());
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Copy_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Copy(*(TObject*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_DefinedString_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFormula*)(G__getstructoffset()))->DefinedString((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_DefinedValue_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->DefinedValue((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_DefinedVariable_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->DefinedVariable(*(TString*)libp->para[0].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Eval_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 3:
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->Eval((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2])));
      break;
   case 2:
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->Eval((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->Eval((Double_t)G__double(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_EvalPar_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->EvalPar((Double_t*)G__int(libp->para[0]),(Double_t*)G__int(libp->para[1])));
      break;
   case 1:
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->EvalPar((Double_t*)G__int(libp->para[0])));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_GetNdim_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->GetNdim());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_GetNpar_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->GetNpar());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_GetNumber_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->GetNumber());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_GetParameter_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,100,(double)((TFormula*)(G__getstructoffset()))->GetParameter((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_GetParameters_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->GetParameters((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_GetParName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFormula*)(G__getstructoffset()))->GetParName((Int_t)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Print_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 1:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Print();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_SetNumber_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetNumber((Int_t)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_SetParameter_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameter((Int_t)G__int(libp->para[0]),(Double_t)G__double(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_SetParameters_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters((Double_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_SetParameters_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 10:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7])
,(Double_t)G__double(libp->para[8]),(Double_t)G__double(libp->para[9]));
      break;
   case 9:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7])
,(Double_t)G__double(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]),(Double_t)G__double(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters(
(Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5])
,(Double_t)G__double(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]),(Double_t)G__double(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3])
,(Double_t)G__double(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]),(Double_t)G__double(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1])
,(Double_t)G__double(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParameters((Double_t)G__double(libp->para[0]),(Double_t)G__double(libp->para[1]));
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_SetParName_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParName((Int_t)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_SetParNames_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 10:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(const char*)G__int(libp->para[5])
,(const char*)G__int(libp->para[6]),(const char*)G__int(libp->para[7])
,(const char*)G__int(libp->para[8]),(const char*)G__int(libp->para[9]));
      break;
   case 9:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(const char*)G__int(libp->para[5])
,(const char*)G__int(libp->para[6]),(const char*)G__int(libp->para[7])
,(const char*)G__int(libp->para[8]));
      break;
   case 8:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(const char*)G__int(libp->para[5])
,(const char*)G__int(libp->para[6]),(const char*)G__int(libp->para[7]));
      break;
   case 7:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames(
(const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(const char*)G__int(libp->para[5])
,(const char*)G__int(libp->para[6]));
      break;
   case 6:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]),(const char*)G__int(libp->para[5]));
      break;
   case 5:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3])
,(const char*)G__int(libp->para[4]));
      break;
   case 4:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]),(const char*)G__int(libp->para[3]));
      break;
   case 3:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1])
,(const char*)G__int(libp->para[2]));
      break;
   case 2:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames((const char*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames((const char*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->SetParNames();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Update_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Update();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_DeclFileName_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFormula*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_DeclFileLine_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_ImplFileName_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFormula*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_ImplFileLine_9_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFormula*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Class_Version_0_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFormula*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Class_1_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFormula*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Dictionary_2_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_IsA_3_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFormula*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_ShowMembers_4_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFormula_Streamer_5_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFormula*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFormula_wATFormula_6_3(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   if(G__getaryconstruct())
     if(G__PVOID==G__getgvp())
       delete[] (TFormula *)(G__getstructoffset());
     else
       for(int i=G__getaryconstruct()-1;i>=0;i--)
         delete (TFormula *)((G__getstructoffset())+sizeof(TFormula)*i);
   else  delete (TFormula *)(G__getstructoffset());
      G__setnull(result7);
   return(1 || funcname || hash || result7 || libp) ;
}


/* TApplicationImp */
static int G__TApplicationImp_TApplicationImp_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TApplicationImp *p=NULL;
   if(G__getaryconstruct()) p=new TApplicationImp[G__getaryconstruct()];
   else                    p=new TApplicationImp;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_TApplicationImp_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TApplicationImp_ApplicationName_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplicationImp*)(G__getstructoffset()))->ApplicationName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Show_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Hide_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Iconify_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_IsCmdThread_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TApplicationImp*)(G__getstructoffset()))->IsCmdThread());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Init_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Init();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Open_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Open();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Raise_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Raise();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Lower_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Lower();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplicationImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplicationImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TApplicationImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TApplicationImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TApplicationImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplicationImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TApplicationImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TApplicationImp_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TApplicationImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TApplicationImp_TApplicationImp_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TApplicationImp *p;
   if(1!=libp->paran) ;
   p=new TApplicationImp(*(TApplicationImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TApplicationImp_wATApplicationImp_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TBrowserImp */
static int G__TBrowserImp_TBrowserImp_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBrowserImp_TBrowserImp_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBrowserImp_TBrowserImp_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBrowserImp_Add_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Add((TObject*)G__int(libp->para[0]),(const char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_BrowseObj_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->BrowseObj((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Browser_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowserImp*)(G__getstructoffset()))->Browser());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ExecuteDefaultAction_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->ExecuteDefaultAction((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Iconify_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_RecursiveRemove_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->RecursiveRemove((TObject*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Refresh_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TBrowserImp_Show_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_DeclFileName_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowserImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_DeclFileLine_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowserImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ImplFileName_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBrowserImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ImplFileLine_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBrowserImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Class_Version_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBrowserImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Class_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowserImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Dictionary_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_IsA_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBrowserImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_ShowMembers_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBrowserImp_Streamer_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBrowserImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBrowserImp_TBrowserImp_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TBrowserImp *p;
   if(1!=libp->paran) ;
   p=new TBrowserImp(*(TBrowserImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBrowserImp_wATBrowserImp_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TCanvasImp */
static int G__TCanvasImp_TCanvasImp_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TCanvasImp_TCanvasImp_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TCanvasImp_TCanvasImp_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TCanvasImp_Canvas_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvasImp*)(G__getstructoffset()))->Canvas());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ForceUpdate_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ForceUpdate();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_GetWindowGeometry_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->GetWindowGeometry(libp->para[0].ref?*(Int_t*)libp->para[0].ref:G__Mint(libp->para[0]),libp->para[1].ref?*(Int_t*)libp->para[1].ref:G__Mint(libp->para[1])
,libp->para[2].ref?*(UInt_t*)libp->para[2].ref:G__Muint(libp->para[2]),libp->para[3].ref?*(UInt_t*)libp->para[3].ref:G__Muint(libp->para[3]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Iconify_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Iconify();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_InitWindow_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvasImp*)(G__getstructoffset()))->InitWindow());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetStatusText_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   switch(libp->paran) {
   case 2:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetStatusText((Text_t*)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
      break;
   case 1:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetStatusText((Text_t*)G__int(libp->para[0]));
      break;
   case 0:
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetStatusText();
      break;
   }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetWindowPosition_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetWindowPosition((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetWindowSize_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetWindowSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetWindowTitle_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetWindowTitle((const Text_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_SetCanvasSize_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->SetCanvasSize((UInt_t)G__int(libp->para[0]),(UInt_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ShowMenuBar_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TCanvasImp_ShowStatusBar_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TCanvasImp_Show_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_DeclFileName_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvasImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_DeclFileLine_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvasImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ImplFileName_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TCanvasImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ImplFileLine_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TCanvasImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Class_Version_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TCanvasImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Class_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvasImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Dictionary_3_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_IsA_4_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TCanvasImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_ShowMembers_5_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TCanvasImp_Streamer_6_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TCanvasImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TCanvasImp_TCanvasImp_7_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TCanvasImp *p;
   if(1!=libp->paran) ;
   p=new TCanvasImp(*(TCanvasImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TCanvasImp_wATCanvasImp_8_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TContextMenuImp */
static int G__TContextMenuImp_TContextMenuImp_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TContextMenuImp_GetContextMenu_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenuImp*)(G__getstructoffset()))->GetContextMenu());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Dialog_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->Dialog((TObject*)G__int(libp->para[0]),(TMethod*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_DisplayPopup_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->DisplayPopup((Int_t)G__int(libp->para[0]),(Int_t)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_DeclFileName_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenuImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_DeclFileLine_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenuImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_ImplFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TContextMenuImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_ImplFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TContextMenuImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Class_Version_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TContextMenuImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Class_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenuImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Dictionary_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_IsA_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TContextMenuImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_ShowMembers_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TContextMenuImp_Streamer_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TContextMenuImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TContextMenuImp_TContextMenuImp_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TContextMenuImp *p;
   if(1!=libp->paran) ;
   p=new TContextMenuImp(*(TContextMenuImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TContextMenuImp_wATContextMenuImp_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TControlBarImp */
static int G__TControlBarImp_TControlBarImp_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TControlBarImp_TControlBarImp_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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

static int G__TControlBarImp_GetControlBar_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarImp*)(G__getstructoffset()))->GetControlBar());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Create_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Create();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Hide_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Hide();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Show_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Show();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_DeclFileName_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarImp*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_DeclFileLine_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarImp*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_ImplFileName_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TControlBarImp*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_ImplFileLine_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TControlBarImp*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Class_Version_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TControlBarImp*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Class_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarImp*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Dictionary_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_IsA_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TControlBarImp*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_ShowMembers_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TControlBarImp_Streamer_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TControlBarImp*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TControlBarImp_TControlBarImp_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TControlBarImp *p;
   if(1!=libp->paran) ;
   p=new TControlBarImp(*(TControlBarImp*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TControlBarImp_wATControlBarImp_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* TFileHandler */
static int G__TFileHandler_TFileHandler_1_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TFileHandler *p=NULL;
      p = new TFileHandler((int)G__int(libp->para[0]),(int)G__int(libp->para[1]));
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFileHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_GetFd_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFileHandler*)(G__getstructoffset()))->GetFd());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_SetFd_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->SetFd((int)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Notify_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->Notify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ReadNotify_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->ReadNotify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_WriteNotify_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->WriteNotify());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_HasReadInterest_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->HasReadInterest());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_HasWriteInterest_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)((TFileHandler*)(G__getstructoffset()))->HasWriteInterest());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Remove_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->Remove();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFileHandler*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFileHandler*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TFileHandler*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TFileHandler*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TFileHandler*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFileHandler*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TFileHandler*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TFileHandler_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TFileHandler*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TFileHandler_TFileHandler_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TFileHandler *p;
   if(1!=libp->paran) ;
   p=new TFileHandler(*(TFileHandler*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TFileHandler);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TFileHandler_wATFileHandler_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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
static int G__TBenchmark_TBenchmark_0_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
   TBenchmark *p=NULL;
   if(G__getaryconstruct()) p=new TBenchmark[G__getaryconstruct()];
   else                    p=new TBenchmark;
      result7->obj.i = (long)p;
      result7->ref = (long)p;
      result7->type = 'u';
      result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBenchmark);
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_GetBench_2_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBenchmark*)(G__getstructoffset()))->GetBench((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_GetCpuTime_3_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBenchmark*)(G__getstructoffset()))->GetCpuTime((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_GetRealTime_4_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letdouble(result7,102,(double)((TBenchmark*)(G__getstructoffset()))->GetRealTime((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Print_5_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Print((Option_t*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Reset_6_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Reset();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Show_7_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Show((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Start_8_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Start((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Stop_9_0(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Stop((const char*)G__int(libp->para[0]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Summary_0_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Summary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_DeclFileName_1_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBenchmark*)(G__getstructoffset()))->DeclFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_DeclFileLine_2_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBenchmark*)(G__getstructoffset()))->DeclFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_ImplFileName_3_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)((TBenchmark*)(G__getstructoffset()))->ImplFileName());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_ImplFileLine_4_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,105,(long)((TBenchmark*)(G__getstructoffset()))->ImplFileLine());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Class_Version_5_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,115,(long)((TBenchmark*)(G__getstructoffset()))->Class_Version());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Class_6_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBenchmark*)(G__getstructoffset()))->Class());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Dictionary_7_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Dictionary();
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_IsA_8_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,85,(long)((TBenchmark*)(G__getstructoffset()))->IsA());
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_ShowMembers_9_1(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->ShowMembers(*(TMemberInspector*)libp->para[0].ref,(char*)G__int(libp->para[1]));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G__TBenchmark_Streamer_0_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__setnull(result7);
      ((TBenchmark*)(G__getstructoffset()))->Streamer(*(TBuffer*)libp->para[0].ref);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic copy constructor
static int G__TBenchmark_TBenchmark_1_2(G__value *result7,char *funcname,struct G__param *libp,int hash)
{
   TBenchmark *p;
   if(1!=libp->paran) ;
   p=new TBenchmark(*(TBenchmark*)G__int(libp->para[0]));
   result7->obj.i = (long)p;
   result7->ref = (long)p;
   result7->type = 'u';
   result7->tagnum = G__get_linked_tagnum(&G__G__Base1LN_TBenchmark);
   return(1 || funcname || hash || result7 || libp) ;
}

// automatic destructor
static int G__TBenchmark_wATBenchmark_2_2(G__value *result7,char *funcname,struct G__param *libp,int hash) {
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


/* Setting up global function */
static int G___operatorpL_5_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TString *pobj,xobj=operator+(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref);
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorpL_6_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TString *pobj,xobj=operator+(*(TString*)libp->para[0].ref,(const char*)G__int(libp->para[1]));
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorpL_7_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        TString *pobj,xobj=operator+((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref);
        pobj=new TString(xobj);
        result7->obj.i=(long)((void*)pobj); result7->ref=result7->obj.i;
        G__store_tempobject(*result7);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_8_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_9_6(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==(*(TString*)libp->para[0].ref,(const char*)G__int(libp->para[1])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorgRgR_1_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        istream& obj=operator>>(*(istream*)libp->para[0].ref,*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatorlElE_2_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      {
        ostream& obj=operator<<(*(ostream*)libp->para[0].ref,*(TString*)libp->para[1].ref);
         result7->ref=(long)(&obj); result7->obj.i=(long)(&obj);
      }
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___Strip_9_7(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)Strip((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___StrDup_0_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,67,(long)StrDup((const char*)G__int(libp->para[0])));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatornOeQ_4_8(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator!=(*(TString*)libp->para[0].ref,*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatoreQeQ_4_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator==((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}

static int G___operatornOeQ_5_9(G__value *result7,char *funcname,struct G__param *libp,int hash) {
      G__letint(result7,98,(long)operator!=((const char*)G__int(libp->para[0]),*(TString*)libp->para[1].ref));
   return(1 || funcname || hash || result7 || libp) ;
}


/*********************************************************
* Member function Stub
*********************************************************/

/* TBuffer */

/* TDatime */

/* TFile */

/* TDirectory */

/* TApplication */

/* TAttFill */

/* TAttAxis */

/* TAttFunc */

/* TAttHist */

/* TAttLine */

/* TAttMarker */

/* TAttStat */

/* TAttText */

/* TAxis */

/* TEnv */

/* TFormula */

/* TApplicationImp */

/* TBrowserImp */

/* TCanvasImp */

/* TContextMenuImp */

/* TControlBarImp */

/* TFileHandler */

/* TBenchmark */

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
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TApplication))) {
     TApplication *G__Lderived;
     G__Lderived=(TApplication*)0x1000;
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
   }
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TAxis))) {
     TAxis *G__Lderived;
     G__Lderived=(TAxis*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TAxis),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TAxis),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
     }
     {
       TAttAxis *G__Lpbase=(TAttAxis*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TAxis),G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),(long)G__Lpbase-(long)G__Lderived,1,1);
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
   if(0==G__getnumbaseclass(G__get_linked_tagnum(&G__G__Base1LN_TFormula))) {
     TFormula *G__Lderived;
     G__Lderived=(TFormula*)0x1000;
     {
       TNamed *G__Lpbase=(TNamed*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFormula),G__get_linked_tagnum(&G__G__Base1LN_TNamed),(long)G__Lpbase-(long)G__Lderived,1,1);
     }
     {
       TObject *G__Lpbase=(TObject*)G__Lderived;
       G__inheritance_setup(G__get_linked_tagnum(&G__G__Base1LN_TFormula),G__get_linked_tagnum(&G__G__Base1LN_TObject),(long)G__Lpbase-(long)G__Lderived,1,0);
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
   G__search_typename2("HANDLE",104,-1,0,
-1);
   G__setnewtype(-1,NULL,0);
   G__search_typename2("G__InterfaceMethod",89,-1,0,
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

   /* TBuffer */
static void G__setup_memvarTBuffer(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TBuffer));
   { TBuffer *p; p=(TBuffer*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,98,0,0,-1,G__defined_typename("Bool_t"),-1,2,"fMode=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fBufSize=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBuffer=",0,"Buffer used to store objects");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBufCur=",0,"Current position in buffer");
   G__memvar_setup((void*)NULL,67,0,0,-1,-1,-1,2,"fBufMax=",0,"End of buffer");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMapCount=",0,"Number of objects or classes in map");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fArraySize=",0,"Default size of fReadArray array");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fMapSize=",0,"Default size of fWriteMap hash table");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TObjArray),-1,-1,2,"fReadArray=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TMap),-1,-1,2,"fWriteMap=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,2,"fgArraySize=",0,"Default array size for all TBuffer objects");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-2,2,"fgMapSize=",0,"Default map size for all TBuffer objects");
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLEMode),-1,-2,1,"kRead=0",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TBuffercLcLEMode),-1,-2,1,"kWrite=1",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TObjectcLcLdA),-1,-2,1,"kInitialSize=1024",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TObjectcLcLdA),-1,-2,1,"kMinimalSize=128",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TObjectcLcLdA),-1,-2,1,"kArraySize=64",0,(char*)NULL);
   G__memvar_setup((void*)G__PVOID,105,0,1,G__get_linked_tagnum(&G__G__Base1LN_TObjectcLcLdA),-1,-2,1,"kMapSize=67",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TDatime */
static void G__setup_memvarTDatime(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TDatime));
   { TDatime *p; p=(TDatime*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,104,0,0,-1,G__defined_typename("UInt_t"),-1,2,"fDatime=",0,"Date (relative to 1995) + time");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
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


   /* TAttFunc */
static void G__setup_memvarTAttFunc(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFunc));
   { TAttFunc *p; p=(TAttFunc*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fFuncColor=",0,"function color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fFuncStyle=",0,"function style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,2,"fFuncWidth=",0,"function width");
   G__memvar_setup((void*)NULL,108,0,0,-1,-1,-1,4,"G__virtualinfo=",0,(char*)NULL);
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,-2,4,"fgIsA=",0,(char*)NULL);
   }
   G__tag_memvar_reset();
}


   /* TAttHist */
static void G__setup_memvarTAttHist(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttHist));
   { TAttHist *p; p=(TAttHist*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fHistColor=",0,"line color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fHistStyle=",0,"line style");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Width_t"),-1,2,"fHistWidth=",0,"line width");
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


   /* TAttStat */
static void G__setup_memvarTAttStat(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttStat));
   { TAttStat *p; p=(TAttStat*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Color_t"),-1,2,"fStatColor=",0,"stat color");
   G__memvar_setup((void*)NULL,115,0,0,-1,G__defined_typename("Style_t"),-1,2,"fStatStyle=",0,"stat style");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fStatX=",0,"X position of top right corner of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fStatY=",0,"Y position of top right corner of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fStatW=",0,"width of stat box");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Float_t"),-1,2,"fStatH=",0,"height of stat box");
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


   /* TAxis */
static void G__setup_memvarTAxis(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TAxis));
   { TAxis *p; p=(TAxis*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fNbins=",0,"Number of bins");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Axis_t"),-1,4,"fXmin=",0,"low edge of first bin");
   G__memvar_setup((void*)NULL,102,0,0,-1,G__defined_typename("Axis_t"),-1,4,"fXmax=",0,"upper edge of last bin");
   G__memvar_setup((void*)NULL,117,0,0,G__get_linked_tagnum(&G__G__Base1LN_TArrayF),-1,-1,4,"fXbins=",0,"Bin edges array in X");
   G__memvar_setup((void*)NULL,67,0,0,-1,G__defined_typename("Char_t"),-1,4,"fXlabels=",0,"!Labels associated to axis");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fFirst=",0,"first bin to display");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,4,"fLast=",0,"last bin to display");
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


   /* TFormula */
static void G__setup_memvarTFormula(void) {
   G__tag_memvar_setup(G__get_linked_tagnum(&G__G__Base1LN_TFormula));
   { TFormula *p; p=(TFormula*)0x1000; if (p) { }
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNdim=",0,"Dimension of function (1=1-Dim, 2=2-Dim,etc)");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNpar=",0,"Number of parameters");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNoper=",0,"Number of operators");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNconst=",0,"Number of constants");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNumber=",0,"formula number identifier");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNval=",0,"Number of different variables in expression");
   G__memvar_setup((void*)NULL,105,0,0,-1,G__defined_typename("Int_t"),-1,2,"fNstring=",0,"Number of different constants character strings");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,2,"fExpr=",0,"List of expressions");
   G__memvar_setup((void*)NULL,73,0,0,-1,G__defined_typename("Int_t"),-1,2,"fOper=",0,"List of operators");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fConst=",0,"Array of fNconst formula constants");
   G__memvar_setup((void*)NULL,68,0,0,-1,G__defined_typename("Double_t"),-1,2,"fParams=",0,"Array of fNpar parameters");
   G__memvar_setup((void*)NULL,85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,-1,2,"fNames=",0,"Array of parameter names");
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
   G__memfunc_setup("Expand",608,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"i - 'Int_t' 0 - newsize","Expand buffer to newsize",(void*)NULL,0);
   G__memfunc_setup("TBuffer",686,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,0,0,1,2,0,"","For Dictionary()",(void*)NULL,0);
   G__memfunc_setup("TBuffer",686,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,0,1,1,2,0,"u 'TBuffer' - 1 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator=",937,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"u 'TBuffer' - 1 - -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CheckCount",999,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Read",380,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - 'Text_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,(G__InterfaceMethod)NULL,121,-1,-1,0,3,1,2,0,
"C - 'Text_t' 0 - name i - 'Int_t' 0 - opt "
"i - 'Int_t' 0 - bufs",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("TBuffer",686,G__TBuffer_TBuffer_7_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,0,3,1,1,0,
"i 'TBuffer::EMode' - 0 - mode i - 'Int_t' 0 kInitialSize bufsiz "
"Y - - 0 0 buf",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("MapObject",885,G__TBuffer_MapObject_9_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TBuffer_Reset_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ResetMap",801,G__TBuffer_ResetMap_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReadMode",1069,G__TBuffer_SetReadMode_2_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReadParam",1177,G__TBuffer_SetReadParam_3_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - arraysize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWriteMode",1212,G__TBuffer_SetWriteMode_4_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetWriteParam",1320,G__TBuffer_SetWriteParam_5_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mapsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetBufferOffset",1517,G__TBuffer_SetBufferOffset_6_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 0 offset",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Buffer",602,G__TBuffer_Buffer_7_1,67,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("BufferSize",1013,G__TBuffer_BufferSize_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DetachBuffer",1187,G__TBuffer_DetachBuffer_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Length",610,G__TBuffer_Length_0_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsReading",886,G__TBuffer_IsReading_1_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsWriting",928,G__TBuffer_IsWriting_2_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadBuf",665,G__TBuffer_ReadBuf_3_2,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"Y - - 0 - buf i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteBuf",808,G__TBuffer_WriteBuf_4_2,121,-1,-1,0,2,1,1,0,
"Y - - 0 - buf i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadString",1011,G__TBuffer_ReadString_5_2,67,-1,G__defined_typename("Text_t"),0,2,1,1,0,
"C - 'Text_t' 0 - s i - 'Int_t' 0 - max",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteString",1154,G__TBuffer_WriteString_6_2,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - s",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadVersion",1122,G__TBuffer_ReadVersion_7_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteVersion",1265,G__TBuffer_WriteVersion_8_2,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadClass",882,G__TBuffer_ReadClass_9_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,2,1,1,0,
"U 'TClass' - 0 0 cl H - 'UInt_t' 0 0 objTag",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteClass",1025,G__TBuffer_WriteClass_0_3,121,-1,-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadObject",979,G__TBuffer_ReadObject_1_3,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,1,1,1,0,"U 'TClass' - 0 - cl",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteObject",1122,G__TBuffer_WriteObject_2_3,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_3_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Char_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_4_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"B - 'UChar_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_5_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"S - 'Short_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_6_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"R - 'UShort_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_7_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"I - 'Int_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_8_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"H - 'UInt_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_9_3,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"L - 'Long_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_0_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"K - 'ULong_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_1_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"F - 'Float_t' 1 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadArray",891,G__TBuffer_ReadArray_2_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"D - 'Double_t' 1 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_3_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_4_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"B - 'UChar_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_5_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"S - 'Short_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_6_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"R - 'UShort_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_7_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"I - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_8_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"H - 'UInt_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_9_4,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"L - 'Long_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_0_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"K - 'ULong_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_1_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"F - 'Float_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadStaticArray",1507,G__TBuffer_ReadStaticArray_2_5,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"D - 'Double_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_3_5,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_4_5,121,-1,-1,0,2,1,1,0,
"B - 'UChar_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_5_5,121,-1,-1,0,2,1,1,0,
"S - 'Short_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_6_5,121,-1,-1,0,2,1,1,0,
"R - 'UShort_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_7_5,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_8_5,121,-1,-1,0,2,1,1,0,
"H - 'UInt_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_9_5,121,-1,-1,0,2,1,1,0,
"L - 'Long_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_0_6,121,-1,-1,0,2,1,1,0,
"K - 'ULong_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_1_6,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - f i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteArray",1034,G__TBuffer_WriteArray_2_6,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - d i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_3_6,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_4_6,121,-1,-1,0,2,1,1,0,
"B - 'UChar_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_5_6,121,-1,-1,0,2,1,1,0,
"S - 'Short_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_6_6,121,-1,-1,0,2,1,1,0,
"R - 'UShort_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_7_6,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_8_6,121,-1,-1,0,2,1,1,0,
"H - 'UInt_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_9_6,121,-1,-1,0,2,1,1,0,
"L - 'Long_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_0_7,121,-1,-1,0,2,1,1,0,
"K - 'ULong_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_1_7,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - f i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFastArray",1289,G__TBuffer_ReadFastArray_2_7,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - d i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_3_7,121,-1,-1,0,2,1,1,0,
"C - 'Char_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_4_7,121,-1,-1,0,2,1,1,0,
"B - 'UChar_t' 0 - c i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_5_7,121,-1,-1,0,2,1,1,0,
"S - 'Short_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_6_7,121,-1,-1,0,2,1,1,0,
"R - 'UShort_t' 0 - h i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_7_7,121,-1,-1,0,2,1,1,0,
"I - 'Int_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_8_7,121,-1,-1,0,2,1,1,0,
"H - 'UInt_t' 0 - i i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_9_7,121,-1,-1,0,2,1,1,0,
"L - 'Long_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_0_8,121,-1,-1,0,2,1,1,0,
"K - 'ULong_t' 0 - l i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_1_8,121,-1,-1,0,2,1,1,0,
"F - 'Float_t' 0 - f i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteFastArray",1432,G__TBuffer_WriteFastArray_2_8,121,-1,-1,0,2,1,1,0,
"D - 'Double_t' 0 - d i - 'Int_t' 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_3_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"c - 'Char_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_4_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"b - 'UChar_t' 1 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_5_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"s - 'Short_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_6_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"r - 'UShort_t' 1 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_7_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"i - 'Int_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_8_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"h - 'UInt_t' 1 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_9_8,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"l - 'Long_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_0_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"k - 'ULong_t' 1 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_1_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"f - 'Float_t' 1 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_2_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"d - 'Double_t' 1 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G__TBuffer_operatorgRgR_3_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"C - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_4_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"c - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_5_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"b - 'UChar_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_6_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"s - 'Short_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_7_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"r - 'UShort_t' 0 - h",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_8_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"i - 'Int_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_9_9,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"h - 'UInt_t' 0 - i",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_0_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"l - 'Long_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_1_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"k - 'ULong_t' 0 - l",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_2_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"f - 'Float_t' 0 - f",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_3_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"d - 'Double_t' 0 - d",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G__TBuffer_operatorlElE_4_10,117,G__get_linked_tagnum(&G__G__Base1LN_TBuffer),-1,1,1,1,1,0,"C - 'Char_t' 0 - c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetGlobalReadParam",1770,G__TBuffer_SetGlobalReadParam_5_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - arraysize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetGlobalWriteParam",1913,G__TBuffer_SetGlobalWriteParam_6_10,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - mapsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobalReadParam",1758,G__TBuffer_GetGlobalReadParam_7_10,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetGlobalWriteParam",1901,G__TBuffer_GetGlobalWriteParam_8_10,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TBuffer_DeclFileName_9_10,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBuffer_DeclFileLine_0_11,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBuffer_ImplFileName_1_11,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBuffer_ImplFileLine_2_11,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBuffer_Class_Version_3_11,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBuffer_Class_4_11,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TBuffer_Dictionary_5_11,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBuffer_IsA_6_11,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBuffer_ShowMembers_7_11,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBuffer_Streamer_8_11,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TBuffer",812,G__TBuffer_wATBuffer_9_11,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDatime(void) {
   /* TDatime */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TDatime));
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("AsString",811,G__TDatime_AsString_2_0,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Convert",737,G__TDatime_Convert_3_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TDatime_Copy_4_0,121,-1,-1,0,1,1,1,0,"u 'TDatime' - 1 - datime",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Get",288,G__TDatime_Get_5_0,104,-1,G__defined_typename("UInt_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetDate",670,G__TDatime_GetDate_6_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetTime",687,G__TDatime_GetTime_7_0,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TDatime_FillBuffer_8_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TDatime_Print_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TDatime_ReadBuffer_0_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Set",300,G__TDatime_Set_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Set",300,G__TDatime_Set_2_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - date i - 'Int_t' 0 - time",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Set",300,G__TDatime_Set_3_1,121,-1,-1,0,6,1,1,0,
"i - 'Int_t' 0 - year i - 'Int_t' 0 - month "
"i - 'Int_t' 0 - day i - 'Int_t' 0 - hour "
"i - 'Int_t' 0 - min i - 'Int_t' 0 - sec",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TDatime_Sizeof_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetDateTime",1069,G__TDatime_GetDateTime_5_1,121,-1,-1,0,3,1,1,0,
"h - 'UInt_t' 0 - datetime i - 'Int_t' 1 - date "
"i - 'Int_t' 1 - time",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TDatime_DeclFileName_6_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDatime_DeclFileLine_7_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDatime_ImplFileName_8_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDatime_ImplFileLine_9_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDatime_Class_Version_0_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDatime_Class_1_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDatime_Dictionary_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDatime_IsA_3_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDatime_ShowMembers_4_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDatime_Streamer_5_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TDatime",680,G__TDatime_TDatime_6_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TDatime),-1,0,1,1,1,0,"u 'TDatime' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TDatime",806,G__TDatime_wATDatime_7_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFile(void) {
   /* TFile */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile));
   G__memfunc_setup("Init",404,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"b - 'Bool_t' 0 - create",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFile",468,G__TFile_TFile_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFile",468,G__TFile_TFile_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,4,1,1,0,
"C - 'Text_t' 0 - fname C - 'Option_t' 0 \"\" option "
"C - 'Text_t' 0 \"\" ftitle i - 'Int_t' 0 1 compress",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFile",468,G__TFile_TFile_3_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,1,1,1,0,"u 'TFile' - 1 - file",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Close",502,G__TFile_Close_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TFile_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - file",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Delete",595,G__TFile_Delete_7_0,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" namecycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TFile_Draw_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TFile_FillBuffer_9_0,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Flush",514,G__TFile_Flush_0_1,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBestBuffer",1288,G__TFile_GetBestBuffer_1_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCompressionLevel",1962,G__TFile_GetCompressionLevel_2_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCompressionFactor",2065,G__TFile_GetCompressionFactor_3_1,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetEND",503,G__TFile_GetEND_4_1,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFd",458,G__TFile_GetFd_5_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfFree",1267,G__TFile_GetListOfFree_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNfree",784,G__TFile_GetNfree_7_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetOption",921,G__TFile_GetOption_8_1,67,-1,G__defined_typename("Option_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBytesRead",1187,G__TFile_GetBytesRead_9_1,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetBytesWritten",1556,G__TFile_GetBytesWritten_0_2,100,-1,G__defined_typename("Double_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetVersion",1030,G__TFile_GetVersion_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsOpen",590,G__TFile_IsOpen_2_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ls",223,G__TFile_ls_3_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("MakeFree",768,G__TFile_MakeFree_4_2,121,-1,-1,0,2,1,1,0,
"i - 'Seek_t' 0 - first i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Map",286,G__TFile_Map_5_2,121,-1,-1,0,0,1,1,0,"","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TFile_Paint_6_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TFile_Print_7_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadBuffer",982,G__TFile_ReadBuffer_8_2,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadFree",766,G__TFile_ReadFree_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Recover",726,G__TFile_Recover_0_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Seek",392,G__TFile_Seek_1_3,121,-1,-1,0,2,1,1,0,
"i - 'Seek_t' 0 - offset i 'TFile::ERelativeTo' - 0 kBeg pos",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetCompressionLevel",1974,G__TFile_SetCompressionLevel_2_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 1 level",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetEND",515,G__TFile_SetEND_3_3,121,-1,-1,0,1,1,1,0,"i - 'Seek_t' 0 - last",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetOption",933,G__TFile_SetOption_4_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \">\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Sizeof",624,G__TFile_Sizeof_5_3,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SumBuffer",911,G__TFile_SumBuffer_6_3,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - bufsize",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("WriteBuffer",1125,G__TFile_WriteBuffer_7_3,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - buf i - - 0 - len",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,G__TFile_Write_8_3,121,-1,-1,0,3,1,1,0,
"C - 'Text_t' 0 0 name i - 'Int_t' 0 0 opt "
"i - 'Int_t' 0 0 bufsiz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteFree",909,G__TFile_WriteFree_9_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteHeader",1108,G__TFile_WriteHeader_0_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Open",402,G__TFile_Open_1_4,85,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,4,1,1,0,
"C - 'Text_t' 0 - name C - 'Option_t' 0 \"\" option "
"C - 'Text_t' 0 \"\" ftitle i - 'Int_t' 0 1 compress",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFileBytesRead",1571,G__TFile_GetFileBytesRead_2_4,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFileBytesWritten",1940,G__TFile_GetFileBytesWritten_3_4,100,-1,G__defined_typename("Double_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFileBytesRead",1583,G__TFile_SetFileBytesRead_4_4,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0 bytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetFileBytesWritten",1952,G__TFile_SetFileBytesWritten_5_4,121,-1,-1,0,1,1,1,0,"d - 'Double_t' 0 0 bytes",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TFile_DeclFileName_6_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFile_DeclFileLine_7_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFile_ImplFileName_8_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFile_ImplFileLine_9_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFile_Class_Version_0_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFile_Class_1_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFile_Dictionary_2_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFile_IsA_3_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFile_ShowMembers_4_5,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFile_Streamer_5_5,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TFile",594,G__TFile_wATFile_6_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTDirectory(void) {
   /* TDirectory */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory));
   G__memfunc_setup("cd1",248,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,2,0,"C - 'Text_t' 0 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Cd1",216,(G__InterfaceMethod)NULL,98,-1,G__defined_typename("Bool_t"),0,1,1,2,0,"C - 'Text_t' 0 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDirectory",1033,G__TDirectory_TDirectory_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDirectory",1033,G__TDirectory_TDirectory_3_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,3,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 - title "
"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TDirectory",1033,G__TDirectory_TDirectory_4_0,105,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,1,1,1,0,"u 'TDirectory' - 1 - directory",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Append",600,G__TDirectory_Append_6_0,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("AppendKey",897,G__TDirectory_AppendKey_7_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"U 'TKey' - 0 - key",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Browse",626,G__TDirectory_Browse_8_0,121,-1,-1,0,1,1,1,0,"U 'TBrowser' - 0 - b",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Build",496,G__TDirectory_Build_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Clear",487,G__TDirectory_Clear_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Close",502,G__TDirectory_Close_1_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TDirectory_Copy_2_1,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - directory",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("cd",199,G__TDirectory_cd_3_1,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - 'Text_t' 0 0 path",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeleteAll",876,G__TDirectory_DeleteAll_4_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Delete",595,G__TDirectory_Delete_5_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 \"\" namecycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TDirectory_Draw_6_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FillBuffer",993,G__TDirectory_FillBuffer_7_1,121,-1,-1,0,1,1,1,0,"C - - 1 - buffer",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Get",288,G__TDirectory_Get_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,1,1,1,0,"C - 'Text_t' 0 - namecycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetFile",672,G__TDirectory_GetFile_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetKey",585,G__TDirectory_GetKey_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TKey),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name s - 'Short_t' 0 9999 cycle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetList",700,G__TDirectory_GetList_1_2,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetListOfKeys",1293,G__TDirectory_GetListOfKeys_2_2,85,G__get_linked_tagnum(&G__G__Base1LN_TList),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetMother",911,G__TDirectory_GetMother_3_2,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNkeys",810,G__TDirectory_GetNkeys_4_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekDir",967,G__TDirectory_GetSeekDir_5_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekParent",1298,G__TDirectory_GetSeekParent_6_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSeekKeys",1092,G__TDirectory_GetSeekKeys_7_2,105,-1,G__defined_typename("Seek_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetPath",685,G__TDirectory_GetPath_8_2,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsFolder",792,G__TDirectory_IsFolder_9_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsModified",989,G__TDirectory_IsModified_0_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsWritable",1014,G__TDirectory_IsWritable_1_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TDirectory_ls_2_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("mkdir",535,G__TDirectory_mkdir_3_3,85,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,0,2,1,1,0,
"C - 'Text_t' 0 - name C - 'Text_t' 0 \"\" title",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TDirectory_Paint_4_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TDirectory_Print_5_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Purge",515,G__TDirectory_Purge_6_3,121,-1,-1,0,1,1,1,0,"s - 'Short_t' 0 1 nkeep",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("pwd",331,G__TDirectory_pwd_7_3,121,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadAll",661,G__TDirectory_ReadAll_8_3,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ReadKeys",792,G__TDirectory_ReadKeys_9_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RecursiveRemove",1574,G__TDirectory_RecursiveRemove_0_4,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - obj",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Save",399,G__TDirectory_Save_1_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveSelf",793,G__TDirectory_SaveSelf_2_4,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE force",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetModified",1101,G__TDirectory_SetModified_3_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetMother",923,G__TDirectory_SetMother_4_4,121,-1,-1,0,1,1,1,0,"U 'TObject' - 0 - mother",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Sizeof",624,G__TDirectory_Sizeof_5_4,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Write",523,G__TDirectory_Write_6_4,121,-1,-1,0,3,1,1,0,
"C - 'Text_t' 0 0 name i - 'Int_t' 0 0 opt "
"i - 'Int_t' 0 0 bufsiz",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteDirHeader",1395,G__TDirectory_WriteDirHeader_7_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("WriteKeys",935,G__TDirectory_WriteKeys_8_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Cd",167,G__TDirectory_Cd_9_4,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - 'Text_t' 0 - path",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DecodeNameCycle",1461,G__TDirectory_DecodeNameCycle_0_5,121,-1,-1,0,3,1,1,0,
"C - 'Text_t' 0 - namecycle C - 'Text_t' 0 - name "
"s - 'Short_t' 1 - cycle",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("EncodeNameCycle",1471,G__TDirectory_EncodeNameCycle_1_5,121,-1,-1,0,3,1,1,0,
"C - 'Text_t' 0 - buffer C - 'Text_t' 0 - name "
"s - 'Short_t' 0 - cycle",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TDirectory_DeclFileName_2_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TDirectory_DeclFileLine_3_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TDirectory_ImplFileName_4_5,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TDirectory_ImplFileLine_5_5,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TDirectory_Class_Version_6_5,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TDirectory_Class_7_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TDirectory_Dictionary_8_5,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TDirectory_IsA_9_5,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TDirectory_ShowMembers_0_6,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TDirectory_Streamer_1_6,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TDirectory",1159,G__TDirectory_wATDirectory_2_6,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTApplication(void) {
   /* TApplication */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication));
   G__memfunc_setup("TApplication",1224,(G__InterfaceMethod)NULL,105,G__get_linked_tagnum(&G__G__Base1LN_TApplication),-1,0,0,1,2,0,"","used by Dictionary()",(void*)NULL,0);
   G__memfunc_setup("Help",393,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"C - 'Text_t' 0 - line",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InitializeColors",1668,(G__InterfaceMethod)NULL,121,-1,-1,0,0,1,2,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetReturnFromRun",1653,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"b - 'Bool_t' 0 - ret",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetSignalHandler",1608,(G__InterfaceMethod)NULL,121,-1,-1,0,1,1,2,0,"U 'TSignalHandler' - 0 - sh",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TApplication",1224,G__TApplication_TApplication_5_0,105,G__get_linked_tagnum(&G__G__Base1LN_TApplication),-1,0,5,1,1,0,
"C - - 0 - appClassName I - - 0 - argc "
"C - - 2 - argv Y - - 0 0 options "
"i - - 0 0 numOptions",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetOptions",1036,G__TApplication_GetOptions_7_0,121,-1,-1,0,2,1,1,0,
"I - - 0 - argc C - - 2 - argv",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetSignalHandler",1596,G__TApplication_GetSignalHandler_8_0,85,G__get_linked_tagnum(&G__G__Base1LN_TSignalHandler),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("HandleIdleTimer",1483,G__TApplication_HandleIdleTimer_9_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("HandleTermInput",1524,G__TApplication_HandleTermInput_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Init",404,G__TApplication_Init_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessLine",1127,G__TApplication_ProcessLine_2_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ProcessFile",1119,G__TApplication_ProcessFile_3_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - line",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Run",309,G__TApplication_Run_4_1,121,-1,-1,0,1,1,1,0,"b - 'Bool_t' 0 kFALSE retrn",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetIdleTimer",1195,G__TApplication_SetIdleTimer_5_1,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - idleTimeInSec C - 'Text_t' 0 - command",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("RemoveIdleTimer",1517,G__TApplication_RemoveIdleTimer_6_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetIdleCommand",1373,G__TApplication_GetIdleCommand_7_1,67,-1,-1,0,0,1,1,9,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("StartIdleing",1226,G__TApplication_StartIdleing_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("StopIdleing",1122,G__TApplication_StopIdleing_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Terminate",937,G__TApplication_Terminate_0_2,121,-1,-1,0,1,1,1,0,"i - - 0 0 status",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ApplicationName",1525,G__TApplication_ApplicationName_1_2,67,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TApplication_Show_2_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Hide",378,G__TApplication_Hide_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetApplicationImp",1722,G__TApplication_GetApplicationImp_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Iconify",721,G__TApplication_Iconify_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("IsCmdThread",1064,G__TApplication_IsCmdThread_6_2,98,-1,G__defined_typename("Bool_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Open",402,G__TApplication_Open_7_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Raise",500,G__TApplication_Raise_8_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Lower",521,G__TApplication_Lower_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Argc",381,G__TApplication_Argc_0_3,105,-1,-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Argv",400,G__TApplication_Argv_1_3,67,-1,-1,2,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Argv",400,G__TApplication_Argv_2_3,67,-1,-1,0,1,1,1,8,"i - - 0 - index",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("NoLogOpt",786,G__TApplication_NoLogOpt_3_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("QuitOpt",726,G__TApplication_QuitOpt_4_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("InputFiles",1027,G__TApplication_InputFiles_5_3,85,G__get_linked_tagnum(&G__G__Base1LN_TObjArray),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ClearInputFiles",1514,G__TApplication_ClearInputFiles_6_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReturnFromRun",1353,G__TApplication_ReturnFromRun_7_3,98,-1,G__defined_typename("Bool_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("CreateApplication",1736,G__TApplication_CreateApplication_8_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileName",1145,G__TApplication_DeclFileName_9_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TApplication_DeclFileLine_0_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TApplication_ImplFileName_1_4,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TApplication_ImplFileLine_2_4,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TApplication_Class_Version_3_4,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TApplication_Class_4_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TApplication_Dictionary_5_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TApplication_IsA_6_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TApplication_ShowMembers_7_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TApplication_Streamer_8_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TApplication",1224,G__TApplication_TApplication_9_4,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TApplication),-1,0,1,1,1,0,"u 'TApplication' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TApplication",1350,G__TApplication_wATApplication_0_5,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Reset",515,G__TAttFill_Reset_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveFillAttributes",1853,G__TAttFill_SaveFillAttributes_9_0,121,-1,-1,0,4,1,1,0,
"u 'ofstream' - 1 - out C - 'Text_t' 0 - name "
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
   G__memfunc_setup("Dictionary",1046,G__TAttFill_Dictionary_9_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttFill_IsA_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttFill_ShowMembers_1_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttFill_Streamer_2_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttFill",772,G__TAttFill_TAttFill_3_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttFill),-1,0,1,1,1,0,"u 'TAttFill' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttFill",898,G__TAttFill_wATAttFill_4_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Reset",515,G__TAttAxis_Reset_2_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveAttributes",1462,G__TAttAxis_SaveAttributes_3_1,121,-1,-1,0,3,1,1,0,
"u 'ofstream' - 1 - out C - - 0 - name "
"C - - 0 - subname",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Dictionary",1046,G__TAttAxis_Dictionary_9_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttAxis_IsA_0_3,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttAxis_ShowMembers_1_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttAxis_Streamer_2_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttAxis",786,G__TAttAxis_TAttAxis_3_3,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),-1,0,1,1,1,0,"u 'TAttAxis' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttAxis",912,G__TAttAxis_wATAttAxis_4_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttFunc(void) {
   /* TAttFunc */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFunc));
   G__memfunc_setup("TAttFunc",777,G__TAttFunc_TAttFunc_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttFunc),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttFunc",777,G__TAttFunc_TAttFunc_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttFunc),-1,0,3,1,1,0,
"s - 'Color_t' 0 - fcolor s - 'Style_t' 0 - fstyle "
"s - 'Width_t' 0 - fwidth",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttFunc_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttFunc' - 1 - attfunc",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncColor",1195,G__TAttFunc_GetFuncColor_4_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncStyle",1213,G__TAttFunc_GetFuncStyle_5_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFuncWidth",1196,G__TAttFunc_GetFuncWidth_6_0,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TAttFunc_Reset_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFuncColor",1207,G__TAttFunc_SetFuncColor_8_0,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - fcolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFuncStyle",1225,G__TAttFunc_SetFuncStyle_9_0,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - fstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetFuncWidth",1208,G__TAttFunc_SetFuncWidth_0_1,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - fwidth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttFunc_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttFunc_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttFunc_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttFunc_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttFunc_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttFunc_Class_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttFunc_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttFunc_IsA_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttFunc_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttFunc_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttFunc",777,G__TAttFunc_TAttFunc_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttFunc),-1,0,1,1,1,0,"u 'TAttFunc' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttFunc",903,G__TAttFunc_wATAttFunc_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttHist(void) {
   /* TAttHist */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttHist));
   G__memfunc_setup("TAttHist",789,G__TAttHist_TAttHist_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttHist),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttHist",789,G__TAttHist_TAttHist_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttHist),-1,0,3,1,1,0,
"s - 'Color_t' 0 - lcolor s - 'Style_t' 0 - lstyle "
"s - 'Width_t' 0 - lwidth",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttHist_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttHist' - 1 - atthist",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistColor",1207,G__TAttHist_GetHistColor_4_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistStyle",1225,G__TAttHist_GetHistStyle_5_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetHistWidth",1208,G__TAttHist_GetHistWidth_6_0,115,-1,G__defined_typename("Width_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TAttHist_Print_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TAttHist_Reset_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHistColor",1219,G__TAttHist_SetHistColor_9_0,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - hcolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHistStyle",1237,G__TAttHist_SetHistStyle_0_1,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - hstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetHistWidth",1220,G__TAttHist_SetHistWidth_1_1,121,-1,-1,0,1,1,1,0,"s - 'Width_t' 0 - hwidth",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttHist_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttHist_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttHist_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttHist_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttHist_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttHist_Class_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttHist_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttHist_IsA_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttHist_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttHist_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttHist",789,G__TAttHist_TAttHist_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttHist),-1,0,1,1,1,0,"u 'TAttHist' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttHist",915,G__TAttHist_wATAttHist_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Reset",515,G__TAttLine_Reset_9_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveLineAttributes",1854,G__TAttLine_SaveLineAttributes_0_1,121,-1,-1,0,5,1,1,0,
"u 'ofstream' - 1 - out C - 'Text_t' 0 - name "
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
   G__memfunc_setup("Dictionary",1046,G__TAttLine_Dictionary_1_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttLine_IsA_2_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttLine_ShowMembers_3_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttLine_Streamer_4_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Reset",515,G__TAttMarker_Reset_8_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" toption",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveMarkerAttributes",2072,G__TAttMarker_SaveMarkerAttributes_9_0,121,-1,-1,0,5,1,1,0,
"u 'ofstream' - 1 - out C - 'Text_t' 0 - name "
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
   G__memfunc_setup("Dictionary",1046,G__TAttMarker_Dictionary_0_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttMarker_IsA_1_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttMarker_ShowMembers_2_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttMarker_Streamer_3_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttMarker",991,G__TAttMarker_TAttMarker_4_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),-1,0,1,1,1,0,"u 'TAttMarker' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttMarker",1117,G__TAttMarker_wATAttMarker_5_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAttStat(void) {
   /* TAttStat */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttStat));
   G__memfunc_setup("TAttStat",793,G__TAttStat_TAttStat_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttStat),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAttStat",793,G__TAttStat_TAttStat_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAttStat),-1,0,6,1,1,0,
"s - 'Color_t' 0 - color s - 'Style_t' 0 - style "
"f - 'Float_t' 0 - w f - 'Float_t' 0 - h "
"f - 'Float_t' 0 - x f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAttStat_Copy_3_0,121,-1,-1,0,1,1,1,0,"u 'TAttStat' - 1 - attstat",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatColor",1211,G__TAttStat_GetStatColor_4_0,115,-1,G__defined_typename("Color_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatStyle",1229,G__TAttStat_GetStatStyle_5_0,115,-1,G__defined_typename("Style_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatX",788,G__TAttStat_GetStatX_6_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatY",789,G__TAttStat_GetStatY_7_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatW",787,G__TAttStat_GetStatW_8_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetStatH",772,G__TAttStat_GetStatH_9_0,102,-1,G__defined_typename("Float_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Reset",515,G__TAttStat_Reset_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatColor",1223,G__TAttStat_SetStatColor_1_1,121,-1,-1,0,1,1,1,0,"s - 'Color_t' 0 - scolor",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatStyle",1241,G__TAttStat_SetStatStyle_2_1,121,-1,-1,0,1,1,1,0,"s - 'Style_t' 0 - sstyle",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatX",800,G__TAttStat_SetStatX_3_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatY",801,G__TAttStat_SetStatY_4_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatW",799,G__TAttStat_SetStatW_5_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - w",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetStatH",784,G__TAttStat_SetStatH_6_1,121,-1,-1,0,1,1,1,0,"f - 'Float_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAttStat_DeclFileName_7_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAttStat_DeclFileLine_8_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAttStat_ImplFileName_9_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAttStat_ImplFileLine_0_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAttStat_Class_Version_1_2,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAttStat_Class_2_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAttStat_Dictionary_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttStat_IsA_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttStat_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttStat_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttStat",793,G__TAttStat_TAttStat_7_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttStat),-1,0,1,1,1,0,"u 'TAttStat' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttStat",919,G__TAttStat_wATAttStat_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Reset",515,G__TAttText_Reset_0_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" toption",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SaveTextAttributes",1883,G__TAttText_SaveTextAttributes_1_1,121,-1,-1,0,7,1,1,0,
"u 'ofstream' - 1 - out C - 'Text_t' 0 - name "
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
   G__memfunc_setup("Dictionary",1046,G__TAttText_Dictionary_4_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAttText_IsA_5_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAttText_ShowMembers_6_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAttText_Streamer_7_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TAttText",802,G__TAttText_TAttText_8_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TAttText),-1,0,1,1,1,0,"u 'TAttText' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TAttText",928,G__TAttText_wATAttText_9_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTAxis(void) {
   /* TAxis */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TAxis));
   G__memfunc_setup("TAxis",489,G__TAxis_TAxis_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAxis),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAxis",489,G__TAxis_TAxis_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAxis),-1,0,3,1,1,0,
"i - 'Int_t' 0 - nbins f - 'Axis_t' 0 - xmin "
"f - 'Axis_t' 0 - xmax",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAxis",489,G__TAxis_TAxis_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAxis),-1,0,2,1,1,0,
"i - 'Int_t' 0 - nbins F - 'Axis_t' 0 - xbins",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TAxis",489,G__TAxis_TAxis_3_0,105,G__get_linked_tagnum(&G__G__Base1LN_TAxis),-1,0,1,1,1,0,"u 'TAxis' - 1 - axis",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Copy",411,G__TAxis_Copy_5_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - axis",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DistancetoPrimitive",1991,G__TAxis_DistancetoPrimitive_6_0,105,-1,G__defined_typename("Int_t"),0,2,1,1,0,
"i - 'Int_t' 0 - px i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Draw",398,G__TAxis_Draw_7_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DrawAxis",803,G__TAxis_DrawAxis_8_0,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ExecuteEvent",1237,G__TAxis_ExecuteEvent_9_0,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - event i - 'Int_t' 0 - px "
"i - 'Int_t' 0 - py",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("FindBin",666,G__TAxis_FindBin_0_1,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"f - 'Axis_t' 0 - x",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBinCenter",1178,G__TAxis_GetBinCenter_1_1,102,-1,G__defined_typename("Axis_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBinLabel",1049,G__TAxis_GetBinLabel_2_1,67,-1,G__defined_typename("Text_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBinLowEdge",1248,G__TAxis_GetBinLowEdge_3_1,102,-1,G__defined_typename("Axis_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetBinWidth",1081,G__TAxis_GetBinWidth_4_1,102,-1,G__defined_typename("Axis_t"),0,1,1,1,0,"i - 'Int_t' 0 - bin",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetCenter",897,G__TAxis_GetCenter_5_1,121,-1,-1,0,1,1,1,0,"F - 'Axis_t' 0 - center",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLabel",768,G__TAxis_GetLabel_6_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - label",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetLowEdge",967,G__TAxis_GetLowEdge_7_1,121,-1,-1,0,1,1,1,0,"F - 'Axis_t' 0 - edge",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNbins",794,G__TAxis_GetNbins_8_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTitle",802,G__TAxis_GetTitle_9_1,67,-1,G__defined_typename("Text_t"),0,0,1,1,9,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetXbins",804,G__TAxis_GetXbins_0_2,85,G__get_linked_tagnum(&G__G__Base1LN_TArrayF),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetFirst",808,G__TAxis_GetFirst_1_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetLast",692,G__TAxis_GetLast_2_2,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXmin",700,G__TAxis_GetXmin_3_2,102,-1,G__defined_typename("Axis_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetXmax",702,G__TAxis_GetXmax_4_2,102,-1,G__defined_typename("Axis_t"),0,0,1,1,8,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ls",223,G__TAxis_ls_5_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Paint",508,G__TAxis_Paint_6_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("PaintAxis",913,G__TAxis_PaintAxis_7_2,121,-1,-1,0,4,1,1,0,
"f - 'Coord_t' 0 - x1 f - 'Coord_t' 0 - y1 "
"f - 'Coord_t' 0 - x2 f - 'Coord_t' 0 - y2",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TAxis_Print_8_2,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Set",300,G__TAxis_Set_9_2,121,-1,-1,0,3,1,1,0,
"i - 'Int_t' 0 - nbins f - 'Axis_t' 0 - xmin "
"f - 'Axis_t' 0 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Set",300,G__TAxis_Set_0_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - nbins F - 'Axis_t' 0 - xbins",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetBinLabel",1061,G__TAxis_SetBinLabel_1_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - bin C - 'Text_t' 0 - label",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLabel",780,G__TAxis_SetLabel_2_3,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - label",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetLimits",926,G__TAxis_SetLimits_3_3,121,-1,-1,0,2,1,1,0,
"f - 'Axis_t' 0 - xmin f - 'Axis_t' 0 - xmax",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetRange",793,G__TAxis_SetRange_4_3,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 0 first i - 'Int_t' 0 0 last",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TAxis_DeclFileName_5_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TAxis_DeclFileLine_6_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TAxis_ImplFileName_7_3,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TAxis_ImplFileLine_8_3,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TAxis_Class_Version_9_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TAxis_Class_0_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TAxis_Dictionary_1_4,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TAxis_IsA_2_4,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TAxis_ShowMembers_3_4,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TAxis_Streamer_4_4,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TAxis",615,G__TAxis_wATAxis_5_4,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTEnv(void) {
   /* TEnv */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TEnv));
   G__memfunc_setup("Getvalue",829,(G__InterfaceMethod)NULL,67,-1,-1,0,1,1,4,1,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TEnv",381,G__TEnv_TEnv_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TEnv),-1,0,1,1,1,0,"C - - 0 \"\" name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetTable",776,G__TEnv_GetTable_3_0,85,G__get_linked_tagnum(&G__G__Base1LN_TOrdCollection),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Defined",687,G__TEnv_Defined_4_0,98,-1,G__defined_typename("Bool_t"),0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetValue",797,G__TEnv_GetValue_5_0,105,-1,-1,0,2,1,1,0,
"C - - 0 - name i - - 0 - dflt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetValue",797,G__TEnv_GetValue_6_0,67,-1,-1,0,2,1,1,1,
"C - - 0 - name C - - 0 - dflt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetValue",797,G__TEnv_GetValue_7_0,85,G__get_linked_tagnum(&G__G__Base1LN_TObject),-1,0,2,1,1,0,
"C - - 0 - name U 'TObject' - 0 - dflt",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_8_0,121,-1,-1,0,4,1,1,0,
"C - - 0 - name C - - 0 - value "
"i 'EEnvLevel' - 0 kEnvChange level C - - 0 0 type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_9_0,121,-1,-1,0,4,1,1,0,
"C - - 0 - name u 'TString' - 1 - value "
"i 'EEnvLevel' - 0 - level C - - 0 - type",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_0_1,121,-1,-1,0,2,1,1,0,
"C - - 0 - name i 'EEnvLevel' - 0 kEnvChange level",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_1_1,121,-1,-1,0,2,1,1,0,
"C - - 0 - name i - - 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("SetValue",809,G__TEnv_SetValue_2_1,121,-1,-1,0,2,1,1,0,
"C - - 0 - name d - - 0 - value",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Lookup",634,G__TEnv_Lookup_3_1,85,G__get_linked_tagnum(&G__G__Base1LN_TEnvRec),-1,0,1,1,1,0,"C - - 0 - n",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ReadFile",764,G__TEnv_ReadFile_4_1,121,-1,-1,0,2,1,1,0,
"C - - 0 - fname i 'EEnvLevel' - 0 - level",(char*)NULL,(void*)NULL,0);
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
   G__memfunc_setup("Dictionary",1046,G__TEnv_Dictionary_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TEnv_IsA_6_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TEnv_ShowMembers_7_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TEnv_Streamer_8_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TEnv",381,G__TEnv_TEnv_9_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TEnv),-1,0,1,1,1,0,"u 'TEnv' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TEnv",507,G__TEnv_wATEnv_0_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTFormula(void) {
   /* TFormula */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TFormula));
   G__memfunc_setup("TFormula",810,G__TFormula_TFormula_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFormula),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFormula",810,G__TFormula_TFormula_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFormula),-1,0,2,1,1,0,
"C - - 0 - name C - - 0 - formula",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TFormula",810,G__TFormula_TFormula_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TFormula),-1,0,1,1,1,0,"u 'TFormula' - 1 - formula",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Analyze",724,G__TFormula_Analyze_4_0,121,-1,-1,0,2,1,1,0,
"C - - 0 - schain i - 'Int_t' 1 - err",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Compile",713,G__TFormula_Compile_5_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 \"\" expression",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Copy",411,G__TFormula_Copy_6_0,121,-1,-1,0,1,1,1,0,"u 'TObject' - 1 - formula",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DefinedString",1318,G__TFormula_DefinedString_7_0,67,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DefinedValue",1196,G__TFormula_DefinedValue_8_0,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"i - 'Int_t' 0 - code",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DefinedVariable",1493,G__TFormula_DefinedVariable_9_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"u 'TString' - 1 - variable",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Eval",392,G__TFormula_Eval_0_1,100,-1,G__defined_typename("Double_t"),0,3,1,1,0,
"d - 'Double_t' 0 - x d - 'Double_t' 0 0 y "
"d - 'Double_t' 0 0 z",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("EvalPar",683,G__TFormula_EvalPar_1_1,100,-1,G__defined_typename("Double_t"),0,2,1,1,0,
"D - 'Double_t' 0 - x D - 'Double_t' 0 0 params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetNdim",680,G__TFormula_GetNdim_2_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNpar",689,G__TFormula_GetNpar_3_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetNumber",905,G__TFormula_GetNumber_4_1,105,-1,G__defined_typename("Int_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParameter",1217,G__TFormula_GetParameter_5_1,100,-1,G__defined_typename("Double_t"),0,1,1,1,0,"i - 'Int_t' 0 - ipar",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetParameters",1332,G__TFormula_GetParameters_6_1,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("GetParName",964,G__TFormula_GetParName_7_1,67,-1,-1,0,1,1,1,9,"i - 'Int_t' 0 - ipar",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Print",525,G__TFormula_Print_8_1,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 \"\" option","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetNumber",917,G__TFormula_SetNumber_9_1,121,-1,-1,0,1,1,1,0,"i - 'Int_t' 0 - number",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParameter",1229,G__TFormula_SetParameter_0_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ipar d - 'Double_t' 0 - parvalue",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParameters",1344,G__TFormula_SetParameters_1_2,121,-1,-1,0,1,1,1,0,"D - 'Double_t' 0 - params",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParameters",1344,G__TFormula_SetParameters_2_2,121,-1,-1,0,10,1,1,0,
"d - 'Double_t' 0 - p0 d - 'Double_t' 0 - p1 "
"d - 'Double_t' 0 0 p2 d - 'Double_t' 0 0 p3 "
"d - 'Double_t' 0 0 p4 d - 'Double_t' 0 0 p5 "
"d - 'Double_t' 0 0 p6 d - 'Double_t' 0 0 p7 "
"d - 'Double_t' 0 0 p8 d - 'Double_t' 0 0 p9","*MENU*",(void*)NULL,1);
   G__memfunc_setup("SetParName",976,G__TFormula_SetParName_3_2,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - ipar C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetParNames",1091,G__TFormula_SetParNames_4_2,121,-1,-1,0,10,1,1,0,
"C - - 0 \"p0\" name0 C - - 0 \"p1\" name1 "
"C - - 0 \"p2\" name2 C - - 0 \"p3\" name3 "
"C - - 0 \"p4\" name4 C - - 0 \"p5\" name5 "
"C - - 0 \"p6\" name6 C - - 0 \"p7\" name7 "
"C - - 0 \"p8\" name8 C - - 0 \"p9\" name9","*MENU*",(void*)NULL,1);
   G__memfunc_setup("Update",611,G__TFormula_Update_5_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TFormula_DeclFileName_6_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TFormula_DeclFileLine_7_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TFormula_ImplFileName_8_2,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TFormula_ImplFileLine_9_2,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TFormula_Class_Version_0_3,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TFormula_Class_1_3,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TFormula_Dictionary_2_3,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFormula_IsA_3_3,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFormula_ShowMembers_4_3,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFormula_Streamer_5_3,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic destructor
   G__memfunc_setup("~TFormula",936,G__TFormula_wATFormula_6_3,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTApplicationImp(void) {
   /* TApplicationImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp));
   G__memfunc_setup("TApplicationImp",1518,G__TApplicationImp_TApplicationImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TApplicationImp",1518,G__TApplicationImp_TApplicationImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,5,1,1,0,
"C - - 0 - appClassName I - - 0 - argc "
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
   G__memfunc_setup("DeclFileName",1145,G__TApplicationImp_DeclFileName_2_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TApplicationImp_DeclFileLine_3_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TApplicationImp_ImplFileName_4_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TApplicationImp_ImplFileLine_5_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TApplicationImp_Class_Version_6_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TApplicationImp_Class_7_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TApplicationImp_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TApplicationImp_IsA_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TApplicationImp_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TApplicationImp_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TApplicationImp",1518,G__TApplicationImp_TApplicationImp_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),-1,0,1,1,1,0,"u 'TApplicationImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TApplicationImp",1644,G__TApplicationImp_wATApplicationImp_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTBrowserImp(void) {
   /* TBrowserImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp));
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,1,1,1,0,"U 'TBrowser' - 0 0 b",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,4,1,1,0,
"U 'TBrowser' - 0 - b C - - 0 - title "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,6,1,1,0,
"U 'TBrowser' - 0 - b C - - 0 - title "
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Add",265,G__TBrowserImp_Add_4_0,121,-1,-1,0,2,1,1,0,
"U 'TObject' - 0 - - C - - 0 - -",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Dictionary",1046,G__TBrowserImp_Dictionary_8_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBrowserImp_IsA_9_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBrowserImp_ShowMembers_0_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBrowserImp_Streamer_1_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TBrowserImp",1118,G__TBrowserImp_TBrowserImp_2_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),-1,0,1,1,1,0,"u 'TBrowserImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBrowserImp",1244,G__TBrowserImp_wATBrowserImp_3_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTCanvasImp(void) {
   /* TCanvasImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp));
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,1,1,1,0,"U 'TCanvas' - 0 0 c",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,4,1,1,0,
"U 'TCanvas' - 0 - c C - - 0 - name "
"h - 'UInt_t' 0 - width h - 'UInt_t' 0 - height",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_2_0,105,G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,6,1,1,0,
"U 'TCanvas' - 0 - c C - - 0 - name "
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
"C - 'Text_t' 0 0 text i - 'Int_t' 0 0 partidx",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowPosition",1785,G__TCanvasImp_SetWindowPosition_0_1,121,-1,-1,0,2,1,1,0,
"i - 'Int_t' 0 - x i - 'Int_t' 0 - y",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowSize",1343,G__TCanvasImp_SetWindowSize_1_1,121,-1,-1,0,2,1,1,0,
"h - 'UInt_t' 0 - w h - 'UInt_t' 0 - h",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("SetWindowTitle",1446,G__TCanvasImp_SetWindowTitle_2_1,121,-1,-1,0,1,1,1,0,"C - 'Text_t' 0 - newTitle",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Dictionary",1046,G__TCanvasImp_Dictionary_3_2,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TCanvasImp_IsA_4_2,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TCanvasImp_ShowMembers_5_2,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TCanvasImp_Streamer_6_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TCanvasImp",982,G__TCanvasImp_TCanvasImp_7_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),-1,0,1,1,1,0,"u 'TCanvasImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TCanvasImp",1108,G__TCanvasImp_wATCanvasImp_8_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Dictionary",1046,G__TContextMenuImp_Dictionary_1_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TContextMenuImp_IsA_2_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TContextMenuImp_ShowMembers_3_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TContextMenuImp_Streamer_4_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TContextMenuImp",1524,G__TContextMenuImp_TContextMenuImp_5_1,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),-1,0,1,1,1,0,"u 'TContextMenuImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TContextMenuImp",1650,G__TContextMenuImp_wATContextMenuImp_6_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__tag_memfunc_reset();
}

static void G__setup_memfuncTControlBarImp(void) {
   /* TControlBarImp */
   G__tag_memfunc_setup(G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp));
   G__memfunc_setup("TControlBarImp",1392,G__TControlBarImp_TControlBarImp_0_0,105,G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,2,1,1,0,
"U 'TControlBar' - 0 - c C - - 0 \"\" -",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("TControlBarImp",1392,G__TControlBarImp_TControlBarImp_1_0,105,G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,4,1,1,0,
"U 'TControlBar' - 0 - c C - - 0 - - "
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
   G__memfunc_setup("Dictionary",1046,G__TControlBarImp_Dictionary_3_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TControlBarImp_IsA_4_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TControlBarImp_ShowMembers_5_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TControlBarImp_Streamer_6_1,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TControlBarImp",1392,G__TControlBarImp_TControlBarImp_7_1,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),-1,0,1,1,1,0,"u 'TControlBarImp' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TControlBarImp",1518,G__TControlBarImp_wATControlBarImp_8_1,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("Dictionary",1046,G__TFileHandler_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TFileHandler_IsA_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TFileHandler_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TFileHandler_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
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
   G__memfunc_setup("GetBench",768,G__TBenchmark_GetBench_2_0,105,-1,G__defined_typename("Int_t"),0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetCpuTime",983,G__TBenchmark_GetCpuTime_3_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("GetRealTime",1075,G__TBenchmark_GetRealTime_4_0,102,-1,G__defined_typename("Float_t"),0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Print",525,G__TBenchmark_Print_5_0,121,-1,-1,0,1,1,1,0,"C - 'Option_t' 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Reset",515,G__TBenchmark_Reset_6_0,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Show",417,G__TBenchmark_Show_7_0,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Start",526,G__TBenchmark_Start_8_0,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Stop",422,G__TBenchmark_Stop_9_0,121,-1,-1,0,1,1,1,0,"C - - 0 - name",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Summary",750,G__TBenchmark_Summary_0_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("DeclFileName",1145,G__TBenchmark_DeclFileName_1_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("DeclFileLine",1152,G__TBenchmark_DeclFileLine_2_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileName",1171,G__TBenchmark_ImplFileName_3_1,67,-1,-1,0,0,1,1,1,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("ImplFileLine",1178,G__TBenchmark_ImplFileLine_4_1,105,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class_Version",1339,G__TBenchmark_Class_Version_5_1,115,-1,G__defined_typename("Version_t"),0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Class",502,G__TBenchmark_Class_6_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("Dictionary",1046,G__TBenchmark_Dictionary_7_1,121,-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,0);
   G__memfunc_setup("IsA",253,G__TBenchmark_IsA_8_1,85,G__get_linked_tagnum(&G__G__Base1LN_TClass),-1,0,0,1,1,8,"",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("ShowMembers",1132,G__TBenchmark_ShowMembers_9_1,121,-1,-1,0,2,1,1,0,
"u 'TMemberInspector' - 1 - insp C - - 0 - parent",(char*)NULL,(void*)NULL,1);
   G__memfunc_setup("Streamer",835,G__TBenchmark_Streamer_0_2,121,-1,-1,0,1,1,1,0,"u 'TBuffer' - 1 - b",(char*)NULL,(void*)NULL,1);
   // automatic copy constructor
   G__memfunc_setup("TBenchmark",991,G__TBenchmark_TBenchmark_1_2,(int)('i'),G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),-1,0,1,1,1,0,"u 'TBenchmark' - 1 - -",(char*)NULL,(void*)NULL,0);
   // automatic destructor
   G__memfunc_setup("~TBenchmark",1117,G__TBenchmark_wATBenchmark_2_2,(int)('y'),-1,-1,0,0,1,1,0,"",(char*)NULL,(void*)NULL,1);
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
   G__memvar_setup((void*)(&gDebug),105,0,0,-1,G__defined_typename("Int_t"),-1,1,"gDebug=",0,(char*)NULL);
   G__memvar_setup((void*)(&gDirectory),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TDirectory),-1,-1,1,"gDirectory=",0,(char*)NULL);
   G__memvar_setup((void*)(&gROOT),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TROOT),-1,-1,1,"gROOT=",0,(char*)NULL);
   G__memvar_setup((void*)(&gEnv),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TEnv),-1,-1,1,"gEnv=",0,(char*)NULL);
   G__memvar_setup((void*)(&gFile),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TFile),-1,-1,1,"gFile=",0,(char*)NULL);
   G__memvar_setup((void*)(&gSystem),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TSystem),-1,-1,1,"gSystem=",0,(char*)NULL);
   G__memvar_setup((void*)(&gRandom),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TRandom),-1,-1,1,"gRandom=",0,(char*)NULL);
   G__memvar_setup((void*)(&gBenchmark),85,0,0,G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),-1,-1,1,"gBenchmark=",0,(char*)NULL);

   G__resetglobalenv();
}

/*********************************************************
* Global function information setup for each class
*********************************************************/
extern "C" void G__cpp_setup_funcG__Base1() {
   G__lastifuncposition();

   G__memfunc_setup("operator+",919,G___operatorpL_5_6,117,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,0,2,1,1,0,
"u 'TString' - 1 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator+",919,G___operatorpL_6_6,117,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,0,2,1,1,0,
"u 'TString' - 1 - s C - - 0 - cs",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator+",919,G___operatorpL_7_6,117,G__get_linked_tagnum(&G__G__Base1LN_TString),-1,0,2,1,1,0,
"C - - 0 - cs u 'TString' - 1 - s",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_8_6,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TString' - 1 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_9_6,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TString' - 1 - s1 C - - 0 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator>>",1000,G___operatorgRgR_1_7,117,G__get_linked_tagnum(&G__G__Base1LN_istream),-1,1,2,1,1,0,
"u 'istream' - 1 - str u 'TString' - 1 - s",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator<<",996,G___operatorlElE_2_7,117,G__get_linked_tagnum(&G__G__Base1LN_ostream),-1,1,2,1,1,0,
"u 'ostream' - 1 - str u 'TString' - 1 - s",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("Strip",530,G___Strip_9_7,67,-1,-1,0,1,1,1,0,"C - - 0 - str",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("StrDup",610,G___StrDup_0_8,67,-1,-1,0,1,1,1,0,"C - - 0 - str",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G___operatornOeQ_4_8,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"u 'TString' - 1 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator==",998,G___operatoreQeQ_4_9,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - s1 u 'TString' - 1 - s2",(char*)NULL
,(void*)NULL,0);
   G__memfunc_setup("operator!=",970,G___operatornOeQ_5_9,98,-1,G__defined_typename("Bool_t"),0,2,1,1,0,
"C - - 0 - s1 u 'TString' - 1 - s2",(char*)NULL
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
G__linked_taginfo G__G__Base1LN_TTimer = { "TTimer" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TObject = { "TObject" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TObjectcLcLdA = { "TObject::$" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TMap = { "TMap" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBuffercLcLEMode = { "TBuffer::EMode" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_istream = { "istream" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_ostream = { "ostream" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TString = { "TString" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TNamed = { "TNamed" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TDatime = { "TDatime" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TKey = { "TKey" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFile = { "TFile" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TDirectory = { "TDirectory" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TApplication = { "TApplication" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TROOT = { "TROOT" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TArrayF = { "TArrayF" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttFill = { "TAttFill" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttAxis = { "TAttAxis" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttFunc = { "TAttFunc" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttHist = { "TAttHist" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttLine = { "TAttLine" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttMarker = { "TAttMarker" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttStat = { "TAttStat" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAttText = { "TAttText" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TAxis = { "TAxis" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TOrdCollection = { "TOrdCollection" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TEnv = { "TEnv" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TEnvRec = { "TEnvRec" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFilecLcLERelativeTo = { "TFile::ERelativeTo" , 101 , -1 };
G__linked_taginfo G__G__Base1LN_TFormula = { "TFormula" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TApplicationImp = { "TApplicationImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSignalHandler = { "TSignalHandler" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBrowserImp = { "TBrowserImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TCanvas = { "TCanvas" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TCanvasImp = { "TCanvasImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TContextMenu = { "TContextMenu" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TContextMenuImp = { "TContextMenuImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TControlBar = { "TControlBar" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TControlBarImp = { "TControlBarImp" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSystem = { "TSystem" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TSysEvtHandler = { "TSysEvtHandler" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TFileHandler = { "TFileHandler" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TStopwatch = { "TStopwatch" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TRandom = { "TRandom" , 99 , -1 };
G__linked_taginfo G__G__Base1LN_TBenchmark = { "TBenchmark" , 99 , -1 };

extern "C" void G__cpp_setup_tagtableG__Base1() {

   /* Setting up class,struct,union tag entry */
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBuffer),sizeof(TBuffer),-1,0,"Buffer base class used for serializing objects",G__setup_memvarTBuffer,G__setup_memfuncTBuffer);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TDatime),sizeof(TDatime),-1,0,"Date and time 950130 124559",G__setup_memvarTDatime,G__setup_memfuncTDatime);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TFile),sizeof(TFile),-1,0,"ROOT file",G__setup_memvarTFile,G__setup_memfuncTFile);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TDirectory),sizeof(TDirectory),-1,0,"Describe directory structure in memory",G__setup_memvarTDirectory,G__setup_memfuncTDirectory);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplication),sizeof(TApplication),-1,0,"GUI application singleton",G__setup_memvarTApplication,G__setup_memfuncTApplication);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFill),sizeof(TAttFill),-1,0,"Fill area attributes",G__setup_memvarTAttFill,G__setup_memfuncTAttFill);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttAxis),sizeof(TAttAxis),-1,0,"Axis attributes",G__setup_memvarTAttAxis,G__setup_memfuncTAttAxis);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttFunc),sizeof(TAttFunc),-1,0,"Associated function attributes",G__setup_memvarTAttFunc,G__setup_memfuncTAttFunc);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttHist),sizeof(TAttHist),-1,0,"Histogram attributes",G__setup_memvarTAttHist,G__setup_memfuncTAttHist);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttLine),sizeof(TAttLine),-1,0,"Line attributes",G__setup_memvarTAttLine,G__setup_memfuncTAttLine);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttMarker),sizeof(TAttMarker),-1,0,"Marker attributes",G__setup_memvarTAttMarker,G__setup_memfuncTAttMarker);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttStat),sizeof(TAttStat),-1,0,"Histogram statistics attributes",G__setup_memvarTAttStat,G__setup_memfuncTAttStat);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAttText),sizeof(TAttText),-1,0,"Text attributes",G__setup_memvarTAttText,G__setup_memfuncTAttText);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TAxis),sizeof(TAxis),-1,0,"Axis class",G__setup_memvarTAxis,G__setup_memfuncTAxis);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TEnv),sizeof(TEnv),-1,0,"Handle ROOT configuration resources",G__setup_memvarTEnv,G__setup_memfuncTEnv);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TFormula),sizeof(TFormula),-1,0,"The formula base class  f(x,y,z,par)",G__setup_memvarTFormula,G__setup_memfuncTFormula);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TApplicationImp),sizeof(TApplicationImp),-1,0,"ABC describing application implementation protocol",G__setup_memvarTApplicationImp,G__setup_memfuncTApplicationImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBrowserImp),sizeof(TBrowserImp),-1,0,"ABC describing browser implementation protocol",G__setup_memvarTBrowserImp,G__setup_memfuncTBrowserImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TCanvasImp),sizeof(TCanvasImp),-1,0,"ABC describing main window protocol",G__setup_memvarTCanvasImp,G__setup_memfuncTCanvasImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TContextMenuImp),sizeof(TContextMenuImp),-1,0,"Context sensitive popup menu implementation",G__setup_memvarTContextMenuImp,G__setup_memfuncTContextMenuImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TControlBarImp),sizeof(TControlBarImp),-1,0,"GUI independent controlbar abc",G__setup_memvarTControlBarImp,G__setup_memfuncTControlBarImp);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TFileHandler),sizeof(TFileHandler),-1,0,"Handles events on file descriptors",G__setup_memvarTFileHandler,G__setup_memfuncTFileHandler);
   G__tagtable_setup(G__get_linked_tagnum(&G__G__Base1LN_TBenchmark),sizeof(TBenchmark),-1,0,"ROOT utility to help benchmarking applications",G__setup_memvarTBenchmark,G__setup_memfuncTBenchmark);
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

//
// File generated by /user/brun/root/bin/rootcint at Sun Dec 13 10:55:16 1998.
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
   R__insp.Inspect(R__cl, R__parent, "fBufSize", &fBufSize);
   R__insp.Inspect(R__cl, R__parent, "*fBuffer", &fBuffer);
   R__insp.Inspect(R__cl, R__parent, "*fBufCur", &fBufCur);
   R__insp.Inspect(R__cl, R__parent, "*fBufMax", &fBufMax);
   R__insp.Inspect(R__cl, R__parent, "fMapCount", &fMapCount);
   R__insp.Inspect(R__cl, R__parent, "fArraySize", &fArraySize);
   R__insp.Inspect(R__cl, R__parent, "fMapSize", &fMapSize);
   R__insp.Inspect(R__cl, R__parent, "*fReadArray", &fReadArray);
   R__insp.Inspect(R__cl, R__parent, "*fWriteMap", &fWriteMap);
   TObject::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TDatime *&obj)
{
   // Read a pointer to an object of class TDatime.

   ::Error("TDatime::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TFile *&obj)
{
   // Read a pointer to an object of class TFile.

   obj = (TFile *) buf.ReadObject(TFile::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TDirectory *&obj)
{
   // Read a pointer to an object of class TDirectory.

   obj = (TDirectory *) buf.ReadObject(TDirectory::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TApplication *&obj)
{
   // Read a pointer to an object of class TApplication.

   obj = (TApplication *) buf.ReadObject(TApplication::Class());
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
TBuffer &operator>>(TBuffer &buf, TAttFill *&obj)
{
   // Read a pointer to an object of class TAttFill.

   ::Error("TAttFill::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TAttAxis *&obj)
{
   // Read a pointer to an object of class TAttAxis.

   ::Error("TAttAxis::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TAttFunc *&obj)
{
   // Read a pointer to an object of class TAttFunc.

   ::Error("TAttFunc::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TAttFunc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttFunc.

   ::Error("TAttFunc::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TAttFunc::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttFunc.

   TClass *R__cl  = TAttFunc::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fFuncColor", &fFuncColor);
   R__insp.Inspect(R__cl, R__parent, "fFuncStyle", &fFuncStyle);
   R__insp.Inspect(R__cl, R__parent, "fFuncWidth", &fFuncWidth);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttHist *&obj)
{
   // Read a pointer to an object of class TAttHist.

   ::Error("TAttHist::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TAttHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttHist.

   ::Error("TAttHist::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TAttHist::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttHist.

   TClass *R__cl  = TAttHist::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fHistColor", &fHistColor);
   R__insp.Inspect(R__cl, R__parent, "fHistStyle", &fHistStyle);
   R__insp.Inspect(R__cl, R__parent, "fHistWidth", &fHistWidth);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttLine *&obj)
{
   // Read a pointer to an object of class TAttLine.

   ::Error("TAttLine::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TAttMarker *&obj)
{
   // Read a pointer to an object of class TAttMarker.

   ::Error("TAttMarker::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TAttStat *&obj)
{
   // Read a pointer to an object of class TAttStat.

   ::Error("TAttStat::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
}

//______________________________________________________________________________
void TAttStat::Streamer(TBuffer &R__b)
{
   // Stream an object of class TAttStat.

   ::Error("TAttStat::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

//______________________________________________________________________________
void TAttStat::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAttStat.

   TClass *R__cl  = TAttStat::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fStatColor", &fStatColor);
   R__insp.Inspect(R__cl, R__parent, "fStatStyle", &fStatStyle);
   R__insp.Inspect(R__cl, R__parent, "fStatX", &fStatX);
   R__insp.Inspect(R__cl, R__parent, "fStatY", &fStatY);
   R__insp.Inspect(R__cl, R__parent, "fStatW", &fStatW);
   R__insp.Inspect(R__cl, R__parent, "fStatH", &fStatH);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TAttText *&obj)
{
   // Read a pointer to an object of class TAttText.

   ::Error("TAttText::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TAxis *&obj)
{
   // Read a pointer to an object of class TAxis.

   obj = (TAxis *) buf.ReadObject(TAxis::Class());
   return buf;
}

//______________________________________________________________________________
void TAxis::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TAxis.

   TClass *R__cl  = TAxis::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNbins", &fNbins);
   R__insp.Inspect(R__cl, R__parent, "fXmin", &fXmin);
   R__insp.Inspect(R__cl, R__parent, "fXmax", &fXmax);
   fXbins.ShowMembers(R__insp, strcat(R__parent,"fXbins.")); R__parent[R__ncp] = 0;
   R__insp.Inspect(R__cl, R__parent, "*fXlabels", &fXlabels);
   R__insp.Inspect(R__cl, R__parent, "fFirst", &fFirst);
   R__insp.Inspect(R__cl, R__parent, "fLast", &fLast);
   TNamed::ShowMembers(R__insp, R__parent);
   TAttAxis::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TEnv *&obj)
{
   // Read a pointer to an object of class TEnv.

   obj = (TEnv *) buf.ReadObject(TEnv::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TFormula *&obj)
{
   // Read a pointer to an object of class TFormula.

   obj = (TFormula *) buf.ReadObject(TFormula::Class());
   return buf;
}

//______________________________________________________________________________
void TFormula::ShowMembers(TMemberInspector &R__insp, char *R__parent)
{
   // Inspect the data members of an object of class TFormula.

   TClass *R__cl  = TFormula::IsA();
   Int_t   R__ncp = strlen(R__parent);
   if (R__ncp || R__cl || R__insp.IsA()) { }
   R__insp.Inspect(R__cl, R__parent, "fNdim", &fNdim);
   R__insp.Inspect(R__cl, R__parent, "fNpar", &fNpar);
   R__insp.Inspect(R__cl, R__parent, "fNoper", &fNoper);
   R__insp.Inspect(R__cl, R__parent, "fNconst", &fNconst);
   R__insp.Inspect(R__cl, R__parent, "fNumber", &fNumber);
   R__insp.Inspect(R__cl, R__parent, "fNval", &fNval);
   R__insp.Inspect(R__cl, R__parent, "fNstring", &fNstring);
   R__insp.Inspect(R__cl, R__parent, "*fExpr", &fExpr);
   R__insp.Inspect(R__cl, R__parent, "*fOper", &fOper);
   R__insp.Inspect(R__cl, R__parent, "*fConst", &fConst);
   R__insp.Inspect(R__cl, R__parent, "*fParams", &fParams);
   R__insp.Inspect(R__cl, R__parent, "*fNames", &fNames);
   TNamed::ShowMembers(R__insp, R__parent);
}

//______________________________________________________________________________
TBuffer &operator>>(TBuffer &buf, TApplicationImp *&obj)
{
   // Read a pointer to an object of class TApplicationImp.

   ::Error("TApplicationImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TBrowserImp *&obj)
{
   // Read a pointer to an object of class TBrowserImp.

   ::Error("TBrowserImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TCanvasImp *&obj)
{
   // Read a pointer to an object of class TCanvasImp.

   ::Error("TCanvasImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TContextMenuImp *&obj)
{
   // Read a pointer to an object of class TContextMenuImp.

   ::Error("TContextMenuImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TControlBarImp *&obj)
{
   // Read a pointer to an object of class TControlBarImp.

   ::Error("TControlBarImp::operator>>", "objects not inheriting from TObject need a specialized operator>> function"); if (obj) { }
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TFileHandler *&obj)
{
   // Read a pointer to an object of class TFileHandler.

   obj = (TFileHandler *) buf.ReadObject(TFileHandler::Class());
   return buf;
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
TBuffer &operator>>(TBuffer &buf, TBenchmark *&obj)
{
   // Read a pointer to an object of class TBenchmark.

   obj = (TBenchmark *) buf.ReadObject(TBenchmark::Class());
   return buf;
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

